# theos/sdks
This repository contains patched iOS SDKs containing private symbols. These were removed from official SDKs starting in Xcode 7.3 and the iOS 9.3 SDK.

To use with Theos, [download this repo](https://github.com/theos/sdks/archive/master.zip), extract, and copy whichever SDKs you desire into `$THEOS/sdks/`.

Generated using [create_patched_sdk.sh](create_patched_sdk.sh) and inoahdev’s [tbd v2.0.0](https://github.com/inoahdev/tbd/tree/v2.0.0-alpha3) using binaries retrieved from the dyld shared cache.
