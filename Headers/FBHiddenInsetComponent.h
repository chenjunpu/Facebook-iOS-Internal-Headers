//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 12 2015 14:15:46).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "CKComponent.h"

@interface FBHiddenInsetComponent : CKComponent
{
    struct UIEdgeInsets _insets;
    CKComponent *_component;
}

+ (id)newWithView:(const struct CKComponentViewConfiguration *)arg1 size:(const struct CKComponentSize *)arg2;
+ (id)newWithInsets:(struct UIEdgeInsets)arg1 component:(id)arg2;
- (id).cxx_construct;
- (void).cxx_destruct;
- (struct CKComponentLayout)computeLayoutThatFits:(struct CKSizeRange)arg1 restrictedToSize:(const struct CKComponentSize *)arg2 relativeToParentSize:(struct CGSize)arg3;

@end

