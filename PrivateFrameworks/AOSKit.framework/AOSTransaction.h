/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/AOSKit.framework/AOSKit
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

/* RuntimeBrowser encountered one or more ivar type encodings for a function pointer. 
   The runtime does not encode function signature information.  We use a signature of: 
           "int (*funcName)()",  where funcName might be null. 
 */

@class NSConditionLock, NSObject<OS_dispatch_queue>;

@interface AOSTransaction : NSObject <NSCoding> {
    int (*callbackFunction)();
    int (*contextRelease)();
    int (*contextRetain)();
    id callbackBlock;
    NSObject<OS_dispatch_queue> *callbackQueue;
    void *context;
    unsigned char didFinish;
    unsigned char didSucceed;
    struct __CFError { } *error;
    void *result;
    NSConditionLock *waitLock;
}

- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (id)error;
- (void)finalize;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (bool)isSuccessful;
- (id)result;

@end
