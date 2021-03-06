//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 12 2015 14:15:46).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "FBValueObject.h"

#import "NSCopying-Protocol.h"

@class FBFeedOutboxStoryPreview, FBFeedOutboxStoryProgress;

@interface FBFeedOutboxStory : FBValueObject <NSCopying>
{
    FBFeedOutboxStoryPreview *_preview;
    FBFeedOutboxStoryProgress *_progress;
}

@property(readonly, copy, nonatomic) FBFeedOutboxStoryProgress *progress; // @synthesize progress=_progress;
@property(readonly, copy, nonatomic) FBFeedOutboxStoryPreview *preview; // @synthesize preview=_preview;
- (void).cxx_destruct;
- (id)initWithPreview:(id)arg1 progress:(id)arg2;

@end

