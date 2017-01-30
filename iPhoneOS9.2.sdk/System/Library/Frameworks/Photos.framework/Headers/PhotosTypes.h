//
//  PhotosTypes.h
//  Photos
//
//  Copyright (c) 2013 Apple Inc. All rights reserved.
//

#ifndef Photos_PhotosTypes_h
#define Photos_PhotosTypes_h

#pragma mark - PHCollectionListTypes

typedef NS_ENUM(NSInteger, PHImageContentMode) {
    PHImageContentModeAspectFit = 0,
    PHImageContentModeAspectFill = 1,
    PHImageContentModeDefault = PHImageContentModeAspectFit
} NS_ENUM_AVAILABLE_IOS(8_0);

typedef NS_ENUM(NSInteger, PHCollectionListType) {
    PHCollectionListTypeMomentList    = 1,
    PHCollectionListTypeFolder        = 2,
    PHCollectionListTypeSmartFolder   = 3,
} NS_ENUM_AVAILABLE_IOS(8_0);

typedef NS_ENUM(NSInteger, PHCollectionListSubtype) {
    
    // PHCollectionListTypeMomentList subtypes
    PHCollectionListSubtypeMomentListCluster    = 1,
    PHCollectionListSubtypeMomentListYear       = 2,
    
    // PHCollectionListTypeFolder subtypes
    PHCollectionListSubtypeRegularFolder        = 100,
    
    // PHCollectionListTypeSmartFolder subtypes
    PHCollectionListSubtypeSmartFolderEvents    = 200,
    PHCollectionListSubtypeSmartFolderFaces     = 201,
    
    // Used for fetching if you don't care about the exact subtype
    PHCollectionListSubtypeAny = NSIntegerMax
} NS_ENUM_AVAILABLE_IOS(8_0);

#pragma mark - PHCollection types

typedef NS_ENUM(NSInteger, PHCollectionEditOperation) {
    PHCollectionEditOperationDeleteContent    = 1, // Delete things it contains
    PHCollectionEditOperationRemoveContent    = 2, // Remove things it contains, they're not deleted from the library
    PHCollectionEditOperationAddContent       = 3, // Add things from other collection
    PHCollectionEditOperationCreateContent    = 4, // Create new things, or duplicate them from others in the same container
    PHCollectionEditOperationRearrangeContent = 5, // Change the order of things
    PHCollectionEditOperationDelete           = 6, // Deleting of the container, not the content
    PHCollectionEditOperationRename           = 7, // Renaming of the container, not the content
} NS_AVAILABLE_IOS(8_0);

#pragma mark - PHAssetCollection types

typedef NS_ENUM(NSInteger, PHAssetCollectionType) {
    PHAssetCollectionTypeAlbum      = 1,
    PHAssetCollectionTypeSmartAlbum = 2,
    PHAssetCollectionTypeMoment     = 3,
} NS_ENUM_AVAILABLE_IOS(8_0);

typedef NS_ENUM(NSInteger, PHAssetCollectionSubtype) {
    
    // PHAssetCollectionTypeAlbum regular subtypes
    PHAssetCollectionSubtypeAlbumRegular         = 2,
    PHAssetCollectionSubtypeAlbumSyncedEvent     = 3,
    PHAssetCollectionSubtypeAlbumSyncedFaces     = 4,
    PHAssetCollectionSubtypeAlbumSyncedAlbum     = 5,
    PHAssetCollectionSubtypeAlbumImported        = 6,
    
    // PHAssetCollectionTypeAlbum shared subtypes
    PHAssetCollectionSubtypeAlbumMyPhotoStream   = 100,
    PHAssetCollectionSubtypeAlbumCloudShared     = 101,
    
    // PHAssetCollectionTypeSmartAlbum subtypes
    PHAssetCollectionSubtypeSmartAlbumGeneric    = 200,
    PHAssetCollectionSubtypeSmartAlbumPanoramas  = 201,
    PHAssetCollectionSubtypeSmartAlbumVideos     = 202,
    PHAssetCollectionSubtypeSmartAlbumFavorites  = 203,
    PHAssetCollectionSubtypeSmartAlbumTimelapses = 204,
    PHAssetCollectionSubtypeSmartAlbumAllHidden  = 205,
    PHAssetCollectionSubtypeSmartAlbumRecentlyAdded = 206,
    PHAssetCollectionSubtypeSmartAlbumBursts     = 207,
    PHAssetCollectionSubtypeSmartAlbumSlomoVideos = 208,
    PHAssetCollectionSubtypeSmartAlbumUserLibrary = 209,
    PHAssetCollectionSubtypeSmartAlbumSelfPortraits NS_AVAILABLE_IOS(9_0) = 210,
    PHAssetCollectionSubtypeSmartAlbumScreenshots NS_AVAILABLE_IOS(9_0) = 211,
    
    // Used for fetching, if you don't care about the exact subtype
    PHAssetCollectionSubtypeAny = NSIntegerMax
} NS_ENUM_AVAILABLE_IOS(8_0);

