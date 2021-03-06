/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/WebKit.framework/WebKit
 */

@class NSString, WKContentView;

@interface WKDateTimePicker : NSObject <WKFormControl> {
    struct RetainPtr<UIDatePicker> { 
        void *m_ptr; 
    } _datePicker;
    NSString *_formatString;
    WKContentView *_view;
    bool_isTimeInput;
    bool_shouldRemoveTimeZoneInformation;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)_dateChangeHandler:(id)arg1;
- (void)_dateChanged;
- (void)_dateChangedSetAsNumber;
- (void)_dateChangedSetAsString;
- (id)_sanitizeInputValueForFormatter:(id)arg1;
- (long long)_timeZoneOffsetFromGMT:(id)arg1;
- (void)controlBeginEditing;
- (void)controlEndEditing;
- (id)controlView;
- (struct RetainPtr<NSDateFormatter> { void *x1; })dateFormatterForPicker;
- (id)datePicker;
- (void)dealloc;
- (id)initWithView:(id)arg1 datePickerMode:(long long)arg2;

@end
