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
ENGINE_API UClass* Z_Construct_UClass_AActor();
UPackage* Z_Construct_UPackage__Script_DSP_Foddian_Project();
// End Cross Module References

// Begin Class APlayerAvatar
void APlayerAvatar::StaticRegisterNativesAPlayerAvatar()
{
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
		{ "IncludePath", "PlayerAvatar.h" },
		{ "ModuleRelativePath", "PlayerAvatar.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<APlayerAvatar>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_APlayerAvatar_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_DSP_Foddian_Project,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_APlayerAvatar_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_APlayerAvatar_Statics::ClassParams = {
	&APlayerAvatar::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
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
struct Z_CompiledInDeferFile_FID_DSP_Foddian_Project_Source_DSP_Foddian_Project_PlayerAvatar_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_APlayerAvatar, APlayerAvatar::StaticClass, TEXT("APlayerAvatar"), &Z_Registration_Info_UClass_APlayerAvatar, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(APlayerAvatar), 2861402918U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_DSP_Foddian_Project_Source_DSP_Foddian_Project_PlayerAvatar_h_777938530(TEXT("/Script/DSP_Foddian_Project"),
	Z_CompiledInDeferFile_FID_DSP_Foddian_Project_Source_DSP_Foddian_Project_PlayerAvatar_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_DSP_Foddian_Project_Source_DSP_Foddian_Project_PlayerAvatar_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
