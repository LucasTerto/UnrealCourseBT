// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef BATTLETANK_SpawnPoint_generated_h
#error "SpawnPoint.generated.h already included, missing '#pragma once' in SpawnPoint.h"
#endif
#define BATTLETANK_SpawnPoint_generated_h

#define BattleTank_Source_BattleTank_Public_SpawnPoint_h_13_RPC_WRAPPERS
#define BattleTank_Source_BattleTank_Public_SpawnPoint_h_13_RPC_WRAPPERS_NO_PURE_DECLS
#define BattleTank_Source_BattleTank_Public_SpawnPoint_h_13_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSpawnPoint(); \
	friend struct Z_Construct_UClass_USpawnPoint_Statics; \
public: \
	DECLARE_CLASS(USpawnPoint, USceneComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/BattleTank"), NO_API) \
	DECLARE_SERIALIZER(USpawnPoint)


#define BattleTank_Source_BattleTank_Public_SpawnPoint_h_13_INCLASS \
private: \
	static void StaticRegisterNativesUSpawnPoint(); \
	friend struct Z_Construct_UClass_USpawnPoint_Statics; \
public: \
	DECLARE_CLASS(USpawnPoint, USceneComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/BattleTank"), NO_API) \
	DECLARE_SERIALIZER(USpawnPoint)


#define BattleTank_Source_BattleTank_Public_SpawnPoint_h_13_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USpawnPoint(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USpawnPoint) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USpawnPoint); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USpawnPoint); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USpawnPoint(USpawnPoint&&); \
	NO_API USpawnPoint(const USpawnPoint&); \
public:


#define BattleTank_Source_BattleTank_Public_SpawnPoint_h_13_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USpawnPoint(USpawnPoint&&); \
	NO_API USpawnPoint(const USpawnPoint&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USpawnPoint); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USpawnPoint); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(USpawnPoint)


#define BattleTank_Source_BattleTank_Public_SpawnPoint_h_13_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__SpawnClass() { return STRUCT_OFFSET(USpawnPoint, SpawnClass); } \
	FORCEINLINE static uint32 __PPO__SpawnedActor() { return STRUCT_OFFSET(USpawnPoint, SpawnedActor); }


#define BattleTank_Source_BattleTank_Public_SpawnPoint_h_10_PROLOG
#define BattleTank_Source_BattleTank_Public_SpawnPoint_h_13_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	BattleTank_Source_BattleTank_Public_SpawnPoint_h_13_PRIVATE_PROPERTY_OFFSET \
	BattleTank_Source_BattleTank_Public_SpawnPoint_h_13_RPC_WRAPPERS \
	BattleTank_Source_BattleTank_Public_SpawnPoint_h_13_INCLASS \
	BattleTank_Source_BattleTank_Public_SpawnPoint_h_13_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define BattleTank_Source_BattleTank_Public_SpawnPoint_h_13_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	BattleTank_Source_BattleTank_Public_SpawnPoint_h_13_PRIVATE_PROPERTY_OFFSET \
	BattleTank_Source_BattleTank_Public_SpawnPoint_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	BattleTank_Source_BattleTank_Public_SpawnPoint_h_13_INCLASS_NO_PURE_DECLS \
	BattleTank_Source_BattleTank_Public_SpawnPoint_h_13_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> BATTLETANK_API UClass* StaticClass<class USpawnPoint>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID BattleTank_Source_BattleTank_Public_SpawnPoint_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
