/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface MFPhonePen : MFPen {
    float m_PixelSize;
}

+ (id)penWithStyle:(int)arg1 width:(int)arg2 colour:(id)arg3 styleArray:(double*)arg4 LPToDPTransform:(struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })arg5;

- (void)applyDashedLinesToPath:(id)arg1;
- (void)applyLineCapStyleToPath:(id)arg1;
- (void)applyLineJoinStyleToPath:(id)arg1 :(id)arg2;
- (id)initWithStyle:(int)arg1 width:(int)arg2 colour:(id)arg3 styleArray:(double*)arg4;
- (void)strokePath:(id)arg1 :(id)arg2;

@end
