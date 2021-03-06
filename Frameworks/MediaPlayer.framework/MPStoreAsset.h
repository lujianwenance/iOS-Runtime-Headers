/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@class AVAsset;

@interface MPStoreAsset : NSObject {
    AVAsset *_asset;
    unsigned long long _storeAssetType;
}

@property(retain) AVAsset * asset;
@property unsigned long long storeAssetType;

+ (id)assetForContext:(id)arg1 allowCloudDialogue:(bool)arg2;
+ (void)setShouldAlwaysAirPlayFromCloud:(bool)arg1;

- (void).cxx_destruct;
- (id)asset;
- (void)setAsset:(id)arg1;
- (void)setStoreAssetType:(unsigned long long)arg1;
- (unsigned long long)storeAssetType;

@end
