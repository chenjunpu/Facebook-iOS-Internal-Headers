//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 12 2015 14:15:46).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

#import "UITextFieldDelegate-Protocol.h"

@class CALayer, NSString, UIButton, UIImageView, UITextField;
@protocol FBCrowdsourcingNewSuggestEditsFieldTableViewCellDelegate;

@interface FBCrowdsourcingNewSuggestEditsFieldTableViewCell : UITableViewCell <UITextFieldDelegate>
{
    CALayer *_topBorder;
    CALayer *_bottomBorder;
    BOOL _isFirstCell;
    BOOL _isLastCell;
    unsigned int _rightButtonStyle;
    UITextField *_textField;
    UIImageView *_leftIconView;
    unsigned int _section;
    UIButton *_rightButton;
    id <FBCrowdsourcingNewSuggestEditsFieldTableViewCellDelegate> _delegate;
}

@property(nonatomic) __weak id <FBCrowdsourcingNewSuggestEditsFieldTableViewCellDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) UIButton *rightButton; // @synthesize rightButton=_rightButton;
@property(nonatomic) unsigned int section; // @synthesize section=_section;
@property(nonatomic) BOOL isLastCell; // @synthesize isLastCell=_isLastCell;
@property(nonatomic) BOOL isFirstCell; // @synthesize isFirstCell=_isFirstCell;
@property(readonly, nonatomic) UIImageView *leftIconView; // @synthesize leftIconView=_leftIconView;
@property(readonly, nonatomic) UITextField *textField; // @synthesize textField=_textField;
@property(nonatomic) unsigned int rightButtonStyle; // @synthesize rightButtonStyle=_rightButtonStyle;
- (void).cxx_destruct;
- (void)textFieldDidEndEditing:(id)arg1;
- (BOOL)textFieldShouldReturn:(id)arg1;
- (BOOL)textFieldShouldClear:(id)arg1;
- (BOOL)textField:(id)arg1 shouldChangeCharactersInRange:(struct _NSRange)arg2 replacementString:(id)arg3;
- (void)prepareForReuse;
- (void)layoutSubviews;
- (id)initWithStyle:(int)arg1 reuseIdentifier:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

