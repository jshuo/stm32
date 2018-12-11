/* Automatically generated nanopb header */
/* Generated by nanopb-0.4.0-dev */

#ifndef PB_HW_TREZOR_MESSAGES_MESSAGES_PB_H_INCLUDED
#define PB_HW_TREZOR_MESSAGES_MESSAGES_PB_H_INCLUDED
#include "pb.h"
/* @@protoc_insertion_point(includes) */
#if PB_PROTO_HEADER_VERSION != 30
#error Regenerate this file with the current version of nanopb generator.
#endif

#ifdef __cplusplus
extern "C" {
#endif

/* Enum definitions */
typedef enum _MessageType {
    MessageType_MessageType_Initialize = 0,
    MessageType_MessageType_Ping = 1,
    MessageType_MessageType_Success = 2,
    MessageType_MessageType_Failure = 3,
    MessageType_MessageType_ChangePin = 4,
    MessageType_MessageType_WipeDevice = 5,
    MessageType_MessageType_GetEntropy = 9,
    MessageType_MessageType_Entropy = 10,
    MessageType_MessageType_LoadDevice = 13,
    MessageType_MessageType_ResetDevice = 14,
    MessageType_MessageType_Features = 17,
    MessageType_MessageType_PinMatrixRequest = 18,
    MessageType_MessageType_PinMatrixAck = 19,
    MessageType_MessageType_Cancel = 20,
    MessageType_MessageType_ClearSession = 24,
    MessageType_MessageType_ApplySettings = 25,
    MessageType_MessageType_ButtonRequest = 26,
    MessageType_MessageType_ButtonAck = 27,
    MessageType_MessageType_ApplyFlags = 28,
    MessageType_MessageType_BackupDevice = 34,
    MessageType_MessageType_EntropyRequest = 35,
    MessageType_MessageType_EntropyAck = 36,
    MessageType_MessageType_PassphraseRequest = 41,
    MessageType_MessageType_PassphraseAck = 42,
    MessageType_MessageType_PassphraseStateRequest = 77,
    MessageType_MessageType_PassphraseStateAck = 78,
    MessageType_MessageType_RecoveryDevice = 45,
    MessageType_MessageType_WordRequest = 46,
    MessageType_MessageType_WordAck = 47,
    MessageType_MessageType_GetFeatures = 55,
    MessageType_MessageType_SetU2FCounter = 63,
    MessageType_MessageType_FirmwareErase = 6,
    MessageType_MessageType_FirmwareUpload = 7,
    MessageType_MessageType_FirmwareRequest = 8,
    MessageType_MessageType_SelfTest = 32,
    MessageType_MessageType_GetPublicKey = 11,
    MessageType_MessageType_PublicKey = 12,
    MessageType_MessageType_SignTx = 15,
    MessageType_MessageType_TxRequest = 21,
    MessageType_MessageType_TxAck = 22,
    MessageType_MessageType_GetAddress = 29,
    MessageType_MessageType_Address = 30,
    MessageType_MessageType_SignMessage = 38,
    MessageType_MessageType_VerifyMessage = 39,
    MessageType_MessageType_MessageSignature = 40,
    MessageType_MessageType_CipherKeyValue = 23,
    MessageType_MessageType_CipheredKeyValue = 48,
    MessageType_MessageType_SignIdentity = 53,
    MessageType_MessageType_SignedIdentity = 54,
    MessageType_MessageType_GetECDHSessionKey = 61,
    MessageType_MessageType_ECDHSessionKey = 62,
    MessageType_MessageType_CosiCommit = 71,
    MessageType_MessageType_CosiCommitment = 72,
    MessageType_MessageType_CosiSign = 73,
    MessageType_MessageType_CosiSignature = 74,
    MessageType_MessageType_DebugLinkDecision = 100,
    MessageType_MessageType_DebugLinkGetState = 101,
    MessageType_MessageType_DebugLinkState = 102,
    MessageType_MessageType_DebugLinkStop = 103,
    MessageType_MessageType_DebugLinkLog = 104,
    MessageType_MessageType_DebugLinkMemoryRead = 110,
    MessageType_MessageType_DebugLinkMemory = 111,
    MessageType_MessageType_DebugLinkMemoryWrite = 112,
    MessageType_MessageType_DebugLinkFlashErase = 113,
    MessageType_MessageType_EthereumGetAddress = 56,
    MessageType_MessageType_EthereumAddress = 57,
    MessageType_MessageType_EthereumSignTx = 58,
    MessageType_MessageType_EthereumTxRequest = 59,
    MessageType_MessageType_EthereumTxAck = 60,
    MessageType_MessageType_EthereumSignMessage = 64,
    MessageType_MessageType_EthereumVerifyMessage = 65,
    MessageType_MessageType_EthereumMessageSignature = 66,
    MessageType_MessageType_NEMGetAddress = 67,
    MessageType_MessageType_NEMAddress = 68,
    MessageType_MessageType_NEMSignTx = 69,
    MessageType_MessageType_NEMSignedTx = 70,
    MessageType_MessageType_NEMDecryptMessage = 75,
    MessageType_MessageType_NEMDecryptedMessage = 76,
    MessageType_MessageType_LiskGetAddress = 114,
    MessageType_MessageType_LiskAddress = 115,
    MessageType_MessageType_LiskSignTx = 116,
    MessageType_MessageType_LiskSignedTx = 117,
    MessageType_MessageType_LiskSignMessage = 118,
    MessageType_MessageType_LiskMessageSignature = 119,
    MessageType_MessageType_LiskVerifyMessage = 120,
    MessageType_MessageType_LiskGetPublicKey = 121,
    MessageType_MessageType_LiskPublicKey = 122,
    MessageType_MessageType_TezosGetAddress = 150,
    MessageType_MessageType_TezosAddress = 151,
    MessageType_MessageType_TezosSignTx = 152,
    MessageType_MessageType_TezosSignedTx = 153,
    MessageType_MessageType_TezosGetPublicKey = 154,
    MessageType_MessageType_TezosPublicKey = 155,
    MessageType_MessageType_StellarSignTx = 202,
    MessageType_MessageType_StellarTxOpRequest = 203,
    MessageType_MessageType_StellarGetAddress = 207,
    MessageType_MessageType_StellarAddress = 208,
    MessageType_MessageType_StellarCreateAccountOp = 210,
    MessageType_MessageType_StellarPaymentOp = 211,
    MessageType_MessageType_StellarPathPaymentOp = 212,
    MessageType_MessageType_StellarManageOfferOp = 213,
    MessageType_MessageType_StellarCreatePassiveOfferOp = 214,
    MessageType_MessageType_StellarSetOptionsOp = 215,
    MessageType_MessageType_StellarChangeTrustOp = 216,
    MessageType_MessageType_StellarAllowTrustOp = 217,
    MessageType_MessageType_StellarAccountMergeOp = 218,
    MessageType_MessageType_StellarManageDataOp = 220,
    MessageType_MessageType_StellarBumpSequenceOp = 221,
    MessageType_MessageType_StellarSignedTx = 230,
    MessageType_MessageType_TronGetAddress = 250,
    MessageType_MessageType_TronAddress = 251,
    MessageType_MessageType_TronSignTx = 252,
    MessageType_MessageType_TronSignedTx = 253,
    MessageType_MessageType_CardanoSignTx = 303,
    MessageType_MessageType_CardanoTxRequest = 304,
    MessageType_MessageType_CardanoGetPublicKey = 305,
    MessageType_MessageType_CardanoPublicKey = 306,
    MessageType_MessageType_CardanoGetAddress = 307,
    MessageType_MessageType_CardanoAddress = 308,
    MessageType_MessageType_CardanoTxAck = 309,
    MessageType_MessageType_CardanoSignedTx = 310,
    MessageType_MessageType_OntologyGetAddress = 350,
    MessageType_MessageType_OntologyAddress = 351,
    MessageType_MessageType_OntologyGetPublicKey = 352,
    MessageType_MessageType_OntologyPublicKey = 353,
    MessageType_MessageType_OntologySignTransfer = 354,
    MessageType_MessageType_OntologySignedTransfer = 355,
    MessageType_MessageType_OntologySignWithdrawOng = 356,
    MessageType_MessageType_OntologySignedWithdrawOng = 357,
    MessageType_MessageType_OntologySignOntIdRegister = 358,
    MessageType_MessageType_OntologySignedOntIdRegister = 359,
    MessageType_MessageType_OntologySignOntIdAddAttributes = 360,
    MessageType_MessageType_OntologySignedOntIdAddAttributes = 361,
    MessageType_MessageType_RippleGetAddress = 400,
    MessageType_MessageType_RippleAddress = 401,
    MessageType_MessageType_RippleSignTx = 402,
    MessageType_MessageType_RippleSignedTx = 403,
    MessageType_MessageType_MoneroTransactionInitRequest = 501,
    MessageType_MessageType_MoneroTransactionInitAck = 502,
    MessageType_MessageType_MoneroTransactionSetInputRequest = 503,
    MessageType_MessageType_MoneroTransactionSetInputAck = 504,
    MessageType_MessageType_MoneroTransactionInputsPermutationRequest = 505,
    MessageType_MessageType_MoneroTransactionInputsPermutationAck = 506,
    MessageType_MessageType_MoneroTransactionInputViniRequest = 507,
    MessageType_MessageType_MoneroTransactionInputViniAck = 508,
    MessageType_MessageType_MoneroTransactionAllInputsSetRequest = 509,
    MessageType_MessageType_MoneroTransactionAllInputsSetAck = 510,
    MessageType_MessageType_MoneroTransactionSetOutputRequest = 511,
    MessageType_MessageType_MoneroTransactionSetOutputAck = 512,
    MessageType_MessageType_MoneroTransactionAllOutSetRequest = 513,
    MessageType_MessageType_MoneroTransactionAllOutSetAck = 514,
    MessageType_MessageType_MoneroTransactionSignInputRequest = 515,
    MessageType_MessageType_MoneroTransactionSignInputAck = 516,
    MessageType_MessageType_MoneroTransactionFinalRequest = 517,
    MessageType_MessageType_MoneroTransactionFinalAck = 518,
    MessageType_MessageType_MoneroKeyImageExportInitRequest = 530,
    MessageType_MessageType_MoneroKeyImageExportInitAck = 531,
    MessageType_MessageType_MoneroKeyImageSyncStepRequest = 532,
    MessageType_MessageType_MoneroKeyImageSyncStepAck = 533,
    MessageType_MessageType_MoneroKeyImageSyncFinalRequest = 534,
    MessageType_MessageType_MoneroKeyImageSyncFinalAck = 535,
    MessageType_MessageType_MoneroGetAddress = 540,
    MessageType_MessageType_MoneroAddress = 541,
    MessageType_MessageType_MoneroGetWatchKey = 542,
    MessageType_MessageType_MoneroWatchKey = 543,
    MessageType_MessageType_DebugMoneroDiagRequest = 546,
    MessageType_MessageType_DebugMoneroDiagAck = 547
} MessageType;
#define _MessageType_MIN MessageType_MessageType_Initialize
#define _MessageType_MAX MessageType_MessageType_DebugMoneroDiagAck
#define _MessageType_ARRAYSIZE ((MessageType)(MessageType_MessageType_DebugMoneroDiagAck+1))

/* Extensions */
extern const pb_extension_type_t wire_in; /* field type: bool wire_in; */
extern const pb_extension_type_t wire_out; /* field type: bool wire_out; */
extern const pb_extension_type_t wire_debug_in; /* field type: bool wire_debug_in; */
extern const pb_extension_type_t wire_debug_out; /* field type: bool wire_debug_out; */
extern const pb_extension_type_t wire_tiny; /* field type: bool wire_tiny; */
extern const pb_extension_type_t wire_bootloader; /* field type: bool wire_bootloader; */
extern const pb_extension_type_t wire_no_fsm; /* field type: bool wire_no_fsm; */

#ifdef __cplusplus
} /* extern "C" */
#endif
/* @@protoc_insertion_point(eof) */

#endif
