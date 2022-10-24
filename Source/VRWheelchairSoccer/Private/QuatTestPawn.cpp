// Fill out your copyright notice in the Description page of Project Settings.


#include "QuatTestPawn.h"

// Sets default values
AQuatTestPawn::AQuatTestPawn()
{
 	// Set this pawn to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AQuatTestPawn::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AQuatTestPawn::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void AQuatTestPawn::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}

void AQuatTestPawn::RotateQuaternions(UPrimitiveComponent* wheelRef, float yawVal)
{
	FQuat myActorQuat = GetActorQuat();
	float myForce;
	myForce = -1000000000.0f;

	if (yawVal <= 0.0f && yawVal >=-180.0f)
	{
		wheelRef->AddTorque(myActorQuat.RotateVector(FVector(myForce, 0.0f, 0.0f)), NAME_None, false);
	}
	else {
		wheelRef->AddTorque(myActorQuat.RotateVector(FVector(0.0f, myForce, 0.0f)), NAME_None, false);
	}

}

