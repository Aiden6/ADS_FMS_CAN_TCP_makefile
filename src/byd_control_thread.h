#ifndef _BYD_CONTROL_THREAD_H_
#define _BYD_CONTROL_THREAD_H_
#include <stdio.h>
#include <signal.h>
#include <string.h>
#include <stdlib.h>
#include <pthread.h>
#include <unistd.h>
#include <semaphore.h>
#include <sys/time.h>


#include <math.h>

#include "./api_test.h"
#include "./controlcan.h"
#include "./idriving_api.h"
#include "./std_types.h"
#include "./control.h"


#include <ros/ros.h>
#include <std_msgs/String.h>
#include <sstream>

//#include "modules/drivers/gnss/proto/gnss_best_pose.pb.h"
//#include "modules/drivers/gnss/proto/ins.pb.h"
//#include "modules/localization/proto/pose.pb.h"
//#include "modules/drivers/gnss/proto/gnss_status.pb.h"


/** Global variables **/  
extern int32_t  gTestFlag;
extern uint8_t  driving_mode;
extern int8_t   gCharInput[STRING_LEN];
extern sem_t    sem_event;
extern sem_t    sem_event_SetAcceleratedVelocity;
extern sem_t    sem_event_SetAngular;
extern sem_t    sem_event_SetCarGear;
extern sem_t    sem_event_SetEpbState;
extern sem_t    sem_event_SetDrivingMode;


#define RX_WAIT_TIME    100
#define RX_BUFF_SIZE    1000
#define TIME_PERIOD     10*1000*1000

#define tcp_TIME_PERIOD     100*1000*1000

extern CAN_DEV_INFO device;

extern double nAngular;
extern double AccVal;
extern uint8_t CarGear_val;
extern uint8_t CarEpb_val;
extern uint8_t DrivingMode_val;

//ros
void* ros_Thread_Fun( void *data );
void subCallback(const std_msgs::String::ConstPtr& msg);

void* can_rcvThread( void *data );
void  can_xmt(union sigval v);
void* cm_rcvThread( void *data);
void* acu_ctrlThread( void *data );

//set
void* acu_SetAcceleratedVelocity_Thread( void *data );
void* acu_SetAngular_Thread( void *data );
void* acu_CarGear_Thread( void *data );
void* acu_SetEpbState_Thread( void *data );
void* acu_SetDrivingMode_Thread( void *data );

void* acu_JudgeAutoDriveExit_thread( void *data );


//get
void* acu_GetAutoDriveKey_Thread( void *data );
void* acu_GetCarInfo_Thread( void *data );

void Timer10ms( timer_t *timer );

int32_t BydAuto_Can_Connect( void );

#endif
