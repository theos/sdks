#!/usr/bin/env python3

import argparse
import os
from pathlib import Path
import shutil
import subprocess
import sys

ARCHS = [ "armv6", "armv7", "armv7s", "arm64" ]
DIRS = [ "System/Library/Frameworks", "System/Library/PrivateFrameworks" ]
TARGETS = [ "armv5-ios", "armv6-ios", "armv7-ios", "armv7s-ios", "arm64-ios", "arm64e-ios" ]
VERSION = "v1"

PATH_OPTIONS = [ "-p", "--macho", "-r", "all", "--ignore-undefineds", "--allow-private-objc-symbols", "--ignore-missing-exports" ]
WRITE_OPTIONS = [ "-o", "--preserve-subdirs", "--replace-path-extension" ]

TBD_PATH = Path("/usr/local/bin/tbd")
TBD_DOWNLOAD_URL = "https://github.com/inoahdev/tbd/releases"
XCODE_PATH = Path("/Applications/Xcode.app")

def should_use_archs(version):
    return version != "v4"

def convert_binary_to_string(binary):
    bstring = str(binary)

    # We remove the first 2 characters as they're used to
    # indicate the old binary format of the data.
    #
    # We also remove the newline character at the end of
    # the string.

    string = bstring[2:len(bstring) - 3]
    return string

def get_list_from_option(tbd_path, option):
    output = subprocess.check_output([tbd_path, option])
    return convert_binary_to_string(output).split('\\n')

def copyDirectory(dest, src):
    try:
        shutil.copytree(src, dest)
    # Directories are the same
    except shutil.Error as e:
        print('Directory not copied. Error: %s' % e)
        return False

    # Any error saying that the directory doesn't exist
    except OSError as e:
        print('Directory not copied. Error: %s' % e)
        return False

    return True

def removeDirectory(dir):
    try:
        shutil.rmtree(dir)
    # Directories are the same
    except shutil.Error as e:
        print('Directory not removed. Error: %s' % e)
        return False

    # Any error saying that the directory doesn't exist
    except OSError as e:
        print('Directory not removed. Error: %s' % e)
        return False

    return True

