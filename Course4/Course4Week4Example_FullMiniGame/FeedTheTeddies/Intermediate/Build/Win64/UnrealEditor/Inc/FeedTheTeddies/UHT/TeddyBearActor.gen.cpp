// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FeedTheTeddies/TeddyBearActor.h"
#include "../../Source/Runtime/Engine/Classes/Engine/HitResult.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTeddyBearActor() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UPrimitiveComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USoundCue_NoRegister();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FHitResult();
	FEEDTHETEDDIES_API UClass* Z_Construct_UClass_ATeddyBearActor();
	FEEDTHETEDDIES_API UClass* Z_Construct_UClass_ATeddyBearActor_NoRegister();
	FEEDTHETEDDIES_API UClass* Z_Construct_UClass_ATeddyBearProjectileActor_NoRegister();
	FEEDTHETEDDIES_API UClass* Z_Construct_UClass_UHomingActorInterface_NoRegister();
	UPackage* Z_Construct_UPackage__Script_FeedTheTeddies();
// End Cross Module References
	DEFINE_FUNCTION(ATeddyBearActor::execOnOverlapBegin)
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
	DEFINE_FUNCTION(ATeddyBearActor::execShootProjectile)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ShootProjectile();
		P_NATIVE_END;
	}
	void ATeddyBearActor::StaticRegisterNativesATeddyBearActor()
	{
		UClass* Class = ATeddyBearActor::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OnOverlapBegin", &ATeddyBearActor::execOnOverlapBegin },
			{ "ShootProjectile", &ATeddyBearActor::execShootProjectile },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ATeddyBearActor_OnOverlapBegin_Statics
	{
		struct TeddyBearActor_eventOnOverlapBegin_Parms
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
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATeddyBearActor_OnOverlapBegin_Statics::NewProp_OverlappedComp_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ATeddyBearActor_OnOverlapBegin_Statics::NewProp_OverlappedComp = { "OverlappedComp", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TeddyBearActor_eventOnOverlapBegin_Parms, OverlappedComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ATeddyBearActor_OnOverlapBegin_Statics::NewProp_OverlappedComp_MetaData), Z_Construct_UFunction_ATeddyBearActor_OnOverlapBegin_Statics::NewProp_OverlappedComp_MetaData) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ATeddyBearActor_OnOverlapBegin_Statics::NewProp_OtherActor = { "OtherActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TeddyBearActor_eventOnOverlapBegin_Parms, OtherActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATeddyBearActor_OnOverlapBegin_Statics::NewProp_OtherComp_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ATeddyBearActor_OnOverlapBegin_Statics::NewProp_OtherComp = { "OtherComp", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TeddyBearActor_eventOnOverlapBegin_Parms, OtherComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ATeddyBearActor_OnOverlapBegin_Statics::NewProp_OtherComp_MetaData), Z_Construct_UFunction_ATeddyBearActor_OnOverlapBegin_Statics::NewProp_OtherComp_MetaData) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ATeddyBearActor_OnOverlapBegin_Statics::NewProp_OtherBodyIndex = { "OtherBodyIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TeddyBearActor_eventOnOverlapBegin_Parms, OtherBodyIndex), METADATA_PARAMS(0, nullptr) };
	void Z_Construct_UFunction_ATeddyBearActor_OnOverlapBegin_Statics::NewProp_bFromSweep_SetBit(void* Obj)
	{
		((TeddyBearActor_eventOnOverlapBegin_Parms*)Obj)->bFromSweep = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ATeddyBearActor_OnOverlapBegin_Statics::NewProp_bFromSweep = { "bFromSweep", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(TeddyBearActor_eventOnOverlapBegin_Parms), &Z_Construct_UFunction_ATeddyBearActor_OnOverlapBegin_Statics::NewProp_bFromSweep_SetBit, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATeddyBearActor_OnOverlapBegin_Statics::NewProp_SweepResult_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ATeddyBearActor_OnOverlapBegin_Statics::NewProp_SweepResult = { "SweepResult", nullptr, (EPropertyFlags)0x0010008008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TeddyBearActor_eventOnOverlapBegin_Parms, SweepResult), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ATeddyBearActor_OnOverlapBegin_Statics::NewProp_SweepResult_MetaData), Z_Construct_UFunction_ATeddyBearActor_OnOverlapBegin_Statics::NewProp_SweepResult_MetaData) }; // 1891709922
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ATeddyBearActor_OnOverlapBegin_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATeddyBearActor_OnOverlapBegin_Statics::NewProp_OverlappedComp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATeddyBearActor_OnOverlapBegin_Statics::NewProp_OtherActor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATeddyBearActor_OnOverlapBegin_Statics::NewProp_OtherComp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATeddyBearActor_OnOverlapBegin_Statics::NewProp_OtherBodyIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATeddyBearActor_OnOverlapBegin_Statics::NewProp_bFromSweep,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATeddyBearActor_OnOverlapBegin_Statics::NewProp_SweepResult,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATeddyBearActor_OnOverlapBegin_Statics::Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Called when the teddy bear overlaps with something else\n\x09*/" },
#endif
		{ "ModuleRelativePath", "TeddyBearActor.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Called when the teddy bear overlaps with something else" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ATeddyBearActor_OnOverlapBegin_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATeddyBearActor, nullptr, "OnOverlapBegin", nullptr, nullptr, Z_Construct_UFunction_ATeddyBearActor_OnOverlapBegin_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ATeddyBearActor_OnOverlapBegin_Statics::PropPointers), sizeof(Z_Construct_UFunction_ATeddyBearActor_OnOverlapBegin_Statics::TeddyBearActor_eventOnOverlapBegin_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ATeddyBearActor_OnOverlapBegin_Statics::Function_MetaDataParams), Z_Construct_UFunction_ATeddyBearActor_OnOverlapBegin_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ATeddyBearActor_OnOverlapBegin_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_ATeddyBearActor_OnOverlapBegin_Statics::TeddyBearActor_eventOnOverlapBegin_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_ATeddyBearActor_OnOverlapBegin()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ATeddyBearActor_OnOverlapBegin_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ATeddyBearActor_ShootProjectile_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATeddyBearActor_ShootProjectile_Statics::Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Shoots a projectile\n\x09*/" },
