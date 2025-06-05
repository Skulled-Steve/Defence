// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "DefencePlayerController.h"

#ifdef DEFENCE_DefencePlayerController_generated_h
#error "DefencePlayerController.generated.h already included, missing '#pragma once' in DefencePlayerController.h"
#endif
#define DEFENCE_DefencePlayerController_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class ADefencePlayerController *************************************************
#define FID_Unreal_Projects_Defence_Source_Defence_DefencePlayerController_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execSelectActorsInBox);


DEFENCE_API UClass* Z_Construct_UClass_ADefencePlayerController_NoRegister();

#define FID_Unreal_Projects_Defence_Source_Defence_DefencePlayerController_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesADefencePlayerController(); \
	friend struct Z_Construct_UClass_ADefencePlayerController_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend DEFENCE_API UClass* Z_Construct_UClass_ADefencePlayerController_NoRegister(); \
public: \
	DECLARE_CLASS2(ADefencePlayerController, APlayerController, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Defence"), Z_Construct_UClass_ADefencePlayerController_NoRegister) \
	DECLARE_SERIALIZER(ADefencePlayerController)


#define FID_Unreal_Projects_Defence_Source_Defence_DefencePlayerController_h_17_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	ADefencePlayerController(ADefencePlayerController&&) = delete; \
	ADefencePlayerController(const ADefencePlayerController&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ADefencePlayerController); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ADefencePlayerController); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ADefencePlayerController) \
	NO_API virtual ~ADefencePlayerController();


#define FID_Unreal_Projects_Defence_Source_Defence_DefencePlayerController_h_14_PROLOG
#define FID_Unreal_Projects_Defence_Source_Defence_DefencePlayerController_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Unreal_Projects_Defence_Source_Defence_DefencePlayerController_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Unreal_Projects_Defence_Source_Defence_DefencePlayerController_h_17_INCLASS_NO_PURE_DECLS \
	FID_Unreal_Projects_Defence_Source_Defence_DefencePlayerController_h_17_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class ADefencePlayerController;

// ********** End Class ADefencePlayerController ***************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Unreal_Projects_Defence_Source_Defence_DefencePlayerController_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
