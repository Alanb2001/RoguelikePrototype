#pragma once

#include "GameFramework/GameMode.h"

#include "ModularGameMode.generated.h"

class UObject;

/* Pair this with a ModularGameStateBase */
UCLASS(Blueprintable)
class ROGUELIKEPROTOTYPE_API AModularGameModeBase : public AGameModeBase
{
	GENERATED_BODY()
	
public:
	AModularGameModeBase(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get());
};

/* Pair this with a ModularGameState */
UCLASS(Blueprintable)
class ROGUELIKEPROTOTYPE_API AModularGameMode : public AGameMode
{
	GENERATED_BODY()
	
public:
	AModularGameMode(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get());
};