#!/usr/bin/env bash

usage() {
	echo "Usage: $0 -D <dir_with_sdks>"
}

info() {
	echo "$0: $1"
}

# Accept 'D' flag
while getopts ":D:" flag; do
	case "$flag" in
		# Assign the arg associated with -D to $sdk_dir
		D)	sdk_dir="$OPTARG" ;;
		*)	usage
			exit 1
			;;
	esac
done

# No args passed
if [[ $OPTIND -eq 1 ]]; then
	usage
	exit 1
fi

# Get all the sdks in the provided dir and its sub dirs
sdks=$(find "$sdk_dir" -name \*.sdk)
readarray -t sdks_array <<< "$sdks" # supports paths w/ spaces
sorted_sdks_array=($(printf '%s\n' "${sdks_array[@]}" | sort -uV))

# Get unique prefixes
prefixes_array=()
for i in "${sorted_sdks_array[@]}"; do
	name=$(basename $i)
	prefix="${name%%[0-9]*}"

	# If we've made PLATFORM.sdk already, ignore
	if [[ $prefix == $name ]]; then
		continue
	fi

	# Check if prefixes array contains the prefix or not
	if ! [[ ${prefixes_array[*]} =~ $prefix ]]; then
		prefixes_array+=("$prefix")
	fi
done

# Get sdks for each prefix
for prefix in "${prefixes_array[@]}"; do
	files_array=()
	for file in "${sorted_sdks_array[@]}"; do
		if [[ $file =~ $prefix ]]; then
			files_array+=("$file")
		fi
	done

	# Latest sdk (e.g., iPhoneOS14.5.sdk)
	latest=${files_array[${#files_array[@]}-1]}

	# Generic platform sdk (e.g., iPhoneOS.sdk)
	platform="$sdk_dir/$prefix.sdk"

	# Check that latest sdk is a symlink and that PLATFORM.sdk exists
	if [[ -L $latest && -d $platform ]]; then
		# Check to see if latest is a symlink to PLATFORM.sdk
		link_path="$(readlink $latest)"
		if [[ $link_path == $platform ]]; then
			info "Nothing to do for $prefix sdks."
		else
			info "Welp, $latest doesn't link to $platform ... not sure how we got here honestly."
			exit 2
		fi
	# Check for broken symlink
	elif [[ -L $latest && ! -d $platform ]]; then
		info "We've got a broken symlink. $latest links to $link_path which DNE!"
		info "Download $latest and then rename it to $platform to fix the link."
		exit 3
	# Check for newer sdk than currently present in PLATFORM.sdk
	elif [[ ! -L $latest && -d $platform ]]; then
		# Get symlinks for prefix (there should just be 1)
		symlinks=$(find "$sdk_dir" -type l -name "$prefix*.sdk")

		# If none, then something is wrong
		if [[ -z $symlinks ]]; then
			info "Somehow the version-specific symlink to $prefix.sdk is missing."
			info "To recreate it, determine the sdk version present in $prefix.sdk and then run 'ln -sn $platform $sdk_dir/$prefix<version #>.sdk'."
			exit 4
		fi

		readarray -t symlinks_array <<< "$symlinks"
		sorted_symlinks_array=($(printf '%s\n' "${symlinks_array[@]}" | sort -uV))
		latest_symlink=$(basename ${sorted_symlinks_array[${#sorted_symlinks_array[@]}-1]})

		info "Found a newer $prefix sdk than currently present in $platform. Updating it now..."

		# Remove symlink, rename PLATFORM.sdk to its specific version, and then
		# make new PLATFORM.sdk from latest and create version-specific symlink
		rm "$latest_symlink"
		mv "$platform" "$latest_symlink"
		mv "$latest" "$platform"
		ln -sn "$platform" "$latest"

		info "The $latest symlink has been made, $platform has been updated, and $sdk_dir/$latest_symlink has been repopulated!"
	# We've got a first-timer
	else
		mv "$latest" "$platform"
		ln -sn "$platform" "$latest"

		info "The $latest symlink has been created and it points to $platform."
	fi
done
