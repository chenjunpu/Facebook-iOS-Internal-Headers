//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 12 2015 14:15:46).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSArray;

@interface FBFacepileHorizontalComponentConfiguration : NSObject
{
    NSArray *_edges;
    unsigned int _count;
}

@property(readonly, nonatomic) unsigned int count; // @synthesize count=_count;
@property(readonly, copy, nonatomic) NSArray *edges; // @synthesize edges=_edges;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)arg1;
- (id)initWithEdges:(id)arg1 count:(unsigned int)arg2;
- (id)init;

@end

