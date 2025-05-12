// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DSP_Foddian_Project/PlayerAvatar.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePlayerAvatar() {}

// Begin Cross Module References
DSP_FODDIAN_PROJECT_API UClass* Z_Construct_UClass_APlayerAvatar();
DSP_FODDIAN_PROJECT_API UClass* Z_Construct_UClass_APlayerAvatar_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_ACharacter();
UPackage* Z_Construct_UPackage__Script_DSP_Foddian_Project();
// End Cross Module References

// Begin Class APlayerAvatar Function DiePlayer
struct Z_Construct_UFunction_APlayerAvatar_DiePlayer_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Function to respawn the player\n" },
#endif
		{ "ModuleRelativePath", "PlayerAvatar.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Function to respawn the player" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_APlayerAvatar_DiePlayer_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APlayerAvatar, nullptr, "DiePlayer", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerAvatar_DiePlayer_Statics::Function_MetaDataParams), Z_Construct_UFunction_APlayerAvatar_DiePlayer_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_APlayerAvatar_DiePlayer()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_APlayerAvatar_DiePlayer_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(APlayerAvatar::execDiePlayer)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->DiePlayer();
	P_NATIVE_END;
}
// End Class APlayerAvatar Function DiePlayer

// Begin Class APlayerAvatar Function HandleDeathInput
struct Z_Construct_UFunction_APlayerAvatar_HandleDeathInput_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Function to handle player death\n" },
#endif
		{ "ModuleRelativePath", "PlayerAvatar.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Function to handle player death" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_APlayerAvatar_HandleDeathInput_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APlayerAvatar, nullptr, "HandleDeathInput", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerAvatar_HandleDeathInput_Statics::Function_MetaDataParams), Z_Construct_UFunction_APlayerAvatar_HandleDeathInput_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_APlayerAvatar_HandleDeathInput()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_APlayerAvatar_HandleDeathInput_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(APlayerAvatar::execHandleDeathInput)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->HandleDeathInput();
	P_NATIVE_END;
}
// End Class APlayerAvatar Function HandleDeathInput

// Begin Class APlayerAvatar Function HandleRespawnInput
struct Z_Construct_UFunction_APlayerAvatar_HandleRespawnInput_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Function to handle player death input\n" },
#endif
		{ "ModuleRelativePath", "PlayerAvatar.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Function to handle player death input" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_APlayerAvatar_HandleRespawnInput_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APlayerAvatar, nullptr, "HandleRespawnInput", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerAvatar_HandleRespawnInput_Statics::Function_MetaDataParams), Z_Construct_UFunction_APlayerAvatar_HandleRespawnInput_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_APlayerAvatar_HandleRespawnInput()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_APlayerAvatar_HandleRespawnInput_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(APlayerAvatar::execHandleRespawnInput)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->HandleRespawnInput();
	P_NATIVE_END;
}
// End Class APlayerAvatar Function HandleRespawnInput

// Begin Class APlayerAvatar Function RespawnPlayer
struct Z_Construct_UFunction_APlayerAvatar_RespawnPlayer_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "PlayerAvatar.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_APlayerAvatar_RespawnPlayer_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APlayerAvatar, nullptr, "RespawnPlayer", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerAvatar_RespawnPlayer_Statics::Function_MetaDataParams), Z_Construct_UFunction_APlayerAvatar_RespawnPlayer_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_APlayerAvatar_RespawnPlayer()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_APlayerAvatar_RespawnPlayer_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(APlayerAvatar::execRespawnPlayer)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->RespawnPlayer();
	P_NATIVE_END;
}
// End Class APlayerAvatar Function RespawnPlayer

// Begin Class APlayerAvatar
void APlayerAvatar::StaticRegisterNativesAPlayerAvatar()
{
	UClass* Class = APlayerAvatar::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "DiePlayer", &APlayerAvatar::execDiePlayer },
		{ "HandleDeathInput", &APlayerAvatar::execHandleDeathInput },
		{ "HandleRespawnInput", &APlayerAvatar::execHandleRespawnInput },
		{ "RespawnPlayer", &APlayerAvatar::execRespawnPlayer },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(APlayerAvatar);
UClass* Z_Construct_UClass_APlayerAvatar_NoRegister()
{
	return APlayerAvatar::StaticClass();
}
struct Z_Construct_UClass_APlayerAvatar_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "PlayerAvatar.h" },
		{ "ModuleRelativePath", "PlayerAvatar.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RespanwnDelay_MetaData[] = {
		{ "Category", "Delay" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Variable to check if the player is dead\n" },
#endif
		{ "ModuleRelativePath", "PlayerAvatar.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Variable to check if the player is dead" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_RespanwnDelay;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_APlayerAvatar_DiePlayer, "DiePlayer" }, // 379196971
		{ &Z_Construct_UFunction_APlayerAvatar_HandleDeathInput, "HandleDeathInput" }, // 2498387909
		{ &Z_Construct_UFunction_APlayerAvatar_HandleRespawnInput, "HandleRespawnInput" }, // 363770243
		{ &Z_Construct_UFunction_APlayerAvatar_RespawnPlayer, "RespawnPlayer" }, // 1208327706
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<APlayerAvatar>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_APlayerAvatar_Statics::NewProp_RespanwnDelay = { "RespanwnDelay", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APlayerAvatar, RespanwnDelay), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RespanwnDelay_MetaData), NewProp_RespanwnDelay_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_APlayerAvatar_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlayerAvatar_Statics::NewProp_RespanwnDelay,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_APlayerAvatar_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_APlayerAvatar_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_ACharacter,
	(UObject* (*)())Z_Construct_UPackage__Script_DSP_Foddian_Project,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_APlayerAvatar_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_APlayerAvatar_Statics::ClassParams = {
	&APlayerAvatar::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_APlayerAvatar_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_APlayerAvatar_Statics::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_APlayerAvatar_Statics::Class_MetaDataParams), Z_Construct_UClass_APlayerAvatar_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_APlayerAvatar()
{
	if (!Z_Registration_Info_UClass_APlayerAvatar.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_APlayerAvatar.OuterSingleton, Z_Construct_UClass_APlayerAvatar_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_APlayerAvatar.OuterSingleton;
}
template<> DSP_FODDIAN_PROJECT_API UClass* StaticClass<APlayerAvatar>()
{
	return APlayerAvatar::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(APlayerAvatar);
APlayerAvatar::~APlayerAvatar() {}
// End Class APlayerAvatar

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_devea_OneDrive_Documents_GitHub_DSP_Foddian_Project_Source_DSP_Foddian_Project_PlayerAvatar_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_APlayerAvatar, APlayerAvatar::StaticClass, TEXT("APlayerAvatar"), &Z_Registration_Info_UClass_APlayerAvatar, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(APlayerAvatar), 2105153663U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_devea_OneDrive_Documents_GitHub_DSP_Foddian_Project_Source_DSP_Foddian_Project_PlayerAvatar_h_2673598172(TEXT("/Script/DSP_Foddian_Project"),
	Z_CompiledInDeferFile_FID_Users_devea_OneDrive_Documents_GitHub_DSP_Foddian_Project_Source_DSP_Foddian_Project_PlayerAvatar_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_devea_OneDrive_Documents_GitHub_DSP_Foddian_Project_Source_DSP_Foddian_Project_PlayerAvatar_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
