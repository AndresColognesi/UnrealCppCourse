// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FeedTheTeddies/TeddyBearSpawnerActor.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTeddyBearSpawnerActor() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	FEEDTHETEDDIES_API UClass* Z_Construct_UClass_ATeddyBearActor_NoRegister();
	FEEDTHETEDDIES_API UClass* Z_Construct_UClass_ATeddyBearSpawnerActor();
	FEEDTHETEDDIES_API UClass* Z_Construct_UClass_ATeddyBearSpawnerActor_NoRegister();
	UPackage* Z_Construct_UPackage__Script_FeedTheTeddies();
// End Cross Module References
	DEFINE_FUNCTION(ATeddyBearSpawnerActor::execSpawnTeddyBear)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SpawnTeddyBear();
		P_NATIVE_END;
	}
	void ATeddyBearSpawnerActor::StaticRegisterNativesATeddyBearSpawnerActor()
	{
		UClass* Class = ATeddyBearSpawnerActor::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "SpawnTeddyBear", &ATeddyBearSpawnerActor::execSpawnTeddyBear },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ATeddyBearSpawnerActor_SpawnTeddyBear_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATeddyBearSpawnerActor_SpawnTeddyBear_Statics::Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Spawns a teddy bear\n\x09*/" },
#endif
		{ "ModuleRelativePath", "TeddyBearSpawnerActor.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Spawns a teddy bear" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ATeddyBearSpawnerActor_SpawnTeddyBear_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATeddyBearSpawnerActor, nullptr, "SpawnTeddyBear", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ATeddyBearSpawnerActor_SpawnTeddyBear_Statics::Function_MetaDataParams), Z_Construct_UFunction_ATeddyBearSpawnerActor_SpawnTeddyBear_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_ATeddyBearSpawnerActor_SpawnTeddyBear()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ATeddyBearSpawnerActor_SpawnTeddyBear_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ATeddyBearSpawnerActor);
	UClass* Z_Construct_UClass_ATeddyBearSpawnerActor_NoRegister()
	{
		return ATeddyBearSpawnerActor::StaticClass();
	}
	struct Z_Construct_UClass_ATeddyBearSpawnerActor_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_UTeddyBear_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_UTeddyBear;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ATeddyBearSpawnerActor_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_FeedTheTeddies,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ATeddyBearSpawnerActor_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_ATeddyBearSpawnerActor_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ATeddyBearSpawnerActor_SpawnTeddyBear, "SpawnTeddyBear" }, // 651080639
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ATeddyBearSpawnerActor_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATeddyBearSpawnerActor_Statics::Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * A teddy bear spawner\n*/" },
#endif
		{ "IncludePath", "TeddyBearSpawnerActor.h" },
		{ "ModuleRelativePath", "TeddyBearSpawnerActor.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "A teddy bear spawner" },
#endif
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATeddyBearSpawnerActor_Statics::NewProp_UTeddyBear_MetaData[] = {
		{ "Category", "TeddyBearBlueprints" },
		{ "MetaClass", "TeddyBear" },
		{ "ModuleRelativePath", "TeddyBearSpawnerActor.h" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_ATeddyBearSpawnerActor_Statics::NewProp_UTeddyBear = { "UTeddyBear", nullptr, (EPropertyFlags)0x0014000000000001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ATeddyBearSpawnerActor, UTeddyBear), Z_Construct_UClass_UClass, Z_Construct_UClass_ATeddyBearActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ATeddyBearSpawnerActor_Statics::NewProp_UTeddyBear_MetaData), Z_Construct_UClass_ATeddyBearSpawnerActor_Statics::NewProp_UTeddyBear_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ATeddyBearSpawnerActor_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATeddyBearSpawnerActor_Statics::NewProp_UTeddyBear,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ATeddyBearSpawnerActor_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ATeddyBearSpawnerActor>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ATeddyBearSpawnerActor_Statics::ClassParams = {
		&ATeddyBearSpawnerActor::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ATeddyBearSpawnerActor_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ATeddyBearSpawnerActor_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ATeddyBearSpawnerActor_Statics::Class_MetaDataParams), Z_Construct_UClass_ATeddyBearSpawnerActor_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ATeddyBearSpawnerActor_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_ATeddyBearSpawnerActor()
	{
		if (!Z_Registration_Info_UClass_ATeddyBearSpawnerActor.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ATeddyBearSpawnerActor.OuterSingleton, Z_Construct_UClass_ATeddyBearSpawnerActor_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ATeddyBearSpawnerActor.OuterSingleton;
	}
	template<> FEEDTHETEDDIES_API UClass* StaticClass<ATeddyBearSpawnerActor>()
	{
		return ATeddyBearSpawnerActor::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ATeddyBearSpawnerActor);
	ATeddyBearSpawnerActor::~ATeddyBearSpawnerActor() {}
	struct Z_CompiledInDeferFile_FID_NoSynch_UnrealCppCourse_Course4_Course4Week4Example_FullMiniGame_FeedTheTeddies_Source_FeedTheTeddies_TeddyBearSpawnerActor_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_NoSynch_UnrealCppCourse_Course4_Course4Week4Example_FullMiniGame_FeedTheTeddies_Source_FeedTheTeddies_TeddyBearSpawnerActor_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ATeddyBearSpawnerActor, ATeddyBearSpawnerActor::StaticClass, TEXT("ATeddyBearSpawnerActor"), &Z_Registration_Info_UClass_ATeddyBearSpawnerActor, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ATeddyBearSpawnerActor), 876425979U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_NoSynch_UnrealCppCourse_Course4_Course4Week4Example_FullMiniGame_FeedTheTeddies_Source_FeedTheTeddies_TeddyBearSpawnerActor_h_909583533(TEXT("/Script/FeedTheTeddies"),
		Z_CompiledInDeferFile_FID_NoSynch_UnrealCppCourse_Course4_Course4Week4Example_FullMiniGame_FeedTheTeddies_Source_FeedTheTeddies_TeddyBearSpawnerActor_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_NoSynch_UnrealCppCourse_Course4_Course4Week4Example_FullMiniGame_FeedTheTeddies_Source_FeedTheTeddies_TeddyBearSpawnerActor_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
