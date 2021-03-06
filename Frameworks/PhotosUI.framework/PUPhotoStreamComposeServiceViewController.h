/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

@class <PUPhotoStreamComposeServiceDelegate>, NSArray, NSString;

@interface PUPhotoStreamComposeServiceViewController : SLComposeServiceViewController <PUPhotoStreamsAlbumsTableViewControllerDelegate, PUPhotoStreamCreateTitleDelegate, PUCloudSharedCreateAlbumViewControllerDelegate, SLSheetViewHostProtocol> {
    struct { 
        unsigned int hasDidPost : 1; 
        unsigned int hasDidCancel : 1; 
    NSArray *_actions;
    struct NSObject { Class x1; } *_albumList;
    NSString *_albumTitle;
    id _completion;
    <PUPhotoStreamComposeServiceDelegate> *_delegate;
    } _delegateFlags;
    NSString *_itemCountString;
    NSArray *_recipients;
    struct NSObject { Class x1; } *_selectedAlbum;
    bool_addToExistingWorkflow;
    bool_inCreateNewAlbum;
    bool_shouldAllowAlbumPicking;
    bool_shouldShowPost;
}

@property bool addToExistingWorkflow;
@property(retain) NSString * albumTitle;
@property(copy) id completion;
@property(copy,readonly) NSString * debugDescription;
@property <PUPhotoStreamComposeServiceDelegate> * delegate;
@property(copy,readonly) NSString * description;
@property(readonly) unsigned long long hash;
@property bool shouldAllowAlbumPicking;
@property(readonly) Class superclass;

- (void).cxx_destruct;
- (void)_pushTitleController;
- (bool)addToExistingWorkflow;
- (id)albumListAction;
- (void)albumStreamingCreateViewController:(id)arg1 didSucceed:(bool)arg2;
- (id)albumTitle;
- (void)cancel;
- (id)completion;
- (void)controller:(id)arg1 didSelectAlbum:(struct NSObject { Class x1; }*)arg2;
- (void)controllerWillCreateNewAlbum:(id)arg1;
- (id)delegate;
- (void)failWithError:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void)send;
- (id)serviceIconImage;
- (void)setAddToExistingWorkflow:(bool)arg1;
- (void)setAlbumTitle:(id)arg1;
- (void)setAssetsToShare:(id)arg1;
- (void)setCompletion:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setShouldAllowAlbumPicking:(bool)arg1;
- (id)sheetActions;
- (void)sheetDidSendWithSucess:(id)arg1 error:(id)arg2;
- (void)sheetFailedWithError:(id)arg1;
- (bool)shouldAllowAlbumPicking;
- (void)shouldShowNetworkActivityIndicator:(id)arg1;
- (id)title;
- (void)titleController:(id)arg1 didSetTitle:(id)arg2;
- (void)titleControllerDidCancel:(id)arg1;
- (void)userDidCancel;
- (void)userDidCancelWithoutAnimation;
- (void)userDidPost;
- (void)viewDidLoad;

@end
