#pragma once

#include "errno.h"
#include <iostream>
#include <fstream>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <math.h>
using namespace std;

//��ŷ���-��̬����ֵ����

class CIMEmSzTransCal
{

public:

	//--------------------------------------------------------------------------------------------------
	void IMEmSzTransCalMain (
		char    *OutputPath,
		int     FlagEMType0,	int		M,				int		P,				double	U,				double	F,
		double	D1,				double	DI1,			double	SCL,			int		Q1,				int		NK1,
		double	BK1,			double	Kfes,			int		IKRS,			int		SSlotType,		double	BS0,
		double	BS1,			double	BS2,			double	HS0,			double	HS1,			double	HS2,
		double  SCCONDUCTY,
		int		JC,				int		swlay,			int		A1,				int		Y1,				int		Z1,
		double	CLZ1,			double	Srv,			int		SCoilType,		int		N1,				double	Dsci,
		double	A1S,			double	B1S,			double	AA1,			double	LL,				double	DETAG1,
		double	USPW,
		int	    Flag_SPhaseSequ,int	   clockwise_stator,int		SCShape,		int		SWCType,		double **SWCFinArray,
		double	DO2,			double	DI2,			double	RCL,			int		Q2,				int		NK2,
		double	BK2,			double	BSK,			double	Kfer,			int		IKRR,			int		RSlotType,
		double	BR0,			double	BR1,			double	BR2,			double	BR3,			double	BR4,
		double	HR0,			double	HR1,			double	HR2,			double  RCCONDUCTY,
		int		JCR,			int		rwlay,			int		A2,				int		Y2,				int		Z2,
		double	CLZ2,			double	Rrv,			int		RCoilType,		int		NR,				double	Drci,
		double	A2R,			double	B2R,			double	DETAG2,			double	URPW,			int	Flag2KindWaveWinding,
		int		Flag_ROutlet,	int	    Flag_RPhaseSequ,int	clockwise_rotor,	int		RCShape,		int		RWCType,
		double  **RWCFinArray,
		double	CLB,			double	DR,				double	Be,				double	He,				double	rob,
		double	roe,
		int		CalcuMult,		double	WKKS,			double	PFWP,			double	WindLoss,		double	ReferSpeed,
		int		FlagRMove,		int		RunFlag0,		int		RunFlag2,		int		RunNums,		double	*RunX,
		double	*RunY,			double	SimTotalTime,	double	step,			double RequiredPrecision,double	InitAnglPos,
		double	InitNr,			int		Flag_Us_line,	int		N_Us_line,		double	*Time_Us_line,	double	**Us_line,
		int     Numb_AixalSimu, int	FlagSteadyEstimate, double	ErrorSteadyEstimate,
		int	    Flag_Fourier   ,double  InitTime_Fourier 		,int Flag_FourierMethod,
		double  Fourier_FreqMax,double  Fourier_FreqResolution  ,int Flag_RedefineStep ,int Flag_Fourier_2powN_FFT2 ,
		int	Flag_AirB_Fourier  ,int     Fourier_AirB_ModeOrder  ,double	Fourier_AirB_AmplMin ,
		int Flag_AirF_Fourier  ,int		Fourier_AirF_ModeOrder  ,double	Fourier_AirF_AmplMin ,

		double drmax_rotatedNode_,double d_GapOuter_,int number_of_rotating_node_in_GapSeparateBar_,
		int total_of_NODE_in_Rotor_all_ ,int total_of_fixedELEMENT_in_Rotor_ ,
		int total_of_NODE_in_Stator_all_,int total_of_fixedELEMENT_in_Stator_,
		int *NodeNum_of_GapInner_,int *NodeNum_of_GapOuter_,int *ipoint_,int *jpoint_,int *kpoint_,
		double *area_of_ELEMENT_,int *MatNumber_,int *ElemTypeNumber_,double *x_pos_,double *y_pos_,
		int total_of_rotatedNODEs_,int *num_of_rotatedNODE_,
		int *total_of_NODEs_on_firstBoundaryLine_,int *num_of_firstNODE_,
		int	total_of_NODES_on_Border_Rotor_,int total_of_NODES_on_Border_Stator_,
		int *num_of_NODES_on_Border_Real_  ,int *num_of_NODES_on_Border_Virtual_,

		double drmax_rotatedNode__,double d_GapOuter__,int number_of_rotating_node_in_GapSeparateBar__,
		int total_of_NODE_in_Rotor__ ,int total_of_fixedELEMENT_in_Rotor__ ,
		int total_of_NODE_in_Stator__,int total_of_fixedELEMENT_in_Stator__,
		int *NodeNum_of_GapInner__,int *NodeNum_of_GapOuter__,int *ipoint__,int *jpoint__,int *kpoint__,
		double *area_of_ELEMENT__,int *MatNumber__,int *ElemTypeNumber__,double *x_pos__,double *y_pos__,
		int total_of_rotatedNODEs__,int *num_of_rotatedNODE__,
		int *total_of_NODEs_on_firstBoundaryLine__,int *num_of_firstNODE__ );
	//--------------------------------------------------------------------------------------------------

