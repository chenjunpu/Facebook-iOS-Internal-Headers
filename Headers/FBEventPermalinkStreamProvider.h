//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 12 2015 14:15:46).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class FBScenePath, FBUserSession, NSString;

@interface FBEventPermalinkStreamProvider : NSObject
{
    FBUserSession *_session;
    NSString *_eventGraphQLID;
    FBScenePath *_scenePath;
    NSString *_analyticsUUID;
}

- (void).cxx_destruct;
- (id)stream;
- (id)initWithSession:(id)arg1 eventGraphQLID:(id)arg2 scenePath:(id)arg3 analyticsUUID:(id)arg4;

@end

