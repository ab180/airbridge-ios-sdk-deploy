//
//  ABSetting.h
//  AirBridge
//
//  Created by WOF on 09/09/2019.
//  Copyright © 2019 ab180. All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

typedef uint64_t ABMillisecond;
typedef void (^ABAttributionCallback)(NSDictionary<NSString*, NSString*>* __nonnull attribution);

@interface ABSetting : NSObject

@property ABMillisecond trackingAuthorizeTimeout;
@property BOOL isRestartTrackingAuthorizeTimeout;
@property ABAttributionCallback attributionCallback;

- (void) setEventMaximumBufferCount:(uint64_t)eventMaximumBufferCount;
- (void) setEventMaximumBufferSize:(uint64_t)eventMaximumBufferSize;

@end

NS_ASSUME_NONNULL_END
