//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 12 2015 14:15:46).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class FBActivitySharingAudioActivitySuggestionStateCoordinator, NSArray, UIViewController;

@protocol FBActivitySharingAudioActivitySuggestionStateCoordinatorDelegate <NSObject>
- (void)audioActivitySuggestionStateCoordinator:(FBActivitySharingAudioActivitySuggestionStateCoordinator *)arg1 didDismissRidgeNUX:(UIViewController *)arg2;
- (void)audioActivitySuggestionStateCoordinator:(FBActivitySharingAudioActivitySuggestionStateCoordinator *)arg1 didTriggerRidgeNUX:(UIViewController *)arg2;
- (void)audioActivitySuggestionStateCoordinator:(FBActivitySharingAudioActivitySuggestionStateCoordinator *)arg1 didChangeSuggestions:(NSArray *)arg2;
@end

