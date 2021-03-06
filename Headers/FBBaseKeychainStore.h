//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 12 2015 14:15:46).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@protocol OS_dispatch_queue;

@interface FBBaseKeychainStore : NSObject
{
    NSObject<OS_dispatch_queue> *_queue;
}

+ (id)searchDictionaryForItem:(id)arg1;
+ (id)defaultDictionaryForItem:(id)arg1;
+ (id)sharedInstance;
- (void).cxx_destruct;
- (BOOL)remove:(id)arg1 error:(id *)arg2;
- (BOOL)update:(id)arg1 data:(CDUnknownBlockType)arg2 error:(id *)arg3;
- (BOOL)save:(id)arg1 data:(id)arg2 error:(id *)arg3;
- (id)load:(id)arg1 error:(id *)arg2;
- (BOOL)create:(id)arg1 data:(id)arg2 error:(id *)arg3;
- (void)remove:(id)arg1 onSuccess:(CDUnknownBlockType)arg2 onError:(CDUnknownBlockType)arg3 withTargetQueue:(id)arg4;
- (void)update:(id)arg1 data:(CDUnknownBlockType)arg2 onSuccess:(CDUnknownBlockType)arg3 onError:(CDUnknownBlockType)arg4 withTargetQueue:(id)arg5;
- (void)save:(id)arg1 data:(id)arg2 onSuccess:(CDUnknownBlockType)arg3 onError:(CDUnknownBlockType)arg4 withTargetQueue:(id)arg5;
- (void)load:(id)arg1 onSuccess:(CDUnknownBlockType)arg2 onError:(CDUnknownBlockType)arg3 withTargetQueue:(id)arg4;
- (void)create:(id)arg1 data:(id)arg2 onSuccess:(CDUnknownBlockType)arg3 onError:(CDUnknownBlockType)arg4 withTargetQueue:(id)arg5;
- (void)_remove:(id)arg1 onSuccess:(CDUnknownBlockType)arg2 onError:(CDUnknownBlockType)arg3;
- (void)_update:(id)arg1 data:(CDUnknownBlockType)arg2 onSuccess:(CDUnknownBlockType)arg3 onError:(CDUnknownBlockType)arg4;
- (void)_load:(id)arg1 onSuccess:(CDUnknownBlockType)arg2 onError:(CDUnknownBlockType)arg3;
- (void)_load_unsafe:(id)arg1 onSuccess:(CDUnknownBlockType)arg2 onError:(CDUnknownBlockType)arg3;
- (void)_create:(id)arg1 data:(id)arg2 onSuccess:(CDUnknownBlockType)arg3 onError:(CDUnknownBlockType)arg4;
- (id)secErrorWithStatus:(long)arg1 item:(id)arg2 description:(id)arg3;
- (id)keychainErrorWithCode:(int)arg1 item:(id)arg2 description:(id)arg3;
- (id)genericErrorWithDomain:(id)arg1 code:(unsigned int)arg2 serviceID:(id)arg3 description:(id)arg4;
- (id)init;

@end

