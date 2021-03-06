/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@class CALayer;

@interface TSCH3DLayerCacheLogic : NSObject <TSCHUnretainedParent, TSCH3DLayerCacheLogicProtocol> {
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    } mDrawingBounds;
    CALayer *mParent;
    id mRepLayerDelegate;
}

@property id repLayerDelegate;

+ (bool)cacheable;

- (id).cxx_construct;
- (void)clearParent;
- (bool)contentsIsHighQuality;
- (bool)contentsIsValid;
- (void)dealloc;
- (id)description;
- (id)initWithParent:(id)arg1;
- (bool)isClipped;
- (bool)isClippedAreaVisibleInRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)repLayerDelegate;
- (void)setContentsIsValid:(bool)arg1 highQuality:(bool)arg2;
- (void)setContentsIsValid:(bool)arg1;
- (void)setDrawingBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setRepLayerDelegate:(id)arg1;

@end
