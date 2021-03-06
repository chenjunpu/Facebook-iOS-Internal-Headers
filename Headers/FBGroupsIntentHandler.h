//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 12 2015 14:15:46).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "FBIntentHandler-Protocol.h"

@class NSString;
@protocol FBIntentHandler;

@interface FBGroupsIntentHandler : NSObject <FBIntentHandler>
{
    id <FBIntentHandler> _handler;
    NSString *_groupID;
    BOOL _isForSaleGroup;
}

@property(nonatomic) BOOL isForSaleGroup; // @synthesize isForSaleGroup=_isForSaleGroup;
- (void).cxx_destruct;
- (void)handleIntent:(id)arg1;
- (id)initWithFallbackIntentHandler:(id)arg1 groupID:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

