/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@class TSDGLDataBuffer, TSDGLFrameBuffer, TSDGLShader;

@interface TSDGLMotionBlurEffect : NSObject {
    struct CGSize { 
        float width; 
        float height; 
    struct CGSize { 
        float width; 
        float height; 
    int mBackingHeight;
    int mBackingWidth;
    TSDGLShader *mBlurHorizontalShader;
    TSDGLShader *mBlurVerticalShader;
    TSDGLFrameBuffer *mColorFrameBuffer;
    int mDebugDrawMode;
    TSDGLShader *mDefaultTextureShader;
    float mDilationDistanceInSlidePercent;
    TSDGLDataBuffer *mFBODataBuffer;
    } mFramebufferSize;
    float mMotionBlurStrength;
    } mSlideSize;
    TSDGLShader *mVelocityCollectionShader;
    TSDGLDataBuffer *mVelocityFBODataBuffer;
    TSDGLFrameBuffer *mVelocityFrameBuffer;
    TSDGLShader *mVelocityVisualizerShader;
}

@property int debugDrawMode;
@property float dilationDistanceInSlidePercent;
@property float motionBlurStrength;
@property(readonly) struct CGSize { float x1; float x2; } velocityScale;

- (void)bindColorFramebuffer;
- (void)bindVelocityFramebuffer;
- (void)dealloc;
- (int)debugDrawMode;
- (float)dilationDistanceInSlidePercent;
- (void)drawResult;
- (id)initWithFramebufferSize:(struct CGSize { float x1; float x2; })arg1 slideSize:(struct CGSize { float x1; float x2; })arg2;
- (float)motionBlurStrength;
- (void)p_dilateVelocityBuffer;
- (void)p_setupBlurShaders;
- (void)p_setupGLTextureParameters;
- (void)p_setupVelocityFramebufferIfNecessary;
- (void)p_updateMaxVelocityInShadersWithScale:(float)arg1;
- (float)p_velocityFramebufferScale;
- (struct CGSize { float x1; float x2; })p_velocityFramebufferSize;
- (void)setDebugDrawMode:(int)arg1;
- (void)setDilationDistanceInSlidePercent:(float)arg1;
- (void)setMotionBlurStrength:(float)arg1;
- (void)setupMotionBlurEffectIfNecessary;
- (void)unbindFramebuffer;
- (void)updateVelocityScaleInShader:(id)arg1;
- (struct CGSize { float x1; float x2; })velocityScale;

@end
