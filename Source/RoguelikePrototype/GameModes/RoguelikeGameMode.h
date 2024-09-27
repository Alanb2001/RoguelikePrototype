#pragma once

#include "ModularGameMode.h"

#include "RoguelikeGameMode.generated.h"

class AActor;
class AController;
class AGameModeBase;
class APawn;
class APlayerController;
class UClass;
class UObject;
struct FFrame;
struct FPrimaryAssetId;
enum class ECommonSessionOnLineNode : uint8;

UCLASS(Config = Game, Meta = (ShortTooltip = "The base game mode class used by this project."))
class ROGUELIKEPROTOTYPE_API ARoguelikeGameMode : public AModularGameModeBase
{
	GENERATED_BODY()

public:
	ARoguelikeGameMode(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get());
	
	//~AGameModeBase interface
	//virtual void InitGame(const FString& MapName, const FString& Options, FString& ErrorMessage) override;
	//virtual UClass* GetDefaultPawnClassForController_Implementation(AController* InController) override;
	//virtual APawn* SpawnDefaultPawnAtTransform_Implementation(AController* NewPlayer, const FTransform& SpawnTransform) override;
	//virtual bool ShouldSpawnAtStartSpot(AController* Player) override;
	//virtual void HandleStartingNewPlayer_Implementation(APlayerController* NewPlayer) override;
	//virtual AActor* ChoosePlayerStart_Implementation(AController* Player) override;
	//virtual void FinishRestartPlayer(AController* NewPlayer, const FRotator& StartRotation) override;
	//virtual bool PlayerCanRestart_Implementation(APlayerController* Player) override;
	//virtual void InitGameState() override;
	//virtual bool UpdatePlayerStartSpot(AController* Player, const FString& Portal, FString& OutErrorMessage) override;
	//virtual void GenericPlayerInitialization(AController* NewPlayer) override;
	//virtual void FailedToRestartPlayer(AController* NewPlayer) override;
	//~End of AGameModeBase interface

	// Restart (respawn) the specified player or bot next frame
	// - If bForceReset is true, the controller will be reset this frame (abandoning the currently possessed pawn, if any)
	//UFUNCTION(BlueprintCallable)
	//void RequestPlayerRestartNextFrame(AController* Controller, bool bForceReset = false);

	// Agnostic version of PlayerCanRestart that can be used for both player bots and players
	//virtual bool ControllerCanRestart(AController* Controller);
};
