//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 12 2015 14:15:46).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@interface FBLWIRequestsParser : NSObject
{
}

+ (id)parseCreative:(id)arg1 callToActionOption:(id)arg2;
+ (void)_updateCachedPromotionInfoWithExistingStoryCacheID:(id)arg1 promotionInfo:(id)arg2 session:(id)arg3;
+ (id)parseGraphQLResponse:(id)arg1 withQuery:(id)arg2;
+ (id)parsePromotionInfoFromFeedStory:(id)arg1 session:(id)arg2 storyCacheID:(id)arg3;
+ (id)parsePromotionInfoResponse:(id)arg1 graphQLQuery:(id)arg2 session:(id)arg3 storyCacheID:(id)arg4;

@end

