// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Defence/DefencePlayerController.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeDefencePlayerController() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2D();
DEFENCE_API UClass* Z_Construct_UClass_ADefencePlayerController();
DEFENCE_API UClass* Z_Construct_UClass_ADefencePlayerController_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_APlayerController();
ENHANCEDINPUT_API UClass* Z_Construct_UClass_UInputAction_NoRegister();
ENHANCEDINPUT_API UClass* Z_Construct_UClass_UInputMappingContext_NoRegister();
NIAGARA_API UClass* Z_Construct_UClass_UNiagaraSystem_NoRegister();
UMG_API UClass* Z_Construct_UClass_UUserWidget_NoRegister();
UPackage* Z_Construct_UPackage__Script_Defence();
// ********** End Cross Module References **********************************************************

// ********** Begin Class ADefencePlayerController Function SelectActorsInBox **********************
struct Z_Construct_UFunction_ADefencePlayerController_SelectActorsInBox_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Selection" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Selects actors within the current selection box (in screen space)\n" },
#endif
		{ "ModuleRelativePath", "DefencePlayerController.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Selects actors within the current selection box (in screen space)" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ADefencePlayerController_SelectActorsInBox_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ADefencePlayerController, nullptr, "SelectActorsInBox", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ADefencePlayerController_SelectActorsInBox_Statics::Function_MetaDataParams), Z_Construct_UFunction_ADefencePlayerController_SelectActorsInBox_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_ADefencePlayerController_SelectActorsInBox()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ADefencePlayerController_SelectActorsInBox_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ADefencePlayerController::execSelectActorsInBox)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SelectActorsInBox();
	P_NATIVE_END;
}
// ********** End Class ADefencePlayerController Function SelectActorsInBox ************************

// ********** Begin Class ADefencePlayerController *************************************************
void ADefencePlayerController::StaticRegisterNativesADefencePlayerController()
{
	UClass* Class = ADefencePlayerController::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "SelectActorsInBox", &ADefencePlayerController::execSelectActorsInBox },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_ADefencePlayerController;
