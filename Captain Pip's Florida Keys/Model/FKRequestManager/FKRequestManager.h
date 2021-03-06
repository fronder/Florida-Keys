//
//  FKRequestManager.h
//  Florida Keys
//
//  Created by Hasan's Mac on 29.01.16.
//  Copyright © 2016 Khasan Abdullaev. All rights reserved.
//

#import <AFNetworking/AFNetworking.h>

@interface FKRequestManager : AFHTTPSessionManager

+ (instancetype)sharedManager;

// Method for obtaining shop details
+ (void)requestShopDetails:(void(^)(id response))success failure:(void(^)(id failure))failure;


+ (void)requestCheckDeviceWithURLString:(NSString *)URLString withBlock:(void(^)(id response))success failure:(void(^)(id failure))failure;

// Method for registering user to the server
+ (void)requestAddUserWithParameters:(id)parameters withBlock:(void(^)(id response))success failure:(void(^)(id failure))failure;

// Get number of shops available at the moment
+ (void)requestNumberOfShops:(void(^)(id response))success failure:(void(^)(id failure))failure;

// Get available shops data
+ (void)requestAvailableShops:(void(^)(id response))success failure:(void(^)(id failure))failure;

// Get punch
+ (void)requestPunch:(void(^)(id response))success failure:(void(^)(id failure))failure;

// Get offer
+ (void)requestSpecialOffer:(void(^)(id response))success failure:(void(^)(id failure))failure;

// Get special offer for availability in order to animate OFFER button
+ (void)requestSpecial:(void(^)(id response))success failure:(void(^)(id failure))failure;

// Get police for availability in order to animate EVENTS button
+ (void)requestPolice:(void(^)(id response))success failure:(void(^)(id failure))failure;

// Get events
+ (void)requestEvents:(void(^)(id response))success failure:(void(^)(id failure))failure;

@end
