//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 12 2015 14:15:46).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <UIKit/UIScrollView.h>

@class NSArray, UIButton;
@protocol FBGroupGroupCommerceMenuViewDelegate;

@interface FBGroupGroupCommerceMenuView : UIScrollView
{
    id <FBGroupGroupCommerceMenuViewDelegate> _delegate;
    UIButton *_selectedButton;
    NSArray *_separatorLayers;
    NSArray *_buttons;
}

@property(copy, nonatomic) NSArray *buttons; // @synthesize buttons=_buttons;
- (void).cxx_destruct;
- (BOOL)touchesShouldCancelInContentView:(id)arg1;
- (void)menuItemButtonTapped:(id)arg1;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1 buttons:(id)arg2 delegate:(id)arg3;

@end

