/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/iAd.framework/iAd
 */

@class NSArray, NSString, NSURL;

@interface ADAdImpressionPublicAttributes : NSObject <NSSecureCoding> {
    NSString *_accessibilityLabel;
    BOOL _actionLeavesApplication;
    BOOL _actionViewControllerHidesStatusBar;
    unsigned int _actionViewControllerPresentationOrientationMask;
    int _actionViewControllerTransitionStyle;
    BOOL _adHasAction;
    NSURL *_audioURL;
    NSString *_descriptionForLCD;
    NSString *_headlineForLCD;
    NSURL *_logoImageURL;
    int _modalPresentationStyle;
    NSURL *_staticImageURL;
    NSString *_uniqueIdentifier;
    NSArray *_videoAssets;
    double _videoCountdownDuration;
}

@property(copy) NSString * accessibilityLabel;
@property BOOL actionLeavesApplication;
@property BOOL actionViewControllerHidesStatusBar;
@property unsigned int actionViewControllerPresentationOrientationMask;
@property int actionViewControllerTransitionStyle;
@property BOOL adHasAction;
@property(retain) NSURL * audioURL;
@property(copy) NSString * descriptionForLCD;
@property(copy) NSString * headlineForLCD;
@property(retain) NSURL * logoImageURL;
@property int modalPresentationStyle;
@property(retain) NSURL * staticImageURL;
@property(copy) NSString * uniqueIdentifier;
@property(retain) NSArray * videoAssets;
@property double videoCountdownDuration;

+ (BOOL)supportsSecureCoding;

- (id)accessibilityLabel;
- (BOOL)actionLeavesApplication;
- (BOOL)actionViewControllerHidesStatusBar;
- (unsigned int)actionViewControllerPresentationOrientationMask;
- (int)actionViewControllerTransitionStyle;
- (BOOL)adHasAction;
- (id)audioURL;
- (void)dealloc;
- (id)description;
- (id)descriptionForLCD;
- (void)encodeWithCoder:(id)arg1;
- (id)headlineForLCD;
- (id)initWithCoder:(id)arg1;
- (id)logoImageURL;
- (int)modalPresentationStyle;
- (void)setAccessibilityLabel:(id)arg1;
- (void)setActionLeavesApplication:(BOOL)arg1;
- (void)setActionViewControllerHidesStatusBar:(BOOL)arg1;
- (void)setActionViewControllerPresentationOrientationMask:(unsigned int)arg1;
- (void)setActionViewControllerTransitionStyle:(int)arg1;
- (void)setAdHasAction:(BOOL)arg1;
- (void)setAudioURL:(id)arg1;
- (void)setDescriptionForLCD:(id)arg1;
- (void)setHeadlineForLCD:(id)arg1;
- (void)setLogoImageURL:(id)arg1;
- (void)setModalPresentationStyle:(int)arg1;
- (void)setStaticImageURL:(id)arg1;
- (void)setUniqueIdentifier:(id)arg1;
- (void)setVideoAssets:(id)arg1;
- (void)setVideoCountdownDuration:(double)arg1;
- (id)staticImageURL;
- (id)uniqueIdentifier;
- (id)videoAssets;
- (double)videoCountdownDuration;

@end
