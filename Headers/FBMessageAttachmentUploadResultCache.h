//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 12 2015 14:15:46).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class FBCache, NSMutableDictionary;

@interface FBMessageAttachmentUploadResultCache : NSObject
{
    FBCache *_cache;
    NSMutableDictionary *_fbidToHashKeyMapping;
}

- (void).cxx_destruct;
- (void)invalidateAttachmentUploadResultCacheWithFbIds:(id)arg1;
- (void)setResult:(id)arg1 forHashKey:(id)arg2;
- (id)resultForHashKey:(id)arg1;
- (id)init;

@end

