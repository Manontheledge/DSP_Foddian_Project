// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DSP_Foddian_Project/MainMenuGameMode.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMainMenuGameMode() {}

// Begin Cross Module References
DSP_FODDIAN_PROJECT_API UClass* Z_Construct_UClass_AMainMenuGameMode();
DSP_FODDIAN_PROJECT_API UClass* Z_Construct_UClass_AMainMenuGameMode_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
UPackage* Z_Construct_UPackage__Script_DSP_Foddian_Project();
// End Cross Module References

// Begin Class AMainMenuGameMode
void AMainMenuGameMode::StaticRegisterNativesAMainMenuGameMode()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AMainMenuGameMode);
UClass* Z_Construct_UClass_AMainMenuGameMode_NoRegister()
{
	return AMainMenuGameMode::StaticClass();
}
struct Z_Construct_UClass_AMainMenuGameMode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "MainMenuGameMode.h" },
		{ "ModuleRelativePath", "MainMenuGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMainMenuGameMode>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_AMainMenuGameMode_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AGameModeBase,
	(UObject* (*)())Z_Construct_UPackage__Script_DSP_Foddian_Project,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AMainMenuGameMode_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AMainMenuGameMode_Statics::ClassParams = {
	&AMainMenuGameMode::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x008802ACu,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AMainMenuGameMode_Statics::Class_MetaDataParams), Z_Construct_UClass_AMainMenuGameMode_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AMainMenuGameMode()
{
	if (!Z_Registration_Info_UClass_AMainMenuGameMode.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AMainMenuGameMode.OuterSingleton, Z_Construct_UClass_AMainMenuGameMode_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AMainMenuGameMode.OuterSingleton;
}
template<> DSP_FODDIAN_PROJECT_API UClass* StaticClass<AMainMenuGameMode>()
{
	return AMainMenuGameMode::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AMainMenuGameMode);
AMainMenuGameMode::~AMainMenuGameMode() {}
// End Class AMainMenuGameMode

// Begin Registration
struct Z_CompiledInDeferFile_FID_DSP_Foddian_Project_Source_DSP_Foddian_Project_MainMenuGameMode_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AMainMenuGameMode, AMainMenuGameMode::StaticClass, TEXT("AMainMenuGameMode"), &Z_Registration_Info_UClass_AMainMenuGameMode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AMainMenuGameMode), 1618409620U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_DSP_Foddian_Project_Source_DSP_Foddian_Project_MainMenuGameMode_h_540707996(TEXT("/Script/DSP_Foddian_Project"),
	Z_CompiledInDeferFile_FID_DSP_Foddian_Project_Source_DSP_Foddian_Project_MainMenuGameMode_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_DSP_Foddian_Project_Source_DSP_Foddian_Project_MainMenuGameMode_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
