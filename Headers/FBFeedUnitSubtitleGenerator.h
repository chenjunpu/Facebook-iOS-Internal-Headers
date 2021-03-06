//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 12 2015 14:15:46).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class FBFeedMagicMicExperimentContext, FBMemFeedStory;

@interface FBFeedUnitSubtitleGenerator : NSObject
{
    FBMemFeedStory *_story;
    FBFeedMagicMicExperimentContext *_magicMicComposerExperiment;
    BOOL _useExpandedDate;
    BOOL _useImpactFont;
}

+ (id)subtitleByAppendingIconString:(id)arg1 toAttributedString:(id)arg2;
+ (id)subtitleByAppendingDotSymbolToAttributedString:(id)arg1;
+ (id)subtitleFormattedDate:(id)arg1 useExpandedDate:(BOOL)arg2;
+ (id)uppercaseStyledStringFromAttributedString:(id)arg1;
+ (id)subtitleStyledStringFromString:(id)arg1;
+ (id)subtitleForStory:(id)arg1 truncationMode:(int)arg2 magicMicComposerExperiment:(id)arg3 useExpandedDate:(BOOL)arg4 useImpactFont:(BOOL)arg5;
+ (id)generatorWithStory:(id)arg1 magicMicComposerExperiment:(id)arg2 useExpandedDate:(BOOL)arg3 useImpactFont:(BOOL)arg4;
- (void).cxx_destruct;
- (id)generateSubtitlesWithOptions:(unsigned int)arg1;
- (id)initWithStory:(id)arg1 magicMicExperimentContext:(id)arg2 useExpandedDate:(BOOL)arg3 useImpactFont:(BOOL)arg4;

@end

