//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 12 2015 14:15:46).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class FBFlipViewController, UIView;

@protocol FBFlipViewControllerDelegate <NSObject>

@optional
- (void)flipViewController:(FBFlipViewController *)arg1 prepareSnapshotView:(UIView *)arg2;
- (void)flipViewControllerDidTapBackground:(FBFlipViewController *)arg1;
@end

