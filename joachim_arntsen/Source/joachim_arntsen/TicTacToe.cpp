// Fill out your copyright notice in the Description page of Project Settings.


#include "TicTacToe.h"

#include "HDRHelper.h"
#include "Components/SphereComponent.h"
#include "Containers/Array.h"
#include "Components/StaticMeshComponent.h"
#include "Components/StaticMeshComponent.h"
#include "GameFramework/SpringArmComponent.h"
#include "Camera/CameraComponent.h"
#include "Components/InputComponent.h"
#include "UObject/ConstructorHelpers.h"
#include "Engine/Engine.h"

// Sets default values
ATicTacToe::ATicTacToe()
{
 	// Set this pawn to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	Meshes.Init(NULL, 9);

	Meshes[0] = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Mesh1"));
	Meshes[0]->SetRelativeLocation(FVector(250, -250, 0));

	Meshes[1] = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Mesh2"));
	Meshes[1]->SetRelativeLocation(FVector(250, 0, 0));

	Meshes[2] = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Mesh3"));
	Meshes[2]->SetRelativeLocation(FVector(250, 250, 0));

	Meshes[3] = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Mesh4"));
	Meshes[3]->SetRelativeLocation(FVector(0, -250, 0));

	Meshes[4] = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Mesh5"));
	Meshes[4]->SetRelativeLocation(FVector(0, 0, 0));

	Meshes[5] = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Mesh6"));
	Meshes[5]->SetRelativeLocation(FVector(0, 250, 0));

	Meshes[6] = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Mesh7"));
	Meshes[6]->SetRelativeLocation(FVector(-250, -250, 0));

	Meshes[7] = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Mesh8"));
	Meshes[7]->SetRelativeLocation(FVector(-250, 0, 0));

	Meshes[8] = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Mesh9"));
	Meshes[8]->SetRelativeLocation(FVector(-250, 250, 0));

	RootComponent = Meshes[4];

	static ConstructorHelpers::FObjectFinder<UStaticMesh>
		MeshComponentAsset(TEXT("StaticMeshes'/Game/StarterContent/Props/MaterialSphere.MaterialSphere'"));

	for (int i {}; i < 9; i++)
	{
		if ( i != 4)
		{
			Meshes[i]->SetupAttachment(GetRootComponent());
		}
		Meshes[i]->SetStaticMesh(MeshComponentAsset.Object);
	}

	Red = CreateDefaultSubobject<UMaterial>(TEXT("Red"));
	Blue = CreateDefaultSubobject<UMaterial>(TEXT("Blue"));
	White = CreateDefaultSubobject<UMaterial>(TEXT("White"));

	SpringArm = CreateDefaultSubobject<USpringArmComponent>(TEXT("SpringArmComponent"));
	SpringArm->SetupAttachment(GetRootComponent());
	SpringArm->TargetArmLength = 1000.f;
	SpringArm->SetRelativeRotation(FRotator(-45.f, 0.f, 0.f));

	Camera = CreateDefaultSubobject<UCameraComponent>(TEXT("CameraComponent"));
	Camera->SetupAttachment(SpringArm, USpringArmComponent::SocketName);

	AutoPossessPlayer = EAutoReceiveInput::Player0;

	TurnCounter = 0;
	MeshStatus.Init(NULL, 9);
}

