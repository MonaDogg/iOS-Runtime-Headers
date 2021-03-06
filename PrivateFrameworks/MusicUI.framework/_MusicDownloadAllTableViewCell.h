/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/MusicUI.framework/MusicUI
 */

@class SKUIItemOfferButton;

@interface _MusicDownloadAllTableViewCell : UITableViewCell <SKUIItemOfferButtonDelegate> {
    BOOL _downloadAllCellForArtist;
    int _downloadableSongCount;
    SKUIItemOfferButton *_itemOfferButton;
}

@property(getter=isDownloadAllCellForArtist) BOOL downloadAllCellForArtist;
@property int downloadableSongCount;

- (void).cxx_destruct;
- (void)_itemOfferButtonAction:(id)arg1 withEvent:(id)arg2;
- (void)_updateDownloadStateViews;
- (void)dealloc;
- (int)downloadableSongCount;
- (id)initWithStyle:(int)arg1 reuseIdentifier:(id)arg2;
- (BOOL)isDownloadAllCellForArtist;
- (void)itemOfferButtonWillAnimateTransition:(id)arg1;
- (void)layoutSubviews;
- (void)setDownloadAllCellForArtist:(BOOL)arg1;
- (void)setDownloadableSongCount:(int)arg1;

@end
