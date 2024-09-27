#include "RoguelikePlayerController.h"
#include "CommonInputTypeEnum.h"
#include "Components/PrimitiveComponent.h"
#include "EngineUtils.h"
#include "GameFramework/Pawn.h"
#include "Engine/GameInstance.h"
#include "AbilitySystemGlobals.h"
#include "CommonInputSubsystem.h"
#include "GameMapsSettings.h"
#include "RoguelikePrototype/Character/RoguelikeCharacter.h"

#include UE_INLINE_GENERATED_CPP_BY_NAME(RoguelikePlayerController)

ARoguelikePlayerController::ARoguelikePlayerController(const FObjectInitializer& ObjectInitializer)
	: Super(ObjectInitializer)
{
}

void ARoguelikePlayerController::PreInitializeComponents()
{
	Super::PreInitializeComponents();
}

void ARoguelikePlayerController::BeginPlay()
{
	Super::BeginPlay();
	SetActorHiddenInGame(false);
}

void ARoguelikePlayerController::OnPossess(APawn* InPawn)
{
	Super::OnPossess(InPawn);

	SetIsAutoRunning(false);
}

void ARoguelikePlayerController::OnUnPossess()
{
	if (APawn* PawnBeingUnpossessed = GetPawn())
	{
		//if (UAbilitySystemComponent* ASC = UAbilitySystemGlobals::GetAbilitySystemComponentFromActor(PlayerState))
		//{
		//	if (ASC->GetAvatarActor() == PawnBeingUnpossessed)
		//	{
		//		ASC->SetAvatarActor(nullptr);
		//	}
		//}
	}
	
	Super::OnUnPossess();
}

void ARoguelikePlayerController::InitPlayerState()
{
	Super::InitPlayerState();
}

void ARoguelikePlayerController::CleanupPlayerState()
{
	Super::CleanupPlayerState();
}

void ARoguelikePlayerController::ReceivedPlayer()
{
	Super::ReceivedPlayer();
}

void ARoguelikePlayerController::PlayerTick(float DeltaTime)
{
	Super::PlayerTick(DeltaTime);
}

void ARoguelikePlayerController::SetPlayer(UPlayer* InPlayer)
{
	Super::SetPlayer(InPlayer);
}

void ARoguelikePlayerController::AddCheats(bool bForce)
{
	Super::AddCheats(bForce);
}

void ARoguelikePlayerController::UpdateForceFeedback(IInputInterface* InputInterface, const int32 ControllerId)
{
	Super::UpdateForceFeedback(InputInterface, ControllerId);
}

void ARoguelikePlayerController::UpdateHiddenComponents(const FVector& ViewLocation,
	TSet<FPrimitiveComponentId>& PrimitiveComponentIds)
{
	Super::UpdateHiddenComponents(ViewLocation, PrimitiveComponentIds);
}

void ARoguelikePlayerController::PreProcessInput(const float DeltaTime, const bool bGamePaused)
{
	Super::PreProcessInput(DeltaTime, bGamePaused);
}

void ARoguelikePlayerController::PostProcessInput(const float DeltaTime, const bool bGamePaused)
{
	Super::PostProcessInput(DeltaTime, bGamePaused);
}

void ARoguelikePlayerController::SetIsAutoRunning(const bool bEnabled)
{
}

bool ARoguelikePlayerController::GetIsAutoRunning() const
{
	return false;
}

void ARoguelikePlayerController::OnPlayerStateChanged()
{
}

void ARoguelikePlayerController::BroadcastOnPlayerStateChanged()
{
}

void ARoguelikePlayerController::OnStartAutoRun()
{
}

void ARoguelikePlayerController::OnEndAutoRun()
{
}

