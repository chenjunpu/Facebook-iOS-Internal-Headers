//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 12 2015 14:15:46).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "FBCancelable-Protocol.h"

@protocol OS_dispatch_queue;

@interface FBAsynchronousOperation : NSObject <FBCancelable>
{
    NSObject<OS_dispatch_queue> *_runQueue;
    CDUnknownBlockType _operationBlock;
    BOOL _executing;
    BOOL _finished;
    BOOL _cancelled;
}

@property BOOL cancelled; // @synthesize cancelled=_cancelled;
@property BOOL finished; // @synthesize finished=_finished;
@property BOOL executing; // @synthesize executing=_executing;
- (void).cxx_destruct;
- (void)finish;
- (void)start;
- (void)cancel;
- (id)initWithRunQueue:(id)arg1 withBlock:(CDUnknownBlockType)arg2;

@end

