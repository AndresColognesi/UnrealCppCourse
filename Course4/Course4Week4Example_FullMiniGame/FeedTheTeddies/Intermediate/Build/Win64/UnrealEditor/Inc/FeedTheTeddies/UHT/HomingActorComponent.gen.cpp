// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FeedTheTeddies/HomingActorComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeHomingActorComponent() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	FEEDTHETEDDIES_API UClass* Z_Construct_UClass_UHomingActorComponent();
	FEEDTHETEDDIES_API UClass* Z_Construct_UClass_UHomingActorComponent_NoRegister();
	UPackage* Z_Construct_UPackage__Script_FeedTheTeddies();
// End Cross Module References
	void UHomingActorComponent::StaticRegisterNativesUHomingActorComponent()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UHomingActorComponent);
	UClass* Z_Construct_UClass_UHomingActorComponent_NoRegister()
	{
		return UHomingActorComponent::StaticClass();
	}
	struct Z_Construct_UClass_UHomingActorComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UHomingActorComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_FeedTheTeddies,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UHomingActorComponent_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHomingActorComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * Gives the actor the component is attached to homing behavior\n * toward the burger\n*/" },
#endif
		{ "IncludePath", "HomingActorComponent.h" },
		{ "ModuleRelativePath", "HomingActorComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Gives the actor the component is attached to homing behavior\ntoward the burger" },
#endif
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UHomingActorComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UHomingActorComponent>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UHomingActorComponent_Statics::ClassParams = {
		&UHomingActorComponent::StaticClass,
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
		0x00B000A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UHomingActorComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_UHomingActorComponent_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_UHomingActorComponent()
	{
		if (!Z_Registration_Info_UClass_UHomingActorComponent.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UHomingActorComponent.OuterSingleton, Z_Construct_UClass_UHomingActorComponent_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UHomingActorComponent.OuterSingleton;
	}
	template<> FEEDTHETEDDIES_API UClass* StaticClass<UHomingActorComponent>()
	{
		return UHomingActorComponent::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UHomingActorComponent);
	UHomingActorComponent::~UHomingActorComponent() {}
	struct Z_CompiledInDeferFile_FID_NoSynch_UnrealCppCourse_Course4_Course4Week4Example_FullMiniGame_FeedTheTeddies_Source_FeedTheTeddies_HomingActorComponent_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_NoSynch_UnrealCppCourse_Course4_Course4Week4Example_FullMiniGame_FeedTheTeddies_Source_FeedTheTeddies_HomingActorComponent_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UHomingActorComponent, UHomingActorComponent::StaticClass, TEXT("UHomingActorComponent"), &Z_Registration_Info_UClass_UHomingActorComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UHomingActorComponent), 1151794435U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_NoSynch_UnrealCppCourse_Course4_Course4Week4Example_FullMiniGame_FeedTheTeddies_Source_FeedTheTeddies_HomingActorComponent_h_1056987572(TEXT("/Script/FeedTheTeddies"),
		Z_CompiledInDeferFile_FID_NoSynch_UnrealCppCourse_Course4_Course4Week4Example_FullMiniGame_FeedTheTeddies_Source_FeedTheTeddies_HomingActorComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_NoSynch_UnrealCppCourse_Course4_Course4Week4Example_FullMiniGame_FeedTheTeddies_Source_FeedTheTeddies_HomingActorComponent_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
