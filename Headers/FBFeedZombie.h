//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 12 2015 14:15:46).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "FBValueObject.h"

#import "NSCopying-Protocol.h"

@class NSString;

@interface FBFeedZombie : FBValueObject <NSCopying>
{
    NSString *_UUID;
    NSString *_zombieString;
    NSString *_descriptionText;
    NSString *_unitType;
}

@property(readonly, copy, nonatomic) NSString *unitType; // @synthesize unitType=_unitType;
@property(readonly, copy, nonatomic) NSString *descriptionText; // @synthesize descriptionText=_descriptionText;
@property(readonly, copy, nonatomic) NSString *zombieString; // @synthesize zombieString=_zombieString;
@property(readonly, copy, nonatomic) NSString *UUID; // @synthesize UUID=_UUID;
- (void).cxx_destruct;
- (id)initWithUUID:(id)arg1 zombieString:(id)arg2 descriptionText:(id)arg3 unitType:(id)arg4;

@end

