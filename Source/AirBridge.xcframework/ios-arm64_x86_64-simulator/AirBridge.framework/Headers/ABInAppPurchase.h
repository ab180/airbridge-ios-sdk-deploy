//
//  ABInAppPurchase.h
//  AirBridge
//
//  Created by mjgu on 7/16/24.
//  Copyright © 2024 ab180. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <StoreKit/StoreKit.h>

NS_ASSUME_NONNULL_BEGIN

@interface ABInAppPurchase : NSObject

@property (nonatomic, copy, nullable, readwrite) NSString *action;
@property (nonatomic, copy, nullable, readwrite) NSString *label;
@property (nonatomic, strong, nullable, readwrite) NSDictionary<NSString *, id> *semanticAttributes;
@property (nonatomic, strong, nullable, readwrite) NSDictionary<NSString *, id> *customAttributes;
@property (nonatomic, strong, nonnull, readonly) SKPaymentTransaction *transaction;

@end

NS_ASSUME_NONNULL_END
