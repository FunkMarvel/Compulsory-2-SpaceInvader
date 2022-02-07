// Fill out your copyright notice in the Description page of Project Settings.


#include "ShipPawn.h"
#include "GameFramework/PlayerInput.h"
#include "Components/InputComponent.h"
#include "BulletActor.h"
#include "Kismet/GameplayStatics.h"
#include "Engine/World.h"
#include "Components/BoxComponent.h"
#include "Camera/CameraActor.h"
#include "Engine/Engine.h"

static void InitializeDefaultPawnInputBinding() {
	static bool BindingsAdded{false};
	if (!BindingsAdded) {
		BindingsAdded = true;

		UPlayerInput::AddEngineDefinedAxisMapping(FInputAxisKeyMapping("UpDown",EKeys::W,1.f));
		UPlayerInput::AddEngineDefinedAxisMapping(FInputAxisKeyMapping("UpDown",EKeys::S,-1.f));

		UPlayerInput::AddEngineDefinedAxisMapping(FInputAxisKeyMapping("LeftRight",EKeys::D,1.f));
		UPlayerInput::AddEngineDefinedAxisMapping(FInputAxisKeyMapping("LeftRight",EKeys::A,-1.f));

		UPlayerInput::AddEngineDefinedActionMapping(FInputActionKeyMapping("Shoot",EKeys::SpaceBar));
		UPlayerInput::AddEngineDefinedActionMapping(FInputActionKeyMapping("Reload",EKeys::R));
	}
}

// Sets default values
AShipPawn::AShipPawn()
{
 	// Set this pawn to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	static ConstructorHelpers::FObjectFinder<UStaticMesh> SphereMesh(TEXT("StaticMesh'/Game/Models/MaterialSphere.MaterialSphere'"));

	PlayerMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Player Mesh"));
	SetRootComponent(PlayerMesh);
	PlayerMesh->SetStaticMesh(SphereMesh.Object);

	SpringArm = CreateDefaultSubobject<USpringArmComponent>(TEXT("Spring Arm"));
	SpringArm->bDoCollisionTest = false;
	SpringArm->SetUsingAbsoluteRotation(true);
	SpringArm->SetRelativeRotation(FRotator(-30.f, 0.f, 0.f));
	SpringArm->TargetArmLength = 1200.f;
	SpringArm->bEnableCameraLag = false;
	SpringArm->CameraLagSpeed = 5.f;

	SpringArm->SetupAttachment(PlayerMesh);

	Camera = CreateDefaultSubobject<UCameraComponent>(TEXT("Camera"));
	Camera->bUsePawnControlRotation = false;
	Camera->SetupAttachment(SpringArm, USpringArmComponent::SocketName);
}

// Called when the game starts or when spawned
void AShipPawn::BeginPlay()
{
	Super::BeginPlay();
	InitLocation = PlayerMesh->GetComponentLocation();
}

// Called every frame
void AShipPawn::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	InContact = false;
	PlayerMesh->AddRelativeLocation(FVector(XValue,YValue,0.f)*Speed);

}

// Called to bind functionality to input
void AShipPawn::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	check(PlayerInputComponent !=nullptr);
	Super::SetupPlayerInputComponent(PlayerInputComponent);
	InitializeDefaultPawnInputBinding();

	PlayerInputComponent->BindAxis("UpDown",this,&AShipPawn::MoveXAxis);
	PlayerInputComponent->BindAxis("LeftRight",this,&AShipPawn::MoveYAxis);
	PlayerInputComponent->BindAction("Shoot",EInputEvent::IE_Pressed,this,&AShipPawn::Shoot);
	PlayerInputComponent->BindAction("Reload",EInputEvent::IE_Pressed,this,&AShipPawn::Reload);

}

void AShipPawn::Reload() {
}

void AShipPawn::Shoot() {
}

void AShipPawn::ResetLoaction() const {
}

void AShipPawn::MoveXAxis(float Value) {
	XValue = Value;
}

void AShipPawn::MoveYAxis(float Value) {
	YValue = Value;
}

void AShipPawn::Dash() {
}

