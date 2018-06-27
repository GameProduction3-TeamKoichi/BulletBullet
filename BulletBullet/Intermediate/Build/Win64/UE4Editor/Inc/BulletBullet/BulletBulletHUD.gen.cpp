// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "BulletBulletHUD.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBulletBulletHUD() {}
// Cross Module References
	BULLETBULLET_API UClass* Z_Construct_UClass_ABulletBulletHUD_NoRegister();
	BULLETBULLET_API UClass* Z_Construct_UClass_ABulletBulletHUD();
	ENGINE_API UClass* Z_Construct_UClass_AHUD();
	UPackage* Z_Construct_UPackage__Script_BulletBullet();
// End Cross Module References
	void ABulletBulletHUD::StaticRegisterNativesABulletBulletHUD()
	{
	}
	UClass* Z_Construct_UClass_ABulletBulletHUD_NoRegister()
	{
		return ABulletBulletHUD::StaticClass();
	}
	UClass* Z_Construct_UClass_ABulletBulletHUD()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_AHUD,
				(UObject* (*)())Z_Construct_UPackage__Script_BulletBullet,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "HideCategories", "Rendering Actor Input Replication" },
				{ "IncludePath", "BulletBulletHUD.h" },
				{ "ModuleRelativePath", "BulletBulletHUD.h" },
				{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
			};
#endif
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<ABulletBulletHUD>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&ABulletBulletHUD::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x0080028Cu,
				nullptr, 0,
				nullptr, 0,
				"Game",
				&StaticCppClassTypeInfo,
				nullptr, 0,
				METADATA_PARAMS(Class_MetaDataParams, ARRAY_COUNT(Class_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUClass(OuterClass, ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ABulletBulletHUD, 1486522085);
	static FCompiledInDefer Z_CompiledInDefer_UClass_ABulletBulletHUD(Z_Construct_UClass_ABulletBulletHUD, &ABulletBulletHUD::StaticClass, TEXT("/Script/BulletBullet"), TEXT("ABulletBulletHUD"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ABulletBulletHUD);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
