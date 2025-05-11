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
DSP_FODDIAN_PROJECT_API UClass* Z_Construct_UClass_ADSP_Foddian_ProjectGameMode();
DSP_FODDIAN_PROJECT_API UClass* Z_Construct_UClass_ADSP_Foddian_ProjectGameMode_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
UPackage* Z_Construct_UPackage__Script_DSP_Foddian_Project();
// End Cross Module References

// Begin Class ADSP_Foddian_ProjectGameMode
void ADSP_Foddian_ProjectGameMode::StaticRegisterNativesADSP_Foddian_ProjectGameMode()
{
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
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
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
struct Z_CompiledInDeferFile_FID_Users_devea_OneDrive_Documents_GitHub_DSP_Foddian_Project_Source_DSP_Foddian_Project_DSP_Foddian_ProjectGameMode_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ADSP_Foddian_ProjectGameMode, ADSP_Foddian_ProjectGameMode::StaticClass, TEXT("ADSP_Foddian_ProjectGameMode"), &Z_Registration_Info_UClass_ADSP_Foddian_ProjectGameMode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ADSP_Foddian_ProjectGameMode), 3967797100U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_devea_OneDrive_Documents_GitHub_DSP_Foddian_Project_Source_DSP_Foddian_Project_DSP_Foddian_ProjectGameMode_h_658022933(TEXT("/Script/DSP_Foddian_Project"),
	Z_CompiledInDeferFile_FID_Users_devea_OneDrive_Documents_GitHub_DSP_Foddian_Project_Source_DSP_Foddian_Project_DSP_Foddian_ProjectGameMode_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_devea_OneDrive_Documents_GitHub_DSP_Foddian_Project_Source_DSP_Foddian_Project_DSP_Foddian_ProjectGameMode_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
