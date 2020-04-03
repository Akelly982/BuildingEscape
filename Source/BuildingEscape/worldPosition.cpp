// Fill out your copyright notice in the Description page of Project Settings.


#include "worldPosition.h"

// Sets default values for this component's properties
UworldPosition::UworldPosition()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;   // if you change this to false it dose not update on every frame from code below

	// ...
}


// Called when the game starts
void UworldPosition::BeginPlay()
{
	Super::BeginPlay();

	// ...
	
}


// Called every frame
void UworldPosition::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	// ...
}

