//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 12 2015 14:15:46).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

@class NSSet, UIEvent;

@protocol FBCAResponder
@property(nonatomic, getter=isUserInteractionEnabled) BOOL userInteractionEnabled;
@property(readonly, nonatomic) id nextResponder;
- (BOOL)canPerformAction:(SEL)arg1 withSender:(id)arg2;
- (void)touchesMoved:(NSSet *)arg1 withEvent:(UIEvent *)arg2;
- (void)touchesEnded:(NSSet *)arg1 withEvent:(UIEvent *)arg2;
- (void)touchesCancelled:(NSSet *)arg1 withEvent:(UIEvent *)arg2;
- (void)touchesBegan:(NSSet *)arg1 withEvent:(UIEvent *)arg2;
@end

