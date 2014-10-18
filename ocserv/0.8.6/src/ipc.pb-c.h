/* Generated by the protocol buffer compiler.  DO NOT EDIT! */
/* Generated from: ipc.proto */

#ifndef PROTOBUF_C_ipc_2eproto__INCLUDED
#define PROTOBUF_C_ipc_2eproto__INCLUDED

#include <protobuf-c/protobuf-c.h>

PROTOBUF_C__BEGIN_DECLS

#if PROTOBUF_C_VERSION_NUMBER < 1000000
# error This file was generated by a newer version of protoc-c which is incompatible with your libprotobuf-c headers. Please update your headers.
#elif 1000001 < PROTOBUF_C_MIN_COMPILER_VERSION
# error This file was generated by an older version of protoc-c which is incompatible with your libprotobuf-c headers. Please regenerate this file with a newer version of protoc-c.
#endif


typedef struct _AuthCookieRequestMsg AuthCookieRequestMsg;
typedef struct _AuthReplyMsg AuthReplyMsg;
typedef struct _SessionResumeFetchMsg SessionResumeFetchMsg;
typedef struct _SessionResumeStoreReqMsg SessionResumeStoreReqMsg;
typedef struct _SessionResumeReplyMsg SessionResumeReplyMsg;
typedef struct _TunMtuMsg TunMtuMsg;
typedef struct _CliStatsMsg CliStatsMsg;
typedef struct _UdpFdMsg UdpFdMsg;
typedef struct _SessionInfoMsg SessionInfoMsg;
typedef struct _SecAuthInitMsg SecAuthInitMsg;
typedef struct _SecAuthContMsg SecAuthContMsg;
typedef struct _SecAuthReplyMsg SecAuthReplyMsg;
typedef struct _SecOpMsg SecOpMsg;
typedef struct _Cookie Cookie;
typedef struct _SecAuthSessionMsg SecAuthSessionMsg;
typedef struct _SecAuthSessionReplyMsg SecAuthSessionReplyMsg;


/* --- enums --- */

typedef enum _SessionResumeReplyMsg__RESUMEREP {
  SESSION_RESUME_REPLY_MSG__RESUME__REP__OK = 1,
  SESSION_RESUME_REPLY_MSG__RESUME__REP__FAILED = 2
    PROTOBUF_C__FORCE_ENUM_TO_BE_INT_SIZE(SESSION_RESUME_REPLY_MSG__RESUME__REP)
} SessionResumeReplyMsg__RESUMEREP;
typedef enum _AUTHREP {
  AUTH__REP__OK = 1,
  AUTH__REP__MSG = 2,
  AUTH__REP__FAILED = 3
    PROTOBUF_C__FORCE_ENUM_TO_BE_INT_SIZE(AUTH__REP)
} AUTHREP;

/* --- messages --- */

struct  _AuthCookieRequestMsg
{
  ProtobufCMessage base;
  ProtobufCBinaryData cookie;
};
#define AUTH_COOKIE_REQUEST_MSG__INIT \
 { PROTOBUF_C_MESSAGE_INIT (&auth_cookie_request_msg__descriptor) \
    , {0,NULL} }


struct  _AuthReplyMsg
{
  ProtobufCMessage base;
  AUTHREP reply;
  protobuf_c_boolean has_session_id;
  ProtobufCBinaryData session_id;
  char *vname;
  char *user_name;
  char *group_name;
  char *msg;
  char *ipv4;
  char *ipv6;
  char *ipv4_local;
  char *ipv6_local;
  char *ipv4_netmask;
  char *ipv6_netmask;
  protobuf_c_boolean has_ipv6_prefix;
  uint32_t ipv6_prefix;
  protobuf_c_boolean has_rx_per_sec;
  uint32_t rx_per_sec;
  protobuf_c_boolean has_tx_per_sec;
  uint32_t tx_per_sec;
  protobuf_c_boolean has_net_priority;
  uint32_t net_priority;
  size_t n_routes;
  char **routes;
  size_t n_dns;
  char **dns;
  size_t n_nbns;
  char **nbns;
  protobuf_c_boolean has_no_udp;
  protobuf_c_boolean no_udp;
  char *xml_config_file;
  char *ipv4_network;
  char *ipv6_network;
};
#define AUTH_REPLY_MSG__INIT \
 { PROTOBUF_C_MESSAGE_INIT (&auth_reply_msg__descriptor) \
    , 0, 0,{0,NULL}, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0,0, 0,0, 0,0, 0,0, 0,NULL, 0,NULL, 0,NULL, 0,0, NULL, NULL, NULL }


