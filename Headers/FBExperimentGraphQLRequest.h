//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 12 2015 14:15:46).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@interface FBExperimentGraphQLRequest : NSObject
{
}

+ (void)_handleGraphQLResponse:(id)arg1 withExperimentNames:(id)arg2 withCompletion:(CDUnknownBlockType)arg3 withSession:(id)arg4;
+ (void)fetchExperimentsWithNames:(id)arg1 includeAllGroupsAndParameters:(BOOL)arg2 scenePath:(id)arg3 session:(id)arg4 completion:(CDUnknownBlockType)arg5;
+ (id)_graphQLQuery:(id)arg1 includeAllGroupsAndParameters:(BOOL)arg2;

@end

