//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 12 2015 14:15:46).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class FBButton, UITableView;
@protocol FBLocalPhotoMenuUploadEducationViewDelegate;

@interface FBLocalPhotoMenuUploadEducationView : UIView
{
    FBButton *_uploadButton;
    UITableView *_bodyView;
    id <FBLocalPhotoMenuUploadEducationViewDelegate> _delegate;
}

@property(nonatomic) __weak id <FBLocalPhotoMenuUploadEducationViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) UITableView *bodyView; // @synthesize bodyView=_bodyView;
- (void).cxx_destruct;
- (void)_didTapButton;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end

