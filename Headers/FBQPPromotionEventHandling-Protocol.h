//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 12 2015 14:15:46).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class FBQPAction, FBQPPromotion, NSDictionary, NSString;

@protocol FBQPPromotionEventHandling <NSObject>
- (BOOL)promotion:(FBQPPromotion *)arg1 shouldHandleAction:(FBQPAction *)arg2 withTriggerContext:(NSDictionary *)arg3;
- (void)promotion:(FBQPPromotion *)arg1 shouldLogNuxEvent:(NSString *)arg2 extra:(NSDictionary *)arg3;
- (void)promotionDidDisappear:(FBQPPromotion *)arg1;
@end