UClass* ADefencePlayerController::GetPrivateStaticClass()
{
	using TClass = ADefencePlayerController;
	if (!Z_Registration_Info_UClass_ADefencePlayerController.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("DefencePlayerController"),
			Z_Registration_Info_UClass_ADefencePlayerController.InnerSingleton,
			StaticRegisterNativesADefencePlayerController,
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
	return Z_Registration_Info_UClass_ADefencePlayerController.InnerSingleton;
}
UClass* Z_Construct_UClass_ADefencePlayerController_NoRegister()
{
	return ADefencePlayerController::GetPrivateStaticClass();
}
struct Z_Construct_UClass_ADefencePlayerController_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Collision Rendering Transformation" },
		{ "IncludePath", "DefencePlayerController.h" },
		{ "ModuleRelativePath", "DefencePlayerController.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FXCursor_MetaData[] = {
		{ "Category", "Input" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Niagara FX for move location (optional)\n" },
#endif
		{ "ModuleRelativePath", "DefencePlayerController.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Niagara FX for move location (optional)" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DefaultMappingContext_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Input" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Enhanced Input\n" },
#endif
		{ "ModuleRelativePath", "DefencePlayerController.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Enhanced Input" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LeftMouseClick_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Input" },
		{ "ModuleRelativePath", "DefencePlayerController.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LeftMouseDrag_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Input" },
		{ "ModuleRelativePath", "DefencePlayerController.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RightMouseClick_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Input" },
		{ "ModuleRelativePath", "DefencePlayerController.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SelectionWidgetClass_MetaData[] = {
		{ "Category", "UI" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// UMG selection widget class\n" },
#endif
		{ "ModuleRelativePath", "DefencePlayerController.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "UMG selection widget class" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SelectionWidget_MetaData[] = {
		{ "Category", "UI" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Runtime instance of selection widget\n" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "DefencePlayerController.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Runtime instance of selection widget" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIsSelecting_MetaData[] = {
		{ "Category", "Selection" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Current drag selection state (for UMG)\n" },
#endif
		{ "ModuleRelativePath", "DefencePlayerController.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Current drag selection state (for UMG)" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SelectionStart_MetaData[] = {
		{ "Category", "Selection" },
		{ "ModuleRelativePath", "DefencePlayerController.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SelectionEnd_MetaData[] = {
		{ "Category", "Selection" },
		{ "ModuleRelativePath", "DefencePlayerController.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SelectedActors_MetaData[] = {
		{ "Category", "Selection" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// The currently selected actors\n" },
#endif
		{ "ModuleRelativePath", "DefencePlayerController.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The currently selected actors" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_FXCursor;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_DefaultMappingContext;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_LeftMouseClick;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_LeftMouseDrag;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_RightMouseClick;
	static const UECodeGen_Private::FClassPropertyParams NewProp_SelectionWidgetClass;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SelectionWidget;
	static void NewProp_bIsSelecting_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsSelecting;
	static const UECodeGen_Private::FStructPropertyParams NewProp_SelectionStart;
	static const UECodeGen_Private::FStructPropertyParams NewProp_SelectionEnd;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SelectedActors_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_SelectedActors;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_ADefencePlayerController_SelectActorsInBox, "SelectActorsInBox" }, // 3591834371
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ADefencePlayerController>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ADefencePlayerController_Statics::NewProp_FXCursor = { "FXCursor", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ADefencePlayerController, FXCursor), Z_Construct_UClass_UNiagaraSystem_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FXCursor_MetaData), NewProp_FXCursor_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ADefencePlayerController_Statics::NewProp_DefaultMappingContext = { "DefaultMappingContext", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ADefencePlayerController, DefaultMappingContext), Z_Construct_UClass_UInputMappingContext_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DefaultMappingContext_MetaData), NewProp_DefaultMappingContext_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ADefencePlayerController_Statics::NewProp_LeftMouseClick = { "LeftMouseClick", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ADefencePlayerController, LeftMouseClick), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LeftMouseClick_MetaData), NewProp_LeftMouseClick_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ADefencePlayerController_Statics::NewProp_LeftMouseDrag = { "LeftMouseDrag", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ADefencePlayerController, LeftMouseDrag), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LeftMouseDrag_MetaData), NewProp_LeftMouseDrag_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ADefencePlayerController_Statics::NewProp_RightMouseClick = { "RightMouseClick", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ADefencePlayerController, RightMouseClick), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RightMouseClick_MetaData), NewProp_RightMouseClick_MetaData) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_ADefencePlayerController_Statics::NewProp_SelectionWidgetClass = { "SelectionWidgetClass", nullptr, (EPropertyFlags)0x0014000000000015, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ADefencePlayerController, SelectionWidgetClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UUserWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SelectionWidgetClass_MetaData), NewProp_SelectionWidgetClass_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ADefencePlayerController_Statics::NewProp_SelectionWidget = { "SelectionWidget", nullptr, (EPropertyFlags)0x001000000008001c, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ADefencePlayerController, SelectionWidget), Z_Construct_UClass_UUserWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SelectionWidget_MetaData), NewProp_SelectionWidget_MetaData) };
void Z_Construct_UClass_ADefencePlayerController_Statics::NewProp_bIsSelecting_SetBit(void* Obj)
{
	((ADefencePlayerController*)Obj)->bIsSelecting = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ADefencePlayerController_Statics::NewProp_bIsSelecting = { "bIsSelecting", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ADefencePlayerController), &Z_Construct_UClass_ADefencePlayerController_Statics::NewProp_bIsSelecting_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIsSelecting_MetaData), NewProp_bIsSelecting_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ADefencePlayerController_Statics::NewProp_SelectionStart = { "SelectionStart", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ADefencePlayerController, SelectionStart), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SelectionStart_MetaData), NewProp_SelectionStart_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ADefencePlayerController_Statics::NewProp_SelectionEnd = { "SelectionEnd", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ADefencePlayerController, SelectionEnd), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SelectionEnd_MetaData), NewProp_SelectionEnd_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ADefencePlayerController_Statics::NewProp_SelectedActors_Inner = { "SelectedActors", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ADefencePlayerController_Statics::NewProp_SelectedActors = { "SelectedActors", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ADefencePlayerController, SelectedActors), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SelectedActors_MetaData), NewProp_SelectedActors_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ADefencePlayerController_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADefencePlayerController_Statics::NewProp_FXCursor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADefencePlayerController_Statics::NewProp_DefaultMappingContext,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADefencePlayerController_Statics::NewProp_LeftMouseClick,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADefencePlayerController_Statics::NewProp_LeftMouseDrag,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADefencePlayerController_Statics::NewProp_RightMouseClick,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADefencePlayerController_Statics::NewProp_SelectionWidgetClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADefencePlayerController_Statics::NewProp_SelectionWidget,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADefencePlayerController_Statics::NewProp_bIsSelecting,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADefencePlayerController_Statics::NewProp_SelectionStart,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADefencePlayerController_Statics::NewProp_SelectionEnd,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADefencePlayerController_Statics::NewProp_SelectedActors_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADefencePlayerController_Statics::NewProp_SelectedActors,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ADefencePlayerController_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_ADefencePlayerController_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_APlayerController,
	(UObject* (*)())Z_Construct_UPackage__Script_Defence,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ADefencePlayerController_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ADefencePlayerController_Statics::ClassParams = {
	&ADefencePlayerController::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_ADefencePlayerController_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_ADefencePlayerController_Statics::PropPointers),
	0,
	0x008003A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ADefencePlayerController_Statics::Class_MetaDataParams), Z_Construct_UClass_ADefencePlayerController_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ADefencePlayerController()
{
	if (!Z_Registration_Info_UClass_ADefencePlayerController.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ADefencePlayerController.OuterSingleton, Z_Construct_UClass_ADefencePlayerController_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ADefencePlayerController.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ADefencePlayerController);
ADefencePlayerController::~ADefencePlayerController() {}
// ********** End Class ADefencePlayerController ***************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Unreal_Projects_Defence_Source_Defence_DefencePlayerController_h__Script_Defence_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ADefencePlayerController, ADefencePlayerController::StaticClass, TEXT("ADefencePlayerController"), &Z_Registration_Info_UClass_ADefencePlayerController, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ADefencePlayerController), 2488567352U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal_Projects_Defence_Source_Defence_DefencePlayerController_h__Script_Defence_85599286(TEXT("/Script/Defence"),
	Z_CompiledInDeferFile_FID_Unreal_Projects_Defence_Source_Defence_DefencePlayerController_h__Script_Defence_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Unreal_Projects_Defence_Source_Defence_DefencePlayerController_h__Script_Defence_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
