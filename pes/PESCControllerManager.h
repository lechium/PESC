//
//  PESCControllerManager.h
//  pubc
//
//  Created by Kevin Bradley on 6/15/19.
//  Copyright © 2019 nito. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "PESCDefines.h"
#import <GameController/GameController.h>
#import "RKDropdownAlert/RKDropdownAlert.h"

@interface PESCControllerManager : NSObject <RKDropdownAlertDelegate>

@property (nonatomic, strong) GCController *gameController;
@property (nonatomic, strong) NSDictionary *gamePlayDictionary;

- (UIViewController *)topViewController;
- (UIView *)IOSView;
- (CGPoint)convertPointForScreen:(CGPoint)inputPoint;
- (CGPoint)pointForActionType:(PCActionType)type;
- (NSDictionary *)controllerPreferences;
- (PCActionType)actionTypeFromConstant:(NSString *)constant;
- (PCActionType)actionTypeForControllerButton:(NSString *)constantString;
+ (id)sharedManager;
- (void)listenForControllers;
- (void)updateGamplayValue:(id)value forKey:(NSString *)theKey;
@end


