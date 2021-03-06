/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@class NSString;

@interface UIMenuItem : NSObject {
    SEL _action;
    NSString *_title;
    bool_dontDismiss;
}

@property SEL action;
@property bool dontDismiss;
@property(copy) NSString * title;

- (SEL)action;
- (void)dealloc;
- (bool)dontDismiss;
- (id)initWithTitle:(id)arg1 action:(SEL)arg2;
- (void)setAction:(SEL)arg1;
- (void)setDontDismiss:(bool)arg1;
- (void)setTitle:(id)arg1;
- (id)title;

@end
