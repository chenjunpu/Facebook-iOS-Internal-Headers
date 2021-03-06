//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 12 2015 14:15:46).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class FBUserSession, NSDate, NSString;
@protocol FBFriendCodeNetworkerDelegate;

@interface FBFriendCodeNetworker : NSObject
{
    FBUserSession *_session;
    NSString *_friendCode;
    NSString *_ref;
    NSDate *_expirationTime;
    NSString *_userID;
    id <FBFriendCodeNetworkerDelegate> _delegate;
}

@property(nonatomic) __weak id <FBFriendCodeNetworkerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)_handleSearchFailureResponse:(id)arg1;
- (BOOL)_parseSearchResponse:(id)arg1;
- (void)_handleSearchSuccessResponse:(id)arg1;
- (void)searchByFriendCode:(id)arg1;
- (void)_handleLookupFailureResponse:(id)arg1;
- (BOOL)_parseLookupResponse:(id)arg1;
- (void)_handleLookupSuccessResponse:(id)arg1;
- (void)lookupFriendCode;
- (id)init;
- (id)initWithSession:(id)arg1 ref:(id)arg2;

@end