struct  _SessionResumeFetchMsg
{
  ProtobufCMessage base;
  ProtobufCBinaryData session_id;
};
#define SESSION_RESUME_FETCH_MSG__INIT \
 { PROTOBUF_C_MESSAGE_INIT (&session_resume_fetch_msg__descriptor) \
    , {0,NULL} }


struct  _SessionResumeStoreReqMsg
{
  ProtobufCMessage base;
  ProtobufCBinaryData session_id;
  ProtobufCBinaryData session_data;
};
#define SESSION_RESUME_STORE_REQ_MSG__INIT \
 { PROTOBUF_C_MESSAGE_INIT (&session_resume_store_req_msg__descriptor) \
    , {0,NULL}, {0,NULL} }


struct  _SessionResumeReplyMsg
{
  ProtobufCMessage base;
  SessionResumeReplyMsg__RESUMEREP reply;
  protobuf_c_boolean has_session_data;
  ProtobufCBinaryData session_data;
};
#define SESSION_RESUME_REPLY_MSG__INIT \
 { PROTOBUF_C_MESSAGE_INIT (&session_resume_reply_msg__descriptor) \
    , 0, 0,{0,NULL} }


struct  _TunMtuMsg
{
  ProtobufCMessage base;
  uint32_t mtu;
};
#define TUN_MTU_MSG__INIT \
 { PROTOBUF_C_MESSAGE_INIT (&tun_mtu_msg__descriptor) \
    , 0 }


struct  _CliStatsMsg
{
  ProtobufCMessage base;
  uint64_t bytes_in;
  uint64_t bytes_out;
};
#define CLI_STATS_MSG__INIT \
 { PROTOBUF_C_MESSAGE_INIT (&cli_stats_msg__descriptor) \
    , 0, 0 }


struct  _UdpFdMsg
{
  ProtobufCMessage base;
  protobuf_c_boolean hello;
};
#define UDP_FD_MSG__INIT \
 { PROTOBUF_C_MESSAGE_INIT (&udp_fd_msg__descriptor) \
    , 1 }


struct  _SessionInfoMsg
{
  ProtobufCMessage base;
  char *tls_ciphersuite;
  char *dtls_ciphersuite;
  char *user_agent;
};
#define SESSION_INFO_MSG__INIT \
 { PROTOBUF_C_MESSAGE_INIT (&session_info_msg__descriptor) \
    , NULL, NULL, NULL }


struct  _SecAuthInitMsg
{
  ProtobufCMessage base;
  protobuf_c_boolean tls_auth_ok;
  char *user_name;
  char *group_name;
  char *cert_user_name;
  size_t n_cert_group_names;
  char **cert_group_names;
  char *hostname;
  char *ip;
};
#define SEC_AUTH_INIT_MSG__INIT \
 { PROTOBUF_C_MESSAGE_INIT (&sec_auth_init_msg__descriptor) \
    , 0, NULL, NULL, NULL, 0,NULL, NULL, NULL }


struct  _SecAuthContMsg
{
  ProtobufCMessage base;
  char *password;
  ProtobufCBinaryData sid;
  char *ip;
};
#define SEC_AUTH_CONT_MSG__INIT \
 { PROTOBUF_C_MESSAGE_INIT (&sec_auth_cont_msg__descriptor) \
    , NULL, {0,NULL}, NULL }


struct  _SecAuthReplyMsg
{
  ProtobufCMessage base;
  AUTHREP reply;
  protobuf_c_boolean has_cookie;
  ProtobufCBinaryData cookie;
  char *user_name;
  char *msg;
  protobuf_c_boolean has_dtls_session_id;
  ProtobufCBinaryData dtls_session_id;
  protobuf_c_boolean has_sid;
  ProtobufCBinaryData sid;
};
#define SEC_AUTH_REPLY_MSG__INIT \
 { PROTOBUF_C_MESSAGE_INIT (&sec_auth_reply_msg__descriptor) \
    , 0, 0,{0,NULL}, NULL, NULL, 0,{0,NULL}, 0,{0,NULL} }


struct  _SecOpMsg
{
  ProtobufCMessage base;
  protobuf_c_boolean has_key_idx;
  uint32_t key_idx;
  ProtobufCBinaryData data;
};
#define SEC_OP_MSG__INIT \
 { PROTOBUF_C_MESSAGE_INIT (&sec_op_msg__descriptor) \
    , 0,0, {0,NULL} }


