/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
 */

@class SUMediaPlayerItem;

@interface SUPrepareMediaItemOperation : ISOperation {
    SUMediaPlayerItem *_mediaItem;
}

@property(copy,readonly) SUMediaPlayerItem * mediaPlayerItem;

- (bool)_runHEADRequest:(id*)arg1;
- (void)dealloc;
- (id)init;
- (id)initWithMediaPlayerItem:(id)arg1;
- (id)mediaPlayerItem;
- (void)run;

@end
