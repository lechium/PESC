export PREFIX = $(THEOS)/toolchain/XcodeDefault.xctoolchain/usr/bin/
#  comment the above line out if you have trouble building
ARCHS = arm64e armv7 armv7s arm64
TARGET = iphone
export GO_EASY_ON_ME=1
#export SDKVERSION=12.1
THEOS_DEVICE_IP=eleven.local
DEBUG=0

include $(THEOS)/makefiles/common.mk

TWEAK_NAME = PESC 
PESC_FILES = pesc.xm NSObject+AssociatedObjects.m KIF/UIEvent+KIFAdditions.m KIF/UIView-KIFAdditions.m KIF/CGGeometry-KIFAdditions.m KIF/UIScreen+KIFAdditions.m KIF/UIWindow-KIFAdditions.m KIF/IOHIDEvent+KIF.m KIF/UITouch-KIFAdditions.m KIF/NSError-KIFAdditions.m KIF/UIApplication-KIFAdditions.m KIF/UIView-Debugging.m PESCControllerManager.m #FingerTips/MBFingerTipWindow.m
PESC_FILES += PureLayout/ALView+PureLayout.m PureLayout/NSArray+PureLayout.m PureLayout/NSLayoutConstraint+PureLayout.m
PESC_FILES += PESCPrefTableViewController.m PESCControlListTableViewController.m UIWindow+Additions.m
PESC_FILES += RKDropdownAlert/RKDropdownAlert.m NSDictionary+nullRemoval.m
PESC_FILES += extobjc/EXTRuntimeExtensions.m extobjc/EXTScope.m 
PESC_LIBRARIES = substrate
PESC_FRAMEWORKS = Foundation IOKit GameController
PESC_CFLAGS += -I.-IRKDropdownAlert -Iextobjc -IPureLayout -IKIF -fobjc-arc -miphoneos-version-min=9.0
PESC_LDFLAGS = -miphoneos-version-min=9.0 -undefined dynamic_lookup
#PESC_CODESIGN_FLAGS=-Slibrespring.xml

include $(THEOS_MAKE_PATH)/tweak.mk

after-install::
	install.exec "killall -9 PES19CBT"