// Called when the game starts or when spawned
void ATicTacToe::BeginPlay()
{
	Super::BeginPlay();

	for (int i{}; i < 9; i++)
	{
		Meshes[i]->SetMaterial(0, White);
	}
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

void ATicTacToe::Change1()
{
	TurnController(0);
}

void ATicTacToe::Change2()
{
	TurnController(1);
}

void ATicTacToe::Change3()
{
	TurnController(2);
}

void ATicTacToe::Change4()
{
	TurnController(3);
}

void ATicTacToe::Change5()
{
	TurnController(4);
}

void ATicTacToe::Change6()
{
	TurnController(5);
}

void ATicTacToe::Change7()
{
	TurnController(6);
}

void ATicTacToe::Change8()
{
	TurnController(7);
}

void ATicTacToe::Change9()
{
	TurnController(8);
}

void ATicTacToe::TurnController(int meshindex)
{
	if (MeshStatus[meshindex] == true)
	{
		UE_LOG(LogTemp, Warning, TEXT("That index is aleady taken"));

		return;
	}

	if (TurnCounter % 2 == 0)
	{
		Meshes[meshindex]->SetMaterial(0, Blue);
	}
	else if (TurnCounter % 2 == 1)
	{
		Meshes[meshindex]->SetMaterial(0, Red);
	}
	MeshStatus[meshindex] = true;
	TurnCounter++;
}

bool ATicTacToe::WinConditionBlue()
{
	for (int i = 0; i < 8; i++) 
	{
		bool WinnerBlue = (Meshes[0] == Meshes[1]) && (Meshes[1] == Meshes[2]);
		if (WinnerBlue) return true;

		WinnerBlue = (Meshes[3] == Meshes[4]) && (Meshes[4] == Meshes[5]);
		if (WinnerBlue) return true;

		WinnerBlue = (Meshes[6] == Meshes[7]) && (Meshes[7] == Meshes[8]);
		if (WinnerBlue) return true;

		WinnerBlue = (Meshes[0] == Meshes[3]) && (Meshes[3] == Meshes[6]);
		if (WinnerBlue) return true;

		WinnerBlue = (Meshes[1] == Meshes[4]) && (Meshes[4] == Meshes[7]);
		if (WinnerBlue) return true;

		WinnerBlue = (Meshes[2] == Meshes[5]) && (Meshes[5] == Meshes[8]);
		if (WinnerBlue) return true;

		WinnerBlue = (Meshes[0] == Meshes[4]) && (Meshes[4] == Meshes[8]);
		if (WinnerBlue) return true;

		WinnerBlue = (Meshes[2] == Meshes[4]) && (Meshes[4] == Meshes[6]);
		if (WinnerBlue) return true;
	}

	return false;
}

bool ATicTacToe::WinConditionRed()
{
	for (int i = 0; i < 8; i++)
	{
		bool WinnerRed = (Meshes[0] == Meshes[1]) && (Meshes[1] == Meshes[2]);
		if (WinnerRed) return true;

		WinnerRed = (Meshes[3] == Meshes[4]) && (Meshes[4] == Meshes[5]);
		if (WinnerRed) return true;

		WinnerRed = (Meshes[6] == Meshes[7]) && (Meshes[7] == Meshes[8]);
		if (WinnerRed) return true;

		WinnerRed = (Meshes[0] == Meshes[3]) && (Meshes[3] == Meshes[6]);
		if (WinnerRed) return true;

		WinnerRed = (Meshes[1] == Meshes[4]) && (Meshes[4] == Meshes[7]);
		if (WinnerRed) return true;

		WinnerRed = (Meshes[2] == Meshes[5]) && (Meshes[5] == Meshes[8]);
		if (WinnerRed) return true;

		WinnerRed = (Meshes[0] == Meshes[4]) && (Meshes[4] == Meshes[8]);
		if (WinnerRed) return true;

		WinnerRed = (Meshes[2] == Meshes[4]) && (Meshes[4] == Meshes[6]);
		if (WinnerRed) return true;
	}

	return false;
}


void ATicTacToe::EndGame()
{
	const bool WinnerRed = WinConditionRed();
	if (WinnerRed)
	{
		GEngine->AddOnScreenDebugMessage(-1, 15.0f, FColor::Yellow, TEXT("Player 1 (Blue Player) Wins"));
	}
	else if (WinConditionRed() == true)
	{
		GEngine->AddOnScreenDebugMessage(-1, 15.0f, FColor::Yellow, TEXT("Player 2 (Red Player) Wins"));
	}
}




