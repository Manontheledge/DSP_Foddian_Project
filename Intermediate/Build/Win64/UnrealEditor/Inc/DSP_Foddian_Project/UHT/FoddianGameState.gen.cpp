// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DSP_Foddian_Project/FoddianGameState.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFoddianGameState() {}

// Begin Cross Module References
DSP_FODDIAN_PROJECT_API UClass* Z_Construct_UClass_AFoddianGameState();
DSP_FODDIAN_PROJECT_API UClass* Z_Construct_UClass_AFoddianGameState_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_AGameState();
UPackage* Z_Construct_UPackage__Script_DSP_Foddian_Project();
// End Cross Module References

// Begin Class AFoddianGameState
void AFoddianGameState::StaticRegisterNativesAFoddianGameState()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AFoddianGameState);
UClass* Z_Construct_UClass_AFoddianGameState_NoRegister()
{
	return AFoddianGameState::StaticClass();
}
struct Z_Construct_UClass_AFoddianGameState_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "HideCategories", "Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "FoddianGameState.h" },
		{ "ModuleRelativePath", "FoddianGameState.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AFoddianGameState>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_AFoddianGameState_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AGameState,
	(UObject* (*)())Z_Construct_UPackage__Script_DSP_Foddian_Project,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AFoddianGameState_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AFoddianGameState_Statics::ClassParams = {
	&AFoddianGameState::StaticClass,
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
	0x009002A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AFoddianGameState_Statics::Class_MetaDataParams), Z_Construct_UClass_AFoddianGameState_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AFoddianGameState()
{
	if (!Z_Registration_Info_UClass_AFoddianGameState.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AFoddianGameState.OuterSingleton, Z_Construct_UClass_AFoddianGameState_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AFoddianGameState.OuterSingleton;
}
template<> DSP_FODDIAN_PROJECT_API UClass* StaticClass<AFoddianGameState>()
{
	return AFoddianGameState::StaticClass();
}
AFoddianGameState::AFoddianGameState(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(AFoddianGameState);
AFoddianGameState::~AFoddianGameState() {}
// End Class AFoddianGameState

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_devea_OneDrive_Documents_GitHub_DSP_Foddian_Project_Source_DSP_Foddian_Project_FoddianGameState_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AFoddianGameState, AFoddianGameState::StaticClass, TEXT("AFoddianGameState"), &Z_Registration_Info_UClass_AFoddianGameState, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AFoddianGameState), 2603665989U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_devea_OneDrive_Documents_GitHub_DSP_Foddian_Project_Source_DSP_Foddian_Project_FoddianGameState_h_971120451(TEXT("/Script/DSP_Foddian_Project"),
	Z_CompiledInDeferFile_FID_Users_devea_OneDrive_Documents_GitHub_DSP_Foddian_Project_Source_DSP_Foddian_Project_FoddianGameState_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_devea_OneDrive_Documents_GitHub_DSP_Foddian_Project_Source_DSP_Foddian_Project_FoddianGameState_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
