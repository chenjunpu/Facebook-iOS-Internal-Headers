//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 12 2015 14:15:46).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

@class FBPlacesTableController, NSArray;

@protocol FBPlacesTableControllerDelegate
- (void)tableControllerDidScrollWithResultsSeen:(NSArray *)arg1 lastIndexSeen:(unsigned int)arg2;
- (void)tableControllerWillDisplayLastVisibleCell:(FBPlacesTableController *)arg1;
- (void)tableController:(FBPlacesTableController *)arg1 didAnimateTableToOffscreen:(BOOL)arg2 resultsSeenIDs:(NSArray *)arg3;
- (void)tableController:(FBPlacesTableController *)arg1 willAnimateTableToOffset:(float)arg2;
- (void)tableController:(FBPlacesTableController *)arg1 didScrollToVerticalOffset:(float)arg2;
- (void)tableController:(FBPlacesTableController *)arg1 didSelectCellAtRow:(unsigned int)arg2 allCellInfos:(NSArray *)arg3 resultsCount:(unsigned int)arg4 aboveTheFold:(BOOL)arg5 resultsSeenIDs:(NSArray *)arg6;
@end

