// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FeedTheTeddies/BurgerPawn.h"
#include "../../Source/Runtime/Engine/Classes/Engine/HitResult.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBurgerPawn() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_APawn();
	ENGINE_API UClass* Z_Construct_UClass_UPrimitiveComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USoundCue_NoRegister();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_EEndPlayReason();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FHitResult();
	FEEDTHETEDDIES_API UClass* Z_Construct_UClass_ABurgerPawn();
	FEEDTHETEDDIES_API UClass* Z_Construct_UClass_ABurgerPawn_NoRegister();
	FEEDTHETEDDIES_API UClass* Z_Construct_UClass_AFriesActor_NoRegister();
	UPackage* Z_Construct_UPackage__Script_FeedTheTeddies();
// End Cross Module References
	DEFINE_FUNCTION(ABurgerPawn::execEndPlay)
	{
		P_GET_PROPERTY(FByteProperty,Z_Param_EndPlayReason);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->EndPlay(EEndPlayReason::Type(Z_Param_EndPlayReason));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ABurgerPawn::execOnOverlapBegin)
	{
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OverlappedComp);
		P_GET_OBJECT(AActor,Z_Param_OtherActor);
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp);
		P_GET_PROPERTY(FIntProperty,Z_Param_OtherBodyIndex);
		P_GET_UBOOL(Z_Param_bFromSweep);
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_SweepResult);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnOverlapBegin(Z_Param_OverlappedComp,Z_Param_OtherActor,Z_Param_OtherComp,Z_Param_OtherBodyIndex,Z_Param_bFromSweep,Z_Param_Out_SweepResult);
		P_NATIVE_END;
	}
	void ABurgerPawn::StaticRegisterNativesABurgerPawn()
	{
		UClass* Class = ABurgerPawn::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "EndPlay", &ABurgerPawn::execEndPlay },
			{ "OnOverlapBegin", &ABurgerPawn::execOnOverlapBegin },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ABurgerPawn_EndPlay_Statics
	{
		struct BurgerPawn_eventEndPlay_Parms
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
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ABurgerPawn_EndPlay_Statics::NewProp_EndPlayReason_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_ABurgerPawn_EndPlay_Statics::NewProp_EndPlayReason = { "EndPlayReason", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BurgerPawn_eventEndPlay_Parms, EndPlayReason), Z_Construct_UEnum_Engine_EEndPlayReason, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ABurgerPawn_EndPlay_Statics::NewProp_EndPlayReason_MetaData), Z_Construct_UFunction_ABurgerPawn_EndPlay_Statics::NewProp_EndPlayReason_MetaData) }; // 930452524
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ABurgerPawn_EndPlay_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABurgerPawn_EndPlay_Statics::NewProp_EndPlayReason,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ABurgerPawn_EndPlay_Statics::Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Called when actor is being removed from level\n\x09 * @param EndPlayReason why the actor is being removed\n\x09*/" },
#endif
		{ "ModuleRelativePath", "BurgerPawn.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Called when actor is being removed from level\n@param EndPlayReason why the actor is being removed" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ABurgerPawn_EndPlay_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ABurgerPawn, nullptr, "EndPlay", nullptr, nullptr, Z_Construct_UFunction_ABurgerPawn_EndPlay_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ABurgerPawn_EndPlay_Statics::PropPointers), sizeof(Z_Construct_UFunction_ABurgerPawn_EndPlay_Statics::BurgerPawn_eventEndPlay_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ABurgerPawn_EndPlay_Statics::Function_MetaDataParams), Z_Construct_UFunction_ABurgerPawn_EndPlay_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ABurgerPawn_EndPlay_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_ABurgerPawn_EndPlay_Statics::BurgerPawn_eventEndPlay_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_ABurgerPawn_EndPlay()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ABurgerPawn_EndPlay_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ABurgerPawn_OnOverlapBegin_Statics
	{
		struct BurgerPawn_eventOnOverlapBegin_Parms
		{
			UPrimitiveComponent* OverlappedComp;
			AActor* OtherActor;
			UPrimitiveComponent* OtherComp;
			int32 OtherBodyIndex;
			bool bFromSweep;
			FHitResult SweepResult;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OverlappedComp_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_OverlappedComp;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_OtherActor;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OtherComp_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_OtherComp;
		static const UECodeGen_Private::FIntPropertyParams NewProp_OtherBodyIndex;
		static void NewProp_bFromSweep_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bFromSweep;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SweepResult_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_SweepResult;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ABurgerPawn_OnOverlapBegin_Statics::NewProp_OverlappedComp_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ABurgerPawn_OnOverlapBegin_Statics::NewProp_OverlappedComp = { "OverlappedComp", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BurgerPawn_eventOnOverlapBegin_Parms, OverlappedComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ABurgerPawn_OnOverlapBegin_Statics::NewProp_OverlappedComp_MetaData), Z_Construct_UFunction_ABurgerPawn_OnOverlapBegin_Statics::NewProp_OverlappedComp_MetaData) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ABurgerPawn_OnOverlapBegin_Statics::NewProp_OtherActor = { "OtherActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BurgerPawn_eventOnOverlapBegin_Parms, OtherActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ABurgerPawn_OnOverlapBegin_Statics::NewProp_OtherComp_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ABurgerPawn_OnOverlapBegin_Statics::NewProp_OtherComp = { "OtherComp", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BurgerPawn_eventOnOverlapBegin_Parms, OtherComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ABurgerPawn_OnOverlapBegin_Statics::NewProp_OtherComp_MetaData), Z_Construct_UFunction_ABurgerPawn_OnOverlapBegin_Statics::NewProp_OtherComp_MetaData) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ABurgerPawn_OnOverlapBegin_Statics::NewProp_OtherBodyIndex = { "OtherBodyIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BurgerPawn_eventOnOverlapBegin_Parms, OtherBodyIndex), METADATA_PARAMS(0, nullptr) };
	void Z_Construct_UFunction_ABurgerPawn_OnOverlapBegin_Statics::NewProp_bFromSweep_SetBit(void* Obj)
	{
		((BurgerPawn_eventOnOverlapBegin_Parms*)Obj)->bFromSweep = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ABurgerPawn_OnOverlapBegin_Statics::NewProp_bFromSweep = { "bFromSweep", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(BurgerPawn_eventOnOverlapBegin_Parms), &Z_Construct_UFunction_ABurgerPawn_OnOverlapBegin_Statics::NewProp_bFromSweep_SetBit, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ABurgerPawn_OnOverlapBegin_Statics::NewProp_SweepResult_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ABurgerPawn_OnOverlapBegin_Statics::NewProp_SweepResult = { "SweepResult", nullptr, (EPropertyFlags)0x0010008008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BurgerPawn_eventOnOverlapBegin_Parms, SweepResult), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ABurgerPawn_OnOverlapBegin_Statics::NewProp_SweepResult_MetaData), Z_Construct_UFunction_ABurgerPawn_OnOverlapBegin_Statics::NewProp_SweepResult_MetaData) }; // 1891709922
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ABurgerPawn_OnOverlapBegin_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABurgerPawn_OnOverlapBegin_Statics::NewProp_OverlappedComp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABurgerPawn_OnOverlapBegin_Statics::NewProp_OtherActor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABurgerPawn_OnOverlapBegin_Statics::NewProp_OtherComp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABurgerPawn_OnOverlapBegin_Statics::NewProp_OtherBodyIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABurgerPawn_OnOverlapBegin_Statics::NewProp_bFromSweep,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABurgerPawn_OnOverlapBegin_Statics::NewProp_SweepResult,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ABurgerPawn_OnOverlapBegin_Statics::Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Called when the burger overlaps with something else\n\x09*/" },
#endif
		{ "ModuleRelativePath", "BurgerPawn.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Called when the burger overlaps with something else" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ABurgerPawn_OnOverlapBegin_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ABurgerPawn, nullptr, "OnOverlapBegin", nullptr, nullptr, Z_Construct_UFunction_ABurgerPawn_OnOverlapBegin_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ABurgerPawn_OnOverlapBegin_Statics::PropPointers), sizeof(Z_Construct_UFunction_ABurgerPawn_OnOverlapBegin_Statics::BurgerPawn_eventOnOverlapBegin_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ABurgerPawn_OnOverlapBegin_Statics::Function_MetaDataParams), Z_Construct_UFunction_ABurgerPawn_OnOverlapBegin_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ABurgerPawn_OnOverlapBegin_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_ABurgerPawn_OnOverlapBegin_Statics::BurgerPawn_eventOnOverlapBegin_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_ABurgerPawn_OnOverlapBegin()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ABurgerPawn_OnOverlapBegin_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ABurgerPawn);
	UClass* Z_Construct_UClass_ABurgerPawn_NoRegister()
	{
		return ABurgerPawn::StaticClass();
	}
	struct Z_Construct_UClass_ABurgerPawn_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_UFries_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_UFries;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BurgerDamageCue_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_BurgerDamageCue;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BurgerDeathCue_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_BurgerDeathCue;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BurgerShotCue_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_BurgerShotCue;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_HealthPercent_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_HealthPercent;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ABurgerPawn_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_APawn,
		(UObject* (*)())Z_Construct_UPackage__Script_FeedTheTeddies,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ABurgerPawn_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_ABurgerPawn_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ABurgerPawn_EndPlay, "EndPlay" }, // 2311736981
		{ &Z_Construct_UFunction_ABurgerPawn_OnOverlapBegin, "OnOverlapBegin" }, // 3474762318
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ABurgerPawn_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABurgerPawn_Statics::Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * A burger pawn\n*/" },
#endif
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "BurgerPawn.h" },
		{ "ModuleRelativePath", "BurgerPawn.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "A burger pawn" },
#endif
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABurgerPawn_Statics::NewProp_UFries_MetaData[] = {
		{ "Category", "FriesBlueprints" },
		{ "MetaClass", "Fries" },
		{ "ModuleRelativePath", "BurgerPawn.h" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_ABurgerPawn_Statics::NewProp_UFries = { "UFries", nullptr, (EPropertyFlags)0x0014000000000001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABurgerPawn, UFries), Z_Construct_UClass_UClass, Z_Construct_UClass_AFriesActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ABurgerPawn_Statics::NewProp_UFries_MetaData), Z_Construct_UClass_ABurgerPawn_Statics::NewProp_UFries_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABurgerPawn_Statics::NewProp_BurgerDamageCue_MetaData[] = {
		{ "Category", "Sound" },
		{ "ModuleRelativePath", "BurgerPawn.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABurgerPawn_Statics::NewProp_BurgerDamageCue = { "BurgerDamageCue", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABurgerPawn, BurgerDamageCue), Z_Construct_UClass_USoundCue_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ABurgerPawn_Statics::NewProp_BurgerDamageCue_MetaData), Z_Construct_UClass_ABurgerPawn_Statics::NewProp_BurgerDamageCue_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABurgerPawn_Statics::NewProp_BurgerDeathCue_MetaData[] = {
		{ "Category", "Sound" },
		{ "ModuleRelativePath", "BurgerPawn.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABurgerPawn_Statics::NewProp_BurgerDeathCue = { "BurgerDeathCue", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABurgerPawn, BurgerDeathCue), Z_Construct_UClass_USoundCue_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ABurgerPawn_Statics::NewProp_BurgerDeathCue_MetaData), Z_Construct_UClass_ABurgerPawn_Statics::NewProp_BurgerDeathCue_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABurgerPawn_Statics::NewProp_BurgerShotCue_MetaData[] = {
		{ "Category", "Sound" },
		{ "ModuleRelativePath", "BurgerPawn.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABurgerPawn_Statics::NewProp_BurgerShotCue = { "BurgerShotCue", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABurgerPawn, BurgerShotCue), Z_Construct_UClass_USoundCue_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ABurgerPawn_Statics::NewProp_BurgerShotCue_MetaData), Z_Construct_UClass_ABurgerPawn_Statics::NewProp_BurgerShotCue_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABurgerPawn_Statics::NewProp_HealthPercent_MetaData[] = {
		{ "Category", "Health" },
		{ "ModuleRelativePath", "BurgerPawn.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ABurgerPawn_Statics::NewProp_HealthPercent = { "HealthPercent", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABurgerPawn, HealthPercent), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ABurgerPawn_Statics::NewProp_HealthPercent_MetaData), Z_Construct_UClass_ABurgerPawn_Statics::NewProp_HealthPercent_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ABurgerPawn_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABurgerPawn_Statics::NewProp_UFries,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABurgerPawn_Statics::NewProp_BurgerDamageCue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABurgerPawn_Statics::NewProp_BurgerDeathCue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABurgerPawn_Statics::NewProp_BurgerShotCue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABurgerPawn_Statics::NewProp_HealthPercent,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ABurgerPawn_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ABurgerPawn>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ABurgerPawn_Statics::ClassParams = {
		&ABurgerPawn::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ABurgerPawn_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ABurgerPawn_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ABurgerPawn_Statics::Class_MetaDataParams), Z_Construct_UClass_ABurgerPawn_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ABurgerPawn_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_ABurgerPawn()
	{
		if (!Z_Registration_Info_UClass_ABurgerPawn.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ABurgerPawn.OuterSingleton, Z_Construct_UClass_ABurgerPawn_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ABurgerPawn.OuterSingleton;
	}
	template<> FEEDTHETEDDIES_API UClass* StaticClass<ABurgerPawn>()
	{
		return ABurgerPawn::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ABurgerPawn);
	ABurgerPawn::~ABurgerPawn() {}
	struct Z_CompiledInDeferFile_FID_NoSynch_UnrealCppCourse_Course4_Course4Week4Example_FullMiniGame_FeedTheTeddies_Source_FeedTheTeddies_BurgerPawn_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_NoSynch_UnrealCppCourse_Course4_Course4Week4Example_FullMiniGame_FeedTheTeddies_Source_FeedTheTeddies_BurgerPawn_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ABurgerPawn, ABurgerPawn::StaticClass, TEXT("ABurgerPawn"), &Z_Registration_Info_UClass_ABurgerPawn, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ABurgerPawn), 2921886113U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_NoSynch_UnrealCppCourse_Course4_Course4Week4Example_FullMiniGame_FeedTheTeddies_Source_FeedTheTeddies_BurgerPawn_h_198233900(TEXT("/Script/FeedTheTeddies"),
		Z_CompiledInDeferFile_FID_NoSynch_UnrealCppCourse_Course4_Course4Week4Example_FullMiniGame_FeedTheTeddies_Source_FeedTheTeddies_BurgerPawn_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_NoSynch_UnrealCppCourse_Course4_Course4Week4Example_FullMiniGame_FeedTheTeddies_Source_FeedTheTeddies_BurgerPawn_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
