//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 12 2015 14:15:46).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "CKCompositeComponent.h"

#import "FBHScrollImpressionLogging-Protocol.h"

@class FBCommerceProductContext, FBMemProductItem, NSString;

@interface FBCommerceProductDetailsRecommendedProductsStackItemComponent : CKCompositeComponent <FBHScrollImpressionLogging>
{
    unsigned int _index;
    NSString *_refID;
    NSString *_refType;
    FBMemProductItem *_product;
    FBCommerceProductContext *_context;
}

+ (id)newWithProduct:(id)arg1 index:(unsigned int)arg2 count:(unsigned int)arg3 context:(id)arg4 refID:(id)arg5 refType:(id)arg6;
- (void).cxx_destruct;
- (void)didTapOnProduct:(id)arg1;

@end

