/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

/* RuntimeBrowser encountered one or more ivar type encodings for a function pointer. 
   The runtime does not encode function signature information.  We use a signature of: 
           "int (*funcName)()",  where funcName might be null. 
 */

@class KNAbstractSlide, KNAnimationInfo, KNAnimationPluginMenu, KNBuildAttributes, KNBuildChunk, NSArray, NSSet, NSString, TSDDrawableInfo, TSDEditableBezierPathSource, TSUColor;

@interface KNBuild : TSPObject <NSCopying, TSKTransformableObject, KNInspectableAnimation> {
    struct _NSRange { 
        unsigned long long location; 
        unsigned long long length; 
    boolmCachedActiveChunkRangeIsValid;
    KNBuildAttributes *mAttributes;
    } mCachedActiveChunkRange;
    NSArray *mCachedChunks;
    NSString *mDelivery;
    TSDDrawableInfo *mDrawable;
    KNAbstractSlide *mSlide;
}

@property(readonly) unsigned long long actionAcceleration;
@property(readonly) TSDEditableBezierPathSource * actionMotionPathSource;
@property(readonly) double actionOpacity;
@property(readonly) double actionRotationAngle;
@property(readonly) unsigned long long actionRotationDirection;
@property(readonly) double actionScale;
@property(readonly) struct _NSRange { unsigned long long x1; unsigned long long x2; } activeChunkRange;
@property(readonly) NSString * animationFilter;
@property(readonly) KNAnimationInfo * animationInfo;
@property(readonly) int animationType;
@property(copy) KNBuildAttributes * attributes;
@property(readonly) bool canEditAnimations;
@property(readonly) unsigned long long chunkCount;
@property(readonly) NSArray * chunks;
@property(readonly) TSUColor * color;
@property(readonly) float custom3DChartRotation;
@property(readonly) bool customBounce;
@property(readonly) bool customDecay;
@property(readonly) unsigned long long customDeliveryOption;
@property(readonly) unsigned long long customJiggleIntensity;
@property(readonly) bool customMotionBlur;
@property(readonly) unsigned long long customRepeatCount;
@property(readonly) unsigned long long customScale;
@property(readonly) long long customTextDelivery;
@property(copy,readonly) NSString * debugDescription;
@property(copy) NSString * delivery;
@property(readonly) unsigned long long deliveryStyle;
@property(readonly) NSString * deliveryWithoutDowngrading;
@property(copy,readonly) NSString * description;
@property(readonly) unsigned long long direction;
@property(readonly) KNAnimationPluginMenu * directionMenu;
@property(readonly) unsigned long long directionType;
@property(readonly) bool downgradesDelivery;
@property(retain) TSDDrawableInfo * drawable;
@property(readonly) double durationDefaultForInitialChunk;
@property(readonly) NSString * effect;
@property(readonly) unsigned long long endOffset;
@property(readonly) unsigned long long firstActiveChunkIndexInBuild;
@property(readonly) KNBuildChunk * firstChunk;
@property(readonly) unsigned long long firstChunkIndexOnSlide;
@property(readonly) bool hasComplement;
@property(readonly) bool hasInactiveChunks;
@property(readonly) unsigned long long hash;
@property(readonly) unsigned long long index;
@property(readonly) unsigned long long indexOrderedByFirstChunk;
@property(readonly) NSSet * inspectableAttributes;
@property(readonly) bool isActionBuild;
@property(readonly) bool isActionMotionBuild;
@property(readonly) bool isEmphasisBuild;
@property(readonly) bool isFirst;
@property(readonly) unsigned long long lastActiveChunkIndexInBuild;
@property(readonly) unsigned long long lastChunkIndexOnSlide;
@property(readonly) NSString * localizedEffect;
@property KNAbstractSlide * slide;
@property(readonly) unsigned long long startOffset;
@property(readonly) Class superclass;
@property(readonly) bool supportsBounce;
@property(readonly) bool supportsCustomTextDelivery;
@property(readonly) bool supportsDelivery;
@property(readonly) bool supportsDirection;
@property(readonly) bool supportsDuration;
@property(readonly) NSString * title;

+ (id)buildWithEffect:(id)arg1 animationType:(int)arg2 drawable:(id)arg3;
+ (id)menuAnimationInfosForDrawableInfo:(id)arg1 animationType:(int)arg2;
+ (bool)needsObjectUUID;
+ (id)p_drawableFromInfo:(id)arg1;
+ (bool)p_shouldExcludeAnimationName:(id)arg1 forDrawable:(id)arg2;
+ (id)supportedAnimationInfosForDrawableInfo:(id)arg1 animationType:(int)arg2;

