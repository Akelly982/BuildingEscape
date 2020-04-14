// Fill out your copyright notice in the Description page of Project Settings.


#include "worldPosition.h"
#include "GameFramework\Actor.h"

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

	FString Log = TEXT("Hello");
	FString* PtrLog = &Log;    // & is (the address off)    * is (indicating a Pointer)


	// short intro to pointers

	//   below are the same thing
	//Log.Len();    // standard through the FSTRING
	//(*PtrLog).Len();    // through the pointer dereferenced 
	//PtrLog->Len();      // through the pointer useing an accessor

	//UE_LOG(LogTemp, Warning, TEXT("%s"), *Log);    // %s dose not get shown  
												   // * operator before *Log is refered to as an overload/overloaded in this statement

	//UE_LOG(LogTemp, Warning, TEXT("%s"), **PtrLog);     // **PrtLog   Overloaded and dereferenced
	

	


	// Getting the Actors Name to print

	//FString OctorName = GetOwner()->GetName();     // GetOwner()->GetName(); gives you the name of your actor.
	//UE_LOG(LogTemp, Warning, TEXT("my name is %s"), *actorName);
	//UE_LOG(LogTemp, Warning, TEXT("my name is %s"), *GetOwner()->GetName());

	

	// Getting the actors location to print
	//FString ObjectPosition = GetOwner()->GetActorLocation().ToString();
	//UE_LOG(LogTemp, Warning, TEXT("my loaction is %s"), *ObjectPosition);



	FString ObjectName = GetOwner()->GetName();    // get object name
	FString ObjectLocation = GetOwner()->GetActorLocation().ToString();   // get object XYZ location
	FString ObjectLocation2 = GetOwner()->GetActorTransform().GetLocation().ToString(); // same as above (but follow editor view components)
	UE_LOG(LogTemp, Warning, TEXT("%s - location in world is %s"), *ObjectName, *ObjectLocation2);   // output to console

}


// Called every frame
void UworldPosition::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	// ...
}

