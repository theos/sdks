#!/usr/bin/env python3

import os
import shutil
import subprocess
import sys

ARCHS = [ "armv6", "armv7", "armv7s", "arm64" ]
DIRS = [ "System/Library/Frameworks", "System/Library/PrivateFrameworks" ]
TARGETS = [ "armv5-ios", "armv6-ios", "armv7-ios", "armv7s-ios", "arm64-ios", "arm64e-ios" ]
VERSION = "v1"

PATH_OPTIONS = [ "--macho", "-r", "all", "--ignore-undefineds", "--allow-private-objc-symbols", "--ignore-missing-exports" ]
WRITE_OPTIONS = [ "--preserve-subdirs", "--replace-path-extension" ]

TBD_PATH = "/usr/bin/tbd"
TBD_DOWNLOAD_URL = "https://github.com/inoahdev/tbd/releases"
XCODE_PATH = "/Applications/Xcode.app"

def print_usage():
    print("Usage: create_sdk [-p tbd-path] [-o output-path] [-a/--archs archs] [--allow-overwrite] [--no-warnings] [--keep-archs] [--use-simulator]")
    print("Options:")
    print("\t-a, --archs,           Provide a replacement archs-list for created .tbd files.")
    print(f"\t                       Default replacement arch-list is {ARCHS}")
    print("\t    --dirs,            Provide directory paths (relative to SDK) to parse ")
    print("\t-h, --help,            Print this message")
    print("\t    --ignore-warnings, Ignore any warnings when creating sdks")
    print("\t    --keep-archs,      Don't replace the archs found in the SDK")
    print("\t    --keep-targets,    Don't replace the targets found in the SDK")
    print("\t-o, --output-path,     Provide the output-directory path for where the created sdk should be stored.")
    print("\t                       Default sdk-path is $THEOS/sdks ($THEOS being the \"THEOS\" environment variable)")
    print("\t    --no-overwrite,    Allow the overwriting of existing sdks and files")
    print("\t-t, --targets,         Provide a replacement targets-list for created .tbd files.")
    print("\t    --tbd-path,        Provide path to your local installation of tbd.")
    print(f"\t                       tbd can be downloaded at {TBD_DOWNLOAD_URL}.")
    print(f"\t                       Default install location is {TBD_PATH}")
    print("\t-u, --usage,           Print this message")
    print("\t    --use-simulator,   Use Simulator SDKs over Xcode's extractions of on-device dyld_shared_cache files")
    print(f"\t-v, --version,         Provide tbd-version for created .tbd files. Default tbd-version is {VERSION}")
    print(f"\t-x, --xcode-path,      Provide a path to the local Xcode installation. Default path is {XCODE_PATH}")

def print_missing_tbd_path_error():
    print("Please provide a path to your local tbd installation.")
    print(f"tbd can be downloaded at {TBD_DOWNLOAD_URL}")
    print(f"Default install location is {TBD_PATH}")

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

