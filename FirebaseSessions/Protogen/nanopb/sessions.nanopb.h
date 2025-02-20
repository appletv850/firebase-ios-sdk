/*
 * Copyright 2022 Google LLC
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *      http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

/* Automatically generated nanopb header */
/* Generated by nanopb-0.3.9.9 */

#ifndef PB_FIREBASE_APPQUALITY_SESSIONS_SESSIONS_NANOPB_H_INCLUDED
#define PB_FIREBASE_APPQUALITY_SESSIONS_SESSIONS_NANOPB_H_INCLUDED
#include <nanopb/pb.h>

#include "clientanalytics.nanopb.h"

/* @@protoc_insertion_point(includes) */
#if PB_PROTO_HEADER_VERSION != 30
#error Regenerate this file with the current version of nanopb generator.
#endif


/* Enum definitions */
typedef enum _firebase_appquality_sessions_EventType {
    firebase_appquality_sessions_EventType_EVENT_TYPE_UNKNOWN = 0,
    firebase_appquality_sessions_EventType_SESSION_START = 1
} firebase_appquality_sessions_EventType;
#define _firebase_appquality_sessions_EventType_MIN firebase_appquality_sessions_EventType_EVENT_TYPE_UNKNOWN
#define _firebase_appquality_sessions_EventType_MAX firebase_appquality_sessions_EventType_SESSION_START
#define _firebase_appquality_sessions_EventType_ARRAYSIZE ((firebase_appquality_sessions_EventType)(firebase_appquality_sessions_EventType_SESSION_START+1))

typedef enum _firebase_appquality_sessions_DataCollectionState {
    firebase_appquality_sessions_DataCollectionState_COLLECTION_UNKNOWN = 0,
    firebase_appquality_sessions_DataCollectionState_COLLECTION_SDK_NOT_INSTALLED = 1,
    firebase_appquality_sessions_DataCollectionState_COLLECTION_ENABLED = 2,
    firebase_appquality_sessions_DataCollectionState_COLLECTION_DISABLED = 3,
    firebase_appquality_sessions_DataCollectionState_COLLECTION_DISABLED_REMOTE = 4,
    firebase_appquality_sessions_DataCollectionState_COLLECTION_SAMPLED = 5
} firebase_appquality_sessions_DataCollectionState;
#define _firebase_appquality_sessions_DataCollectionState_MIN firebase_appquality_sessions_DataCollectionState_COLLECTION_UNKNOWN
#define _firebase_appquality_sessions_DataCollectionState_MAX firebase_appquality_sessions_DataCollectionState_COLLECTION_SAMPLED
#define _firebase_appquality_sessions_DataCollectionState_ARRAYSIZE ((firebase_appquality_sessions_DataCollectionState)(firebase_appquality_sessions_DataCollectionState_COLLECTION_SAMPLED+1))

typedef enum _firebase_appquality_sessions_OsName {
    firebase_appquality_sessions_OsName_UNKNOWN_OSNAME = 0,
    firebase_appquality_sessions_OsName_MACOS = 1,
    firebase_appquality_sessions_OsName_MACCATALYST = 2,
    firebase_appquality_sessions_OsName_IOS_ON_MAC = 3,
    firebase_appquality_sessions_OsName_IOS = 4,
    firebase_appquality_sessions_OsName_TVOS = 5,
    firebase_appquality_sessions_OsName_WATCHOS = 6,
    firebase_appquality_sessions_OsName_IPADOS = 7,
    firebase_appquality_sessions_OsName_UNSPECIFIED = 8
} firebase_appquality_sessions_OsName;
#define _firebase_appquality_sessions_OsName_MIN firebase_appquality_sessions_OsName_UNKNOWN_OSNAME
#define _firebase_appquality_sessions_OsName_MAX firebase_appquality_sessions_OsName_UNSPECIFIED
#define _firebase_appquality_sessions_OsName_ARRAYSIZE ((firebase_appquality_sessions_OsName)(firebase_appquality_sessions_OsName_UNSPECIFIED+1))

typedef enum _firebase_appquality_sessions_LogEnvironment {
    firebase_appquality_sessions_LogEnvironment_LOG_ENVIRONMENT_UNKNOWN = 0,
    firebase_appquality_sessions_LogEnvironment_LOG_ENVIRONMENT_AUTOPUSH = 1,
    firebase_appquality_sessions_LogEnvironment_LOG_ENVIRONMENT_STAGING = 2,
    firebase_appquality_sessions_LogEnvironment_LOG_ENVIRONMENT_PROD = 3
} firebase_appquality_sessions_LogEnvironment;
#define _firebase_appquality_sessions_LogEnvironment_MIN firebase_appquality_sessions_LogEnvironment_LOG_ENVIRONMENT_UNKNOWN
#define _firebase_appquality_sessions_LogEnvironment_MAX firebase_appquality_sessions_LogEnvironment_LOG_ENVIRONMENT_PROD
#define _firebase_appquality_sessions_LogEnvironment_ARRAYSIZE ((firebase_appquality_sessions_LogEnvironment)(firebase_appquality_sessions_LogEnvironment_LOG_ENVIRONMENT_PROD+1))