#pragma mark - PHAsset types

typedef NS_ENUM(NSInteger, PHAssetEditOperation) {
    PHAssetEditOperationDelete     = 1,
    PHAssetEditOperationContent    = 2,
    PHAssetEditOperationProperties = 3,
} NS_AVAILABLE_IOS(8_0);

typedef NS_ENUM(NSInteger, PHAssetMediaType) {
    PHAssetMediaTypeUnknown = 0,
    PHAssetMediaTypeImage   = 1,
    PHAssetMediaTypeVideo   = 2,
    PHAssetMediaTypeAudio   = 3,
} NS_ENUM_AVAILABLE_IOS(8_0);

typedef NS_OPTIONS(NSUInteger, PHAssetMediaSubtype) {
    PHAssetMediaSubtypeNone               = 0,
    
    // Photo subtypes
    PHAssetMediaSubtypePhotoPanorama      = (1UL << 0),
    PHAssetMediaSubtypePhotoHDR           = (1UL << 1),
    PHAssetMediaSubtypePhotoScreenshot NS_AVAILABLE_IOS(9_0) = (1UL << 2),
    PHAssetMediaSubtypePhotoLive NS_AVAILABLE_IOS(9_1) = (1UL << 3),

    
    // Video subtypes
    PHAssetMediaSubtypeVideoStreamed      = (1UL << 16),
    PHAssetMediaSubtypeVideoHighFrameRate = (1UL << 17),
    PHAssetMediaSubtypeVideoTimelapse     = (1UL << 18),
} NS_AVAILABLE_IOS(8_0);

typedef NS_OPTIONS(NSUInteger, PHAssetBurstSelectionType) {
    PHAssetBurstSelectionTypeNone     = 0,
    PHAssetBurstSelectionTypeAutoPick = (1UL << 0),
    PHAssetBurstSelectionTypeUserPick = (1UL << 1),
} NS_AVAILABLE_IOS(8_0);

typedef NS_OPTIONS(NSUInteger, PHAssetSourceType) {
    PHAssetSourceTypeNone            = 0,
    PHAssetSourceTypeUserLibrary     = (1UL << 0),
    PHAssetSourceTypeCloudShared     = (1UL << 1),
    PHAssetSourceTypeiTunesSynced    = (1UL << 2),
} NS_AVAILABLE_IOS(9_0);

typedef NS_ENUM(NSInteger, PHAssetResourceType) {
    PHAssetResourceTypePhoto                             = 1,
    PHAssetResourceTypeVideo                             = 2,
    PHAssetResourceTypeAudio                             = 3,
    PHAssetResourceTypeAlternatePhoto                    = 4,
    PHAssetResourceTypeFullSizePhoto                     = 5,
    PHAssetResourceTypeFullSizeVideo                     = 6,
    PHAssetResourceTypeAdjustmentData                    = 7,
    PHAssetResourceTypeAdjustmentBasePhoto               = 8,
    PHAssetResourceTypePairedVideo NS_AVAILABLE_IOS(9_1) = 9,
} NS_ENUM_AVAILABLE_IOS(9_0);

#endif
