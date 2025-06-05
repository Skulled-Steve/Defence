// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Defence/DefenceGameMode.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeDefenceGameMode() {}

// ********** Begin Cross Module References ********************************************************
DEFENCE_API UClass* Z_Construct_UClass_ADefenceGameMode();
DEFENCE_API UClass* Z_Construct_UClass_ADefenceGameMode_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
UPackage* Z_Construct_UPackage__Script_Defence();
// ********** End Cross Module References **********************************************************

// ********** Begin Class ADefenceGameMode *********************************************************
void ADefenceGameMode::StaticRegisterNativesADefenceGameMode()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_ADefenceGameMode;
UClass* ADefenceGameMode::GetPrivateStaticClass()
{
	using TClass = ADefenceGameMode;
	if (!Z_Registration_Info_UClass_ADefenceGameMode.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("DefenceGameMode"),
			Z_Registration_Info_UClass_ADefenceGameMode.InnerSingleton,
			StaticRegisterNativesADefenceGameMode,
			sizeof(TClass),
			alignof(TClass),
			TClass::StaticClassFlags,
			TClass::StaticClassCastFlags(),
			TClass::StaticConfigName(),
			(UClass::ClassConstructorType)InternalConstructor<TClass>,
			(UClass::ClassVTableHelperCtorCallerType)InternalVTableHelperCtorCaller<TClass>,
			UOBJECT_CPPCLASS_STATICFUNCTIONS_FORCLASS(TClass),
			&TClass::Super::StaticClass,
			&TClass::WithinClass::StaticClass
		);
	}
	return Z_Registration_Info_UClass_ADefenceGameMode.InnerSingleton;
}
UClass* Z_Construct_UClass_ADefenceGameMode_NoRegister()
{
	return ADefenceGameMode::GetPrivateStaticClass();
}
struct Z_Construct_UClass_ADefenceGameMode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "DefenceGameMode.h" },
		{ "ModuleRelativePath", "DefenceGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ADefenceGameMode>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_ADefenceGameMode_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AGameModeBase,
	(UObject* (*)())Z_Construct_UPackage__Script_Defence,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ADefenceGameMode_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ADefenceGameMode_Statics::ClassParams = {
	&ADefenceGameMode::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x008803ACu,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ADefenceGameMode_Statics::Class_MetaDataParams), Z_Construct_UClass_ADefenceGameMode_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ADefenceGameMode()
{
	if (!Z_Registration_Info_UClass_ADefenceGameMode.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ADefenceGameMode.OuterSingleton, Z_Construct_UClass_ADefenceGameMode_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ADefenceGameMode.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ADefenceGameMode);
ADefenceGameMode::~ADefenceGameMode() {}
// ********** End Class ADefenceGameMode ***********************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Unreal_Projects_Defence_Source_Defence_DefenceGameMode_h__Script_Defence_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ADefenceGameMode, ADefenceGameMode::StaticClass, TEXT("ADefenceGameMode"), &Z_Registration_Info_UClass_ADefenceGameMode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ADefenceGameMode), 1320423459U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal_Projects_Defence_Source_Defence_DefenceGameMode_h__Script_Defence_1560117719(TEXT("/Script/Defence"),
	Z_CompiledInDeferFile_FID_Unreal_Projects_Defence_Source_Defence_DefenceGameMode_h__Script_Defence_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Unreal_Projects_Defence_Source_Defence_DefenceGameMode_h__Script_Defence_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
