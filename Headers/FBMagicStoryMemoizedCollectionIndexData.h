//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 12 2015 14:15:46).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "FBValueObject.h"

#import "NSCoding-Protocol.h"
#import "NSCopying-Protocol.h"

@class NSArray, NSURL;

@interface FBMagicStoryMemoizedCollectionIndexData : FBValueObject <NSCopying, NSCoding>
{
    NSURL *_latestAssetUrl;
    NSArray *_collectionDataArray;
}

@property(readonly, copy, nonatomic) NSArray *collectionDataArray; // @synthesize collectionDataArray=_collectionDataArray;
@property(readonly, copy, nonatomic) NSURL *latestAssetUrl; // @synthesize latestAssetUrl=_latestAssetUrl;
- (void).cxx_destruct;
- (id)initWithLatestAssetUrl:(id)arg1 collectionDataArray:(id)arg2;

@end

