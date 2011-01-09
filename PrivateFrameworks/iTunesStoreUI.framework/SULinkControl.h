/* Generated by RuntimeBrowser on iPhone OS 4.2.1
   Image: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
 */

@class UILabel;



@interface SULinkControl : UIControl 
{
    UILabel *_label;
    BOOL _shouldDrawUnderline;
    unsigned int _sizeIsDirty : 1;
    NSInteger _style;
}

@property BOOL shouldDrawUnderline;


- (void)setShouldDrawUnderline:(BOOL)arg1;
- (BOOL)shouldDrawUnderline;
- (id)_label;
- (void)_updateLabel;
- (void)setHighlighted:(BOOL)arg1;
- (void)setStyle:(NSInteger)arg1;
- (void)sizeToFit;
- (void)setText:(id)arg1;
- (void)drawRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)dealloc;
- (void)layoutSubviews;

@end