/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/CoreMotion.framework/CoreMotion
 */

@interface CMActivity : CMLogItem {
    id _internal;
}

@property(readonly) int confidence;
@property(readonly) bool hasExitedVehicle;
@property(readonly) bool isDriving;
@property(readonly) bool isMoving;
@property(readonly) bool isRunning;
@property(readonly) bool isWalking;
@property(readonly) bool maybeExitingVehicle;

- (struct CLMotionActivity { int x1; int x2; int x3; int x4; float x5; double x6; int x7; double x8; double x9; })activity;
- (int)confidence;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (bool)hasExitedVehicle;
- (id)initWithCoder:(id)arg1;
- (id)initWithMotionActivity:(struct CLMotionActivity { int x1; int x2; int x3; int x4; float x5; double x6; int x7; double x8; double x9; })arg1 andTimestamp:(double)arg2;
- (bool)isDriving;
- (bool)isMoving;
- (bool)isRunning;
- (bool)isWalking;
- (bool)maybeExitingVehicle;

@end
