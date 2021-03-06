/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@class CMStyle, OADParagraphProperties;

@interface PMBulletMapper : CMMapper {
    int mFontSize;
    OADParagraphProperties *mProperties;
    CMStyle *mStyle;
}

+ (id)stringForIndex:(unsigned long long)arg1 withFormat:(int)arg2;

- (id)bulletFontName;
- (int)bulletSize;
- (void)dealloc;
- (id)initWithOadProperties:(id)arg1 fontSize:(int)arg2 parent:(id)arg3;
- (id)makeBulletWithListState:(id)arg1;
- (void)mapAt:(id)arg1 withState:(id)arg2;
- (void)mapBulletColorWithState:(id)arg1;

@end
