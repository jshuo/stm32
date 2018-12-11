/* Automatically generated nanopb header */
/* Generated by nanopb-0.4.0-dev */

#ifndef PB_HW_TREZOR_MESSAGES_LISK_MESSAGES_LISK_PB_H_INCLUDED
#define PB_HW_TREZOR_MESSAGES_LISK_MESSAGES_LISK_PB_H_INCLUDED
#include "pb.h"
/* @@protoc_insertion_point(includes) */
#if PB_PROTO_HEADER_VERSION != 30
#error Regenerate this file with the current version of nanopb generator.
#endif

#ifdef __cplusplus
extern "C" {
#endif

/* Enum definitions */
typedef enum _LiskTransactionType {
    LiskTransactionType_Transfer = 0,
    LiskTransactionType_RegisterSecondPassphrase = 1,
    LiskTransactionType_RegisterDelegate = 2,
    LiskTransactionType_CastVotes = 3,
    LiskTransactionType_RegisterMultisignatureAccount = 4,
    LiskTransactionType_CreateDapp = 5,
    LiskTransactionType_TransferIntoDapp = 6,
    LiskTransactionType_TransferOutOfDapp = 7
} LiskTransactionType;
#define _LiskTransactionType_MIN LiskTransactionType_Transfer
#define _LiskTransactionType_MAX LiskTransactionType_TransferOutOfDapp
#define _LiskTransactionType_ARRAYSIZE ((LiskTransactionType)(LiskTransactionType_TransferOutOfDapp+1))

/* Struct definitions */
typedef struct _LiskAddress {
    bool has_address;
    char address[23];
/* @@protoc_insertion_point(struct:LiskAddress) */
} LiskAddress;

typedef struct _LiskDelegateType {
    bool has_username;
    char username[20];
/* @@protoc_insertion_point(struct:LiskDelegateType) */
} LiskDelegateType;

typedef struct _LiskGetAddress {
    pb_size_t address_n_count;
    uint32_t address_n[8];
    bool has_show_display;
    bool show_display;
/* @@protoc_insertion_point(struct:LiskGetAddress) */
} LiskGetAddress;

typedef struct _LiskGetPublicKey {
    pb_size_t address_n_count;
    uint32_t address_n[8];
    bool has_show_display;
    bool show_display;
/* @@protoc_insertion_point(struct:LiskGetPublicKey) */
} LiskGetPublicKey;

typedef PB_BYTES_ARRAY_T(32) LiskMessageSignature_public_key_t;
typedef PB_BYTES_ARRAY_T(64) LiskMessageSignature_signature_t;
typedef struct _LiskMessageSignature {
    bool has_public_key;
    LiskMessageSignature_public_key_t public_key;
    bool has_signature;
    LiskMessageSignature_signature_t signature;
/* @@protoc_insertion_point(struct:LiskMessageSignature) */
} LiskMessageSignature;

typedef struct _LiskMultisignatureType {
    bool has_min;
    uint32_t min;
    bool has_life_time;
    uint32_t life_time;
    pb_size_t keys_group_count;
    char keys_group[10][66];
/* @@protoc_insertion_point(struct:LiskMultisignatureType) */
} LiskMultisignatureType;

typedef PB_BYTES_ARRAY_T(32) LiskPublicKey_public_key_t;
typedef struct _LiskPublicKey {
    bool has_public_key;
    LiskPublicKey_public_key_t public_key;
/* @@protoc_insertion_point(struct:LiskPublicKey) */
} LiskPublicKey;

typedef PB_BYTES_ARRAY_T(1024) LiskSignMessage_message_t;
typedef struct _LiskSignMessage {
    pb_size_t address_n_count;
    uint32_t address_n[8];
    bool has_message;
    LiskSignMessage_message_t message;
/* @@protoc_insertion_point(struct:LiskSignMessage) */
} LiskSignMessage;

typedef PB_BYTES_ARRAY_T(32) LiskSignatureType_public_key_t;
typedef struct _LiskSignatureType {
    bool has_public_key;
    LiskSignatureType_public_key_t public_key;
/* @@protoc_insertion_point(struct:LiskSignatureType) */
} LiskSignatureType;

typedef PB_BYTES_ARRAY_T(64) LiskSignedTx_signature_t;
typedef struct _LiskSignedTx {
    bool has_signature;
    LiskSignedTx_signature_t signature;
/* @@protoc_insertion_point(struct:LiskSignedTx) */
} LiskSignedTx;

typedef PB_BYTES_ARRAY_T(33) LiskVerifyMessage_public_key_t;
typedef PB_BYTES_ARRAY_T(65) LiskVerifyMessage_signature_t;
typedef PB_BYTES_ARRAY_T(1024) LiskVerifyMessage_message_t;
typedef struct _LiskVerifyMessage {
    bool has_public_key;
    LiskVerifyMessage_public_key_t public_key;
    bool has_signature;
    LiskVerifyMessage_signature_t signature;
    bool has_message;
    LiskVerifyMessage_message_t message;
/* @@protoc_insertion_point(struct:LiskVerifyMessage) */
} LiskVerifyMessage;

typedef struct _LiskTransactionAsset {
    bool has_signature;
    LiskSignatureType signature;
    bool has_delegate;
    LiskDelegateType delegate;
    pb_size_t votes_count;
    char votes[33][66];
    bool has_multisignature;
    LiskMultisignatureType multisignature;
    bool has_data;
    char data[64];
/* @@protoc_insertion_point(struct:LiskTransactionAsset) */
} LiskTransactionAsset;

typedef PB_BYTES_ARRAY_T(32) LiskTransactionCommon_sender_public_key_t;
typedef PB_BYTES_ARRAY_T(32) LiskTransactionCommon_requester_public_key_t;
typedef PB_BYTES_ARRAY_T(64) LiskTransactionCommon_signature_t;
typedef struct _LiskTransactionCommon {
    bool has_type;
    LiskTransactionType type;
    bool has_amount;
    uint64_t amount;
    bool has_fee;
    uint64_t fee;
    bool has_recipient_id;
    char recipient_id[23];
    bool has_sender_public_key;
    LiskTransactionCommon_sender_public_key_t sender_public_key;
    bool has_requester_public_key;
    LiskTransactionCommon_requester_public_key_t requester_public_key;
    bool has_signature;
    LiskTransactionCommon_signature_t signature;
    bool has_timestamp;
    uint32_t timestamp;
    bool has_asset;
    LiskTransactionAsset asset;
/* @@protoc_insertion_point(struct:LiskTransactionCommon) */
} LiskTransactionCommon;

typedef struct _LiskSignTx {
    pb_size_t address_n_count;
    uint32_t address_n[8];
    bool has_transaction;
    LiskTransactionCommon transaction;
/* @@protoc_insertion_point(struct:LiskSignTx) */
} LiskSignTx;

/* Default values for struct fields */
extern const uint64_t LiskTransactionCommon_amount_default;

/* Initializer values for message structs */
#define LiskGetAddress_init_default              {0, {0, 0, 0, 0, 0, 0, 0, 0}, false, 0}
#define LiskAddress_init_default                 {false, ""}
#define LiskGetPublicKey_init_default            {0, {0, 0, 0, 0, 0, 0, 0, 0}, false, 0}
#define LiskPublicKey_init_default               {false, {0, {0}}}
#define LiskSignTx_init_default                  {0, {0, 0, 0, 0, 0, 0, 0, 0}, false, LiskTransactionCommon_init_default}
#define LiskTransactionCommon_init_default       {false, _LiskTransactionType_MIN, false, 0ull, false, 0, false, "", false, {0, {0}}, false, {0, {0}}, false, {0, {0}}, false, 0, false, LiskTransactionAsset_init_default}
#define LiskTransactionAsset_init_default        {false, LiskSignatureType_init_default, false, LiskDelegateType_init_default, 0, {"", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", ""}, false, LiskMultisignatureType_init_default, false, ""}
#define LiskSignatureType_init_default           {false, {0, {0}}}
#define LiskDelegateType_init_default            {false, ""}
#define LiskMultisignatureType_init_default      {false, 0, false, 0, 0, {"", "", "", "", "", "", "", "", "", ""}}
#define LiskSignedTx_init_default                {false, {0, {0}}}
#define LiskSignMessage_init_default             {0, {0, 0, 0, 0, 0, 0, 0, 0}, false, {0, {0}}}
#define LiskMessageSignature_init_default        {false, {0, {0}}, false, {0, {0}}}
#define LiskVerifyMessage_init_default           {false, {0, {0}}, false, {0, {0}}, false, {0, {0}}}
#define LiskGetAddress_init_zero                 {0, {0, 0, 0, 0, 0, 0, 0, 0}, false, 0}
#define LiskAddress_init_zero                    {false, ""}
#define LiskGetPublicKey_init_zero               {0, {0, 0, 0, 0, 0, 0, 0, 0}, false, 0}
#define LiskPublicKey_init_zero                  {false, {0, {0}}}
#define LiskSignTx_init_zero                     {0, {0, 0, 0, 0, 0, 0, 0, 0}, false, LiskTransactionCommon_init_zero}
#define LiskTransactionCommon_init_zero          {false, _LiskTransactionType_MIN, false, 0, false, 0, false, "", false, {0, {0}}, false, {0, {0}}, false, {0, {0}}, false, 0, false, LiskTransactionAsset_init_zero}
#define LiskTransactionAsset_init_zero           {false, LiskSignatureType_init_zero, false, LiskDelegateType_init_zero, 0, {"", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", ""}, false, LiskMultisignatureType_init_zero, false, ""}
#define LiskSignatureType_init_zero              {false, {0, {0}}}
#define LiskDelegateType_init_zero               {false, ""}
#define LiskMultisignatureType_init_zero         {false, 0, false, 0, 0, {"", "", "", "", "", "", "", "", "", ""}}
#define LiskSignedTx_init_zero                   {false, {0, {0}}}
#define LiskSignMessage_init_zero                {0, {0, 0, 0, 0, 0, 0, 0, 0}, false, {0, {0}}}
#define LiskMessageSignature_init_zero           {false, {0, {0}}, false, {0, {0}}}
#define LiskVerifyMessage_init_zero              {false, {0, {0}}, false, {0, {0}}, false, {0, {0}}}

/* Field tags (for use in manual encoding/decoding) */
#define LiskAddress_address_tag                  1
#define LiskDelegateType_username_tag            1
#define LiskGetAddress_address_n_tag             1
#define LiskGetAddress_show_display_tag          2
#define LiskGetPublicKey_address_n_tag           1
#define LiskGetPublicKey_show_display_tag        2
#define LiskMessageSignature_public_key_tag      1
#define LiskMessageSignature_signature_tag       2
#define LiskMultisignatureType_min_tag           1
#define LiskMultisignatureType_life_time_tag     2
#define LiskMultisignatureType_keys_group_tag    3
#define LiskPublicKey_public_key_tag             1
#define LiskSignMessage_address_n_tag            1
#define LiskSignMessage_message_tag              2
#define LiskSignatureType_public_key_tag         1
#define LiskSignedTx_signature_tag               1
#define LiskVerifyMessage_public_key_tag         1
#define LiskVerifyMessage_signature_tag          2
#define LiskVerifyMessage_message_tag            3
#define LiskTransactionAsset_signature_tag       1
#define LiskTransactionAsset_delegate_tag        2
#define LiskTransactionAsset_votes_tag           3
#define LiskTransactionAsset_multisignature_tag  4
#define LiskTransactionAsset_data_tag            5
#define LiskTransactionCommon_type_tag           1
#define LiskTransactionCommon_amount_tag         2
#define LiskTransactionCommon_fee_tag            3
#define LiskTransactionCommon_recipient_id_tag   4
#define LiskTransactionCommon_sender_public_key_tag 5
#define LiskTransactionCommon_requester_public_key_tag 6
#define LiskTransactionCommon_signature_tag      7
#define LiskTransactionCommon_timestamp_tag      8
#define LiskTransactionCommon_asset_tag          9
#define LiskSignTx_address_n_tag                 1
#define LiskSignTx_transaction_tag               2

/* Struct field encoding specification for nanopb */
extern const pb_field_t LiskGetAddress_fields[3];
extern const pb_field_t LiskAddress_fields[2];
extern const pb_field_t LiskGetPublicKey_fields[3];
extern const pb_field_t LiskPublicKey_fields[2];
extern const pb_field_t LiskSignTx_fields[3];
extern const pb_field_t LiskTransactionCommon_fields[10];
extern const pb_field_t LiskTransactionAsset_fields[6];
extern const pb_field_t LiskSignatureType_fields[2];
extern const pb_field_t LiskDelegateType_fields[2];
extern const pb_field_t LiskMultisignatureType_fields[4];
extern const pb_field_t LiskSignedTx_fields[2];
extern const pb_field_t LiskSignMessage_fields[3];
extern const pb_field_t LiskMessageSignature_fields[3];
extern const pb_field_t LiskVerifyMessage_fields[4];

/* Maximum encoded size of messages (where known) */
#define LiskGetAddress_size                      50
#define LiskAddress_size                         25
#define LiskGetPublicKey_size                    50
#define LiskPublicKey_size                       34
#define LiskSignTx_size                          3308
#define LiskTransactionCommon_size               3257
#define LiskTransactionAsset_size                3065
#define LiskSignatureType_size                   34
#define LiskDelegateType_size                    22
#define LiskMultisignatureType_size              692
#define LiskSignedTx_size                        66
#define LiskSignMessage_size                     1075
#define LiskMessageSignature_size                100
#define LiskVerifyMessage_size                   1129

/* Message IDs (where set with "msgid" option) */
#ifdef PB_MSGID

#define MESSAGES_LISK_MESSAGES \


#endif

#ifdef __cplusplus
} /* extern "C" */
#endif
/* @@protoc_insertion_point(eof) */

#endif
