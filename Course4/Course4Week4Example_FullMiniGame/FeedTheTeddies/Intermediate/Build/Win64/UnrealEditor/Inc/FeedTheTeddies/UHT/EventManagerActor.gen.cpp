// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FeedTheTeddies/EventManagerActor.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEventManagerActor() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	FEEDTHETEDDIES_API UClass* Z_Construct_UClass_AEventManagerActor();
	FEEDTHETEDDIES_API UClass* Z_Construct_UClass_AEventManagerActor_NoRegister();
	UPackage* Z_Construct_UPackage__Script_FeedTheTeddies();
// End Cross Module References
	void AEventManagerActor::StaticRegisterNativesAEventManagerActor()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AEventManagerActor);
	UClass* Z_Construct_UClass_AEventManagerActor_NoRegister()
	{
		return AEventManagerActor::StaticClass();
	}
	struct Z_Construct_UClass_AEventManagerActor_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AEventManagerActor_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_FeedTheTeddies,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AEventManagerActor_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AEventManagerActor_Statics::Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * An event manager\n*/" },
#endif
		{ "IncludePath", "EventManagerActor.h" },
		{ "ModuleRelativePath", "EventManagerActor.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "An event manager" },
#endif
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AEventManagerActor_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AEventManagerActor>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AEventManagerActor_Statics::ClassParams = {
		&AEventManagerActor::StaticClass,
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
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AEventManagerActor_Statics::Class_MetaDataParams), Z_Construct_UClass_AEventManagerActor_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_AEventManagerActor()
	{
		if (!Z_Registration_Info_UClass_AEventManagerActor.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AEventManagerActor.OuterSingleton, Z_Construct_UClass_AEventManagerActor_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AEventManagerActor.OuterSingleton;
	}
	template<> FEEDTHETEDDIES_API UClass* StaticClass<AEventManagerActor>()
	{
		return AEventManagerActor::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AEventManagerActor);
	AEventManagerActor::~AEventManagerActor() {}
	struct Z_CompiledInDeferFile_FID_NoSynch_UnrealCppCourse_Course4_Course4Week4Example_FullMiniGame_FeedTheTeddies_Source_FeedTheTeddies_EventManagerActor_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_NoSynch_UnrealCppCourse_Course4_Course4Week4Example_FullMiniGame_FeedTheTeddies_Source_FeedTheTeddies_EventManagerActor_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AEventManagerActor, AEventManagerActor::StaticClass, TEXT("AEventManagerActor"), &Z_Registration_Info_UClass_AEventManagerActor, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AEventManagerActor), 2239585158U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_NoSynch_UnrealCppCourse_Course4_Course4Week4Example_FullMiniGame_FeedTheTeddies_Source_FeedTheTeddies_EventManagerActor_h_3933127726(TEXT("/Script/FeedTheTeddies"),
		Z_CompiledInDeferFile_FID_NoSynch_UnrealCppCourse_Course4_Course4Week4Example_FullMiniGame_FeedTheTeddies_Source_FeedTheTeddies_EventManagerActor_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_NoSynch_UnrealCppCourse_Course4_Course4Week4Example_FullMiniGame_FeedTheTeddies_Source_FeedTheTeddies_EventManagerActor_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
