/* Automatically generated nanopb header */
/* Generated by nanopb-0.2.5 at Wed May 28 15:52:00 2014. */
#include "stdio.h"
#include "stdlib.h"
#include "string.h"
#include "ctype.h"
#ifndef _PB_SITEWHERE_ARDUINO_PB_H_
#define _PB_SITEWHERE_ARDUINO_PB_H_
#include <pb.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Enum definitions */
typedef enum _SiteWhere_Command {
    SiteWhere_Command_REGISTER = 1,
    SiteWhere_Command_ACKNOWLEDGE = 2,
    SiteWhere_Command_DEVICELOCATION = 3,
    SiteWhere_Command_DEVICEALERT = 4,
    SiteWhere_Command_DEVICEMEASUREMENT = 5
} SiteWhere_Command;

typedef enum _Device_Command {
    Device_Command_REGISTER_ACK = 1
} Device_Command;

typedef enum _Device_RegistrationAckState {
    Device_RegistrationAckState_NEW_REGISTRATION = 1,
    Device_RegistrationAckState_ALREADY_REGISTERED = 2,
    Device_RegistrationAckState_REGISTRATION_ERROR = 3
} Device_RegistrationAckState;

typedef enum _Device_RegistrationAckError {
    Device_RegistrationAckError_INVALID_SPECIFICATION = 1,
    Device_RegistrationAckError_SITE_TOKEN_REQUIRED = 2
} Device_RegistrationAckError;

/* Struct definitions */
typedef struct _Device {
    uint8_t dummy_field;
} Device;

typedef struct _SiteWhere {
    uint8_t dummy_field;
} SiteWhere;

typedef struct _Device_Header {
    Device_Command command;
    bool has_originator;
    char originator[30];
    bool has_nestedPath;
    char nestedPath[50];
    bool has_nestedSpec;
    char nestedSpec[40];
} Device_Header;

typedef struct _Device_RegistrationAck {
    Device_RegistrationAckState state;
    bool has_errorType;
    Device_RegistrationAckError errorType;
    bool has_errorMessage;
    char errorMessage[70];
} Device_RegistrationAck;

typedef struct _SiteWhere_Acknowledge {
    char hardwareId[40];
    bool has_message;
    char message[70];
} SiteWhere_Acknowledge;

typedef struct _SiteWhere_DeviceAlert {
    char hardwareId[40];
    char alertType[40];
    char alertMessage[70];
    bool has_eventDate;
    uint64_t eventDate;
} SiteWhere_DeviceAlert;

typedef struct _SiteWhere_DeviceLocation {
    char hardwareId[40];
    uint64_t latitude;
    uint64_t longitude;
    bool has_elevation;
    uint64_t elevation;
    bool has_eventDate;
    uint64_t eventDate;
} SiteWhere_DeviceLocation;

typedef struct _SiteWhere_Header {
    SiteWhere_Command command;
    bool has_originator;
    char originator[30];
} SiteWhere_Header;

typedef struct _SiteWhere_Measurement {
    char measurementId[30];
    uint64_t measurementValue;
} SiteWhere_Measurement;

typedef struct _SiteWhere_RegisterDevice {
    char hardwareId[40];
    char specificationToken[40];
} SiteWhere_RegisterDevice;

typedef struct _SiteWhere_DeviceMeasurements {
    char hardwareId[40];
    size_t measurement_count;
    SiteWhere_Measurement measurement[5];
    bool has_eventDate;
    uint64_t eventDate;
} SiteWhere_DeviceMeasurements;

/* Default values for struct fields */

/* Field tags (for use in manual encoding/decoding) */
#define Device_Header_command_tag                1
#define Device_Header_originator_tag             2
#define Device_Header_nestedPath_tag             3
#define Device_Header_nestedSpec_tag             4
#define Device_RegistrationAck_state_tag         1
#define Device_RegistrationAck_errorType_tag     2
#define Device_RegistrationAck_errorMessage_tag  3
#define SiteWhere_Acknowledge_hardwareId_tag     1
#define SiteWhere_Acknowledge_message_tag        2
#define SiteWhere_DeviceAlert_hardwareId_tag     1
#define SiteWhere_DeviceAlert_alertType_tag      2
#define SiteWhere_DeviceAlert_alertMessage_tag   3
#define SiteWhere_DeviceAlert_eventDate_tag      4
#define SiteWhere_DeviceLocation_hardwareId_tag  1
#define SiteWhere_DeviceLocation_latitude_tag    2
#define SiteWhere_DeviceLocation_longitude_tag   3
#define SiteWhere_DeviceLocation_elevation_tag   4
#define SiteWhere_DeviceLocation_eventDate_tag   5
#define SiteWhere_Header_command_tag             1
#define SiteWhere_Header_originator_tag          2
#define SiteWhere_Measurement_measurementId_tag  2
#define SiteWhere_Measurement_measurementValue_tag 3
#define SiteWhere_RegisterDevice_hardwareId_tag  1
#define SiteWhere_RegisterDevice_specificationToken_tag 2
#define SiteWhere_DeviceMeasurements_hardwareId_tag 1
#define SiteWhere_DeviceMeasurements_measurement_tag 2
#define SiteWhere_DeviceMeasurements_eventDate_tag 3

/* Struct field encoding specification for nanopb */
extern const pb_field_t SiteWhere_fields[1];
extern const pb_field_t SiteWhere_Header_fields[3];
extern const pb_field_t SiteWhere_RegisterDevice_fields[3];
extern const pb_field_t SiteWhere_Acknowledge_fields[3];
extern const pb_field_t SiteWhere_DeviceLocation_fields[6];
extern const pb_field_t SiteWhere_DeviceAlert_fields[5];
extern const pb_field_t SiteWhere_Measurement_fields[3];
extern const pb_field_t SiteWhere_DeviceMeasurements_fields[4];
extern const pb_field_t Device_fields[1];
extern const pb_field_t Device_Header_fields[5];
extern const pb_field_t Device_RegistrationAck_fields[4];

/* Maximum encoded size of messages (where known) */
#define SiteWhere_size                           0
#define SiteWhere_Header_size                    38
#define SiteWhere_RegisterDevice_size            84
#define SiteWhere_Acknowledge_size               114
#define SiteWhere_DeviceLocation_size            78
#define SiteWhere_DeviceAlert_size               165
#define SiteWhere_Measurement_size               41
#define SiteWhere_DeviceMeasurements_size        266
#define Device_size                              0
#define Device_Header_size                       132
#define Device_RegistrationAck_size              84

#ifdef __cplusplus
} /* extern "C" */
#endif

#endif