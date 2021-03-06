//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 12 2015 14:15:46).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "FBValueObject.h"

#import "NSCopying-Protocol.h"

@class NSArray, NSString;

@interface FBPageChildLocationsViewModel : FBValueObject <NSCopying>
{
    BOOL _enableMapView;
    BOOL _enableShowMoreCell;
    NSString *_pageFBID;
    unsigned int _totalChildPagesCount;
    NSArray *_childPagesInfo;
    NSArray *_mapViewLocations;
}

@property(readonly, nonatomic) BOOL enableShowMoreCell; // @synthesize enableShowMoreCell=_enableShowMoreCell;
@property(readonly, nonatomic) BOOL enableMapView; // @synthesize enableMapView=_enableMapView;
@property(readonly, copy, nonatomic) NSArray *mapViewLocations; // @synthesize mapViewLocations=_mapViewLocations;
@property(readonly, copy, nonatomic) NSArray *childPagesInfo; // @synthesize childPagesInfo=_childPagesInfo;
@property(readonly, nonatomic) unsigned int totalChildPagesCount; // @synthesize totalChildPagesCount=_totalChildPagesCount;
@property(readonly, copy, nonatomic) NSString *pageFBID; // @synthesize pageFBID=_pageFBID;
- (void).cxx_destruct;
- (id)initWithPageFBID:(id)arg1 totalChildPagesCount:(unsigned int)arg2 childPagesInfo:(id)arg3 mapViewLocations:(id)arg4 enableMapView:(BOOL)arg5 enableShowMoreCell:(BOOL)arg6;

@end

