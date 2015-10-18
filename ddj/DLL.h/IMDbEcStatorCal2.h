#pragma once

#include "errno.h"
#include <iostream>
#include <fstream>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <math.h>
using namespace std;

//�˲�����-���ӣ���������

class CIMDbEcStatorCal
{

public:

	//--------------------------------------------------------------------------------------------------
		void IMDbEcStatorCalMain (
				char *OutputPath,
				double Pn_,double I1_,int M_,int P_,double U_,double F_,
				double DI1_,double SCL_,int Q1_,int NK1_,double BK1_,
				int SSlotType_,double BS0_,double BS1_,double BS2_,
				double HS0_,double HS1_,double HS2_,
				double DO2_,double RCL_,int Q2_,int NK2_,double BK2_,double BSK_,
				int RSlotType_,double BR0_,double BR1_,double BR2_,double BR3_,double BR4_,
				double HR0_,double HR1_,double HR2_,
				double DETAG1_,double dSWedgeDw_,double dSLineBot_,
				double AA1_,double LL_,double CLB_,double DR_,int JC_,int Z1_,int A1_,int Y1_,
				int Me_,double Ae_ ,cbGetString cb);
	//--------------------------------------------------------------------------------------------------

	//----------------------------------------------------------------------------
	//	char	*OutputPath	:	//���·������D:\\
	//	double	Pn_			;	//�������(kW)
	//	double	I1_			;	//�����ߵ�����Чֵ(A)
	//	int		M_			;	//����
	//	int		P_			;	//����
	//	double	U_			;	//�����ߵ�ѹ��Чֵ(V)
	//	double	F_			;	//�����ߵ�ѹ��Ƶ��(Hz)
	//	double	DI1_		;	//���������ھ�(mm)
	//	double	SCL_		;	//�������ĳ��ȣ�������������(mm)
	//	int		Q1_			;	//���Ӳ���
	//	int		NK1_		;	//�������ľ���ͨ�������
	//	double	BK1_		;	//�������ľ���ͨ������(mm)
	//	int		SSlotType_	;	//���Ӳ��ʹ���
	//							//	01) ȫ���ھ��β�ʱΪ1��
	//							//	02) �뿪�ھ��β�ʱΪ2��
	//							//	03) �뿪��Բ�ײ�ʱΪ3��
	//	double	BS0_		;	//���ӳ�Ƭ�ۿڿ�(mm)
	//	double	BS1_		;	//���ӳ�Ƭ�۹���(mm)
	//	double	BS2_		;	//���ӳ�Ƭ�۵׿�(mm)
	//	double	HS0_		;	//���ӳ�Ƭ�ۿڸ�(mm)
	//	double	HS1_		;	//���ӳ�Ƭ�۹���(mm)
	//	double	HS2_		;	//���ӳ�Ƭ��  ��(mm)
	//	double	DO2_ 		;	//ת�������⾶(mm)
	//	double	RCL_ 		;	//ת�����ĳ���(mm)
	//	int		Q2_ 		;	//ת�Ӳ���
	//	int		NK2_ 		;	//ת�Ӿ���ͨ�������
	//	double	BK2_ 		;	//ת�Ӿ���ͨ������(mm)
	//	double	BSK_ 		;	//ת��б������(mm)
	//	int		RSlotType_ 	; 	//ת�Ӳ��ʹ���
	//							//	01) A�Ͳ�ʱΪ1�����Ͳۣ�
	//							//	02) B�Ͳ�ʱΪ2�����Ͳۣ�
	//							//	03) C�Ͳ�ʱΪ3��͹�Ͳۣ�
	//							//	04) D�Ͳ�ʱΪ4����͹�Ͳۣ�
	//							//	05) E�Ͳ�ʱΪ5��б�����Ͳۣ�
	//							//	06) F�Ͳ�ʱΪ6��
	//							//	07) G�Ͳ�ʱΪ7��
	//							//	08) H�Ͳ�ʱΪ8��
	//	double	BR0_ 		;	//ת�ӳ�Ƭ�ۿڿ�(mm)
	//	double	BR1_ 		;	//ת�ӳ�Ƭ�ۿ�1 (mm)
	//	double	BR2_ 		;	//ת�ӳ�Ƭ�ۿ�2 (mm)
	//	double	BR3_ 		;	//ת�ӳ�Ƭ�ۿ�3 (mm)
	//	double	BR4_ 		;	//ת�ӳ�Ƭ�ۿ�4 (mm)
	//	double	HR0_ 		;	//ת�ӳ�Ƭ�ۿڸ�(mm)
	//	double	HR1_ 		;	//ת�ӳ�Ƭ�۸�1 (mm)
	//	double	HR2_ 		;	//ת�ӳ�Ƭ�۸�2 (mm)
	//	double	DETAG1_ 	;	//���Ӳ�Ш��mm��
	//	double	dSWedgeDw_	;	//���Ӳ�Ш�µ������ (mm)
	//	double	dSLineBot_	;	//���Ӳ۵׵ĵ������ (mm)
	//	double	AA1_  		;	//������Ȧ�˲���������ۿڳ�(mm)
	//	double	LL_ 		;	//���ӵ��߶˲��������ͶӰ��(mm)
	//	double	CLB_ 		;	//ת�ӵ�����(mm)
	//	double	DR_ 		;	//ת�Ӷ˻�ƽ��ֱ��(mm)
	//	int		JC_ 		;	//��������ӷ�����
	//							//	01) �ǽ�ʱΪ0��
	//							//	02) �ǽ�ʱΪ1��
	//	int		Z1_  		;	//����ÿ�۵�����������
	//	int		A1_  		;	//���Ӳ���·��
	//	int		Y1_  		;	//������Ȧ�ھ�  ��������
	//	int		Me_			;	//���Ӷ˲��˹�������
	//	double	Ae_			;	//���Ӷ˲��˹��ĺ����� (mm^2)
	//  cbGetString cb      ;   //�ص�����  
	//----------------------------------------------------------------------------
};
