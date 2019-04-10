/*****************************************************************************
  Copyright (c) 2018, ���ǵ�����
  All rights reserved.

  �ļ�����: idriving_api.h
  ժ Ҫ:    API�ӿڵĶ���

  ����:
  �����б�:

  ��ǰ�汾: 1.0
  �� ��:
  �޸�����:
  �������: 2018��05��17��
*****************************************************************************/
#ifndef _IDRIVING_API_H_
#define _IDRIVING_API_H_

#ifdef __cplusplus
extern "C" {
#endif

/* ========================================================================== */
/*                             Include Files                                  */
/* ========================================================================== */
#include "std_types.h"
/* ========================================================================== */
/*                             Macros & Typedefs                              */
/* ========================================================================== */
#define VEHICLE_HADE

/* ����ֵ״̬ */
#define ERR_BYD_AUTO_OK								(0)		// �ɹ� 
#define ERR_BYD_AUTO_CAN_ENABLE						(-1)	// CANʹ�ܴ��� 
#define ERR_BYD_AUTO_MEM_MALLOC						(-2)	// �ڴ�������� 
#define ERR_BYD_AUTO_INVALID_PARAM					(-3)	// ����������� 
#define ERR_BYD_AUTO_DISENABLE						(-4)	// ʧ�� 
#define ERR_BYD_AUTO_WRITE							(-5)	// ��CAN����дʧ�� 
#define ERR_BYD_AUTO_READ							(-6)	// ��CAN����ʧ�� 
#define ERR_BYD_AUTO_REPEATE_CALL					(-7) 	// ����ظ����ã������ظ����ã�ȡ��ʹ�ܺ�����ٴε��ã� 

/* ��ʻģʽ */ 
#define BYD_AUTO_DRIVE_MODE_HOLDING 				(0)		// ���ֵ�ǰ��ʻģʽ
#define BYD_AUTO_DRIVE_MODE_OPEN    				(1)		// �������ܼ�ʻģʽ 
#define BYD_AUTO_DRIVE_MODE_CLOSE   				(2)		// �ر����ܼ�ʻģʽ

/* �ƹ� */ 
#define BYD_AUTO_LAMP_AUTO_INVALID					(0) 	// AUTO����Ч 
#define BYD_AUTO_LAMP_AUTO_ON       				(1)		// AUTO��
#define BYD_AUTO_LAMP_AUTO_OFF      				(2)		// ��AUTO��

#define BYD_AUTO_LAMP_ON							(1)		// С��/�����/Զ���/��ת��/��ת��/ɲ���ƴ� 
#define BYD_AUTO_LAMP_OFF							(0)		// С��/�����/Զ���/��ת��/��ת��/ɲ���ƹر� 

#define BYD_AUTO_LAMP_SMALL                         (0)     // С��
#define BYD_AUTO_LAMP_LOW                           (1)     // �����
#define BYD_AUTO_LAMP_HIGH                          (2)     // Զ���
#define BYD_AUTO_LAMP_FRONT_FOG                     (3)     // ǰ����
#define BYD_AUTO_LAMP_REAR_FOG                      (4)     // ������

/* ���� */
#define BYD_AUTO_HORN_ON							(1)
#define BYD_AUTO_HORN_OFF							(0)

/* EPB */ 
#define BYD_AUTO_EPB_SET_INVALID					(0)		// EPB��Ч
#define BYD_AUTO_EPB_SET_APPLYING					(1)		// EPB����
#define BYD_AUTO_EPB_SET_RELEASED					(2)		// EPB�ͷ�  


/* ��� */ 
#define BYD_AUTO_RAIN_WIPER_INVALID                 (0)     // ��Ч
#define BYD_AUTO_RAIN_WIPER_OFF						(1)		// OFF�� 
#define BYD_AUTO_RAIN_WIPER_SHORT_PRESS				(2)		// ��ζ̰� 
#define BYD_AUTO_RAIN_WIPER_LONG_PRESS				(3)		// ��γ��� 
#define BYD_AUTO_RAIN_WIPER_INTERVAL_1				(4)		// ��϶1�� 
#define BYD_AUTO_RAIN_WIPER_INTERVAL_2				(5)		// ��϶2�� 
#define BYD_AUTO_RAIN_WIPER_INTERVAL_3				(6)		// ��϶3�� 
#define BYD_AUTO_RAIN_WIPER_INTERVAL_4				(7)		// ��϶4�� 
#define BYD_AUTO_RAIN_WIPER_SLOW					(8)		// ���� 
#define BYD_AUTO_RAIN_WIPER_QUICK					(9)		// ��� 
#define BYD_AUTO_RAIN_WIPER_FAULT					(15)	// Ԥ�� 

/* ��λ */ 
#define BYD_AUTO_CAR_GEAR_INVALID					(0)		// ��Ч���޻��������� 
#define BYD_AUTO_CAR_GEAR_P							(1)		// P
#define BYD_AUTO_CAR_GEAR_R							(2)		// R
#define BYD_AUTO_CAR_GEAR_N							(3)		// N
#define BYD_AUTO_CAR_GEAR_D							(4)		// D
#define BYD_AUTO_CAR_GEAR_FAULT						(7)		// ����

/* ��ʻģʽ���� */ 
#define BYD_AUTO_DRIVE_MODE_AUTO_ABNORMAL_1			(0)		// ���ܼ�ʻ�쳣1��ȡ����ʾ�� 
#define BYD_AUTO_DRIVE_MODE_AUTO					(1)		// ���ܼ�ʻģʽ 
#define BYD_AUTO_DRIVE_MODE_NORMAL					(2)		// ������ʻģʽ 
#define BYD_AUTO_DRIVE_MODE_AUTO_ABNORMAL_2			(3)		// ���ܼ�ʻ�쳣2������ģʽ�� 

/* ���ܼ�ʻ������� */ 
#define BYD_AUTO_DRIVE_MODE_AUTO_STATE_CLOSE		(0)		// ������ƹر�״̬ 
#define BYD_AUTO_DRIVE_MODE_AUTO_STATE_OPEN			(3)		// ������ƿ���״̬ 

/* ��Ͽ������ܼ�ʻģʽ���� */ 
#define BYD_AUTO_DRIVE_MODE_SWITCH_FEEDBACK_INVALID	(0)		// ��Ч 
#define BYD_AUTO_DRIVE_MODE_SWITCH_FEEDBACK_NORMAL	(1)		// ������ʻģʽ 
#define BYD_AUTO_DRIVE_MODE_SWITCH_FEEDBACK_AUTO	(2)		// ���ܼ�ʻģʽ

/* ����״̬ */
#define BYD_AUTO_DOOR_OFF							(0)     // ���Źر�
#define BYD_AUTO_DOOR_ON							(1)     // ���Ŵ�
#define BYD_AUTO_TRUNK_OFF                          (0)     // ������ر�
#define BYD_AUTO_TRUNK_ON                           (1)     // �������

/* ������ʻ���� */ 
#define BYD_AUTO_DRIVE_DIRECTION_UNDEFINE			(0)		// δ���� 
#define BYD_AUTO_DRIVE_DIRECTION_FORWARD			(1)		// ��ǰ 
#define BYD_AUTO_DRIVE_DIRECTION_BACKWARD			(2)		// ��� 
#define BYD_AUTO_DRIVE_DIRECTION_STOP				(3)		// ֹͣ

/* ESP�������ܼ�ʻ���� */
#define BYD_AUTO_DRIVE_ESP_NOT_PERMISSION           (0)     // ����������
#define BYD_AUTO_DRIVE_ESP_PERMISSION_OK            (1)     // ��������


/* ESP��ǰ��ʻģʽ */ 
#define BYD_AUTO_DRIVE_MODE_ESP_FEEDBACK_CLOSE		      (0)     // ������ƹر� 
#define BYD_AUTO_DRIVE_MODE_ESP_FEEDBACK_OPEN		      (1)	  // ������ƿ��� 

/* ESP������Ϣ */
#define BYD_AUTO_ESP_ERROR_NO_FAILURE                     (0)     // �޹���
#define BYD_AUTO_ESP_ERROR_FAILURE                        (1)     // �й���

/* ESP����״̬��Ϣ */ 
// #define BYD_AUTO_DRIVE_MODE_ESP_NO_ACTIVE			  (0)	  // �������δ���� 
// #define BYD_AUTO_DRIVE_MODE_ESP_ACTIVE				  (1)	  // ��������Ѽ��� 

/* �ƶ�̤���״̬��Ϣ */
#define BYD_AUTO_BRAKE_PEDAL_SIGNAL_NO_PRESSED            (0)     // δ����
#define BYD_AUTO_BRAKE_PEDAL_SIGNAL_PRESSED               (1)     // ����
#define BYD_AUTO_BRAKE_PEDAL_SIGNAL_ERR                   (3)     // �źŴ���

/* ��λ�����ܼ�ʻģʽ���� */
#define BYD_AUTO_DRIVE_MODE_GEAR_FEEDBACK_NORMAL          (0)     // ������ʻģʽ
#define BYD_AUTO_DRIVE_MODE_GEAR_FEEDBACK_AUTO            (1)     // ���ܼ�ʻģʽ

/* ������ɲ��EPB��״̬ */ 
#define BYD_AUTO_EPB_GET_RELEASING					      (0)	  // �����ͷ� 
#define BYD_AUTO_EPB_GET_RELEASED					      (1)	  // �ͷ� 
#define BYD_AUTO_EPB_GET_APPLYING					      (2)	  // �������� 
#define BYD_AUTO_EPB_GET_APPLIED					      (3)	  // ���� 
#define BYD_AUTO_EPB_GET_BEAKE_FAULT				      (4)	  // ���� 

/* ������ɲ��EPB����ʻģʽ���� */
#define BYD_AUTO_DRIVE_MODE_ELE_BRAKE_FEEDBACK_INVALID    (0)     // ��Ч
#define BYD_AUTO_DRIVE_MODE_ELE_BRAKE_FEEDBACK_NORMAL     (1)     // ������ʻģʽ
#define BYD_AUTO_DRIVE_MODE_ELE_BRAKE_FEEDBACK_AUTO       (2)     // ���ܼ�ʻģʽ


/* EPS�������ܼ�ʻģʽ���� */
#define BYD_AUTO_DRIVE_MODE_EPS_CLOSE    			      (0)		// �ر�EPS���ܼ�ʻģʽ
#define BYD_AUTO_DRIVE_MODE_EPS_OPEN   				      (1)		// ����EPS���ܼ�ʻģʽ 

/* EPS��ǰ��ʻģʽ */ 
#define BYD_AUTO_DRIVE_MODE_EPS_FEEDBACK_INVALID	      (0)	  // ��Ч 
#define BYD_AUTO_DRIVE_MODE_EPS_FEEDBACK_NORMAL		      (1)	  // ������ʻģʽ 
#define BYD_AUTO_DRIVE_MODE_EPS_FEEDBACK_AUTO		      (2)	  // ���ܼ�ʻģʽ 

/* EPS�������ܼ�ʻ���� */ 
#define BYD_AUTO_EPS_PERMISSION_INVALID				      (0)	  // ��Ч 
#define BYD_AUTO_EPS_PERMISSION_OK					      (1)     // �����������ܼ�ʻ 
#define BYD_AUTO_EPS_NOT_PERMISSION					      (2)	  // �������������ܼ�ʻ


/* ��ý����ذ�����Ϣ */ 
#define BYD_AUTO_MEDIUM_KEY_INVALID					      (0)	  // ��Ч 
#define BYD_AUTO_MEDIUM_KEY_STOP_SWITCH				      (2)	  // ����ֹͣ���� 
#define BYD_AUTO_MEDIUM_KEY_DRIVE_AUTO_SWITCH		      (5)	  // ���ܼ�ʻ������ 

/* �����������ʻģʽ���� */ 
#define BYD_AUTO_DRIVE_MODE_MC_FEEDBACK_NORMAL		      (0)	  // ������ʻģʽ 
#define BYD_AUTO_DRIVE_MODE_MC_FEEDBACK_AUTO		      (1)	  // ���ܼ�ʻģʽ 

/* MCѹ��ֵ״̬ & MCѹ��ƫ��ֵ״̬ */ 
#define BYD_AUTO_DRIVE_MODE_MC_P_VALID				      (0)	  // ��Ч 
#define BYD_AUTO_DRIVE_MODE_MC_P_INVALID			      (1)     // ��Ч 



/* ���Ʊ���ID��ʶ */ 
#define BYD_AUTO_IDRIVING_CMD_TOTE                        (6)

#define BYD_AUTO_IDRIVING_CMD_0						(0x12F82340u)	//  ���ڣ�10ms
#define BYD_AUTO_IDRIVING_CMD_1						(0x12F83A30u)	//  ���ڣ�20ms
#define BYD_AUTO_IDRIVING_CMD_2						(0x12F832E0u)	//  ���ڣ�20ms
#define BYD_AUTO_IDRIVING_CMD_3						(0x12F832D0u)	//  ���ڣ�20ms
#define BYD_AUTO_IDRIVING_CMD_4						(0x12F832F0u)	//  ���ڣ�20ms
#define BYD_AUTO_IDRIVING_CMD_5						(0x12F83380u)	//  �¼����ڣ�100ms



/*=========================*/
/*  Add for HADE vehicle   */
/*=========================*/

/* ��ý����ʾ���� */
#define BYD_AUTO_MULTIMEDIA_DISPLAY_INVALID         (0)   // ��Ч
#define BYD_AUTO_MULTIMEDIA_DISPLAY_ON              (1)   // ����
#define BYD_AUTO_MULTIMEDIA_DISPLAY_OFF             (2)   // �ر�


/* ========================================================================== */
/*                          Function Declarations                             */
/* ========================================================================== */

/** #########################################################################
 *
 *  \���ܼ�ʻ��ʼ�����API.
 */
 


/** ----------------------------------------------------------------
 *  \���ܣ� ���ܼ�ʻAPI���ݳ�ʼ�� 
 *
 *  \������ pSetBuf	[����]		���ܼ�ʻ����ģ��ָ��
 *			pGetBuf	[����]		���ܼ�ʻ����ģ��ָ�� 
 *
 *  \����ֵ�� ��ʼ���ɹ��󷵻� ERR_BYD_AUTO_OK�����򷵻���Ӧ�Ĵ���״̬ 
 */
int32_t BydAutoApiDataInit();


/** #########################################################################
 *
 *  \���ܼ�ʻ Runtime API.
 */

/** ----------------------------------------------------------------
 *  \���ܣ� CAN���Ľ��պ��� 
 *
 *  \������ messageId	  [����]		  ����ID
 *  \������ messageLen    [����]          ���ĳ���
 *  \������ pMessageData  [����]          ��������
 *
 *  \����ֵ�� ���óɹ��󷵻� ERR_BYD_AUTO_OK�����򷵻���Ӧ�Ĵ���״̬ 
 */
int32_t BydAutoCANRuntimeRcv( uint32_t messageId,
                              uint32_t messageLen, 
                              uint8_t *pMessageData );


/** ----------------------------------------------------------------
 *  \���ܣ� CAN���ķ���ǰ���� 
 *
 *  \������ messageId	  [����]		  ����ID
 *  \������ pMessageLen   [���� & ���]   ���ĳ���
 *  \������ pMessageData  [���� & ���]   ��������
 *
 *  \����ֵ�� ���óɹ��󷵻� ERR_BYD_AUTO_OK�����򷵻���Ӧ�Ĵ���״̬ 
 */
int32_t BydAutoCANRuntimeXmt( uint32_t messageId,
                              uint32_t *pMessageLen, 
                              uint8_t  *pMessageData );


/** #########################################################################
 *
 *  \���ܼ�ʻģ���������API.
 */

/** ----------------------------------------------------------------
 *  \���ܣ� �������ģ�鷢�ͼ�ʻģʽ���� 
 *
 *  \������ nModeRequest	[����]		��ʻģʽ 
 *
 *  \����ֵ�� ���óɹ��󷵻� ERR_BYD_AUTO_OK�����򷵻���Ӧ�Ĵ���״̬ 
 */
int32_t SendAutoDriveModeRequest( uint8_t nModeRequest );
  

/** ----------------------------------------------------------------
 *  \���ܣ� ���ܼ�ʻ�������״̬����  
 *
 *  \������ nAutodDriveLateralState	[����]		���ܼ�ʻ�������״̬����
 *
 *  \����ֵ�� ���óɹ��󷵻� ERR_BYD_AUTO_OK�����򷵻���Ӧ�Ĵ���״̬ 
 */
int32_t SetAutoDriveLateralState( uint8_t nAutodDriveLateralState );

/** ----------------------------------------------------------------
 *  \���ܣ� ���õƹ�AUTO������ 
 *
 *  \������ nAutoSwitch		[����]		�ƹ�AUTO������
 *
 *  \����ֵ�� ���óɹ��󷵻� ERR_BYD_AUTO_OK�����򷵻���Ӧ�Ĵ���״̬ 
 */
int32_t SetLampAutoSwitch( uint8_t nAutoSwitch );


/** ----------------------------------------------------------------
 *  \���ܣ� ת������� 
 *
 *  \������ nLeft	[����]		��ת��ƿ���
 *			nRight	[����]		��ת��ƿ���
 *
 *  \����ֵ�� ���óɹ��󷵻� ERR_BYD_AUTO_OK�����򷵻���Ӧ�Ĵ���״̬ 
 */
int32_t SetLampTurnSwitch( uint8_t nLeft, uint8_t nRight );


/** ----------------------------------------------------------------
 *  \���ܣ� �ƶ������� 
 *
 *  \������ nBrakeSwitch	[����]		�ƶ��ƿ���
 *
 *  \����ֵ�� ���óɹ��󷵻� ERR_BYD_AUTO_OK�����򷵻���Ӧ�Ĵ���״̬ 
 */
int32_t SetLampBrakeSwitch( uint8_t nBrakeSwitch );


/** ----------------------------------------------------------------
 *  \���ܣ� Ŀ�귽���̽Ƕ����� 
 *
 *  \������ nAngular	[����]		Ŀ�귽���̽Ƕ�
 *
 *  \����ֵ�� ���óɹ��󷵻� ERR_BYD_AUTO_OK�����򷵻���Ӧ�Ĵ���״̬ 
 */
int32_t SetAngular( uint16_t nAngular );


/** ----------------------------------------------------------------
 *  \���ܣ� Ŀ��EPB״̬����
 *
 *  \������ nEpbState	[����]		Ŀ��EPB״̬	
 *
 *  \����ֵ�� ���óɹ��󷵻� ERR_BYD_AUTO_OK�����򷵻���Ӧ�Ĵ���״̬ 
 */
int32_t SetEpbState( uint8_t nEpbState );


/** ----------------------------------------------------------------
 *  \���ܣ� Ŀ����ε�λ���� 
 *
 *  \������ nRainWiper	[����]		Ŀ����ε�λ
 *
 *  \����ֵ�� ���óɹ��󷵻� ERR_BYD_AUTO_OK�����򷵻���Ӧ�Ĵ���״̬ 
 */
int32_t SetRainWiper( uint8_t nRainWiper );


/** ----------------------------------------------------------------
 *  \���ܣ� Ŀ�굵λ���� 
 *
 *  \������ nCarGear	[����]		Ŀ�굵λ
 *
 *  \����ֵ�� ���óɹ��󷵻� ERR_BYD_AUTO_OK�����򷵻���Ӧ�Ĵ���״̬ 
 */
int32_t SetCarGear( uint8_t nCarGear );


/** ----------------------------------------------------------------
 *  \���ܣ� ��ʻģʽ��������  
 *
 *  \������ nDriveModeFeedback	[����]		��ʻģʽ���� 
 *
 *  \����ֵ�� ���óɹ��󷵻� ERR_BYD_AUTO_OK�����򷵻���Ӧ�Ĵ���״̬ 
 */
int32_t SetDriveModeFeedback( uint8_t nDriveModeFeedback );


/** ----------------------------------------------------------------
 *  \���ܣ� Ŀ�귽���̽��ٶ�����  
 *
 *  \������ nAngularVelocity	[����]		Ŀ�귽���̽��ٶ�
 *
 *  \����ֵ�� ���óɹ��󷵻� ERR_BYD_AUTO_OK�����򷵻���Ӧ�Ĵ���״̬ 
 */
int32_t SetAngularVelocity( uint16_t nAngularVelocity );


/** ----------------------------------------------------------------
 *  \���ܣ� Ŀ����ٶ�����  
 *
 *  \������ nAcceleratedVelocity	[����]		Ŀ����ٶ�
 *
 *  \����ֵ�� ���óɹ��󷵻� ERR_BYD_AUTO_OK�����򷵻���Ӧ�Ĵ���״̬ 
 */
int32_t SetAcceleratedVelocity( uint8_t nAcceleratedVelocity );
  

/** ----------------------------------------------------------------
 *  \���ܣ� ���ܼ�ʻ�������״̬����  
 *
 *  \������ nDriveAutoState	[����]		���ܼ�ʻ�������״̬����
 *
 *  \����ֵ�� ���óɹ��󷵻� ERR_BYD_AUTO_OK�����򷵻���Ӧ�Ĵ���״̬ 
 */
int32_t SetDriveAutoState( uint8_t nDriveAutoState );


/** ----------------------------------------------------------------
 *  \���ܣ� ���ܼ�ʻAPI�������������Ʒ���ʱ��  
 *
 *  \������ nCount	[����]		�������� 
 *
 *  \����ֵ�� ���óɹ��󷵻� ERR_BYD_AUTO_OK�����򷵻���Ӧ�Ĵ���״̬ 
 */
int32_t SendAliveCount( uint8_t nCount );


/** ----------------------------------------------------------------
 *  \���ܣ� �����澯������  
 *
 *  \������ nSwitch	[����]		����״̬ 
 *
 *  \����ֵ�� ���óɹ��󷵻� ERR_BYD_AUTO_OK�����򷵻���Ӧ�Ĵ���״̬ 
 */
int32_t SetLampEmergencyWarningSwitch( uint8_t nSwitch );


/** ----------------------------------------------------------------
 *  \���ܣ� �����ƹ��ź�����  
 *
 *  \������ nArea [����]        �ƹ�����
 *          nSwitch	[����]		����״̬ 
 *
 *  \����ֵ�� ���óɹ��󷵻� ERR_BYD_AUTO_OK�����򷵻���Ӧ�Ĵ���״̬ 
 */
int32_t SetLampOutSideSwitch( uint8_t nArea, uint8_t nSwitch );


/** ----------------------------------------------------------------
 *  \���ܣ� ��������  
 *
 *  \������ nSwitch	[����]		����״̬ 
 *
 *  \����ֵ�� ���óɹ��󷵻� ERR_BYD_AUTO_OK�����򷵻���Ӧ�Ĵ���״̬ 
 */
int32_t SetHornSwitch( uint8_t nSwitch );


/** ----------------------------------------------------------------
 *  \���ܣ� ��ý����ʾ����  
 *
 *  \������ nSwitch	[����]		����״̬ 
 *
 *  \����ֵ�� ���óɹ��󷵻� ERR_BYD_AUTO_OK�����򷵻���Ӧ�Ĵ���״̬ 
 */
int32_t SetMultimediaDisplaySwitch( uint8_t nSwitch );



/** #########################################################################
 *  \���ܼ�ʻģ�������Ϣ���API.
 */

/** ----------------------------------------------------------------
 *  \���ܣ� ��ȡ������Ϣ 
 *
 *  \������ pnVelocity	[���]		����
 *			pnTimeStamp	[���]		ʱ�����
 *
 *  \����ֵ�� ��ȡ�ɹ��󷵻� ERR_BYD_AUTO_OK�����򷵻���Ӧ�Ĵ���״̬ 
 */
int32_t GetVelocityInfo( uint16_t *pnVelocity, uint64_t *pnTimeStamp );


/** ----------------------------------------------------------------
 *  \���ܣ� ��ȡ����ʵʱ������Ϣ
 *
 *  \������	 pnFL			[���]	��ǰ��ת��
 *			 pnFR			[���]	��ǰ��ת��
 *			 pnRL			[���]	���ǰ��ת��
 *			 pnRR			[���]	�Һ���ת��
 *			 pnTimeStamp	[���]	ʱ�����
 *
 *  \����ֵ�� ��ȡ�ɹ��󷵻� ERR_BYD_AUTO_OK�����򷵻���Ӧ�Ĵ���״̬ 
 */
int32_t GetWheelSpeedInfo( uint16_t *pnFL, uint16_t *pnFR, 
						   uint16_t *pnRL, uint16_t *pnRR, 
						   uint64_t *pnTimeStamp );


/** ----------------------------------------------------------------
 *  \���ܣ� ��ȡ�����ƹ���Ϣ
 *
 *  \������	 pnSmall		[���]	С�ƿ���״̬
 *			 pnNear			[���]	����ƿ���״̬
 *			 pnFar			[���]	Զ��ƿ���״̬
 *			 pnTimeStamp	[���]	ʱ�����
 *
 *  \����ֵ�� ��ȡ�ɹ��󷵻� ERR_BYD_AUTO_OK�����򷵻���Ӧ�Ĵ���״̬ 
 */
int32_t GetLampInfo( uint8_t *pnSmall, uint8_t *pnNear, 
					 uint8_t *pnFar, uint64_t *pnTimeStamp );


/** ----------------------------------------------------------------
 *  \���ܣ� ��ȡ����ת�����Ϣ
 *
 *  \������	 pnLeft			[���]	��ת��ƿ���״̬
 *			 pnRight		[���]	��ת��ƿ���״̬
 *			 pnTimeStamp	[���]	ʱ�����
 *
 *  \����ֵ�� ��ȡ�ɹ��󷵻� ERR_BYD_AUTO_OK�����򷵻���Ӧ�Ĵ���״̬ 
 */
int32_t GetLampTurnInfo( uint8_t *pnLeft, uint8_t *pnRight,
						 uint64_t *pnTimeStamp );


/** ----------------------------------------------------------------
 *  \���ܣ� ��ȡ����������Ϣ
 *
 *  \������	 pnFront		[���]	ǰ���ƿ���״̬
 *			 pnRear			[���]	�����ƿ���״̬
 *			 pnTimeStamp	[���]	ʱ�����
 *
 *  \����ֵ�� ��ȡ�ɹ��󷵻� ERR_BYD_AUTO_OK�����򷵻���Ӧ�Ĵ���״̬ 
 */
int32_t GetLampFogInfo( uint8_t *pnFront, uint8_t *pnRear, 
						uint64_t *pnTimeStamp );		


/** ----------------------------------------------------------------
 *  \���ܣ� ��ȡ��ε�λ��Ϣ
 *
 *  \������	 pnRainWiper	[���]	��ε�λ 
 *			 pnTimeStamp	[���]	ʱ�����
 *
 *  \����ֵ�� ��ȡ�ɹ��󷵻� ERR_BYD_AUTO_OK�����򷵻���Ӧ�Ĵ���״̬ 
 */				 
int32_t GetRainWiperInfo( uint8_t *pnRainWiper, uint64_t *pnTimeStamp );	


/** ----------------------------------------------------------------
 *  \���ܣ� ��ȡ��Ͽ������ܼ�ʻģʽ������Ϣ
 *
 *  \������	 pnSwitchDriveModeFeedback	[���]	��Ͽ������ܼ�ʻģʽ���� 
 *			 pnTimeStamp				[���]	ʱ�����
 *
 *  \����ֵ�� ��ȡ�ɹ��󷵻� ERR_BYD_AUTO_OK�����򷵻���Ӧ�Ĵ���״̬ 
 */		
int32_t GetSwitchDriveModeFeedbackInfo( uint8_t *pnSwitchDriveModeFeedback, 
										uint64_t *pnTimeStamp );				 


/** ----------------------------------------------------------------
 *  \���ܣ� ��ȡ�ƹ�AUTO����Ϣ
 *
 *  \������	 pnLampAuto		[���]	�ƹ�AUTO��״̬ 
 *			 pnTimeStamp	[���]	ʱ�����
 *
 *  \����ֵ�� ��ȡ�ɹ��󷵻� ERR_BYD_AUTO_OK�����򷵻���Ӧ�Ĵ���״̬ 
 */	
int32_t GetLampAutoInfo( uint8_t *pnLampAuto, uint64_t *pnTimeStamp );
 

/** ----------------------------------------------------------------
 *  \���ܣ� ��ȡ����״̬��Ϣ 
 *
 *  \������	 pnFL			[���]	��ǰ��״̬
 *			 pnFR			[���]	��ǰ��״̬
 * 			 pnRL			[���]	�����״̬ 
 * 			 pnRR			[���]	�Һ���״̬ 
 * 			 pnTrunk		[���]	������״̬
 *			 pnTimeStamp	[���]	ʱ�����
 *
 *  \����ֵ�� ��ȡ�ɹ��󷵻� ERR_BYD_AUTO_OK�����򷵻���Ӧ�Ĵ���״̬ 
 */	
int32_t GetDoorInfo( uint8_t *pnFL, uint8_t *pnFR, 
					 uint8_t *pnRL, uint8_t *pnRR, 
					 uint8_t *pnTrunk, uint64_t *pnTimeStamp );


/** ----------------------------------------------------------------
 *  \���ܣ� ��ȡ������ʻ������Ϣ
 *
 *  \������	 pnFL			[���]	��ǰ����ʻ����
 *			 pnFR			[���]	��ǰ����ʻ����
 * 			 pnRL			[���]	�������ʻ���� 
 * 			 pnRR			[���]	�Һ�����ʻ����
 *			 pnTimeStamp	[���]	ʱ�����
 *
 *  \����ֵ�� ��ȡ�ɹ��󷵻� ERR_BYD_AUTO_OK�����򷵻���Ӧ�Ĵ���״̬ 
 */
int32_t GetWheelDriveDirectionInfo( uint8_t *pnFL, uint8_t *pnFR, 
									uint8_t *pnRL, uint8_t *pnRR, 
									uint64_t *pnTimeStamp );


/** ----------------------------------------------------------------
 *  \���ܣ� ��ȡESP�������ܼ�ʻ������Ϣ
 *
 *  \������	 pnAutoDrivePermission		[���]	ESP��������
 *			 pnTimeStamp	            [���]	ʱ�����
 *
 *  \����ֵ�� ��ȡ�ɹ��󷵻� ERR_BYD_AUTO_OK�����򷵻���Ӧ�Ĵ���״̬ 
 */								
int32_t GetESPAutoDrivePermissionInfo( uint8_t *pnAutoDrivePermission, 
                                       uint64_t *pnTimeStamp );


/** ----------------------------------------------------------------
 *  \���ܣ� ��ȡESP��ǰ��ʻģʽ��Ϣ
 *
 *  \������	 pnESPDriveModeFeedback		[���]	ESP��ǰ��ʻģʽ
 *			 pnTimeStamp				[���]	ʱ�����
 *
 *  \����ֵ�� ��ȡ�ɹ��󷵻� ERR_BYD_AUTO_OK�����򷵻���Ӧ�Ĵ���״̬ 
 */
int32_t GetESPDriveModeFeedbackInfo( uint8_t *pnESPDriveModeFeedback,
									 uint64_t *pnTimeStamp );	


/** ----------------------------------------------------------------
 *  \���ܣ� ��ȡESP����������Ϣ 
 *
 *  \������	 pnAlive		[���]	ESP������������ 
 *			 pnTimeStamp	[���]	ʱ�����
 *
 *  \����ֵ�� ��ȡ�ɹ��󷵻� ERR_BYD_AUTO_OK�����򷵻���Ӧ�Ĵ���״̬ 
 */
int32_t GetESPAliveInfo( uint8_t *pnAlive, uint64_t *pnTimeStamp );


/** ----------------------------------------------------------------
 *  \���ܣ� ��ȡESPģ�������Ϣ 
 *
 *  \������	 pnTractionControl		[���]	ǣ�������ƹ��� 
 *			 pnBodyDynamic	        [���]	������̬����
 *           pnTimeStamp            [���]  ʱ�����
 *
 *  \����ֵ�� ��ȡ�ɹ��󷵻� ERR_BYD_AUTO_OK�����򷵻���Ӧ�Ĵ���״̬ 
 */
int32_t GetESPErrInfo( uint8_t *pnTractionControl, uint8_t *pnBodyDynamic,
                       uint64_t *pnTimeStamp );


/** ----------------------------------------------------------------
 *  \���ܣ� ��ȡ��ڽ��ٶ���Ϣ
 *
 *  \������	 pnYawRate			[���]	��ڽ��ٶ� 
 *			 pnYawRateOffset	[���]	��ڽ��ٶ�ƫ���� 
 *			 pnTimeStamp		[���]	ʱ�����
 *
 *  \����ֵ�� ��ȡ�ɹ��󷵻� ERR_BYD_AUTO_OK�����򷵻���Ӧ�Ĵ���״̬ 
 */
int32_t GetYawRateInfo( uint16_t *pnYawRate, uint16_t *pnYawRateOffset, 
						uint64_t *pnTimeStamp );


/** ----------------------------------------------------------------
 *  \���ܣ� ��ȡ����������ٶ�
 *
 *  \������	 pnAX				[���]	����������ٶ� 
 *			 pnAXOffset			[���]	����������ٶ�ƫ���� 
 *			 pnTimeStamp		[���]	ʱ�����
 *
 *  \����ֵ�� ��ȡ�ɹ��󷵻� ERR_BYD_AUTO_OK�����򷵻���Ӧ�Ĵ���״̬ 
 */
int32_t GetAccelerationXInfo( uint16_t *pnAX, uint16_t *pnAXOffset, 
							  uint64_t *pnTimeStamp );


/** ----------------------------------------------------------------
 *  \���ܣ� ��ȡ����������ٶ�
 *
 *  \������	 pnAY				[���]	����������ٶ� 
 *			 pnAYOffset			[���]	����������ٶ�ƫ���� 
 *			 pnTimeStamp		[���]	ʱ�����
 *
 *  \����ֵ�� ��ȡ�ɹ��󷵻� ERR_BYD_AUTO_OK�����򷵻���Ӧ�Ĵ���״̬ 
 */
int32_t GetAccelerationYInfo( uint16_t *pnAY, uint16_t *pnAYOffset, 
							  uint64_t *pnTimeStamp );


/** ----------------------------------------------------------------
 *  \���ܣ� ��ȡ����������Ϣ
 *
 *  \������	 pnFL				[���]	��ǰ�����������
 *			 pnFR				[���]	��ǰ�����������
 * 			 pnRL				[���]	�������������� 
 * 			 pnRR				[���]	�Һ������������ 
 *			 pnTimeStamp		[���]	ʱ�����
 *
 *  \����ֵ�� ��ȡ�ɹ��󷵻� ERR_BYD_AUTO_OK�����򷵻���Ӧ�Ĵ���״̬ 
 */
int32_t GetWheelPulseCounterInfo( uint16_t *pnFL, uint16_t *pnFR,
  								  uint16_t *pnRL, uint16_t *pnRR,  
								  uint64_t *pnTimeStamp );


/** ----------------------------------------------------------------
 *  \���ܣ� ��ȡ���������Ϣ
 *
 *  \������	 pnAccelerateDeepness	[���]	�������  
 *			 pnTimeStamp			[���]	ʱ�����
 *
 *  \����ֵ�� ��ȡ�ɹ��󷵻� ERR_BYD_AUTO_OK�����򷵻���Ӧ�Ĵ���״̬ 
 */
int32_t GetAccelerateDeepnessInfo( uint8_t *pnAccelerateDeepness,  
								   uint64_t *pnTimeStamp );

/** ----------------------------------------------------------------
 *  \���ܣ� ��ȡ�������������Ϣ
 *
 *  \������	 pnVirtualAccelerateDeepness	[���]	�����������  
 *			 pnTimeStamp			        [���]	ʱ�����
 *
 *  \����ֵ�� ��ȡ�ɹ��󷵻� ERR_BYD_AUTO_OK�����򷵻���Ӧ�Ĵ���״̬ 
 */
int32_t GetVirtualAccelerateDeepnessInfo( uint8_t *pnVirtualAccelerateDeepness,  
								          uint64_t *pnTimeStamp );

/** ----------------------------------------------------------------
 *  \���ܣ� ��ȡ�ƶ������Ϣ
 *
 *  \������	 pnBrakeDeepness	[���]	�ƶ����  
 *			 pnTimeStamp		[���]	ʱ�����
 *
 *  \����ֵ�� ��ȡ�ɹ��󷵻� ERR_BYD_AUTO_OK�����򷵻���Ӧ�Ĵ���״̬ 
 */
int32_t GetBrakeDeepnessInfo( uint8_t *pnBrakeDeepness,  
							  uint64_t *pnTimeStamp );	


/** ----------------------------------------------------------------
 *  \���ܣ� ��ȡ�ƶ�̤��״̬��Ϣ
 *
 *  \������	 pnBrakePedalSignal 	[���]	�ƶ�̤��״̬��Ϣ  
 *			 pnTimeStamp		    [���]	ʱ�����
 *
 *  \����ֵ�� ��ȡ�ɹ��󷵻� ERR_BYD_AUTO_OK�����򷵻���Ӧ�Ĵ���״̬ 
 */
int32_t GetBrakePedalSignalInfo( uint8_t *pnBrakePedalSignal,  
								 uint64_t *pnTimeStamp );


/** ----------------------------------------------------------------
 *  \���ܣ� ��ȡ��λ��Ϣ
 *
 *  \������	 pnCarGear			[���]	��λ��Ϣ  
 *			 pnTimeStamp		[���]	ʱ�����
 *
 *  \����ֵ�� ��ȡ�ɹ��󷵻� ERR_BYD_AUTO_OK�����򷵻���Ӧ�Ĵ���״̬ 
 */							   
int32_t GetCarGearInfo( uint8_t *pnCarGear,  
						uint64_t *pnTimeStamp );


/** ----------------------------------------------------------------
 *  \���ܣ� ��ȡ��λ��ʻģʽ����
 *
 *  \������	 pnGearDriveModeFeedback	 [���]	��λ��ʻģʽ����  
 *			 pnTimeStamp		         [���]	ʱ�����
 *
 *  \����ֵ�� ��ȡ�ɹ��󷵻� ERR_BYD_AUTO_OK�����򷵻���Ӧ�Ĵ���״̬ 
 */	
int32_t GetGearDriveModeFeedbackInfo( uint8_t* pnGearDriveModeFeedback, 
	                                  uint64_t* pnTimeStamp );


/** ----------------------------------------------------------------
 *  \���ܣ� ��ȡ������ɲ״̬��Ϣ
 *
 *  \������	 pnEleBrake			[���]	������ɲ״̬��Ϣ  
 *			 pnTimeStamp		[���]	ʱ�����
 *
 *  \����ֵ�� ��ȡ�ɹ��󷵻� ERR_BYD_AUTO_OK�����򷵻���Ӧ�Ĵ���״̬ 
 */	
int32_t GetEleBrakeInfo( uint8_t *pnEleBrake,  
						 uint64_t *pnTimeStamp );


/** ----------------------------------------------------------------
 *  \���ܣ� ��ȡ������ɲ��ʻģʽ������Ϣ
 *
 *  \������	 pnEleBrakeDriveModeFeedback   [���]	��ʻģʽ����  
 *			 pnTimeStamp		           [���]	ʱ�����
 *
 *  \����ֵ�� ��ȡ�ɹ��󷵻� ERR_BYD_AUTO_OK�����򷵻���Ӧ�Ĵ���״̬ 
 */	
int32_t GetEleBrakeDriveModeFeedbackInfo( uint8_t* pnEleBrakeDriveModeFeedback, 
	                                      uint64_t* pnTimeStamp );


/** ----------------------------------------------------------------
 *  \���ܣ� ��ȡ�����̽Ƕ���Ϣ
 *
 *  \������	 pnAngular			[���]	�����̽Ƕ���Ϣ  
 *			 pnTimeStamp		[���]	ʱ�����
 *
 *  \����ֵ�� ��ȡ�ɹ��󷵻� ERR_BYD_AUTO_OK�����򷵻���Ӧ�Ĵ���״̬ 
 */	
int32_t GetAngularInfo( uint16_t *pnAngular,  
  						uint64_t *pnTimeStamp );


/** ----------------------------------------------------------------
 *  \���ܣ� ��ȡEPS��ǰ��ʻģʽ��Ϣ 
 *
 *  \������	 pnEPSDriveModeFeedback		[���]	EPS��ǰ��ʻģʽ   
 *			 pnTimeStamp				[���]	ʱ�����
 *
 *  \����ֵ�� ��ȡ�ɹ��󷵻� ERR_BYD_AUTO_OK�����򷵻���Ӧ�Ĵ���״̬ 
 */	
int32_t GetEPSDriveModeFeedbackInfo( uint8_t *pnEPSDriveModeFeedback,  
  									 uint64_t *pnTimeStamp );
 

/** ----------------------------------------------------------------
 *  \���ܣ� ��ȡEPS�������ܼ�ʻ������Ϣ 
 *
 *  \������	 pnDriveAutoPermission		[���]	EPS�������ܼ�ʻ������־    
 *			 pnTimeStamp				[���]	ʱ�����
 *
 *  \����ֵ�� ��ȡ�ɹ��󷵻� ERR_BYD_AUTO_OK�����򷵻���Ӧ�Ĵ���״̬ 
 */	
int32_t GetDriveAutoPermissionInfo( uint8_t *pnDriveAutoPermission,  
  									uint64_t *pnTimeStamp );


/** ----------------------------------------------------------------
 *  \���ܣ� ��ȡ��������ת�ٶ���Ϣ����� ��2�㣩
 *
 *  \������	 pnRotationSpeed		[���]	��������ת�ٶ�   
 *			 pnTimeStamp			[���]	ʱ�����
 *
 *  \����ֵ�� ��ȡ�ɹ��󷵻� ERR_BYD_AUTO_OK�����򷵻���Ӧ�Ĵ���״̬ 
 */	
int32_t GetRotationSpeedInfo( uint8_t *pnRotationSpeed,  
  							  uint64_t *pnTimeStamp );


/** ----------------------------------------------------------------
 *  \���ܣ� ��ȡ��ý�崥��������Ϣ����δʵ�֣� 
 *
 *  \������	 pnX				[���]	����������  
 *			 pnY				[���]	����������    
 *			 pnTimeStamp		[���]	ʱ����� 
 *
 *  \����ֵ�� ��ȡ�ɹ��󷵻� ERR_BYD_AUTO_OK�����򷵻���Ӧ�Ĵ���״̬ 
 */
int32_t GetMediumCoordinateInfo( uint16_t *pnX, uint16_t *pnY, 
  								 uint64_t *pnTimeStamp );


/** ----------------------------------------------------------------
 *  \���ܣ� ��ȡ��ý��ֱ�����Ϣ����δʵ�֣� 
 *
 *  \������	 pnW				[���]	��ý��ֱ��ʿ�  
 *			 pnH				[���]	��ý��ֱ��ʸ�    
 *			 pnTimeStamp		[���]	ʱ����� 
 *
 *  \����ֵ�� ��ȡ�ɹ��󷵻� ERR_BYD_AUTO_OK�����򷵻���Ӧ�Ĵ���״̬ 
 */
int32_t GetMediumResolutionInfo( uint16_t *pnW, uint16_t *pnH, 
  								 uint64_t *pnTimeStamp );


/** ----------------------------------------------------------------
 *  \���ܣ� ��ȡ��ý�嶯����Ϣ����δʵ�֣� 
 *
 *  \������	 pnMediumBehavior	[���]	��ý�嶯������      
 *			 pnTimeStamp		[���]	ʱ����� 
 *
 *  \����ֵ�� ��ȡ�ɹ��󷵻� ERR_BYD_AUTO_OK�����򷵻���Ӧ�Ĵ���״̬ 
 */
int32_t GetMediumBehaviorInfo( uint8_t *pnMediumBehavior, 
    						   uint64_t *pnTimeStamp );


/** ----------------------------------------------------------------
 *  \���ܣ� ��ȡ��ý���ƶ���Ϣ����δʵ�֣� 
 *
 *  \������	 pnX				[���]	������Ϊ����   
 *			 pnY    			[���]	������Ϊ����  
 *			 pnTimeStamp		[���]	ʱ����� 
 *
 *  \����ֵ�� ��ȡ�ɹ��󷵻� ERR_BYD_AUTO_OK�����򷵻���Ӧ�Ĵ���״̬ 
 */
int32_t GetMediumMovementInfo( uint16_t *pnX, uint16_t *pnY, 
    						   uint64_t *pnTimeStamp );


/** ----------------------------------------------------------------
 *  \���ܣ� ��ȡ�ϰ��������Ϣ����δʵ�֣�
 *
 *  \������	 pnFL				[���]	ǰ��Ǵ������ϰ������  
 *			 pnFR				[���]	ǰ�ҽǴ������ϰ������
 *			 pnRL				[���]	����Ǵ������ϰ������
 *			 pnRR				[���]	���ҽǴ������ϰ������
 *			 pnL				[���]	�󵹳��������ϰ������
 *			 pnR				[���]	�ҵ����������ϰ������
 *			 pnTimeStamp		[���]	ʱ����� 
 *
 *  \����ֵ�� ��ȡ�ɹ��󷵻� ERR_BYD_AUTO_OK�����򷵻���Ӧ�Ĵ���״̬ 
 */
int32_t GetPASDistanceInfo( uint8_t *pnFL, uint8_t *pnFR, 
  							uint8_t *pnRL, uint8_t *pnRR, 
  							uint8_t *pnL, uint8_t *pnR, 
    						uint64_t *pnTimeStamp );


/** ----------------------------------------------------------------
 *  \���ܣ� ��ȡפ������ϵͳ��Դ����״̬��Ϣ����δʵ�֣�
 *
 *  \������	 pnPower			[���]	��Դ����״̬ 
 *			 pnTimeStamp		[���]	ʱ����� 
 *
 *  \����ֵ�� ��ȡ�ɹ��󷵻� ERR_BYD_AUTO_OK�����򷵻���Ӧ�Ĵ���״̬ 
 */
int32_t GetPASPowerInfo( uint8_t *pnPower, 
    					 uint64_t *pnTimeStamp );


/** ----------------------------------------------------------------
 *  \���ܣ� ��ȡ���Ť����Ϣ
 *
 *  \������	 pnMotorTorque		[���]	������Ť�� 
 *			 pnTimeStamp		[���]	ʱ����� 
 *
 *  \����ֵ�� ��ȡ�ɹ��󷵻� ERR_BYD_AUTO_OK�����򷵻���Ӧ�Ĵ���״̬ 
 */			
int32_t GetMotorTorqueInfo( uint16_t *pnMotorTorque, 
    						uint64_t *pnTimeStamp );


/** ----------------------------------------------------------------
 *  \���ܣ� ��ȡ�����������ʻģʽ������Ϣ
 *
 *  \������	 pnMCDriveModeFeedback		[���]	�����������ʻģʽ���� 
 *			 pnTimeStamp				[���]	ʱ����� 
 *
 *  \����ֵ�� ��ȡ�ɹ��󷵻� ERR_BYD_AUTO_OK�����򷵻���Ӧ�Ĵ���״̬ 
 */	
int32_t GetMCDriveModeFeedbackInfo( uint8_t *pnMCDriveModeFeedback, 
    								uint64_t *pnTimeStamp );


/** ----------------------------------------------------------------
 *  \���ܣ� ��ȡ����ѹ��ֵ��Ϣ����δʵ�֣�
 *
 *  \������	 pnPressure					[���]	MCѹ��ֵ
 *			 pnPressureState			[���]	MCѹ��ֵ״̬ 
 *			 pnPressureOffset			[���]	MCѹ��ƫ��ֵ
 *			 pnPressureOffsetState		[���]	MCѹ��ƫ��ֵ״̬
 *			 pnTimeStamp				[���]	ʱ����� 
 *
 *  \����ֵ�� ��ȡ�ɹ��󷵻� ERR_BYD_AUTO_OK�����򷵻���Ӧ�Ĵ���״̬ 
 */	
int32_t GetMCPressureInfo( uint16_t *pnPressure, uint8_t *pnPressureState, 
  						   uint16_t *pnPressureOffset, uint8_t *pnPressureOffsetState,
						   uint64_t *pnTimeStamp );


/** ----------------------------------------------------------------
 *  \���ܣ� ��ȡ���ܼ�ʻ������Ϣ
 *
 *  \������	 pnAutoDriveKey		[���]	����״̬��Ϣ 
 *			 pnTimeStamp		[���]	ʱ����� 
 *
 *  \����ֵ�� ��ȡ�ɹ��󷵻� ERR_BYD_AUTO_OK�����򷵻���Ӧ�Ĵ���״̬ 
 */	
int32_t GetAutoDriveKeyInfo( uint8_t *pnAutoDriveKey, 
	                         uint64_t *pnTimeStamp );


/** ----------------------------------------------------------------
 *  \���ܣ� ��ȡ���ܼ�ʻ�����˳�������Ϣ
 *
 *  \������	 pnEmergencyExitKey		[���]	�����˳���ť��Ϣ 
 *			 pnTimeStamp		    [���]	ʱ����� 
 *
 *  \����ֵ�� ��ȡ�ɹ��󷵻� ERR_BYD_AUTO_OK�����򷵻���Ӧ�Ĵ���״̬ 
 */	
int32_t GetEmergencyExitKeyInfo( uint8_t *pnEmergencyExitKey, 
                                 uint64_t *pnTimeStamp );


/** ----------------------------------------------------------------
 *  \���ܣ� ��ȡ����VIN��Ϣ
 *
 *  \������	 pnVinInfo		    [���]	������VIN��Ϣ 
 *			 pnTimeStamp		    [���]	ʱ����� 
 *
 *  \����ֵ�� ��ȡ�ɹ��󷵻� ERR_BYD_AUTO_OK�����򷵻���Ӧ�Ĵ���״̬ 
 */	
int32_t GetVinInfo( VinInfo *pnVinInfo, 
                    uint64_t *pnTimeStamp );
#ifdef __cplusplus
} 
#endif /* __cplusplus */
  
#endif
