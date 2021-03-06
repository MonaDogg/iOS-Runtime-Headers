/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PhotosUI.framework/PhotosUI
 */

@class <PLCloudSharedAlbumProtocol>, NSArray, NSDate, NSIndexSet, NSOrderedSet, NSString, PLCloudFeedEntry, PLCloudSharedAlbumInvitationRecord, PLManagedAsset;

@interface PUFeedSectionInfo : NSObject <PLAssetContainer> {
    NSString *_albumTitle;
    PLCloudFeedEntry *_cloudFeedEntry;
    NSDate *_date;
    NSIndexSet *_excludedAssetIndexes;
    PLCloudSharedAlbumInvitationRecord *_invitationRecord;
    PLManagedAsset *_keyAsset;
    BOOL _loaded;
    int _numberOfItems;
    PLManagedAsset *_secondaryKeyAsset;
    int _sectionType;
    <PLCloudSharedAlbumProtocol> *_sharedAlbum;
    BOOL _shouldBeVisibleWhenEmpty;
    PLManagedAsset *_tertiaryKeyAsset;
}

@property(copy) NSString * albumTitle;
@property(readonly) unsigned int approximateCount;
@property(readonly) NSOrderedSet * assets;
@property(readonly) unsigned int assetsCount;
@property(readonly) BOOL canShowAvalancheStacks;
@property(readonly) BOOL canShowComments;
@property(readonly) PLCloudFeedEntry * cloudFeedEntry;
@property(copy) NSDate * date;
@property(readonly) NSDate * endDate;
@property(copy) NSIndexSet * excludedAssetIndexes;
@property(retain) PLCloudSharedAlbumInvitationRecord * invitationRecord;
@property(readonly) BOOL isEmpty;
@property(retain) PLManagedAsset * keyAsset;
@property(getter=isLoaded) BOOL loaded;
@property(readonly) NSArray * localizedLocationNames;
@property(readonly) NSString * localizedTitle;
@property int numberOfItems;
@property(readonly) unsigned int photosCount;
@property(retain) PLManagedAsset * secondaryKeyAsset;
@property(readonly) int sectionType;
@property(retain) <PLCloudSharedAlbumProtocol> * sharedAlbum;
@property BOOL shouldBeVisibleWhenEmpty;
@property(readonly) NSDate * startDate;
@property(retain) PLManagedAsset * tertiaryKeyAsset;
@property(readonly) NSString * title;
@property(readonly) NSString * uuid;
@property(readonly) unsigned int videosCount;

+ (id)sectionInfoWithCloudFeedEntry:(id)arg1;

- (void).cxx_destruct;
- (id)albumTitle;
- (unsigned int)approximateCount;
- (BOOL)areAllAssetsLiked;
- (id)assetForItemAtIndex:(int)arg1;
- (id)assets;
- (unsigned int)assetsCount;
- (id)assetsForItemAtIndex:(int)arg1 maximumCount:(int)arg2;
- (id)batchIDForItemAtIndex:(int)arg1;
- (BOOL)canPerformEditOperation:(int)arg1;
- (BOOL)canShowAvalancheStacks;
- (BOOL)canShowComments;
- (id)captionForItemAtIndex:(int)arg1;
- (id)cloudFeedEntry;
- (id)commentForItemAtIndex:(int)arg1;
- (BOOL)containsAsset:(id)arg1;
- (id)date;
- (id)excludedAssetIndexes;
- (void)getCommentCount:(out unsigned int*)arg1 likeCount:(out unsigned int*)arg2;
- (void)getPhotoCount:(out unsigned int*)arg1 videoCount:(out unsigned int*)arg2;
- (BOOL)hasMultipleAssetsForItemAtIndex:(int)arg1;
- (int)indexOfItemWithAsset:(id)arg1;
- (int)indexOfItemWithComment:(id)arg1;
- (id)initWithCloudFeedEntry:(id)arg1;
- (id)invitationRecord;
- (BOOL)isEmpty;
- (BOOL)isLoaded;
- (id)keyAsset;
- (id)likesForItemAtIndex:(int)arg1;
- (id)localizedLocationNames;
- (id)localizedTitle;
- (int)numberOfItems;
- (unsigned int)photosCount;
- (void)reload;
- (id)secondaryKeyAsset;
- (int)sectionType;
- (void)setAlbumTitle:(id)arg1;
- (void)setDate:(id)arg1;
- (void)setExcludedAssetIndexes:(id)arg1;
- (void)setInvitationRecord:(id)arg1;
- (void)setKeyAsset:(id)arg1;
- (void)setLoaded:(BOOL)arg1;
- (void)setNumberOfItems:(int)arg1;
- (void)setSecondaryKeyAsset:(id)arg1;
- (void)setSharedAlbum:(id)arg1;
- (void)setShouldBeVisibleWhenEmpty:(BOOL)arg1;
- (void)setTertiaryKeyAsset:(id)arg1;
- (id)sharedAlbum;
- (BOOL)shouldBeVisibleWhenEmpty;
- (id)tertiaryKeyAsset;
- (id)title;
- (int)typeForItemAtIndex:(int)arg1;
- (void)updateFromCloudFeedEntry;
- (id)uuid;
- (unsigned int)videosCount;

@end
