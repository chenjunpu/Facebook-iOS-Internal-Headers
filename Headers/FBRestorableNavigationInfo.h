//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 12 2015 14:15:46).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "FBValueObject.h"

#import "NSCoding-Protocol.h"
#import "NSCopying-Protocol.h"

@interface FBRestorableNavigationInfo : FBValueObject <NSCopying, NSCoding>
{
    unsigned int _viewControllerPresentationMethod;
    unsigned int _viewControllerPresentationOptions;
    double _timestamp;
}

@property(readonly, nonatomic) unsigned int viewControllerPresentationOptions; // @synthesize viewControllerPresentationOptions=_viewControllerPresentationOptions;
@property(readonly, nonatomic) unsigned int viewControllerPresentationMethod; // @synthesize viewControllerPresentationMethod=_viewControllerPresentationMethod;
@property(readonly, nonatomic) double timestamp; // @synthesize timestamp=_timestamp;
- (id)initWithTimestamp:(double)arg1 viewControllerPresentationMethod:(unsigned int)arg2 viewControllerPresentationOptions:(unsigned int)arg3;

@end

