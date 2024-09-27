#pragma once

#include "CommonPlayerController.h"

#include "RoguelikePlayerController.generated.h"

struct FGenericTeamId;

class APawn;
class APlayerState;
class FPrimitiveComponentId;
class IInputInterface;
class UObject;
class UPlayer;
struct FFrame;

UCLASS(Config = Game, Meta = (ShortTooltip = "The base player controller calss used by this project."))
class ROGUELIKEPROTOTYPE_API ARoguelikePlayerController : public ACommonPlayerController
{
	GENERATED_BODY()

public:
	ARoguelikePlayerController(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get());

	//~AActor interface
	virtual void PreInitializeComponents() override;
	virtual void BeginPlay() override;
	//~End of AActor interface

	//~AController interface
	virtual void OnPossess(APawn* InPawn) override;
	virtual void OnUnPossess() override;
	virtual void InitPlayerState() override;
	virtual void CleanupPlayerState() override;
	//~End of AController interface

	//~APlayerController interface
	virtual void ReceivedPlayer() override;
	virtual void PlayerTick(float DeltaTime) override;
	virtual void SetPlayer(UPlayer* InPlayer) override;
	virtual void AddCheats(bool bForce) override;
	virtual void UpdateForceFeedback(IInputInterface* InputInterface, const int32 ControllerId) override;
	virtual void UpdateHiddenComponents(const FVector& ViewLocation, TSet<FPrimitiveComponentId>&) override;
	virtual void PreProcessInput(const float DeltaTime, const bool bGamePaused) override;
	virtual void PostProcessInput(const float DeltaTime, const bool bGamePaused) override;
	//~End of APlayerController interface

	UFUNCTION(BlueprintCallable, Category = "Roguelike|Character")
	void SetIsAutoRunning(const bool bEnabled);
	
	UFUNCTION(BlueprintCallable, Category = "Roguelike|Character")
	bool GetIsAutoRunning() const;

private:
	UPROPERTY()
	TObjectPtr<APlayerState> LastSeenPlayerState;

protected:
	// Called when the player state is set or cleared
	virtual void OnPlayerStateChanged();

private:
	void BroadcastOnPlayerStateChanged();

protected:
	//void OnSettingsChanged();

	void OnStartAutoRun();
	void OnEndAutoRun();

	UFUNCTION(BlueprintImplementableEvent, meta=(DisplayName="OnStartAutoRun"))
	void K2_OnStartAutoRun();

	UFUNCTION(BlueprintImplementableEvent, meta=(DisplayName="OnEndAutoRun"))
	void K2_OnEndAutoRun();

	bool bHideViewTargetPawnNextFrame = false;
};
