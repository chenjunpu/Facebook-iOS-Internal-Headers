//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 12 2015 14:15:46).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <MapKit/MKAnnotationView.h>

@class CALayer, FBAvatarProfilePictureView, FBFriendsNearbyLocationPing;

@interface FBFriendsNearbyPingAnnotationView : MKAnnotationView
{
    FBFriendsNearbyLocationPing *_locationPing;
    FBAvatarProfilePictureView *_personImageView;
    CALayer *_borderLayer;
}

- (void).cxx_destruct;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)layoutSubviews;
- (void)prepareForReuse;
- (void)setLocationPing:(id)arg1;
- (id)initWithLocationPing:(id)arg1 reuseIdentifier:(id)arg2 session:(id)arg3;

@end

