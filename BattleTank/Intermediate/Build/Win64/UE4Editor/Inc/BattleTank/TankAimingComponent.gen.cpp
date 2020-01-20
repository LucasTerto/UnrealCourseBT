// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BattleTank/Public/TankAimingComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTankAimingComponent() {}
// Cross Module References
	BATTLETANK_API UEnum* Z_Construct_UEnum_BattleTank_EFiringState();
	UPackage* Z_Construct_UPackage__Script_BattleTank();
	BATTLETANK_API UClass* Z_Construct_UClass_UTankAimingComponent_NoRegister();
	BATTLETANK_API UClass* Z_Construct_UClass_UTankAimingComponent();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	BATTLETANK_API UFunction* Z_Construct_UFunction_UTankAimingComponent_Fire();
	BATTLETANK_API UFunction* Z_Construct_UFunction_UTankAimingComponent_GetRoundsLeft();
	BATTLETANK_API UFunction* Z_Construct_UFunction_UTankAimingComponent_Initialise();
	BATTLETANK_API UClass* Z_Construct_UClass_UTankTurret_NoRegister();
	BATTLETANK_API UClass* Z_Construct_UClass_UTankBarrel_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	BATTLETANK_API UClass* Z_Construct_UClass_AProjectile_NoRegister();
