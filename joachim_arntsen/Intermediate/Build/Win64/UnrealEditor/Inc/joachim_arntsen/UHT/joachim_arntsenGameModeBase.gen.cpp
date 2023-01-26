// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "joachim_arntsen/joachim_arntsenGameModeBase.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodejoachim_arntsenGameModeBase() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	JOACHIM_ARNTSEN_API UClass* Z_Construct_UClass_Ajoachim_arntsenGameModeBase();
	JOACHIM_ARNTSEN_API UClass* Z_Construct_UClass_Ajoachim_arntsenGameModeBase_NoRegister();
	UPackage* Z_Construct_UPackage__Script_joachim_arntsen();
// End Cross Module References
	void Ajoachim_arntsenGameModeBase::StaticRegisterNativesAjoachim_arntsenGameModeBase()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(Ajoachim_arntsenGameModeBase);
	UClass* Z_Construct_UClass_Ajoachim_arntsenGameModeBase_NoRegister()
	{
		return Ajoachim_arntsenGameModeBase::StaticClass();
	}
	struct Z_Construct_UClass_Ajoachim_arntsenGameModeBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_Ajoachim_arntsenGameModeBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_joachim_arntsen,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_Ajoachim_arntsenGameModeBase_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "joachim_arntsenGameModeBase.h" },
		{ "ModuleRelativePath", "joachim_arntsenGameModeBase.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_Ajoachim_arntsenGameModeBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<Ajoachim_arntsenGameModeBase>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_Ajoachim_arntsenGameModeBase_Statics::ClassParams = {
		&Ajoachim_arntsenGameModeBase::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x009002ACu,
		METADATA_PARAMS(Z_Construct_UClass_Ajoachim_arntsenGameModeBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_Ajoachim_arntsenGameModeBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_Ajoachim_arntsenGameModeBase()
	{
		if (!Z_Registration_Info_UClass_Ajoachim_arntsenGameModeBase.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_Ajoachim_arntsenGameModeBase.OuterSingleton, Z_Construct_UClass_Ajoachim_arntsenGameModeBase_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_Ajoachim_arntsenGameModeBase.OuterSingleton;
	}
	template<> JOACHIM_ARNTSEN_API UClass* StaticClass<Ajoachim_arntsenGameModeBase>()
	{
		return Ajoachim_arntsenGameModeBase::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(Ajoachim_arntsenGameModeBase);
	Ajoachim_arntsenGameModeBase::~Ajoachim_arntsenGameModeBase() {}
	struct Z_CompiledInDeferFile_FID_Programming_Github_Compulsory_1_joachim_arntsen_Source_joachim_arntsen_joachim_arntsenGameModeBase_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Programming_Github_Compulsory_1_joachim_arntsen_Source_joachim_arntsen_joachim_arntsenGameModeBase_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_Ajoachim_arntsenGameModeBase, Ajoachim_arntsenGameModeBase::StaticClass, TEXT("Ajoachim_arntsenGameModeBase"), &Z_Registration_Info_UClass_Ajoachim_arntsenGameModeBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(Ajoachim_arntsenGameModeBase), 3008802274U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Programming_Github_Compulsory_1_joachim_arntsen_Source_joachim_arntsen_joachim_arntsenGameModeBase_h_3933681708(TEXT("/Script/joachim_arntsen"),
		Z_CompiledInDeferFile_FID_Programming_Github_Compulsory_1_joachim_arntsen_Source_joachim_arntsen_joachim_arntsenGameModeBase_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Programming_Github_Compulsory_1_joachim_arntsen_Source_joachim_arntsen_joachim_arntsenGameModeBase_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
