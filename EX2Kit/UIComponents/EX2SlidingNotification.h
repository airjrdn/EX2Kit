//
//  EX2SlidingNotification.h
//  EX2Kit
//
//  Created by Ben Baron on 4/17/12.
//  Copyright (c) 2012 Ben Baron. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <Foundation/Foundation.h>

@interface EX2SlidingNotification : UIViewController

- (id)initOnView:(UIView *)theParentView message:(NSString *)theMessage image:(UIImage*)theImage displayTime:(NSTimeInterval)time;

+ (id)slidingNotificationOnMainWindowWithMessage:(NSString *)theMessage image:(UIImage*)theImage;
+ (id)slidingNotificationOnTopViewWithMessage:(NSString *)theMessage image:(UIImage*)theImage;

+ (id)slidingNotificationOnView:(UIView *)theParentView message:(NSString *)theMessage image:(UIImage*)theImage;
- (id)initOnView:(UIView *)theParentView message:(NSString *)theMessage image:(UIImage*)theImage;

@property (nonatomic, strong) IBOutlet UIImageView *backgroundImageView;
@property (nonatomic, strong) IBOutlet UILabel *messageLabel;
@property (nonatomic, strong) IBOutlet UIImageView *imageView;

@property (nonatomic, strong) UIView *parentView;
@property (nonatomic, copy) NSString *message;
@property (nonatomic, strong) UIImage *image;

@property NSTimeInterval displayTime;

@property (nonatomic, strong) IBOutlet UIButton *tapButton;

@property (copy) void (^tapBlock)(void);


- (void)showAndHideSlidingNotification;
- (void)showAndHideSlidingNotification:(NSTimeInterval)showTime;
- (void)showSlidingNotification;
- (void)hideSlidingNotification;

- (void)sizeToFit;

@end
