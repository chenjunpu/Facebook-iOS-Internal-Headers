//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 12 2015 14:15:46).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSMutableArray, UIButton, UIScrollView;

@interface FBFeedTestHarnessView : UIView
{
    UIScrollView *_scrollView;
    NSMutableArray *_buttons;
    UIButton *_storiesPillButton;
    UIButton *_networkErrorBarButton;
}

@property(retain, nonatomic) UIButton *networkErrorBarButton; // @synthesize networkErrorBarButton=_networkErrorBarButton;
@property(retain, nonatomic) UIButton *storiesPillButton; // @synthesize storiesPillButton=_storiesPillButton;
- (void).cxx_destruct;
- (id)_createButtonWithTitle:(id)arg1;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end

