//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 12 2015 14:15:46).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@interface FBMediaPickerAppearance : NSObject
{
    unsigned int _pickerStyle;
    BOOL _cameraShowToggleOnBottomBar;
    BOOL _topBottomBarTranslucent;
}

@property(readonly, nonatomic) BOOL topBottomBarTranslucent; // @synthesize topBottomBarTranslucent=_topBottomBarTranslucent;
@property(readonly, nonatomic) BOOL cameraShowToggleOnBottomBar; // @synthesize cameraShowToggleOnBottomBar=_cameraShowToggleOnBottomBar;
@property(readonly, nonatomic) BOOL cameraBottomBarToggleOnTheRight;
@property(readonly, nonatomic) BOOL cameraShowBackButtonOnBottomBar;
@property(readonly, nonatomic) BOOL cameraShowTopBar;
- (id)initWithPickerStyle:(unsigned int)arg1;

@end

