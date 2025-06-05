// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "DefenceCharacter.h"

#ifdef DEFENCE_DefenceCharacter_generated_h
#error "DefenceCharacter.generated.h already included, missing '#pragma once' in DefenceCharacter.h"
#endif
#define DEFENCE_DefenceCharacter_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class ADefenceCharacter ********************************************************
DEFENCE_API UClass* Z_Construct_UClass_ADefenceCharacter_NoRegister();

#define FID_Unreal_Projects_Defence_Source_Defence_DefenceCharacter_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesADefenceCharacter(); \
	friend struct Z_Construct_UClass_ADefenceCharacter_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend DEFENCE_API UClass* Z_Construct_UClass_ADefenceCharacter_NoRegister(); \
public: \
	DECLARE_CLASS2(ADefenceCharacter, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Defence"), Z_Construct_UClass_ADefenceCharacter_NoRegister) \
	DECLARE_SERIALIZER(ADefenceCharacter)


#define FID_Unreal_Projects_Defence_Source_Defence_DefenceCharacter_h_12_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	ADefenceCharacter(ADefenceCharacter&&) = delete; \
	ADefenceCharacter(const ADefenceCharacter&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ADefenceCharacter); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ADefenceCharacter); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ADefenceCharacter) \
	NO_API virtual ~ADefenceCharacter();


#define FID_Unreal_Projects_Defence_Source_Defence_DefenceCharacter_h_9_PROLOG
#define FID_Unreal_Projects_Defence_Source_Defence_DefenceCharacter_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Unreal_Projects_Defence_Source_Defence_DefenceCharacter_h_12_INCLASS_NO_PURE_DECLS \
	FID_Unreal_Projects_Defence_Source_Defence_DefenceCharacter_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class ADefenceCharacter;

// ********** End Class ADefenceCharacter **********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Unreal_Projects_Defence_Source_Defence_DefenceCharacter_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
