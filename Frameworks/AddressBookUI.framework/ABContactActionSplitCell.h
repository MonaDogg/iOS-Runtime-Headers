/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/AddressBookUI.framework/AddressBookUI
 */

@class UIButton, UIView;

@interface ABContactActionSplitCell : ABContactCell {
    BOOL _displayConstraintsActive;
    UIButton *_leftLabel;
    UIButton *_rightLabel;
    UIView *_spacer;
}

@property BOOL displayConstraintsActive;
@property(readonly) UIButton * leftLabel;
@property(readonly) UIButton * rightLabel;
@property(readonly) UIView * spacer;

- (void)_setupButton:(id)arg1 forAction:(id)arg2;
- (void)dealloc;
- (BOOL)displayConstraintsActive;
- (id)initWithStyle:(int)arg1 reuseIdentifier:(id)arg2;
- (id)leftLabel;
- (id)rightLabel;
- (void)setCardGroupItem:(id)arg1;
- (void)setDisplayConstraintsActive:(BOOL)arg1;
- (void)setLeftContentMargin:(float)arg1;
- (void)setRightContentMargin:(float)arg1;
- (id)spacer;
- (void)updateConstraints;

@end
