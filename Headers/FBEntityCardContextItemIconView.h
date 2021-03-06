//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 12 2015 14:15:46).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class FBMemImage, FBRatingPillView, NSString;

@interface FBEntityCardContextItemIconView : UIView
{
    UIView *_imageView;
    FBMemImage *_image;
    NSString *_imageSizing;
    FBRatingPillView *_ratingsView;
}

@property(retain, nonatomic) FBRatingPillView *ratingsView; // @synthesize ratingsView=_ratingsView;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)setIconWithRating:(float)arg1;
- (void)setIcon:(id)arg1;
- (void)setIconWithImage:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)initWithSession:(id)arg1;
- (id)init;

@end