struct  _Cookie
{
  ProtobufCMessage base;
  char *username;
  char *groupname;
  char *hostname;
  char *ip;
  ProtobufCBinaryData session_id;
  uint32_t expiration;
  uint32_t ipv4_seed;
  ProtobufCBinaryData sid;
  protobuf_c_boolean tls_auth_ok;
};
#define COOKIE__INIT \
 { PROTOBUF_C_MESSAGE_INIT (&cookie__descriptor) \
    , NULL, NULL, NULL, NULL, {0,NULL}, 0, 0, {0,NULL}, 0 }


struct  _SecAuthSessionMsg
{
  ProtobufCMessage base;
  ProtobufCBinaryData sid;
};
#define SEC_AUTH_SESSION_MSG__INIT \
 { PROTOBUF_C_MESSAGE_INIT (&sec_auth_session_msg__descriptor) \
    , {0,NULL} }


struct  _SecAuthSessionReplyMsg
{
  ProtobufCMessage base;
  AUTHREP reply;
};
#define SEC_AUTH_SESSION_REPLY_MSG__INIT \
 { PROTOBUF_C_MESSAGE_INIT (&sec_auth_session_reply_msg__descriptor) \
    , 0 }


/* AuthCookieRequestMsg methods */
void   auth_cookie_request_msg__init
                     (AuthCookieRequestMsg         *message);
size_t auth_cookie_request_msg__get_packed_size
                     (const AuthCookieRequestMsg   *message);
size_t auth_cookie_request_msg__pack
                     (const AuthCookieRequestMsg   *message,
                      uint8_t             *out);
size_t auth_cookie_request_msg__pack_to_buffer
                     (const AuthCookieRequestMsg   *message,
                      ProtobufCBuffer     *buffer);
AuthCookieRequestMsg *
       auth_cookie_request_msg__unpack
                     (ProtobufCAllocator  *allocator,
                      size_t               len,
                      const uint8_t       *data);
void   auth_cookie_request_msg__free_unpacked
                     (AuthCookieRequestMsg *message,
                      ProtobufCAllocator *allocator);
/* AuthReplyMsg methods */
void   auth_reply_msg__init
                     (AuthReplyMsg         *message);
size_t auth_reply_msg__get_packed_size
                     (const AuthReplyMsg   *message);
size_t auth_reply_msg__pack
                     (const AuthReplyMsg   *message,
                      uint8_t             *out);
size_t auth_reply_msg__pack_to_buffer
                     (const AuthReplyMsg   *message,
                      ProtobufCBuffer     *buffer);
AuthReplyMsg *
       auth_reply_msg__unpack
                     (ProtobufCAllocator  *allocator,
                      size_t               len,
                      const uint8_t       *data);
void   auth_reply_msg__free_unpacked
                     (AuthReplyMsg *message,
                      ProtobufCAllocator *allocator);
/* SessionResumeFetchMsg methods */
void   session_resume_fetch_msg__init
                     (SessionResumeFetchMsg         *message);
size_t session_resume_fetch_msg__get_packed_size
                     (const SessionResumeFetchMsg   *message);
size_t session_resume_fetch_msg__pack
                     (const SessionResumeFetchMsg   *message,
                      uint8_t             *out);
size_t session_resume_fetch_msg__pack_to_buffer
                     (const SessionResumeFetchMsg   *message,
                      ProtobufCBuffer     *buffer);
SessionResumeFetchMsg *
       session_resume_fetch_msg__unpack
                     (ProtobufCAllocator  *allocator,
                      size_t               len,
                      const uint8_t       *data);
void   session_resume_fetch_msg__free_unpacked
                     (SessionResumeFetchMsg *message,
                      ProtobufCAllocator *allocator);
/* SessionResumeStoreReqMsg methods */
void   session_resume_store_req_msg__init
                     (SessionResumeStoreReqMsg         *message);
size_t session_resume_store_req_msg__get_packed_size
                     (const SessionResumeStoreReqMsg   *message);
size_t session_resume_store_req_msg__pack
                     (const SessionResumeStoreReqMsg   *message,
                      uint8_t             *out);
size_t session_resume_store_req_msg__pack_to_buffer
                     (const SessionResumeStoreReqMsg   *message,
                      ProtobufCBuffer     *buffer);
