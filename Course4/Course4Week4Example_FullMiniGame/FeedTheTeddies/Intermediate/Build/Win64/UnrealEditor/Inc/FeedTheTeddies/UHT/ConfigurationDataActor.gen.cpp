// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FeedTheTeddies/ConfigurationDataActor.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeConfigurationDataActor() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	ENGINE_API UClass* Z_Construct_UClass_UDataTable_NoRegister();
	FEEDTHETEDDIES_API UClass* Z_Construct_UClass_AConfigurationDataActor();
	FEEDTHETEDDIES_API UClass* Z_Construct_UClass_AConfigurationDataActor_NoRegister();
	UPackage* Z_Construct_UPackage__Script_FeedTheTeddies();
// End Cross Module References
	void AConfigurationDataActor::StaticRegisterNativesAConfigurationDataActor()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AConfigurationDataActor);
	UClass* Z_Construct_UClass_AConfigurationDataActor_NoRegister()
	{
		return AConfigurationDataActor::StaticClass();
	}
	struct Z_Construct_UClass_AConfigurationDataActor_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ConfigurationDataTable_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ConfigurationDataTable;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AConfigurationDataActor_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_FeedTheTeddies,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AConfigurationDataActor_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AConfigurationDataActor_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "ConfigurationDataActor.h" },
		{ "ModuleRelativePath", "ConfigurationDataActor.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AConfigurationDataActor_Statics::NewProp_ConfigurationDataTable_MetaData[] = {
		{ "Category", "Configuration Data Table" },
		{ "ModuleRelativePath", "ConfigurationDataActor.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AConfigurationDataActor_Statics::NewProp_ConfigurationDataTable = { "ConfigurationDataTable", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AConfigurationDataActor, ConfigurationDataTable), Z_Construct_UClass_UDataTable_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AConfigurationDataActor_Statics::NewProp_ConfigurationDataTable_MetaData), Z_Construct_UClass_AConfigurationDataActor_Statics::NewProp_ConfigurationDataTable_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AConfigurationDataActor_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AConfigurationDataActor_Statics::NewProp_ConfigurationDataTable,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AConfigurationDataActor_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AConfigurationDataActor>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AConfigurationDataActor_Statics::ClassParams = {
		&AConfigurationDataActor::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AConfigurationDataActor_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AConfigurationDataActor_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AConfigurationDataActor_Statics::Class_MetaDataParams), Z_Construct_UClass_AConfigurationDataActor_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AConfigurationDataActor_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_AConfigurationDataActor()
	{
		if (!Z_Registration_Info_UClass_AConfigurationDataActor.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AConfigurationDataActor.OuterSingleton, Z_Construct_UClass_AConfigurationDataActor_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AConfigurationDataActor.OuterSingleton;
	}
	template<> FEEDTHETEDDIES_API UClass* StaticClass<AConfigurationDataActor>()
	{
		return AConfigurationDataActor::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AConfigurationDataActor);
	AConfigurationDataActor::~AConfigurationDataActor() {}
	struct Z_CompiledInDeferFile_FID_NoSynch_UnrealCppCourse_Course4_Course4Week4Example_FullMiniGame_FeedTheTeddies_Source_FeedTheTeddies_ConfigurationDataActor_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_NoSynch_UnrealCppCourse_Course4_Course4Week4Example_FullMiniGame_FeedTheTeddies_Source_FeedTheTeddies_ConfigurationDataActor_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AConfigurationDataActor, AConfigurationDataActor::StaticClass, TEXT("AConfigurationDataActor"), &Z_Registration_Info_UClass_AConfigurationDataActor, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AConfigurationDataActor), 1700644000U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_NoSynch_UnrealCppCourse_Course4_Course4Week4Example_FullMiniGame_FeedTheTeddies_Source_FeedTheTeddies_ConfigurationDataActor_h_902487007(TEXT("/Script/FeedTheTeddies"),
		Z_CompiledInDeferFile_FID_NoSynch_UnrealCppCourse_Course4_Course4Week4Example_FullMiniGame_FeedTheTeddies_Source_FeedTheTeddies_ConfigurationDataActor_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_NoSynch_UnrealCppCourse_Course4_Course4Week4Example_FullMiniGame_FeedTheTeddies_Source_FeedTheTeddies_ConfigurationDataActor_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
