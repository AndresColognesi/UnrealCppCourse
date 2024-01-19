// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FeedTheTeddies/HomingActorInterface.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeHomingActorInterface() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
	FEEDTHETEDDIES_API UClass* Z_Construct_UClass_UHomingActorInterface();
	FEEDTHETEDDIES_API UClass* Z_Construct_UClass_UHomingActorInterface_NoRegister();
	UPackage* Z_Construct_UPackage__Script_FeedTheTeddies();
// End Cross Module References
	void UHomingActorInterface::StaticRegisterNativesUHomingActorInterface()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UHomingActorInterface);
	UClass* Z_Construct_UClass_UHomingActorInterface_NoRegister()
	{
		return UHomingActorInterface::StaticClass();
	}
	struct Z_Construct_UClass_UHomingActorInterface_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UHomingActorInterface_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInterface,
		(UObject* (*)())Z_Construct_UPackage__Script_FeedTheTeddies,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UHomingActorInterface_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHomingActorInterface_Statics::Class_MetaDataParams[] = {
		{ "ModuleRelativePath", "HomingActorInterface.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UHomingActorInterface_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IHomingActorInterface>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UHomingActorInterface_Statics::ClassParams = {
		&UHomingActorInterface::StaticClass,
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
		0x000840A1u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UHomingActorInterface_Statics::Class_MetaDataParams), Z_Construct_UClass_UHomingActorInterface_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_UHomingActorInterface()
	{
		if (!Z_Registration_Info_UClass_UHomingActorInterface.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UHomingActorInterface.OuterSingleton, Z_Construct_UClass_UHomingActorInterface_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UHomingActorInterface.OuterSingleton;
	}
	template<> FEEDTHETEDDIES_API UClass* StaticClass<UHomingActorInterface>()
	{
		return UHomingActorInterface::StaticClass();
	}
	UHomingActorInterface::UHomingActorInterface(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UHomingActorInterface);
	UHomingActorInterface::~UHomingActorInterface() {}
	struct Z_CompiledInDeferFile_FID_NoSynch_UnrealCppCourse_Course4_Course4Week4Example_FullMiniGame_FeedTheTeddies_Source_FeedTheTeddies_HomingActorInterface_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_NoSynch_UnrealCppCourse_Course4_Course4Week4Example_FullMiniGame_FeedTheTeddies_Source_FeedTheTeddies_HomingActorInterface_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UHomingActorInterface, UHomingActorInterface::StaticClass, TEXT("UHomingActorInterface"), &Z_Registration_Info_UClass_UHomingActorInterface, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UHomingActorInterface), 988809299U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_NoSynch_UnrealCppCourse_Course4_Course4Week4Example_FullMiniGame_FeedTheTeddies_Source_FeedTheTeddies_HomingActorInterface_h_3690353729(TEXT("/Script/FeedTheTeddies"),
		Z_CompiledInDeferFile_FID_NoSynch_UnrealCppCourse_Course4_Course4Week4Example_FullMiniGame_FeedTheTeddies_Source_FeedTheTeddies_HomingActorInterface_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_NoSynch_UnrealCppCourse_Course4_Course4Week4Example_FullMiniGame_FeedTheTeddies_Source_FeedTheTeddies_HomingActorInterface_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
