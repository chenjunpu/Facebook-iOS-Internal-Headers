//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 12 2015 14:15:46).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class UIButton, UILabel;

@interface FBBubbleHeaderView : UIView
{
    UIView *_headerSeparatorView;
    UIButton *_doneButton;
    UIButton *_backButton;
    BOOL _shouldShowDoneButton;
    UILabel *_titleLabel;
}

@property(nonatomic) BOOL shouldShowDoneButton; // @synthesize shouldShowDoneButton=_shouldShowDoneButton;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
- (void).cxx_destruct;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)layoutSubviews;
@property(readonly, nonatomic) UIButton *doneButton;
@property(readonly, nonatomic) UIButton *backButton;
- (id)initWithFrame:(struct CGRect)arg1;

@end