SessionResumeStoreReqMsg *
       session_resume_store_req_msg__unpack
                     (ProtobufCAllocator  *allocator,
                      size_t               len,
                      const uint8_t       *data);
void   session_resume_store_req_msg__free_unpacked
                     (SessionResumeStoreReqMsg *message,
                      ProtobufCAllocator *allocator);
/* SessionResumeReplyMsg methods */
void   session_resume_reply_msg__init
                     (SessionResumeReplyMsg         *message);
size_t session_resume_reply_msg__get_packed_size
                     (const SessionResumeReplyMsg   *message);
size_t session_resume_reply_msg__pack
                     (const SessionResumeReplyMsg   *message,
                      uint8_t             *out);
size_t session_resume_reply_msg__pack_to_buffer
                     (const SessionResumeReplyMsg   *message,
                      ProtobufCBuffer     *buffer);
SessionResumeReplyMsg *
       session_resume_reply_msg__unpack
                     (ProtobufCAllocator  *allocator,
                      size_t               len,
                      const uint8_t       *data);
void   session_resume_reply_msg__free_unpacked
                     (SessionResumeReplyMsg *message,
                      ProtobufCAllocator *allocator);
/* TunMtuMsg methods */
void   tun_mtu_msg__init
                     (TunMtuMsg         *message);
size_t tun_mtu_msg__get_packed_size
                     (const TunMtuMsg   *message);
size_t tun_mtu_msg__pack
                     (const TunMtuMsg   *message,
                      uint8_t             *out);
size_t tun_mtu_msg__pack_to_buffer
                     (const TunMtuMsg   *message,
                      ProtobufCBuffer     *buffer);
TunMtuMsg *
       tun_mtu_msg__unpack
                     (ProtobufCAllocator  *allocator,
                      size_t               len,
                      const uint8_t       *data);
void   tun_mtu_msg__free_unpacked
                     (TunMtuMsg *message,
                      ProtobufCAllocator *allocator);
/* CliStatsMsg methods */
void   cli_stats_msg__init
                     (CliStatsMsg         *message);
size_t cli_stats_msg__get_packed_size
                     (const CliStatsMsg   *message);
size_t cli_stats_msg__pack
                     (const CliStatsMsg   *message,
                      uint8_t             *out);
size_t cli_stats_msg__pack_to_buffer
                     (const CliStatsMsg   *message,
                      ProtobufCBuffer     *buffer);
CliStatsMsg *
       cli_stats_msg__unpack
                     (ProtobufCAllocator  *allocator,
                      size_t               len,
                      const uint8_t       *data);
void   cli_stats_msg__free_unpacked
                     (CliStatsMsg *message,
                      ProtobufCAllocator *allocator);
/* UdpFdMsg methods */
void   udp_fd_msg__init
                     (UdpFdMsg         *message);
size_t udp_fd_msg__get_packed_size
                     (const UdpFdMsg   *message);
size_t udp_fd_msg__pack
                     (const UdpFdMsg   *message,
                      uint8_t             *out);
size_t udp_fd_msg__pack_to_buffer
                     (const UdpFdMsg   *message,
                      ProtobufCBuffer     *buffer);
UdpFdMsg *
       udp_fd_msg__unpack
                     (ProtobufCAllocator  *allocator,
                      size_t               len,
                      const uint8_t       *data);
void   udp_fd_msg__free_unpacked
                     (UdpFdMsg *message,
                      ProtobufCAllocator *allocator);
/* SessionInfoMsg methods */
void   session_info_msg__init
                     (SessionInfoMsg         *message);
size_t session_info_msg__get_packed_size
                     (const SessionInfoMsg   *message);
size_t session_info_msg__pack
                     (const SessionInfoMsg   *message,
                      uint8_t             *out);
size_t session_info_msg__pack_to_buffer
                     (const SessionInfoMsg   *message,
                      ProtobufCBuffer     *buffer);
SessionInfoMsg *
       session_info_msg__unpack
                     (ProtobufCAllocator  *allocator,
                      size_t               len,
                      const uint8_t       *data);
void   session_info_msg__free_unpacked
                     (SessionInfoMsg *message,
                      ProtobufCAllocator *allocator);
/* SecAuthInitMsg methods */
void   sec_auth_init_msg__init
                     (SecAuthInitMsg         *message);
size_t sec_auth_init_msg__get_packed_size
                     (const SecAuthInitMsg   *message);
size_t sec_auth_init_msg__pack
                     (const SecAuthInitMsg   *message,
                      uint8_t             *out);
