//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 12 2015 14:15:46).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "CKComponentController.h"

@interface FBPYMLWithLargeImageFeedUnitMultiItemContentComponentController : CKComponentController
{
    unsigned int _currentPageIndex;
    unsigned int _prevPageIndex;
    unsigned int _currentDotIndex;
    unsigned int _prevDotIndex;
    unsigned int _numTotalStories;
}

- (void)updateArrowsWithShouldPulseLeftArrow:(BOOL)arg1 shouldPulseRightArrow:(BOOL)arg2;
- (void)didScrollToComponent:(id)arg1 atIndex:(id)arg2;
- (void)componentEndDraggingScrollView:(id)arg1 withContext:(id)arg2;
- (void)componentBecameFullyVisible:(id)arg1 forItem:(id)arg2;
- (void)didUpdateComponent;
- (void)didRemount;
- (void)didMount;

@end

