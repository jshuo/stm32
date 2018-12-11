	// This file is automatically generatedby messages_map.py -- DO NOT EDIT!

	// in messages

	{ 'n', 'i', MessageType_MessageType_Initialize,            Initialize_fields,            (void (*)(void *)) fsm_msgInitialize },
	{ 'n', 'i', MessageType_MessageType_Ping,                  Ping_fields,                  (void (*)(void *)) fsm_msgPing },
	{ 'n', 'i', MessageType_MessageType_ChangePin,             ChangePin_fields,             (void (*)(void *)) fsm_msgChangePin },
	{ 'n', 'i', MessageType_MessageType_WipeDevice,            WipeDevice_fields,            (void (*)(void *)) fsm_msgWipeDevice },
	{ 'n', 'i', MessageType_MessageType_GetEntropy,            GetEntropy_fields,            (void (*)(void *)) fsm_msgGetEntropy },
	{ 'n', 'i', MessageType_MessageType_LoadDevice,            LoadDevice_fields,            (void (*)(void *)) fsm_msgLoadDevice },
	{ 'n', 'i', MessageType_MessageType_ResetDevice,           ResetDevice_fields,           (void (*)(void *)) fsm_msgResetDevice },
	// Message PinMatrixAck is not used in FSM
	{ 'n', 'i', MessageType_MessageType_Cancel,                Cancel_fields,                (void (*)(void *)) fsm_msgCancel },
	{ 'n', 'i', MessageType_MessageType_ClearSession,          ClearSession_fields,          (void (*)(void *)) fsm_msgClearSession },
	{ 'n', 'i', MessageType_MessageType_ApplySettings,         ApplySettings_fields,         (void (*)(void *)) fsm_msgApplySettings },
	// Message ButtonAck is not used in FSM
	{ 'n', 'i', MessageType_MessageType_ApplyFlags,            ApplyFlags_fields,            (void (*)(void *)) fsm_msgApplyFlags },
	{ 'n', 'i', MessageType_MessageType_BackupDevice,          BackupDevice_fields,          (void (*)(void *)) fsm_msgBackupDevice },
	{ 'n', 'i', MessageType_MessageType_EntropyAck,            EntropyAck_fields,            (void (*)(void *)) fsm_msgEntropyAck },
	// Message PassphraseAck is not used in FSM
	// Message PassphraseStateAck is not used in FSM
	{ 'n', 'i', MessageType_MessageType_RecoveryDevice,        RecoveryDevice_fields,        (void (*)(void *)) fsm_msgRecoveryDevice },
	{ 'n', 'i', MessageType_MessageType_WordAck,               WordAck_fields,               (void (*)(void *)) fsm_msgWordAck },
	{ 'n', 'i', MessageType_MessageType_GetFeatures,           GetFeatures_fields,           (void (*)(void *)) fsm_msgGetFeatures },
	{ 'n', 'i', MessageType_MessageType_SetU2FCounter,         SetU2FCounter_fields,         (void (*)(void *)) fsm_msgSetU2FCounter },
	// Message FirmwareErase is used in bootloader mode only
	// Message FirmwareUpload is used in bootloader mode only
	// Message SelfTest is used in bootloader mode only
	{ 'n', 'i', MessageType_MessageType_GetPublicKey,          GetPublicKey_fields,          (void (*)(void *)) fsm_msgGetPublicKey },
	{ 'n', 'i', MessageType_MessageType_SignTx,                SignTx_fields,                (void (*)(void *)) fsm_msgSignTx },
	{ 'n', 'i', MessageType_MessageType_TxAck,                 TxAck_fields,                 (void (*)(void *)) fsm_msgTxAck },
	{ 'n', 'i', MessageType_MessageType_GetAddress,            GetAddress_fields,            (void (*)(void *)) fsm_msgGetAddress },
	{ 'n', 'i', MessageType_MessageType_SignMessage,           SignMessage_fields,           (void (*)(void *)) fsm_msgSignMessage },
	{ 'n', 'i', MessageType_MessageType_VerifyMessage,         VerifyMessage_fields,         (void (*)(void *)) fsm_msgVerifyMessage },
	{ 'n', 'i', MessageType_MessageType_CipherKeyValue,        CipherKeyValue_fields,        (void (*)(void *)) fsm_msgCipherKeyValue },
	{ 'n', 'i', MessageType_MessageType_SignIdentity,          SignIdentity_fields,          (void (*)(void *)) fsm_msgSignIdentity },
	{ 'n', 'i', MessageType_MessageType_GetECDHSessionKey,     GetECDHSessionKey_fields,     (void (*)(void *)) fsm_msgGetECDHSessionKey },
	{ 'n', 'i', MessageType_MessageType_CosiCommit,            CosiCommit_fields,            (void (*)(void *)) fsm_msgCosiCommit },
	{ 'n', 'i', MessageType_MessageType_CosiSign,              CosiSign_fields,              (void (*)(void *)) fsm_msgCosiSign },
	{ 'n', 'i', MessageType_MessageType_EthereumGetAddress,    EthereumGetAddress_fields,    (void (*)(void *)) fsm_msgEthereumGetAddress },
	{ 'n', 'i', MessageType_MessageType_EthereumSignTx,        EthereumSignTx_fields,        (void (*)(void *)) fsm_msgEthereumSignTx },
	{ 'n', 'i', MessageType_MessageType_EthereumTxAck,         EthereumTxAck_fields,         (void (*)(void *)) fsm_msgEthereumTxAck },
	{ 'n', 'i', MessageType_MessageType_EthereumSignMessage,   EthereumSignMessage_fields,   (void (*)(void *)) fsm_msgEthereumSignMessage },
	{ 'n', 'i', MessageType_MessageType_EthereumVerifyMessage, EthereumVerifyMessage_fields, (void (*)(void *)) fsm_msgEthereumVerifyMessage },
	{ 'n', 'i', MessageType_MessageType_NEMGetAddress,         NEMGetAddress_fields,         (void (*)(void *)) fsm_msgNEMGetAddress },
	{ 'n', 'i', MessageType_MessageType_NEMSignTx,             NEMSignTx_fields,             (void (*)(void *)) fsm_msgNEMSignTx },
	{ 'n', 'i', MessageType_MessageType_NEMDecryptMessage,     NEMDecryptMessage_fields,     (void (*)(void *)) fsm_msgNEMDecryptMessage },
	{ 'n', 'i', MessageType_MessageType_LiskGetAddress,        LiskGetAddress_fields,        (void (*)(void *)) fsm_msgLiskGetAddress },
	{ 'n', 'i', MessageType_MessageType_LiskSignTx,            LiskSignTx_fields,            (void (*)(void *)) fsm_msgLiskSignTx },
	{ 'n', 'i', MessageType_MessageType_LiskSignMessage,       LiskSignMessage_fields,       (void (*)(void *)) fsm_msgLiskSignMessage },
	{ 'n', 'i', MessageType_MessageType_LiskVerifyMessage,     LiskVerifyMessage_fields,     (void (*)(void *)) fsm_msgLiskVerifyMessage },
	{ 'n', 'i', MessageType_MessageType_LiskGetPublicKey,      LiskGetPublicKey_fields,      (void (*)(void *)) fsm_msgLiskGetPublicKey },
	{ 'n', 'i', MessageType_MessageType_StellarSignTx,         StellarSignTx_fields,         (void (*)(void *)) fsm_msgStellarSignTx },
	{ 'n', 'i', MessageType_MessageType_StellarGetAddress,     StellarGetAddress_fields,     (void (*)(void *)) fsm_msgStellarGetAddress },
	{ 'n', 'i', MessageType_MessageType_StellarCreateAccountOp, StellarCreateAccountOp_fields, (void (*)(void *)) fsm_msgStellarCreateAccountOp },
	{ 'n', 'i', MessageType_MessageType_StellarPaymentOp,      StellarPaymentOp_fields,      (void (*)(void *)) fsm_msgStellarPaymentOp },
	{ 'n', 'i', MessageType_MessageType_StellarPathPaymentOp,  StellarPathPaymentOp_fields,  (void (*)(void *)) fsm_msgStellarPathPaymentOp },
	{ 'n', 'i', MessageType_MessageType_StellarManageOfferOp,  StellarManageOfferOp_fields,  (void (*)(void *)) fsm_msgStellarManageOfferOp },
	{ 'n', 'i', MessageType_MessageType_StellarCreatePassiveOfferOp, StellarCreatePassiveOfferOp_fields, (void (*)(void *)) fsm_msgStellarCreatePassiveOfferOp },
	{ 'n', 'i', MessageType_MessageType_StellarSetOptionsOp,   StellarSetOptionsOp_fields,   (void (*)(void *)) fsm_msgStellarSetOptionsOp },
	{ 'n', 'i', MessageType_MessageType_StellarChangeTrustOp,  StellarChangeTrustOp_fields,  (void (*)(void *)) fsm_msgStellarChangeTrustOp },
	{ 'n', 'i', MessageType_MessageType_StellarAllowTrustOp,   StellarAllowTrustOp_fields,   (void (*)(void *)) fsm_msgStellarAllowTrustOp },
	{ 'n', 'i', MessageType_MessageType_StellarAccountMergeOp, StellarAccountMergeOp_fields, (void (*)(void *)) fsm_msgStellarAccountMergeOp },
	{ 'n', 'i', MessageType_MessageType_StellarManageDataOp,   StellarManageDataOp_fields,   (void (*)(void *)) fsm_msgStellarManageDataOp },
	{ 'n', 'i', MessageType_MessageType_StellarBumpSequenceOp, StellarBumpSequenceOp_fields, (void (*)(void *)) fsm_msgStellarBumpSequenceOp },

	// out messages

	{ 'n', 'o', MessageType_MessageType_Success,               Success_fields,               0 },
	{ 'n', 'o', MessageType_MessageType_Failure,               Failure_fields,               0 },
	{ 'n', 'o', MessageType_MessageType_Entropy,               Entropy_fields,               0 },
	{ 'n', 'o', MessageType_MessageType_Features,              Features_fields,              0 },
	{ 'n', 'o', MessageType_MessageType_PinMatrixRequest,      PinMatrixRequest_fields,      0 },
	{ 'n', 'o', MessageType_MessageType_ButtonRequest,         ButtonRequest_fields,         0 },
	{ 'n', 'o', MessageType_MessageType_EntropyRequest,        EntropyRequest_fields,        0 },
	{ 'n', 'o', MessageType_MessageType_PassphraseRequest,     PassphraseRequest_fields,     0 },
	{ 'n', 'o', MessageType_MessageType_PassphraseStateRequest, PassphraseStateRequest_fields, 0 },
	{ 'n', 'o', MessageType_MessageType_WordRequest,           WordRequest_fields,           0 },
	// Message FirmwareRequest is used in bootloader mode only
	{ 'n', 'o', MessageType_MessageType_PublicKey,             PublicKey_fields,             0 },
	{ 'n', 'o', MessageType_MessageType_TxRequest,             TxRequest_fields,             0 },
	{ 'n', 'o', MessageType_MessageType_Address,               Address_fields,               0 },
	{ 'n', 'o', MessageType_MessageType_MessageSignature,      MessageSignature_fields,      0 },
	{ 'n', 'o', MessageType_MessageType_CipheredKeyValue,      CipheredKeyValue_fields,      0 },
	{ 'n', 'o', MessageType_MessageType_SignedIdentity,        SignedIdentity_fields,        0 },
	{ 'n', 'o', MessageType_MessageType_ECDHSessionKey,        ECDHSessionKey_fields,        0 },
	{ 'n', 'o', MessageType_MessageType_CosiCommitment,        CosiCommitment_fields,        0 },
	{ 'n', 'o', MessageType_MessageType_CosiSignature,         CosiSignature_fields,         0 },
	{ 'n', 'o', MessageType_MessageType_EthereumAddress,       EthereumAddress_fields,       0 },
	{ 'n', 'o', MessageType_MessageType_EthereumTxRequest,     EthereumTxRequest_fields,     0 },
	{ 'n', 'o', MessageType_MessageType_EthereumMessageSignature, EthereumMessageSignature_fields, 0 },
	{ 'n', 'o', MessageType_MessageType_NEMAddress,            NEMAddress_fields,            0 },
	{ 'n', 'o', MessageType_MessageType_NEMSignedTx,           NEMSignedTx_fields,           0 },
	{ 'n', 'o', MessageType_MessageType_NEMDecryptedMessage,   NEMDecryptedMessage_fields,   0 },
	{ 'n', 'o', MessageType_MessageType_LiskAddress,           LiskAddress_fields,           0 },
	{ 'n', 'o', MessageType_MessageType_LiskSignedTx,          LiskSignedTx_fields,          0 },
	{ 'n', 'o', MessageType_MessageType_LiskMessageSignature,  LiskMessageSignature_fields,  0 },
	{ 'n', 'o', MessageType_MessageType_LiskPublicKey,         LiskPublicKey_fields,         0 },
	{ 'n', 'o', MessageType_MessageType_StellarTxOpRequest,    StellarTxOpRequest_fields,    0 },
	{ 'n', 'o', MessageType_MessageType_StellarAddress,        StellarAddress_fields,        0 },
	{ 'n', 'o', MessageType_MessageType_StellarSignedTx,       StellarSignedTx_fields,       0 },