size_t sec_auth_init_msg__pack_to_buffer
                     (const SecAuthInitMsg   *message,
                      ProtobufCBuffer     *buffer);
SecAuthInitMsg *
       sec_auth_init_msg__unpack
                     (ProtobufCAllocator  *allocator,
                      size_t               len,
                      const uint8_t       *data);
void   sec_auth_init_msg__free_unpacked
                     (SecAuthInitMsg *message,
                      ProtobufCAllocator *allocator);
/* SecAuthContMsg methods */
void   sec_auth_cont_msg__init
                     (SecAuthContMsg         *message);
size_t sec_auth_cont_msg__get_packed_size
                     (const SecAuthContMsg   *message);
size_t sec_auth_cont_msg__pack
                     (const SecAuthContMsg   *message,
                      uint8_t             *out);
size_t sec_auth_cont_msg__pack_to_buffer
                     (const SecAuthContMsg   *message,
                      ProtobufCBuffer     *buffer);
SecAuthContMsg *
       sec_auth_cont_msg__unpack
                     (ProtobufCAllocator  *allocator,
                      size_t               len,
                      const uint8_t       *data);
void   sec_auth_cont_msg__free_unpacked
                     (SecAuthContMsg *message,
                      ProtobufCAllocator *allocator);
/* SecAuthReplyMsg methods */
void   sec_auth_reply_msg__init
                     (SecAuthReplyMsg         *message);
size_t sec_auth_reply_msg__get_packed_size
                     (const SecAuthReplyMsg   *message);
size_t sec_auth_reply_msg__pack
                     (const SecAuthReplyMsg   *message,
                      uint8_t             *out);
size_t sec_auth_reply_msg__pack_to_buffer
                     (const SecAuthReplyMsg   *message,
                      ProtobufCBuffer     *buffer);
SecAuthReplyMsg *
       sec_auth_reply_msg__unpack
                     (ProtobufCAllocator  *allocator,
                      size_t               len,
                      const uint8_t       *data);
void   sec_auth_reply_msg__free_unpacked
                     (SecAuthReplyMsg *message,
                      ProtobufCAllocator *allocator);
/* SecOpMsg methods */
void   sec_op_msg__init
                     (SecOpMsg         *message);
size_t sec_op_msg__get_packed_size
                     (const SecOpMsg   *message);
size_t sec_op_msg__pack
                     (const SecOpMsg   *message,
                      uint8_t             *out);
size_t sec_op_msg__pack_to_buffer
                     (const SecOpMsg   *message,
                      ProtobufCBuffer     *buffer);
SecOpMsg *
       sec_op_msg__unpack
                     (ProtobufCAllocator  *allocator,
                      size_t               len,
                      const uint8_t       *data);
void   sec_op_msg__free_unpacked
                     (SecOpMsg *message,
                      ProtobufCAllocator *allocator);
/* Cookie methods */
void   cookie__init
                     (Cookie         *message);
size_t cookie__get_packed_size
                     (const Cookie   *message);
size_t cookie__pack
                     (const Cookie   *message,
                      uint8_t             *out);
size_t cookie__pack_to_buffer
                     (const Cookie   *message,
                      ProtobufCBuffer     *buffer);
Cookie *
       cookie__unpack
                     (ProtobufCAllocator  *allocator,
                      size_t               len,
                      const uint8_t       *data);
void   cookie__free_unpacked
                     (Cookie *message,
                      ProtobufCAllocator *allocator);
/* SecAuthSessionMsg methods */
void   sec_auth_session_msg__init
                     (SecAuthSessionMsg         *message);
size_t sec_auth_session_msg__get_packed_size
                     (const SecAuthSessionMsg   *message);
size_t sec_auth_session_msg__pack
                     (const SecAuthSessionMsg   *message,
                      uint8_t             *out);
size_t sec_auth_session_msg__pack_to_buffer
                     (const SecAuthSessionMsg   *message,
                      ProtobufCBuffer     *buffer);
SecAuthSessionMsg *
       sec_auth_session_msg__unpack
                     (ProtobufCAllocator  *allocator,
                      size_t               len,
                      const uint8_t       *data);
void   sec_auth_session_msg__free_unpacked
                     (SecAuthSessionMsg *message,
                      ProtobufCAllocator *allocator);
/* SecAuthSessionReplyMsg methods */
void   sec_auth_session_reply_msg__init
                     (SecAuthSessionReplyMsg         *message);
