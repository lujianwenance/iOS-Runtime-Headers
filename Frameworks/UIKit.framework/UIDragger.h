/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

/* RuntimeBrowser encountered one or more ivar type encodings for a function pointer. 
   The runtime does not encode function signature information.  We use a signature of: 
           "int (*funcName)()",  where funcName might be null. 
 */

@class NSArray, UIImageView, UIView;

@interface UIDragger : NSObject {
    struct CGPoint { 
        double x; 
        double y; 
    struct CGPoint { 
        double x; 
        double y; 
    int (*_interpolator)();
    SEL _action;
    id _delegate;
    double _duration;
    UIImageView *_fingerView;
    unsigned long long _lastTimestamp;
    NSArray *_modes;
    unsigned int _port;
    } _startLocation;
    unsigned long long _startTimestamp;
    } _stopLocation;
    unsigned long long _stopTimestamp;
    UIView *_target;
    bool_showFinger;
    bool_waitingForSmoothScrolling;
}

- (void)_continueDrag:(id)arg1;
- (double)_delayUntilNextEvent;
- (void)_postMouseEvent:(int)arg1 timestamp:(unsigned long long)arg2 location:(struct CGPoint { double x1; double x2; })arg3;
- (void)_smoothScrollingDidEnd:(id)arg1;
- (void)_smoothScrollingWillStart:(id)arg1;
- (void)_stopDrag:(id)arg1;
- (void)dealloc;
- (void)dragDidEnd;
- (id)init;
- (void)run;
- (void)setAction:(SEL)arg1;
- (void)setDelegate:(id)arg1;
- (void)setDuration:(double)arg1;
- (void)setInterpolation:(int (*)())arg1;
- (void)setStartLocation:(struct CGPoint { double x1; double x2; })arg1;
- (void)setStopLocation:(struct CGPoint { double x1; double x2; })arg1;
- (void)setTarget:(id)arg1;
- (void)showFinger;

@end
