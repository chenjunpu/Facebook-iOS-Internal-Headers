//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 12 2015 14:15:46).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSPointerArray, Protocol;

@interface FBDelegateForwarder : NSObject
{
    NSPointerArray *_observers;
    Protocol *_protocol;
}

- (void).cxx_destruct;
- (void)removeAllObservers;
- (void)addObserver:(id)arg1;
- (void)forwardInvocation:(id)arg1;
- (BOOL)respondsToSelector:(SEL)arg1;
- (id)methodSignatureForSelector:(SEL)arg1;
- (id)initWithProtocol:(id)arg1;

@end

