//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 12 2015 14:15:46).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSString, UIImage;

@interface FBPublisherBar_DEPRECATEDButton : NSObject
{
    NSString *_text;
    UIImage *_normalBackgroundImage;
    UIImage *_highlightedBackgroundImage;
    UIImage *_iconImage;
    UIImage *_highlightedIconImage;
    NSString *_composerSourceType;
    NSString *_composerContentOrigin;
    id _target;
    SEL _action;
}

+ (id)barButtonWithText:(id)arg1 normalBackgroundImage:(id)arg2 highlightedBackgroundImage:(id)arg3 iconImage:(id)arg4 highlightedIconImage:(id)arg5 target:(id)arg6 action:(SEL)arg7 composerSourceType:(id)arg8 composerContentOrigin:(id)arg9;
+ (id)barButtonWithText:(id)arg1 normalBackgroundImage:(id)arg2 highlightedBackgroundImage:(id)arg3 iconImage:(id)arg4 target:(id)arg5 action:(SEL)arg6 composerSourceType:(id)arg7 composerContentOrigin:(id)arg8;
+ (id)sproutsBarButton;
+ (id)defaultCheckinBarButtonWithSourceType:(id)arg1 contentOrigin:(id)arg2;
+ (id)_defaultPhotoBarButtonWithSourceType:(id)arg1 contentOrigin:(id)arg2 text:(id)arg3;
+ (id)defaultSharePhotoButtonWithSourceType:(id)arg1 contentOrigin:(id)arg2;
+ (id)defaultPhotoBarButtonWithSourceType:(id)arg1 contentOrigin:(id)arg2;
+ (id)_defaultStatusButtonWithSourceType:(id)arg1 contentOrigin:(id)arg2 text:(id)arg3;
+ (id)defaultWritePostButtonWithSourceType:(id)arg1 contentOrigin:(id)arg2;
+ (id)defaultStatusBarButtonWithSourceType:(id)arg1 contentOrigin:(id)arg2;
@property(nonatomic) SEL action; // @synthesize action=_action;
@property(nonatomic) __weak id target; // @synthesize target=_target;
@property(copy, nonatomic) NSString *composerContentOrigin; // @synthesize composerContentOrigin=_composerContentOrigin;
@property(copy, nonatomic) NSString *composerSourceType; // @synthesize composerSourceType=_composerSourceType;
@property(retain, nonatomic) UIImage *highlightedIconImage; // @synthesize highlightedIconImage=_highlightedIconImage;
@property(retain, nonatomic) UIImage *iconImage; // @synthesize iconImage=_iconImage;
@property(retain, nonatomic) UIImage *highlightedBackgroundImage; // @synthesize highlightedBackgroundImage=_highlightedBackgroundImage;
@property(retain, nonatomic) UIImage *normalBackgroundImage; // @synthesize normalBackgroundImage=_normalBackgroundImage;
@property(copy, nonatomic) NSString *text; // @synthesize text=_text;
- (void).cxx_destruct;

@end