/* Struct definitions */
typedef struct _firebase_appquality_sessions_AndroidApplicationInfo {
    pb_bytes_array_t *package_name;
    pb_bytes_array_t *version_name;
/* @@protoc_insertion_point(struct:firebase_appquality_sessions_AndroidApplicationInfo) */
} firebase_appquality_sessions_AndroidApplicationInfo;

typedef struct _firebase_appquality_sessions_AppleApplicationInfo {
    pb_bytes_array_t *bundle_short_version;
    NetworkConnectionInfo network_connection_info;
    firebase_appquality_sessions_OsName os_name;
    pb_bytes_array_t *mcc_mnc;
/* @@protoc_insertion_point(struct:firebase_appquality_sessions_AppleApplicationInfo) */
} firebase_appquality_sessions_AppleApplicationInfo;

typedef struct _firebase_appquality_sessions_DataCollectionStatus {
    firebase_appquality_sessions_DataCollectionState performance;
    firebase_appquality_sessions_DataCollectionState crashlytics;
    double session_sampling_rate;
/* @@protoc_insertion_point(struct:firebase_appquality_sessions_DataCollectionStatus) */
} firebase_appquality_sessions_DataCollectionStatus;

typedef struct _firebase_appquality_sessions_ApplicationInfo {
    pb_bytes_array_t *app_id;
    pb_bytes_array_t *device_model;
    pb_bytes_array_t *development_platform_name;
    pb_bytes_array_t *development_platform_version;
    pb_size_t which_platform_info;
    union {
        firebase_appquality_sessions_AndroidApplicationInfo android_app_info;
        firebase_appquality_sessions_AppleApplicationInfo apple_app_info;
    };
    pb_bytes_array_t *session_sdk_version;
    firebase_appquality_sessions_LogEnvironment log_environment;
/* @@protoc_insertion_point(struct:firebase_appquality_sessions_ApplicationInfo) */
} firebase_appquality_sessions_ApplicationInfo;

typedef struct _firebase_appquality_sessions_SessionInfo {
    pb_bytes_array_t *session_id;
    pb_bytes_array_t *previous_session_id;
    pb_bytes_array_t *firebase_installation_id;
    int64_t event_timestamp_us;
    firebase_appquality_sessions_DataCollectionStatus data_collection_status;
/* @@protoc_insertion_point(struct:firebase_appquality_sessions_SessionInfo) */
} firebase_appquality_sessions_SessionInfo;

typedef struct _firebase_appquality_sessions_SessionEvent {
    firebase_appquality_sessions_EventType event_type;
    firebase_appquality_sessions_SessionInfo session_data;
    firebase_appquality_sessions_ApplicationInfo application_info;
/* @@protoc_insertion_point(struct:firebase_appquality_sessions_SessionEvent) */
} firebase_appquality_sessions_SessionEvent;

/* Default values for struct fields */

/* Initializer values for message structs */
#define firebase_appquality_sessions_SessionEvent_init_default {_firebase_appquality_sessions_EventType_MIN, firebase_appquality_sessions_SessionInfo_init_default, firebase_appquality_sessions_ApplicationInfo_init_default}
#define firebase_appquality_sessions_SessionInfo_init_default {NULL, NULL, NULL, 0, firebase_appquality_sessions_DataCollectionStatus_init_default}
#define firebase_appquality_sessions_DataCollectionStatus_init_default {_firebase_appquality_sessions_DataCollectionState_MIN, _firebase_appquality_sessions_DataCollectionState_MIN, 0}
#define firebase_appquality_sessions_ApplicationInfo_init_default {NULL, NULL, NULL, NULL, 0, {firebase_appquality_sessions_AndroidApplicationInfo_init_default}, NULL, _firebase_appquality_sessions_LogEnvironment_MIN}
#define firebase_appquality_sessions_AndroidApplicationInfo_init_default {NULL, NULL}
#define firebase_appquality_sessions_AppleApplicationInfo_init_default {NULL, NetworkConnectionInfo_init_default, _firebase_appquality_sessions_OsName_MIN, NULL}
#define firebase_appquality_sessions_SessionEvent_init_zero {_firebase_appquality_sessions_EventType_MIN, firebase_appquality_sessions_SessionInfo_init_zero, firebase_appquality_sessions_ApplicationInfo_init_zero}
#define firebase_appquality_sessions_SessionInfo_init_zero {NULL, NULL, NULL, 0, firebase_appquality_sessions_DataCollectionStatus_init_zero}
#define firebase_appquality_sessions_DataCollectionStatus_init_zero {_firebase_appquality_sessions_DataCollectionState_MIN, _firebase_appquality_sessions_DataCollectionState_MIN, 0}
#define firebase_appquality_sessions_ApplicationInfo_init_zero {NULL, NULL, NULL, NULL, 0, {firebase_appquality_sessions_AndroidApplicationInfo_init_zero}, NULL, _firebase_appquality_sessions_LogEnvironment_MIN}
#define firebase_appquality_sessions_AndroidApplicationInfo_init_zero {NULL, NULL}
#define firebase_appquality_sessions_AppleApplicationInfo_init_zero {NULL, NetworkConnectionInfo_init_zero, _firebase_appquality_sessions_OsName_MIN, NULL}

