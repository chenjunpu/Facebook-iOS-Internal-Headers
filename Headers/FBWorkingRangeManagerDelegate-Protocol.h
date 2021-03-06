//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 12 2015 14:15:46).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class FBWorkingRangeManager;

@protocol FBWorkingRangeManagerDelegate <NSObject>
- (unsigned int)workingRangeManager:(FBWorkingRangeManager *)arg1 indexOfItem:(id)arg2;
- (id)workingRangeManager:(FBWorkingRangeManager *)arg1 itemAtIndex:(unsigned int)arg2;

@optional
- (void)item:(id)arg1 wasCulledFromWorkingRange:(FBWorkingRangeManager *)arg2;
- (void)item:(id)arg1 didEnterWorkingRange:(FBWorkingRangeManager *)arg2;
@end

