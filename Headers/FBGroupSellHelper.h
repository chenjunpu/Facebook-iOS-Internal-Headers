//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 12 2015 14:15:46).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@interface FBGroupSellHelper : NSObject
{
}

+ (id)getSymbolFromCurrencyCode:(id)arg1;
+ (BOOL)shouldInterceptPostForSell:(id)arg1 forSaleConfiguration:(id)arg2;
+ (id)getCategoryFromProductItem:(id)arg1;
+ (id)sanitizeCurrencyCode:(id)arg1;
+ (id)getDisplayPrice:(id)arg1;
+ (double)getPriceAmount:(id)arg1;
+ (id)getSellConfigFromGroup:(id)arg1;
+ (id)separatorBetweenPriceAndLocation;

@end

