﻿// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "CodingTestActor.generated.h"

UCLASS()
class SHOOTINGCPP_API ACodingTestActor : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ACodingTestActor();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 number1 = 10;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly)
	float number2 = 3.14;

	FString name = "Park Man Jin";
	
	UPROPERTY(EditInstanceOnly)
	FString name2 = TEXT("박만진");
	
	bool isReady = true;
	bool isFinished = false;

};
