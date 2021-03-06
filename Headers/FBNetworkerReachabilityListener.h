//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 12 2015 14:15:46).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "FBHttpExecutorListener-Protocol.h"

@class NSString;
@protocol FBReachabilityQualityDelegate;

@interface FBNetworkerReachabilityListener : NSObject <FBHttpExecutorListener>
{
    id <FBReachabilityQualityDelegate> _qualityDelegate;
}

+ (id)sharedListener;
- (void).cxx_destruct;
- (void)httpRequest:(id)arg1 didSucceedWithStatus:(id)arg2;
- (id)initWithQualityDelegate:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

