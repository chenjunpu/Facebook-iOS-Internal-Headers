//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 12 2015 14:15:46).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "_FBGraphQLConnectionstorePersistentPageLoaderOperation-Protocol.h"

@class FBGraphQLConnectionStorePersistentCache, NSArray, NSString;

@interface _FBGraphQLConnectionstorePersistentPageLoaderWriteOperation : NSObject <_FBGraphQLConnectionstorePersistentPageLoaderOperation>
{
    NSArray *_pages;
    FBGraphQLConnectionStorePersistentCache *_persistentCache;
    NSString *_persistentCacheKey;
    CDUnknownBlockType _completionHandler;
}

- (void).cxx_destruct;
- (void)_savePage:(id)arg1 startCursorOfNextPage:(id)arg2 isSavingFirstPage:(BOOL)arg3 isSavingLastPage:(BOOL)arg4 delegate:(id)arg5;
- (void)startWithDelegate:(id)arg1;
- (id)initWithPages:(id)arg1 persistentCache:(id)arg2 persistentCacheKey:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

