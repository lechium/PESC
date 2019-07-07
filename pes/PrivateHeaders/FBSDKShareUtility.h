//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface FBSDKShareUtility : NSObject
{
}

+ (_Bool)_validateAssetLibraryVideoURL:(id)arg1 name:(id)arg2 error:(id *)arg3;	// IMP=0x000000010070db4c
+ (_Bool)_validateArgumentWithName:(id)arg1 value:(unsigned long long)arg2 isIn:(id)arg3 error:(id *)arg4;	// IMP=0x000000010070d978
+ (_Bool)_validateRequiredValue:(id)arg1 name:(id)arg2 error:(id *)arg3;	// IMP=0x000000010070d814
+ (_Bool)_validateNetworkURL:(id)arg1 name:(id)arg2 error:(id *)arg3;	// IMP=0x000000010070d750
+ (_Bool)_validateFileURL:(id)arg1 name:(id)arg2 error:(id *)arg3;	// IMP=0x000000010070d5d4
+ (_Bool)_validateArray:(id)arg1 minCount:(unsigned long long)arg2 maxCount:(unsigned long long)arg3 name:(id)arg4 error:(id *)arg5;	// IMP=0x000000010070d4c8
+ (void)_testOpenGraphValueContainer:(id)arg1 containsMedia:(_Bool *)arg2 containsPhotos:(_Bool *)arg3 containsVideos:(_Bool *)arg4;	// IMP=0x000000010070d224
+ (void)_testObject:(id)arg1 containsMedia:(_Bool *)arg2 containsPhotos:(_Bool *)arg3 containsVideos:(_Bool *)arg4;	// IMP=0x000000010070cf40
+ (void)_stageImagesForPhotoContent:(id)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;	// IMP=0x000000010070c9ec
+ (_Bool)_isOpenGraphValue:(id)arg1;	// IMP=0x000000010070c8c0
+ (id)_convertPhoto:(id)arg1;	// IMP=0x000000010070c6f0
+ (id)getOpenGraphNameAndNamespaceFromFullName:(id)arg1 namespace:(id *)arg2;	// IMP=0x000000010070c5f8
+ (id)_convertOpenGraphValueContainer:(id)arg1 requireNamespace:(_Bool)arg2;	// IMP=0x000000010070c250
+ (id)_convertObject:(id)arg1;	// IMP=0x000000010070bff0
+ (id)_convertCameraEffectTextures:(id)arg1;	// IMP=0x000000010070be60
+ (id)_convertCameraEffectArguments:(id)arg1;	// IMP=0x000000010070bde4
+ (void)_addToParameters:(id)arg1 forShareCameraEffectContent:(id)arg2;	// IMP=0x000000010070bc50
+ (void)_addToParameters:(id)arg1 forShareVideoContent:(id)arg2;	// IMP=0x000000010070bac8
+ (void)_addToParameters:(id)arg1 forShareLinkContent:(id)arg2;	// IMP=0x000000010070b94c
+ (void)_addToParameters:(id)arg1 forSharePhotoContent:(id)arg2;	// IMP=0x000000010070b8a4
+ (void)_addToParameters:(id)arg1 forShareOpenGraphContent:(id)arg2;	// IMP=0x000000010070b6e4
+ (void)_addToParameters:(id)arg1 forShareContent:(id)arg2;	// IMP=0x000000010070b3c0
+ (_Bool)shareMediaContentContainsPhotosAndVideos:(id)arg1;	// IMP=0x000000010070b2e0
+ (_Bool)validateShareVideoContent:(id)arg1 error:(id *)arg2;	// IMP=0x000000010070b1d0
+ (_Bool)validateShareLinkContent:(id)arg1 error:(id *)arg2;	// IMP=0x000000010070b0c4
+ (_Bool)validateShareMediaContent:(id)arg1 error:(id *)arg2;	// IMP=0x000000010070ac90
+ (_Bool)validateSharePhotoContent:(id)arg1 error:(id *)arg2;	// IMP=0x000000010070aa68
+ (_Bool)validateShareOpenGraphContent:(id)arg1 error:(id *)arg2;	// IMP=0x000000010070a910
+ (_Bool)validateShareContent:(id)arg1 error:(id *)arg2;	// IMP=0x000000010070a71c
+ (_Bool)validateGameRequestContent:(id)arg1 error:(id *)arg2;	// IMP=0x000000010070a124
+ (_Bool)validateAssetLibraryURLsWithShareMediaContent:(id)arg1 name:(id)arg2 error:(id *)arg3;	// IMP=0x0000000100709f1c
+ (_Bool)validateAssetLibraryURLWithShareVideoContent:(id)arg1 name:(id)arg2 error:(id *)arg3;	// IMP=0x0000000100709e4c
+ (_Bool)validateShareCameraEffectContent:(id)arg1 error:(id *)arg2;	// IMP=0x0000000100709d34
+ (_Bool)validatePromoCodeWithError:(id)arg1 error:(id *)arg2;	// IMP=0x0000000100709a34
+ (_Bool)validateAppInviteContent:(id)arg1 error:(id *)arg2;	// IMP=0x00000001007098ac
+ (void)testShareContent:(id)arg1 containsMedia:(_Bool *)arg2 containsPhotos:(_Bool *)arg3 containsVideos:(_Bool *)arg4;	// IMP=0x00000001007096b4
+ (id)parametersForShareContent:(id)arg1 shouldFailOnDataError:(_Bool)arg2;	// IMP=0x00000001007094c0
+ (id)imageWithCircleColor:(id)arg1 canvasSize:(struct CGSize)arg2 circleSize:(struct CGSize)arg3;	// IMP=0x00000001007093f0
+ (id)hashtagStringFromHashtag:(id)arg1;	// IMP=0x000000010070931c
+ (id)feedShareDictionaryForContent:(id)arg1;	// IMP=0x0000000100708ffc
+ (id)convertOpenGraphValues:(id)arg1;	// IMP=0x0000000100708e78
+ (id)convertOpenGraphValue:(id)arg1;	// IMP=0x0000000100708a68
+ (void)buildAsyncWebPhotoContent:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x0000000100708764
+ (_Bool)buildWebShareContent:(id)arg1 methodName:(id *)arg2 parameters:(id *)arg3 error:(id *)arg4;	// IMP=0x00000001007083a4
+ (void)assertOpenGraphValues:(id)arg1 requireKeyNamespace:(_Bool)arg2;	// IMP=0x00000001007082b0
+ (void)assertOpenGraphValue:(id)arg1;	// IMP=0x0000000100708088
+ (void)assertOpenGraphKey:(id)arg1 requireNamespace:(_Bool)arg2;	// IMP=0x0000000100707dd0
+ (void)assertCollection:(id)arg1 ofClass:(id)arg2 name:(id)arg3;	// IMP=0x0000000100707bfc
+ (void)assertCollection:(id)arg1 ofClassStrings:(id)arg2 name:(id)arg3;	// IMP=0x0000000100707964
- (id)init;	// IMP=0x000000010070b32c

@end

