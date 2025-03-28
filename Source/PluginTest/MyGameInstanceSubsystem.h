// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Subsystems/GameInstanceSubsystem.h"
#include "MyGameInstanceSubsystem.generated.h"

/**
 * 
 */
UCLASS()
class PLUGINTEST_API UMyGameInstanceSubsystem : public UGameInstanceSubsystem
{
	GENERATED_BODY()
	
public:
    // 초기화 함수 (서브시스템 시작 시 호출)
    virtual void Initialize(FSubsystemCollectionBase& Collection) override;

    // 종료 함수 (서브시스템 종료 시 호출)
    virtual void Deinitialize() override;

    // 사용자 이름 설정 함수
    UFUNCTION(BlueprintCallable, Category = "MyIDPlugin")
    void SetUserName(const FString& NewName);

    // 사용자 이름 가져오기 함수
    UFUNCTION(BlueprintPure, Category = "MyIDPlugin")
    FString GetUserName() const;

private:
    // 사용자 이름을 저장할 변수
    FString UserName;
};