#endif
		{ "ModuleRelativePath", "TeddyBearActor.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Shoots a projectile" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ATeddyBearActor_ShootProjectile_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATeddyBearActor, nullptr, "ShootProjectile", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ATeddyBearActor_ShootProjectile_Statics::Function_MetaDataParams), Z_Construct_UFunction_ATeddyBearActor_ShootProjectile_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_ATeddyBearActor_ShootProjectile()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ATeddyBearActor_ShootProjectile_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ATeddyBearActor);
	UClass* Z_Construct_UClass_ATeddyBearActor_NoRegister()
	{
		return ATeddyBearActor::StaticClass();
	}
	struct Z_Construct_UClass_ATeddyBearActor_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_UProjectile_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_UProjectile;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TeddyShotCue_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_TeddyShotCue;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TeddyDeathCue_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_TeddyDeathCue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ATeddyBearActor_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_FeedTheTeddies,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ATeddyBearActor_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_ATeddyBearActor_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ATeddyBearActor_OnOverlapBegin, "OnOverlapBegin" }, // 2562522481
		{ &Z_Construct_UFunction_ATeddyBearActor_ShootProjectile, "ShootProjectile" }, // 2716391173
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ATeddyBearActor_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATeddyBearActor_Statics::Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * A teddy bear\n*/" },
#endif
		{ "IncludePath", "TeddyBearActor.h" },
		{ "ModuleRelativePath", "TeddyBearActor.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "A teddy bear" },
#endif
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATeddyBearActor_Statics::NewProp_UProjectile_MetaData[] = {
		{ "Category", "ProjectileBlueprints" },
		{ "MetaClass", "Projectile" },
		{ "ModuleRelativePath", "TeddyBearActor.h" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_ATeddyBearActor_Statics::NewProp_UProjectile = { "UProjectile", nullptr, (EPropertyFlags)0x0014000000000001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ATeddyBearActor, UProjectile), Z_Construct_UClass_UClass, Z_Construct_UClass_ATeddyBearProjectileActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ATeddyBearActor_Statics::NewProp_UProjectile_MetaData), Z_Construct_UClass_ATeddyBearActor_Statics::NewProp_UProjectile_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATeddyBearActor_Statics::NewProp_TeddyShotCue_MetaData[] = {
		{ "Category", "Sound" },
		{ "ModuleRelativePath", "TeddyBearActor.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATeddyBearActor_Statics::NewProp_TeddyShotCue = { "TeddyShotCue", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ATeddyBearActor, TeddyShotCue), Z_Construct_UClass_USoundCue_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ATeddyBearActor_Statics::NewProp_TeddyShotCue_MetaData), Z_Construct_UClass_ATeddyBearActor_Statics::NewProp_TeddyShotCue_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATeddyBearActor_Statics::NewProp_TeddyDeathCue_MetaData[] = {
		{ "Category", "Sound" },
		{ "ModuleRelativePath", "TeddyBearActor.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATeddyBearActor_Statics::NewProp_TeddyDeathCue = { "TeddyDeathCue", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ATeddyBearActor, TeddyDeathCue), Z_Construct_UClass_USoundCue_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ATeddyBearActor_Statics::NewProp_TeddyDeathCue_MetaData), Z_Construct_UClass_ATeddyBearActor_Statics::NewProp_TeddyDeathCue_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ATeddyBearActor_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATeddyBearActor_Statics::NewProp_UProjectile,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATeddyBearActor_Statics::NewProp_TeddyShotCue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATeddyBearActor_Statics::NewProp_TeddyDeathCue,
	};
		const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_ATeddyBearActor_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UHomingActorInterface_NoRegister, (int32)VTABLE_OFFSET(ATeddyBearActor, IHomingActorInterface), false },  // 988809299
		};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ATeddyBearActor_Statics::InterfaceParams) < 64);
	const FCppClassTypeInfoStatic Z_Construct_UClass_ATeddyBearActor_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ATeddyBearActor>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ATeddyBearActor_Statics::ClassParams = {
		&ATeddyBearActor::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ATeddyBearActor_Statics::PropPointers,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ATeddyBearActor_Statics::PropPointers),
		UE_ARRAY_COUNT(InterfaceParams),
		0x009000A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ATeddyBearActor_Statics::Class_MetaDataParams), Z_Construct_UClass_ATeddyBearActor_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ATeddyBearActor_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_ATeddyBearActor()
	{
		if (!Z_Registration_Info_UClass_ATeddyBearActor.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ATeddyBearActor.OuterSingleton, Z_Construct_UClass_ATeddyBearActor_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ATeddyBearActor.OuterSingleton;
	}
	template<> FEEDTHETEDDIES_API UClass* StaticClass<ATeddyBearActor>()
	{
		return ATeddyBearActor::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ATeddyBearActor);
	ATeddyBearActor::~ATeddyBearActor() {}
	struct Z_CompiledInDeferFile_FID_NoSynch_UnrealCppCourse_Course4_Course4Week4Example_FullMiniGame_FeedTheTeddies_Source_FeedTheTeddies_TeddyBearActor_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_NoSynch_UnrealCppCourse_Course4_Course4Week4Example_FullMiniGame_FeedTheTeddies_Source_FeedTheTeddies_TeddyBearActor_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ATeddyBearActor, ATeddyBearActor::StaticClass, TEXT("ATeddyBearActor"), &Z_Registration_Info_UClass_ATeddyBearActor, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ATeddyBearActor), 473836099U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_NoSynch_UnrealCppCourse_Course4_Course4Week4Example_FullMiniGame_FeedTheTeddies_Source_FeedTheTeddies_TeddyBearActor_h_1983300390(TEXT("/Script/FeedTheTeddies"),
		Z_CompiledInDeferFile_FID_NoSynch_UnrealCppCourse_Course4_Course4Week4Example_FullMiniGame_FeedTheTeddies_Source_FeedTheTeddies_TeddyBearActor_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_NoSynch_UnrealCppCourse_Course4_Course4Week4Example_FullMiniGame_FeedTheTeddies_Source_FeedTheTeddies_TeddyBearActor_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
