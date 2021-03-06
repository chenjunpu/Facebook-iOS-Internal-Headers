//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 12 2015 14:15:46).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "FBGraphQLConnectionSyncStoreListener-Protocol.h"
#import "FBSimpleMediaViewProviderDelegate-Protocol.h"
#import "UICollectionViewDataSource-Protocol.h"

@class FBUserSession, NSArray, NSString, UICollectionView;
@protocol FBGraphQLConnectionSyncStoreProtocol;

@interface FBGroupsInfoPhotoCollectionViewDataSource : NSObject <FBGraphQLConnectionSyncStoreListener, FBSimpleMediaViewProviderDelegate, UICollectionViewDataSource>
{
    NSArray *_groupPhotos;
    FBUserSession *_session;
    id <FBGraphQLConnectionSyncStoreProtocol> _mediaStore;
    UICollectionView *_collectionViewMutator;
}

@property(nonatomic) __weak UICollectionView *collectionViewMutator; // @synthesize collectionViewMutator=_collectionViewMutator;
- (void).cxx_destruct;
- (void)_reloadGroupPhotos;
- (int)_indexForPhoto:(id)arg1;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (int)collectionView:(id)arg1 numberOfItemsInSection:(int)arg2;
- (id)simpleMediaViewProvider:(id)arg1 viewOrLayerForPhoto:(id)arg2;
- (void)connectionSyncStore:(id)arg1 didUpdateNodesAtIndexes:(id)arg2;
- (void)connectionSyncStore:(id)arg1 didRemoveNodesAtIndexes:(id)arg2;
- (void)connectionSyncStore:(id)arg1 didAddNodesAtIndexes:(id)arg2;
- (void)dealloc;
- (id)initWithSession:(id)arg1 mediaStore:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

