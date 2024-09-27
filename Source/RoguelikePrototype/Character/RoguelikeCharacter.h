#pragma once

#include "AbilitySystemInterface.h"
#include "GameplayCueInterface.h"
#include "GameplayTagAssetInterface.h"
#include "ModularCharacter.h"

#include "RoguelikeCharacter.generated.h"

class AActor;
class AController;
class FLifetimeProperty;
class IRepChangedPropertyTracker;
class UAbilitySystemComponent;
class UInputComponent;
class UObject;
struct FFrame;
struct FGameplayTag;
struct FGameplayTagContainer;

UCLASS(Config = Game, Meta = (ShortTooltip = "The base character pawn class used by this project."))
class ROGUELIKEPROTOTYPE_API ARoguelikeCharacter : public ACharacter /*public AModularCharacter, public IAbilitySystemInterface, public IGameplayCueInterface, public IGameplayTagAssetInterface*/ 
{
	GENERATED_BODY()

public:
	ARoguelikeCharacter(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get());

	//UFUNCTION(BlueprintCallable, Category = "Roguelike|Character")
	//ARoguelikeController
	
protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

};
