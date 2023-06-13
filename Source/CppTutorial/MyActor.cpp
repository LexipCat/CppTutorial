// Fill out your copyright notice in the Description page of Project Settings.


#include "MyActor.h"

// Sets default values
AMyActor::AMyActor()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	Mesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("MESH"));

	static ConstructorHelpers::FObjectFinder<UStaticMesh> StaticMesh(TEXT("/Script/Engine.StaticMesh'/Game/ParagonRevenant/FX/Meshes/Heroes/SM_PlasmaShot_Shell.SM_PlasmaShot_Shell'"));

	if (StaticMesh.Succeeded())
	{
		UE_LOG(LogTemp, Log, TEXT("Succeeded"));
		Mesh->SetStaticMesh(StaticMesh.Object);
	}
	else
	{
		UE_LOG(LogTemp, Log, TEXT("Faild"));
	}

}

// Called when the game starts or when spawned
void AMyActor::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AMyActor::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	UE_LOG(LogTemp, Log, TEXT("DeltaTime : %f"), DeltaTime);

}

