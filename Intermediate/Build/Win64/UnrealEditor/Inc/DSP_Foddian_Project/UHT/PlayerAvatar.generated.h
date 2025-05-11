// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "PlayerAvatar.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef DSP_FODDIAN_PROJECT_PlayerAvatar_generated_h
#error "PlayerAvatar.generated.h already included, missing '#pragma once' in PlayerAvatar.h"
#endif
#define DSP_FODDIAN_PROJECT_PlayerAvatar_generated_h

#define FID_DSP_Foddian_Project_Source_DSP_Foddian_Project_PlayerAvatar_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execHandleRespawnInput); \
	DECLARE_FUNCTION(execHandleDeathInput); \
	DECLARE_FUNCTION(execDiePlayer); \
	DECLARE_FUNCTION(execRespawnPlayer);


#define FID_DSP_Foddian_Project_Source_DSP_Foddian_Project_PlayerAvatar_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAPlayerAvatar(); \
	friend struct Z_Construct_UClass_APlayerAvatar_Statics; \
public: \
	DECLARE_CLASS(APlayerAvatar, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/DSP_Foddian_Project"), NO_API) \
	DECLARE_SERIALIZER(APlayerAvatar)


#define FID_DSP_Foddian_Project_Source_DSP_Foddian_Project_PlayerAvatar_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	APlayerAvatar(APlayerAvatar&&); \
	APlayerAvatar(const APlayerAvatar&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, APlayerAvatar); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(APlayerAvatar); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(APlayerAvatar) \
	NO_API virtual ~APlayerAvatar();


#define FID_DSP_Foddian_Project_Source_DSP_Foddian_Project_PlayerAvatar_h_9_PROLOG
#define FID_DSP_Foddian_Project_Source_DSP_Foddian_Project_PlayerAvatar_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_DSP_Foddian_Project_Source_DSP_Foddian_Project_PlayerAvatar_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_DSP_Foddian_Project_Source_DSP_Foddian_Project_PlayerAvatar_h_12_INCLASS_NO_PURE_DECLS \
	FID_DSP_Foddian_Project_Source_DSP_Foddian_Project_PlayerAvatar_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> DSP_FODDIAN_PROJECT_API UClass* StaticClass<class APlayerAvatar>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_DSP_Foddian_Project_Source_DSP_Foddian_Project_PlayerAvatar_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
