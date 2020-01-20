// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UPrimitiveComponent;
class AActor;
struct FVector;
struct FHitResult;
#ifdef BATTLETANK_SprungWheel_generated_h
#error "SprungWheel.generated.h already included, missing '#pragma once' in SprungWheel.h"
#endif
#define BATTLETANK_SprungWheel_generated_h

#define BattleTank_Source_BattleTank_Public_SprungWheel_h_13_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnHit) \
	{ \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_HitComponent); \
		P_GET_OBJECT(AActor,Z_Param_OtherActor); \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp); \
		P_GET_STRUCT(FVector,Z_Param_NormalImpulse); \
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_Hit); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnHit(Z_Param_HitComponent,Z_Param_OtherActor,Z_Param_OtherComp,Z_Param_NormalImpulse,Z_Param_Out_Hit); \
		P_NATIVE_END; \
	}


#define BattleTank_Source_BattleTank_Public_SprungWheel_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnHit) \
	{ \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_HitComponent); \
		P_GET_OBJECT(AActor,Z_Param_OtherActor); \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp); \
		P_GET_STRUCT(FVector,Z_Param_NormalImpulse); \
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_Hit); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnHit(Z_Param_HitComponent,Z_Param_OtherActor,Z_Param_OtherComp,Z_Param_NormalImpulse,Z_Param_Out_Hit); \
		P_NATIVE_END; \
	}


#define BattleTank_Source_BattleTank_Public_SprungWheel_h_13_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesASprungWheel(); \
	friend struct Z_Construct_UClass_ASprungWheel_Statics; \
public: \
	DECLARE_CLASS(ASprungWheel, AActor, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/BattleTank"), NO_API) \
	DECLARE_SERIALIZER(ASprungWheel)


#define BattleTank_Source_BattleTank_Public_SprungWheel_h_13_INCLASS \
private: \
	static void StaticRegisterNativesASprungWheel(); \
	friend struct Z_Construct_UClass_ASprungWheel_Statics; \
public: \
	DECLARE_CLASS(ASprungWheel, AActor, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/BattleTank"), NO_API) \
	DECLARE_SERIALIZER(ASprungWheel)


#define BattleTank_Source_BattleTank_Public_SprungWheel_h_13_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ASprungWheel(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ASprungWheel) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ASprungWheel); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASprungWheel); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ASprungWheel(ASprungWheel&&); \
	NO_API ASprungWheel(const ASprungWheel&); \
public:


#define BattleTank_Source_BattleTank_Public_SprungWheel_h_13_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ASprungWheel(ASprungWheel&&); \
	NO_API ASprungWheel(const ASprungWheel&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ASprungWheel); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASprungWheel); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ASprungWheel)


#define BattleTank_Source_BattleTank_Public_SprungWheel_h_13_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__Wheel() { return STRUCT_OFFSET(ASprungWheel, Wheel); } \
	FORCEINLINE static uint32 __PPO__Axle() { return STRUCT_OFFSET(ASprungWheel, Axle); } \
	FORCEINLINE static uint32 __PPO__MassWheelConstraint() { return STRUCT_OFFSET(ASprungWheel, MassWheelConstraint); } \
	FORCEINLINE static uint32 __PPO__AxleWheelConstraint() { return STRUCT_OFFSET(ASprungWheel, AxleWheelConstraint); }


#define BattleTank_Source_BattleTank_Public_SprungWheel_h_10_PROLOG
#define BattleTank_Source_BattleTank_Public_SprungWheel_h_13_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	BattleTank_Source_BattleTank_Public_SprungWheel_h_13_PRIVATE_PROPERTY_OFFSET \
	BattleTank_Source_BattleTank_Public_SprungWheel_h_13_RPC_WRAPPERS \
	BattleTank_Source_BattleTank_Public_SprungWheel_h_13_INCLASS \
	BattleTank_Source_BattleTank_Public_SprungWheel_h_13_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define BattleTank_Source_BattleTank_Public_SprungWheel_h_13_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	BattleTank_Source_BattleTank_Public_SprungWheel_h_13_PRIVATE_PROPERTY_OFFSET \
	BattleTank_Source_BattleTank_Public_SprungWheel_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	BattleTank_Source_BattleTank_Public_SprungWheel_h_13_INCLASS_NO_PURE_DECLS \
	BattleTank_Source_BattleTank_Public_SprungWheel_h_13_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> BATTLETANK_API UClass* StaticClass<class ASprungWheel>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID BattleTank_Source_BattleTank_Public_SprungWheel_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
