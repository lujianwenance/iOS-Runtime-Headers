/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/IMCore.framework/IMCore
 */

@class NSAttributedString;

@interface IMMessagePartChatItem : IMMessageChatItem {
    long long _index;
    NSAttributedString *_text;
}

@property long long index;
@property(copy,readonly) NSAttributedString * text;

+ (id)_messageItemWithPartsDeleted:(id)arg1 fromMessageItem:(id)arg2;
+ (id)_newMessagePartsForMessageItem:(id)arg1;

- (id)_initWithItem:(id)arg1 text:(id)arg2 index:(long long)arg3;
- (bool)canDelete;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (long long)index;
- (void)setIndex:(long long)arg1;
- (id)text;

@end
