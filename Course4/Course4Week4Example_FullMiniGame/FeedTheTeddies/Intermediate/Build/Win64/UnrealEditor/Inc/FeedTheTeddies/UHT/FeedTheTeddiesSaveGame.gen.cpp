// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FeedTheTeddies/FeedTheTeddiesSaveGame.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFeedTheTeddiesSaveGame() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_USaveGame();
	FEEDTHETEDDIES_API UClass* Z_Construct_UClass_UFeedTheTeddiesSaveGame();
	FEEDTHETEDDIES_API UClass* Z_Construct_UClass_UFeedTheTeddiesSaveGame_NoRegister();
	UPackage* Z_Construct_UPackage__Script_FeedTheTeddies();
// End Cross Module References
	void UFeedTheTeddiesSaveGame::StaticRegisterNativesUFeedTheTeddiesSaveGame()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UFeedTheTeddiesSaveGame);
	UClass* Z_Construct_UClass_UFeedTheTeddiesSaveGame_NoRegister()
	{
		return UFeedTheTeddiesSaveGame::StaticClass();
	}
	struct Z_Construct_UClass_UFeedTheTeddiesSaveGame_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_HighScore_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_HighScore;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Difficulty_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_Difficulty;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UFeedTheTeddiesSaveGame_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USaveGame,
		(UObject* (*)())Z_Construct_UPackage__Script_FeedTheTeddies,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UFeedTheTeddiesSaveGame_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFeedTheTeddiesSaveGame_Statics::Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * Class for saving and retrieving gameplay data\n */" },
#endif
		{ "IncludePath", "FeedTheTeddiesSaveGame.h" },
		{ "ModuleRelativePath", "FeedTheTeddiesSaveGame.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Class for saving and retrieving gameplay data" },
#endif
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFeedTheTeddiesSaveGame_Statics::NewProp_HighScore_MetaData[] = {
		{ "Category", "Saved Game Data" },
		{ "ModuleRelativePath", "FeedTheTeddiesSaveGame.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UFeedTheTeddiesSaveGame_Statics::NewProp_HighScore = { "HighScore", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UFeedTheTeddiesSaveGame, HighScore), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UFeedTheTeddiesSaveGame_Statics::NewProp_HighScore_MetaData), Z_Construct_UClass_UFeedTheTeddiesSaveGame_Statics::NewProp_HighScore_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFeedTheTeddiesSaveGame_Statics::NewProp_Difficulty_MetaData[] = {
		{ "Category", "Saved Game Data" },
		{ "ModuleRelativePath", "FeedTheTeddiesSaveGame.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UFeedTheTeddiesSaveGame_Statics::NewProp_Difficulty = { "Difficulty", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UFeedTheTeddiesSaveGame, Difficulty), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UFeedTheTeddiesSaveGame_Statics::NewProp_Difficulty_MetaData), Z_Construct_UClass_UFeedTheTeddiesSaveGame_Statics::NewProp_Difficulty_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UFeedTheTeddiesSaveGame_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFeedTheTeddiesSaveGame_Statics::NewProp_HighScore,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFeedTheTeddiesSaveGame_Statics::NewProp_Difficulty,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UFeedTheTeddiesSaveGame_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UFeedTheTeddiesSaveGame>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UFeedTheTeddiesSaveGame_Statics::ClassParams = {
		&UFeedTheTeddiesSaveGame::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UFeedTheTeddiesSaveGame_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UFeedTheTeddiesSaveGame_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UFeedTheTeddiesSaveGame_Statics::Class_MetaDataParams), Z_Construct_UClass_UFeedTheTeddiesSaveGame_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UFeedTheTeddiesSaveGame_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UFeedTheTeddiesSaveGame()
	{
		if (!Z_Registration_Info_UClass_UFeedTheTeddiesSaveGame.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UFeedTheTeddiesSaveGame.OuterSingleton, Z_Construct_UClass_UFeedTheTeddiesSaveGame_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UFeedTheTeddiesSaveGame.OuterSingleton;
	}
	template<> FEEDTHETEDDIES_API UClass* StaticClass<UFeedTheTeddiesSaveGame>()
	{
		return UFeedTheTeddiesSaveGame::StaticClass();
	}
	UFeedTheTeddiesSaveGame::UFeedTheTeddiesSaveGame(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UFeedTheTeddiesSaveGame);
	UFeedTheTeddiesSaveGame::~UFeedTheTeddiesSaveGame() {}
	struct Z_CompiledInDeferFile_FID_NoSynch_UnrealCppCourse_Course4_Course4Week4Example_FullMiniGame_FeedTheTeddies_Source_FeedTheTeddies_FeedTheTeddiesSaveGame_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_NoSynch_UnrealCppCourse_Course4_Course4Week4Example_FullMiniGame_FeedTheTeddies_Source_FeedTheTeddies_FeedTheTeddiesSaveGame_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UFeedTheTeddiesSaveGame, UFeedTheTeddiesSaveGame::StaticClass, TEXT("UFeedTheTeddiesSaveGame"), &Z_Registration_Info_UClass_UFeedTheTeddiesSaveGame, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UFeedTheTeddiesSaveGame), 3470800585U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_NoSynch_UnrealCppCourse_Course4_Course4Week4Example_FullMiniGame_FeedTheTeddies_Source_FeedTheTeddies_FeedTheTeddiesSaveGame_h_3205426852(TEXT("/Script/FeedTheTeddies"),
		Z_CompiledInDeferFile_FID_NoSynch_UnrealCppCourse_Course4_Course4Week4Example_FullMiniGame_FeedTheTeddies_Source_FeedTheTeddies_FeedTheTeddiesSaveGame_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_NoSynch_UnrealCppCourse_Course4_Course4Week4Example_FullMiniGame_FeedTheTeddies_Source_FeedTheTeddies_FeedTheTeddiesSaveGame_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
