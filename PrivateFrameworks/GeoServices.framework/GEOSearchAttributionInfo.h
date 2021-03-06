/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@class NSArray, NSString;

@interface GEOSearchAttributionInfo : NSObject <NSSecureCoding> {
    NSArray *_attributionApps;
    unsigned int _attributionRequirementsMask;
    NSString *_displayName;
    NSString *_identifier;
    NSArray *_logoPaths;
    NSArray *_snippetLogoPaths;
    unsigned int _version;
}

@property(retain) NSArray * attributionApps;
@property(retain) NSString * displayName;
@property(retain) NSString * identifier;
@property unsigned int requirementsMask;
@property unsigned int version;

+ (bool)supportsSecureCoding;

- (void)addLogoPath:(id)arg1;
- (id)attributionApps;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (id)displayName;
- (void)encodeWithCoder:(id)arg1;
- (bool)hasAttributionRequirement:(int)arg1;
- (id)identifier;
- (id)initWithCoder:(id)arg1;
- (id)initWithDictionaryRepresentation:(id)arg1;
- (id)initWithSource:(id)arg1 localizedAttribution:(id)arg2 logoPaths:(id)arg3 snippetLogoPaths:(id)arg4;
- (id)logoPathForScale:(double)arg1;
- (unsigned int)requirementsMask;
- (void)setAttributionApps:(id)arg1;
- (void)setDisplayName:(id)arg1;
- (void)setIdentifier:(id)arg1;
- (void)setRequirementsMask:(unsigned int)arg1;
- (void)setVersion:(unsigned int)arg1;
- (id)snippetLogoPathForScale:(double)arg1;
- (bool)supportsActionURLs;
- (unsigned int)version;

@end
