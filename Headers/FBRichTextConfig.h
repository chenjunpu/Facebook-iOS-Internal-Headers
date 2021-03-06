//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 12 2015 14:15:46).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSAttributedString, UIFont;

@interface FBRichTextConfig : NSObject
{
    NSAttributedString *_attributedString;
    UIFont *_defaultFont;
    unsigned int _maximumNumberOfLines;
    unsigned int _truncationMode;
    NSAttributedString *_truncationAttributedString;
    struct CGSize _constrainedSize;
    struct CGSize _textShadowOffset;
}

@property(copy, nonatomic) NSAttributedString *truncationAttributedString; // @synthesize truncationAttributedString=_truncationAttributedString;
@property(nonatomic) unsigned int truncationMode; // @synthesize truncationMode=_truncationMode;
@property(nonatomic) unsigned int maximumNumberOfLines; // @synthesize maximumNumberOfLines=_maximumNumberOfLines;
@property(nonatomic) struct CGSize textShadowOffset; // @synthesize textShadowOffset=_textShadowOffset;
@property(retain, nonatomic) UIFont *defaultFont; // @synthesize defaultFont=_defaultFont;
@property(nonatomic) struct CGSize constrainedSize; // @synthesize constrainedSize=_constrainedSize;
@property(copy, nonatomic) NSAttributedString *attributedString; // @synthesize attributedString=_attributedString;
- (void).cxx_destruct;

@end

