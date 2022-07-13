// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Calculator/Private/MyCalculator.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMyCalculator() {}
// Cross Module References
	CALCULATOR_API UClass* Z_Construct_UClass_UMyCalculator_NoRegister();
	CALCULATOR_API UClass* Z_Construct_UClass_UMyCalculator();
	UMG_API UClass* Z_Construct_UClass_UUserWidget();
	UPackage* Z_Construct_UPackage__Script_Calculator();
// End Cross Module References
	DEFINE_FUNCTION(UMyCalculator::execDivision)
	{
		P_GET_PROPERTY(FDoubleProperty,Z_Param_left);
		P_GET_PROPERTY(FDoubleProperty,Z_Param_right);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(double*)Z_Param__Result=P_THIS->Division(Z_Param_left,Z_Param_right);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMyCalculator::execMultiplication)
	{
		P_GET_PROPERTY(FDoubleProperty,Z_Param_left);
		P_GET_PROPERTY(FDoubleProperty,Z_Param_right);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(double*)Z_Param__Result=P_THIS->Multiplication(Z_Param_left,Z_Param_right);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMyCalculator::execMinus)
	{
		P_GET_PROPERTY(FDoubleProperty,Z_Param_left);
		P_GET_PROPERTY(FDoubleProperty,Z_Param_right);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(double*)Z_Param__Result=P_THIS->Minus(Z_Param_left,Z_Param_right);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMyCalculator::execPlus)
	{
		P_GET_PROPERTY(FDoubleProperty,Z_Param_left);
		P_GET_PROPERTY(FDoubleProperty,Z_Param_right);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(double*)Z_Param__Result=P_THIS->Plus(Z_Param_left,Z_Param_right);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMyCalculator::execCount)
	{
		P_GET_PROPERTY(FDoubleProperty,Z_Param_left);
		P_GET_PROPERTY(FStrProperty,Z_Param_operation);
		P_GET_PROPERTY(FDoubleProperty,Z_Param_right);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(double*)Z_Param__Result=P_THIS->Count(Z_Param_left,Z_Param_operation,Z_Param_right);
		P_NATIVE_END;
	}
	void UMyCalculator::StaticRegisterNativesUMyCalculator()
	{
		UClass* Class = UMyCalculator::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "Count", &UMyCalculator::execCount },
			{ "Division", &UMyCalculator::execDivision },
			{ "Minus", &UMyCalculator::execMinus },
			{ "Multiplication", &UMyCalculator::execMultiplication },
			{ "Plus", &UMyCalculator::execPlus },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UMyCalculator_Count_Statics
	{
		struct MyCalculator_eventCount_Parms
		{
			double left;
			FString operation;
			double right;
			double ReturnValue;
		};
		static const UECodeGen_Private::FDoublePropertyParams NewProp_left;
		static const UECodeGen_Private::FStrPropertyParams NewProp_operation;
		static const UECodeGen_Private::FDoublePropertyParams NewProp_right;
		static const UECodeGen_Private::FDoublePropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FDoublePropertyParams Z_Construct_UFunction_UMyCalculator_Count_Statics::NewProp_left = { "left", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MyCalculator_eventCount_Parms, left), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UMyCalculator_Count_Statics::NewProp_operation = { "operation", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MyCalculator_eventCount_Parms, operation), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FDoublePropertyParams Z_Construct_UFunction_UMyCalculator_Count_Statics::NewProp_right = { "right", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MyCalculator_eventCount_Parms, right), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FDoublePropertyParams Z_Construct_UFunction_UMyCalculator_Count_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MyCalculator_eventCount_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMyCalculator_Count_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMyCalculator_Count_Statics::NewProp_left,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMyCalculator_Count_Statics::NewProp_operation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMyCalculator_Count_Statics::NewProp_right,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMyCalculator_Count_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMyCalculator_Count_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/MyCalculator.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMyCalculator_Count_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMyCalculator, nullptr, "Count", nullptr, nullptr, sizeof(Z_Construct_UFunction_UMyCalculator_Count_Statics::MyCalculator_eventCount_Parms), Z_Construct_UFunction_UMyCalculator_Count_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMyCalculator_Count_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMyCalculator_Count_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMyCalculator_Count_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMyCalculator_Count()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMyCalculator_Count_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMyCalculator_Division_Statics
	{
		struct MyCalculator_eventDivision_Parms
		{
			double left;
			double right;
			double ReturnValue;
		};
		static const UECodeGen_Private::FDoublePropertyParams NewProp_left;
		static const UECodeGen_Private::FDoublePropertyParams NewProp_right;
		static const UECodeGen_Private::FDoublePropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FDoublePropertyParams Z_Construct_UFunction_UMyCalculator_Division_Statics::NewProp_left = { "left", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MyCalculator_eventDivision_Parms, left), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FDoublePropertyParams Z_Construct_UFunction_UMyCalculator_Division_Statics::NewProp_right = { "right", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MyCalculator_eventDivision_Parms, right), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FDoublePropertyParams Z_Construct_UFunction_UMyCalculator_Division_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MyCalculator_eventDivision_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMyCalculator_Division_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMyCalculator_Division_Statics::NewProp_left,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMyCalculator_Division_Statics::NewProp_right,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMyCalculator_Division_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMyCalculator_Division_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/MyCalculator.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMyCalculator_Division_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMyCalculator, nullptr, "Division", nullptr, nullptr, sizeof(Z_Construct_UFunction_UMyCalculator_Division_Statics::MyCalculator_eventDivision_Parms), Z_Construct_UFunction_UMyCalculator_Division_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMyCalculator_Division_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMyCalculator_Division_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMyCalculator_Division_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMyCalculator_Division()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMyCalculator_Division_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMyCalculator_Minus_Statics
	{
		struct MyCalculator_eventMinus_Parms
		{
			double left;
			double right;
			double ReturnValue;
		};
		static const UECodeGen_Private::FDoublePropertyParams NewProp_left;
		static const UECodeGen_Private::FDoublePropertyParams NewProp_right;
		static const UECodeGen_Private::FDoublePropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FDoublePropertyParams Z_Construct_UFunction_UMyCalculator_Minus_Statics::NewProp_left = { "left", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MyCalculator_eventMinus_Parms, left), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FDoublePropertyParams Z_Construct_UFunction_UMyCalculator_Minus_Statics::NewProp_right = { "right", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MyCalculator_eventMinus_Parms, right), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FDoublePropertyParams Z_Construct_UFunction_UMyCalculator_Minus_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MyCalculator_eventMinus_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMyCalculator_Minus_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMyCalculator_Minus_Statics::NewProp_left,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMyCalculator_Minus_Statics::NewProp_right,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMyCalculator_Minus_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMyCalculator_Minus_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/MyCalculator.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMyCalculator_Minus_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMyCalculator, nullptr, "Minus", nullptr, nullptr, sizeof(Z_Construct_UFunction_UMyCalculator_Minus_Statics::MyCalculator_eventMinus_Parms), Z_Construct_UFunction_UMyCalculator_Minus_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMyCalculator_Minus_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMyCalculator_Minus_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMyCalculator_Minus_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMyCalculator_Minus()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMyCalculator_Minus_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMyCalculator_Multiplication_Statics
	{
		struct MyCalculator_eventMultiplication_Parms
		{
			double left;
			double right;
			double ReturnValue;
		};
		static const UECodeGen_Private::FDoublePropertyParams NewProp_left;
		static const UECodeGen_Private::FDoublePropertyParams NewProp_right;
		static const UECodeGen_Private::FDoublePropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FDoublePropertyParams Z_Construct_UFunction_UMyCalculator_Multiplication_Statics::NewProp_left = { "left", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MyCalculator_eventMultiplication_Parms, left), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FDoublePropertyParams Z_Construct_UFunction_UMyCalculator_Multiplication_Statics::NewProp_right = { "right", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MyCalculator_eventMultiplication_Parms, right), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FDoublePropertyParams Z_Construct_UFunction_UMyCalculator_Multiplication_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MyCalculator_eventMultiplication_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMyCalculator_Multiplication_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMyCalculator_Multiplication_Statics::NewProp_left,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMyCalculator_Multiplication_Statics::NewProp_right,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMyCalculator_Multiplication_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMyCalculator_Multiplication_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/MyCalculator.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMyCalculator_Multiplication_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMyCalculator, nullptr, "Multiplication", nullptr, nullptr, sizeof(Z_Construct_UFunction_UMyCalculator_Multiplication_Statics::MyCalculator_eventMultiplication_Parms), Z_Construct_UFunction_UMyCalculator_Multiplication_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMyCalculator_Multiplication_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMyCalculator_Multiplication_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMyCalculator_Multiplication_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMyCalculator_Multiplication()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMyCalculator_Multiplication_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMyCalculator_Plus_Statics
	{
		struct MyCalculator_eventPlus_Parms
		{
			double left;
			double right;
			double ReturnValue;
		};
		static const UECodeGen_Private::FDoublePropertyParams NewProp_left;
		static const UECodeGen_Private::FDoublePropertyParams NewProp_right;
		static const UECodeGen_Private::FDoublePropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FDoublePropertyParams Z_Construct_UFunction_UMyCalculator_Plus_Statics::NewProp_left = { "left", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MyCalculator_eventPlus_Parms, left), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FDoublePropertyParams Z_Construct_UFunction_UMyCalculator_Plus_Statics::NewProp_right = { "right", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MyCalculator_eventPlus_Parms, right), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FDoublePropertyParams Z_Construct_UFunction_UMyCalculator_Plus_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MyCalculator_eventPlus_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMyCalculator_Plus_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMyCalculator_Plus_Statics::NewProp_left,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMyCalculator_Plus_Statics::NewProp_right,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMyCalculator_Plus_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMyCalculator_Plus_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/MyCalculator.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMyCalculator_Plus_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMyCalculator, nullptr, "Plus", nullptr, nullptr, sizeof(Z_Construct_UFunction_UMyCalculator_Plus_Statics::MyCalculator_eventPlus_Parms), Z_Construct_UFunction_UMyCalculator_Plus_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMyCalculator_Plus_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMyCalculator_Plus_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMyCalculator_Plus_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMyCalculator_Plus()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMyCalculator_Plus_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMyCalculator);
	UClass* Z_Construct_UClass_UMyCalculator_NoRegister()
	{
		return UMyCalculator::StaticClass();
	}
	struct Z_Construct_UClass_UMyCalculator_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMyCalculator_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UUserWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_Calculator,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UMyCalculator_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UMyCalculator_Count, "Count" }, // 1130498472
		{ &Z_Construct_UFunction_UMyCalculator_Division, "Division" }, // 2178103312
		{ &Z_Construct_UFunction_UMyCalculator_Minus, "Minus" }, // 2933281281
		{ &Z_Construct_UFunction_UMyCalculator_Multiplication, "Multiplication" }, // 478756582
		{ &Z_Construct_UFunction_UMyCalculator_Plus, "Plus" }, // 1842029595
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMyCalculator_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "MyCalculator.h" },
		{ "ModuleRelativePath", "Private/MyCalculator.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMyCalculator_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMyCalculator>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMyCalculator_Statics::ClassParams = {
		&UMyCalculator::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x00A010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UMyCalculator_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMyCalculator_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMyCalculator()
	{
		if (!Z_Registration_Info_UClass_UMyCalculator.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMyCalculator.OuterSingleton, Z_Construct_UClass_UMyCalculator_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMyCalculator.OuterSingleton;
	}
	template<> CALCULATOR_API UClass* StaticClass<UMyCalculator>()
	{
		return UMyCalculator::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMyCalculator);
	struct Z_CompiledInDeferFile_FID_Calculator_Source_Calculator_Private_MyCalculator_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Calculator_Source_Calculator_Private_MyCalculator_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UMyCalculator, UMyCalculator::StaticClass, TEXT("UMyCalculator"), &Z_Registration_Info_UClass_UMyCalculator, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMyCalculator), 3205214546U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Calculator_Source_Calculator_Private_MyCalculator_h_2689533449(TEXT("/Script/Calculator"),
		Z_CompiledInDeferFile_FID_Calculator_Source_Calculator_Private_MyCalculator_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Calculator_Source_Calculator_Private_MyCalculator_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
