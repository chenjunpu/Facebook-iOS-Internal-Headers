//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 12 2015 14:15:46).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

@class UIActivityIndicatorView, UIView;

@interface FBEventViewAllTableViewCell : UITableViewCell
{
    UIActivityIndicatorView *_spinner;
    UIView *_topSeparatorView;
    UIView *_bottomBorderView;
    BOOL _animateSpinner;
}

- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)animateActivitySpinner:(BOOL)arg1;
- (id)initWithStyle:(int)arg1 reuseIdentifier:(id)arg2;

@end

