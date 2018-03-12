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

    if [ "$output_path" == "/sdks" ]; then
        printf 'No Theos installation found. Please either install Theos or provide a path to an sdks directory\n'
        print_usage

        exit 1
    fi
fi

if [ ! -d $output_path ]; then
    mkdir -p $output_path
fi

# tbd info

archs=(armv7 armv7s arm64)
version="v1"
tbd_options=("--allow-private-objc-symbols")

no_overwrite="--no-overwrite"
if [ $# -lt 3 ] || [ "$3" == '-' ]; then
    no_overwrite=""
fi

no_warnings="--dont-print-warnings"
if [ $# -lt 4 ] || [ "$4" == '-' ]; then
    no_warnings=""
fi

tbd_tool="$5"
if [ $# -lt 5 ] || [ "$tbd_tool" == "-" ]; then
    tbd_tool="tbd"
    tbd_exists=$(command -v $tbd_tool)

    if [ -z $tbd_exists ]; then
        printf 'No installation of tbd found. Please install tbd from here; https://github.com/inoahdev/tbd, or provide a path to a tbd installation\n'
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
if [ $# -lt 6 ] || [ "$xcode_developer_path" == "-" ]; then
    xcode_developer_path=$(xcode-select -p)
fi

if [ -z "$xcode_developer_path" ]; then
    printf 'No Xcode installation found. Please either install Xcode or provide a path to an Xcode installation\n'
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
        sdk_name="iPhoneOS$ios_version.sdk"

        symbols_actual_path="$symbols_path/Symbols"
        if [ ! -d "$symbols_actual_path" ]; then
            printf "Symbols for %s don't exist\n" $symbols_path_basename
            continue
        fi

        sdks_output_path_single_sdk_path="$sdks_output_path/$sdk_name"
        if [ -d "$sdks_output_path_single_sdk_path" ]; then
            printf 'SDK for iOS Version %s already exists\n' $ios_version
            exit 1
        fi

        if [ "$xcode_sdk_ios_version" != "$ios_version" ]; then
            printf "Warning: Using Xcode SDK for iOS Version %s as a base for sdk being created for iOS Version %s\n" $xcode_sdk_ios_version $ios_version
        fi

        mkdir -p "$sdks_output_path_single_sdk_path"
        cp -R "$xcode_default_sdk_path/"* "$sdks_output_path_single_sdk_path"

        "$tbd_tool" -p -r "$symbols_actual_path" -o --maintain-directories $no_overwrite "$sdks_output_path_single_sdk_path" $no_warnings "$tbd_options" -replace-archs "$archs" -v $version

        if [ $? -ne 0 ]; then
            printf 'Failed to dump all tbds from Symbols directory for iOS Version %s\n' $ios_version
        fi
    done
else
    if [ "$use_simulator" == "-" ]; then
        printf 'No DeviceSupport binaries found, falling back to dumping from simulator runtime binaries\n'
    fi

    sdks_output_path_single_sdk_path="$sdks_output_path/$preferred_xcode_sdk_name"
    if [ -d "$sdks_output_path_single_sdk_path" ]; then
        ios_version=${preferred_xcode_sdk_name:8} # Remove 'iPhoneOS' in front of sdk name
        ios_version=${ios_version%????} # Remove '.sdk' at back of sdk name

        printf 'SDK for iOS Version %s already exists\n' $ios_version
        exit 1
    fi

    mkdir -p "$sdks_output_path_single_sdk_path"
    cp -R "$xcode_default_sdk_path/"* "$sdks_output_path_single_sdk_path"

    "$tbd_tool" -p -r "$xcode_sim_runtime_path/Developer" -o --maintain-directories $no_overwrite "$sdks_output_path_single_sdk_path/Developer" $no_warnings "$tbd_options" -replace-archs "$archs" -v $version
    "$tbd_tool" -p -r "$xcode_sim_runtime_path/System" -o --maintain-directories $no_overwrite "$sdks_output_path_single_sdk_path/System" $no_warnings "$tbd_options" -replace-archs "$archs" -v $version
    "$tbd_tool" -p -r "$xcode_sim_runtime_path/Library" -o --maintain-directories $no_overwrite "$sdks_output_path_single_sdk_path/Library" $no_warnings "$tbd_options" -replace-archs "$archs" -v $version
    "$tbd_tool" -p -r "$xcode_sim_runtime_path/usr" -o --maintain-directories $no_overwrite "$sdks_output_path_single_sdk_path/usr" $no_warnings "$tbd_options" -replace-archs "$archs" -v $version

    if [ $? -ne 0 ]; then
        printf 'Failed to create tbds for sdk at path %s\n' "$sdks_output_path"
    fi
fi
