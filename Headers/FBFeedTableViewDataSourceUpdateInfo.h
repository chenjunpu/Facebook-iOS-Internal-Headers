//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 12 2015 14:15:46).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "FBValueObject.h"

#import "NSCopying-Protocol.h"

@class NSArray;

@interface FBFeedTableViewDataSourceUpdateInfo : FBValueObject <NSCopying>
{
    BOOL _hasTrailingGap;
    BOOL _didInsertOrDeleteRow;
    BOOL _didInsertContentInTopRow;
    BOOL _didInsertNonShareOptimisticStory;
    unsigned int _unreadCount;
    NSArray *_insertedMutationIdentifiers;
}

@property(readonly, copy, nonatomic) NSArray *insertedMutationIdentifiers; // @synthesize insertedMutationIdentifiers=_insertedMutationIdentifiers;
@property(readonly, nonatomic) BOOL didInsertNonShareOptimisticStory; // @synthesize didInsertNonShareOptimisticStory=_didInsertNonShareOptimisticStory;
@property(readonly, nonatomic) BOOL didInsertContentInTopRow; // @synthesize didInsertContentInTopRow=_didInsertContentInTopRow;
@property(readonly, nonatomic) BOOL didInsertOrDeleteRow; // @synthesize didInsertOrDeleteRow=_didInsertOrDeleteRow;
@property(readonly, nonatomic) BOOL hasTrailingGap; // @synthesize hasTrailingGap=_hasTrailingGap;
@property(readonly, nonatomic) unsigned int unreadCount; // @synthesize unreadCount=_unreadCount;
- (void).cxx_destruct;
- (id)initWithUnreadCount:(unsigned int)arg1 hasTrailingGap:(BOOL)arg2 didInsertOrDeleteRow:(BOOL)arg3 didInsertContentInTopRow:(BOOL)arg4 didInsertNonShareOptimisticStory:(BOOL)arg5 insertedMutationIdentifiers:(id)arg6;

@end

