/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@class NSArray;

@interface TNChartFormulaArgumentCollection : NSObject <NSFastEnumeration, NSCopying, NSMutableCopying> {
    NSArray *mArray;
}

+ (id)argumentCollectionFromFormula:(struct TSCEFormula { struct TSCEASTNodeArray {} *x1; struct TSCEFormulaTranslationFlags { unsigned int x_2_1_1 : 1; unsigned int x_2_1_2 : 1; } x2; }*)arg1 inOwner:(struct __CFUUID { }*)arg2 usingCalcEngine:(id)arg3;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (unsigned long long)count;
- (unsigned long long)countByEnumeratingWithState:(struct { unsigned long long x1; id *x2; unsigned long long *x3; unsigned long long x4[5]; }*)arg1 objects:(id*)arg2 count:(unsigned long long)arg3;
- (void)dealloc;
- (id)description;
- (id)elementAtIndex:(unsigned long long)arg1;
- (id)elementEnumerator;
- (id)firstElement;
- (id)initWithArray:(id)arg1;
- (id)initWithFormula:(struct TSCEFormula { struct TSCEASTNodeArray {} *x1; struct TSCEFormulaTranslationFlags { unsigned int x_2_1_1 : 1; unsigned int x_2_1_2 : 1; } x2; }*)arg1 inOwner:(struct __CFUUID { }*)arg2 usingCalcEngine:(id)arg3;
- (id)lastElement;
- (id)mutableCopyWithZone:(struct _NSZone { }*)arg1;
- (id)reverseElementEnumerator;
- (id)wrappedChartFormulaWithID:(struct { unsigned int x1 : 24; unsigned int x2 : 8; })arg1;

@end
