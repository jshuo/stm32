/* Automatically generated nanopb header */
/* Generated by nanopb-0.4.0-dev */

#ifndef PB_HW_TREZOR_MESSAGES_ETHEREUM_MESSAGES_ETHEREUM_PB_H_INCLUDED
#define PB_HW_TREZOR_MESSAGES_ETHEREUM_MESSAGES_ETHEREUM_PB_H_INCLUDED
#include "pb.h"
/* @@protoc_insertion_point(includes) */
#if PB_PROTO_HEADER_VERSION != 30
#error Regenerate this file with the current version of nanopb generator.
#endif

#ifdef __cplusplus
extern "C" {
#endif

/* Struct definitions */
typedef PB_BYTES_ARRAY_T(20) EthereumAddress_address_t;
typedef struct _EthereumAddress {
    EthereumAddress_address_t address;
/* @@protoc_insertion_point(struct:EthereumAddress) */
} EthereumAddress;

typedef struct _EthereumGetAddress {
    pb_size_t address_n_count;
    uint32_t address_n[8];
    bool has_show_display;
    bool show_display;
/* @@protoc_insertion_point(struct:EthereumGetAddress) */
} EthereumGetAddress;

typedef PB_BYTES_ARRAY_T(20) EthereumMessageSignature_address_t;
typedef PB_BYTES_ARRAY_T(65) EthereumMessageSignature_signature_t;
typedef struct _EthereumMessageSignature {
    bool has_address;
    EthereumMessageSignature_address_t address;
    bool has_signature;
    EthereumMessageSignature_signature_t signature;
/* @@protoc_insertion_point(struct:EthereumMessageSignature) */
} EthereumMessageSignature;

typedef PB_BYTES_ARRAY_T(1024) EthereumSignMessage_message_t;
typedef struct _EthereumSignMessage {
    pb_size_t address_n_count;
    uint32_t address_n[8];
    EthereumSignMessage_message_t message;
/* @@protoc_insertion_point(struct:EthereumSignMessage) */
} EthereumSignMessage;

typedef PB_BYTES_ARRAY_T(32) EthereumSignTx_nonce_t;
typedef PB_BYTES_ARRAY_T(32) EthereumSignTx_gas_price_t;
typedef PB_BYTES_ARRAY_T(32) EthereumSignTx_gas_limit_t;
typedef PB_BYTES_ARRAY_T(20) EthereumSignTx_to_t;
typedef PB_BYTES_ARRAY_T(32) EthereumSignTx_value_t;
typedef PB_BYTES_ARRAY_T(1024) EthereumSignTx_data_initial_chunk_t;
typedef struct _EthereumSignTx {
    pb_size_t address_n_count;
    uint32_t address_n[8];
    bool has_nonce;
    EthereumSignTx_nonce_t nonce;
    bool has_gas_price;
    EthereumSignTx_gas_price_t gas_price;
    bool has_gas_limit;
    EthereumSignTx_gas_limit_t gas_limit;
    bool has_to;
    EthereumSignTx_to_t to;
    bool has_value;
    EthereumSignTx_value_t value;
    bool has_data_initial_chunk;
    EthereumSignTx_data_initial_chunk_t data_initial_chunk;
    bool has_data_length;
    uint32_t data_length;
    bool has_chain_id;
    uint32_t chain_id;
    bool has_tx_type;
    uint32_t tx_type;
/* @@protoc_insertion_point(struct:EthereumSignTx) */
} EthereumSignTx;

typedef PB_BYTES_ARRAY_T(1024) EthereumTxAck_data_chunk_t;
typedef struct _EthereumTxAck {
    bool has_data_chunk;
    EthereumTxAck_data_chunk_t data_chunk;
/* @@protoc_insertion_point(struct:EthereumTxAck) */
} EthereumTxAck;

typedef PB_BYTES_ARRAY_T(32) EthereumTxRequest_signature_r_t;
typedef PB_BYTES_ARRAY_T(32) EthereumTxRequest_signature_s_t;
typedef struct _EthereumTxRequest {
    bool has_data_length;
    uint32_t data_length;
    bool has_signature_v;
    uint32_t signature_v;
    bool has_signature_r;
    EthereumTxRequest_signature_r_t signature_r;
    bool has_signature_s;
    EthereumTxRequest_signature_s_t signature_s;
/* @@protoc_insertion_point(struct:EthereumTxRequest) */
} EthereumTxRequest;

typedef PB_BYTES_ARRAY_T(20) EthereumVerifyMessage_address_t;
typedef PB_BYTES_ARRAY_T(65) EthereumVerifyMessage_signature_t;
typedef PB_BYTES_ARRAY_T(1024) EthereumVerifyMessage_message_t;
typedef struct _EthereumVerifyMessage {
    bool has_address;
    EthereumVerifyMessage_address_t address;
    bool has_signature;
    EthereumVerifyMessage_signature_t signature;
    bool has_message;
    EthereumVerifyMessage_message_t message;
/* @@protoc_insertion_point(struct:EthereumVerifyMessage) */
} EthereumVerifyMessage;

/* Default values for struct fields */

/* Initializer values for message structs */
#define EthereumGetAddress_init_default          {0, {0, 0, 0, 0, 0, 0, 0, 0}, false, 0}
#define EthereumAddress_init_default             {{0, {0}}}
#define EthereumSignTx_init_default              {0, {0, 0, 0, 0, 0, 0, 0, 0}, false, {0, {0}}, false, {0, {0}}, false, {0, {0}}, false, {0, {0}}, false, {0, {0}}, false, {0, {0}}, false, 0, false, 0, false, 0}
#define EthereumTxRequest_init_default           {false, 0, false, 0, false, {0, {0}}, false, {0, {0}}}
#define EthereumTxAck_init_default               {false, {0, {0}}}
#define EthereumSignMessage_init_default         {0, {0, 0, 0, 0, 0, 0, 0, 0}, {0, {0}}}
#define EthereumMessageSignature_init_default    {false, {0, {0}}, false, {0, {0}}}
#define EthereumVerifyMessage_init_default       {false, {0, {0}}, false, {0, {0}}, false, {0, {0}}}
#define EthereumGetAddress_init_zero             {0, {0, 0, 0, 0, 0, 0, 0, 0}, false, 0}
#define EthereumAddress_init_zero                {{0, {0}}}
#define EthereumSignTx_init_zero                 {0, {0, 0, 0, 0, 0, 0, 0, 0}, false, {0, {0}}, false, {0, {0}}, false, {0, {0}}, false, {0, {0}}, false, {0, {0}}, false, {0, {0}}, false, 0, false, 0, false, 0}
#define EthereumTxRequest_init_zero              {false, 0, false, 0, false, {0, {0}}, false, {0, {0}}}
#define EthereumTxAck_init_zero                  {false, {0, {0}}}
#define EthereumSignMessage_init_zero            {0, {0, 0, 0, 0, 0, 0, 0, 0}, {0, {0}}}
#define EthereumMessageSignature_init_zero       {false, {0, {0}}, false, {0, {0}}}
#define EthereumVerifyMessage_init_zero          {false, {0, {0}}, false, {0, {0}}, false, {0, {0}}}

/* Field tags (for use in manual encoding/decoding) */
#define EthereumAddress_address_tag              1
#define EthereumGetAddress_address_n_tag         1
#define EthereumGetAddress_show_display_tag      2
#define EthereumMessageSignature_address_tag     1
#define EthereumMessageSignature_signature_tag   2
#define EthereumSignMessage_address_n_tag        1
#define EthereumSignMessage_message_tag          2
#define EthereumSignTx_address_n_tag             1
#define EthereumSignTx_nonce_tag                 2
#define EthereumSignTx_gas_price_tag             3
#define EthereumSignTx_gas_limit_tag             4
#define EthereumSignTx_to_tag                    5
#define EthereumSignTx_value_tag                 6
#define EthereumSignTx_data_initial_chunk_tag    7
#define EthereumSignTx_data_length_tag           8
#define EthereumSignTx_chain_id_tag              9
#define EthereumSignTx_tx_type_tag               10
#define EthereumTxAck_data_chunk_tag             1
#define EthereumTxRequest_data_length_tag        1
#define EthereumTxRequest_signature_v_tag        2
#define EthereumTxRequest_signature_r_tag        3
#define EthereumTxRequest_signature_s_tag        4
#define EthereumVerifyMessage_address_tag        1
#define EthereumVerifyMessage_signature_tag      2
#define EthereumVerifyMessage_message_tag        3

/* Struct field encoding specification for nanopb */
extern const pb_field_t EthereumGetAddress_fields[3];
extern const pb_field_t EthereumAddress_fields[2];
extern const pb_field_t EthereumSignTx_fields[11];
extern const pb_field_t EthereumTxRequest_fields[5];
extern const pb_field_t EthereumTxAck_fields[2];
extern const pb_field_t EthereumSignMessage_fields[3];
extern const pb_field_t EthereumMessageSignature_fields[3];
extern const pb_field_t EthereumVerifyMessage_fields[4];

/* Maximum encoded size of messages (where known) */
#define EthereumGetAddress_size                  50
#define EthereumAddress_size                     22
#define EthereumSignTx_size                      1251
#define EthereumTxRequest_size                   80
#define EthereumTxAck_size                       1027
#define EthereumSignMessage_size                 1075
#define EthereumMessageSignature_size            89
#define EthereumVerifyMessage_size               1116

/* Message IDs (where set with "msgid" option) */
#ifdef PB_MSGID

#define MESSAGES_ETHEREUM_MESSAGES \


#endif

#ifdef __cplusplus
} /* extern "C" */
#endif
/* @@protoc_insertion_point(eof) */

#endif