//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 12 2015 14:15:46).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "FBAnalyticsInfoSource-Protocol.h"
#import "FBIntentHandler-Protocol.h"
#import "NSObject-Protocol.h"

@class FBAttachmentNode;

@protocol FBAttachmentNodeDelegate <NSObject, FBIntentHandler, FBAnalyticsInfoSource>

@optional
- (void)attachmentNodeDidDisappear:(FBAttachmentNode *)arg1;
- (void)attachmentNodeWillAppear:(FBAttachmentNode *)arg1;
- (void)attachmentNodeWasTapped:(FBAttachmentNode *)arg1;
@end

