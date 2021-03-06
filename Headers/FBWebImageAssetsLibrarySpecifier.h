//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 12 2015 14:15:46).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "FBValueObject.h"

#import "FBWebImageSpecifier-Protocol.h"
#import "NSCopying-Protocol.h"

@class NSString, NSURL;

@interface FBWebImageAssetsLibrarySpecifier : FBValueObject <FBWebImageSpecifier, NSCopying>
{
    unsigned int _indexHint;
    NSURL *_assetURL;
    NSURL *_groupURL;
    int _assetSizes;
}

+ (id)type;
@property(readonly, nonatomic) int assetSizes; // @synthesize assetSizes=_assetSizes;
@property(readonly, copy, nonatomic) NSURL *groupURL; // @synthesize groupURL=_groupURL;
@property(readonly, copy, nonatomic) NSURL *assetURL; // @synthesize assetURL=_assetURL;
@property(readonly, nonatomic) unsigned int indexHint; // @synthesize indexHint=_indexHint;
- (void).cxx_destruct;
- (id)initWithIndexHint:(unsigned int)arg1 assetURL:(id)arg2 groupURL:(id)arg3 assetSizes:(int)arg4;
- (id)logicalIdentifier;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

