// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FeedTheTeddies/ConfigurationDataStruct.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeConfigurationDataStruct() {}
// Cross Module References
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FTableRowBase();
	FEEDTHETEDDIES_API UScriptStruct* Z_Construct_UScriptStruct_FConfigurationDataStruct();
	UPackage* Z_Construct_UPackage__Script_FeedTheTeddies();
// End Cross Module References

static_assert(std::is_polymorphic<FConfigurationDataStruct>() == std::is_polymorphic<FTableRowBase>(), "USTRUCT FConfigurationDataStruct cannot be polymorphic unless super FTableRowBase is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ConfigurationDataStruct;
class UScriptStruct* FConfigurationDataStruct::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ConfigurationDataStruct.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ConfigurationDataStruct.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FConfigurationDataStruct, (UObject*)Z_Construct_UPackage__Script_FeedTheTeddies(), TEXT("ConfigurationDataStruct"));
	}
	return Z_Registration_Info_UScriptStruct_ConfigurationDataStruct.OuterSingleton;
}
template<> FEEDTHETEDDIES_API UScriptStruct* StaticStruct<FConfigurationDataStruct>()
{
	return FConfigurationDataStruct::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FConfigurationDataStruct_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TotalGameSeconds_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_TotalGameSeconds;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BurgerMoveAmountPerSecond_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_BurgerMoveAmountPerSecond;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BearDamage_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_BearDamage;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BearProjectileDamage_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_BearProjectileDamage;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BearPoints_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_BearPoints;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FriesImpulseForce_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_FriesImpulseForce;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BearProjectileImpulseForce_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_BearProjectileImpulseForce;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EasyMinSpawnDelay_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_EasyMinSpawnDelay;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EasyMaxSpawnDelay_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_EasyMaxSpawnDelay;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EasyMinBearImpulseForce_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_EasyMinBearImpulseForce;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EasyMaxBearImpulseForce_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_EasyMaxBearImpulseForce;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EasyMaxNumBears_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_EasyMaxNumBears;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EasyBearMinShotDelay_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_EasyBearMinShotDelay;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EasyBearMaxShotDelay_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_EasyBearMaxShotDelay;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EasyBearHomingDelay_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_EasyBearHomingDelay;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EasyBearProjectileHomingDelay_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_EasyBearProjectileHomingDelay;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MediumMinSpawnDelay_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_MediumMinSpawnDelay;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MediumMaxSpawnDelay_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_MediumMaxSpawnDelay;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MediumMinBearImpulseForce_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_MediumMinBearImpulseForce;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MediumMaxBearImpulseForce_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_MediumMaxBearImpulseForce;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MediumMaxNumBears_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_MediumMaxNumBears;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MediumBearMinShotDelay_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_MediumBearMinShotDelay;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MediumBearMaxShotDelay_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_MediumBearMaxShotDelay;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MediumBearHomingDelay_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_MediumBearHomingDelay;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MediumBearProjectileHomingDelay_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_MediumBearProjectileHomingDelay;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_HardMinSpawnDelay_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_HardMinSpawnDelay;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_HardMaxSpawnDelay_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_HardMaxSpawnDelay;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_HardMinBearImpulseForce_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_HardMinBearImpulseForce;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_HardMaxBearImpulseForce_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_HardMaxBearImpulseForce;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_HardMaxNumBears_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_HardMaxNumBears;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_HardBearMinShotDelay_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_HardBearMinShotDelay;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_HardBearMaxShotDelay_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_HardBearMaxShotDelay;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_HardBearHomingDelay_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_HardBearHomingDelay;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_HardBearProjectileHomingDelay_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_HardBearProjectileHomingDelay;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FConfigurationDataStruct_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "ConfigurationDataStruct.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FConfigurationDataStruct_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FConfigurationDataStruct>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FConfigurationDataStruct_Statics::NewProp_TotalGameSeconds_MetaData[] = {
		{ "Category", "Configuration Data Struct" },
		{ "ModuleRelativePath", "ConfigurationDataStruct.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FConfigurationDataStruct_Statics::NewProp_TotalGameSeconds = { "TotalGameSeconds", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FConfigurationDataStruct, TotalGameSeconds), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FConfigurationDataStruct_Statics::NewProp_TotalGameSeconds_MetaData), Z_Construct_UScriptStruct_FConfigurationDataStruct_Statics::NewProp_TotalGameSeconds_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FConfigurationDataStruct_Statics::NewProp_BurgerMoveAmountPerSecond_MetaData[] = {
		{ "Category", "Configuration Data Struct" },
		{ "ModuleRelativePath", "ConfigurationDataStruct.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FConfigurationDataStruct_Statics::NewProp_BurgerMoveAmountPerSecond = { "BurgerMoveAmountPerSecond", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FConfigurationDataStruct, BurgerMoveAmountPerSecond), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FConfigurationDataStruct_Statics::NewProp_BurgerMoveAmountPerSecond_MetaData), Z_Construct_UScriptStruct_FConfigurationDataStruct_Statics::NewProp_BurgerMoveAmountPerSecond_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FConfigurationDataStruct_Statics::NewProp_BearDamage_MetaData[] = {
		{ "Category", "Configuration Data Struct" },
		{ "ModuleRelativePath", "ConfigurationDataStruct.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FConfigurationDataStruct_Statics::NewProp_BearDamage = { "BearDamage", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FConfigurationDataStruct, BearDamage), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FConfigurationDataStruct_Statics::NewProp_BearDamage_MetaData), Z_Construct_UScriptStruct_FConfigurationDataStruct_Statics::NewProp_BearDamage_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FConfigurationDataStruct_Statics::NewProp_BearProjectileDamage_MetaData[] = {
		{ "Category", "Configuration Data Struct" },
		{ "ModuleRelativePath", "ConfigurationDataStruct.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FConfigurationDataStruct_Statics::NewProp_BearProjectileDamage = { "BearProjectileDamage", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FConfigurationDataStruct, BearProjectileDamage), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FConfigurationDataStruct_Statics::NewProp_BearProjectileDamage_MetaData), Z_Construct_UScriptStruct_FConfigurationDataStruct_Statics::NewProp_BearProjectileDamage_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FConfigurationDataStruct_Statics::NewProp_BearPoints_MetaData[] = {
		{ "Category", "Configuration Data Struct" },
		{ "ModuleRelativePath", "ConfigurationDataStruct.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FConfigurationDataStruct_Statics::NewProp_BearPoints = { "BearPoints", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FConfigurationDataStruct, BearPoints), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FConfigurationDataStruct_Statics::NewProp_BearPoints_MetaData), Z_Construct_UScriptStruct_FConfigurationDataStruct_Statics::NewProp_BearPoints_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FConfigurationDataStruct_Statics::NewProp_FriesImpulseForce_MetaData[] = {
		{ "Category", "Configuration Data Struct" },
		{ "ModuleRelativePath", "ConfigurationDataStruct.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FConfigurationDataStruct_Statics::NewProp_FriesImpulseForce = { "FriesImpulseForce", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FConfigurationDataStruct, FriesImpulseForce), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FConfigurationDataStruct_Statics::NewProp_FriesImpulseForce_MetaData), Z_Construct_UScriptStruct_FConfigurationDataStruct_Statics::NewProp_FriesImpulseForce_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FConfigurationDataStruct_Statics::NewProp_BearProjectileImpulseForce_MetaData[] = {
		{ "Category", "Configuration Data Struct" },
		{ "ModuleRelativePath", "ConfigurationDataStruct.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FConfigurationDataStruct_Statics::NewProp_BearProjectileImpulseForce = { "BearProjectileImpulseForce", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FConfigurationDataStruct, BearProjectileImpulseForce), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FConfigurationDataStruct_Statics::NewProp_BearProjectileImpulseForce_MetaData), Z_Construct_UScriptStruct_FConfigurationDataStruct_Statics::NewProp_BearProjectileImpulseForce_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FConfigurationDataStruct_Statics::NewProp_EasyMinSpawnDelay_MetaData[] = {
		{ "Category", "Configuration Data Struct" },
		{ "ModuleRelativePath", "ConfigurationDataStruct.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FConfigurationDataStruct_Statics::NewProp_EasyMinSpawnDelay = { "EasyMinSpawnDelay", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FConfigurationDataStruct, EasyMinSpawnDelay), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FConfigurationDataStruct_Statics::NewProp_EasyMinSpawnDelay_MetaData), Z_Construct_UScriptStruct_FConfigurationDataStruct_Statics::NewProp_EasyMinSpawnDelay_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FConfigurationDataStruct_Statics::NewProp_EasyMaxSpawnDelay_MetaData[] = {
		{ "Category", "Configuration Data Struct" },
		{ "ModuleRelativePath", "ConfigurationDataStruct.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FConfigurationDataStruct_Statics::NewProp_EasyMaxSpawnDelay = { "EasyMaxSpawnDelay", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FConfigurationDataStruct, EasyMaxSpawnDelay), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FConfigurationDataStruct_Statics::NewProp_EasyMaxSpawnDelay_MetaData), Z_Construct_UScriptStruct_FConfigurationDataStruct_Statics::NewProp_EasyMaxSpawnDelay_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FConfigurationDataStruct_Statics::NewProp_EasyMinBearImpulseForce_MetaData[] = {
		{ "Category", "Configuration Data Struct" },
		{ "ModuleRelativePath", "ConfigurationDataStruct.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FConfigurationDataStruct_Statics::NewProp_EasyMinBearImpulseForce = { "EasyMinBearImpulseForce", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FConfigurationDataStruct, EasyMinBearImpulseForce), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FConfigurationDataStruct_Statics::NewProp_EasyMinBearImpulseForce_MetaData), Z_Construct_UScriptStruct_FConfigurationDataStruct_Statics::NewProp_EasyMinBearImpulseForce_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FConfigurationDataStruct_Statics::NewProp_EasyMaxBearImpulseForce_MetaData[] = {
		{ "Category", "Configuration Data Struct" },
		{ "ModuleRelativePath", "ConfigurationDataStruct.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FConfigurationDataStruct_Statics::NewProp_EasyMaxBearImpulseForce = { "EasyMaxBearImpulseForce", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FConfigurationDataStruct, EasyMaxBearImpulseForce), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FConfigurationDataStruct_Statics::NewProp_EasyMaxBearImpulseForce_MetaData), Z_Construct_UScriptStruct_FConfigurationDataStruct_Statics::NewProp_EasyMaxBearImpulseForce_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FConfigurationDataStruct_Statics::NewProp_EasyMaxNumBears_MetaData[] = {
		{ "Category", "Configuration Data Struct" },
		{ "ModuleRelativePath", "ConfigurationDataStruct.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FConfigurationDataStruct_Statics::NewProp_EasyMaxNumBears = { "EasyMaxNumBears", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FConfigurationDataStruct, EasyMaxNumBears), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FConfigurationDataStruct_Statics::NewProp_EasyMaxNumBears_MetaData), Z_Construct_UScriptStruct_FConfigurationDataStruct_Statics::NewProp_EasyMaxNumBears_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FConfigurationDataStruct_Statics::NewProp_EasyBearMinShotDelay_MetaData[] = {
		{ "Category", "Configuration Data Struct" },
		{ "ModuleRelativePath", "ConfigurationDataStruct.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FConfigurationDataStruct_Statics::NewProp_EasyBearMinShotDelay = { "EasyBearMinShotDelay", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FConfigurationDataStruct, EasyBearMinShotDelay), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FConfigurationDataStruct_Statics::NewProp_EasyBearMinShotDelay_MetaData), Z_Construct_UScriptStruct_FConfigurationDataStruct_Statics::NewProp_EasyBearMinShotDelay_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FConfigurationDataStruct_Statics::NewProp_EasyBearMaxShotDelay_MetaData[] = {
		{ "Category", "Configuration Data Struct" },
		{ "ModuleRelativePath", "ConfigurationDataStruct.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FConfigurationDataStruct_Statics::NewProp_EasyBearMaxShotDelay = { "EasyBearMaxShotDelay", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FConfigurationDataStruct, EasyBearMaxShotDelay), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FConfigurationDataStruct_Statics::NewProp_EasyBearMaxShotDelay_MetaData), Z_Construct_UScriptStruct_FConfigurationDataStruct_Statics::NewProp_EasyBearMaxShotDelay_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FConfigurationDataStruct_Statics::NewProp_EasyBearHomingDelay_MetaData[] = {
		{ "Category", "Configuration Data Struct" },
		{ "ModuleRelativePath", "ConfigurationDataStruct.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FConfigurationDataStruct_Statics::NewProp_EasyBearHomingDelay = { "EasyBearHomingDelay", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FConfigurationDataStruct, EasyBearHomingDelay), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FConfigurationDataStruct_Statics::NewProp_EasyBearHomingDelay_MetaData), Z_Construct_UScriptStruct_FConfigurationDataStruct_Statics::NewProp_EasyBearHomingDelay_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FConfigurationDataStruct_Statics::NewProp_EasyBearProjectileHomingDelay_MetaData[] = {
		{ "Category", "Configuration Data Struct" },
		{ "ModuleRelativePath", "ConfigurationDataStruct.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FConfigurationDataStruct_Statics::NewProp_EasyBearProjectileHomingDelay = { "EasyBearProjectileHomingDelay", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FConfigurationDataStruct, EasyBearProjectileHomingDelay), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FConfigurationDataStruct_Statics::NewProp_EasyBearProjectileHomingDelay_MetaData), Z_Construct_UScriptStruct_FConfigurationDataStruct_Statics::NewProp_EasyBearProjectileHomingDelay_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FConfigurationDataStruct_Statics::NewProp_MediumMinSpawnDelay_MetaData[] = {
		{ "Category", "Configuration Data Struct" },
		{ "ModuleRelativePath", "ConfigurationDataStruct.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FConfigurationDataStruct_Statics::NewProp_MediumMinSpawnDelay = { "MediumMinSpawnDelay", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FConfigurationDataStruct, MediumMinSpawnDelay), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FConfigurationDataStruct_Statics::NewProp_MediumMinSpawnDelay_MetaData), Z_Construct_UScriptStruct_FConfigurationDataStruct_Statics::NewProp_MediumMinSpawnDelay_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FConfigurationDataStruct_Statics::NewProp_MediumMaxSpawnDelay_MetaData[] = {
		{ "Category", "Configuration Data Struct" },
		{ "ModuleRelativePath", "ConfigurationDataStruct.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FConfigurationDataStruct_Statics::NewProp_MediumMaxSpawnDelay = { "MediumMaxSpawnDelay", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FConfigurationDataStruct, MediumMaxSpawnDelay), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FConfigurationDataStruct_Statics::NewProp_MediumMaxSpawnDelay_MetaData), Z_Construct_UScriptStruct_FConfigurationDataStruct_Statics::NewProp_MediumMaxSpawnDelay_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FConfigurationDataStruct_Statics::NewProp_MediumMinBearImpulseForce_MetaData[] = {
		{ "Category", "Configuration Data Struct" },
		{ "ModuleRelativePath", "ConfigurationDataStruct.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FConfigurationDataStruct_Statics::NewProp_MediumMinBearImpulseForce = { "MediumMinBearImpulseForce", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FConfigurationDataStruct, MediumMinBearImpulseForce), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FConfigurationDataStruct_Statics::NewProp_MediumMinBearImpulseForce_MetaData), Z_Construct_UScriptStruct_FConfigurationDataStruct_Statics::NewProp_MediumMinBearImpulseForce_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FConfigurationDataStruct_Statics::NewProp_MediumMaxBearImpulseForce_MetaData[] = {
		{ "Category", "Configuration Data Struct" },
		{ "ModuleRelativePath", "ConfigurationDataStruct.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FConfigurationDataStruct_Statics::NewProp_MediumMaxBearImpulseForce = { "MediumMaxBearImpulseForce", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FConfigurationDataStruct, MediumMaxBearImpulseForce), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FConfigurationDataStruct_Statics::NewProp_MediumMaxBearImpulseForce_MetaData), Z_Construct_UScriptStruct_FConfigurationDataStruct_Statics::NewProp_MediumMaxBearImpulseForce_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FConfigurationDataStruct_Statics::NewProp_MediumMaxNumBears_MetaData[] = {
		{ "Category", "Configuration Data Struct" },
		{ "ModuleRelativePath", "ConfigurationDataStruct.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FConfigurationDataStruct_Statics::NewProp_MediumMaxNumBears = { "MediumMaxNumBears", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FConfigurationDataStruct, MediumMaxNumBears), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FConfigurationDataStruct_Statics::NewProp_MediumMaxNumBears_MetaData), Z_Construct_UScriptStruct_FConfigurationDataStruct_Statics::NewProp_MediumMaxNumBears_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FConfigurationDataStruct_Statics::NewProp_MediumBearMinShotDelay_MetaData[] = {
		{ "Category", "Configuration Data Struct" },
		{ "ModuleRelativePath", "ConfigurationDataStruct.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FConfigurationDataStruct_Statics::NewProp_MediumBearMinShotDelay = { "MediumBearMinShotDelay", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FConfigurationDataStruct, MediumBearMinShotDelay), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FConfigurationDataStruct_Statics::NewProp_MediumBearMinShotDelay_MetaData), Z_Construct_UScriptStruct_FConfigurationDataStruct_Statics::NewProp_MediumBearMinShotDelay_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FConfigurationDataStruct_Statics::NewProp_MediumBearMaxShotDelay_MetaData[] = {
		{ "Category", "Configuration Data Struct" },
		{ "ModuleRelativePath", "ConfigurationDataStruct.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FConfigurationDataStruct_Statics::NewProp_MediumBearMaxShotDelay = { "MediumBearMaxShotDelay", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FConfigurationDataStruct, MediumBearMaxShotDelay), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FConfigurationDataStruct_Statics::NewProp_MediumBearMaxShotDelay_MetaData), Z_Construct_UScriptStruct_FConfigurationDataStruct_Statics::NewProp_MediumBearMaxShotDelay_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FConfigurationDataStruct_Statics::NewProp_MediumBearHomingDelay_MetaData[] = {
		{ "Category", "Configuration Data Struct" },
		{ "ModuleRelativePath", "ConfigurationDataStruct.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FConfigurationDataStruct_Statics::NewProp_MediumBearHomingDelay = { "MediumBearHomingDelay", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FConfigurationDataStruct, MediumBearHomingDelay), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FConfigurationDataStruct_Statics::NewProp_MediumBearHomingDelay_MetaData), Z_Construct_UScriptStruct_FConfigurationDataStruct_Statics::NewProp_MediumBearHomingDelay_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FConfigurationDataStruct_Statics::NewProp_MediumBearProjectileHomingDelay_MetaData[] = {
		{ "Category", "Configuration Data Struct" },
		{ "ModuleRelativePath", "ConfigurationDataStruct.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FConfigurationDataStruct_Statics::NewProp_MediumBearProjectileHomingDelay = { "MediumBearProjectileHomingDelay", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FConfigurationDataStruct, MediumBearProjectileHomingDelay), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FConfigurationDataStruct_Statics::NewProp_MediumBearProjectileHomingDelay_MetaData), Z_Construct_UScriptStruct_FConfigurationDataStruct_Statics::NewProp_MediumBearProjectileHomingDelay_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FConfigurationDataStruct_Statics::NewProp_HardMinSpawnDelay_MetaData[] = {
		{ "Category", "Configuration Data Struct" },
		{ "ModuleRelativePath", "ConfigurationDataStruct.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FConfigurationDataStruct_Statics::NewProp_HardMinSpawnDelay = { "HardMinSpawnDelay", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FConfigurationDataStruct, HardMinSpawnDelay), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FConfigurationDataStruct_Statics::NewProp_HardMinSpawnDelay_MetaData), Z_Construct_UScriptStruct_FConfigurationDataStruct_Statics::NewProp_HardMinSpawnDelay_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FConfigurationDataStruct_Statics::NewProp_HardMaxSpawnDelay_MetaData[] = {
		{ "Category", "Configuration Data Struct" },
		{ "ModuleRelativePath", "ConfigurationDataStruct.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FConfigurationDataStruct_Statics::NewProp_HardMaxSpawnDelay = { "HardMaxSpawnDelay", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FConfigurationDataStruct, HardMaxSpawnDelay), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FConfigurationDataStruct_Statics::NewProp_HardMaxSpawnDelay_MetaData), Z_Construct_UScriptStruct_FConfigurationDataStruct_Statics::NewProp_HardMaxSpawnDelay_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FConfigurationDataStruct_Statics::NewProp_HardMinBearImpulseForce_MetaData[] = {
		{ "Category", "Configuration Data Struct" },
		{ "ModuleRelativePath", "ConfigurationDataStruct.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FConfigurationDataStruct_Statics::NewProp_HardMinBearImpulseForce = { "HardMinBearImpulseForce", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FConfigurationDataStruct, HardMinBearImpulseForce), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FConfigurationDataStruct_Statics::NewProp_HardMinBearImpulseForce_MetaData), Z_Construct_UScriptStruct_FConfigurationDataStruct_Statics::NewProp_HardMinBearImpulseForce_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FConfigurationDataStruct_Statics::NewProp_HardMaxBearImpulseForce_MetaData[] = {
		{ "Category", "Configuration Data Struct" },
		{ "ModuleRelativePath", "ConfigurationDataStruct.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FConfigurationDataStruct_Statics::NewProp_HardMaxBearImpulseForce = { "HardMaxBearImpulseForce", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FConfigurationDataStruct, HardMaxBearImpulseForce), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FConfigurationDataStruct_Statics::NewProp_HardMaxBearImpulseForce_MetaData), Z_Construct_UScriptStruct_FConfigurationDataStruct_Statics::NewProp_HardMaxBearImpulseForce_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FConfigurationDataStruct_Statics::NewProp_HardMaxNumBears_MetaData[] = {
		{ "Category", "Configuration Data Struct" },
		{ "ModuleRelativePath", "ConfigurationDataStruct.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FConfigurationDataStruct_Statics::NewProp_HardMaxNumBears = { "HardMaxNumBears", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FConfigurationDataStruct, HardMaxNumBears), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FConfigurationDataStruct_Statics::NewProp_HardMaxNumBears_MetaData), Z_Construct_UScriptStruct_FConfigurationDataStruct_Statics::NewProp_HardMaxNumBears_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FConfigurationDataStruct_Statics::NewProp_HardBearMinShotDelay_MetaData[] = {
		{ "Category", "Configuration Data Struct" },
		{ "ModuleRelativePath", "ConfigurationDataStruct.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FConfigurationDataStruct_Statics::NewProp_HardBearMinShotDelay = { "HardBearMinShotDelay", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FConfigurationDataStruct, HardBearMinShotDelay), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FConfigurationDataStruct_Statics::NewProp_HardBearMinShotDelay_MetaData), Z_Construct_UScriptStruct_FConfigurationDataStruct_Statics::NewProp_HardBearMinShotDelay_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FConfigurationDataStruct_Statics::NewProp_HardBearMaxShotDelay_MetaData[] = {
		{ "Category", "Configuration Data Struct" },
		{ "ModuleRelativePath", "ConfigurationDataStruct.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FConfigurationDataStruct_Statics::NewProp_HardBearMaxShotDelay = { "HardBearMaxShotDelay", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FConfigurationDataStruct, HardBearMaxShotDelay), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FConfigurationDataStruct_Statics::NewProp_HardBearMaxShotDelay_MetaData), Z_Construct_UScriptStruct_FConfigurationDataStruct_Statics::NewProp_HardBearMaxShotDelay_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FConfigurationDataStruct_Statics::NewProp_HardBearHomingDelay_MetaData[] = {
		{ "Category", "Configuration Data Struct" },
		{ "ModuleRelativePath", "ConfigurationDataStruct.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FConfigurationDataStruct_Statics::NewProp_HardBearHomingDelay = { "HardBearHomingDelay", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FConfigurationDataStruct, HardBearHomingDelay), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FConfigurationDataStruct_Statics::NewProp_HardBearHomingDelay_MetaData), Z_Construct_UScriptStruct_FConfigurationDataStruct_Statics::NewProp_HardBearHomingDelay_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FConfigurationDataStruct_Statics::NewProp_HardBearProjectileHomingDelay_MetaData[] = {
		{ "Category", "Configuration Data Struct" },
		{ "ModuleRelativePath", "ConfigurationDataStruct.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FConfigurationDataStruct_Statics::NewProp_HardBearProjectileHomingDelay = { "HardBearProjectileHomingDelay", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FConfigurationDataStruct, HardBearProjectileHomingDelay), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FConfigurationDataStruct_Statics::NewProp_HardBearProjectileHomingDelay_MetaData), Z_Construct_UScriptStruct_FConfigurationDataStruct_Statics::NewProp_HardBearProjectileHomingDelay_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FConfigurationDataStruct_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FConfigurationDataStruct_Statics::NewProp_TotalGameSeconds,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FConfigurationDataStruct_Statics::NewProp_BurgerMoveAmountPerSecond,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FConfigurationDataStruct_Statics::NewProp_BearDamage,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FConfigurationDataStruct_Statics::NewProp_BearProjectileDamage,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FConfigurationDataStruct_Statics::NewProp_BearPoints,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FConfigurationDataStruct_Statics::NewProp_FriesImpulseForce,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FConfigurationDataStruct_Statics::NewProp_BearProjectileImpulseForce,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FConfigurationDataStruct_Statics::NewProp_EasyMinSpawnDelay,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FConfigurationDataStruct_Statics::NewProp_EasyMaxSpawnDelay,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FConfigurationDataStruct_Statics::NewProp_EasyMinBearImpulseForce,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FConfigurationDataStruct_Statics::NewProp_EasyMaxBearImpulseForce,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FConfigurationDataStruct_Statics::NewProp_EasyMaxNumBears,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FConfigurationDataStruct_Statics::NewProp_EasyBearMinShotDelay,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FConfigurationDataStruct_Statics::NewProp_EasyBearMaxShotDelay,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FConfigurationDataStruct_Statics::NewProp_EasyBearHomingDelay,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FConfigurationDataStruct_Statics::NewProp_EasyBearProjectileHomingDelay,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FConfigurationDataStruct_Statics::NewProp_MediumMinSpawnDelay,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FConfigurationDataStruct_Statics::NewProp_MediumMaxSpawnDelay,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FConfigurationDataStruct_Statics::NewProp_MediumMinBearImpulseForce,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FConfigurationDataStruct_Statics::NewProp_MediumMaxBearImpulseForce,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FConfigurationDataStruct_Statics::NewProp_MediumMaxNumBears,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FConfigurationDataStruct_Statics::NewProp_MediumBearMinShotDelay,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FConfigurationDataStruct_Statics::NewProp_MediumBearMaxShotDelay,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FConfigurationDataStruct_Statics::NewProp_MediumBearHomingDelay,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FConfigurationDataStruct_Statics::NewProp_MediumBearProjectileHomingDelay,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FConfigurationDataStruct_Statics::NewProp_HardMinSpawnDelay,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FConfigurationDataStruct_Statics::NewProp_HardMaxSpawnDelay,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FConfigurationDataStruct_Statics::NewProp_HardMinBearImpulseForce,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FConfigurationDataStruct_Statics::NewProp_HardMaxBearImpulseForce,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FConfigurationDataStruct_Statics::NewProp_HardMaxNumBears,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FConfigurationDataStruct_Statics::NewProp_HardBearMinShotDelay,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FConfigurationDataStruct_Statics::NewProp_HardBearMaxShotDelay,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FConfigurationDataStruct_Statics::NewProp_HardBearHomingDelay,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FConfigurationDataStruct_Statics::NewProp_HardBearProjectileHomingDelay,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FConfigurationDataStruct_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_FeedTheTeddies,
		Z_Construct_UScriptStruct_FTableRowBase,
		&NewStructOps,
		"ConfigurationDataStruct",
		Z_Construct_UScriptStruct_FConfigurationDataStruct_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FConfigurationDataStruct_Statics::PropPointers),
		sizeof(FConfigurationDataStruct),
		alignof(FConfigurationDataStruct),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FConfigurationDataStruct_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FConfigurationDataStruct_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FConfigurationDataStruct_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FConfigurationDataStruct()
	{
		if (!Z_Registration_Info_UScriptStruct_ConfigurationDataStruct.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ConfigurationDataStruct.InnerSingleton, Z_Construct_UScriptStruct_FConfigurationDataStruct_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_ConfigurationDataStruct.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_NoSynch_UnrealCppCourse_Course4_Course4Week4Example_FullMiniGame_FeedTheTeddies_Source_FeedTheTeddies_ConfigurationDataStruct_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_NoSynch_UnrealCppCourse_Course4_Course4Week4Example_FullMiniGame_FeedTheTeddies_Source_FeedTheTeddies_ConfigurationDataStruct_h_Statics::ScriptStructInfo[] = {
		{ FConfigurationDataStruct::StaticStruct, Z_Construct_UScriptStruct_FConfigurationDataStruct_Statics::NewStructOps, TEXT("ConfigurationDataStruct"), &Z_Registration_Info_UScriptStruct_ConfigurationDataStruct, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FConfigurationDataStruct), 411164757U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_NoSynch_UnrealCppCourse_Course4_Course4Week4Example_FullMiniGame_FeedTheTeddies_Source_FeedTheTeddies_ConfigurationDataStruct_h_702148474(TEXT("/Script/FeedTheTeddies"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_NoSynch_UnrealCppCourse_Course4_Course4Week4Example_FullMiniGame_FeedTheTeddies_Source_FeedTheTeddies_ConfigurationDataStruct_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_NoSynch_UnrealCppCourse_Course4_Course4Week4Example_FullMiniGame_FeedTheTeddies_Source_FeedTheTeddies_ConfigurationDataStruct_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
