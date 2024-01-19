// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FeedTheTeddies/EventName.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEventName() {}
// Cross Module References
	FEEDTHETEDDIES_API UEnum* Z_Construct_UEnum_FeedTheTeddies_EventName();
	UPackage* Z_Construct_UPackage__Script_FeedTheTeddies();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EventName;
	static UEnum* EventName_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EventName.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EventName.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_FeedTheTeddies_EventName, (UObject*)Z_Construct_UPackage__Script_FeedTheTeddies(), TEXT("EventName"));
		}
		return Z_Registration_Info_UEnum_EventName.OuterSingleton;
	}
	template<> FEEDTHETEDDIES_API UEnum* StaticEnum<EventName>()
	{
		return EventName_StaticEnum();
	}
	struct Z_Construct_UEnum_FeedTheTeddies_EventName_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_FeedTheTeddies_EventName_Statics::Enumerators[] = {
		{ "GameOverEvent", (int64)GameOverEvent },
		{ "PointsAddedEvent", (int64)PointsAddedEvent },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_FeedTheTeddies_EventName_Statics::Enum_MetaDataParams[] = {
		{ "GameOverEvent.Name", "GameOverEvent" },
		{ "ModuleRelativePath", "EventName.h" },
		{ "PointsAddedEvent.Name", "PointsAddedEvent" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_FeedTheTeddies_EventName_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_FeedTheTeddies,
		nullptr,
		"EventName",
		"EventName",
		Z_Construct_UEnum_FeedTheTeddies_EventName_Statics::Enumerators,
		RF_Public|RF_Transient|RF_MarkAsNative,
		UE_ARRAY_COUNT(Z_Construct_UEnum_FeedTheTeddies_EventName_Statics::Enumerators),
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::Regular,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_FeedTheTeddies_EventName_Statics::Enum_MetaDataParams), Z_Construct_UEnum_FeedTheTeddies_EventName_Statics::Enum_MetaDataParams)
	};
	UEnum* Z_Construct_UEnum_FeedTheTeddies_EventName()
	{
		if (!Z_Registration_Info_UEnum_EventName.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EventName.InnerSingleton, Z_Construct_UEnum_FeedTheTeddies_EventName_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EventName.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_NoSynch_UnrealCppCourse_Course4_Course4Week4Example_FullMiniGame_FeedTheTeddies_Source_FeedTheTeddies_EventName_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_NoSynch_UnrealCppCourse_Course4_Course4Week4Example_FullMiniGame_FeedTheTeddies_Source_FeedTheTeddies_EventName_h_Statics::EnumInfo[] = {
		{ EventName_StaticEnum, TEXT("EventName"), &Z_Registration_Info_UEnum_EventName, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3677616941U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_NoSynch_UnrealCppCourse_Course4_Course4Week4Example_FullMiniGame_FeedTheTeddies_Source_FeedTheTeddies_EventName_h_711463572(TEXT("/Script/FeedTheTeddies"),
		nullptr, 0,
		nullptr, 0,
		Z_CompiledInDeferFile_FID_NoSynch_UnrealCppCourse_Course4_Course4Week4Example_FullMiniGame_FeedTheTeddies_Source_FeedTheTeddies_EventName_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_NoSynch_UnrealCppCourse_Course4_Course4Week4Example_FullMiniGame_FeedTheTeddies_Source_FeedTheTeddies_EventName_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