def main(argv):
    theos_path_env = os.environ.get("THEOS")
    if theos_path_env is None:
        print("The path of environment-variable $THEOS doesn't exist.")
        print("Please run 'export THEOS=<theos path here>' before running this program")

        exit(1)

    theos_path = Path(theos_path_env)
    if not theos_path.exists() or not theos_path.is_dir():
        print("No directory exists at path of environment-variable $THEOS")
        exit(1)

    output_path = theos_path / "sdks"
    parser = argparse.ArgumentParser(description="Apple Platform SDK Generator Python Script", add_help=True)

    parser.add_argument("-a", "--archs", nargs='+', help="A list of archs to replace ones in SDK", required=False)
    parser.add_argument("--dirs", help='A list of dirs to recurse while parsing inside SDK', default=DIRS, nargs='+', required=False)
    parser.add_argument("--ignore-warnings", help="Ignore any warnings from tbd", action='store_true', default=False, required=False)
    parser.add_argument("--ignore-requests", help="Ignore any requests from tbd", action='store_true', default=False, required=False)
    parser.add_argument("--keep-archs", help="Don't replace archs in SDK with either internal or provided archs", action='store_true', default=False, required=False)
    parser.add_argument("--keep-targets", help="Don't replace targets in SDK with either internal or provided targets", action='store_true', default=False, required=False)
    parser.add_argument("-o", "--output-path", help='Path to write SDK', required=False)
    parser.add_argument("--no-overwrite", help="Don't overwrite any existing SDKs", action='store_true', default=False, required=False)
    parser.add_argument("-t", "--targets", help='A list of targets to replace ones in SDK', nargs='+', required=False)
    parser.add_argument("--tbd-path", help=f'Path to local tbd-installation. tbd can be downloaded at {TBD_DOWNLOAD_URL}', required=False)
    parser.add_argument("--use-simulator", help='Use iOS Simulator binaries instead of the default DeviceSupport binaries', action='store_true', default=False, required=False)
    parser.add_argument('-v', "--version", help=f'Set version of the .tbd format. Default version is {VERSION}', required=False)
    parser.add_argument('-x', "--xcode-path", help=f'Path to Xcode-Installation. Default location is {XCODE_PATH}', required=False)

    args = parser.parse_args()
    tbd_path_string = TBD_PATH

    if args.tbd_path is not None:
        tbd_path_string = args.tbd_path

    tbd_path = Path(tbd_path_string)
    if not tbd_path.exists():
        print(f"tbd was not found at location {tbd_path}")
        print("Please provide a path to your local tbd install with option --tbd-path")
        print(f"tbd can be downloaded at {TBD_DOWNLOAD_URL}")

        exit(1)

    if not tbd_path.is_file():
        print("Your tbd path is not a path to a file")
        print(f"A tbd executable file was expected at {tbd_path}")

        exit(1)

    if not os.access(tbd_path.as_posix(), os.X_OK):
        print("Your tbd file is not executable")
        print(f"Please run 'chmod +x {tbd_path}'")

        exit(1)

    did_provide_output_path = args.output_path is not None
    if did_provide_output_path:
        output_path = Path(args.output_path)

    output_path.mkdir(mode=0o666, parents=False, exist_ok=True)

    did_provide_archs = args.archs is not None
    did_provide_targets = args.targets is not None

    if args.keep_archs and did_provide_archs:
        print("Error: Both --keep-archs and --replace-archs were provided")
        exit(1)

    if args.keep_targets and did_provide_targets:
        print("Error: Both --keep-targets and --replace-targets were provided")
        exit(1)

    if did_provide_archs and did_provide_targets:
        print("Error: Both --replace-archs and --replace-targets were provided")
        exit(1)

    did_provide_version = args.version is not None
    version = VERSION

    if did_provide_version:
        version = args.version
        valid_versions = get_list_from_option(tbd_path.as_posix(), "--list-tbd-versions")

        if version not in valid_versions:
            valid_versions_print_list = ', '.join(valid_versions)

            print(f"tbd-version {version} doesn't exist")
            print(f"Valid Versions: {valid_versions_print_list}")

            exit(1)

    if did_provide_targets and should_use_archs(version):
        print("Error: --replace-targets has been provided while tbd-version is not tbd-version v4.")
        print("       Please provide version tbd-version v4 (with options: -v v4)")

        exit(1)

    archs = ARCHS
    targets = TARGETS

    if did_provide_archs or did_provide_targets:
        valid_archs = get_list_from_option(tbd_path.as_posix(), "--list-architectures")

    if did_provide_archs:
        archs = args.archs
        should_exit = False
        should_print_arch_list = False

        for arch in archs:
            if arch in valid_archs:
                continue

            print(f"Architecture '{arch}' doesn't exist")

            should_exit = True
            should_print_arch_list = True

        if should_exit:
            if should_print_arch_list:
                print(f"\nValid Archs:")
                print(', '.join(valid_archs))

            exit(1)

    if did_provide_targets:
        valid_platforms = get_list_from_option(tbd_path.as_posix(), "--list-platforms")

        should_exit = False
        should_print_arch_list = False
        should_print_platform_list = False
        targets = args.targets

        for target in targets:
            components = target.split('-')
            if len(components) != 2:
                print(f"Target '{target}' is invalid")
                should_exit = True

            arch, platform = components
            if not arch and not platform:
                print(f"Target '{target}' is missing an arch and a platform")

                should_print_arch_list = True
                should_print_platform_list = True

                should_exit = True
                continue

            if not arch:
                print(f"Target '{target}' is missing an arch")

                should_print_arch_list = True
                should_exit = True
            elif arch not in valid_archs:
                print(f"Architecture '{arch}' doesn't exist")

                should_print_arch_list = True
                should_exit = True

            if not platform:
                print(f"Target '{target}' is missing a platform")

                should_print_platform_list = True
                should_exit = True
            elif platform not in valid_platforms:
                print(f"Platform '{platform}' doesn't exist")

                should_print_platform_list = True
                should_exit = True

        if should_exit:
            if should_print_arch_list:
                print("\nValid Archs:")
                print(', '.join(valid_archs))

            if should_print_platform_list:
                print("\nValid Platforms:")
                print(', '.join(valid_platforms))

            exit(1)

    xcode_path = XCODE_PATH
    did_provide_xcode_path = args.xcode_path is not None

    if did_provide_xcode_path:
        xcode_path = Path(args.xcode_path)

    if not xcode_path.exists():
        print(f"No Xcode installation was found at {xcode_path}")
        print("Please provide a path to your local Xcode installation")

        exit(1)

    if not xcode_path.is_dir():
        print("Your Xcode Application Path does not point to a directory")
        print(f"The Xcode Application Path Directory was expected at {xcode_path}")

        exit(1)

    xcode_developer_path = xcode_path / "Contents" / "Developer"
    if not xcode_developer_path.exists():
        print("Your Xcode installation is missing its developer directory")
        print(f"The developer directory is supposed to exist at {xcode_developer_path}")

        exit(1)

    xcode_sdk_dir_path = xcode_developer_path / "Platforms" / "iPhoneOS.platform" / "Developer" / "SDKs"
    if not xcode_sdk_dir_path.exists():
        print("Your Xcode installation is missing its iOS SDKs directory")
        print(f"The sdks directory should be at {xcode_sdk_dir_path}")
        print("The iOS SDK from Xcode is needed as a baseline which we add onto")

        exit(1)

    xcode_default_sdk_path = xcode_sdk_dir_path / "iPhoneOS.sdk"
    if not xcode_sdk_dir_path.exists():
        print("Your Xcode installation is missing its default iOS SDK.")
        print(f"The default SDK should be at {xcode_default_sdk_path}")
        print("The iOS SDK from Xcode is needed as a baseline which we add onto")

        exit(1)

    # Recurse to find the SDK that points to xcode_default_sdk_path

    xcode_sdk_version = ''
    for dir in xcode_sdk_dir_path.glob("iPhoneOS*.sdk/"):
        if dir.name == "iPhoneOS.sdk":
            continue

        resolved_dir = dir.resolve()
        if resolved_dir != xcode_default_sdk_path:
            continue

        xcode_sdk_real_name = dir.stem # Use .stem instead of .name to remove the ".sdk"
        xcode_sdk_version = xcode_sdk_real_name[8:] # We remove the 'iPhoneOS' prefix from the sdk name

        break

    if not xcode_sdk_version:
        print("No SDK pointing to the default SDK was found")
        print("The default sdk exists at path {xcode_default_sdk_path}")

        exit(1)

    parsed_atleast_one = False
    xcode_device_support_path = Path.home() / "Library" / "Developer" / "Xcode" / "iOS DeviceSupport"
    tbd_argv = [ tbd_path.as_posix() ]

    if xcode_device_support_path.exists() and xcode_device_support_path.is_dir() and not args.use_simulator:
        for symbols_path in xcode_device_support_path.iterdir():
            if not symbols_path.is_dir():
                continue

            # symbols_filename should be the same as the iOS Version, and a build
            # in the format of "12.4 (16G77)"
            #
            # Because iOS Versions use '.', we can't use `symbols_path.stem`, which
            # takes out the path-extension, by finding a dot.

            symbols_filename = symbols_path.name
            symbols_filename_split = symbols_filename.split()

            if len(symbols_filename_split) != 2:
                continue

            symbols_ios_version = symbols_filename_split[0]
            symbols_ios_build = symbols_filename_split[1]
            symbols_dir_path = xcode_device_support_path / symbols_filename

            if not symbols_dir_path.exists():
                print("Warning: Symbols directory does not exist. Skipping")
                print(f"iOS Version {symbols_ios_version}, Build: {symbols_ios_build}")

                continue

            symbols_path = symbols_dir_path / "Symbols" / "System"
            if not symbols_path.exists():
                print("Warning: The Symbols directory does not contain a System directory. Skipping")
                print(f"iOS Version {symbols_ios_version}, Build: {symbols_ios_build}")

                continue

            sdk_write_path = output_path / f"iPhoneOS{symbols_ios_version}.sdk"
            if sdk_write_path.exists():
                if args.no_overwrite:
                    print(f"Warning: SDK for iOS {symbols_ios_version} already exists. Skipping")
                    print(f"SDK for iOS {symbols_ios_version} is at {sdk_write_path}")

                    continue

                if not sdk_write_path.is_dir():
                    print(f"Warning: A non-directory exists at write-path for SDK for iOS {symbols_ios_version}. Skipping")
                    print(f"SDK for iOS {symbols_ios_version} is at {sdk_write_path}")

                    continue

                if not removeDirectory(sdk_write_path):
                    continue

            if xcode_sdk_version != symbols_ios_version:
                print(f"Warning: The official iOS SDK for iOS Version {xcode_sdk_version} will be used as the base for the newly-created SDK for iOS Version {symbols_ios_version}")

            if not copyDirectory(sdk_write_path, xcode_default_sdk_path):
                removeDirectory(sdk_write_path)
                continue

            dirs_that_exist = []
            use_archs = should_use_archs(version)

            for dir in args.dirs:
                path_from_components = Path(*Path(dir).parts[1:])  # "[1:]" Removes the "System" path-component
                dir_path = symbols_path / path_from_components.as_posix()

                if not dir_path.exists():
                    continue

                tbd_argv += PATH_OPTIONS
                if args.ignore_requests:
                    tbd_argv.append("--ignore-requests")

                if args.ignore_warnings:
                    tbd_argv.append("--ignore-warnings")

                tbd_argv.append("-v")
                tbd_argv.append(version)

                if not args.keep_targets and not use_archs:
                    tbd_argv.append("--replace-targets")
                    tbd_argv += targets
                elif not args.keep_archs and use_archs:
                    tbd_argv.append("--replace-archs")
                    tbd_argv += archs

                dirs_that_exist.append(dir)
                tbd_argv.append(dir_path.as_posix())

            if not dirs_that_exist:
                continue

            for dir in args.dirs:
                if not dir in dirs_that_exist:
                    continue

                tbd_argv += WRITE_OPTIONS
                if args.no_overwrite:
                    tbd_argv.append("--no-overwrite")

                dir_write_path = sdk_write_path / dir
                tbd_argv.append(dir_write_path.as_posix())

            ret = subprocess.call(tbd_argv, stdout=None, stderr=subprocess.DEVNULL)
            if ret == 0:
               parsed_atleast_one = True

    if args.use_simulator or parsed_atleast_one == False:
        if not args.use_simulator:
            print("No SDKs were successfully created from DeviceSupport binaries. Falling back to Simulator Binaries")

        simulator_path = xcode_developer_path / "Platforms" / "iPhoneOS.platform" / "Library" / "Developer" / "CoreSimulator" / "Profiles" / "Runtimes" / "iOS.simruntime" / "Contents" / "Resources" / "RuntimeRoot"
        if not simulator_path.exists():
            print("The iOS Simulator RuntimeRoot directory does not exist. Please install a simulator.")
            exit(1)

        simulator_version_path = simulator_path / "System" / "Library" / "CoreServices" / "SystemVersion.plist"
        if not simulator_path.exists():
            print("The iOS Simulator RuntimeRoot directory does not have a SystemVersion.plist file. Please re-install the simulator")
            print(f"The iOS Simulator RuntimeRoot directory's SystemVersion.plist file should be at {simulator_version_path}")

            exit(1)

        if not simulator_version_path.is_file():
            print("The iOS Simulator RuntimeRoot directory's SystemVersion.plist is not a file. Please re-install the simulator")
            print(f"The iOS Simulator RuntimeRoot directory's SystemVersion.plist is at {simulator_version_path}")

            exit(1)

        simulator_version = convert_binary_to_string(subprocess.check_output([ "/usr/bin/defaults", "read", simulator_version_path, "ProductVersion" ]))
        if xcode_sdk_version != simulator_version:
            print(f"Warning: The official iOS SDK for iOS Version {xcode_sdk_version} will be used as the base for the newly-created SDK for iOS Version {simulator_version}")

        sdk_write_path = output_path / f"iPhoneOS{simulator_version}.sdk"
        sdk_write_path_exists = sdk_write_path.exists()

        if not sdk_write_path_exists or not args.no_overwrite:
            # If sdk write-path exists, we have to remove it so copyDirectory() can work
            if sdk_write_path_exists:
                removeDirectory(sdk_write_path)

            if copyDirectory(sdk_write_path, xcode_default_sdk_path):
                dirs_that_exist = []
                use_archs = should_use_archs(version)

                for dir in args.dirs:
                    dir_path = simulator_path / dir
                    if not dir_path.exists():
                        continue

                    tbd_argv += PATH_OPTIONS
                    if args.ignore_requests:
                        tbd_argv.append("--ignore-requests")

                    if args.ignore_warnings:
                        tbd_argv.append("--ignore-warnings")

                    tbd_argv.append("-v")
                    tbd_argv.append(version)

                    if not args.keep_targets and not use_archs:
                        tbd_argv.append("--replace-targets")
                        tbd_argv += targets
                    elif not args.keep_archs and use_archs:
                        tbd_argv.append("--replace-archs")
                        tbd_argv += archs

                    dirs_that_exist.append(dir)
                    tbd_argv.append(dir_path.as_posix())

                if dirs_that_exist:
                    for dir in args.dirs:
                        if not dir in dirs_that_exist:
                            continue

                        tbd_argv += WRITE_OPTIONS
                        if args.no_overwrite:
                            tbd_argv.append("--no-overwrite")

                        dir_write_path = sdk_write_path / dir
                        tbd_argv.append(dir_write_path.as_posix())

                    ret = subprocess.call(tbd_argv, stdout=None, stderr=subprocess.DEVNULL)
                    if ret == 0:
                        parsed_atleast_one = True

            else:
                removeDirectory(sdk_write_path)
        else:
            print(f"SDK for iOS {simulator_version} already exists")

    if not parsed_atleast_one:
        print("No new SDKs were created from either the Device Support binaries or from the simulator runtime binaries")
        exit(1)

if __name__ == "__main__":
    main(sys.argv)
