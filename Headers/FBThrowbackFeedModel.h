//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 12 2015 14:15:46).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "NSCopying-Protocol.h"

@class FBMemGoodwillThrowbackFeedUnitsEdge, FBMemGoodwillThrowbackFriendversaryPromotionStory, FBMemGoodwillThrowbackFriendversaryStory, NSArray, NSDate, NSString;

@interface FBThrowbackFeedModel : NSObject <NSCopying>
{
    unsigned int _subtype;
    FBMemGoodwillThrowbackFeedUnitsEdge *_fBThrowbackFeedModelStory_edge;
    FBMemGoodwillThrowbackFriendversaryStory *_fBThrowbackFeedModelFriendversary_unit;
    FBMemGoodwillThrowbackFriendversaryPromotionStory *_fBThrowbackFeedModelFriendversaryPromotion_unit;
    NSDate *_fBThrowbackFeedModelHeaderCover_date;
    NSArray *_fBThrowbackFeedModelHeaderCover_images;
    NSString *_fBThrowbackFeedModelHeaderCover_title;
    NSString *_fBThrowbackFeedModelHeaderCover_subtitle;
    unsigned int _fBThrowbackFeedModelHeaderNotification_type;
    NSString *_fBThrowbackFeedModelHeaderNotification_title;
    NSString *_fBThrowbackFeedModelHeaderNotification_subtitle;
    NSString *_fBThrowbackFeedModelHeaderNotification_buttonText;
    NSString *_fBThrowbackFeedModelSectionHeader_title;
    NSString *_fBThrowbackFeedModelSectionHeader_subtitle;
    unsigned int _fBThrowbackFeedModelSectionHeader_type;
    NSString *_fBThrowbackFeedModelFooterLoading_sectionID;
    NSString *_fBThrowbackFeedModelFooterEnd_text;
    NSArray *_fBThrowbackFeedModelFooterEnd_images;
}

+ (id)fBThrowbackFeedModelStoryWithEdge:(id)arg1;
+ (id)fBThrowbackFeedModelSectionHeaderWithTitle:(id)arg1 subtitle:(id)arg2 type:(unsigned int)arg3;
+ (id)fBThrowbackFeedModelHeaderNotificationWithType:(unsigned int)arg1 title:(id)arg2 subtitle:(id)arg3 buttonText:(id)arg4;
+ (id)fBThrowbackFeedModelHeaderCoverWithDate:(id)arg1 images:(id)arg2 title:(id)arg3 subtitle:(id)arg4;
+ (id)fBThrowbackFeedModelFriendversaryWithUnit:(id)arg1;
+ (id)fBThrowbackFeedModelFriendversaryPromotionWithUnit:(id)arg1;
+ (id)fBThrowbackFeedModelFooterLoadingWithSectionID:(id)arg1;
+ (id)fBThrowbackFeedModelFooterEndWithText:(id)arg1 images:(id)arg2;
- (void).cxx_destruct;
- (void)matchFBThrowbackFeedModelStory:(CDUnknownBlockType)arg1 fBThrowbackFeedModelFriendversary:(CDUnknownBlockType)arg2 fBThrowbackFeedModelFriendversaryPromotion:(CDUnknownBlockType)arg3 fBThrowbackFeedModelHeaderCover:(CDUnknownBlockType)arg4 fBThrowbackFeedModelHeaderNotification:(CDUnknownBlockType)arg5 fBThrowbackFeedModelSectionHeader:(CDUnknownBlockType)arg6 fBThrowbackFeedModelFooterLoading:(CDUnknownBlockType)arg7 fBThrowbackFeedModelFooterEnd:(CDUnknownBlockType)arg8;
- (BOOL)isEqual:(id)arg1;
- (unsigned int)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end