// End Cross Module References
	static UEnum* EFiringState_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_BattleTank_EFiringState, Z_Construct_UPackage__Script_BattleTank(), TEXT("EFiringState"));
		}
		return Singleton;
	}
	template<> BATTLETANK_API UEnum* StaticEnum<EFiringState>()
	{
		return EFiringState_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EFiringState(EFiringState_StaticEnum, TEXT("/Script/BattleTank"), TEXT("EFiringState"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_BattleTank_EFiringState_Hash() { return 2584904753U; }
	UEnum* Z_Construct_UEnum_BattleTank_EFiringState()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_BattleTank();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EFiringState"), 0, Get_Z_Construct_UEnum_BattleTank_EFiringState_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EFiringState::Reloading", (int64)EFiringState::Reloading },
				{ "EFiringState::Aiming", (int64)EFiringState::Aiming },
				{ "EFiringState::Locked", (int64)EFiringState::Locked },
				{ "EFiringState::OutOfAmmo", (int64)EFiringState::OutOfAmmo },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "ModuleRelativePath", "Public/TankAimingComponent.h" },
				{ "ToolTip", "Enum for naming states" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_BattleTank,
				nullptr,
				"EFiringState",
				"EFiringState",
				Enumerators,
				ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::EnumClass,
				METADATA_PARAMS(Enum_MetaDataParams, ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	void UTankAimingComponent::StaticRegisterNativesUTankAimingComponent()
	{
		UClass* Class = UTankAimingComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "Fire", &UTankAimingComponent::execFire },
			{ "GetRoundsLeft", &UTankAimingComponent::execGetRoundsLeft },
			{ "Initialise", &UTankAimingComponent::execInitialise },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UTankAimingComponent_Fire_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTankAimingComponent_Fire_Statics::Function_MetaDataParams[] = {
		{ "Category", "Firing" },
		{ "ModuleRelativePath", "Public/TankAimingComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTankAimingComponent_Fire_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTankAimingComponent, nullptr, "Fire", 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTankAimingComponent_Fire_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UTankAimingComponent_Fire_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTankAimingComponent_Fire()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTankAimingComponent_Fire_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTankAimingComponent_GetRoundsLeft_Statics
	{
		struct TankAimingComponent_eventGetRoundsLeft_Parms
		{
			int32 ReturnValue;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UTankAimingComponent_GetRoundsLeft_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TankAimingComponent_eventGetRoundsLeft_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTankAimingComponent_GetRoundsLeft_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTankAimingComponent_GetRoundsLeft_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTankAimingComponent_GetRoundsLeft_Statics::Function_MetaDataParams[] = {
		{ "Category", "Firing" },
		{ "ModuleRelativePath", "Public/TankAimingComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTankAimingComponent_GetRoundsLeft_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTankAimingComponent, nullptr, "GetRoundsLeft", sizeof(TankAimingComponent_eventGetRoundsLeft_Parms), Z_Construct_UFunction_UTankAimingComponent_GetRoundsLeft_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UTankAimingComponent_GetRoundsLeft_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTankAimingComponent_GetRoundsLeft_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UTankAimingComponent_GetRoundsLeft_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTankAimingComponent_GetRoundsLeft()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTankAimingComponent_GetRoundsLeft_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTankAimingComponent_Initialise_Statics
	{
		struct TankAimingComponent_eventInitialise_Parms
		{
			UTankBarrel* BarreltoSet;
			UTankTurret* TurrettoSet;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TurrettoSet_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_TurrettoSet;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BarreltoSet_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_BarreltoSet;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTankAimingComponent_Initialise_Statics::NewProp_TurrettoSet_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTankAimingComponent_Initialise_Statics::NewProp_TurrettoSet = { "TurrettoSet", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TankAimingComponent_eventInitialise_Parms, TurrettoSet), Z_Construct_UClass_UTankTurret_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UTankAimingComponent_Initialise_Statics::NewProp_TurrettoSet_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UTankAimingComponent_Initialise_Statics::NewProp_TurrettoSet_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTankAimingComponent_Initialise_Statics::NewProp_BarreltoSet_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTankAimingComponent_Initialise_Statics::NewProp_BarreltoSet = { "BarreltoSet", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TankAimingComponent_eventInitialise_Parms, BarreltoSet), Z_Construct_UClass_UTankBarrel_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UTankAimingComponent_Initialise_Statics::NewProp_BarreltoSet_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UTankAimingComponent_Initialise_Statics::NewProp_BarreltoSet_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTankAimingComponent_Initialise_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTankAimingComponent_Initialise_Statics::NewProp_TurrettoSet,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTankAimingComponent_Initialise_Statics::NewProp_BarreltoSet,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTankAimingComponent_Initialise_Statics::Function_MetaDataParams[] = {
		{ "Category", "Setup" },
		{ "ModuleRelativePath", "Public/TankAimingComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTankAimingComponent_Initialise_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTankAimingComponent, nullptr, "Initialise", sizeof(TankAimingComponent_eventInitialise_Parms), Z_Construct_UFunction_UTankAimingComponent_Initialise_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UTankAimingComponent_Initialise_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTankAimingComponent_Initialise_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UTankAimingComponent_Initialise_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTankAimingComponent_Initialise()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTankAimingComponent_Initialise_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UTankAimingComponent_NoRegister()
	{
		return UTankAimingComponent::StaticClass();
	}
	struct Z_Construct_UClass_UTankAimingComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ProjectileBlueprint_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_ProjectileBlueprint;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReloadTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReloadTime;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FiringState_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_FiringState;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_FiringState_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LaunchSpeed_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_LaunchSpeed;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RoundsLeft_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_RoundsLeft;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UTankAimingComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_BattleTank,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UTankAimingComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UTankAimingComponent_Fire, "Fire" }, // 2849692880
		{ &Z_Construct_UFunction_UTankAimingComponent_GetRoundsLeft, "GetRoundsLeft" }, // 3934371699
		{ &Z_Construct_UFunction_UTankAimingComponent_Initialise, "Initialise" }, // 1145803847
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTankAimingComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "TankAimingComponent.h" },
		{ "ModuleRelativePath", "Public/TankAimingComponent.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTankAimingComponent_Statics::NewProp_ProjectileBlueprint_MetaData[] = {
		{ "Category", "Setup" },
		{ "ModuleRelativePath", "Public/TankAimingComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_UTankAimingComponent_Statics::NewProp_ProjectileBlueprint = { "ProjectileBlueprint", nullptr, (EPropertyFlags)0x0014000000010001, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UTankAimingComponent, ProjectileBlueprint), Z_Construct_UClass_AProjectile_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_UTankAimingComponent_Statics::NewProp_ProjectileBlueprint_MetaData, ARRAY_COUNT(Z_Construct_UClass_UTankAimingComponent_Statics::NewProp_ProjectileBlueprint_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTankAimingComponent_Statics::NewProp_ReloadTime_MetaData[] = {
		{ "Category", "Firing" },
		{ "ModuleRelativePath", "Public/TankAimingComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UTankAimingComponent_Statics::NewProp_ReloadTime = { "ReloadTime", nullptr, (EPropertyFlags)0x0010000000010001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UTankAimingComponent, ReloadTime), METADATA_PARAMS(Z_Construct_UClass_UTankAimingComponent_Statics::NewProp_ReloadTime_MetaData, ARRAY_COUNT(Z_Construct_UClass_UTankAimingComponent_Statics::NewProp_ReloadTime_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTankAimingComponent_Statics::NewProp_FiringState_MetaData[] = {
		{ "Category", "State" },
		{ "ModuleRelativePath", "Public/TankAimingComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UTankAimingComponent_Statics::NewProp_FiringState = { "FiringState", nullptr, (EPropertyFlags)0x0020080000000014, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UTankAimingComponent, FiringState), Z_Construct_UEnum_BattleTank_EFiringState, METADATA_PARAMS(Z_Construct_UClass_UTankAimingComponent_Statics::NewProp_FiringState_MetaData, ARRAY_COUNT(Z_Construct_UClass_UTankAimingComponent_Statics::NewProp_FiringState_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UTankAimingComponent_Statics::NewProp_FiringState_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTankAimingComponent_Statics::NewProp_LaunchSpeed_MetaData[] = {
		{ "Category", "Firing" },
		{ "ModuleRelativePath", "Public/TankAimingComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UTankAimingComponent_Statics::NewProp_LaunchSpeed = { "LaunchSpeed", nullptr, (EPropertyFlags)0x0040000000010001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UTankAimingComponent, LaunchSpeed), METADATA_PARAMS(Z_Construct_UClass_UTankAimingComponent_Statics::NewProp_LaunchSpeed_MetaData, ARRAY_COUNT(Z_Construct_UClass_UTankAimingComponent_Statics::NewProp_LaunchSpeed_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTankAimingComponent_Statics::NewProp_RoundsLeft_MetaData[] = {
		{ "Category", "Firing" },
		{ "ModuleRelativePath", "Public/TankAimingComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UTankAimingComponent_Statics::NewProp_RoundsLeft = { "RoundsLeft", nullptr, (EPropertyFlags)0x0040000000010001, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UTankAimingComponent, RoundsLeft), METADATA_PARAMS(Z_Construct_UClass_UTankAimingComponent_Statics::NewProp_RoundsLeft_MetaData, ARRAY_COUNT(Z_Construct_UClass_UTankAimingComponent_Statics::NewProp_RoundsLeft_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UTankAimingComponent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTankAimingComponent_Statics::NewProp_ProjectileBlueprint,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTankAimingComponent_Statics::NewProp_ReloadTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTankAimingComponent_Statics::NewProp_FiringState,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTankAimingComponent_Statics::NewProp_FiringState_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTankAimingComponent_Statics::NewProp_LaunchSpeed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTankAimingComponent_Statics::NewProp_RoundsLeft,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UTankAimingComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UTankAimingComponent>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UTankAimingComponent_Statics::ClassParams = {
		&UTankAimingComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UTankAimingComponent_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		ARRAY_COUNT(FuncInfo),
		ARRAY_COUNT(Z_Construct_UClass_UTankAimingComponent_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UTankAimingComponent_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UTankAimingComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UTankAimingComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UTankAimingComponent_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UTankAimingComponent, 3221475076);
	template<> BATTLETANK_API UClass* StaticClass<UTankAimingComponent>()
	{
		return UTankAimingComponent::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UTankAimingComponent(Z_Construct_UClass_UTankAimingComponent, &UTankAimingComponent::StaticClass, TEXT("/Script/BattleTank"), TEXT("UTankAimingComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UTankAimingComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
