// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Pawn.h"
#include "TicTacToe.generated.h"

class USpringArmComponent;
class UCameraComponent;
class UMaterial;

UCLASS()
class JOACHIM_ARNTSEN_API ATicTacToe : public APawn
{
	GENERATED_BODY()

public:
	// Sets default values for this pawn's properties
	ATicTacToe();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

private:

	UPROPERTY(VisibleAnywhere)
	UStaticMeshComponent* Mesh1;
	UPROPERTY(VisibleAnywhere)
	UStaticMeshComponent* Mesh2;
	UPROPERTY(VisibleAnywhere)
	UStaticMeshComponent* Mesh3;
	UPROPERTY(VisibleAnywhere)
	UStaticMeshComponent* Mesh4;
	UPROPERTY(VisibleAnywhere)
	UStaticMeshComponent* Mesh5;
	UPROPERTY(VisibleAnywhere)
	UStaticMeshComponent* Mesh6;
	UPROPERTY(VisibleAnywhere)
	UStaticMeshComponent* Mesh7;
	UPROPERTY(VisibleAnywhere)
	UStaticMeshComponent* Mesh8;
	UPROPERTY(VisibleAnywhere)
	UStaticMeshComponent* Mesh9;

	UPROPERTY(VisibleAnywhere)
	USpringArmComponent* SpringArm;

	UCameraComponent* Camera;

	UPROPERTY(EditAnywhere)
	UMaterial* Red;

	UPROPERTY(EditAnywhere)
	UMaterial* Blue;

	void ChangeColorRed();

	void ChangeColorBlue();

	void Change1();
	void Change2();
	void Change3();
	void Change4();
	void Change5();
	void Change6();
	void Change7();
	void Change8();
	void Change9();
};
