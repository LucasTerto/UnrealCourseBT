// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BattleTank/Public/TankPlayerController.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTankPlayerController() {}
// Cross Module References
	BATTLETANK_API UClass* Z_Construct_UClass_ATankPlayerController_NoRegister();
	BATTLETANK_API UClass* Z_Construct_UClass_ATankPlayerController();
	ENGINE_API UClass* Z_Construct_UClass_APlayerController();
	UPackage* Z_Construct_UPackage__Script_BattleTank();
	BATTLETANK_API UFunction* Z_Construct_UFunction_ATankPlayerController_FoundAimingComponent();
	BATTLETANK_API UClass* Z_Construct_UClass_UTankAimingComponent_NoRegister();
	BATTLETANK_API UFunction* Z_Construct_UFunction_ATankPlayerController_OnPossessedTankDeath();
// End Cross Module References
	static FName NAME_ATankPlayerController_FoundAimingComponent = FName(TEXT("FoundAimingComponent"));
	void ATankPlayerController::FoundAimingComponent(UTankAimingComponent* AimCompRef)
	{
		TankPlayerController_eventFoundAimingComponent_Parms Parms;
		Parms.AimCompRef=AimCompRef;
		ProcessEvent(FindFunctionChecked(NAME_ATankPlayerController_FoundAimingComponent),&Parms);
	}
	void ATankPlayerController::StaticRegisterNativesATankPlayerController()
	{
		UClass* Class = ATankPlayerController::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OnPossessedTankDeath", &ATankPlayerController::execOnPossessedTankDeath },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ATankPlayerController_FoundAimingComponent_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AimCompRef_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_AimCompRef;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATankPlayerController_FoundAimingComponent_Statics::NewProp_AimCompRef_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ATankPlayerController_FoundAimingComponent_Statics::NewProp_AimCompRef = { "AimCompRef", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TankPlayerController_eventFoundAimingComponent_Parms, AimCompRef), Z_Construct_UClass_UTankAimingComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_ATankPlayerController_FoundAimingComponent_Statics::NewProp_AimCompRef_MetaData, ARRAY_COUNT(Z_Construct_UFunction_ATankPlayerController_FoundAimingComponent_Statics::NewProp_AimCompRef_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ATankPlayerController_FoundAimingComponent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATankPlayerController_FoundAimingComponent_Statics::NewProp_AimCompRef,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATankPlayerController_FoundAimingComponent_Statics::Function_MetaDataParams[] = {
		{ "Category", "Setup" },
		{ "ModuleRelativePath", "Public/TankPlayerController.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ATankPlayerController_FoundAimingComponent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATankPlayerController, nullptr, "FoundAimingComponent", sizeof(TankPlayerController_eventFoundAimingComponent_Parms), Z_Construct_UFunction_ATankPlayerController_FoundAimingComponent_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_ATankPlayerController_FoundAimingComponent_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ATankPlayerController_FoundAimingComponent_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_ATankPlayerController_FoundAimingComponent_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ATankPlayerController_FoundAimingComponent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ATankPlayerController_FoundAimingComponent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ATankPlayerController_OnPossessedTankDeath_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATankPlayerController_OnPossessedTankDeath_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/TankPlayerController.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ATankPlayerController_OnPossessedTankDeath_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATankPlayerController, nullptr, "OnPossessedTankDeath", 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ATankPlayerController_OnPossessedTankDeath_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_ATankPlayerController_OnPossessedTankDeath_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ATankPlayerController_OnPossessedTankDeath()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ATankPlayerController_OnPossessedTankDeath_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ATankPlayerController_NoRegister()
	{
		return ATankPlayerController::StaticClass();
	}
	struct Z_Construct_UClass_ATankPlayerController_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CrosshairLocationX_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_CrosshairLocationX;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LineTraceRange_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_LineTraceRange;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ATankPlayerController_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_APlayerController,
		(UObject* (*)())Z_Construct_UPackage__Script_BattleTank,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ATankPlayerController_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ATankPlayerController_FoundAimingComponent, "FoundAimingComponent" }, // 1039505305
		{ &Z_Construct_UFunction_ATankPlayerController_OnPossessedTankDeath, "OnPossessedTankDeath" }, // 4013093499
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATankPlayerController_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "TankPlayerController.h" },
		{ "ModuleRelativePath", "Public/TankPlayerController.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATankPlayerController_Statics::NewProp_CrosshairLocationX_MetaData[] = {
		{ "Category", "TankPlayerController" },
		{ "ModuleRelativePath", "Public/TankPlayerController.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ATankPlayerController_Statics::NewProp_CrosshairLocationX = { "CrosshairLocationX", nullptr, (EPropertyFlags)0x0040000000010001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATankPlayerController, CrosshairLocationX), METADATA_PARAMS(Z_Construct_UClass_ATankPlayerController_Statics::NewProp_CrosshairLocationX_MetaData, ARRAY_COUNT(Z_Construct_UClass_ATankPlayerController_Statics::NewProp_CrosshairLocationX_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATankPlayerController_Statics::NewProp_LineTraceRange_MetaData[] = {
		{ "Category", "TankPlayerController" },
		{ "ModuleRelativePath", "Public/TankPlayerController.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ATankPlayerController_Statics::NewProp_LineTraceRange = { "LineTraceRange", nullptr, (EPropertyFlags)0x0040000000010001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATankPlayerController, LineTraceRange), METADATA_PARAMS(Z_Construct_UClass_ATankPlayerController_Statics::NewProp_LineTraceRange_MetaData, ARRAY_COUNT(Z_Construct_UClass_ATankPlayerController_Statics::NewProp_LineTraceRange_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ATankPlayerController_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATankPlayerController_Statics::NewProp_CrosshairLocationX,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATankPlayerController_Statics::NewProp_LineTraceRange,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ATankPlayerController_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ATankPlayerController>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ATankPlayerController_Statics::ClassParams = {
		&ATankPlayerController::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ATankPlayerController_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		ARRAY_COUNT(FuncInfo),
		ARRAY_COUNT(Z_Construct_UClass_ATankPlayerController_Statics::PropPointers),
		0,
		0x009002A4u,
		METADATA_PARAMS(Z_Construct_UClass_ATankPlayerController_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_ATankPlayerController_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ATankPlayerController()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ATankPlayerController_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ATankPlayerController, 4109464536);
	template<> BATTLETANK_API UClass* StaticClass<ATankPlayerController>()
	{
		return ATankPlayerController::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ATankPlayerController(Z_Construct_UClass_ATankPlayerController, &ATankPlayerController::StaticClass, TEXT("/Script/BattleTank"), TEXT("ATankPlayerController"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ATankPlayerController);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
