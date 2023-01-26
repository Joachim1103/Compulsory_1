// Fill out your copyright notice in the Description page of Project Settings.


#include "TicTacToe.h"
#include "Components/StaticMeshComponent.h"
#include "GameFramework/SpringArmComponent.h"
#include "Camera/CameraComponent.h"
#include "Components/InputComponent.h"

// Sets default values
ATicTacToe::ATicTacToe()
{
 	// Set this pawn to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	// Create the Mesh
	Mesh5 = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Mesh5"));
	// Set the mesh as root component
	RootComponent = Mesh5;

	Mesh1 = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Mesh1"));
	Mesh1->SetRelativeLocation(FVector(250, -250, 0));

	Mesh2 = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Mesh2"));
	Mesh2->SetRelativeLocation(FVector(250, 0, 0));

	Mesh3 = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Mesh3"));
	Mesh3->SetRelativeLocation(FVector(250, 250, 0));

	Mesh4 = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Mesh4"));
	Mesh4->SetRelativeLocation(FVector(0, -250, 0));

	Mesh6 = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Mesh6"));
	Mesh6->SetRelativeLocation(FVector(0, 250, 0));

	Mesh7 = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Mesh7"));
	Mesh7->SetRelativeLocation(FVector(-250, -250, 0));

	Mesh8 = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Mesh8"));
	Mesh8->SetRelativeLocation(FVector(-250, 0, 0));

	Mesh9 = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Mesh9"));
	Mesh9->SetRelativeLocation(FVector(-250, 250, 0));

	SpringArm = CreateDefaultSubobject<USpringArmComponent>(TEXT("Springarm"));
	SpringArm->SetupAttachment(GetRootComponent());
	SpringArm->TargetArmLength = 1000.f;
	SpringArm->SetRelativeRotation(FRotator(-45.f, 0.f, 0.f));

	Camera = CreateDefaultSubobject<UCameraComponent>(TEXT("Camera"));
	Camera->SetupAttachment(SpringArm, USpringArmComponent::SocketName);

	AutoPossessPlayer = EAutoReceiveInput::Player0;

}

// Called when the game starts or when spawned
void ATicTacToe::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ATicTacToe::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}

// Called to bind functionality to input
void ATicTacToe::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

	PlayerInputComponent->BindAction("ChangeColorRed", IE_Pressed, this, &ATicTacToe::ChangeColorRed);

	PlayerInputComponent->BindAction("ChangeColorBlue", IE_Pressed, this, &ATicTacToe::ChangeColorBlue);

	PlayerInputComponent->BindAction("Change1", IE_Pressed, this, &ATicTacToe::Change1);

	PlayerInputComponent->BindAction("Change2", IE_Pressed, this, &ATicTacToe::Change2);

	PlayerInputComponent->BindAction("Change3", IE_Pressed, this, &ATicTacToe::Change3);

	PlayerInputComponent->BindAction("Change4", IE_Pressed, this, &ATicTacToe::Change4);

	PlayerInputComponent->BindAction("Change5", IE_Pressed, this, &ATicTacToe::Change5);

	PlayerInputComponent->BindAction("Change6", IE_Pressed, this, &ATicTacToe::Change6);

	PlayerInputComponent->BindAction("Change7", IE_Pressed, this, &ATicTacToe::Change7);

	PlayerInputComponent->BindAction("Change8", IE_Pressed, this, &ATicTacToe::Change8);

	PlayerInputComponent->BindAction("Change9", IE_Pressed, this, &ATicTacToe::Change9);

}

void ATicTacToe::ChangeColorRed()
{
	Mesh5->SetMaterial(0, Red);
}

void ATicTacToe::ChangeColorBlue()
{
	Mesh5->SetMaterial(0, Blue);
}

void ATicTacToe::Change1()
{
	Mesh1->SetMaterial(0, Red);
}

void ATicTacToe::Change2()
{
	Mesh2->SetMaterial(0, Red);
}

void ATicTacToe::Change3()
{
	Mesh3->SetMaterial(0, Red);
}

void ATicTacToe::Change4()
{
	Mesh4->SetMaterial(0, Red);
}

void ATicTacToe::Change5()
{
	Mesh5->SetMaterial(0, Red);
}

void ATicTacToe::Change6()
{
	Mesh6->SetMaterial(0, Red);
}

void ATicTacToe::Change7()
{
	Mesh7->SetMaterial(0, Red);
}

void ATicTacToe::Change8()
{
	Mesh8->SetMaterial(0, Red);
}

void ATicTacToe::Change9()
{
	Mesh9->SetMaterial(0, Red);
}


