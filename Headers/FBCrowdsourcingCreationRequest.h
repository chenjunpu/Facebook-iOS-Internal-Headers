//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 12 2015 14:15:46).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "FBNetworkerRequest.h"

@class NSDictionary;

@interface FBCrowdsourcingCreationRequest : FBNetworkerRequest
{
    BOOL _shouldCompress;
    NSDictionary *_parameters;
}

+ (id)networkRequestParametersWithModel:(id)arg1;
@property(readonly, copy, nonatomic) NSDictionary *parameters; // @synthesize parameters=_parameters;
- (void).cxx_destruct;
- (id)networkRequest;
- (id)initWithRequestParameters:(id)arg1 shouldCompress:(BOOL)arg2 callbackPerformer:(id)arg3;

@end

