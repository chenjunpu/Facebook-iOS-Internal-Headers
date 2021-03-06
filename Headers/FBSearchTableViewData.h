//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 12 2015 14:15:46).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSArray;

@interface FBSearchTableViewData : NSObject
{
    struct unique_ptr<std::__1::vector<Section, std::__1::allocator<Section>>, std::__1::default_delete<std::__1::vector<Section, std::__1::allocator<Section>>>> _sectionsPtr;
    NSArray *_objects;
    unsigned int _objectCount;
}

+ (id)dataFromObjectArray:(id)arg1;
+ (id)dataFromTitleAndObjectArrayTuple:(id)arg1;
@property(readonly, nonatomic) unsigned int objectCount; // @synthesize objectCount=_objectCount;
- (id).cxx_construct;
- (void).cxx_destruct;
- (id)filterObjects:(CDUnknownBlockType)arg1;
- (id)allObjects;
- (id)firstObject;
- (unsigned int)objectIndexForIndexPath:(id)arg1;
- (id)objectAtIndexPath:(id)arg1;
- (BOOL)rowIsSectionTitle:(id)arg1;
- (id)titleModelForSection:(unsigned int)arg1;
- (unsigned int)numberOfRowsInSection:(int)arg1;
- (unsigned int)numberOfSections;
- (BOOL)hasSectionHeader;
- (void)_shredTuple:(id)arg1;
- (id)init;
- (id)initWithTuple:(id)arg1 objects:(id)arg2;

@end

