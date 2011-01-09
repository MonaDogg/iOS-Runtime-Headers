/* Generated by RuntimeBrowser on iPhone OS 4.2.1
   Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

@class AVTimedMetadataGroupInternal;



@interface AVTimedMetadataGroup : NSObject <NSCopying>
{
    AVTimedMetadataGroupInternal *_priv;
}

@property(readonly) ? timeRange;
@property(copy,readonly) NSArray *items;


- (struct { struct { long long x_1_1_1; NSInteger x_1_1_2; NSUInteger x_1_1_3; long long x_1_1_4; } x1; struct { long long x_2_1_1; NSInteger x_2_1_2; NSUInteger x_2_1_3; long long x_2_1_4; } x2; })timeRange;
- (id)initWithItems:(id)arg1 timeRange:(struct { struct { long long x_1_1_1; NSInteger x_1_1_2; NSUInteger x_1_1_3; long long x_1_1_4; } x1; struct { long long x_2_1_1; NSInteger x_2_1_2; NSUInteger x_2_1_3; long long x_2_1_4; } x2; })arg2;
- (id)mutableCopyWithZone:(struct _NSZone { }*)arg1;
- (void)finalize;
- (id)items;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (BOOL)isEqual:(id)arg1;
- (NSUInteger)hash;
- (id)description;
- (id)init;
- (void)dealloc;

@end