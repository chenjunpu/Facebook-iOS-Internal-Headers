//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 12 2015 14:15:46).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "FBVerveJSON-Protocol.h"
#import "NSCopying-Protocol.h"

@class NSArray, NSString;

@interface FBVerveTimeline : NSObject <FBVerveJSON, NSCopying>
{
    NSString *_name;
    NSArray *_items;
}

+ (BOOL)resolveInstanceMethod:(SEL)arg1;
+ (Class)FBVerve_getProperties:(CDStruct_183601bc **)arg1 count:(unsigned int *)arg2;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)init;

// Remaining properties
@property(copy, nonatomic) NSArray *items; // @dynamic items;
@property(copy, nonatomic) NSString *name; // @dynamic name;

@end

