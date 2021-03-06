/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Preferences.framework/Preferences
 */

@class NSString;

@interface PSGuidedAccessSettingsDetail : NSObject <PSSettingsDetail> {
}

@property(copy,readonly) NSString * debugDescription;
@property(copy,readonly) NSString * description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

+ (void)enterGuidedAccessMode;
+ (unsigned long long)guidedAccessAvailability;
+ (bool)guidedAccessHasPasscode;
+ (id)iconImage;
+ (id)preferencesURL;
+ (void)setGuidedAccessSwitchEnabled:(bool)arg1;

@end
