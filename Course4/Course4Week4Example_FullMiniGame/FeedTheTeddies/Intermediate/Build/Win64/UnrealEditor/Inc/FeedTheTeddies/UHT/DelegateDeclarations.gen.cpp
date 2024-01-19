// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FeedTheTeddies/DelegateDeclarations.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDelegateDeclarations() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	FEEDTHETEDDIES_API UClass* Z_Construct_UClass_UDelegateDeclarations();
	FEEDTHETEDDIES_API UClass* Z_Construct_UClass_UDelegateDeclarations_NoRegister();
	UPackage* Z_Construct_UPackage__Script_FeedTheTeddies();
// End Cross Module References
	void UDelegateDeclarations::StaticRegisterNativesUDelegateDeclarations()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UDelegateDeclarations);
	UClass* Z_Construct_UClass_UDelegateDeclarations_NoRegister()
	{
		return UDelegateDeclarations::StaticClass();
	}
	struct Z_Construct_UClass_UDelegateDeclarations_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UDelegateDeclarations_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_FeedTheTeddies,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UDelegateDeclarations_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDelegateDeclarations_Statics::Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * Container for delegate declarations\n */" },
#endif
		{ "IncludePath", "DelegateDeclarations.h" },
		{ "ModuleRelativePath", "DelegateDeclarations.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Container for delegate declarations" },
#endif
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UDelegateDeclarations_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDelegateDeclarations>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UDelegateDeclarations_Statics::ClassParams = {
		&UDelegateDeclarations::StaticClass,
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
		0x001000A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UDelegateDeclarations_Statics::Class_MetaDataParams), Z_Construct_UClass_UDelegateDeclarations_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_UDelegateDeclarations()
	{
		if (!Z_Registration_Info_UClass_UDelegateDeclarations.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UDelegateDeclarations.OuterSingleton, Z_Construct_UClass_UDelegateDeclarations_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UDelegateDeclarations.OuterSingleton;
	}
	template<> FEEDTHETEDDIES_API UClass* StaticClass<UDelegateDeclarations>()
	{
		return UDelegateDeclarations::StaticClass();
	}
	UDelegateDeclarations::UDelegateDeclarations(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDelegateDeclarations);
	UDelegateDeclarations::~UDelegateDeclarations() {}
	struct Z_CompiledInDeferFile_FID_NoSynch_UnrealCppCourse_Course4_Course4Week4Example_FullMiniGame_FeedTheTeddies_Source_FeedTheTeddies_DelegateDeclarations_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_NoSynch_UnrealCppCourse_Course4_Course4Week4Example_FullMiniGame_FeedTheTeddies_Source_FeedTheTeddies_DelegateDeclarations_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UDelegateDeclarations, UDelegateDeclarations::StaticClass, TEXT("UDelegateDeclarations"), &Z_Registration_Info_UClass_UDelegateDeclarations, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDelegateDeclarations), 2284852878U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_NoSynch_UnrealCppCourse_Course4_Course4Week4Example_FullMiniGame_FeedTheTeddies_Source_FeedTheTeddies_DelegateDeclarations_h_3763828337(TEXT("/Script/FeedTheTeddies"),
		Z_CompiledInDeferFile_FID_NoSynch_UnrealCppCourse_Course4_Course4Week4Example_FullMiniGame_FeedTheTeddies_Source_FeedTheTeddies_DelegateDeclarations_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_NoSynch_UnrealCppCourse_Course4_Course4Week4Example_FullMiniGame_FeedTheTeddies_Source_FeedTheTeddies_DelegateDeclarations_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
