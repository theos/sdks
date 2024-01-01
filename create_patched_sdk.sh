#!/usr/bin/env bash

print_usage() {
cat << EOF
Usage: $(basename $0) {use_simulator} {sdks_output_path} {no_overwrite} {no_warnings} {tbd_tool} {xcode_installation_path} {sdk_platform}
Options:
  - use_simulator (bool)
	Dump binaries from simulator runtime as opposed to DeviceSupport files
  - sdks_output_path (str)
 	Directory to install SDK to (default: '\$THEOS/sdks')
  - no_overwrite (bool)
	Disable overwrite of existing dumped binaries (default: 0)
  - no_warnings (bool)
	Disable 'tbd' warnings (default: 0)
  - tbd_tool (str)
	Path to 'tbd' tool from inoahdev (default: 'tbd')
  - xcode_installation_path (str)
	Path to target Xcode version (default: currently selected Xcode.app)
  - sdk_platform (str)
	Target platform for patched SDK (default: 'iOS'; alternatively 'tvOS')
Note: {} options are optional to provide, and can be ignored with a '-'
EOF
}

ignored() {
	if [[ $1 == "-" ]]; then
		return 0
	else
		return 1
	fi
}

if [[ $# -lt 1 ]] || [[ $1 == "-h" ]] || [[ $1 == "--help" ]]; then
	print_usage
	exit 0
fi

sdk_platform="$7"
if [[ $# -lt 7 ]] || ignored $sdk_platform; then
	sdk_platform="iOS"
fi

sdks_output_path="$2"
if [[ $# -lt 2 ]] || ignored $sdks_output_path; then
	if [[ -z $THEOS ]]; then
		printf 'No Theos installation found. Please either install Theos or provide a path to an sdks directory\n\n'
		print_usage
		exit 1
	fi
	sdks_output_path="$THEOS/sdks"
fi

if ! [[ -d $sdks_output_path ]]; then
	mkdir -p "$sdks_output_path"
fi

# tbd info
version="v3"
if [[ $sdk_platform == iOS ]]; then
	archs_option=("--replace-archs" armv7 armv7s arm64 arm64e)
	tbd_options=("--ignore-clients" "--ignore-undefineds" "--allow-private-objc-symbols" "--ignore-missing-exports")
	write_options=("--preserve-subdirs" "--replace-path-extension")
else
	archs_option=("--replace-archs" arm64)
	tbd_options=("--allow-private-objc-symbols" "--ignore-missing-exports")
	#write_options=("--maintain-directories" "--replace-path-extension")
	write_options=("--preserve-subdirs")
fi

no_overwrite="--no-overwrite"
if [[ $# -gt 2 ]] && ! ignored $3; then
	no_overwrite=""
fi

no_warnings=""
tbd_tool="$5"
if [[ $# -gt 3 ]] && ! ignored $4; then
	no_warnings="--ignore-warnings"
fi

if [[ $# -lt 5 ]] || ignored $tbd_tool; then
	tbd_tool="tbd"
	if [[ -x $(which $tbd_tool) ]]; then
		printf 'No installation of tbd found. Please install the latest release of tbd from here; https://github.com/inoahdev/tbd/releases or provide a path to a tbd installation\n\n'
		print_usage
		exit 1
	fi
else
	if [[ -x $(which $tbd_tool) ]]; then
		echo "Provided tbd-tool ($tbd_tool) doesn't exist or isn't executable"
		exit 1
	fi
fi

use_simulator="$1"
if [[ $# -lt 1 ]]; then
	use_simulator="-"
fi

xcode_developer_path="$6/Contents/Developer"
if [[ $# -lt 6 ]] || [[ -z $6 ]] || ignored $6; then
	xcode_developer_path=$(xcode-select -p)
fi

if [[ -z $xcode_developer_path ]]; then
	printf 'No Xcode installation found. Please either install Xcode or provide a path to an Xcode installation\n\n'
	print_usage
	exit 1
fi

if [[ $sdk_platform == iOS ]]; then
	xcode_sim_runtime_path="$xcode_developer_path/Platforms/iPhoneOS.platform/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS.simruntime/Contents/Resources/RuntimeRoot"
	if ! [[ -d $xcode_sim_runtime_path ]]; then
		xcode_sim_runtime_path="$xcode_developer_path/Platforms/iPhoneOS.platform/Developer/Library/CoreSimulator/Profiles/Runtimes/iOS.simruntime/Contents/Resources/RuntimeRoot"
	fi
	xcode_plat_sdks_path="$xcode_developer_path/Platforms/iPhoneOS.platform/Developer/SDKs"
	xcode_default_sdk_path="$xcode_plat_sdks_path/iPhoneOS.sdk"
else
	xcode_sim_runtime_path="$xcode_developer_path/Platforms/AppleTVOS.platform/Library/Developer/CoreSimulator/Profiles/Runtimes/tvOS.simruntime/Contents/Resources/RuntimeRoot"
	if ! [[ -d $xcode_sim_runtime_path ]]; then
		xcode_sim_runtime_path="$xcode_developer_path/Platforms/AppleTVOS.platform/Developer/Library/CoreSimulator/Profiles/Runtimes/tvOS.simruntime/Contents/Resources/RuntimeRoot"
	fi
	xcode_plat_sdks_path="$xcode_developer_path/Platforms/AppleTVOS.platform/Developer/SDKs"
	xcode_default_sdk_path="$xcode_plat_sdks_path/AppleTVOS.sdk"
fi

preferred_xcode_sdk_path=""
for xcode_sdk_path in "$xcode_plat_sdks_path/"*; do
	xcode_sdk_real=$(readlink -f "$xcode_sdk_path")

	if [[ $xcode_sdk_real == $xcode_default_sdk_path ]]; then
		preferred_xcode_sdk_path=$xcode_sdk_path
	fi
done

if [[ -z $preferred_xcode_sdk_path ]]; then
	echo 'Failed to find sdk for simulator runtime'
	exit 1
fi

preferred_xcode_sdk_name=$(basename $preferred_xcode_sdk_path)

if [[ $sdk_platform == iOS ]]; then
	xcode_sdk_version=${preferred_xcode_sdk_name:8} # Remove 'iPhoneOS' in front of sdk name
else
	xcode_sdk_version=${preferred_xcode_sdk_name:9} # Remove 'AppleTVOS' in front of sdk name
fi
xcode_sdk_version=${xcode_sdk_version%????} # Remove '.sdk' at back of sdk name

sdks_output_path_single_sdk_path=""

device_support_dir="$HOME/Library/Developer/Xcode/$sdk_platform DeviceSupport/"
if [[ -d $device_support_dir ]] && ignored $use_simulator; then
	for symbols_path in "$device_support_dir"*; do
		if ! [[ -d $symbols_path ]]; then
			continue
		fi

		version="$(basename "$symbols_path" | grep -o "\d\+\(\.\d\+\)\{1,2\}")"
		if [[ $sdk_platform == ios ]]; then
			sdk_name=$(printf "iPhoneOS%s.sdk" $version)
		else
			sdk_name=$(printf "AppleTVOS%s.sdk" $version)
		fi

		symbols_actual_path="$symbols_path/Symbols/System"
		if ! [[ -d $symbols_actual_path ]]; then
			echo "Symbols for $sdk_platform $version don't exist"
			continue
		fi

		sdks_output_path_single_sdk_path="$sdks_output_path/$sdk_name"
		if [[ -d $sdks_output_path_single_sdk_path ]]; then
			echo "SDK for $sdk_platform $version already exists"
			continue
		fi

		echo "Creating SDK for $sdk_platform $version ..."

		if [[ $xcode_sdk_version != $version ]]; then
			echo "Warning: $sdk_platform $xcode_sdk_version Xcode SDK will be used as a base for sdk for $sdk_platform $version"
		fi

		mkdir -p "$sdks_output_path_single_sdk_path"
		cp -R "$xcode_default_sdk_path/"* "$sdks_output_path_single_sdk_path"

		"$tbd_tool" \
			-p $no_warnings "${tbd_options[@]}" "${archs_option[@]}" -v $version -r all "$symbols_actual_path" \
			-o "${write_options[@]}" $no_overwrite "$sdks_output_path_single_sdk_path/System"

		if [[ $? -ne 0 ]]; then
			echo "Failed to create tbds from Symbols directory for $sdk_platform $version"
		fi
	done
else
	if ignored $use_simulator; then
		echo 'No DeviceSupport binaries found, falling back to dumping from simulator runtime binaries'
	fi

	sdks_output_path_single_sdk_path="$sdks_output_path/$preferred_xcode_sdk_name"
	if [[ -d $sdks_output_path_single_sdk_path ]]; then
		echo "SDK for $sdk_platform $xcode_sdk_version already exists"
		exit 1
	fi

	echo "Creating sdk for $sdk_platform $xcode_sdk_version ..."

	mkdir -p "$sdks_output_path_single_sdk_path"
	cp -R "$xcode_default_sdk_path/"* "$sdks_output_path_single_sdk_path"

	parse_paths=("-p" $no_warnings "${tbd_options[@]}" "${archs_option[@]}" -v $version "-r" "all" "$xcode_sim_runtime_path/Developer"
				"-p" $no_warnings "${tbd_options[@]}" "${archs_option[@]}" -v $version "-r" "all" "$xcode_sim_runtime_path/System"
				"-p" $no_warnings "${tbd_options[@]}" "${archs_option[@]}" -v $version "-r" "all" "$xcode_sim_runtime_path/Library")

	write_paths=("-o" "${write_options[@]}" $no_overwrite "$sdks_output_path_single_sdk_path/Developer"
				"-o" "${write_options[@]}" $no_overwrite "$sdks_output_path_single_sdk_path/System"
				"-o" "${write_options[@]}" $no_overwrite "$sdks_output_path_single_sdk_path/Library")

	"$tbd_tool" "${parse_paths[@]}" "${write_paths[@]}"


	if [[ $? -ne 0 ]]; then
		echo "Failed to create tbds from simulator runtime for $sdk_platform $xcode_sdk_version"
	fi
fi
