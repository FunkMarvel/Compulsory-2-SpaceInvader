// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef SPACEINVADER_BulletActor_generated_h
#error "BulletActor.generated.h already included, missing '#pragma once' in BulletActor.h"
#endif
#define SPACEINVADER_BulletActor_generated_h

#define SpaceInvader_Source_SpaceInvader_Public_BulletActor_h_12_SPARSE_DATA
#define SpaceInvader_Source_SpaceInvader_Public_BulletActor_h_12_RPC_WRAPPERS
#define SpaceInvader_Source_SpaceInvader_Public_BulletActor_h_12_RPC_WRAPPERS_NO_PURE_DECLS
#define SpaceInvader_Source_SpaceInvader_Public_BulletActor_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesABulletActor(); \
	friend struct Z_Construct_UClass_ABulletActor_Statics; \
public: \
	DECLARE_CLASS(ABulletActor, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/SpaceInvader"), NO_API) \
	DECLARE_SERIALIZER(ABulletActor)


#define SpaceInvader_Source_SpaceInvader_Public_BulletActor_h_12_INCLASS \
private: \
	static void StaticRegisterNativesABulletActor(); \
	friend struct Z_Construct_UClass_ABulletActor_Statics; \
public: \
	DECLARE_CLASS(ABulletActor, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/SpaceInvader"), NO_API) \
	DECLARE_SERIALIZER(ABulletActor)


#define SpaceInvader_Source_SpaceInvader_Public_BulletActor_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ABulletActor(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ABulletActor) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ABulletActor); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ABulletActor); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ABulletActor(ABulletActor&&); \
	NO_API ABulletActor(const ABulletActor&); \
public:


#define SpaceInvader_Source_SpaceInvader_Public_BulletActor_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ABulletActor(ABulletActor&&); \
	NO_API ABulletActor(const ABulletActor&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ABulletActor); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ABulletActor); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ABulletActor)


#define SpaceInvader_Source_SpaceInvader_Public_BulletActor_h_12_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__Speed() { return STRUCT_OFFSET(ABulletActor, Speed); } \
	FORCEINLINE static uint32 __PPO__TimeBeforeDestroy() { return STRUCT_OFFSET(ABulletActor, TimeBeforeDestroy); } \
	FORCEINLINE static uint32 __PPO__LifeTime() { return STRUCT_OFFSET(ABulletActor, LifeTime); } \
	FORCEINLINE static uint32 __PPO__BulletFireFX() { return STRUCT_OFFSET(ABulletActor, BulletFireFX); } \
	FORCEINLINE static uint32 __PPO__BulletFireSound() { return STRUCT_OFFSET(ABulletActor, BulletFireSound); }


#define SpaceInvader_Source_SpaceInvader_Public_BulletActor_h_9_PROLOG
#define SpaceInvader_Source_SpaceInvader_Public_BulletActor_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	SpaceInvader_Source_SpaceInvader_Public_BulletActor_h_12_PRIVATE_PROPERTY_OFFSET \
	SpaceInvader_Source_SpaceInvader_Public_BulletActor_h_12_SPARSE_DATA \
	SpaceInvader_Source_SpaceInvader_Public_BulletActor_h_12_RPC_WRAPPERS \
	SpaceInvader_Source_SpaceInvader_Public_BulletActor_h_12_INCLASS \
	SpaceInvader_Source_SpaceInvader_Public_BulletActor_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define SpaceInvader_Source_SpaceInvader_Public_BulletActor_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	SpaceInvader_Source_SpaceInvader_Public_BulletActor_h_12_PRIVATE_PROPERTY_OFFSET \
	SpaceInvader_Source_SpaceInvader_Public_BulletActor_h_12_SPARSE_DATA \
	SpaceInvader_Source_SpaceInvader_Public_BulletActor_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	SpaceInvader_Source_SpaceInvader_Public_BulletActor_h_12_INCLASS_NO_PURE_DECLS \
	SpaceInvader_Source_SpaceInvader_Public_BulletActor_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> SPACEINVADER_API UClass* StaticClass<class ABulletActor>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID SpaceInvader_Source_SpaceInvader_Public_BulletActor_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
