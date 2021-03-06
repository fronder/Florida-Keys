//
//  FKCouponViewController.h
//  Florida Keys
//
//  Created by Hasan's Mac on 30.01.16.
//  Copyright © 2016 Khasan Abdullaev. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "FKBaseViewController.h"
#import "FKCouponObject.h"

@protocol FKTabBarControllerDelegate;

@interface FKCouponViewController : FKBaseViewController

@property (nonatomic, copy) NSArray *viewControllers;
@property (nonatomic, weak) UIViewController *selectedViewController;
@property (nonatomic, assign) NSUInteger selectedIndex;
@property (nonatomic, weak) id <FKTabBarControllerDelegate> delegate;

- (void)showDetailForCouponObject:(FKCouponObject *)coupon;
- (void)setSelectedIndex:(NSUInteger)index animated:(BOOL)animated;
- (void)setSelectedViewController:(UIViewController *)viewController animated:(BOOL)animated;

@end


@protocol FKTabBarControllerDelegate <NSObject>
@optional
- (BOOL)mh_tabBarController:(FKCouponViewController *)tabBarController shouldSelectViewController:(UIViewController *)viewController atIndex:(NSUInteger)index;
- (void)mh_tabBarController:(FKCouponViewController *)tabBarController didSelectViewController:(UIViewController *)viewController atIndex:(NSUInteger)index;

@end
