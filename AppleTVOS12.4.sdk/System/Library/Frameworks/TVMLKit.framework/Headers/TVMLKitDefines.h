//
//  TVMLKitDefines.h
//  TVMLKit
//
//  Copyright (c) 2014-2015 Apple. All rights reserved.
//

#ifndef _TVMLKit_TVMLKitDefines_
#define _TVMLKit_TVMLKitDefines_

#if !defined(TV_EXTERN)
#ifdef __cplusplus
#define TV_EXTERN   extern "C" __attribute__((visibility ("default")))
#else
#define TV_EXTERN   extern __attribute__((visibility ("default")))
#endif
#endif

#if !defined(TV_EXTERN_CLASS)
#ifdef __cplusplus
#define TV_EXTERN_CLASS   extern "C" __attribute__((visibility ("default")))
#else
#define TV_EXTERN_CLASS   extern __attribute__((visibility ("default")))
#endif
#endif

#if !defined(TV_EXTERN_CLASS_AVAILABLE)
#define TV_EXTERN_CLASS_AVAILABLE(version) __attribute__((visibility("default"))) NS_CLASS_AVAILABLE(NA, version)
#endif

#endif /* defined(_TVMLKit_TVMLKitDefines_) */
