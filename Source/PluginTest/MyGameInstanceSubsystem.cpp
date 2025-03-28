// Fill out your copyright notice in the Description page of Project Settings.


#include "MyGameInstanceSubsystem.h"

void UMyGameInstanceSubsystem::Initialize(FSubsystemCollectionBase& Collection)
{
	Super::Initialize(Collection);
	UserName = TEXT("Unknown"); // ±âº»°ª
	UE_LOG(LogTemp, Log, TEXT("MyIDGameInstanceSubsystem Initialized"));
}

void UMyGameInstanceSubsystem::Deinitialize()
{
	Super::Deinitialize();
	UE_LOG(LogTemp, Log, TEXT("MyIDGameInstanceSubsystem Deinitialized"));
}

void UMyGameInstanceSubsystem::SetUserName(const FString& NewName)
{
	UserName = NewName;
	UE_LOG(LogTemp, Log, TEXT("UserName set to: %s"), *UserName);
}

FString UMyGameInstanceSubsystem::GetUserName() const
{
	return UserName;
}