/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

@class NSError;

@interface AVAssetWriterFailedTerminalHelper : AVAssetWriterTerminalHelper {
    NSError *_terminalError;
}

- (void)dealloc;
- (void)endSessionAtSourceTime:(struct { long long x1; NSInteger x2; NSUInteger x3; long long x4; })arg1;
- (id)error;
- (void)finishWriting;
- (id)initWithConfigurationState:(id)arg1 terminalError:(id)arg2;
- (id)initWithConfigurationState:(id)arg1;
- (void)startSessionAtSourceTime:(struct { long long x1; NSInteger x2; NSUInteger x3; long long x4; })arg1;
- (NSInteger)status;

@end