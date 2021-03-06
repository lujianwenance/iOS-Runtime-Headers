/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Stocks.framework/Stocks
 */

@class NSString, UIColor;

@interface StockChartDisplayMode : NSObject <NSCopying> {
    struct CGSize { 
        double width; 
        double height; 
    struct UIEdgeInsets { 
        double top; 
        double left; 
        double bottom; 
        double right; 
    UIColor *_axisLabelsColor;
    struct CGGradient { } *_backgroundGradient;
    UIColor *_backgroundLinesColor;
    } _chartSize;
    NSString *_hash;
    unsigned long long _horizontalGridlineCount;
    double _intervalRowHeight;
    UIColor *_lineColor;
    } _lineGraphInsets;
    double _lineWidth;
    long long _maxInterval;
    double _showsTitle;
    double _volumeHeight;
    UIColor *_xAxisKeylineColor;
    unsigned long long _yAxisLabelCount;
    bool_HUDEnabled;
    bool_graphOverlapsYAxisLabels;
    bool_showsPriceLabelForPreviousClose;
    bool_showsVolume;
    bool_usesDetailedAxisLabels;
}

@property bool HUDEnabled;
@property(retain) UIColor * axisLabelsColor;
@property struct CGGradient { }* backgroundGradient;
@property(retain) UIColor * backgroundLinesColor;
@property struct CGSize { double x1; double x2; } chartSize;
@property bool graphOverlapsYAxisLabels;
@property(readonly) double gutterHeight;
@property unsigned long long horizontalGridlineCount;
@property double intervalRowHeight;
@property(retain) UIColor * lineColor;
@property(readonly) double lineGraphBottomPadding;
@property struct UIEdgeInsets { double x1; double x2; double x3; double x4; } lineGraphInsets;
@property double lineWidth;
@property long long maxInterval;
@property bool showsPriceLabelForPreviousClose;
@property double showsTitle;
@property bool showsVolume;
@property bool usesDetailedAxisLabels;
@property double volumeHeight;
@property(retain) UIColor * xAxisKeylineColor;
@property unsigned long long yAxisLabelCount;

+ (id)defaultDisplayMode;

- (void).cxx_destruct;
- (bool)HUDEnabled;
- (id)axisLabelsColor;
- (struct CGGradient { }*)backgroundGradient;
- (id)backgroundLinesColor;
- (struct CGSize { double x1; double x2; })chartSize;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (bool)graphOverlapsYAxisLabels;
- (double)gutterHeight;
- (unsigned long long)hash;
- (unsigned long long)horizontalGridlineCount;
- (id)init;
- (double)intervalRowHeight;
- (bool)isEqual:(id)arg1;
- (id)lineColor;
- (double)lineGraphBottomPadding;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })lineGraphInsets;
- (double)lineWidth;
- (long long)maxInterval;
- (void)setAxisLabelsColor:(id)arg1;
- (void)setBackgroundGradient:(struct CGGradient { }*)arg1;
- (void)setBackgroundLinesColor:(id)arg1;
- (void)setChartSize:(struct CGSize { double x1; double x2; })arg1;
- (void)setGraphOverlapsYAxisLabels:(bool)arg1;
- (void)setHUDEnabled:(bool)arg1;
- (void)setHorizontalGridlineCount:(unsigned long long)arg1;
- (void)setIntervalRowHeight:(double)arg1;
- (void)setLineColor:(id)arg1;
- (void)setLineGraphInsets:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg1;
- (void)setLineWidth:(double)arg1;
- (void)setMaxInterval:(long long)arg1;
- (void)setShowsPriceLabelForPreviousClose:(bool)arg1;
- (void)setShowsTitle:(double)arg1;
- (void)setShowsVolume:(bool)arg1;
- (void)setUsesDetailedAxisLabels:(bool)arg1;
- (void)setVolumeHeight:(double)arg1;
- (void)setXAxisKeylineColor:(id)arg1;
- (void)setYAxisLabelCount:(unsigned long long)arg1;
- (bool)showsPriceLabelForPreviousClose;
- (double)showsTitle;
- (bool)showsVolume;
- (bool)usesDetailedAxisLabels;
- (double)volumeHeight;
- (id)xAxisKeylineColor;
- (unsigned long long)yAxisLabelCount;

@end
