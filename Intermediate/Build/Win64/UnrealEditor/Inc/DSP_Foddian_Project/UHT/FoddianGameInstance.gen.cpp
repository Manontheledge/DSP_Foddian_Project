// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DSP_Foddian_Project/FoddianGameInstance.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFoddianGameInstance() {}

// Begin Cross Module References
DSP_FODDIAN_PROJECT_API UClass* Z_Construct_UClass_UFoddianGameInstance();
DSP_FODDIAN_PROJECT_API UClass* Z_Construct_UClass_UFoddianGameInstance_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UGameInstance();
UPackage* Z_Construct_UPackage__Script_DSP_Foddian_Project();
// End Cross Module References

// Begin Class UFoddianGameInstance
void UFoddianGameInstance::StaticRegisterNativesUFoddianGameInstance()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UFoddianGameInstance);
UClass* Z_Construct_UClass_UFoddianGameInstance_NoRegister()
{
	return UFoddianGameInstance::StaticClass();
}
struct Z_Construct_UClass_UFoddianGameInstance_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "FoddianGameInstance.h" },
		{ "ModuleRelativePath", "FoddianGameInstance.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UFoddianGameInstance>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UFoddianGameInstance_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UGameInstance,
	(UObject* (*)())Z_Construct_UPackage__Script_DSP_Foddian_Project,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UFoddianGameInstance_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UFoddianGameInstance_Statics::ClassParams = {
	&UFoddianGameInstance::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x009000A8u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UFoddianGameInstance_Statics::Class_MetaDataParams), Z_Construct_UClass_UFoddianGameInstance_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UFoddianGameInstance()
{
	if (!Z_Registration_Info_UClass_UFoddianGameInstance.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UFoddianGameInstance.OuterSingleton, Z_Construct_UClass_UFoddianGameInstance_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UFoddianGameInstance.OuterSingleton;
}
template<> DSP_FODDIAN_PROJECT_API UClass* StaticClass<UFoddianGameInstance>()
{
	return UFoddianGameInstance::StaticClass();
}
UFoddianGameInstance::UFoddianGameInstance(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UFoddianGameInstance);
UFoddianGameInstance::~UFoddianGameInstance() {}
// End Class UFoddianGameInstance

// Begin Registration
struct Z_CompiledInDeferFile_FID_DSP_Foddian_Project_Source_DSP_Foddian_Project_FoddianGameInstance_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UFoddianGameInstance, UFoddianGameInstance::StaticClass, TEXT("UFoddianGameInstance"), &Z_Registration_Info_UClass_UFoddianGameInstance, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UFoddianGameInstance), 351630891U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_DSP_Foddian_Project_Source_DSP_Foddian_Project_FoddianGameInstance_h_669174034(TEXT("/Script/DSP_Foddian_Project"),
	Z_CompiledInDeferFile_FID_DSP_Foddian_Project_Source_DSP_Foddian_Project_FoddianGameInstance_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_DSP_Foddian_Project_Source_DSP_Foddian_Project_FoddianGameInstance_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
