/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

@class NSDictionary, NSIndexPath, NSMutableArray, NSMutableSet, NSString, PHCachingImageManager, PLCloudSharedAlbum, PLCloudSharedComment, PLDateRangeFormatter, PLManagedAlbumList, PLManagedAsset, PUAlbumStreamActivity, PUFeedAssetContainerList, PUFeedSectionInfosManager, PUFeedViewControllerRestorableState, PUFeedViewControllerSpec, PUPhotoPinchGestureRecognizer, PUPhotosPickerViewController, PUScrollViewSpeedometer, UIBarButtonItem, UICollectionView, UIPopoverController, UITapGestureRecognizer, UIViewController, _UIContentUnavailableView;

@interface PUFeedViewController : UIViewController <UICollectionViewDataSource, UICollectionViewDelegate, PUFeedCollectionViewLayoutDelegate, PUFeedSectionInfosManagerDelegate, PUPhotoBrowserZoomTransitionDelegate, PUFeedImageCellDelegate, PUFeedTextCellDelegate, PUFeedInvitationCellDelegate, UIGestureRecognizerDelegate, PUAlbumStreamActivityDelegate, _UISettingsKeyObserver, PUScrollViewSpeedometerDelegate, PLCloudFeedNavigating, PLNavigableCloudFeedViewController> {
    struct CGSize { 
        double width; 
        double height; 
    struct CGPoint { 
        double x; 
        double y; 
    PUAlbumStreamActivity *__albumStreamActivity;
    long long __barsState;
    PUFeedAssetContainerList *__browsingAssetContainerList;
    PLManagedAsset *__browsingSelectedAsset;
    PLCloudSharedComment *__browsingSelectedComment;
    PHCachingImageManager *__cachingImageManager;
    PUScrollViewSpeedometer *__collectionViewSpeedometer;
    UICollectionView *__currentCollectionView;
    long long __currentCollectionViewType;
    PLDateRangeFormatter *__dateRangeFormatter;
    _UIContentUnavailableView *__emptyPlaceholderView;
    PUFeedSectionInfosManager *__feedSectionInfosManager;
    NSIndexPath *__indexPathForImageHiddenDuringZoomTransition;
    UIBarButtonItem *__invitationsBarButtonItem;
    UIPopoverController *__invitationsPopoverController;
    NSDictionary *__justLikedSections;
    NSMutableArray *__lastPreheatIndexPathInfoList;
    NSMutableArray *__lastPreheatIndexPathList;
    } __lastPreheatedContentOffset;
    long long __loadedSectionInfosWindowSize;
    PUPhotoPinchGestureRecognizer *__pinchGestureRecognizer;
    UICollectionView *__pinchedCollectionView;
    double __preheatingWindowSize;
    PUPhotosPickerViewController *__presentedPhotosPickerViewController;
    PLCloudSharedAlbum *__pushedAlbum;
    UIViewController *__pushedViewController;
    PUFeedViewControllerRestorableState *__rotationLastRestorableState;
    NSMutableSet *__sectionInfosWithCommentChanges;
    PLManagedAlbumList *__sharedAlbumList;
    long long __sizeTransitionState;
    UITapGestureRecognizer *__tapGestureRecognizer;
    UICollectionView *__targetCollectionView;
    long long __targetCollectionViewType;
    } __targetSize;
    NSMutableSet *__updatedAssets;
    long long _contentType;
    PUFeedViewControllerSpec *_spec;
    bool__appJustEnteredForeground;
    bool__collectionViewScrolledToNewest;
    bool__flowDirectionReversed;
    bool__interfaceBatchUpdateScheduled;
    bool__invitationsPopoverShowPending;
    bool__libraryUpdatingPreviouslyExpired;
    bool__shouldSuspendQualityImageFormats;
    bool__userDidDismissPlaceholder;
    bool__viewDidAppear;
    bool__viewsInSyncWithModel;
}

