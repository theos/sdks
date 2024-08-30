#!/usr/bin/env bash

if [[ "${1}" == "-h" ]] || [[ "${1}" == "--help" ]]; then
    echo "Usage: ${0} <dyld_shared_cache-path> <sdk-output-path> <platform-path> <tbd-tool>"
    exit 0
fi

DYLD_CACHE_PATH="${1}"
if [[ -z "${DYLD_CACHE_PATH}" ]]; then
    exit 1
fi

SDK_OUTPUT_PATH="${2}"
if [[ -z "${SDK_OUTPUT_PATH}" ]]; then
    exit 1
fi

PLATFORM_PATH="${3}"
if [[ -z "${PLATFORM_PATH}" ]]; then
    exit 1
fi

TBD_TOOL_PATH="${4}"
if [[ -z "${TBD_TOOL_PATH}" ]]; then
    exit 1
fi

LATEST_AVAILABLE_SDK="$(ls -d "${PLATFORM_PATH}/Developer/SDKs"/*.sdk | sort -V | tail -n1)"

SYMBOLS_DIR="$(mktemp -d -t symbols)"

make dsc_extractor_client

./dsc_extractor_client "${PLATFORM_PATH}/usr/lib/dsc_extractor.bundle" "${DYLD_CACHE_PATH}" "${SYMBOLS_DIR}"

./create_patched_sdk.sh "${SYMBOLS_DIR}" "${SDK_OUTPUT_PATH}" "${LATEST_AVAILABLE_SDK}" "${TBD_TOOL_PATH}"
