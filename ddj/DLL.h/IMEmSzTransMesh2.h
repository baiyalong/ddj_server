#pragma once

#include "errno.h"
#include <iostream>
#include <fstream>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <math.h>
using namespace std;

//��ŷ���-��̬����ֵ����->��������

class CIMEmSzTransMesh
{

public:

	//--------------------------------------------------------------------------------------------------
		void IMEmSzTransMeshMain(
				char *OutputPath,double D1,double DI1,int Q1,int SSlotType,
				double HS0,double HS1,double HS2,double BS0,double BS1,double BS2,
				int swlay,double USPW,double DETAG1,double DO2,
				int CalcuMult,double dSLiner,double dSWedgeDw,double dSLineBot,
				int FlagSToothRi,int SToothRiRow,double *SToothRi,
				int ElemNumPerSArc,int SmrtSizeStator,int FlagSToothAddSlot,
				double SToothAddSlotWidth,double SToothAddSlotHigth,
				int FlagEMType0,double DI2,int Q2,
				int RSlotType,double HR0,double HR1,double HR2,
				double BR0,double BR1,double BR2,double BR3,double BR4,
				int rwlay,double URPW,double DETAG2,
				int FlagAngleRSlot,int AngleRSlotRow,double *AngleRSlot,
				int SmrtSizeRotor ,cbGetString cb);
	//--------------------------------------------------------------------------------------------------

