// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FeedTheTeddies/FeedTheTeddiesGameModeBase.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFeedTheTeddiesGameModeBase() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_EEndPlayReason();
	FEEDTHETEDDIES_API UClass* Z_Construct_UClass_AFeedTheTeddiesGameModeBase();
	FEEDTHETEDDIES_API UClass* Z_Construct_UClass_AFeedTheTeddiesGameModeBase_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UUserWidget_NoRegister();
	UPackage* Z_Construct_UPackage__Script_FeedTheTeddies();
// End Cross Module References
	DEFINE_FUNCTION(AFeedTheTeddiesGameModeBase::execEndPlay)
	{
		P_GET_PROPERTY(FByteProperty,Z_Param_EndPlayReason);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->EndPlay(EEndPlayReason::Type(Z_Param_EndPlayReason));
		P_NATIVE_END;
	}
	void AFeedTheTeddiesGameModeBase::StaticRegisterNativesAFeedTheTeddiesGameModeBase()
	{
		UClass* Class = AFeedTheTeddiesGameModeBase::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "EndPlay", &AFeedTheTeddiesGameModeBase::execEndPlay },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AFeedTheTeddiesGameModeBase_EndPlay_Statics
	{
		struct FeedTheTeddiesGameModeBase_eventEndPlay_Parms
		{
			TEnumAsByte<EEndPlayReason::Type> EndPlayReason;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EndPlayReason_MetaData[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_EndPlayReason;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFeedTheTeddiesGameModeBase_EndPlay_Statics::NewProp_EndPlayReason_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_AFeedTheTeddiesGameModeBase_EndPlay_Statics::NewProp_EndPlayReason = { "EndPlayReason", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FeedTheTeddiesGameModeBase_eventEndPlay_Parms, EndPlayReason), Z_Construct_UEnum_Engine_EEndPlayReason, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AFeedTheTeddiesGameModeBase_EndPlay_Statics::NewProp_EndPlayReason_MetaData), Z_Construct_UFunction_AFeedTheTeddiesGameModeBase_EndPlay_Statics::NewProp_EndPlayReason_MetaData) }; // 930452524
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFeedTheTeddiesGameModeBase_EndPlay_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFeedTheTeddiesGameModeBase_EndPlay_Statics::NewProp_EndPlayReason,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFeedTheTeddiesGameModeBase_EndPlay_Statics::Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Called when actor is being removed from level\n\x09 * @param EndPlayReason why the actor is being removed\n\x09*/" },
#endif
		{ "ModuleRelativePath", "FeedTheTeddiesGameModeBase.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Called when actor is being removed from level\n@param EndPlayReason why the actor is being removed" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AFeedTheTeddiesGameModeBase_EndPlay_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFeedTheTeddiesGameModeBase, nullptr, "EndPlay", nullptr, nullptr, Z_Construct_UFunction_AFeedTheTeddiesGameModeBase_EndPlay_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AFeedTheTeddiesGameModeBase_EndPlay_Statics::PropPointers), sizeof(Z_Construct_UFunction_AFeedTheTeddiesGameModeBase_EndPlay_Statics::FeedTheTeddiesGameModeBase_eventEndPlay_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AFeedTheTeddiesGameModeBase_EndPlay_Statics::Function_MetaDataParams), Z_Construct_UFunction_AFeedTheTeddiesGameModeBase_EndPlay_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AFeedTheTeddiesGameModeBase_EndPlay_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_AFeedTheTeddiesGameModeBase_EndPlay_Statics::FeedTheTeddiesGameModeBase_eventEndPlay_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_AFeedTheTeddiesGameModeBase_EndPlay()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AFeedTheTeddiesGameModeBase_EndPlay_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AFeedTheTeddiesGameModeBase);
	UClass* Z_Construct_UClass_AFeedTheTeddiesGameModeBase_NoRegister()
	{
		return AFeedTheTeddiesGameModeBase::StaticClass();
	}
	struct Z_Construct_UClass_AFeedTheTeddiesGameModeBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_HudWidgetClass_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_HudWidgetClass;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GameOverWidgetClass_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_GameOverWidgetClass;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Score_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_Score;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SecondsLeft_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_SecondsLeft;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AFeedTheTeddiesGameModeBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_FeedTheTeddies,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AFeedTheTeddiesGameModeBase_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_AFeedTheTeddiesGameModeBase_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AFeedTheTeddiesGameModeBase_EndPlay, "EndPlay" }, // 4237888971
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AFeedTheTeddiesGameModeBase_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFeedTheTeddiesGameModeBase_Statics::Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * Custom game mode\n */" },
#endif
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "FeedTheTeddiesGameModeBase.h" },
		{ "ModuleRelativePath", "FeedTheTeddiesGameModeBase.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Custom game mode" },
