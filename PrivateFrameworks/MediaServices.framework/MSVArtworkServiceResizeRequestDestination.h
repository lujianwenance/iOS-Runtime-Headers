/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/MediaServices.framework/MediaServices
 */

@class NSURL;

@interface MSVArtworkServiceResizeRequestDestination : NSObject <NSSecureCoding> {
    struct CGSize { 
        double width; 
        double height; 
    } _destinationSize;
    NSURL *_destinationURL;
}

@property(readonly) struct CGSize { double x1; double x2; } destinationSize;
@property(readonly) NSURL * destinationURL;

+ (id)destinationWithSize:(struct CGSize { double x1; double x2; })arg1 url:(id)arg2;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)description;
- (struct CGSize { double x1; double x2; })destinationSize;
- (id)destinationURL;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithDestinationSize:(struct CGSize { double x1; double x2; })arg1 destinationURL:(id)arg2;

@end
