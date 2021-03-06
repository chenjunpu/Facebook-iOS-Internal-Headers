//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 12 2015 14:15:46).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSArray, NSAttributedString;

@interface FBPTBlacklistPageConfig : NSObject
{
    NSAttributedString *_header;
    NSArray *_titles;
    CDUnknownBlockType _closeTapHandler;
    CDUnknownBlockType _headerTapHandler;
    CDUnknownBlockType _rowTapHandler;
}

@property(copy, nonatomic) CDUnknownBlockType rowTapHandler; // @synthesize rowTapHandler=_rowTapHandler;
@property(copy, nonatomic) CDUnknownBlockType headerTapHandler; // @synthesize headerTapHandler=_headerTapHandler;
@property(copy, nonatomic) CDUnknownBlockType closeTapHandler; // @synthesize closeTapHandler=_closeTapHandler;
@property(copy, nonatomic) NSArray *titles; // @synthesize titles=_titles;
@property(copy, nonatomic) NSAttributedString *header; // @synthesize header=_header;
- (void).cxx_destruct;
- (id)initWithHeader:(id)arg1 rowTitles:(id)arg2 onCloseTapped:(CDUnknownBlockType)arg3 onHeaderTapped:(CDUnknownBlockType)arg4 onRowTapped:(CDUnknownBlockType)arg5;

@end

