//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 12 2015 14:15:46).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class UIActivityIndicatorView, UIButton, UIColor, UIImage;

@protocol FBAuthenticationViewStyle <NSObject>
- (BOOL)shouldHideHeaderAndFooterForInterfaceType:(unsigned int)arg1 isKeyboardVisible:(BOOL)arg2;
- (UIButton *)newLabelButton;
- (float)heightOfPrimaryButton;
- (BOOL)shouldOverridePrimaryButtonHeight;
- (UIButton *)newPrimaryButton;
- (UIImage *)logoImageForAuthenticationViewHeader;
- (UIColor *)textFieldPlaceHolderColor;
- (UIColor *)textFieldColor;
- (UIColor *)textColor;
- (UIActivityIndicatorView *)newActivityIndicator;
- (UIColor *)backgroundColor;
@end

