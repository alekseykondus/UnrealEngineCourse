// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef CALCULATOR_MyCalculator_generated_h
#error "MyCalculator.generated.h already included, missing '#pragma once' in MyCalculator.h"
#endif
#define CALCULATOR_MyCalculator_generated_h

#define FID_Calculator_Source_Calculator_Private_MyCalculator_h_16_SPARSE_DATA
#define FID_Calculator_Source_Calculator_Private_MyCalculator_h_16_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execDivision); \
	DECLARE_FUNCTION(execMultiplication); \
	DECLARE_FUNCTION(execMinus); \
	DECLARE_FUNCTION(execPlus); \
	DECLARE_FUNCTION(execCount);


#define FID_Calculator_Source_Calculator_Private_MyCalculator_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execDivision); \
	DECLARE_FUNCTION(execMultiplication); \
	DECLARE_FUNCTION(execMinus); \
	DECLARE_FUNCTION(execPlus); \
	DECLARE_FUNCTION(execCount);


#define FID_Calculator_Source_Calculator_Private_MyCalculator_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMyCalculator(); \
	friend struct Z_Construct_UClass_UMyCalculator_Statics; \
public: \
	DECLARE_CLASS(UMyCalculator, UUserWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Calculator"), NO_API) \
	DECLARE_SERIALIZER(UMyCalculator)


#define FID_Calculator_Source_Calculator_Private_MyCalculator_h_16_INCLASS \
private: \
	static void StaticRegisterNativesUMyCalculator(); \
	friend struct Z_Construct_UClass_UMyCalculator_Statics; \
public: \
	DECLARE_CLASS(UMyCalculator, UUserWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Calculator"), NO_API) \
	DECLARE_SERIALIZER(UMyCalculator)


#define FID_Calculator_Source_Calculator_Private_MyCalculator_h_16_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UMyCalculator(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMyCalculator) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMyCalculator); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMyCalculator); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UMyCalculator(UMyCalculator&&); \
	NO_API UMyCalculator(const UMyCalculator&); \
public:


#define FID_Calculator_Source_Calculator_Private_MyCalculator_h_16_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UMyCalculator(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UMyCalculator(UMyCalculator&&); \
	NO_API UMyCalculator(const UMyCalculator&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMyCalculator); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMyCalculator); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMyCalculator)


#define FID_Calculator_Source_Calculator_Private_MyCalculator_h_13_PROLOG
#define FID_Calculator_Source_Calculator_Private_MyCalculator_h_16_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Calculator_Source_Calculator_Private_MyCalculator_h_16_SPARSE_DATA \
	FID_Calculator_Source_Calculator_Private_MyCalculator_h_16_RPC_WRAPPERS \
	FID_Calculator_Source_Calculator_Private_MyCalculator_h_16_INCLASS \
	FID_Calculator_Source_Calculator_Private_MyCalculator_h_16_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Calculator_Source_Calculator_Private_MyCalculator_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Calculator_Source_Calculator_Private_MyCalculator_h_16_SPARSE_DATA \
	FID_Calculator_Source_Calculator_Private_MyCalculator_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Calculator_Source_Calculator_Private_MyCalculator_h_16_INCLASS_NO_PURE_DECLS \
	FID_Calculator_Source_Calculator_Private_MyCalculator_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> CALCULATOR_API UClass* StaticClass<class UMyCalculator>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Calculator_Source_Calculator_Private_MyCalculator_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
