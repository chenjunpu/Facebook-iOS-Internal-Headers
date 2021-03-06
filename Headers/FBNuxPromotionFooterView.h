//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 12 2015 14:15:46).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class FBNetworkImageView, FBUserSession, UIButton, UIImageView, UILabel;

@interface FBNuxPromotionFooterView : UIView
{
    FBUserSession *_session;
    struct CGSize _dismissButtonSize;
    struct CGSize _imageSize;
    struct CGSize _titleLabelSize;
    struct CGSize _descriptionLabelSize;
    struct CGSize _buttonSize;
    UILabel *_titleLabel;
    UILabel *_descriptionLabel;
    UIButton *_primaryButton;
    UIButton *_dismissButton;
    FBNetworkImageView *_networkImageView;
    UIImageView *_imageView;
}

@property(retain, nonatomic) UIImageView *imageView; // @synthesize imageView=_imageView;
@property(retain, nonatomic) FBNetworkImageView *networkImageView; // @synthesize networkImageView=_networkImageView;
@property(readonly, nonatomic) UIButton *dismissButton; // @synthesize dismissButton=_dismissButton;
@property(readonly, nonatomic) UIButton *primaryButton; // @synthesize primaryButton=_primaryButton;
@property(readonly, nonatomic) UILabel *descriptionLabel; // @synthesize descriptionLabel=_descriptionLabel;
@property(readonly, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
- (void).cxx_destruct;
- (struct CGRect)_calculateImageFrameForSize:(struct CGSize)arg1 scale:(float)arg2;
- (id)_animatedImageViewFromURL:(id)arg1 size:(struct CGSize)arg2 scale:(float)arg3;
- (id)_networkImageViewFromURL:(id)arg1 size:(struct CGSize)arg2 scale:(float)arg3;
- (void)unsetImage;
- (void)setImage:(id)arg1;
- (void)setAnimatedImageWithURL:(id)arg1 size:(struct CGSize)arg2 scale:(float)arg3;
- (void)setImageWithURL:(id)arg1 size:(struct CGSize)arg2 scale:(float)arg3;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1 session:(id)arg2 buttonStyle:(unsigned int)arg3;
- (id)initWithFrame:(struct CGRect)arg1 session:(id)arg2;
- (id)initWithFrame:(struct CGRect)arg1;

@end

