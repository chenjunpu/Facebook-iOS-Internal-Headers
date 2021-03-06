//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 12 2015 14:15:46).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "NSCopying-Protocol.h"

@class NSString;

@interface FBCreativePlatformIncomingAppAction : NSObject <NSCopying>
{
    unsigned int _subtype;
    NSString *_openComposerFromAppAction_appID;
    NSString *_openComposerFromAppAction_compositionID;
    NSString *_openComposerFromAppAction_sourceApplication;
    NSString *_openComposerFromAppAction_attachmentTypeString;
    NSString *_openComposerFromAppAction_localAttachmentID;
    NSString *_openCommentFromAppAction_appID;
    NSString *_openCommentFromAppAction_commentThreadID;
    NSString *_openCommentFromAppAction_sourceApplication;
    NSString *_openCommentFromAppAction_attachmentTypeString;
    NSString *_openCommentFromAppAction_localAttachmentID;
    NSString *_noActionFromAppAction_appID;
}

+ (id)openComposerFromAppActionWithAppID:(id)arg1 compositionID:(id)arg2 sourceApplication:(id)arg3 attachmentTypeString:(id)arg4 localAttachmentID:(id)arg5;
+ (id)openCommentFromAppActionWithAppID:(id)arg1 commentThreadID:(id)arg2 sourceApplication:(id)arg3 attachmentTypeString:(id)arg4 localAttachmentID:(id)arg5;
+ (id)noActionFromAppActionWithAppID:(id)arg1;
- (void).cxx_destruct;
- (void)matchOpenComposerFromAppAction:(CDUnknownBlockType)arg1 openCommentFromAppAction:(CDUnknownBlockType)arg2 noActionFromAppAction:(CDUnknownBlockType)arg3;
- (BOOL)isEqual:(id)arg1;
- (unsigned int)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end