@property(setter=_setAlbumStreamActivity:,retain) PUAlbumStreamActivity * _albumStreamActivity;
@property(setter=_setAppJustEnteredForeground:) bool _appJustEnteredForeground;
@property(setter=_setBarsState:) long long _barsState;
@property(setter=_setBrowsingAssetContainerList:,retain) PUFeedAssetContainerList * _browsingAssetContainerList;
@property(setter=_setBrowsingSelectedAsset:,retain) PLManagedAsset * _browsingSelectedAsset;
@property(setter=_setBrowsingSelectedComment:,retain) PLCloudSharedComment * _browsingSelectedComment;
@property(readonly) PHCachingImageManager * _cachingImageManager;
@property(getter=_isCollectionViewScrolledToNewest,setter=_setCollectionViewScrolledToNewest:) bool _collectionViewScrolledToNewest;
@property(setter=_setCollectionViewSpeedometer:,retain) PUScrollViewSpeedometer * _collectionViewSpeedometer;
@property(setter=_setCurrentCollectionView:,retain) UICollectionView * _currentCollectionView;
@property(setter=_setCurrentCollectionViewType:) long long _currentCollectionViewType;
@property(readonly) PLDateRangeFormatter * _dateRangeFormatter;
@property(setter=_setEmptyPlaceholderView:,retain) _UIContentUnavailableView * _emptyPlaceholderView;
@property(readonly) PUFeedSectionInfosManager * _feedSectionInfosManager;
@property(getter=_isFlowDirectionReversed,setter=_setFlowDirectionReversed:) bool _flowDirectionReversed;
@property(setter=_setIndexPathForImageHiddenDuringZoomTransition:,copy) NSIndexPath * _indexPathForImageHiddenDuringZoomTransition;
@property(getter=_isInterfaceBatchUpdateScheduled,setter=_setInterfaceBatchUpdateScheduled:) bool _interfaceBatchUpdateScheduled;
@property(setter=_setInvitationsBarButtonItem:,retain) UIBarButtonItem * _invitationsBarButtonItem;
@property(setter=_setInvitationsPopoverController:,retain) UIPopoverController * _invitationsPopoverController;
@property(getter=_isInvitationsPopoverShowPending,setter=_setInvitationsPopoverShowPending:) bool _invitationsPopoverShowPending;
@property(setter=_setJustLikedSections:,retain) NSDictionary * _justLikedSections;
@property(retain) NSMutableArray * _lastPreheatIndexPathInfoList;
@property(retain) NSMutableArray * _lastPreheatIndexPathList;
@property(setter=_setLastPreheatedContentOffset:) struct CGPoint { double x1; double x2; } _lastPreheatedContentOffset;
@property(getter=_isLibraryUpdatingPreviouslyExpired,setter=_setLibraryUpdatingPreviouslyExpired:) bool _libraryUpdatingPreviouslyExpired;
@property(setter=_setLoadedSectionInfosWindowSize:) long long _loadedSectionInfosWindowSize;
@property(setter=_setPinchGestureRecognizer:,retain) PUPhotoPinchGestureRecognizer * _pinchGestureRecognizer;
@property(setter=_setPinchedCollectionView:,retain) UICollectionView * _pinchedCollectionView;
@property(setter=_setPreheatingWindowSize:) double _preheatingWindowSize;
@property(setter=_setPresentedPhotosPickerViewController:,retain) PUPhotosPickerViewController * _presentedPhotosPickerViewController;
@property(setter=_setPushedAlbum:,retain) PLCloudSharedAlbum * _pushedAlbum;
@property(setter=_setPushedViewController:,retain) UIViewController * _pushedViewController;
@property(setter=_setRotationLastRestorableState:,retain) PUFeedViewControllerRestorableState * _rotationLastRestorableState;
@property(setter=_setSectionInfosWithCommentChanges:,retain) NSMutableSet * _sectionInfosWithCommentChanges;
@property(readonly) PLManagedAlbumList * _sharedAlbumList;
@property(setter=_setShouldSuspendQualityImageFormats:) bool _shouldSuspendQualityImageFormats;
@property(setter=_setSizeTransitionState:) long long _sizeTransitionState;
@property(setter=_setTapGestureRecognizer:,retain) UITapGestureRecognizer * _tapGestureRecognizer;
@property(setter=_setTargetCollectionView:,retain) UICollectionView * _targetCollectionView;
@property(setter=_setTargetCollectionViewType:) long long _targetCollectionViewType;
@property(setter=_setTargetSize:) struct CGSize { double x1; double x2; } _targetSize;
@property(setter=_setUpdatedAssets:,retain) NSMutableSet * _updatedAssets;
@property(setter=_setUserDidDismissPlaceholder:) bool _userDidDismissPlaceholder;
@property(setter=_setViewDidAppear:) bool _viewDidAppear;
@property(getter=_areViewsInSyncWithModel,setter=_setViewsInSyncWithModel:) bool _viewsInSyncWithModel;
@property(readonly) long long contentType;
@property(copy,readonly) NSString * debugDescription;
@property(copy,readonly) NSString * description;
@property(readonly) unsigned long long hash;
@property(readonly) PUFeedViewControllerSpec * spec;
@property(readonly) Class superclass;

