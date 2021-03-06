/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/WirelessProximity.framework/WirelessProximity
 */

@class <WPAdvertisingDelegate>, NSString, XPCClient;

@interface WPAdvertising : NSObject <XPCClientDelegate> {
    XPCClient *_connection;
    <WPAdvertisingDelegate> *_delegate;
    long long _state;
}

@property(retain) XPCClient * connection;
@property(copy,readonly) NSString * debugDescription;
@property(retain) <WPAdvertisingDelegate> * delegate;
@property(copy,readonly) NSString * description;
@property(readonly) unsigned long long hash;
@property long long state;
@property(readonly) Class superclass;

- (void).cxx_destruct;
- (id)connection;
- (void)connectionDied;
- (void)connectionInterrupted;
- (void)dealloc;
- (id)delegate;
- (void)deregisterService:(id)arg1;
- (id)description;
- (id)initWithDelegate:(id)arg1 queue:(id)arg2;
- (id)initWithDelegate:(id)arg1;
- (void)messageArrived:(id)arg1;
- (void)registerService:(id)arg1;
- (void)setConnection:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setState:(long long)arg1;
- (long long)state;
- (void)updateState:(long long)arg1;

@end
