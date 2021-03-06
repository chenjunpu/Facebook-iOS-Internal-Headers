//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 12 2015 14:15:46).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "FBNuxServerContext-Protocol.h"

@class NSString, NSURL;

@interface FBProfileHelperServerContext : NSObject <FBNuxServerContext>
{
    BOOL _modalNavBar;
    BOOL _scrollEnabled;
    BOOL _scrollBounce;
    NSURL *_url;
    NSString *_title;
    NSString *_cancelText;
    NSString *_version;
}

@property(readonly, nonatomic) BOOL scrollBounce; // @synthesize scrollBounce=_scrollBounce;
@property(readonly, nonatomic) BOOL scrollEnabled; // @synthesize scrollEnabled=_scrollEnabled;
@property(readonly, nonatomic) NSString *version; // @synthesize version=_version;
@property(readonly, nonatomic) BOOL modalNavBar; // @synthesize modalNavBar=_modalNavBar;
@property(readonly, nonatomic) NSString *cancelText; // @synthesize cancelText=_cancelText;
@property(readonly, nonatomic) NSString *title; // @synthesize title=_title;
@property(readonly, nonatomic) NSURL *url; // @synthesize url=_url;
- (void).cxx_destruct;
- (id)initWithNuxParameters:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

