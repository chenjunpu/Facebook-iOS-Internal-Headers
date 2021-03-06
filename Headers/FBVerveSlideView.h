//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 12 2015 14:15:46).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "FBVervePackageView.h"

@class FBVerveFactoryView, FBVerveSlide, FBVerveSlideListView, UIButton, UIScrollView;

@interface FBVerveSlideView : FBVervePackageView
{
    FBVerveSlideListView *_slideList;
    FBVerveFactoryView *_renderedView;
    UIButton *_closeButton;
    BOOL _showsCloseButton;
    FBVerveSlide *_slide;
    CDStruct_225388b8 _contentTransform;
}

@property(nonatomic) CDStruct_225388b8 contentTransform; // @synthesize contentTransform=_contentTransform;
@property(nonatomic) BOOL showsCloseButton; // @synthesize showsCloseButton=_showsCloseButton;
@property(retain, nonatomic) FBVerveSlide *slide; // @synthesize slide=_slide;
- (void).cxx_destruct;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)layoutSubviews;
- (struct CGRect)_boundingRectOfView:(id)arg1;
- (void)_foreachFactoryView:(CDUnknownBlockType)arg1;
- (void)updateViews;
@property(readonly, nonatomic) UIScrollView *scrollView;
- (BOOL)dispatchSlideEvent:(id)arg1;
- (void)setSlide:(id)arg1 animated:(BOOL)arg2;
- (void)setSlide:(id)arg1 animationSpeed:(float)arg2;
- (void)invalidate;
- (void)_initializePackage;
- (void)_invalidatePackage;
- (void)_finishInit;

@end

