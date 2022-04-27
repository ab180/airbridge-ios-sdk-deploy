//
//  ABPlacement.h
//  AirBridge
//
//  Created by WOF on 24/07/2019.
//  Copyright © 2019 ab180. All rights reserved.
//

#import <AirBridge/ABError.h>

NS_ASSUME_NONNULL_BEGIN

@interface ABPlacement : NSObject

- (void) click:(NSURL*)trackingLink completion:(nullable void (^)(ABError* error))completion;
- (void) impression:(NSURL*)trackingLink completion:(nullable void (^)(ABError* error))completion;

@end

NS_ASSUME_NONNULL_END
