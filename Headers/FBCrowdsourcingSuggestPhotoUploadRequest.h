//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 12 2015 14:15:46).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "FBNetworkerRequest.h"

@class NSMutableDictionary, NSString;

@interface FBCrowdsourcingSuggestPhotoUploadRequest : FBNetworkerRequest
{
    NSString *_placeID;
    NSMutableDictionary *_parameters;
}

- (void).cxx_destruct;
- (id)networkRequest;
- (id)initWithPlaceID:(id)arg1 removeLastPhoto:(BOOL)arg2 suggestedSource:(unsigned int)arg3 fromEntryPoint:(unsigned int)arg4 toEndpoint:(unsigned int)arg5 callbackPerformer:(id)arg6;
- (id)initWithPlaceID:(id)arg1 suggestedPhotoData:(id)arg2 suggestedSource:(unsigned int)arg3 fromEntryPoint:(unsigned int)arg4 toEndpoint:(unsigned int)arg5 callbackPerformer:(id)arg6;

@end

