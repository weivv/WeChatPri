//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "FavForwardLogicDelegate-Protocol.h"

@class FavForwardLogicController, NSString;

@interface FavSightFullScreenViewController : UIViewController <FavForwardLogicDelegate>
{
    FavForwardLogicController *m_favForwardController;
    _Bool _supportLandscape;
}

@property(nonatomic) _Bool supportLandscape; // @synthesize supportLandscape=_supportLandscape;
- (void).cxx_destruct;
- (void)saveSight:(id)arg1;
- (void)forwardSight:(id)arg1;
- (unsigned long long)supportedInterfaceOrientations;
- (_Bool)shouldAutorotate;
- (id)getFavForawrdViewController;
- (void)viewWillAppear:(_Bool)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

