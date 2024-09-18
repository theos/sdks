#!/usr/bin/env bash

if [ "${1}" == "-h" ] || [ "${1}" == "--help" ]; then
    echo "Usage: ${0} <symbols-path> <sdk-output-path> <base-sdk-path> <tbd-tool>"
    exit 0
fi

if [ $# -ne 4 ]; then
    exit 1
fi

SYMBOLS_PATH="${1}"
if [ -z "${SYMBOLS_PATH}" ]; then
    exit 1
fi

SDK_OUTPUT_PATH="${2}"
if [ -z "${SDK_OUTPUT_PATH}" ]; then
    exit 1
fi

BASE_SDK_PATH="${3}"
if [ -z "${BASE_SDK_PATH}" ]; then
    exit 1
fi

TBD_TOOL_PATH="${4}"
if [ -z "${TBD_TOOL_PATH}" ]; then
    exit 1
fi

# tbd info
TBD_OUTPUT_VERSION="v3"

archs_option=("--replace-archs" armv7 armv7s arm64 arm64e)
tbd_options=("--ignore-clients" "--ignore-undefineds" "--allow-private-objc-symbols" "--ignore-missing-exports")
write_options=("--preserve-subdirs" "--replace-path-extension")

# trailing slash is important since often the BASE_SDK_PATH is a symlink to a real SDK
cp -a "${BASE_SDK_PATH}/" "${SDK_OUTPUT_PATH}"

"${TBD_TOOL_PATH}" \
    -p "${tbd_options[@]}" "${archs_option[@]}" -v "${TBD_OUTPUT_VERSION}" -r all "${SYMBOLS_PATH}" \
    -o "${write_options[@]}" "${SDK_OUTPUT_PATH}"