def parse_argv_list(i, argv):
    endIndex = 0
    for argument in argv:
        if argument[0] != '-':
            endIndex += 1
            continue

        break

    return argv[:endIndex]

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
    archs = ARCHS
    dirs = DIRS
    targets = TARGETS
    version = VERSION

    theos_path = os.environ.get("THEOS")
    if theos_path is None:
        print("Environment Variable THEOS does not exist.")
        print("Please export the environment variable and re-rerun this program")

        exit(1)

    output_path = os.path.join(theos_path, "sdks")

    tbd_path = TBD_PATH
    xcode_path = XCODE_PATH

    did_provide_archs = False
    did_provide_targets = False
    did_provide_version = False

    ignore_requests = False
    print_warnings = True
    no_overwrite = False
    replace_archs = True
    replace_targets = True
    use_simulator = False

    i = 1
    argc = len(sys.argv)

    while (i < argc):
        arg = sys.argv[i]

        if arg == "-a" or arg == "--archs":
            if i == argc - 1:
                print("Please provide a list of architectures")
                exit(1)

            archs = parse_argv_list(i + 1, sys.argv[i + 1:])
            did_provide_archs = True

            i += len(archs)
        elif arg == "--no-overwrite":
            no_overwrite = True
        elif arg == "--dirs":
            if i == argc - 1:
                print("Please provide a list of directories")
                exit(1)

            dirs = parse_argv_list(i + 1, sys.argv[i + 1])
            i += len(dirs)
        elif arg == "-h" or arg == "--help":
            if i != 1 or argc != 2:
                print(f"Option {arg} must be run by itself")
                exit(1)

            print_usage()
            exit(0)
        elif arg == "--ignore-warnings":
            print_warnings = False
        elif arg == "--ignore-requests":
            ignore_requests = True
        elif arg == "--keep-archs":
            replace_archs = False
        elif arg == "--keep-targets":
            replace_targets = False
        elif arg == "--use-simulator":
            use_simulator = True
        elif arg == "-t" or arg == "--targets":
            if i == argc - 1:
                print("Please provide a list of targets")
                exit(1)

            targets = parse_argv_list(i + 1, sys.argv[i + 1:])
            did_provide_targets = True

            i += len(targets)
        elif arg == "-u" or arg == "--usage":
            print_usage()
            exit(0)
        elif arg == "-v" or arg == "--version":
            if i == argc - 1:
                print("Please provide a tbd-version")
                exit(1)

            version = sys.argv[i + 1]
            did_provide_version = True

            i += 1
        elif arg == "-o" or arg == "--output-path":
            if i == argc - 1:
                print("Please provide an output-path for the created sdk")
                exit(1)

            output_path = sys.argv[i + 1]
            i += 1
        elif arg == "--tbd-path":
            if i == argc - 1:
                print_missing_tbd_path_error()
                exit(1)

            tbd_path = sys.argv[i + 1]
            i += 1
        elif arg == "-x" or arg == "--xcode-path":
            if i == argc - 1:
                print(f"Please provide a path to your local Xcode installation")
                exit(1)

            xcode_path = sys.argv[i + 1]
            i += 1
        else:
            print(f"Unrecognized argument: {arg}")
            exit(1)

        i += 1

    if not os.path.exists(tbd_path):
        print_missing_tbd_path_error()
        exit(1)

    valid_archs=[]
    if did_provide_archs or did_provide_targets:
        valid_archs = get_list_from_option(tbd_path, "--list-architectures")

    if did_provide_archs:
        for arch in archs:
            if arch in valid_archs:
                continue

            print(f"Architecture {arch} doesn't exist")
            exit(1)

    if did_provide_targets:
        valid_platforms = get_list_from_option(tbd_path, "--list-platforms")
        valid_platforms = [platform.split(' ')[0] for platform in valid_platforms]

        for target in targets:
            components = target.split('-')

            arch = components[0]
            platform = components[1]
            should_exit = False

            if arch not in valid_archs:
                print(f"Architecture {arch} doesn't exist")
                should_exit = True

            if platform not in valid_platforms:
                print(f"Platform {platform} doesn't exist")
                should_exit = True

            if should_exit:
                exit(1)

    if did_provide_version:
        valid_versions = get_list_from_option(tbd_path, "--list-tbd-versions")
        if version not in valid_versions:
            print(f"tbd-version {version} doesn't exist")
            exit(1)

    if not replace_archs and did_provide_archs:
        print("Warning: Replacement architectures have been provided although --keep-archs was also provided")

    if not replace_targets and did_provide_targets:
        print("Warning: Replacement architectures have been provided although --keep-targets was also provided")

    if did_provide_archs and did_provide_targets:
        print("Error: Both --replace-archs and --replace-targets were provided")
        exit(1)

    if did_provide_targets and should_use_archs(version):
        print("Error: --replace-targets has been provided while tbd-version is not tbd-version v4.")
        print("       Please provide version tbd-version v4 (with options: -v v4)")

        exit(1)

    if not os.path.exists(xcode_path):
        print(f"No Xcode installation was found at {xcode_path}.")
        print("Please provide a path to your local Xcode installation")

        exit(0)

    xcode_developer_path = os.path.join(xcode_path, "Contents/Developer")
    if not os.path.exists(xcode_developer_path):
        print("Your Xcode installation is missing its developer directory.")
        print(f"The developer directory is supposed to exist at {xcode_developer_path}")
        exit(1)

    xcode_sdk_dir_path = os.path.join(xcode_developer_path, "Platforms/iPhoneOS.platform/Developer/SDKs/")
    if not os.path.exists(xcode_sdk_dir_path):
        print("Your Xcode installation is missing its ios sdks directory")
        print(f"The sdks directory should be at {xcode_sdk_dir_path}.")
        print("The iOS sdk from Xcode is needed as a baseline which we add onto")

        exit(1)

    xcode_default_sdk_path = os.path.join(xcode_sdk_dir_path, "iPhoneOS.sdk")
    if not os.path.exists(xcode_sdk_dir_path):
        print("Your Xcode installation is missing its default ios sdk.")
        print(f"The default sdk should be at {xcode_default_sdk_path}.")
        print("The iOS sdk from Xcode is needed as a baseline which we add onto")

        exit(1)

    xcode_sdk_version = ""
    encountered_default_dir = False

    for xcode_sdk_filename in os.listdir(xcode_sdk_dir_path):
        if not encountered_default_dir and xcode_sdk_filename == "iPhoneOS.sdk":
            continue

        xcode_sdk_path = os.path.join(xcode_sdk_dir_path, xcode_sdk_filename)
        xcode_sdk_real_path = os.path.realpath(xcode_sdk_path)

        if not os.path.samefile(xcode_sdk_real_path, xcode_default_sdk_path):
            continue

        xcode_sdk_version = xcode_sdk_filename[8:] # We remove the 'iPhoneOS' prefix from the sdk name
        xcode_sdk_version = os.path.splitext(xcode_sdk_version)[0] # We remove the .sdk path-extension

        break

    xcode_device_support_path = os.path.join(os.environ["HOME"], "Library/Developer/Xcode/iOS DeviceSupport/")
    parsed_atleast_one = False

    tbd_argv = [ tbd_path ]
    if os.path.exists(xcode_device_support_path) and not use_simulator:
        for symbols_filename in os.listdir(xcode_device_support_path):
            symbols_filename_split = symbols_filename.split()
            if len(symbols_filename_split) != 2:
                continue

            symbols_ios_version = symbols_filename_split[0]
            symbols_ios_build = symbols_filename_split[1]

            symbols_dir_path = os.path.join(xcode_device_support_path, symbols_filename)
            symbols_path = os.path.join(symbols_dir_path, "Symbols/System")

            if not os.path.exists(symbols_path):
                print("Warning: Symbols do not exist. Skipping")
                print(f"iOS Version {symbols_ios_version}, Build: {symbols_ios_build}")

                continue

            sdk_write_path = os.path.join(output_path, f"iPhoneOS{symbols_ios_version}.sdk/")
            if os.path.exists(sdk_write_path):
                if no_overwrite:
                    print(f"Warning: SDK for iOS {symbols_ios_version} already exists. Skipping")
                    continue

                if not removeDirectory(sdk_write_path):
                    continue

            if xcode_sdk_version != symbols_ios_version:
                print(f"Warning: The official iOS SDK for iOS Version {xcode_sdk_version}")
                print(f"will be used as the base for a SDK for iOS Version {symbols_ios_version}")

            if not copyDirectory(sdk_write_path, xcode_sdk_path):
                os.rmdir(sdk_write_path)
                continue

            use_archs = should_use_archs(version)
            for dir in dirs:
                tbd_argv.append("-p")
                tbd_argv += PATH_OPTIONS

                if ignore_requests:
                    tbd_argv.append("--ignore-requests")

                if not print_warnings:
                    tbd_argv.append("--ignore-warnings")

                tbd_argv.append("-v")
                tbd_argv.append(version)

                if replace_targets and not use_archs:
                    tbd_argv.append("--replace-targets")
                    tbd_argv += targets
                elif replace_archs and use_archs:
                    tbd_argv.append("--replace-archs")
                    tbd_argv += archs

                dir_path = os.path.join(symbols_path, dir[7:]) #Remove the "System" path-component
                tbd_argv.append(dir_path)

            for dir in dirs:
                tbd_argv.append("-o")
                tbd_argv += WRITE_OPTIONS

                if no_overwrite:
                    tbd_argv.append("--no-overwrite")

                dir_write_path = os.path.join(sdk_write_path, dir)
                tbd_argv.append(dir_write_path)

            ret = subprocess.call(tbd_argv, stdout=None, stderr=subprocess.STDOUT)
            if ret == 0:
               parsed_atleast_one = True
    else:
        if not use_simulator:
            print("No Device Support binaries were found, sdk will now be created by falling back on simulator binaries")

        simulator_path = os.path.join(xcode_developer_path, "Platforms/iPhoneOS.platform/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS.simruntime/Contents/Resources/RuntimeRoot")
        simulator_version_path = os.path.join(simulator_path, "System/Library/CoreServices/SystemVersion.plist")
        simulator_version = convert_binary_to_string(subprocess.check_output([ "/usr/bin/defaults", "read", simulator_version_path, "ProductVersion" ]))

        if xcode_sdk_version != simulator_version:
            print(f"Warning: The official iOS SDK for iOS Version {xcode_sdk_version}")
            print(f"will be used as the base for a SDK for iOS Version {simulator_version}")

        sdk_write_path = os.path.join(output_path, f"iPhoneOS{simulator_version}.sdk")
        if not os.path.exists(sdk_write_path) or not no_overwrite:
            if copyDirectory(sdk_write_path, xcode_sdk_path):
                for dir in dirs:
                    tbd_argv.append("-p")
                    tbd_argv += PATH_OPTIONS

                    if ignore_requests:
                        tbd_argv.append("--ignore-requests")

                    if not print_warnings:
                        tbd_argv.append("--ignore-warnings")

                    tbd_argv.append("-v")
                    tbd_argv.append(version)

                    if replace_targets and not use_archs:
                        tbd_argv.append("--replace-targets")
                        tbd_argv += targets
                    elif replace_archs and use_archs:
                        tbd_argv.append("--replace-archs")
                        tbd_argv += archs

                    dir_path = os.path.join(simulator_path, dir)
                    tbd_argv.append(dir_path)

                for dir in dirs:
                    tbd_argv.append("-o")
                    tbd_argv += WRITE_OPTIONS

                    if no_overwrite:
                        tbd_argv.append("--no-overwrite")

                    dir_write_path = os.path.join(sdk_write_path, dir)
                    tbd_argv.append(dir_write_path)

                ret = subprocess.call(tbd_argv, stdout=None, stderr=subprocess.STDOUT)
                if ret == 0:
                   parsed_atleast_one = True
            else:
                os.rmdir(sdk_write_path)
        else:
            print(f"SDK for iOS {simulator_version} already exists")

    if not parsed_atleast_one:
        print("No new SDKs were created from either the Device Support binaries or from the simulator runtime binaries")
        exit(1)

if __name__ == "__main__":
    main(sys.argv)
