/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CommonUtilities.framework/CommonUtilities
 */

@class <CUTFileCopierDelegate>, NSURL;

@interface CUTFileCopier : NSObject {
    void *_BOMCopier;
    <CUTFileCopierDelegate> *_delegate;
    id _identifier;
    NSURL *_inputURL;
    unsigned int _operation;
    NSURL *_outputURL;
    bool_didErrorOccur;
    bool_inProgress;
    bool_shouldCancel;
}

@property void* _BOMCopier;
@property <CUTFileCopierDelegate> * delegate;
@property(readonly) bool didErrorOccur;
@property(readonly) id identifier;
@property bool inProgress;
@property(readonly) NSURL * inputURL;
@property unsigned int operation;
@property(readonly) NSURL * outputURL;
@property(readonly) bool wasCancelled;

- (void*)_BOMCopier;
- (void)_fillOutputURLFromInputURL;
- (void)_main_copierFinishedWithResult:(id)arg1;
- (id)_temporaryCopierPath;
- (void)_worker_doCopy;
- (void)cancel;
- (void)cleanup;
- (void)dealloc;
- (id)delegate;
- (bool)didErrorOccur;
- (id)identifier;
- (bool)inProgress;
- (id)initWithInputURL:(id)arg1 outputURL:(id)arg2 identifier:(id)arg3 operation:(unsigned int)arg4 delegate:(id)arg5;
- (id)inputURL;
- (unsigned int)operation;
- (id)outputURL;
- (void)setDelegate:(id)arg1;
- (void)setInProgress:(bool)arg1;
- (void)setOperation:(unsigned int)arg1;
- (void)set_BOMCopier:(void*)arg1;
- (void)start;
- (bool)wasCancelled;

@end
