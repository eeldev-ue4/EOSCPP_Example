#include "BaseController.h"

#include "Connect/EOSConnect.h"

void ABaseController::MyTestFunction()
{
	if (UCoreConnect* Connect = GetGameInstance()->GetSubsystem<UCoreConnect>())
	{
		m_OnLoginCallback.BindUFunction(this, "OnLoginCallback");
		
		FEOSConnectLoginOptions Options;
		Options.UserLoginInfo.DisplayName = "Test";
		Options.Credentials.Type = EEOSEExternalCredentialType::EOS_ECT_DEVICEID_ACCESS_TOKEN;

		Connect->EOSConnectLogin(this, Options, m_OnLoginCallback);
	}
}

void ABaseController::OnLoginCallback(const FEOSConnectLoginCallbackInfo& Data)
{
	if (Data.ResultCode == EOSResult::EOS_Success)
	{
		// Login successful
	}
	else
	{
		// Login failed
	}
}
