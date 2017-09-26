// Fill out your copyright notice in the Description page of Project Settings.

#include "SecondComponent.h"
#include "BuildingEscape.h"

// Sets default values for this component's properties
USecondComponent::USecondComponent()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;

	UE_LOG( LogTemp, Warning, TEXT( "Position Report reporting for duty on Rock!" ) );
}


// Called when the game starts
void USecondComponent::BeginPlay()
{
	Super::BeginPlay();

	UE_LOG( LogTemp, Warning, TEXT( "Position Report reporting for duty on Rock!" ) );
	
}


// Called every frame
void USecondComponent::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	// ...
}

