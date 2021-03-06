//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 12 2015 14:15:46).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "FBInvalidating-Protocol.h"
#import "NSCoding-Protocol.h"

@class FBAccessToken, NSString;

@interface FBBugReportAttachment : NSObject <NSCoding, FBInvalidating>
{
    FBAccessToken *_accessToken;
    NSString *_filename;
    NSString *_backupPath;
    NSString *_bugID;
    int _type;
}

+ (void)saveAttachments:(id)arg1;
+ (id)savedAttachments;
+ (BOOL)_createAttachmentsFolders;
+ (id)_filenameForAttachment:(id)arg1;
@property(nonatomic) int type; // @synthesize type=_type;
@property(copy, nonatomic) NSString *bugID; // @synthesize bugID=_bugID;
@property(copy, nonatomic) NSString *backupPath; // @synthesize backupPath=_backupPath;
@property(copy, nonatomic) NSString *filename; // @synthesize filename=_filename;
- (void).cxx_destruct;
- (id)parameters;
- (id)_attachmentData;
@property(readonly, nonatomic, getter=isValid) BOOL valid;
- (void)invalidate;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithImageData:(id)arg1 filename:(id)arg2 composerPath:(id)arg3 bugID:(id)arg4 accessToken:(id)arg5;
- (id)initWithData:(id)arg1 filename:(id)arg2 bugID:(id)arg3 accessToken:(id)arg4;
- (id)initWithContentsOfFile:(id)arg1 bugID:(id)arg2 accessToken:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

