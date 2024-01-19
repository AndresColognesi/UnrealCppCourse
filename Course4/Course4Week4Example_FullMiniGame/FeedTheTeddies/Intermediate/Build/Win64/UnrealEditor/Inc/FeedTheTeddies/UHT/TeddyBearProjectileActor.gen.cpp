// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FeedTheTeddies/TeddyBearProjectileActor.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTeddyBearProjectileActor() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	FEEDTHETEDDIES_API UClass* Z_Construct_UClass_ATeddyBearProjectileActor();
	FEEDTHETEDDIES_API UClass* Z_Construct_UClass_ATeddyBearProjectileActor_NoRegister();
	FEEDTHETEDDIES_API UClass* Z_Construct_UClass_UHomingActorInterface_NoRegister();
	UPackage* Z_Construct_UPackage__Script_FeedTheTeddies();
// End Cross Module References
	void ATeddyBearProjectileActor::StaticRegisterNativesATeddyBearProjectileActor()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ATeddyBearProjectileActor);
	UClass* Z_Construct_UClass_ATeddyBearProjectileActor_NoRegister()
	{
		return ATeddyBearProjectileActor::StaticClass();
	}
	struct Z_Construct_UClass_ATeddyBearProjectileActor_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ATeddyBearProjectileActor_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_FeedTheTeddies,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ATeddyBearProjectileActor_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATeddyBearProjectileActor_Statics::Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * A teddy bear projectile\n*/" },
#endif
		{ "IncludePath", "TeddyBearProjectileActor.h" },
		{ "ModuleRelativePath", "TeddyBearProjectileActor.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "A teddy bear projectile" },
#endif
	};
#endif
		const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_ATeddyBearProjectileActor_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UHomingActorInterface_NoRegister, (int32)VTABLE_OFFSET(ATeddyBearProjectileActor, IHomingActorInterface), false },  // 988809299
		};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ATeddyBearProjectileActor_Statics::InterfaceParams) < 64);
	const FCppClassTypeInfoStatic Z_Construct_UClass_ATeddyBearProjectileActor_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ATeddyBearProjectileActor>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ATeddyBearProjectileActor_Statics::ClassParams = {
		&ATeddyBearProjectileActor::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		UE_ARRAY_COUNT(InterfaceParams),
		0x009000A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ATeddyBearProjectileActor_Statics::Class_MetaDataParams), Z_Construct_UClass_ATeddyBearProjectileActor_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_ATeddyBearProjectileActor()
	{
		if (!Z_Registration_Info_UClass_ATeddyBearProjectileActor.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ATeddyBearProjectileActor.OuterSingleton, Z_Construct_UClass_ATeddyBearProjectileActor_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ATeddyBearProjectileActor.OuterSingleton;
	}
	template<> FEEDTHETEDDIES_API UClass* StaticClass<ATeddyBearProjectileActor>()
	{
		return ATeddyBearProjectileActor::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ATeddyBearProjectileActor);
	ATeddyBearProjectileActor::~ATeddyBearProjectileActor() {}
	struct Z_CompiledInDeferFile_FID_NoSynch_UnrealCppCourse_Course4_Course4Week4Example_FullMiniGame_FeedTheTeddies_Source_FeedTheTeddies_TeddyBearProjectileActor_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_NoSynch_UnrealCppCourse_Course4_Course4Week4Example_FullMiniGame_FeedTheTeddies_Source_FeedTheTeddies_TeddyBearProjectileActor_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ATeddyBearProjectileActor, ATeddyBearProjectileActor::StaticClass, TEXT("ATeddyBearProjectileActor"), &Z_Registration_Info_UClass_ATeddyBearProjectileActor, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ATeddyBearProjectileActor), 1821335207U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_NoSynch_UnrealCppCourse_Course4_Course4Week4Example_FullMiniGame_FeedTheTeddies_Source_FeedTheTeddies_TeddyBearProjectileActor_h_507959973(TEXT("/Script/FeedTheTeddies"),
		Z_CompiledInDeferFile_FID_NoSynch_UnrealCppCourse_Course4_Course4Week4Example_FullMiniGame_FeedTheTeddies_Source_FeedTheTeddies_TeddyBearProjectileActor_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_NoSynch_UnrealCppCourse_Course4_Course4Week4Example_FullMiniGame_FeedTheTeddies_Source_FeedTheTeddies_TeddyBearProjectileActor_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
