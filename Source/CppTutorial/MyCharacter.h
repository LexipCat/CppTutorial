// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "MyCharacter.generated.h"

UCLASS()
class CPPTUTORIAL_API AMyCharacter : public ACharacter
{
	GENERATED_BODY()
private:
	UPROPERTY(EditAnywhere)
		int32 a;	//정수
	UPROPERTY(EditAnywhere)
		float b;	//실수
	UPROPERTY(EditAnywhere)
		bool c;		//참거짓
	UPROPERTY(EditAnywhere)
		FString d;	//문자열
	UPROPERTY(EditAnywhere)
		FVector e;	//위치 (x,y,z)
	UPROPERTY(EditAnywhere)
		FRotator f; //회전 (x:roll,y:pitch,z:yaw)

public:
	// Sets default values for this character's properties
	AMyCharacter();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

};
