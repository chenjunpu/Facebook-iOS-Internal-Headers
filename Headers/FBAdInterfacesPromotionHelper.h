//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 12 2015 14:15:46).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@interface FBAdInterfacesPromotionHelper : NSObject
{
}

+ (int)_selectedDurationFromPromotionEndDate:(id)arg1;
+ (unsigned int)_promotionStatusFromBoostingStatus:(id)arg1;
+ (unsigned int)adInterfacesTargetingGenderFromTargetingSpec:(id)arg1;
+ (id)parseLocationsFromTargetingSpec:(id)arg1;
+ (id)parseInterestsFromTargetingSpec:(id)arg1;
+ (id)defaultAdInterfacesTargetingSpecWithBoostedComponent:(id)arg1;
+ (id)adInterfacesTargetingSpecFromTargetingSpec:(id)arg1;
+ (int)defaultDurationForPromotion:(id)arg1;
+ (id)formatEndDate:(id)arg1;
+ (int)numberOfCalendarDaysFrom:(id)arg1 to:(id)arg2;
+ (BOOL)isTargetingChanged:(id)arg1;
+ (BOOL)isScheduleChanged:(id)arg1;
+ (BOOL)isBudgetChanged:(id)arg1;
+ (id)promotionFromBoostedComponent:(id)arg1 isEligible:(BOOL)arg2;

@end

