//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 12 2015 14:15:46).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "FBComponentScrollEventListener-Protocol.h"

@class FBAnimationPerformanceLogger, NSString;

@interface FBReactionScrollPerformanceTracker : NSObject <FBComponentScrollEventListener>
{
    FBAnimationPerformanceLogger *_scrollPerfTracker;
}

- (void).cxx_destruct;
- (void)scrollViewDidEndDragging:(struct FBScrollViewState)arg1 willDecelerate:(BOOL)arg2;
- (void)scrollViewDidEndDecelerating:(struct FBScrollViewState)arg1;
- (void)scrollViewWillBeginDragging:(struct FBScrollViewState)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

