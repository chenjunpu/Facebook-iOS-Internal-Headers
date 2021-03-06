//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 12 2015 14:15:46).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSDate, NSString, UIViewController;
@protocol FBEntityCardsAnalyticsLogger;

@interface FBEntityCardImpressionManager : NSObject
{
    id <FBEntityCardsAnalyticsLogger> _logger;
    NSString *_lastDisplayedEntityID;
    NSDate *_appearedTime;
    UIViewController *_lastDisplayedViewController;
}

- (void).cxx_destruct;
- (void)entityCardDisappeared;
- (void)entityCardAppearedWithEntity:(id)arg1 viewController:(id)arg2;
- (void)dealloc;
- (id)initWithLogger:(id)arg1;

@end

