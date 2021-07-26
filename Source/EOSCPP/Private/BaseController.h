#pragma once

#include "CoreMinimal.h"

#include "Connect/EOSConnectTypes.h"
#include "GameFramework/PlayerController.h"
#include "BaseController.generated.h"

UCLASS()
class ABaseController : public APlayerController
{
	GENERATED_BODY()

public:
	UFUNCTION(BlueprintCallable, Category = "EOS TEST")
	void MyTestFunction();

public:
	UFUNCTION()
	void OnLoginCallback(const FEOSConnectLoginCallbackInfo& Data);

public:
	FOnLoginCallback m_OnLoginCallback;
};
