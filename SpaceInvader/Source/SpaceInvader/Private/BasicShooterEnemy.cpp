

#include "Kismet/GameplayStatics.h"
#include "BasicShooterEnemy.h"

ABasicShooterEnemy::ABasicShooterEnemy() {
	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	ProjectileForwardOffset = 40.f;
	ShotInterval = 0.7f;
	MovmentSpeed = 200.f;
	AggroRange = 1100.f;
	InnerRange = 250.f;
	ProjectileSpeed = 700.f;
}


void ABasicShooterEnemy::Tick(float DeltaTime) {
	Super::Tick(DeltaTime);
	
	
	MoveLogic();
	FiringLogic();

	LookAtPlayer();
}

void ABasicShooterEnemy::BeginPlay() {
	Super::BeginPlay();

	
	
}

void ABasicShooterEnemy::MoveLogic()
{
	if (PlayerPawn == nullptr)
		return;

	if (IsInAgroRange() && !IsInInnerRange())
	{
		FVector ToPlayerVector = PlayerPawn->GetActorLocation() - GetActorLocation();
		ToPlayerVector.Z = 0.f;

		Move(ToPlayerVector);
	}

}

void ABasicShooterEnemy::FiringLogic()
{
	if (PlayerPawn == nullptr)
		return;
	LastShotTime += UGameplayStatics::GetWorldDeltaSeconds(this);
	if (IsInAgroRange() && ShotInterval <= LastShotTime)
	{
		FireAtPlayer();
		LastShotTime = 0.f;
	}

}