	//----------------------------------------------------------------------------------------------------
	//	char	*OutputPath	:	//���·��������������б�ܣ�����D:
	//	int		FlagEMType0	:	//������ͱ�־��
	//							//	01)	1ʱΪ������ת�ӣ�
	//							//	02)	2ʱΪ������ת�ӣ�
	//	int		M			;	//����
	//	int		P			;	//����
	//	double	U			;	//�����ߵ�ѹ��Чֵ(V)
	//	double	F			;	//�����ߵ�ѹ��Ƶ��(Hz)
	//	double	D1			;	//�������Ĵ�·�����Ч�⾶(mm)
	//	double	DI1			;	//���������ھ�(mm)
	//	double	SCL			;	//�������ĳ��ȣ�������������(mm)
	//	int		Q1			;	//���Ӳ���
	//	int		NK1			;	//�������ľ���ͨ�������
	//	double	BK1			;	//�������ľ���ͨ������(mm)
	//	double	Kfes		;	//�������ĵ�ѹϵ��
	//	int		IKRS		;	//�������Ĺ���ƺŴ���
	//							//	01) 50W470ʱΪ1��
	//							//	02) 50W540ʱΪ2��
	//	double	SCCONDUCTY	;	//�������ĵ�Ƭ�ĵ絼�ʣ���λΪ(S/m)
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
	//	double	SCCONDUCTY	;	//	�������ĵ�Ƭ�ĵ絼�ʣ���λΪ(S/m)
	//	int		JC 			;	//  ��������ӷ�����
	//							//	01) ��ʱΪ0��
	//							//	02) ��ʱΪ1��
	//	int		swlay 		;	//  �������
	//							//	01) ��������ʱΪ1��
	//							//	02) ˫������ʱΪ2.
	//	int		A1  		;	//  ����·��
	//	int		Y1  		;	//  ��Ȧ�ؾ�  ��������
	//	int		Z1  		;	//  ÿ�۵�����������
	//	double	CLZ1 		;	//  ��Ȧ���ѳ���mm��
	//	double	Srv 		;	//	��Ȧ�����ʣ�ohm*mm^2/m��
	//	double	DETAG1 		;	//	���Ӳ�Ш��mm��
	//	double	USPW 		;	//	���Ӳ�Ш�ȴŵ�(�����Ӳ�Ш�Ĵŵ�������մŵ��ʵı�ֵ)
	//	int		SCoilType 	;	//	��������
	//							//	01) �⵼��Ϊ1��
	//							//	02) Բ����Ϊ2.
	//	int		N1 			;	//  �⵼�ߵĲ��Ƹ���
	//	double	Dsci 		;	//	Բ����-1������ֱ��(mm)
	//	double	A1S 		;	//	�⵼�ߵ�խ�߳ߴ�(mm)
	//	double	B1S 		;	//	�⵼�ߵĿ�߳ߴ�(mm)
	//	double	AA1  		;	//	��Ȧ�˲���������ۿڳ�(mm)
	//	double	LL 			;	//	���߶˲��������ͶӰ��(mm)
	//	int Flag_SPhaseSequ ;	//  ���������������־��
	//							//	01) �Ӷ���������߶˿�ȥ˳ʱ�뷽��ʱΪ+1��
	//							//	02) �Ӷ���������߶˿�ȥ��ʱ�뷽��ʱΪ-1.
	//	int	clockwise_stator;	//  ���Ӳ��������־��
	//							//	01) �Ӷ���������߶˿�ȥ˳ʱ������ʱΪ+1��
	//							//	02) �Ӷ���������߶˿�ȥ��ʱ������ʱΪ-1.
	//	int	SCShape  		;	//  ������Ȧ��״��־��
	//							//	01) �ӳ��߶˿�����������Ȧ�·���
	//							//	02) �ӱ�  �˿�����������Ȧ�Ϸ���
	//							//	03) ��۱������ʱΪ+1��
	//							//	04) ��۱����ұ�ʱΪ-1.
	//	int SWCType			;	//	���������������ʹ���
	//							//	01) �Լ��ӷ�ʱΪ1��
	//							//	02) �����ӷ�ʱΪ2.
	//	double **SWCFinArray;	//	������Ȧ�����洢����
	//							//	01) ��(Q*wlay/2)�У���4��
	//							//		01.01)  ��i�е�j��Ԫ�ض�Ӧ��������е�i�е�j��Ԫ�أ�
	//							//	02) ÿһ�б�ʾһ����Ȧ
	//							//		02.01)  �����кŲ�һ���͸��б�ʾ����Ȧ��ۺ�һ�£�
	//							//	03) ��i�е�01�б�ʾ��i����Ȧ����ۺ�
	//							//		03.01)  ��������ʱ��ͷ������۱߲ۺţ���5��12��
	//							//		03.02)  ˫������ʱ��ͷ������۱߲ۺţ���5��12��
	//							//		03.03)  ��������ʱ��ͷ������۱������������ʾΪ(��۱߲ۺ�) ����5 ��12 ��
	//							//		03.04)  ˫������ʱ��ͷ������۱������������ʾΪ(��۱߲ۺ�T)����5T��12T��
	//							//	04) ��i�е�02�б�ʾ��i����Ȧ�ĳ��ۺ�
	//							//		04.01)  ��������ʱ��β���ӳ��۱߲ۺŵĸ�ֵ����-5��-12��
	//							//		04.02)  ˫������ʱ��β���ӳ��۱߲ۺŵĸ�ֵ����-5��-12��
	//							//		04.03)  ��������ʱ��β���ӳ��۱������������ʾΪ(���۱߲ۺ�) ����5 ��12 ��
	//							//		04.04)  ˫������ʱ��β���ӳ��۱������������ʾΪ(���۱߲ۺ�B)����5B��12B��
	//							//	05) ��i�е�03�е�Ԫ�ر�ʾ��i����Ȧ������·��
	//							//		05.01)  ��ʾ��Ȧ����ĳ��ĵڼ���֧·��
	//							//		05.02)  ��ֵ��ʾ��Ȧ˳�ӣ���˳�������ӷ����������Ȧ���ٳ�����Ȧ�ߣ�
	//							//		05.03)  ��ֵ��ʾ��Ȧ���ӣ���˳�������ӷ����ȳ�����Ȧ���������Ȧ�ߣ�
	//							//		05.04)  ����A���֧·�Ŵ�   1��ʼ����
	//							//				    1��ʾ��Ȧ����A��ĵ�1��֧·��˳�ӣ�
	//							//				   -2��ʾ��Ȧ����A��ĵ�2��֧·�ҷ��ӣ���������������
	//							//		05.05)  ����B���֧·�Ŵ�1001��ʼ����
	//							//				-1001��ʾ��Ȧ����B��ĵ�1��֧·�ҷ��ӣ�
	//							//				 1002��ʾ��Ȧ����B��ĵ�2��֧·��˳�ӣ���������������
	//							//		05.06)  ����C���֧·�Ŵ�2001��ʼ����
	//							//				 2001��ʾ��Ȧ����C��ĵ�1��֧·��˳�ӣ�
	//							//				-2002��ʾ��Ȧ����C��ĵ�2��֧·�ҷ��ӣ���������������
	//							//		05.07)       1�����������ʾΪ A1��   -2�����������ʾΪ-A2��
	//							//		05.08)    1001�����������ʾΪ B1��-1002�����������ʾΪ-B2��
	//							//		05.09)   -2001�����������ʾΪ-C1�� 2002�����������ʾΪ C2��
	//							//	06) ��i�е�04�б�ʾ��i����Ȧ������
	//							//		06.01)  ��Ȧ������Ϊ��������
	//							//		06.02)  ��������а�������Сʵ����ʾ����5��12��
	//							//	07) ��i�е�05�б�ʾ��i����Ȧ�İ��ѳ�(mm)
	//							//		07.01)  ��Ȧ���ѳ���Ϊ��ʵ������λΪmm��
	//							//		07.02)  ��������а����ѳ���Сʵ����ʾ����126.500��
	//	double	DO2 		;	//	ת�������⾶(mm)
	//	double	DI2 		;	//	ת�������ھ�(mm)
	//	double	RCL 		;	//	ת�����ĳ���(mm)
	//	int		Q2 			;	//	ת�Ӳ���
	//	int		NK2 		;	//	ת�Ӿ���ͨ�������
	//	double	BK2 		;	//	ת�Ӿ���ͨ������(mm)
	//	double	BSK 		;	//	ת��б������(mm)
	//	double	Kfer 		;	//	ת�����ĵ�ѹϵ��
	//	int		IKRR 		;	//	ת�����Ĺ���ƺŴ���
	//							//	01) 50W470ʱΪ1��
	//							//	02) 50W540ʱΪ2��
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
	//	double	RCCONDUCTY 	;	//	ת�����ĵ�Ƭ�ĵ絼�ʣ���λΪ(S/m)
	//	int		JCR 		;	// 	ת������ӷ�����
	//							//	01) ��ʱΪ0��
	//							//	02) ��ʱΪ1��
	//	int		A2  		;	// 	����·��
	//	int		rwlay 		;	// 	�������
	//							//	01) ��������ʱΪ1��
	//							//	02) ˫������ʱΪ2.
	//	int		Z2  		;	// 	����ÿ�۵�����������
	//	int		Y2  		;	// 	��Ȧ�ھࣨ������
	//	double	CLZ2 		;	// 	��Ȧ���ѳ���mm��
	//	double	Rrv 		;	//	��Ȧ������
	//	double	DETAG2 		;	//	ת�Ӳ�Ш��(mm)
	//	double	URPW 		;	//	ת�Ӳ�Ш�ȴŵ�
	//							//	01) ת�Ӳ�Ш�ŵ�������մŵ��ʵı�ֵ��
	//	int		RCoilType 	;	//	��������
	//							//	01) �⵼��Ϊ1��
	//							//	02) Բ����Ϊ2��
	//	int		NR  		;	//	�⵼�ߵĲ��Ƹ���
	//	double	Drci 		;	//	Բ���ߵ��ھ��ߴ�
	//	double	A2R 		;	//	�⵼�ߵĿ�߳ߴ�
	//	double	B2R 		;	//	�⵼�ߵ�խ�߳ߴ�
	//	int Flag_ROutlet 	;	//	��ת���߶˱�־��
	//							//	01) ��ת��������߶�(˫�˳���ʱΪǰ��)�Ͷ���������߶�Ϊͬ��ʱΪ+1��
	//							//	02) ��ת��������߶�(˫�˳���ʱΪǰ��)�Ͷ���������߶�Ϊ����ʱΪ-1.
	//	int Flag_RPhaseSequ ;	//	ת�������������־��(*****�Ƕ�ȡ����*****)
	//							//	01) ��ת��������߶˿�ȥ˳ʱ�뷽��ʱΪ+1��
	//							//	02) ��ת��������߶˿�ȥ��ʱ�뷽��ʱΪ-1.
	//	int	clockwise_rotor ;	//  ת�Ӳ��������־��
	//							//	01) ��ת��������߶˿�ȥ˳ʱ������ʱΪ+1��
	//							//	02) ��ת��������߶˿�ȥ��ʱ������ʱΪ-1.
	//	int	RCShape  		;	//  ת����Ȧ��״��־��
	//							//	01) �ӳ��߶˿�����������Ȧ�·���
	//							//	02) �ӱ�  �˿�����������Ȧ�Ϸ���
	//							//	03) ��۱������ʱΪ+1��
	//							//	04) ��۱����ұ�ʱΪ-1.
	//	int RWCType 		;	//	ת�������������ʹ���
	//							//	01) �Լ��ӷ�ʱΪ1��
	//							//	02) �����ӷ�ʱΪ2.
	//	double **RWCFinArray  ;	//	ת����Ȧ�����洢����
	//							//	01) ��(Q*wlay/2)�У���4��
	//							//		01.01)  ��i�е�j��Ԫ�ض�Ӧ��������е�i�е�j��Ԫ�أ�
	//							//	02) ÿһ�б�ʾһ����Ȧ
	//							//		02.01)  �����кŲ�һ���͸��б�ʾ����Ȧ��ۺ�һ�£�
	//							//	03) ��i�е�01�б�ʾ��i����Ȧ����ۺ�
	//							//		03.01)  ��������ʱ��ͷ������۱߲ۺţ���5��12��
	//							//		03.02)  ˫������ʱ��ͷ������۱߲ۺţ���5��12��
	//							//		03.03)  ��������ʱ��ͷ������۱������������ʾΪ(��۱߲ۺ�) ����5 ��12 ��
	//							//		03.04)  ˫������ʱ��ͷ������۱������������ʾΪ(��۱߲ۺ�T)����5T��12T��
	//							//	04) ��i�е�02�б�ʾ��i����Ȧ�ĳ��ۺ�
	//							//		04.01)  ��������ʱ��β���ӳ��۱߲ۺŵĸ�ֵ����-5��-12��
	//							//		04.02)  ˫������ʱ��β���ӳ��۱߲ۺŵĸ�ֵ����-5��-12��
	//							//		04.03)  ��������ʱ��β���ӳ��۱������������ʾΪ(���۱߲ۺ�) ����5 ��12 ��
	//							//		04.04)  ˫������ʱ��β���ӳ��۱������������ʾΪ(���۱߲ۺ�B)����5B��12B��
	//							//	05) ��i�е�03�е�Ԫ�ر�ʾ��i����Ȧ������·��
	//							//		05.01)  ��ʾ��Ȧ����ĳ��ĵڼ���֧·��
	//							//		05.02)  ��ֵ��ʾ��Ȧ˳�ӣ���˳�������ӷ����������Ȧ���ٳ�����Ȧ�ߣ�
	//							//		05.03)  ��ֵ��ʾ��Ȧ���ӣ���˳�������ӷ����ȳ�����Ȧ���������Ȧ�ߣ�
	//							//		05.04)  ����A���֧·�Ŵ�   1��ʼ����
	//							//					1��ʾ��Ȧ����A��ĵ�1��֧·��˳�ӣ�
	//							//					-2��ʾ��Ȧ����A��ĵ�2��֧·�ҷ��ӣ���������������
	//							//		05.05)  ����B���֧·�Ŵ�1001��ʼ����
	//							//				-1001��ʾ��Ȧ����B��ĵ�1��֧·�ҷ��ӣ�
	//							//					1002��ʾ��Ȧ����B��ĵ�2��֧·��˳�ӣ���������������
	//							//		05.06)  ����C���֧·�Ŵ�2001��ʼ����
	//							//					2001��ʾ��Ȧ����C��ĵ�1��֧·��˳�ӣ�
	//							//				-2002��ʾ��Ȧ����C��ĵ�2��֧·�ҷ��ӣ���������������
	//							//		05.07)       1�����������ʾΪ A1��   -2�����������ʾΪ-A2��
	//							//		05.08)    1001�����������ʾΪ B1��-1002�����������ʾΪ-B2��
	//							//		05.09)   -2001�����������ʾΪ-C1�� 2002�����������ʾΪ C2��
	//							//	06) ��i�е�04�б�ʾ��i����Ȧ������
	//							//		06.01)  ��Ȧ������Ϊ��������
	//							//		06.02)  ��������а�������Сʵ����ʾ����5��12��
	//							//	07) ��i�е�05�б�ʾ��i����Ȧ�İ��ѳ�(mm)
	//							//		07.01)  ��Ȧ���ѳ���Ϊ��ʵ������λΪmm��
	//							//		07.02)  ��������а����ѳ���Сʵ����ʾ����126.500��
	//							//	08) ���ನ����ʱ˵��
	//							//		08.01)  �������������֧ͬ·����Ȧ�������У�
	//							//		08.02)  �������ÿ��֧·����ǰ�˿�ʼ������������˳������������Ȧ������
	//							//		08.03)  �����֮ǰ����Ȧ�ͷ����֮�����Ȧ���������֮ǰ����Ȧ��״��ʾ��
	//							//		08.04)  �����֮ǰ����Ȧ˳���Ӻͷ����֮�����Ȧ˳������ͬ��
	//							//		08.05)  ��������ڵ���Ȧ������Ϊ����Ȧ������
	//	double CLB 			;	//	������(mm)
	//	double DR 			;	//	�˻�ƽ��ֱ��(mm)
	//	double Be 			;	//	�˻����(mm)
	//	double He 			;	//	�˻��߶�(mm)
	//	double rob 			;	//	���������ʣ�ohm*mm^2/m��
	//	double roe 			;	//	�˻������ʣ�ohm*mm^2/m��
	//	double	WKKS 		;	//�����ת���������ת��������kg��m^2��
	//	double	PFWP 		;	//��е��ģ�W��
	//							//	01)	����ʱΪkW���洢ʱΪW��
	//	double	WindLoss 	;	//�ο�ת��ʱ�����ķ������ (W)
	//							//	01)	����ʱΪkW���洢ʱΪW��
	//	double	ReferSpeed 	;	//�ο�ת�� (r/min)
	//	int	    FlagRMove 	;	//ת���˶���־����
	//							//	01)  0ʱΪת�Ӻ��٣�
	//							//	02)  1ʱΪת�ӱ���(��������״̬��Ϊת�Ӳ�ֵ�����)��
	//	int		RunFlag0 	;	//ת�Ӹ��ر�����־����
	//							//	01)  0ʱΪת�Ӹ�����ʱ����仯��
	//							//	02)  1ʱΪת�Ӹ�����ת�ٶ��仯��
	//	int		RunFlag2 	;	//ת�Ӹ������ͱ�־����
	//							//	01)  0ʱΪת�Ӹ���Ϊת�أ�
	//							//	02)  1ʱΪת�Ӹ���Ϊ���ʣ�
	//	int		RunNums 	;	//ת�Ӹ�����������
	//	double *RunX 		;	//ת�Ӹ����Ա�������
	//							//	01) ��RunNums��Ԫ�أ�
	//							//	02) (i)Ϊ��i������״̬��ķ��������ʱ��(s)����ת��(r/min)��
	//							//	03) RunFlag0Ϊ0ʱΪʱ��(s)��
	//							//	04) RunFlag0Ϊ1ʱΪת��(r/min)��
	//	double *RunY 		;	//ת�Ӹ���Ӧ��������
	//							//	01) ��RunNums��Ԫ�أ�
	//							//	02) (i)Ϊ��i������״̬�ĸ���ת�ػ��߸��ع��ʣ�
	//							//	03) RunFlag2Ϊ0ʱΪ����ת��(N*m)��
	//							//	04) RunFlag2Ϊ1ʱΪ���ع���(W)��
	//							//	05) ��������ʱ��λkW�������洢ʱ��λW��
	//	double	SimTotalTime;	//����������ʱ�䣨s��
	//	double	step 		;	//ʱ�䲽����s��
	//	double RequiredPrecision//���㾫��
	//	double	InitAnglPos ;	//��0��������ʼʱ����ת������ϵX��˳����������ת���Ļ�е�Ƕ�(��)
	//	double  InitNr 		;	//������ʼʱ��(��ÿ����ʼʱ��)ת�ӵ�ת��(r/min)
	//							//	01��������Ϊ˳����������
	//	int		Flag_Us_line;	//���ӻ��˵�ѹ���ͱ�־��
	//							//	01)  0ʱΪ���������ߵ�ѹ����Чֵ��
	//							//	02)  1ʱΪ���������ߵ�ѹ�����ļ���
	//	double	U 			;	//�����ߵ�ѹ��Чֵ(V)
	//	double	F 			;	//�����ߵ�ѹ��Ƶ��(Hz)
	//	int		N_Us_line 	;	//�ߵ�ѹ�������ݵ����ݵ���
	//	double *Time_Us_line;	//�ߵ�ѹ�������ݵ�ʱ������
	//							//	01) ��N_Us_line��Ԫ�أ�
	//							//	02)	ʱ�䵥λΪs��
	//	double **Us_line 	;	//�ߵ�ѹ��������
	//							//	01) ��N_Us_line�У�
	//							//	02) ��02�У�
	//							//	03) ��01��ΪUab����02��ΪUbc��
	//							//	04)	��ѹ��λΪV��
	//	int		Numb_AixalSimu;	//����ֶ�����
	//							//	01��������Ϊ1��
	//							//	02�������>=2��
	//	int FlagSteadyEstimate;	//��̬�жϱ�־��
	//							//	01�� 0ʱΪ������̬�жϣ�
	//							//	02�� 1ʱΪ�Զ���̬�жϣ�
	//	double ErrorSteadyEstimate;	//��̬�жϾ���
	//							//	01����̬�ж�ʱ�����������ڵĻ�����ֵ��ƫ������
	//	int		Flag_Fourier;	//����Fourier������ϵ����־��
	//							//	01)  0ʱΪ�����㣻
	//							//	02)  1ʱΪҪ���㣻
	//	int	Flag_FourierMethod;	//����Fourier�����ķ���
	//							//	01)  0ʱΪ��һ��������FFT2���㣻
	//							//	02)  1ʱΪ������������Fourier������ʵ����ʽ�ı��ʽ���㣻
	//	double	InitTime_Fourier			;	//����Fourier��������ʼʱ��(s)
	//	double	Fourier_FreqMax				;	//����Fourier���������Ƶ��(Hz)
	//	double	Fourier_FreqResolution		;	//����Fourier�����ķֱ�Ƶ��(Hz)
	//	int		Flag_AirB_Fourier			;	//������϶����г���ı�־��
	//											//	01)  0ʱΪ�����㣻
	//											//	02)  1ʱΪҪ���㣻
	//	int		Fourier_AirB_ModeOrder		;	//������϶����г����߽״�
	//	double	Fourier_AirB_AmplMin		;	//������϶����г����С��ֵ(T)
	//	int		Flag_AirF_Fourier			;	//������϶����г���ı�־��
	//											//	01)  0ʱΪ�����㣻
	//											//	02)  1ʱΪҪ���㣻
	//	int		Fourier_AirF_ModeOrder		;	//������϶����г����߽״�
	//	double	Fourier_AirF_AmplMin		;	//������϶����г����С��ֵ(Pa)
	//	int		Flag_RedefineStep			;	//����Fourier������Ҫ�Ĳ���Ƶ������ȷ��������־��
	//											//	01)  0ʱΪ������ȷ��������
	//											//	02)  1ʱΪҪ����ȷ��������
	//	int		Flag_Fourier_2powN_FFT2		;	//����������2���������ݱ�־��
	//											//	01)  0ʱΪ���趨��
	//											//	02)  1ʱΪҪ�趨��
	//											//	03) FFT2����ʱ����������ã�
	//	double	drmax_rotatedNode_;				//��϶�������Բ��ֱ��(mm)
	//	double	d_GapOuter_							  ;	//��϶���������Բֱ��(mm)
	//	int	number_of_rotating_node_in_GapSeparateBar_;	//��϶�������Բ�ϵ�һȦ��ת��ʵ�ڵ�����
	//	int	total_of_NODE_in_Rotor_all_     		  ;	//ת���Ͻڵ�����
	//	int	total_of_fixedELEMENT_in_Rotor_ 		  ;	//ת���Ϲ̶���Ԫ����
	//	int	total_of_NODE_in_Stator_all_    		  ;	//�����Ͻڵ�����
	//	int	total_of_fixedELEMENT_in_Stator_		  ;	//�����Ϲ̶���Ԫ����
	//	int	total_of_NODE_all_		 ;					//�ڵ�����
	//	int	total_of_fixedELEMENT_	 ;					//�̶���Ԫ����
	//	int	total_of_variableELEMENT_;					//�ɱ䵥Ԫ����
	//	int	total_of_ELEMENT_        ;					//��Ԫ����
	//	double	*x_pos_ ;								//�ڵ��X����ֵ����λ��mm��
	//	double	*y_pos_ ;								//�ڵ��Y����ֵ����λ��mm��
	//	int		total_of_rotatedNODEs_	;				//��ת�ڵ�����
	//	int		*num_of_rotatedNODE_	;				//������ת�ڵ������
	//	int		*total_of_NODEs_on_firstBoundaryLine_;	//��һ��߽������������ϵĽڵ�����
	//	int		*num_of_firstNODE_					 ;	//��һ��߽��������ϵĽڵ���
	//	int		total_of_NODES_on_Border_Rotor_ ;		//ת���ϵ������Ա߽�Ľڵ�����(����)
	//	int		total_of_NODES_on_Border_Stator_;		//�����ϵ������Ա߽�Ľڵ�����(����)
	//	int		*num_of_NODES_on_Border_Real_   ;		//���������Ա߽�ʵ�ڵ������
	//	int		*num_of_NODES_on_Border_Virtual_;		//���������Ա߽���ڵ������
	//	double drmax_rotatedNode__;						//��϶�������Բ��ֱ��(mm)
	//	double d_GapOuter__ 	  ;						//��϶���������Բֱ��(mm)
	//	int	number_of_rotating_node_in_GapSeparateBar__;//��϶�������Բ��һȦ��ת�Ľڵ�����
	//	int	total_of_NODE_in_Rotor__				   ;//ת���Ͻڵ�����
	//	int	total_of_fixedELEMENT_in_Rotor__		   ;//ת���Ϲ̶���Ԫ����
	//	int	total_of_NODE_in_Stator__				   ;//�����Ͻڵ�����
	//	int	total_of_fixedELEMENT_in_Stator__		   ;//�����Ϲ̶���Ԫ����
	//	int		*NodeNum_of_GapInner__  ;				//�����϶�������Բ�ϵĽڵ���
	//	int		*NodeNum_of_GapOuter__  ;				//�����϶�������Բ�ϵĽڵ���
	//	int		*ipoint__         		;				//��Ԫ�ĵ�i�Žڵ�ı��
	//	int		*jpoint__        		;				//��Ԫ�ĵ�j�Žڵ�ı��
	//	int		*kpoint__         		;				//��Ԫ�ĵ�k�Žڵ�ı��
	//	double	*area_of_ELEMENT__		;				//��Ԫ�����(ƽ������) 
	//	int		*MatNumber__     		;				//��Ԫ�Ĳ��Ϻ�
	//	int		*ElemTypeNumber__ 		;				//��Ԫ�����ͺ�
	//	double	*x_pos__ ;								//�ڵ��X����ֵ//��λ��mm
	//	double	*y_pos__ ;								//�ڵ��Y����ֵ//��λ��mm
	//	int		total_of_rotatedNODEs__ ;				//��ת�ڵ�����
	//	int		*num_of_rotatedNODE__   ;				//������ת�ڵ������
	//	int		*total_of_NODEs_on_firstBoundaryLine__; //��һ��߽������������ϵĽڵ�����
	//	int		*num_of_firstNODE__		;				//��һ��߽��������ϵĽڵ���
	//----------------------------------------------------------------------------------------------------
};
