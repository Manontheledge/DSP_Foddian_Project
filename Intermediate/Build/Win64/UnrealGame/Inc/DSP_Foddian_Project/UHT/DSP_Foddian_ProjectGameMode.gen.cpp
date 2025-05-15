// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DSP_Foddian_Project/DSP_Foddian_ProjectGameMode.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDSP_Foddian_ProjectGameMode() {}

// Begin Cross Module References
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
DSP_FODDIAN_PROJECT_API UClass* Z_Construct_UClass_ADSP_Foddian_ProjectGameMode();
DSP_FODDIAN_PROJECT_API UClass* Z_Construct_UClass_ADSP_Foddian_ProjectGameMode_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
UPackage* Z_Construct_UPackage__Script_DSP_Foddian_Project();
// End Cross Module References

// Begin Class ADSP_Foddian_ProjectGameMode Function RespawnPlayer
struct Z_Construct_UFunction_ADSP_Foddian_ProjectGameMode_RespawnPlayer_Statics
{
	struct DSP_Foddian_ProjectGameMode_eventRespawnPlayer_Parms
	{
		FTransform SpawnTransform;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Respawn" },
		{ "ModuleRelativePath", "DSP_Foddian_ProjectGameMode.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_SpawnTransform;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ADSP_Foddian_ProjectGameMode_RespawnPlayer_Statics::NewProp_SpawnTransform = { "SpawnTransform", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DSP_Foddian_ProjectGameMode_eventRespawnPlayer_Parms, SpawnTransform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ADSP_Foddian_ProjectGameMode_RespawnPlayer_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADSP_Foddian_ProjectGameMode_RespawnPlayer_Statics::NewProp_SpawnTransform,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ADSP_Foddian_ProjectGameMode_RespawnPlayer_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ADSP_Foddian_ProjectGameMode_RespawnPlayer_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ADSP_Foddian_ProjectGameMode, nullptr, "RespawnPlayer", nullptr, nullptr, Z_Construct_UFunction_ADSP_Foddian_ProjectGameMode_RespawnPlayer_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ADSP_Foddian_ProjectGameMode_RespawnPlayer_Statics::PropPointers), sizeof(Z_Construct_UFunction_ADSP_Foddian_ProjectGameMode_RespawnPlayer_Statics::DSP_Foddian_ProjectGameMode_eventRespawnPlayer_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04840401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ADSP_Foddian_ProjectGameMode_RespawnPlayer_Statics::Function_MetaDataParams), Z_Construct_UFunction_ADSP_Foddian_ProjectGameMode_RespawnPlayer_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ADSP_Foddian_ProjectGameMode_RespawnPlayer_Statics::DSP_Foddian_ProjectGameMode_eventRespawnPlayer_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ADSP_Foddian_ProjectGameMode_RespawnPlayer()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ADSP_Foddian_ProjectGameMode_RespawnPlayer_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ADSP_Foddian_ProjectGameMode::execRespawnPlayer)
{
	P_GET_STRUCT(FTransform,Z_Param_SpawnTransform);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->RespawnPlayer(Z_Param_SpawnTransform);
	P_NATIVE_END;
}
// End Class ADSP_Foddian_ProjectGameMode Function RespawnPlayer

// Begin Class ADSP_Foddian_ProjectGameMode Function WinGame
struct Z_Construct_UFunction_ADSP_Foddian_ProjectGameMode_WinGame_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Game" },
		{ "ModuleRelativePath", "DSP_Foddian_ProjectGameMode.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ADSP_Foddian_ProjectGameMode_WinGame_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ADSP_Foddian_ProjectGameMode, nullptr, "WinGame", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04040401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ADSP_Foddian_ProjectGameMode_WinGame_Statics::Function_MetaDataParams), Z_Construct_UFunction_ADSP_Foddian_ProjectGameMode_WinGame_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_ADSP_Foddian_ProjectGameMode_WinGame()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ADSP_Foddian_ProjectGameMode_WinGame_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ADSP_Foddian_ProjectGameMode::execWinGame)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->WinGame();
	P_NATIVE_END;
}
// End Class ADSP_Foddian_ProjectGameMode Function WinGame

// Begin Class ADSP_Foddian_ProjectGameMode
void ADSP_Foddian_ProjectGameMode::StaticRegisterNativesADSP_Foddian_ProjectGameMode()
{
	UClass* Class = ADSP_Foddian_ProjectGameMode::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "RespawnPlayer", &ADSP_Foddian_ProjectGameMode::execRespawnPlayer },
		{ "WinGame", &ADSP_Foddian_ProjectGameMode::execWinGame },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ADSP_Foddian_ProjectGameMode);
UClass* Z_Construct_UClass_ADSP_Foddian_ProjectGameMode_NoRegister()
{
	return ADSP_Foddian_ProjectGameMode::StaticClass();
}
struct Z_Construct_UClass_ADSP_Foddian_ProjectGameMode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "DSP_Foddian_ProjectGameMode.h" },
		{ "ModuleRelativePath", "DSP_Foddian_ProjectGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_ADSP_Foddian_ProjectGameMode_RespawnPlayer, "RespawnPlayer" }, // 4090695362
		{ &Z_Construct_UFunction_ADSP_Foddian_ProjectGameMode_WinGame, "WinGame" }, // 1072007351
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ADSP_Foddian_ProjectGameMode>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_ADSP_Foddian_ProjectGameMode_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AGameModeBase,
	(UObject* (*)())Z_Construct_UPackage__Script_DSP_Foddian_Project,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ADSP_Foddian_ProjectGameMode_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ADSP_Foddian_ProjectGameMode_Statics::ClassParams = {
	&ADSP_Foddian_ProjectGameMode::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	0,
	0,
	0x008802ACu,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ADSP_Foddian_ProjectGameMode_Statics::Class_MetaDataParams), Z_Construct_UClass_ADSP_Foddian_ProjectGameMode_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ADSP_Foddian_ProjectGameMode()
{
	if (!Z_Registration_Info_UClass_ADSP_Foddian_ProjectGameMode.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ADSP_Foddian_ProjectGameMode.OuterSingleton, Z_Construct_UClass_ADSP_Foddian_ProjectGameMode_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ADSP_Foddian_ProjectGameMode.OuterSingleton;
}
template<> DSP_FODDIAN_PROJECT_API UClass* StaticClass<ADSP_Foddian_ProjectGameMode>()
{
	return ADSP_Foddian_ProjectGameMode::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ADSP_Foddian_ProjectGameMode);
ADSP_Foddian_ProjectGameMode::~ADSP_Foddian_ProjectGameMode() {}
// End Class ADSP_Foddian_ProjectGameMode

// Begin Registration
struct Z_CompiledInDeferFile_FID_DSP_Foddian_Project_Source_DSP_Foddian_Project_DSP_Foddian_ProjectGameMode_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ADSP_Foddian_ProjectGameMode, ADSP_Foddian_ProjectGameMode::StaticClass, TEXT("ADSP_Foddian_ProjectGameMode"), &Z_Registration_Info_UClass_ADSP_Foddian_ProjectGameMode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ADSP_Foddian_ProjectGameMode), 2699214390U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_DSP_Foddian_Project_Source_DSP_Foddian_Project_DSP_Foddian_ProjectGameMode_h_356688421(TEXT("/Script/DSP_Foddian_Project"),
	Z_CompiledInDeferFile_FID_DSP_Foddian_Project_Source_DSP_Foddian_Project_DSP_Foddian_ProjectGameMode_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_DSP_Foddian_Project_Source_DSP_Foddian_Project_DSP_Foddian_ProjectGameMode_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
