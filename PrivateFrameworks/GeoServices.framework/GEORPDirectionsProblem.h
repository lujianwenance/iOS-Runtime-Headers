/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@class NSData;

@interface GEORPDirectionsProblem : PBCodable <NSCopying> {
    struct { 
        unsigned int problematicStepIndex : 1; 
    NSData *_directionsResponseId;
    } _has;
    NSData *_overviewScreenshotImageData;
    unsigned int _problematicStepIndex;
}

@property(retain) NSData * directionsResponseId;
@property(readonly) bool hasDirectionsResponseId;
@property(readonly) bool hasOverviewScreenshotImageData;
@property bool hasProblematicStepIndex;
@property(retain) NSData * overviewScreenshotImageData;
@property unsigned int problematicStepIndex;

- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (id)directionsResponseId;
- (bool)hasDirectionsResponseId;
- (bool)hasOverviewScreenshotImageData;
- (bool)hasProblematicStepIndex;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (id)overviewScreenshotImageData;
- (unsigned int)problematicStepIndex;
- (bool)readFrom:(id)arg1;
- (void)setDirectionsResponseId:(id)arg1;
- (void)setHasProblematicStepIndex:(bool)arg1;
- (void)setOverviewScreenshotImageData:(id)arg1;
- (void)setProblematicStepIndex:(unsigned int)arg1;
- (void)writeTo:(id)arg1;

@end
