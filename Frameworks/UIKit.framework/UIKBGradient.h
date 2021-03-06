/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@class NSArray, NSString;

@interface UIKBGradient : NSObject <NSCopying> {
    NSArray *_colors;
    NSString *_endColorName;
    NSString *_flatColorName;
    NSString *_gradientName;
    double _middleLocation;
    double _opacity;
    NSString *_startColorName;
    bool_didQueryRGBColors;
    bool_horizontal;
    bool_usesRGBColors;
}

@property bool horizontal;
@property double opacity;
@property(readonly) bool usesRGBColors;

+ (id)gradientWith3Colors:(id)arg1 middleLocation:(double)arg2;
+ (id)gradientWithFlatColor:(id)arg1;
+ (id)gradientWithName:(id)arg1;
+ (id)gradientWithStartColor:(id)arg1 endColor:(id)arg2;

- (struct CGGradient { }*)CGGradient;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (bool)horizontal;
- (id)initWith3Colors:(id)arg1 middleLocation:(double)arg2;
- (id)initWithFlatColor:(id)arg1;
- (id)initWithName:(id)arg1;
- (id)initWithStartColor:(id)arg1 endColor:(id)arg2;
- (bool)isEqual:(id)arg1;
- (double)opacity;
- (void)setHorizontal:(bool)arg1;
- (void)setOpacity:(double)arg1;
- (bool)usesRGBColors;

@end
