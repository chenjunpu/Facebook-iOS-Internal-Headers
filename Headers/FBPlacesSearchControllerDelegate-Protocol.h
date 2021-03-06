//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 12 2015 14:15:46).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class CLLocation, FBPlacesCategory, FBPlacesMapRegion, FBPlacesSearchController, NSString;
@protocol FBNavigationCoordinator;

@protocol FBPlacesSearchControllerDelegate <NSObject>
- (void)resetMapByUserLocation:(CLLocation *)arg1;
- (id <FBNavigationCoordinator>)navigationCoordinator;
- (void)searchControllerDidCancel:(FBPlacesSearchController *)arg1;
- (void)placesSearchControllerDidTapHereCardWithPageFBID:(NSString *)arg1;
- (void)searchController:(FBPlacesSearchController *)arg1 didFinishWithPageFBID:(NSString *)arg2 pageSessionID:(NSString *)arg3;
- (void)searchController:(FBPlacesSearchController *)arg1 didFinishWithCategory:(FBPlacesCategory *)arg2 mapRegion:(FBPlacesMapRegion *)arg3;
@end