size_t sec_auth_session_reply_msg__get_packed_size
                     (const SecAuthSessionReplyMsg   *message);
size_t sec_auth_session_reply_msg__pack
                     (const SecAuthSessionReplyMsg   *message,
                      uint8_t             *out);
size_t sec_auth_session_reply_msg__pack_to_buffer
                     (const SecAuthSessionReplyMsg   *message,
                      ProtobufCBuffer     *buffer);
SecAuthSessionReplyMsg *
       sec_auth_session_reply_msg__unpack
                     (ProtobufCAllocator  *allocator,
                      size_t               len,
                      const uint8_t       *data);
void   sec_auth_session_reply_msg__free_unpacked
                     (SecAuthSessionReplyMsg *message,
                      ProtobufCAllocator *allocator);
/* --- per-message closures --- */

typedef void (*AuthCookieRequestMsg_Closure)
                 (const AuthCookieRequestMsg *message,
                  void *closure_data);
typedef void (*AuthReplyMsg_Closure)
                 (const AuthReplyMsg *message,
                  void *closure_data);
typedef void (*SessionResumeFetchMsg_Closure)
                 (const SessionResumeFetchMsg *message,
                  void *closure_data);
typedef void (*SessionResumeStoreReqMsg_Closure)
                 (const SessionResumeStoreReqMsg *message,
                  void *closure_data);
typedef void (*SessionResumeReplyMsg_Closure)
                 (const SessionResumeReplyMsg *message,
                  void *closure_data);
typedef void (*TunMtuMsg_Closure)
                 (const TunMtuMsg *message,
                  void *closure_data);
typedef void (*CliStatsMsg_Closure)
                 (const CliStatsMsg *message,
                  void *closure_data);
typedef void (*UdpFdMsg_Closure)
                 (const UdpFdMsg *message,
                  void *closure_data);
typedef void (*SessionInfoMsg_Closure)
                 (const SessionInfoMsg *message,
                  void *closure_data);
typedef void (*SecAuthInitMsg_Closure)
                 (const SecAuthInitMsg *message,
                  void *closure_data);
typedef void (*SecAuthContMsg_Closure)
                 (const SecAuthContMsg *message,
                  void *closure_data);
typedef void (*SecAuthReplyMsg_Closure)
                 (const SecAuthReplyMsg *message,
                  void *closure_data);
typedef void (*SecOpMsg_Closure)
                 (const SecOpMsg *message,
                  void *closure_data);
typedef void (*Cookie_Closure)
                 (const Cookie *message,
                  void *closure_data);
typedef void (*SecAuthSessionMsg_Closure)
                 (const SecAuthSessionMsg *message,
                  void *closure_data);
typedef void (*SecAuthSessionReplyMsg_Closure)
                 (const SecAuthSessionReplyMsg *message,
                  void *closure_data);

/* --- services --- */


/* --- descriptors --- */

extern const ProtobufCEnumDescriptor    auth__rep__descriptor;
extern const ProtobufCMessageDescriptor auth_cookie_request_msg__descriptor;
extern const ProtobufCMessageDescriptor auth_reply_msg__descriptor;
extern const ProtobufCMessageDescriptor session_resume_fetch_msg__descriptor;
extern const ProtobufCMessageDescriptor session_resume_store_req_msg__descriptor;
extern const ProtobufCMessageDescriptor session_resume_reply_msg__descriptor;
extern const ProtobufCEnumDescriptor    session_resume_reply_msg__resume__rep__descriptor;
extern const ProtobufCMessageDescriptor tun_mtu_msg__descriptor;
extern const ProtobufCMessageDescriptor cli_stats_msg__descriptor;
extern const ProtobufCMessageDescriptor udp_fd_msg__descriptor;
extern const ProtobufCMessageDescriptor session_info_msg__descriptor;
extern const ProtobufCMessageDescriptor sec_auth_init_msg__descriptor;
extern const ProtobufCMessageDescriptor sec_auth_cont_msg__descriptor;
extern const ProtobufCMessageDescriptor sec_auth_reply_msg__descriptor;
extern const ProtobufCMessageDescriptor sec_op_msg__descriptor;
extern const ProtobufCMessageDescriptor cookie__descriptor;
extern const ProtobufCMessageDescriptor sec_auth_session_msg__descriptor;
extern const ProtobufCMessageDescriptor sec_auth_session_reply_msg__descriptor;

PROTOBUF_C__END_DECLS


#endif  /* PROTOBUF_C_ipc_2eproto__INCLUDED */
