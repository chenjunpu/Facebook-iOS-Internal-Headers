//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 12 2015 14:15:46).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class UIActivityIndicatorView, UIButton, UITextField;

@interface FBAuthLoginApprovalsContentView : UIView
{
    float _maximumWidth;
    UIView *_inputContainer;
    UIActivityIndicatorView *_activityIndicator;
    UITextField *_codeInput;
    UIButton *_loginButton;
}

@property(readonly, nonatomic) UIButton *loginButton; // @synthesize loginButton=_loginButton;
@property(readonly, nonatomic) UITextField *codeInput; // @synthesize codeInput=_codeInput;
- (void).cxx_destruct;
- (id)_makeLoginButtonWithConfiguration:(id)arg1;
- (id)_makeCodeInputWithConfiguration:(id)arg1;
- (id)_makeInputContainerWithConfiguration:(id)arg1;
- (void)stopActivityIndicator;
- (void)startActivityIndicator;
- (void)layoutSubviews;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (id)initWithConfiguration:(id)arg1;

@end

