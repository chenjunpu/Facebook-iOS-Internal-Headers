//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 12 2015 14:15:46).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "RCTBridgeModule-Protocol.h"
#import "UIAlertViewDelegate-Protocol.h"

@class NSMutableArray, NSString, RCTBridge;
@protocol OS_dispatch_queue;

@interface RCTAlertManager : NSObject <UIAlertViewDelegate, RCTBridgeModule>
{
    NSMutableArray *_alerts;
    NSMutableArray *_alertCallbacks;
    NSMutableArray *_alertButtonKeys;
}

+ (id)__rct_export__580;
+ (void)load;
+ (id)moduleName;
- (void).cxx_destruct;
- (void)alertView:(id)arg1 clickedButtonAtIndex:(int)arg2;
- (void)alertWithArgs:(id)arg1 callback:(CDUnknownBlockType)arg2;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *methodQueue;
- (id)init;

// Remaining properties
@property(nonatomic) __weak RCTBridge *bridge;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

