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
		int32 a;	//����
	UPROPERTY(EditAnywhere)
		float b;	//�Ǽ�
	UPROPERTY(EditAnywhere)
		bool c;		//������
	UPROPERTY(EditAnywhere)
		FString d;	//���ڿ�
	UPROPERTY(EditAnywhere)
		FVector e;	//��ġ (x,y,z)
	UPROPERTY(EditAnywhere)
		FRotator f; //ȸ�� (x:roll,y:pitch,z:yaw)

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
