/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@class NSString;

@interface GEORPProblemResponse : PBCodable <NSCopying> {
    struct { 
        unsigned int statusCode : 1; 
        unsigned int isNotificationSupported : 1; 
    } _has;
    NSString *_problemId;
    int _statusCode;
    bool_isNotificationSupported;
}

@property bool hasIsNotificationSupported;
@property(readonly) bool hasProblemId;
@property bool hasStatusCode;
@property bool isNotificationSupported;
@property(retain) NSString * problemId;
@property int statusCode;

- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasIsNotificationSupported;
- (bool)hasProblemId;
- (bool)hasStatusCode;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (bool)isNotificationSupported;
- (void)mergeFrom:(id)arg1;
- (id)problemId;
- (bool)readFrom:(id)arg1;
- (void)setHasIsNotificationSupported:(bool)arg1;
- (void)setHasStatusCode:(bool)arg1;
- (void)setIsNotificationSupported:(bool)arg1;
- (void)setProblemId:(id)arg1;
- (void)setStatusCode:(int)arg1;
- (int)statusCode;
- (void)writeTo:(id)arg1;

@end
