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

# Get sdks in provided dir
IFS=$'\n'
sdks=($(find "$sdk_dir" -type d -name \*.sdk | sort -uV))
unset IFS

# Get unique prefixes
prefixes=()
for i in "${sdks[@]}"; do
	name="$(basename "$i")"
	prefix="${name%%[0-9]*}"

	# Check if prefixes array contains the prefix or not
	if ! [[ ${prefixes[*]} =~ $prefix ]]; then
		prefixes+=("$prefix")
	fi
done

# Get sdks for each prefix
for prefix in "${prefixes[@]}"; do
	relevant_sdks=()
	for sdk in "${sdks[@]}"; do
		if [[ $sdk =~ $prefix ]]; then
			relevant_sdks+=("$sdk")
		fi
	done

	# Latest sdk (e.g., iPhoneOS14.5.sdk)
	latest=${relevant_sdks[${#relevant_sdks[@]}-1]}

	# Generic platform sdk (e.g., iPhoneOS.sdk)
	platform="$sdk_dir/$prefix.sdk"
	ln -sfn "$latest" "$platform"

	info "The '$platform' symlink has been created and it points to '$latest'."
done
