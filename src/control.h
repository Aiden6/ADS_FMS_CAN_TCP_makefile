#ifndef _CONTROL_H_
#define _CONTROL_H_
#include <stdio.h>
#include <stdlib.h>
#include <semaphore.h>
#include "std_types.h"
#include "api_test.h"

extern int32_t  gTestFlag;
extern uint8_t  driving_mode;
extern int8_t   gCharInput[STRING_LEN];
extern sem_t    sem_event;
extern sem_t    sem_event_SetAcceleratedVelocity;
extern sem_t    sem_event_SetAngular;
extern sem_t    sem_event_SetCarGear;
extern sem_t    sem_event_SetEpbState;
extern sem_t    sem_event_SetDrivingMode;


extern double realSpeed_val;
extern double realAngleInfo_val;
extern double wholeAccXInfo_val;
extern uint8_t accDeepness_val;
extern uint8_t brakeDeepness_val;

void SetAngular_BYD( double inputAngle );                                     // 05
void SetAcceleratedVelocity_BYD( double inputAccVal );                        // 06
void SetCarGear_BYD( uint8_t CarGear_val );
void SetEpbState_BYD( uint8_t CarEpb_val );
void SetDrivingMode_BYD(uint8_t DrivingMode_val);


void Get_EPS_ESP_Permission_BYD(uint8_t err_count);
uint8_t GetEPSDriveModeFeedbackInfo_BYD( void );
uint8_t GetESPDriveModeFeedbackInfo_BYD( void );
uint8_t GetMCDriveModeFeedbackInfo_BYD( void );
uint8_t GetSwitchDriveModeFeedbackInfo_BYD( void );
uint8_t GetGearDriveModeFeedbackInfo_BYD( void );
uint8_t GetEleBrakeDriveModeFeedbackInfo_BYD( void );


void GetCarInfo_BYD(void);



void SetDriveModeFeedback_BYD( uint8_t DriveModeFeedback_val );
#endif