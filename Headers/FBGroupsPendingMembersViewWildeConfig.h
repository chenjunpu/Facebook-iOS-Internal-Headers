//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 12 2015 14:15:46).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "FBGroupsPendingMembersViewConfig-Protocol.h"

@class NSString, UIColor;

@interface FBGroupsPendingMembersViewWildeConfig : NSObject <FBGroupsPendingMembersViewConfig>
{
    BOOL _shouldUseCircularProfileImages;
    UIColor *_buttonBackgroundColor;
    UIColor *_buttonTextColor;
    UIColor *_dividerColor;
    UIColor *_selectedCellColor;
    UIColor *_subtitleColor;
    UIColor *_tintColor;
}

@property(nonatomic) BOOL shouldUseCircularProfileImages; // @synthesize shouldUseCircularProfileImages=_shouldUseCircularProfileImages;
@property(retain, nonatomic) UIColor *tintColor; // @synthesize tintColor=_tintColor;
@property(retain, nonatomic) UIColor *subtitleColor; // @synthesize subtitleColor=_subtitleColor;
@property(retain, nonatomic) UIColor *selectedCellColor; // @synthesize selectedCellColor=_selectedCellColor;
@property(retain, nonatomic) UIColor *dividerColor; // @synthesize dividerColor=_dividerColor;
@property(retain, nonatomic) UIColor *buttonTextColor; // @synthesize buttonTextColor=_buttonTextColor;
@property(retain, nonatomic) UIColor *buttonBackgroundColor; // @synthesize buttonBackgroundColor=_buttonBackgroundColor;
- (void).cxx_destruct;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

