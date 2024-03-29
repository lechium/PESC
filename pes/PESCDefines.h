/**
 
 These constants exist to simplify key mapping in the project (and for autocompletion sanity)
 
 The top section are all the different buttons pubc simulates the touches for the bottom list
 is the constants for the buttons we support custom mapping for on said controller.
 
 Through / Press
 Clear / Shoot
 Switch / Pass
 Dash
 
 */

static NSString * const PCActionThroughOrPress = @"PCActionThroughOrPress";
static NSString * const PCActionClearOrShot = @"PCActionClearOrShot";
static NSString * const PCActionSwitchOrPass = @"PCActionSwitchOrPass";
static NSString * const PCActionDash = @"PCActionDash";
static NSString * const PCActionStartButton = @"PCActionStartButton";
static NSString * const PCActionMenuButton = @"PCActionMenuButton";

static NSString * const LeftThumbstick = @"LeftThumbstick";
static NSString * const RightThumbstick = @"RightThumbstick";
static NSString * const LeftThumbstickButton = @"LeftThumbstickButton";
static NSString * const RightThumbstickButton = @"RightThumbstickButton";
static NSString * const LeftShoulder = @"LeftShoulder";
static NSString * const RightShoulder = @"RightShoulder";
static NSString * const RightTrigger = @"RightTrigger";
static NSString * const LeftTrigger = @"LeftTrigger";
static NSString * const ButtonA = @"ButtonA";
static NSString * const ButtonB = @"ButtonB";
static NSString * const ButtonX = @"ButtonX";
static NSString * const ButtonY = @"ButtonY";
static NSString * const DpadUp = @"Dpad.up";
static NSString * const DpadDown = @"Dpad.down";
static NSString * const DpadLeft = @"Dpad.left";
static NSString * const DpadRight = @"Dpad.right";
static NSString * const Menu = @"Menu";

static NSString *const ExperimentalControl = @"ExperimentalControl";



typedef enum {
    
    kPCActionThroughOrPress,
    kPCActionClearOrShot,
    kPCActionSwitchOrPass,
    kPCActionDash,
    kPCActionStartButton,
    kPCActionMenuButton,
    kPCActionUndefined,
    
} PCActionType;

// System info
#define SYSTEM_VERSION_EQUAL_TO(v)                  ([[[UIDevice currentDevice] systemVersion] compare:v options:NSNumericSearch] == NSOrderedSame)
#define SYSTEM_VERSION_GREATER_THAN(v)              ([[[UIDevice currentDevice] systemVersion] compare:v options:NSNumericSearch] == NSOrderedDescending)
#define SYSTEM_VERSION_GREATER_THAN_OR_EQUAL_TO(v)  ([[[UIDevice currentDevice] systemVersion] compare:v options:NSNumericSearch] != NSOrderedAscending)
#define SYSTEM_VERSION_LESS_THAN(v)                 ([[[UIDevice currentDevice] systemVersion] compare:v options:NSNumericSearch] == NSOrderedAscending)
#define SYSTEM_VERSION_LESS_THAN_OR_EQUAL_TO(v)     ([[[UIDevice currentDevice] systemVersion] compare:v options:NSNumericSearch] != NSOrderedDescending)

#import <GameController/GameController.h>
#import "EXTScope.h"

@interface GCController (pubc)

@property (nonatomic) NSObject *gateKeeper;

@end
