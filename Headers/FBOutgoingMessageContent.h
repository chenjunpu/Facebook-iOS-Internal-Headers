//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 12 2015 14:15:46).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "NSCoding-Protocol.h"
#import "NSCopying-Protocol.h"

@class FBMMessage, FBMStringWithRedactedDescription, FBMessageOutgoingAttribution, NSArray;

@interface FBOutgoingMessageContent : NSObject <NSCopying, NSCoding>
{
    unsigned int _subtype;
    FBMStringWithRedactedDescription *_composed_text;
    NSArray *_composed_outgoingAttachments;
    FBMessageOutgoingAttribution *_composed_outgoingAttribution;
    FBMMessage *_forwarded_originalMessage;
    FBMStringWithRedactedDescription *_forwardedAttachment_text;
    NSArray *_forwardedAttachment_singleAttachmentWrapper;
    FBMessageOutgoingAttribution *_forwardedAttachment_outgoingAttribution;
}

+ (id)forwardedWithOriginalMessage:(id)arg1;
+ (id)forwardedAttachmentWithText:(id)arg1 singleAttachmentWrapper:(id)arg2 outgoingAttribution:(id)arg3;
+ (id)composedWithText:(id)arg1 outgoingAttachments:(id)arg2 outgoingAttribution:(id)arg3;
- (void).cxx_destruct;
- (void)matchComposed:(CDUnknownBlockType)arg1 forwarded:(CDUnknownBlockType)arg2 forwardedAttachment:(CDUnknownBlockType)arg3;
- (BOOL)isEqual:(id)arg1;
- (unsigned int)hash;
- (void)encodeWithCoder:(id)arg1;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithCoder:(id)arg1;

@end

