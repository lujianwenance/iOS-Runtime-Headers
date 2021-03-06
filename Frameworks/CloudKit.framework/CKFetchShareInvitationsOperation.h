/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/CloudKit.framework/CloudKit
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

@class NSMutableArray;

@interface CKFetchShareInvitationsOperation : CKOperation {
    id _fetchShareInvitationsCompletionBlock;
    long long _fetchType;
    NSMutableArray *_fetchedInvitations;
    bool_queryAllContainers;
}

@property(copy) id fetchShareInvitationsCompletionBlock;
@property long long fetchType;
@property(retain) NSMutableArray * fetchedInvitations;
@property bool queryAllContainers;

+ (id)fetchReceivedInvitationsOperation;
+ (id)fetchSentInvitationsOperation;

- (void).cxx_destruct;
- (void)_finishOnCallbackQueueWithError:(id)arg1;
- (void)_handleProgressCallback:(id)arg1;
- (id)_initWithFetchType:(long long)arg1;
- (id)fetchShareInvitationsCompletionBlock;
- (long long)fetchType;
- (id)fetchedInvitations;
- (void)fillOutOperationInfo:(id)arg1;
- (void)performCKOperation;
- (bool)queryAllContainers;
- (void)setFetchShareInvitationsCompletionBlock:(id)arg1;
- (void)setFetchType:(long long)arg1;
- (void)setFetchedInvitations:(id)arg1;
- (void)setQueryAllContainers:(bool)arg1;

@end
