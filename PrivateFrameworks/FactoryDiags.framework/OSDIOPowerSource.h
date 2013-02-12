/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/FactoryDiags.framework/FactoryDiags
 */

@class NSDictionary;

@interface OSDIOPowerSource : NSObject {
}

@property(getter=_adapterCurrent,readonly) int adapterCurrent;
@property(getter=_adapterDetails,readonly) NSDictionary * adapterDetails;
@property(getter=_adapterFamilyCode,readonly) int adapterFamilyCode;
@property(getter=_adapterID,readonly) int adapterID;
@property(getter=_adapterRevision,readonly) int adapterRevision;
@property(getter=_adapterSerialNumber,readonly) int adapterSerialNumber;
@property(getter=_adapterSource,readonly) int adapterSource;
@property(getter=_adapterWatts,readonly) int adapterWatts;

+ (void)initialize;
+ (id)sharedInstance;

- (int)_adapterCurrent;
- (id)_adapterDetails;
- (int)_adapterFamilyCode;
- (int)_adapterID;
- (int)_adapterRevision;
- (int)_adapterSerialNumber;
- (int)_adapterSource;
- (int)_adapterWatts;
- (void)dealloc;
- (id)init;

@end