	//------------------------------------------------------------------------------------------------
	//	char	*OutputPath	:	//���·������D:\\
	//	double	D1			;	//�������Ĵ�·�����Ч�⾶(mm)
	//	double	DI1			;	//���������ھ�(mm)
	//	int		Q1			;	//���Ӳ���
	//	int		SSlotType	;	//���Ӳ��ʹ���
	//							//	01) ȫ���ھ��β�ʱΪ1��
	//							//	02) �뿪�ھ��β�ʱΪ2��
	//							//	03) �뿪��Բ�ײ�ʱΪ3��
	//	double	BS0			;	//���ӳ�Ƭ�ۿڿ�(mm)
	//	double	BS1			;	//���ӳ�Ƭ�۹���(mm)
	//	double	BS2			;	//���ӳ�Ƭ�۵׿�(mm)
	//	double	HS0			;	//���ӳ�Ƭ�ۿڸ�(mm)
	//	double	HS1			;	//���ӳ�Ƭ�۹���(mm)
	//	double	HS2			;	//���ӳ�Ƭ��  ��(mm)
	//	int		swlay 		;	//�����������
	//							//	01) ��������ʱΪ1��
	//							//	02) ˫������ʱΪ2.
	//	double	USPW 		;	//���Ӳ�Ш�ȴŵ�(�����Ӳ�Ш�Ĵŵ�������մŵ��ʵı�ֵ)
	//	double	DETAG1 		;	//���Ӳ�Ш��mm��
	//	double	DO2 		;	//ת�������⾶(mm)
	//	int		CalcuMult	;	//��ԲΪ����ı���
	//	double	dSLiner		;	//����Եؾ�Ե˫�ߺ�� (mm)
	//  						//	01) ����ɢǶ����ʱ����۾�Ե���Եؾ�Ե����˫�ߺ��,
	//  						//	02) ���ӳ�������ʱ����۾�Ե���Եؾ�Ե����˫�ߺ��,
	//  						//	03) ����ɢǶ����ʱ���Ӳ۾�Ե���Եؾ�Ե����Χ��Ϊ�����˫����Ȧ��,
	//  						//	04) ���ӳ�������ʱ���Ӳ۾�Ե���Եؾ�Ե����Χ��Ϊ����ĵ�����Ȧ��.
	//	double	dSWedgeDw	;	//Ш�µ������ (mm)
	//	double	dSLineBot	;	//�۵׵������ (mm)
	//	int		FlagSToothRi;	//���ӳ��ڰ뾶�ı�־��
	//							//	01)	 0ʱΪ�������ھ�ȷ����
	//							//	02)	 1ʱΪ�������ھ�ȷ��
	//	int		SToothRiRow	;	//���ӳ��ڰ뾶����Ԫ������
	//	double *SToothRi;       //���ӳ��ڰ뾶���� (mm)
	//	int		ElemNumPerSArc;	//������϶�߽���һ���ݾ��Ӧ�ĵ�Ԫ����
	//	int		SmrtSizeStator;	//���Ӳ����ʷֵȼ�
	//	int	  FlagSToothAddSlot;//���ӳ��ϼӸ���С�۱�־��
	//							//	01)	 0ʱΪ���ӣ�
	//							//	02)	 1ʱΪҪ�ӣ�
	//	double SToothAddSlotWidth;//���ӳ��ϼӸ���С�۵Ĳۿڿ�� (mm)
	//	double SToothAddSlotHigth;//���ӳ��ϼӸ���С�۵Ĳ���߶� (mm)
	//	int		FlagEMType0	:	//������ͱ�־��
	//							//	01)	1ʱΪ������ת�ӣ�
	//							//	02)	2ʱΪ������ת�ӣ�
	//	double	DI2 		;	//	ת�������ھ�(mm)
	//	int		Q2 			;	//	ת�Ӳ���
	//	int		RSlotType 	; 	//	ת�Ӳ��ʹ���
	//							//	01) A�Ͳ�ʱΪ1�����Ͳۣ�
	//							//	02) B�Ͳ�ʱΪ2�����Ͳۣ�
	//							//	03) C�Ͳ�ʱΪ3��͹�Ͳۣ�
	//							//	04) D�Ͳ�ʱΪ4����͹�Ͳۣ�
	//							//	05) E�Ͳ�ʱΪ5��б�����Ͳۣ�
	//							//	06) F�Ͳ�ʱΪ6��
	//							//	07) G�Ͳ�ʱΪ7��
	//							//	08) H�Ͳ�ʱΪ8��
	//	double	BR0 		;	//	ת�ӳ�Ƭ�ۿڿ�(mm)
	//	double	BR1 		;	//	ת�ӳ�Ƭ�ۿ�1 (mm)
	//	double	BR2 		;	//	ת�ӳ�Ƭ�ۿ�2 (mm)
	//	double	BR3 		;	//	ת�ӳ�Ƭ�ۿ�3 (mm)
	//	double	BR4 		;	//	ת�ӳ�Ƭ�ۿ�4 (mm)
	//	double	HR0 		;	//	ת�ӳ�Ƭ�ۿڸ�(mm)
	//	double	HR1 		;	//	ת�ӳ�Ƭ�۸�1 (mm)
	//	double	HR2 		;	//	ת�ӳ�Ƭ�۸�2 (mm)
	//	int		rwlay 		;	// 	�������
	//							//	01) ��������ʱΪ1��
	//							//	02) ˫������ʱΪ2.
	//	double	DETAG2 		;	//	ת�Ӳ�Ш��(mm)
	//	double	URPW 		;	//	ת�Ӳ�Ш�ȴŵ�
	//							//	01) ת�Ӳ�Ш�ŵ�������մŵ��ʵı�ֵ��
	//	int		FlagAngleRSlot; //ת�Ӳۿ���Բ�ֲܷ��ı�־��
	//							//	01)	 0ʱΪҪ���֣�
	//							//	02)	 1ʱΪ�Ǿ��֣�
	//	int		AngleRSlotRow;	//ת�Ӳۿ������߻�е�Ƕ�����Ԫ������
	//	double *AngleRSlot	 ;  //ת�Ӳۿ������߻�е�Ƕ����� (��)
	//	int		SmrtSizeRotor;	//ת�Ӳ����ʷֵȼ�
	//  cbGetString cb      ;   //�ص�����  
	//------------------------------------------------------------------------------------------------
};
