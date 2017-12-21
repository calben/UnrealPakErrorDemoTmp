// Fill out your copyright notice in the Description page of Project Settings.

#include "PakUtilitiesFunctionLibrary.h"
//#include "Runtime/PakFile/Public/IPlatformFilePak.h"


//TArray<FString> UPakUtilitiesFunctionLibrary::ListAvailablePakFiles()
//{
//	FPakPlatformFile* PakPlatformFile = new FPakPlatformFile();
//	PakPlatformFile->Initialize(&InnerPlatformFile, TEXT(""));
//
//	PakPlatformFile->Mount(*PakToLoad, 0, *(ModDir /*+ TEXT("/") + ModPakFileName*/));
//
//	TArray<FPakPlatformFile::FPakListEntry> MountedPaks;
//	PakPlatformFile->GetMountedPaks(MountedPaks);
//
//	//ignore first pak, because it is default game pak and we don't need iterate over it
//	for (int32 i = 1; i < MountedPaks.Num(); i++)
//	{
//		const FPakPlatformFile::FPakListEntry& mountedPak = MountedPaks[i];
//		const TMap<FString, FPakDirectory>& pakDirectoryMap = mountedPak.PakFile->GetIndex();
//
//		for (TMap<FString, FPakDirectory>::TConstIterator It(pakDirectoryMap); It; ++It)
//		{
//			FString Key = It.Key();
//			const FPakDirectory& Val = It.Value();
//
//			for (FPakDirectory::TConstIterator It2(Val); It2; ++It2)
//			{
//				FString Key2 = It2.Key();
//				FPakEntry* pakEntry = It2.Value();
//
//				if (Key2.Contains(TEXT(".umap")))
//				{
//					//this is where you will get map name of course if your map have *.umap extension:)
//					Key2 = Key2;
//				}
//			}
//		}
//	}
//}



