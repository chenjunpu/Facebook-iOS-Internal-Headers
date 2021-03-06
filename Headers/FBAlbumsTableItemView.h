//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 12 2015 14:15:46).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <UIKit/UIControl.h>

@class FBMemPhoto, FBUserSession, FBWebPhotoView, UIColor, UILabel, UIView;

@interface FBAlbumsTableItemView : UIControl
{
    FBUserSession *_session;
    FBWebPhotoView *_thumbnailView;
    UIView *_separator;
    BOOL _showSeparator;
    UILabel *_titleLabel;
    UILabel *_subtitleLabel;
    UIColor *_separatorColor;
}

@property(retain, nonatomic) UIColor *separatorColor; // @synthesize separatorColor=_separatorColor;
@property(nonatomic) BOOL showSeparator; // @synthesize showSeparator=_showSeparator;
@property(retain, nonatomic) UILabel *subtitleLabel; // @synthesize subtitleLabel=_subtitleLabel;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
- (void).cxx_destruct;
- (id)_newSeparatorForColor:(id)arg1;
- (void)setFadeout:(BOOL)arg1 animated:(BOOL)arg2;
- (void)setHighlighted:(BOOL)arg1;
- (void)setSelected:(BOOL)arg1;
- (void)prepareForReuse;
- (void)setPlaceholderImage:(id)arg1;
- (void)setImageURL:(id)arg1;
@property(retain, nonatomic) FBMemPhoto *photo;
- (void)layoutSubviews;
- (unsigned long long)accessibilityTraits;
- (id)accessibilityLabel;
- (BOOL)isAccessibilityElement;
- (id)initWithFrame:(struct CGRect)arg1 separatorColor:(id)arg2 session:(id)arg3;

@end

