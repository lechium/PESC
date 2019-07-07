#import "PESCDefines.h"
#import "PESCControllerManager.h"
#import <GameController/GameController.h>
#import "NSObject+AssociatedObjects.h"
//#import "FingerTips/MBFingerTipWindow.h"

%hook GCController

+ (NSArray<GCController *> *)controllers {

    return nil;
}

%end


%hook IOSAppDelegate


- (_Bool)application:(id)arg1 didFinishLaunchingWithOptions:(id)arg2 {

    %log;
    NSLog(@"PESC: #### in application:didFinishLaunchingWithOptions");
    PESCControllerManager *man = [PESCControllerManager sharedManager];
    
    [man listenForControllers];
 


    return %orig;

}

%end