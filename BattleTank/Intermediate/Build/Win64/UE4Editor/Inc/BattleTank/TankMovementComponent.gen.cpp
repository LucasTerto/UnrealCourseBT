// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BattleTank/Public/TankMovementComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTankMovementComponent() {}
// Cross Module References
	BATTLETANK_API UClass* Z_Construct_UClass_UTankMovementComponent_NoRegister();
	BATTLETANK_API UClass* Z_Construct_UClass_UTankMovementComponent();
	ENGINE_API UClass* Z_Construct_UClass_UNavMovementComponent();
	UPackage* Z_Construct_UPackage__Script_BattleTank();
	BATTLETANK_API UFunction* Z_Construct_UFunction_UTankMovementComponent_Initialise();
	BATTLETANK_API UClass* Z_Construct_UClass_UTankTrack_NoRegister();
	BATTLETANK_API UFunction* Z_Construct_UFunction_UTankMovementComponent_IntendMoveForward();
	BATTLETANK_API UFunction* Z_Construct_UFunction_UTankMovementComponent_IntendTurnRight();
// End Cross Module References
	void UTankMovementComponent::StaticRegisterNativesUTankMovementComponent()
	{
		UClass* Class = UTankMovementComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "Initialise", &UTankMovementComponent::execInitialise },
			{ "IntendMoveForward", &UTankMovementComponent::execIntendMoveForward },
			{ "IntendTurnRight", &UTankMovementComponent::execIntendTurnRight },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UTankMovementComponent_Initialise_Statics
	{
		struct TankMovementComponent_eventInitialise_Parms
		{
			UTankTrack* LeftTracktoSet;
			UTankTrack* RightTracktoSet;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RightTracktoSet_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_RightTracktoSet;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LeftTracktoSet_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_LeftTracktoSet;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTankMovementComponent_Initialise_Statics::NewProp_RightTracktoSet_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTankMovementComponent_Initialise_Statics::NewProp_RightTracktoSet = { "RightTracktoSet", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TankMovementComponent_eventInitialise_Parms, RightTracktoSet), Z_Construct_UClass_UTankTrack_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UTankMovementComponent_Initialise_Statics::NewProp_RightTracktoSet_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UTankMovementComponent_Initialise_Statics::NewProp_RightTracktoSet_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTankMovementComponent_Initialise_Statics::NewProp_LeftTracktoSet_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTankMovementComponent_Initialise_Statics::NewProp_LeftTracktoSet = { "LeftTracktoSet", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TankMovementComponent_eventInitialise_Parms, LeftTracktoSet), Z_Construct_UClass_UTankTrack_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UTankMovementComponent_Initialise_Statics::NewProp_LeftTracktoSet_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UTankMovementComponent_Initialise_Statics::NewProp_LeftTracktoSet_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTankMovementComponent_Initialise_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTankMovementComponent_Initialise_Statics::NewProp_RightTracktoSet,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTankMovementComponent_Initialise_Statics::NewProp_LeftTracktoSet,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTankMovementComponent_Initialise_Statics::Function_MetaDataParams[] = {
		{ "Category", "Setup" },
		{ "ModuleRelativePath", "Public/TankMovementComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTankMovementComponent_Initialise_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTankMovementComponent, nullptr, "Initialise", sizeof(TankMovementComponent_eventInitialise_Parms), Z_Construct_UFunction_UTankMovementComponent_Initialise_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UTankMovementComponent_Initialise_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTankMovementComponent_Initialise_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UTankMovementComponent_Initialise_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTankMovementComponent_Initialise()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTankMovementComponent_Initialise_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTankMovementComponent_IntendMoveForward_Statics
	{
		struct TankMovementComponent_eventIntendMoveForward_Parms
		{
			float Throw;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Throw;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UTankMovementComponent_IntendMoveForward_Statics::NewProp_Throw = { "Throw", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TankMovementComponent_eventIntendMoveForward_Parms, Throw), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTankMovementComponent_IntendMoveForward_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTankMovementComponent_IntendMoveForward_Statics::NewProp_Throw,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTankMovementComponent_IntendMoveForward_Statics::Function_MetaDataParams[] = {
		{ "Category", "Input" },
		{ "ModuleRelativePath", "Public/TankMovementComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTankMovementComponent_IntendMoveForward_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTankMovementComponent, nullptr, "IntendMoveForward", sizeof(TankMovementComponent_eventIntendMoveForward_Parms), Z_Construct_UFunction_UTankMovementComponent_IntendMoveForward_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UTankMovementComponent_IntendMoveForward_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTankMovementComponent_IntendMoveForward_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UTankMovementComponent_IntendMoveForward_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTankMovementComponent_IntendMoveForward()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTankMovementComponent_IntendMoveForward_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTankMovementComponent_IntendTurnRight_Statics
	{
		struct TankMovementComponent_eventIntendTurnRight_Parms
		{
			float Throw;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Throw;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UTankMovementComponent_IntendTurnRight_Statics::NewProp_Throw = { "Throw", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TankMovementComponent_eventIntendTurnRight_Parms, Throw), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTankMovementComponent_IntendTurnRight_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTankMovementComponent_IntendTurnRight_Statics::NewProp_Throw,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTankMovementComponent_IntendTurnRight_Statics::Function_MetaDataParams[] = {
		{ "Category", "Input" },
		{ "ModuleRelativePath", "Public/TankMovementComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTankMovementComponent_IntendTurnRight_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTankMovementComponent, nullptr, "IntendTurnRight", sizeof(TankMovementComponent_eventIntendTurnRight_Parms), Z_Construct_UFunction_UTankMovementComponent_IntendTurnRight_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UTankMovementComponent_IntendTurnRight_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTankMovementComponent_IntendTurnRight_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UTankMovementComponent_IntendTurnRight_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTankMovementComponent_IntendTurnRight()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTankMovementComponent_IntendTurnRight_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UTankMovementComponent_NoRegister()
	{
		return UTankMovementComponent::StaticClass();
	}
	struct Z_Construct_UClass_UTankMovementComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UTankMovementComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UNavMovementComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_BattleTank,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UTankMovementComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UTankMovementComponent_Initialise, "Initialise" }, // 842477065
		{ &Z_Construct_UFunction_UTankMovementComponent_IntendMoveForward, "IntendMoveForward" }, // 1075945705
		{ &Z_Construct_UFunction_UTankMovementComponent_IntendTurnRight, "IntendTurnRight" }, // 4088131808
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTankMovementComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "TankMovementComponent.h" },
		{ "ModuleRelativePath", "Public/TankMovementComponent.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UTankMovementComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UTankMovementComponent>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UTankMovementComponent_Statics::ClassParams = {
		&UTankMovementComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UTankMovementComponent_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UTankMovementComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UTankMovementComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UTankMovementComponent_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UTankMovementComponent, 3221199246);
	template<> BATTLETANK_API UClass* StaticClass<UTankMovementComponent>()
	{
		return UTankMovementComponent::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UTankMovementComponent(Z_Construct_UClass_UTankMovementComponent, &UTankMovementComponent::StaticClass, TEXT("/Script/BattleTank"), TEXT("UTankMovementComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UTankMovementComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
