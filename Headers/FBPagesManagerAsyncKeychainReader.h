//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 12 2015 14:15:46).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class FBKeychainItemController, NSString;

@interface FBPagesManagerAsyncKeychainReader : NSObject
{
    FBKeychainItemController *_pmaKeychain;
    BOOL _keychainLoaded;
    NSString *_pmaLoggedInUserID;
}

@property BOOL keychainLoaded; // @synthesize keychainLoaded=_keychainLoaded;
@property(copy) NSString *pmaLoggedInUserID; // @synthesize pmaLoggedInUserID=_pmaLoggedInUserID;
- (void).cxx_destruct;
- (void)_loadKeychainInBackground;
- (void)_updateWithItem:(id)arg1;
- (void)dealloc;
- (id)init;

@end

