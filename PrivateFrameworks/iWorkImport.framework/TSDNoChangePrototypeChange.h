/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@class <TSSPropertySource>, NSString;

@interface TSDNoChangePrototypeChange : NSObject <TSDPrototypeChange> {
    id mPrototype;
}

@property(copy,readonly) NSString * debugDescription;
@property(copy,readonly) NSString * description;
@property(readonly) unsigned long long hash;
@property(retain,readonly) <TSSPropertySource> * propertiesAfterChange;
@property(retain,readonly) <TSSPropertySource> * propertiesBeforeChange;
@property(retain,readonly) id prototype;
@property(readonly) bool prototypeIsBeingDeleted;
@property(readonly) bool prototypeIsBeingModified;
@property(readonly) bool prototypeIsBeingReplaced;
@property(retain,readonly) id replacement;
@property(readonly) Class superclass;

- (id)changedPropertySet;
- (void)dealloc;
- (id)description;
- (id)initNoChangePrototypeChangeForPrototype:(id)arg1;
- (id)propertiesAfterChange;
- (bool)propertiesAreChanging:(id)arg1;
- (id)propertiesBeforeChange;
- (bool)propertyIsChanging:(int)arg1;
- (id)prototype;
- (bool)prototypeIsBeingDeleted;
- (bool)prototypeIsBeingModified;
- (bool)prototypeIsBeingReplaced;
- (id)replacement;

@end
