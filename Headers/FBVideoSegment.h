//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 12 2015 14:15:46).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class AVAssetWriter, AVAssetWriterInput, NSData;

@interface FBVideoSegment : NSObject
{
    AVAssetWriter *_assetWriter;
    AVAssetWriterInput *_videoWriterInput;
    AVAssetWriterInput *_audioWriterInput;
    int _videoSegmentState;
    int _segmentNumber;
    CDStruct_1b6d18a9 _startPTS;
    CDStruct_1b6d18a9 _endPTS;
    CDStruct_1b6d18a9 _lastVideoFramePTS;
    CDStruct_1b6d18a9 _lastAudioFramePTS;
}

@property(nonatomic) int segmentNumber; // @synthesize segmentNumber=_segmentNumber;
@property(readonly, nonatomic) CDStruct_1b6d18a9 lastAudioFramePTS; // @synthesize lastAudioFramePTS=_lastAudioFramePTS;
@property(readonly, nonatomic) CDStruct_1b6d18a9 lastVideoFramePTS; // @synthesize lastVideoFramePTS=_lastVideoFramePTS;
@property(nonatomic) CDStruct_1b6d18a9 endPTS; // @synthesize endPTS=_endPTS;
@property(readonly, nonatomic) CDStruct_1b6d18a9 startPTS; // @synthesize startPTS=_startPTS;
- (void).cxx_destruct;
- (id)description;
@property(readonly, nonatomic) NSData *outputVideoData;
- (BOOL)isRecording;
- (void)finishSegment:(CDUnknownBlockType)arg1;
- (void)addSampleBuffer:(struct opaqueCMSampleBuffer *)arg1 fromCaptureOutput:(id)arg2;
- (void)defineSegmentStart:(CDStruct_1b6d18a9)arg1 duration:(double)arg2 sessionStart:(CDStruct_1b6d18a9)arg3;
- (id)initWithOutputFileURL:(id)arg1 videoSettings:(id)arg2 audioSettings:(id)arg3;

@end

