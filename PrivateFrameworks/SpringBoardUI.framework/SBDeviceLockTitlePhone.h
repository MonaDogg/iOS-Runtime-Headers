/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SpringBoardUI.framework/SpringBoardUI
 */

@class TPLegacyLCDView;

@interface SBDeviceLockTitlePhone : SBDeviceLockTitle {
    BOOL _highlighted;
    TPLegacyLCDView *_lcdView;
}

- (id)_initWithStyle:(int)arg1 interfaceOrientation:(int)arg2;
- (void)blinkSubtitle;
- (void)dealloc;
- (BOOL)isHighlighted;
- (void)setHighlighted:(BOOL)arg1;
- (void)setSubtitle:(id)arg1;
- (void)setTitle:(id)arg1;
- (id)subtitle;
- (id)title;

@end