/* Field tags (for use in manual encoding/decoding) */
#define firebase_appquality_sessions_AndroidApplicationInfo_package_name_tag 1
#define firebase_appquality_sessions_AndroidApplicationInfo_version_name_tag 3
#define firebase_appquality_sessions_AppleApplicationInfo_bundle_short_version_tag 1
#define firebase_appquality_sessions_AppleApplicationInfo_network_connection_info_tag 3
#define firebase_appquality_sessions_AppleApplicationInfo_os_name_tag 4
#define firebase_appquality_sessions_AppleApplicationInfo_mcc_mnc_tag 5
#define firebase_appquality_sessions_DataCollectionStatus_performance_tag 1
#define firebase_appquality_sessions_DataCollectionStatus_crashlytics_tag 2
#define firebase_appquality_sessions_DataCollectionStatus_session_sampling_rate_tag 3
#define firebase_appquality_sessions_ApplicationInfo_android_app_info_tag 5
#define firebase_appquality_sessions_ApplicationInfo_apple_app_info_tag 6
#define firebase_appquality_sessions_ApplicationInfo_app_id_tag 1
#define firebase_appquality_sessions_ApplicationInfo_device_model_tag 2
#define firebase_appquality_sessions_ApplicationInfo_development_platform_name_tag 3
#define firebase_appquality_sessions_ApplicationInfo_development_platform_version_tag 4
#define firebase_appquality_sessions_ApplicationInfo_session_sdk_version_tag 7
#define firebase_appquality_sessions_ApplicationInfo_log_environment_tag 8
#define firebase_appquality_sessions_SessionInfo_session_id_tag 1
#define firebase_appquality_sessions_SessionInfo_previous_session_id_tag 2
#define firebase_appquality_sessions_SessionInfo_firebase_installation_id_tag 3
#define firebase_appquality_sessions_SessionInfo_event_timestamp_us_tag 4
#define firebase_appquality_sessions_SessionInfo_data_collection_status_tag 6
#define firebase_appquality_sessions_SessionEvent_event_type_tag 1
#define firebase_appquality_sessions_SessionEvent_session_data_tag 2
#define firebase_appquality_sessions_SessionEvent_application_info_tag 3

/* Struct field encoding specification for nanopb */
extern const pb_field_t firebase_appquality_sessions_SessionEvent_fields[4];
extern const pb_field_t firebase_appquality_sessions_SessionInfo_fields[6];
extern const pb_field_t firebase_appquality_sessions_DataCollectionStatus_fields[4];
extern const pb_field_t firebase_appquality_sessions_ApplicationInfo_fields[9];
extern const pb_field_t firebase_appquality_sessions_AndroidApplicationInfo_fields[3];
extern const pb_field_t firebase_appquality_sessions_AppleApplicationInfo_fields[5];

/* Maximum encoded size of messages (where known) */
/* firebase_appquality_sessions_SessionEvent_size depends on runtime parameters */
/* firebase_appquality_sessions_SessionInfo_size depends on runtime parameters */
#define firebase_appquality_sessions_DataCollectionStatus_size 13
/* firebase_appquality_sessions_ApplicationInfo_size depends on runtime parameters */
/* firebase_appquality_sessions_AndroidApplicationInfo_size depends on runtime parameters */
/* firebase_appquality_sessions_AppleApplicationInfo_size depends on runtime parameters */

/* Message IDs (where set with "msgid" option) */
#ifdef PB_MSGID

#define SESSIONS_MESSAGES \


#endif

/* @@protoc_insertion_point(eof) */

#endif
