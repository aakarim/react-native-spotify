//
//  RCTSpotify.h
//  RCTSpotify
//
//  Created by Adil A. Karim on 30/03/2017.
//  Copyright © 2017 A A Karim. All rights reserved.
//

#import <React/RCTBridgeModule.h>
#import <SpotifyAudioPlayback/SpotifyAudioPlayback.h>
#import <SpotifyAuthentication/SpotifyAuthentication.h>

@interface RCTSpotify : NSObject <RCTBridgeModule, SPTAudioStreamingDelegate>
@property (nonatomic, strong) SPTAudioStreamingController *player;
@property (nonatomic, strong) SPTAuth *auth;
@end
