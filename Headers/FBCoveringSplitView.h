//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 12 2015 14:15:46).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class UIColor, UIImageView, UITapGestureRecognizer;
@protocol FBCoveringSplitViewDelegate;

@interface FBCoveringSplitView : UIView
{
    float _leftViewWidth;
    float _rightViewWidth;
    UITapGestureRecognizer *_tapGestureRecognizer;
    UIView *_statusBarBackground;
    UIColor *_statusBarBackgroundColor;
    UIView *_leftDividerView;
    UIView *_leftContainerView;
    UIView *_centerContainerView;
    UIView *_centerOuterContainerView;
    UIView *_leftTopView;
    UIView *_leftBottomView;
    UIView *_rightContainerView;
    id <FBCoveringSplitViewDelegate> _delegate;
    float _leftViewMaxWidth;
    float _smallerRightGutterWidthRatio;
    int _splitMode;
    float _leftDividerPosition;
    float _rightDividerPosition;
    float _topLayoutGuideLength;
    float _bottomLayoutGuideLength;
    UIView *_rightDividerView;
    UIView *_gutterDismissView;
    UIImageView *_topLeftCornerView;
    UIImageView *_topRightCornerView;
}

@property(retain, nonatomic) UITapGestureRecognizer *tapGestureRecognizer; // @synthesize tapGestureRecognizer=_tapGestureRecognizer;
@property(retain, nonatomic) UIImageView *topRightCornerView; // @synthesize topRightCornerView=_topRightCornerView;
@property(retain, nonatomic) UIImageView *topLeftCornerView; // @synthesize topLeftCornerView=_topLeftCornerView;
@property(retain, nonatomic) UIView *gutterDismissView; // @synthesize gutterDismissView=_gutterDismissView;
@property(retain, nonatomic) UIView *rightDividerView; // @synthesize rightDividerView=_rightDividerView;
@property(nonatomic) float bottomLayoutGuideLength; // @synthesize bottomLayoutGuideLength=_bottomLayoutGuideLength;
@property(nonatomic) float topLayoutGuideLength; // @synthesize topLayoutGuideLength=_topLayoutGuideLength;
@property(nonatomic) float rightDividerPosition; // @synthesize rightDividerPosition=_rightDividerPosition;
@property(nonatomic) float leftDividerPosition; // @synthesize leftDividerPosition=_leftDividerPosition;
@property(readonly, nonatomic) int splitMode; // @synthesize splitMode=_splitMode;
@property(nonatomic) float smallerRightGutterWidthRatio; // @synthesize smallerRightGutterWidthRatio=_smallerRightGutterWidthRatio;
@property(nonatomic) float leftViewMaxWidth; // @synthesize leftViewMaxWidth=_leftViewMaxWidth;
@property(nonatomic) __weak id <FBCoveringSplitViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) UIView *rightContainerView; // @synthesize rightContainerView=_rightContainerView;
@property(readonly, nonatomic) UIView *leftBottomView; // @synthesize leftBottomView=_leftBottomView;
@property(readonly, nonatomic) UIView *leftTopView; // @synthesize leftTopView=_leftTopView;
@property(retain, nonatomic) UIView *centerOuterContainerView; // @synthesize centerOuterContainerView=_centerOuterContainerView;
@property(retain, nonatomic) UIView *centerContainerView; // @synthesize centerContainerView=_centerContainerView;
@property(retain, nonatomic) UIView *leftContainerView; // @synthesize leftContainerView=_leftContainerView;
@property(retain, nonatomic) UIView *leftDividerView; // @synthesize leftDividerView=_leftDividerView;
- (void).cxx_destruct;
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;
- (float)_defaultRightGutterViewWidth;
- (float)_defaultLeftGutterViewWidth;
- (void)layoutSubviews;
- (void)_positionCornerViews;
- (void)_layoutCenterContainerView;
- (void)_layoutRightContainerView;
- (void)_layoutLeftContainerView;
- (void)_layoutRightDividerView;
- (void)_layoutDividerView;
- (void)_layoutStatusBarBackground;
@property(readonly, nonatomic) float leftViewDefaultWidth;
- (void)_setDividerPosition:(float)arg1 fromDrag:(BOOL)arg2 layoutMode:(int)arg3 withDuration:(float)arg4 withAnimationOptions:(unsigned int)arg5 completion:(CDUnknownBlockType)arg6;
- (void)didTapToDismissGutter:(id)arg1;
- (void)setSplitMode:(int)arg1 layoutMode:(int)arg2 withDuration:(float)arg3 animationOptions:(unsigned int)arg4 completion:(CDUnknownBlockType)arg5;
- (void)_enableGutterDismissView;
- (void)_disableGutterDismissView;
- (void)setSplitMode:(int)arg1 layoutMode:(int)arg2 withDuration:(float)arg3 completion:(CDUnknownBlockType)arg4;
- (BOOL)shouldShowRightView;
- (BOOL)shouldShowLeftView;
- (void)insertSubview:(id)arg1 belowSubview:(id)arg2;
- (void)insertSubview:(id)arg1 atIndex:(int)arg2;
- (void)insertSubview:(id)arg1 aboveSubview:(id)arg2;
- (void)addSubview:(id)arg1;
@property(retain, nonatomic) UIColor *statusBarBackgroundColor;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

@end