- (unsigned long long)actionAcceleration;
- (id)actionMotionPathSource;
- (double)actionOpacity;
- (double)actionRotationAngle;
- (unsigned long long)actionRotationDirection;
- (double)actionScale;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })activeChunkRange;
- (id)animationFilter;
- (id)animationInfo;
- (int)animationType;
- (id)attributes;
- (bool)canEditAnimations;
- (unsigned long long)chunkCount;
- (id)chunks;
- (id)color;
- (id)commandForTransformingByTransform:(struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })arg1 context:(id)arg2 transformedObjects:(id)arg3 inBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg4;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)createNewChunks;
- (float)custom3DChartRotation;
- (bool)customBounce;
- (bool)customDecay;
- (unsigned long long)customDeliveryOption;
- (unsigned long long)customJiggleIntensity;
- (bool)customMotionBlur;
- (unsigned long long)customRepeatCount;
- (unsigned long long)customScale;
- (long long)customTextDelivery;
- (void)dealloc;
- (id)deliveriesLocalized:(bool)arg1;
- (id)delivery;
- (unsigned long long)deliveryStyle;
- (id)deliveryWithoutDowngrading;
- (id)description;
- (unsigned long long)direction;
- (id)directionMenu;
- (unsigned long long)directionType;
- (bool)downgradesDelivery;
- (id)drawable;
- (double)durationDefaultForInitialChunk;
- (id)effect;
- (unsigned long long)endChunkIndexFromEndOffset:(unsigned long long)arg1;
- (unsigned long long)endOffset;
- (unsigned long long)firstActiveChunkIndexInBuild;
- (id)firstChunk;
- (unsigned long long)firstChunkIndexOnSlide;
- (bool)hasComplement;
- (bool)hasComplementInBuilds:(id)arg1;
- (bool)hasInactiveChunks;
- (void)i_invalidateChunkCache;
- (unsigned long long)index;
- (unsigned long long)indexOrderedByFirstChunk;
- (id)initFromUnarchiver:(id)arg1;
- (id)initWithSlide:(id)arg1 effect:(id)arg2 buildType:(int)arg3 context:(id)arg4;
- (id)inspectableAttributes;
- (bool)isActionBuild;
- (bool)isActionMotionBuild;
- (bool)isComplementOfBuild:(id)arg1;
- (bool)isEmphasisBuild;
- (bool)isFirst;
- (unsigned long long)lastActiveChunkIndexInBuild;
- (unsigned long long)lastChunkIndexOnSlide;
- (void)loadFromArchive:(const struct BuildArchive { int (**x1)(); struct UnknownFieldSet { struct vector<google::protobuf::UnknownField, std::__1::allocator<google::protobuf::UnknownField> > {} *x_2_1_1; } x2; struct Reference {} *x3; struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > {} *x4; double x5; struct BuildAttributesArchive {} *x6; int x7; unsigned int x8[1]; }*)arg1 unarchiver:(id)arg2;
- (id)localizedEffect;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })p_calculateActiveChunkRange;
- (id)p_chunkAtIndex:(unsigned long long)arg1;
- (id)p_chunkTitleByTruncatingTitle:(id)arg1 toLength:(unsigned long long)arg2;
- (bool)p_supportsCustomTextDeliveryOptionsForAttributes:(id)arg1;
- (void)saveToArchive:(struct BuildArchive { int (**x1)(); struct UnknownFieldSet { struct vector<google::protobuf::UnknownField, std::__1::allocator<google::protobuf::UnknownField> > {} *x_2_1_1; } x2; struct Reference {} *x3; struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > {} *x4; double x5; struct BuildAttributesArchive {} *x6; int x7; unsigned int x8[1]; }*)arg1 archiver:(id)arg2;
- (void)saveToArchiver:(id)arg1;
- (void)setAttributes:(id)arg1;
- (void)setDelivery:(id)arg1;
- (void)setDrawable:(id)arg1;
- (void)setSlide:(id)arg1;
- (id)slide;
- (unsigned long long)startOffset;
- (bool)supportsBounce;
- (bool)supportsCustomTextDelivery;
- (bool)supportsDelivery;
- (bool)supportsDirection;
- (bool)supportsDuration;
- (id)title;

@end
