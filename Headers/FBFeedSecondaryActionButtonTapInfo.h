//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 12 2015 14:15:46).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@protocol FBQueriedFeedUnitFieldsProtocol;

@interface FBFeedSecondaryActionButtonTapInfo : NSObject
{
    id <FBQueriedFeedUnitFieldsProtocol> _unit;
    id _element;
}

+ (id)newWithUnit:(id)arg1 element:(id)arg2;
@property(readonly, nonatomic) id element; // @synthesize element=_element;
@property(readonly, nonatomic) id <FBQueriedFeedUnitFieldsProtocol> unit; // @synthesize unit=_unit;
- (void).cxx_destruct;
- (id)initWithUnit:(id)arg1 element:(id)arg2;

@end

