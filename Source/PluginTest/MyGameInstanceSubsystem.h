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
    // �ʱ�ȭ �Լ� (����ý��� ���� �� ȣ��)
    virtual void Initialize(FSubsystemCollectionBase& Collection) override;

    // ���� �Լ� (����ý��� ���� �� ȣ��)
    virtual void Deinitialize() override;

    // ����� �̸� ���� �Լ�
    UFUNCTION(BlueprintCallable, Category = "MyIDPlugin")
    void SetUserName(const FString& NewName);

    // ����� �̸� �������� �Լ�
    UFUNCTION(BlueprintPure, Category = "MyIDPlugin")
    FString GetUserName() const;

private:
    // ����� �̸��� ������ ����
    FString UserName;
};
