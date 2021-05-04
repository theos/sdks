#!/bin/sh

function print_usage {
    printf 'Usage: %s {use_simulator} {sdks_output_path} {overwrite_existing} {no_warnings} {tbd_tool_path} {xcode_installation_path} \n' "$(basename "$0")"
    printf "{} options are optional to provide, and can be ignored with a '-'\n"
}

if [ "$1" == "-h" ]; then
    print_usage
    exit 0
fi

sdks_output_path="$2"
if [ $# -lt 2 ] || [ "$sdks_output_path" == "-" ]; then
    sdks_output_path="$THEOS/sdks"

    if [ "$sdks_output_path" == "/sdks" ]; then
        printf 'No Theos installation found. Please either install Theos or provide a path to an sdks directory\n\n'
        print_usage

        exit 1
    fi
fi

if [ ! -d "$sdks_output_path" ]; then
    mkdir -p "$sdks_output_path"
fi

# tbd info

version="v1"

archs_option=("--replace-archs" armv7 armv7s arm64)
tbd_options=("--allow-private-objc-symbols" "--ignore-missing-exports" "--ignore-undefineds")
write_options=("--preserve-subdirs" "--replace-path-extension")

no_overwrite="--no-overwrite"
if [ $# -gt 2 ] && [ "$3" != '-' ]; then
    no_overwrite=""
fi

no_warnings="--ignore-warnings"
tbd_tool="$5"

if [ $# -lt 5 ] || [ "$tbd_tool" == "-" ]; then
    tbd_tool="tbd"
    tbd_exists=$(command -v $tbd_tool)

    if [ -z $tbd_exists ]; then
        printf 'No installation of tbd found. Please install the latest release of tbd v2.0.0 from here; https://github.com/inoahdev/tbd/releases, or provide a path to a tbd installation\n\n'
        print_usage

        exit 1
    fi
else
    tbd_exists=$(command -v "$tbd_tool")
    if [ -z $tbd_exists ]; then
        printf "Provided tbd-tool (%s) doesn't exist\n" "$tbd_tool"
        exit 1
    fi
fi

use_simulator="$1"
device_support_dir="$HOME/Library/Developer/Xcode/iOS DeviceSupport/"

if [ $# -lt 1 ]; then
    use_simulator="-"
fi

xcode_developer_path="$6/Contents/Developer"
if [ $# -lt 6 ] || [ "$6" == "-" ]; then
    xcode_developer_path=$(xcode-select -p)
fi

if [ -z "$xcode_developer_path" ]; then
    printf 'No Xcode installation found. Please either install Xcode or provide a path to an Xcode installation\n\n'
    print_usage

    exit 1
fi

xcode_sim_runtime_path="$xcode_developer_path/Platforms/iPhoneOS.platform/Developer/Library/CoreSimulator/Profiles/Runtimes/iOS.simruntime/Contents/Resources/RuntimeRoot"
xcode_default_sdk_path="$xcode_developer_path/Platforms/iPhoneOS.platform/Developer/SDKs/iPhoneOS.sdk"

xcode_sdk_paths="$xcode_developer_path/Platforms/iPhoneOS.platform/Developer/SDKs/*"
preferred_xcode_sdk_path=""

for xcode_sdk_path in $xcode_sdk_paths; do
    xcode_sdk_real=$(realpath $xcode_sdk_path)

    if [ "$xcode_sdk_real" == "$xcode_default_sdk_path" ]; then
        preferred_xcode_sdk_path=$xcode_sdk_path
    fi
done

if [ -z "$preferred_xcode_sdk_path" ]; then
    printf 'Failed to find sdk for simulator runtime\n'
    exit 1
fi

preferred_xcode_sdk_name=$(basename $preferred_xcode_sdk_path)

xcode_sdk_ios_version=${preferred_xcode_sdk_name:8} # Remove 'iPhoneOS' in front of sdk name
xcode_sdk_ios_version=${xcode_sdk_ios_version%????} # Remove '.sdk' at back of sdk name

sdks_output_path_single_sdk_path=""

if [ -d "$device_support_dir" ] && [ "$use_simulator" == "-" ]; then
    for symbols_path in "$device_support_dir"*; do
        if [ ! -d "$symbols_path" ]; then
            continue
        fi

        symbols_path_basename=$(basename "$symbols_path")
        symbols_path_basename_array=($symbols_path_basename)

        ios_version=${symbols_path_basename_array[0]}
        sdk_name=$(printf "iPhoneOS%s.sdk" $ios_version)

        symbols_actual_path="$symbols_path/Symbols/System"
        if [ ! -d "$symbols_actual_path" ]; then
            printf "Symbols for iOS %s don't exist\n" "$ios_version"
            continue
        fi

        sdks_output_path_single_sdk_path="$sdks_output_path/$sdk_name"
        if [ -d "$sdks_output_path_single_sdk_path" ]; then
            printf 'SDK for iOS %s already exists\n' "$ios_version"
            continue
        fi

        printf 'Creating SDK for iOS %s ...\n' "$ios_version"

        if [ "$xcode_sdk_ios_version" != "$ios_version" ]; then
            printf "Warning: Xcode SDK for iOS %s will be used as a base for sdk for iOS %s\n" $xcode_sdk_ios_version "$ios_version"
        fi

        mkdir -p "$sdks_output_path_single_sdk_path"
        cp -R "$xcode_default_sdk_path/"* "$sdks_output_path_single_sdk_path"

        "$tbd_tool" \
            -p $no_warnings "${tbd_options[@]}" "${archs_option[@]}" -v $version -r all "$symbols_actual_path" \
            -o "${write_options[@]}" $no_overwrite "$sdks_output_path_single_sdk_path/System"

        if [ $? -ne 0 ]; then
            printf 'Failed to create tbds from Symbols directory for iOS %s\n' $ios_version
        fi
    done
else
    if [ "$use_simulator" == "-" ]; then
        printf 'No DeviceSupport binaries found, falling back to dumping from simulator runtime binaries\n'
    fi

    sdks_output_path_single_sdk_path="$sdks_output_path/$preferred_xcode_sdk_name"
    if [ -d "$sdks_output_path_single_sdk_path" ]; then
        printf 'SDK for iOS %s already exists\n' $xcode_sdk_ios_version
        exit 1
    fi

    printf 'Creating sdk for iOS %s ...\n' "$xcode_sdk_ios_version"

    mkdir -p "$sdks_output_path_single_sdk_path"
    cp -R "$xcode_default_sdk_path/"* "$sdks_output_path_single_sdk_path"

    parse_paths=("-p" $no_warnings "${tbd_options[@]}" "${archs_option[@]}" -v $version "-r" "all" "$xcode_sim_runtime_path/Developer"
                 "-p" $no_warnings "${tbd_options[@]}" "${archs_option[@]}" -v $version "-r" "all" "$xcode_sim_runtime_path/System"
                 "-p" $no_warnings "${tbd_options[@]}" "${archs_option[@]}" -v $version "-r" "all" "$xcode_sim_runtime_path/Library")

    write_paths=("-o" "${write_options[@]}" $no_overwrite "$sdks_output_path_single_sdk_path/Developer"
                 "-o" "${write_options[@]}" $no_overwrite "$sdks_output_path_single_sdk_path/System"
                 "-o" "${write_options[@]}" $no_overwrite "$sdks_output_path_single_sdk_path/Library")

    "$tbd_tool" "${parse_paths[@]}" "${write_paths[@]}"

    if [ $? -ne 0 ]; then
        printf 'Failed to create tbds from iPhoneSimulator runtime for iOS %s\n' $xcode_sdk_ios_version
    fi
fi