#if DEBUG_LINK

	// debug in messages

	// Message DebugLinkDecision is not used in FSM
	{ 'd', 'i', MessageType_MessageType_DebugLinkGetState,     DebugLinkGetState_fields,     (void (*)(void *)) fsm_msgDebugLinkGetState },
	{ 'd', 'i', MessageType_MessageType_DebugLinkStop,         DebugLinkStop_fields,         (void (*)(void *)) fsm_msgDebugLinkStop },
	{ 'd', 'i', MessageType_MessageType_DebugLinkMemoryRead,   DebugLinkMemoryRead_fields,   (void (*)(void *)) fsm_msgDebugLinkMemoryRead },
	{ 'd', 'i', MessageType_MessageType_DebugLinkMemoryWrite,  DebugLinkMemoryWrite_fields,  (void (*)(void *)) fsm_msgDebugLinkMemoryWrite },
	{ 'd', 'i', MessageType_MessageType_DebugLinkFlashErase,   DebugLinkFlashErase_fields,   (void (*)(void *)) fsm_msgDebugLinkFlashErase },

	// debug out messages

	{ 'd', 'o', MessageType_MessageType_DebugLinkState,        DebugLinkState_fields,        0 },
	{ 'd', 'o', MessageType_MessageType_DebugLinkLog,          DebugLinkLog_fields,          0 },
	{ 'd', 'o', MessageType_MessageType_DebugLinkMemory,       DebugLinkMemory_fields,       0 },

#endif