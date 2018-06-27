// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectMacros.h"
#include "ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UPrimitiveComponent;
class AActor;
struct FVector;
struct FHitResult;
#ifdef BULLETBULLET_BulletBulletProjectile_generated_h
#error "BulletBulletProjectile.generated.h already included, missing '#pragma once' in BulletBulletProjectile.h"
#endif
#define BULLETBULLET_BulletBulletProjectile_generated_h

#define BulletBullet_Source_BulletBullet_BulletBulletProjectile_h_12_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnHit) \
	{ \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_HitComp); \
		P_GET_OBJECT(AActor,Z_Param_OtherActor); \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp); \
		P_GET_STRUCT(FVector,Z_Param_NormalImpulse); \
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_Hit); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnHit(Z_Param_HitComp,Z_Param_OtherActor,Z_Param_OtherComp,Z_Param_NormalImpulse,Z_Param_Out_Hit); \
		P_NATIVE_END; \
	}


#define BulletBullet_Source_BulletBullet_BulletBulletProjectile_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnHit) \
	{ \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_HitComp); \
		P_GET_OBJECT(AActor,Z_Param_OtherActor); \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp); \
		P_GET_STRUCT(FVector,Z_Param_NormalImpulse); \
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_Hit); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnHit(Z_Param_HitComp,Z_Param_OtherActor,Z_Param_OtherComp,Z_Param_NormalImpulse,Z_Param_Out_Hit); \
		P_NATIVE_END; \
	}


#define BulletBullet_Source_BulletBullet_BulletBulletProjectile_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesABulletBulletProjectile(); \
	friend BULLETBULLET_API class UClass* Z_Construct_UClass_ABulletBulletProjectile(); \
public: \
	DECLARE_CLASS(ABulletBulletProjectile, AActor, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/BulletBullet"), NO_API) \
	DECLARE_SERIALIZER(ABulletBulletProjectile) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC}; \
	static const TCHAR* StaticConfigName() {return TEXT("Game");} \



#define BulletBullet_Source_BulletBullet_BulletBulletProjectile_h_12_INCLASS \
private: \
	static void StaticRegisterNativesABulletBulletProjectile(); \
	friend BULLETBULLET_API class UClass* Z_Construct_UClass_ABulletBulletProjectile(); \
public: \
	DECLARE_CLASS(ABulletBulletProjectile, AActor, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/BulletBullet"), NO_API) \
	DECLARE_SERIALIZER(ABulletBulletProjectile) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC}; \
	static const TCHAR* StaticConfigName() {return TEXT("Game");} \



#define BulletBullet_Source_BulletBullet_BulletBulletProjectile_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ABulletBulletProjectile(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ABulletBulletProjectile) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ABulletBulletProjectile); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ABulletBulletProjectile); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ABulletBulletProjectile(ABulletBulletProjectile&&); \
	NO_API ABulletBulletProjectile(const ABulletBulletProjectile&); \
public:


#define BulletBullet_Source_BulletBullet_BulletBulletProjectile_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ABulletBulletProjectile(ABulletBulletProjectile&&); \
	NO_API ABulletBulletProjectile(const ABulletBulletProjectile&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ABulletBulletProjectile); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ABulletBulletProjectile); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ABulletBulletProjectile)


#define BulletBullet_Source_BulletBullet_BulletBulletProjectile_h_12_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__CollisionComp() { return STRUCT_OFFSET(ABulletBulletProjectile, CollisionComp); } \
	FORCEINLINE static uint32 __PPO__ProjectileMovement() { return STRUCT_OFFSET(ABulletBulletProjectile, ProjectileMovement); }


#define BulletBullet_Source_BulletBullet_BulletBulletProjectile_h_9_PROLOG
#define BulletBullet_Source_BulletBullet_BulletBulletProjectile_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	BulletBullet_Source_BulletBullet_BulletBulletProjectile_h_12_PRIVATE_PROPERTY_OFFSET \
	BulletBullet_Source_BulletBullet_BulletBulletProjectile_h_12_RPC_WRAPPERS \
	BulletBullet_Source_BulletBullet_BulletBulletProjectile_h_12_INCLASS \
	BulletBullet_Source_BulletBullet_BulletBulletProjectile_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define BulletBullet_Source_BulletBullet_BulletBulletProjectile_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	BulletBullet_Source_BulletBullet_BulletBulletProjectile_h_12_PRIVATE_PROPERTY_OFFSET \
	BulletBullet_Source_BulletBullet_BulletBulletProjectile_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	BulletBullet_Source_BulletBullet_BulletBulletProjectile_h_12_INCLASS_NO_PURE_DECLS \
	BulletBullet_Source_BulletBullet_BulletBulletProjectile_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID BulletBullet_Source_BulletBullet_BulletBulletProjectile_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
