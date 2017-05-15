//
//  KDSocialShare.h
//  ReactNativeSocialShare
//
//  Created by Kim Døfler Sand Laursen on 25-04-15.
//  Copyright (c) 2015 Facebook. All rights reserved.
//
@import UIKit;

#import <React/RCTBridgeModule.h>
#import <MessageUI/MessageUI.h>
#import <MessageUI/MFMessageComposeViewController.h>

@interface KDSocialShare : NSObject <RCTBridgeModule, MFMessageComposeViewControllerDelegate>

@end