+ (void)initialize;

- (void).cxx_destruct;
- (id)_albumStreamActivity;
- (bool)_appAllowsSupressionOfAlerts;
- (void)_appDidEnterBackground:(id)arg1;
- (void)_appDidFinishEnteringForeground;
- (bool)_appJustEnteredForeground;
- (void)_appWillEnterForeground:(id)arg1;
- (bool)_areSharedStreamsEnabled;
- (bool)_areViewsInSyncWithModel;
- (id)_assetForItemAtIndexPath:(id)arg1 inCollectionView:(id)arg2;
- (void)_autoHideBarsNow;
- (long long)_barsState;
- (bool)_beginInteractiveNavigationForItemAtIndexPath:(id)arg1 inCollectionView:(id)arg2;
- (id)_browsingAssetContainerList;
- (id)_browsingSelectedAsset;
- (id)_browsingSelectedComment;
- (long long)_browsingSelectedSection;
- (id)_cachingImageManager;
- (void)_cancelBarsAutoHide;
- (id)_collectionViewContainingView:(id)arg1;
- (id)_collectionViewSpeedometer;
- (long long)_collectionViewTypeForSize:(struct CGSize { double x1; double x2; })arg1;
- (id)_collectionViews;
- (void)_configureCollectionView:(id)arg1;
- (void)_configureImageCell:(id)arg1 forAssetAtIndexPath:(id)arg2 inCollectionView:(id)arg3;
- (void)_configureImageCell:(id)arg1 forThumbnailAtIndexPath:(id)arg2 inCollectionView:(id)arg3;
- (void)_configureInvitationCell:(id)arg1 forInvitationAtIndexPath:(id)arg2 inCollectionView:(id)arg3;
- (void)_configureSpeedometer:(id)arg1;
- (void)_configureStackCell:(id)arg1 forThumbnailsAtIndexPath:(id)arg2 inCollectionView:(id)arg3;
- (void)_configureTextCell:(id)arg1 forCaptionAtIndexPath:(id)arg2 inCollectionView:(id)arg3;
- (void)_configureTextCell:(id)arg1 forCommentAtIndexPath:(id)arg2 inCollectionView:(id)arg3;
- (bool)_configureTextCell:(id)arg1 forFooterOfSection:(long long)arg2 inCollectionView:(id)arg3;
- (void)_configureTextCell:(id)arg1 forHeaderOfGroupID:(id)arg2 inCollectionView:(id)arg3;
- (void)_configureTextCell:(id)arg1 forHeaderOfSections:(id)arg2 inCollectionView:(id)arg3 animated:(bool)arg4;
- (void)_configureTextCell:(id)arg1 forLikesAtIndexPath:(id)arg2 inCollectionView:(id)arg3;
- (void)_configureTextCell:(id)arg1 forTextAtIndexPath:(id)arg2 inCollectionView:(id)arg3;
- (void)_contextDidFinishRemoteMerge:(id)arg1;
- (void)_createNewStream;
- (id)_currentCollectionView;
- (long long)_currentCollectionViewType;
- (id)_currentRestorableState;
- (id)_dateForSectionWithInfo:(id)arg1;
- (id)_dateRangeFormatter;
- (void)_dateRangeFormatterChanged:(id)arg1;
- (long long)_defaultMaximumScrollRegimeForQualityImageFormats;
- (void)_didTapSectionFooterFeedCell:(id)arg1;
- (void)_didTapSectionHeaderFeedCell:(id)arg1;
- (void)_didTapThumbnailOrOverlayPlayButtonInFeedCell:(id)arg1;
- (id)_emptyPlaceholderView;
- (void)_ensureWindowOfLoadedSectionInfosIncludesSection:(long long)arg1;
- (void)_enumerateCenterAssetsInRestorableState:(id)arg1 inCollectionView:(id)arg2 usingBlock:(id)arg3;
- (void)_expandWindowOfLoadedSectionInfos;
- (id)_feedSectionInfosManager;
- (void)_getDescriptionPhrase:(out id*)arg1 streamAffordanceLabel:(out id*)arg2 actionText:(out id*)arg3 buttonType:(long long*)arg4 forSections:(id)arg5 inCollectionView:(id)arg6;
- (void)_getPhotoBrowserController:(out id*)arg1 transition:(out id*)arg2 withOptions:(long long)arg3;
- (id)_groupIDForSectionWithInfo:(id)arg1;
- (void)_handlePinch:(id)arg1;
- (void)_handlePlaceholderAction;
- (void)_handleTap:(id)arg1;
- (id)_indexPathForImageHiddenDuringZoomTransition;
- (id)_indexPathForItemWithAsset:(id)arg1 inCollectionView:(id)arg2;
- (void)_invalidateLastPreheatedContentOffset;
- (void)_invalidatePreheatedAssets;
- (id)_invitationsBarButtonItem;
- (void)_invitationsButtonAction:(id)arg1;
- (id)_invitationsPopoverController;
- (bool)_isAnySharedAlbumAvailable;
- (bool)_isCollectionViewEmpty:(id)arg1;
- (bool)_isCollectionViewScrolledToNewest;
- (bool)_isFlowDirectionReversed;
- (bool)_isInterfaceBatchUpdateScheduled;
- (bool)_isInvitationsPopoverShowPending;
- (bool)_isLibraryUpdatingPreviouslyExpired;
- (bool)_isLibraryUpdatingTimeoutExpired;
- (id)_justLikedSections;
- (id)_lastPreheatIndexPathInfoList;
- (id)_lastPreheatIndexPathList;
- (struct CGPoint { double x1; double x2; })_lastPreheatedContentOffset;
- (void)_libraryUpdatingDidExpire:(id)arg1;
- (id)_loadedSectionInfoForCloudFeedEntry:(id)arg1;
- (long long)_loadedSectionInfosWindowSize;
- (void)_navigateToRevealAsset:(id)arg1 completion:(id)arg2;
- (bool)_navigateToRevealComment:(id)arg1 completion:(id)arg2;
- (void)_navigateToRevealPhoto:(id)arg1 inAlbum:(struct NSObject { Class x1; }*)arg2 animated:(bool)arg3;
- (void)_navigateToSectionInfo:(id)arg1 atItemIndex:(long long)arg2 completion:(id)arg3;
- (long long)_numberOfSectionInfosForCollectionView:(id)arg1;
- (void)_openiCloudSettings;
- (void)_performInterfaceBatchUpdateNow;
- (id)_pinchGestureRecognizer;
- (id)_pinchedCollectionView;
- (long long)_placeholderTypeForSizeTransitionState:(long long)arg1;
- (void)_preheatSectionInfosAtIndexes:(id)arg1;
- (double)_preheatingWindowSize;
- (id)_presentedPhotosPickerViewController;
- (id)_pushedAlbum;
- (id)_pushedViewController;
- (void)_restoreScrollPositionInCollectionView:(id)arg1 fromRestorableState:(id)arg2;
- (id)_rotationLastRestorableState;
- (void)_scheduleBarsAutoHide;
- (void)_scheduleInterfaceUpdateForSectionInfosWithCommentChanges:(id)arg1 updatedAssets:(id)arg2;
- (id)_sectionInfoForSection:(long long)arg1 collectionView:(id)arg2;
- (id)_sectionInfosForBrowsingFromSectionInfo:(id)arg1;
- (id)_sectionInfosForSections:(id)arg1 collectionView:(id)arg2;
- (id)_sectionInfosWithCommentChanges;
- (void)_setAlbumStreamActivity:(id)arg1;
- (void)_setAppJustEnteredForeground:(bool)arg1;
- (void)_setBarsState:(long long)arg1;
- (void)_setBrowsingAssetContainerList:(id)arg1;
- (void)_setBrowsingSelectedAsset:(id)arg1;
- (void)_setBrowsingSelectedComment:(id)arg1;
- (void)_setCollectionViewScrolledToNewest:(bool)arg1;
- (void)_setCollectionViewSpeedometer:(id)arg1;
- (void)_setCurrentCollectionView:(id)arg1;
- (void)_setCurrentCollectionViewType:(long long)arg1;
- (void)_setEmptyPlaceholderView:(id)arg1;
- (void)_setFlowDirectionReversed:(bool)arg1;
- (void)_setIndexPathForImageHiddenDuringZoomTransition:(id)arg1;
- (void)_setInterfaceBatchUpdateScheduled:(bool)arg1;
- (void)_setInvitationsBarButtonItem:(id)arg1;
- (void)_setInvitationsPopoverController:(id)arg1;
- (void)_setInvitationsPopoverShowPending:(bool)arg1;
- (void)_setJustLikedSections:(id)arg1;
- (void)_setLastPreheatedContentOffset:(struct CGPoint { double x1; double x2; })arg1;
- (void)_setLibraryUpdatingPreviouslyExpired:(bool)arg1;
- (void)_setLoadedSectionInfosWindowSize:(long long)arg1;
- (void)_setPinchGestureRecognizer:(id)arg1;
- (void)_setPinchedCollectionView:(id)arg1;
- (void)_setPreheatingWindowSize:(double)arg1;
- (void)_setPresentedPhotosPickerViewController:(id)arg1;
- (void)_setPushedAlbum:(id)arg1;
- (void)_setPushedViewController:(id)arg1;
- (void)_setRotationLastRestorableState:(id)arg1;
- (void)_setSectionInfosWithCommentChanges:(id)arg1;
- (void)_setShouldSuspendQualityImageFormats:(bool)arg1;
- (void)_setSizeTransitionState:(long long)arg1;
- (void)_setTapGestureRecognizer:(id)arg1;
- (void)_setTargetCollectionView:(id)arg1;
- (void)_setTargetCollectionViewType:(long long)arg1;
- (void)_setTargetSize:(struct CGSize { double x1; double x2; })arg1;
- (void)_setUpdatedAssets:(id)arg1;
- (void)_setUserCloudSharedLiked:(bool)arg1 forItemsInSections:(id)arg2 inCollectionView:(id)arg3;
- (void)_setUserDidDismissPlaceholder:(bool)arg1;
- (void)_setViewDidAppear:(bool)arg1;
- (void)_setViewsInSyncWithModel:(bool)arg1;
- (void)_setupBrowsingFromAsset:(id)arg1 orComment:(id)arg2;
- (bool)_setupBrowsingFromItemAtIndexPath:(id)arg1 inCollectionView:(id)arg2;
- (id)_sharedAlbumList;
- (bool)_shouldHideHeaderForSectionWithType:(long long)arg1;
- (bool)_shouldHideSectionInfo:(id)arg1 forCollectionView:(id)arg2;
- (bool)_shouldHideSectionWithType:(long long)arg1 inCollectionViewType:(long long)arg2;
- (bool)_shouldJoinSectionInfo:(id)arg1 withSectionInfo:(id)arg2 collectionViewType:(long long)arg3;
- (bool)_shouldShowBarsForCollectionViewType:(long long)arg1;
- (bool)_shouldShowTransitionUI;
- (bool)_shouldSuspendQualityImageFormats;
- (void)_showInvitationsPopoverAnimated:(bool)arg1;
- (void)_showOutOfNetworkInvitationMessageForSharedAlbum:(id)arg1 completionHandler:(id)arg2;
- (long long)_sizeTransitionState;
- (id)_suppressionContexts;
- (id)_tapGestureRecognizer;
- (id)_targetCollectionView;
- (long long)_targetCollectionViewType;
- (struct CGSize { double x1; double x2; })_targetSize;
- (void)_tearDownBrowsing;
- (id)_textForDate:(id)arg1;
- (long long)_typeForCollectionView:(id)arg1;
- (long long)_typeForSectionInfo:(id)arg1;
- (void)_updateBrowsingAssetContainerList;
- (void)_updateCollectionViews;
- (void)_updateEmptyPlaceholderAnimated:(bool)arg1;
- (void)_updateInterfaceForDeletedSections:(id)arg1 insertedSections:(id)arg2 updatedSections:(id)arg3;
- (void)_updateInterfaceForModelReloadAnimated:(bool)arg1;
- (void)_updateNavigationItemAnimated:(bool)arg1;
- (void)_updatePeripheralInterfaceAnimated:(bool)arg1;
- (void)_updatePreheatedAssetsForCollectionView:(id)arg1;
- (void)_updateSectionsWithCaptionChangesFromUpdatedAssets:(id)arg1;
- (bool)_updateSpec;
- (void)_updateSubviewsOrdering;
- (void)_updateWindowOfLoadedSectionInfos;
- (id)_updatedAssets;
- (bool)_userDidDismissPlaceholder;
- (void)_userDidScrollFeed;
- (void)_userDidViewFeed;
- (bool)_viewDidAppear;
- (void)assetContainerListDidChange:(id)arg1;
- (bool)canBecomeFirstResponder;
- (bool)cloudFeedAssetIsAvailableForNavigation:(id)arg1;
- (bool)cloudFeedCommentIsAvailableForNavigation:(id)arg1;
- (bool)cloudFeedInvitationForAlbumIsAvailableForNavigation:(id)arg1;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (id)collectionView:(id)arg1 layout:(id)arg2 batchIDForTileAtIndexPath:(id)arg3;
- (struct CGSize { double x1; double x2; })collectionView:(id)arg1 layout:(id)arg2 captionSizeForTileAtIndexPath:(id)arg3 proposedSize:(struct CGSize { double x1; double x2; })arg4;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })collectionView:(id)arg1 layout:(id)arg2 contentInsetsForSection:(long long)arg3;
- (id)collectionView:(id)arg1 layout:(id)arg2 groupIDForSection:(long long)arg3;
- (struct CGSize { double x1; double x2; })collectionView:(id)arg1 layout:(id)arg2 headerSizeForGroupID:(id)arg3 proposedSize:(struct CGSize { double x1; double x2; })arg4;
- (struct CGSize { double x1; double x2; })collectionView:(id)arg1 layout:(id)arg2 imageSizeForTileAtIndexPath:(id)arg3;
- (struct PUFeedSeparatorMetrics { struct CGSize { double x_1_1_1; double x_1_1_2; } x1; struct UIEdgeInsets { double x_2_1_1; double x_2_1_2; double x_2_1_3; double x_2_1_4; } x2; })collectionView:(id)arg1 layout:(id)arg2 metricsForSeparatorBetweenRowAtIndexPath:(id)arg3 andRowAtIndexPath:(id)arg4 proposedMetrics:(struct PUFeedSeparatorMetrics { struct CGSize { double x_1_1_1; double x_1_1_2; } x1; struct UIEdgeInsets { double x_2_1_1; double x_2_1_2; double x_2_1_3; double x_2_1_4; } x2; })arg5;
- (struct PUFeedSeparatorMetrics { struct CGSize { double x_1_1_1; double x_1_1_2; } x1; struct UIEdgeInsets { double x_2_1_1; double x_2_1_2; double x_2_1_3; double x_2_1_4; } x2; })collectionView:(id)arg1 layout:(id)arg2 metricsForSeparatorBetweenSection:(long long)arg3 andSection:(long long)arg4 proposedMetrics:(struct PUFeedSeparatorMetrics { struct CGSize { double x_1_1_1; double x_1_1_2; } x1; struct UIEdgeInsets { double x_2_1_1; double x_2_1_2; double x_2_1_3; double x_2_1_4; } x2; })arg5;
- (struct CGSize { double x1; double x2; })collectionView:(id)arg1 layout:(id)arg2 mininumSizeForTileAtIndexPath:(id)arg3;
- (void)collectionView:(id)arg1 layout:(id)arg2 referenceMaximumLength:(double*)arg3 minimumNumberOfTilesToOmit:(long long*)arg4 forSection:(long long)arg5;
- (bool)collectionView:(id)arg1 layout:(id)arg2 shouldHideHeaderInSection:(long long)arg3;
- (bool)collectionView:(id)arg1 layout:(id)arg2 shouldHideSection:(long long)arg3;
- (bool)collectionView:(id)arg1 layout:(id)arg2 shouldJoinSection:(long long)arg3 withSection:(long long)arg4;
- (bool)collectionView:(id)arg1 layout:(id)arg2 shouldShowCaptionForTileAtIndexPath:(id)arg3;
- (struct CGSize { double x1; double x2; })collectionView:(id)arg1 layout:(id)arg2 sizeForFooterInSection:(long long)arg3 proposedSize:(struct CGSize { double x1; double x2; })arg4;
- (struct CGSize { double x1; double x2; })collectionView:(id)arg1 layout:(id)arg2 sizeForHeaderOfSections:(id)arg3 proposedSize:(struct CGSize { double x1; double x2; })arg4;
- (struct CGSize { double x1; double x2; })collectionView:(id)arg1 layout:(id)arg2 sizeForRowAtIndexPath:(id)arg3 proposedSize:(struct CGSize { double x1; double x2; })arg4;
- (struct CGSize { double x1; double x2; })collectionView:(id)arg1 layout:(id)arg2 sizeForThumbnailInSection:(long long)arg3;
- (double)collectionView:(id)arg1 layout:(id)arg2 spacingBetweenSection:(long long)arg3 andHeaderForGroupID:(id)arg4;
- (long long)collectionView:(id)arg1 layout:(id)arg2 typeForSection:(long long)arg3;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (bool)collectionView:(id)arg1 shouldSelectItemAtIndexPath:(id)arg2;
- (id)collectionView:(id)arg1 viewForSupplementaryElementOfKind:(id)arg2 atIndexPath:(id)arg3;
- (id)contentScrollView;
- (struct CGSize { double x1; double x2; })contentSizeForViewInPopover;
- (long long)contentType;
- (void)dealloc;
- (void)didTapButtonInFeedTextCell:(id)arg1;
- (void)didTapCommentButtonInFeedImageCell:(id)arg1;
- (void)didTapFeedCell:(id)arg1;
- (void)didTapOverlayPlayButtonInFeedImageCell:(id)arg1;
- (void)feedInvitationCell:(id)arg1 didAccept:(bool)arg2;
- (void)feedSectionInfosManager:(id)arg1 sectionInfosDidChange:(id)arg2;
- (bool)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (bool)gestureRecognizerShouldBegin:(id)arg1;
- (id)initWithSpec:(id)arg1 contentType:(long long)arg2;
- (void)navigateToCloudFeedAsset:(id)arg1 completion:(id)arg2;
- (void)navigateToCloudFeedComment:(id)arg1 completion:(id)arg2;
- (void)navigateToNewestContentAnimated:(bool)arg1;
- (void)navigateToRevealCloudFeedAsset:(id)arg1 completion:(id)arg2;
- (void)navigateToRevealCloudFeedComment:(id)arg1 completion:(id)arg2;
- (void)navigateToRevealCloudFeedInvitationForAlbum:(id)arg1 completion:(id)arg2;
- (long long)numberOfSectionsInCollectionView:(id)arg1;
- (id)ppt_currentCollectionView;
- (bool)prepareForDismissingForced:(bool)arg1;
- (bool)pu_handleSecondTabTap;
- (bool)pu_shouldActAsTabRootViewController;
- (bool)pu_wantsNavigationBarVisible;
- (bool)pu_wantsStatusBarVisible;
- (bool)pu_wantsTabBarVisible;
- (bool)pu_wantsToolbarVisible;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(bool)arg2;
- (void)scrollViewDidScroll:(id)arg1;
- (void)scrollViewDidScrollToTop:(id)arg1;
- (bool)scrollViewShouldScrollToTop:(id)arg1;
- (void)scrollViewSpeedometer:(id)arg1 regimeDidChange:(long long)arg2 from:(long long)arg3;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)set_lastPreheatIndexPathInfoList:(id)arg1;
- (void)set_lastPreheatIndexPathList:(id)arg1;
- (void)settings:(id)arg1 changedValueForKey:(id)arg2;
- (bool)shouldAutorotate;
- (id)spec;
- (void)viewDidAppear:(bool)arg1;
- (void)viewDidDisappear:(bool)arg1;
- (void)viewDidLoad;
- (void)viewWillAppear:(bool)arg1;
- (void)viewWillDisappear:(bool)arg1;
- (void)viewWillTransitionToSize:(struct CGSize { double x1; double x2; })arg1 withTransitionCoordinator:(id)arg2;
- (void)zoomTransition:(id)arg1 didFinishForOperation:(long long)arg2 animated:(bool)arg3 interactive:(bool)arg4;
- (bool)zoomTransition:(id)arg1 getFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; }*)arg2 contentMode:(long long*)arg3 forPhotoToken:(id)arg4 operation:(long long)arg5;
- (id)zoomTransition:(id)arg1 photoTokenForPhoto:(id)arg2 inCollection:(id)arg3;
- (void)zoomTransition:(id)arg1 setVisibility:(bool)arg2 forPhotoToken:(id)arg3;
- (bool)zoomTransition:(id)arg1 transitionImageForPhotoToken:(id)arg2 callback:(id)arg3;
- (void)zoomTransition:(id)arg1 willBeginForOperation:(long long)arg2 animated:(bool)arg3 interactive:(bool)arg4;

@end
