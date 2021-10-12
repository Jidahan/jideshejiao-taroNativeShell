#import <React/RCTBridgeDelegate.h>
#import <UIKit/UIKit.h>

#import <UMCore/UMAppDelegateWrapper.h>
#import "WXApi.h"

 
@interface AppDelegate : UMAppDelegateWrapper <UIApplicationDelegate, RCTBridgeDelegate, WXApiDelegate>

@property (nonatomic, strong) UIWindow *window;

@end
