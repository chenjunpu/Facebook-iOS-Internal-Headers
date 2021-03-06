//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 12 2015 14:15:46).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class FBCache, FBDiskCache;

@interface FBLayeredCache : NSObject
{
    FBCache *_memoryCache;
    FBDiskCache *_diskCache;
}

- (void).cxx_destruct;
- (void)clear:(CDUnknownBlockType)arg1;
- (void)cacheData:(id)arg1 forKey:(id)arg2 withExtendedInfo:(shared_ptr_16ddcdcf)arg3 queue:(id)arg4 completionHandler:(CDUnknownBlockType)arg5;
- (void)cacheData:(id)arg1 forKey:(id)arg2 queue:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (id)dataForKey:(id)arg1;
- (id)initWithMemoryCache:(id)arg1 diskCache:(id)arg2;

@end

