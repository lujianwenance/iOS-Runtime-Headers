/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/BaseBoard.framework/BaseBoard
 */

@class NSObject<OS_xpc_object>, NSString;

@interface BSBasicServerClient : NSObject <BSXPCServerClient> {
    NSObject<OS_xpc_object> *_connection;
}

@property(retain) NSObject<OS_xpc_object> * connection;
@property(copy,readonly) NSString * debugDescription;
@property(copy,readonly) NSString * description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

+ (id)wrapperWithConnection:(id)arg1;

- (id)connection;
- (void)dealloc;
- (id)description;
- (id)initWithConnection:(id)arg1;
- (void)invalidate;
- (void)sendMessage:(id)arg1;
- (void)sendMessageWithPacker:(id)arg1 replyHandler:(id)arg2 onQueue:(id)arg3;
- (void)sendMessageWithPacker:(id)arg1;
- (void)setConnection:(id)arg1;

@end
