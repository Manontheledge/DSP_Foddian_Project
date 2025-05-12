// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DSP_Foddian_Project/FoddianGameMode.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFoddianGameMode() {}

// Begin Cross Module References
DSP_FODDIAN_PROJECT_API UClass* Z_Construct_UClass_AFoddianGameMode();
DSP_FODDIAN_PROJECT_API UClass* Z_Construct_UClass_AFoddianGameMode_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_AGameMode();
UPackage* Z_Construct_UPackage__Script_DSP_Foddian_Project();
// End Cross Module References

// Begin Class AFoddianGameMode
void AFoddianGameMode::StaticRegisterNativesAFoddianGameMode()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AFoddianGameMode);
UClass* Z_Construct_UClass_AFoddianGameMode_NoRegister()
{
	return AFoddianGameMode::StaticClass();
}
struct Z_Construct_UClass_AFoddianGameMode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "FoddianGameMode.h" },
		{ "ModuleRelativePath", "FoddianGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AFoddianGameMode>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_AFoddianGameMode_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AGameMode,
	(UObject* (*)())Z_Construct_UPackage__Script_DSP_Foddian_Project,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AFoddianGameMode_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AFoddianGameMode_Statics::ClassParams = {
	&AFoddianGameMode::StaticClass,
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
	0x009002ACu,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AFoddianGameMode_Statics::Class_MetaDataParams), Z_Construct_UClass_AFoddianGameMode_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AFoddianGameMode()
{
	if (!Z_Registration_Info_UClass_AFoddianGameMode.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AFoddianGameMode.OuterSingleton, Z_Construct_UClass_AFoddianGameMode_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AFoddianGameMode.OuterSingleton;
}
template<> DSP_FODDIAN_PROJECT_API UClass* StaticClass<AFoddianGameMode>()
{
	return AFoddianGameMode::StaticClass();
}
AFoddianGameMode::AFoddianGameMode(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(AFoddianGameMode);
AFoddianGameMode::~AFoddianGameMode() {}
// End Class AFoddianGameMode

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_devea_OneDrive_Documents_GitHub_DSP_Foddian_Project_Source_DSP_Foddian_Project_FoddianGameMode_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AFoddianGameMode, AFoddianGameMode::StaticClass, TEXT("AFoddianGameMode"), &Z_Registration_Info_UClass_AFoddianGameMode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AFoddianGameMode), 2873809819U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_devea_OneDrive_Documents_GitHub_DSP_Foddian_Project_Source_DSP_Foddian_Project_FoddianGameMode_h_973627152(TEXT("/Script/DSP_Foddian_Project"),
	Z_CompiledInDeferFile_FID_Users_devea_OneDrive_Documents_GitHub_DSP_Foddian_Project_Source_DSP_Foddian_Project_FoddianGameMode_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_devea_OneDrive_Documents_GitHub_DSP_Foddian_Project_Source_DSP_Foddian_Project_FoddianGameMode_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