#endif
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFeedTheTeddiesGameModeBase_Statics::NewProp_HudWidgetClass_MetaData[] = {
		{ "Category", "HUD" },
		{ "ModuleRelativePath", "FeedTheTeddiesGameModeBase.h" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_AFeedTheTeddiesGameModeBase_Statics::NewProp_HudWidgetClass = { "HudWidgetClass", nullptr, (EPropertyFlags)0x0014000000000015, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AFeedTheTeddiesGameModeBase, HudWidgetClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UUserWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AFeedTheTeddiesGameModeBase_Statics::NewProp_HudWidgetClass_MetaData), Z_Construct_UClass_AFeedTheTeddiesGameModeBase_Statics::NewProp_HudWidgetClass_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFeedTheTeddiesGameModeBase_Statics::NewProp_GameOverWidgetClass_MetaData[] = {
		{ "Category", "Game Over" },
		{ "ModuleRelativePath", "FeedTheTeddiesGameModeBase.h" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_AFeedTheTeddiesGameModeBase_Statics::NewProp_GameOverWidgetClass = { "GameOverWidgetClass", nullptr, (EPropertyFlags)0x0014000000000015, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AFeedTheTeddiesGameModeBase, GameOverWidgetClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UUserWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AFeedTheTeddiesGameModeBase_Statics::NewProp_GameOverWidgetClass_MetaData), Z_Construct_UClass_AFeedTheTeddiesGameModeBase_Statics::NewProp_GameOverWidgetClass_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFeedTheTeddiesGameModeBase_Statics::NewProp_Score_MetaData[] = {
		{ "Category", "Score" },
		{ "ModuleRelativePath", "FeedTheTeddiesGameModeBase.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_AFeedTheTeddiesGameModeBase_Statics::NewProp_Score = { "Score", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AFeedTheTeddiesGameModeBase, Score), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AFeedTheTeddiesGameModeBase_Statics::NewProp_Score_MetaData), Z_Construct_UClass_AFeedTheTeddiesGameModeBase_Statics::NewProp_Score_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFeedTheTeddiesGameModeBase_Statics::NewProp_SecondsLeft_MetaData[] = {
		{ "Category", "Seconds Left" },
		{ "ModuleRelativePath", "FeedTheTeddiesGameModeBase.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_AFeedTheTeddiesGameModeBase_Statics::NewProp_SecondsLeft = { "SecondsLeft", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AFeedTheTeddiesGameModeBase, SecondsLeft), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AFeedTheTeddiesGameModeBase_Statics::NewProp_SecondsLeft_MetaData), Z_Construct_UClass_AFeedTheTeddiesGameModeBase_Statics::NewProp_SecondsLeft_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AFeedTheTeddiesGameModeBase_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFeedTheTeddiesGameModeBase_Statics::NewProp_HudWidgetClass,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFeedTheTeddiesGameModeBase_Statics::NewProp_GameOverWidgetClass,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFeedTheTeddiesGameModeBase_Statics::NewProp_Score,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFeedTheTeddiesGameModeBase_Statics::NewProp_SecondsLeft,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AFeedTheTeddiesGameModeBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AFeedTheTeddiesGameModeBase>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AFeedTheTeddiesGameModeBase_Statics::ClassParams = {
		&AFeedTheTeddiesGameModeBase::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AFeedTheTeddiesGameModeBase_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AFeedTheTeddiesGameModeBase_Statics::PropPointers),
		0,
		0x009002ACu,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AFeedTheTeddiesGameModeBase_Statics::Class_MetaDataParams), Z_Construct_UClass_AFeedTheTeddiesGameModeBase_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AFeedTheTeddiesGameModeBase_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_AFeedTheTeddiesGameModeBase()
	{
		if (!Z_Registration_Info_UClass_AFeedTheTeddiesGameModeBase.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AFeedTheTeddiesGameModeBase.OuterSingleton, Z_Construct_UClass_AFeedTheTeddiesGameModeBase_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AFeedTheTeddiesGameModeBase.OuterSingleton;
	}
	template<> FEEDTHETEDDIES_API UClass* StaticClass<AFeedTheTeddiesGameModeBase>()
	{
		return AFeedTheTeddiesGameModeBase::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AFeedTheTeddiesGameModeBase);
	AFeedTheTeddiesGameModeBase::~AFeedTheTeddiesGameModeBase() {}
	struct Z_CompiledInDeferFile_FID_NoSynch_UnrealCppCourse_Course4_Course4Week4Example_FullMiniGame_FeedTheTeddies_Source_FeedTheTeddies_FeedTheTeddiesGameModeBase_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_NoSynch_UnrealCppCourse_Course4_Course4Week4Example_FullMiniGame_FeedTheTeddies_Source_FeedTheTeddies_FeedTheTeddiesGameModeBase_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AFeedTheTeddiesGameModeBase, AFeedTheTeddiesGameModeBase::StaticClass, TEXT("AFeedTheTeddiesGameModeBase"), &Z_Registration_Info_UClass_AFeedTheTeddiesGameModeBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AFeedTheTeddiesGameModeBase), 3168716058U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_NoSynch_UnrealCppCourse_Course4_Course4Week4Example_FullMiniGame_FeedTheTeddies_Source_FeedTheTeddies_FeedTheTeddiesGameModeBase_h_748190304(TEXT("/Script/FeedTheTeddies"),
		Z_CompiledInDeferFile_FID_NoSynch_UnrealCppCourse_Course4_Course4Week4Example_FullMiniGame_FeedTheTeddies_Source_FeedTheTeddies_FeedTheTeddiesGameModeBase_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_NoSynch_UnrealCppCourse_Course4_Course4Week4Example_FullMiniGame_FeedTheTeddies_Source_FeedTheTeddies_FeedTheTeddiesGameModeBase_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
