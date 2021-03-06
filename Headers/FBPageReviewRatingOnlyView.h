//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 12 2015 14:15:46).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class FBButton, FBItemView, FBItemViewBuildManager, FBMemContactRecommendationField, FBUserSession, NSString;
@protocol FBPageReviewRatingOnlyViewDelegate;

@interface FBPageReviewRatingOnlyView : UIView
{
    FBUserSession *_session;
    NSString *_name;
    NSString *_date;
    UIView *_verticalDivider;
    FBButton *_composeButton;
    FBItemViewBuildManager *_buildManager;
    FBItemView *_reviewView;
    NSString *_accessibilityLabelText;
    id <FBPageReviewRatingOnlyViewDelegate> _delegate;
    FBMemContactRecommendationField *_recommendation;
    unsigned int _rating;
}

+ (id)_attributedStringForRatingDateLabelWithRating:(unsigned int)arg1 date:(id)arg2;
@property(nonatomic) unsigned int rating; // @synthesize rating=_rating;
@property(retain, nonatomic) FBMemContactRecommendationField *recommendation; // @synthesize recommendation=_recommendation;
@property(nonatomic) __weak id <FBPageReviewRatingOnlyViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (id)_makeAccessibilityLabel;
- (id)accessibilityLabel;
- (void)_tappedReviewComposerAction:(id)arg1;
- (id)_dateFromRecommendation;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1 session:(id)arg2;

@end

