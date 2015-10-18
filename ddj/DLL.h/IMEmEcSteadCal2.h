#pragma once

#include "errno.h"
#include <iostream>
#include <fstream>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <math.h>
using namespace std;

//��ŷ���-��̬����������

class CIMEmEcSteadCal
{

public:

	//--------------------------------------------------------------------------------------------------
	void IMEmEcSteadCalMain(
		char   *DI_Output_,		char   *DI_Review_,		int		FlagEMType0_,	int		M_,			int		P_,	
		double	D1_,			double	DI1_,			double	SCL_,			int		Q1_,		int		NK1_,
		double	BK1_,			double	Kfes_,			int		IKRS_,			int		SSlotType_,	double	BS0_,
		double	BS1_,			double	BS2_,			double	HS0_,			double	HS1_,		double	HS2_,
		double	a_El_,			double	b_El_,
		int		JC_,			int		swlay_,			int		A1_,			int		Y1_,		int		Z1_,
		double	CLZ1_,			double	Srv_,			int		SCoilType_,		int		N1_,		double	Dsci_,
		double	A1S_,			double	B1S_,			double	AA1_,			double	LL_,
		int	   Flag_SPhaseSequ_,int	 clockwise_stator_,	int		SCShape_,		int		SWCType_,	double	**SWCFinArray_,
		double	DO2_,			double	DI2_,			double	RCL_,			int		Q2_,		int		NK2_,
		double	BK2_,			double	BSK_,			double	Kfer_,			int		IKRR_,		int		RSlotType_,
		double	BR0_,			double	BR1_,			double	BR2_,			double	BR3_,		double	BR4_,
		double	HR0_,			double	HR1_,			double	HR2_,			double	Es_,		double	Ed_,
		int		JCR_,			int		rwlay_,			int		A2_,			int		Y2_,		int		Z2_,
		double	CLZ2_,			double	Rrv_,			int		RCoilType_,		int		NR_,		double	Drci_,
		double	A2R_,			double	B2R_,
		int	   Flag_RPhaseSequ_,int	   clockwise_rotor_,int		RCShape_,		int		RWCType_,	double  **RWCFinArray_,
		int		Flag_ROutlet_,	int	Flag2KindWaveWinding_,
		double	CLB_,			double	DR_,			double	Be_,			double	He_,		double	rob_,
		double	roe_,
		double	U_,				double	F_,				double	Slip_,			int		Fordermax_,	int 	HarmCalType );
	//--------------------------------------------------------------------------------------------------

	//------------------------------------------------------------------------------------------------
	//	char   *DI_Output_	:	//	����ļ���·������D:\\
	//	char   *DI_Review_	:	//	����ļ���·������D:\\
	//	int		FlagEMType0_;	//	������ͱ�־��
	//							//	01)	1ʱΪ������ת�ӣ�
	//							//	02)	2ʱΪ������ת�ӣ�
	//	int		M_			;	//	����
	//	int		P_			;	//	����
	//	double	D1_			;	//	�������Ĵ�·�����Ч�⾶(mm)
	//	double	DI1_		;	//	���������ھ�(mm)
	//	double	SCL_		;	//	�������ĳ��ȣ�������������(mm)
	//	int		Q1_			;	//	���Ӳ���
	//	int		NK1_		;	//	�������ľ���ͨ�������
	//	double	BK1_		;	//	�������ľ���ͨ�������(mm)
	//	double	Kfes_		;	//	�������ĵ�ѹϵ��
	//	int		IKRS_		;	//	�������Ĺ���ƺŴ���
	//							//	01) 50W470ʱΪ1��
	//							//	02) 50W540ʱΪ2��
	//	double	SCCONDUCTY_	;	//	�������ĵ�Ƭ�ĵ絼�ʣ���λΪ(S/m)
	//	int		SSlotType_	;	//	���Ӳ��ʹ���
	//							//	01) ȫ���ھ��β�ʱΪ1��
	//							//	02) �뿪�ھ��β�ʱΪ2��
	//							//	03) �뿪��Բ�ײ�ʱΪ3��
	//	double	BS0_		;	//	���ӳ�Ƭ�ۿڿ�(mm)
	//	double	BS1_		;	//	���ӳ�Ƭ�۹���(mm)
	//	double	BS2_		;	//	���ӳ�Ƭ�۵׿�(mm)
	//	double	HS0_		;	//	���ӳ�Ƭ�ۿڸ�(mm)
	//	double	HS1_		;	//	���ӳ�Ƭ�۹���(mm)
	//	double	HS2_		;	//	���ӳ�Ƭ��  ��(mm)
	//	double	a_El_		;	//	��Բ�γ���ĳ��ȳ���������Բ�뾶�Ĳ��ֺ���϶���ȵ���Ա�ֵ
	//	double	b_El_		;	//	��Բ�ζ���ĳ��ȶ��ڶ�����Բ�뾶�Ĳ��ֺ���϶���ȵ���Ա�ֵ
	//	int		JC_			;	//  ��������ӷ�����
	//							//	01) ��ʱΪ0��
	//							//	02) ��ʱΪ1��
	//	int		swlay_		;	//  �������
	//							//	01) ��������ʱΪ1��
	//							//	02) ˫������ʱΪ2.
	//	int		A1_ 		;	//  ����·��
	//	int		Y1_ 		;	//  ��Ȧ�ؾ�  ��������
	//	int		Z1_ 		;	//  ÿ�۵�����������
	//	double	CLZ1_		;	//  ��Ȧ���ѳ���mm��
	//	double	Srv_		;	//	��Ȧ�����ʣ�ohm*mm^2/m��
	//	double	DETAG1_		;	//	���Ӳ�Ш��mm��
	//	double	USPW_		;	//	���Ӳ�Ш�ȴŵ�(�����Ӳ�Ш�Ĵŵ�������մŵ��ʵı�ֵ)
	//	int		SCoilType_	;	//	��������
	//							//	01) �⵼��Ϊ1��
	//							//	02) Բ����Ϊ2.
	//	int		N1_			;	//  �⵼�ߵĲ��Ƹ���
	//	double	Dsci_		;	//	Բ����-1������ֱ��(mm)
	//	double	A1S_		;	//	�⵼�ߵ�խ�߳ߴ�(mm)
	//	double	B1S_		;	//	�⵼�ߵĿ��߳ߴ�(mm)
	//	double	AA1_ 		;	//	��Ȧ�˲���������ۿڳ�(mm)
	//	double	LL_			;	//	���߶˲��������ͶӰ��(mm)
	//	int Flag_SPhaseSequ_;	//  ���������������־��
	//							//	01) �Ӷ���������߶˿�ȥ˳ʱ�뷽��ʱΪ+1��
	//							//	02) �Ӷ���������߶˿�ȥ��ʱ�뷽��ʱΪ-1.
	//	int	clockwise_stator_;	//  ���Ӳ��������־��
	//							//	01) �Ӷ���������߶˿�ȥ˳ʱ������ʱΪ+1��
	//							//	02) �Ӷ���������߶˿�ȥ��ʱ������ʱΪ-1.
	//	int	SCShape_ 		;	//  ������Ȧ��״��־��
	//							//	01) �ӳ��߶˿�����������Ȧ�·���
	//							//	02) �ӱ�  �˿�����������Ȧ�Ϸ���
	//							//	03) ��۱������ʱΪ+1��
	//							//	04) ��۱����ұ�ʱΪ-1.
	//	int SWCType_		;	//	���������������ʹ���
	//							//	01) �Լ��ӷ�ʱΪ1��
	//							//	02) �����ӷ�ʱΪ2.
	//	double **SWCFinArray_;	//	������Ȧ�����洢����
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
	//	double	DO2_		;	//	ת�������⾶(mm)
	//	double	DI2_		;	//	ת�������ھ�(mm)
	//	double	RCL_		;	//	ת�����ĳ���(mm)
	//	int		Q2_			;	//	ת�Ӳ���
	//	int		NK2_		;	//	ת�Ӿ���ͨ�������
	//	double	BK2_		;	//	ת�Ӿ���ͨ�������(mm)
	//	double	BSK_		;	//	ת��б������(mm)
	//	double	Kfer_		;	//	ת�����ĵ�ѹϵ��
	//	int		IKRR_		;	//	ת�����Ĺ���ƺŴ���
	//							//	01) 50W470ʱΪ1��
	//							//	02) 50W540ʱΪ2��
	//	double	RCCONDUCTY_	;	//	ת�����ĵ�Ƭ�ĵ絼�ʣ���λΪm/(mm*mm*ŷķ)����(1E6(S/m))
	//	int		RSlotType_	; 	//	ת�Ӳ��ʹ���
	//							//	01) A�Ͳ�ʱΪ1�����Ͳۣ�
	//							//	02) B�Ͳ�ʱΪ2�����Ͳۣ�
	//							//	03) C�Ͳ�ʱΪ3��͹�Ͳۣ�
	//							//	04) D�Ͳ�ʱΪ4����͹�Ͳۣ�
	//							//	05) E�Ͳ�ʱΪ5��б�����Ͳۣ�
	//							//	06) F�Ͳ�ʱΪ6��
	//							//	07) G�Ͳ�ʱΪ7��
	//							//	08) H�Ͳ�ʱΪ8��
	//	double	BR0_		;	//	ת�ӳ�Ƭ�ۿڿ�(mm)
	//	double	BR1_		;	//	ת�ӳ�Ƭ�ۿ�1 (mm)
	//	double	BR2_		;	//	ת�ӳ�Ƭ�ۿ�2 (mm)
	//	double	BR3_		;	//	ת�ӳ�Ƭ�ۿ�3 (mm)
	//	double	BR4_		;	//	ת�ӳ�Ƭ�ۿ�4 (mm)
	//	double	HR0_		;	//	ת�ӳ�Ƭ�ۿڸ�(mm)
	//	double	HR1_		;	//	ת�ӳ�Ƭ�۸�1 (mm)
	//	double	HR2_		;	//	ת�ӳ�Ƭ�۸�2 (mm)
	//	double	Es_			;	//	��Ծ�̬ƫ����
	//	double	Ed_			;	//	��Զ�̬ƫ����
	//	int		JCR_		;	// 	ת������ӷ�����
	//							//	01) ��ʱΪ0��
	//							//	02) ��ʱΪ1��
	//	int		A2_ 		;	// 	����·��
	//	int		rwlay_		;	// 	�������
	//							//	01) ��������ʱΪ1��
	//							//	02) ˫������ʱΪ2.
	//	int		Z2_ 		;	// 	����ÿ�۵�����������
	//	int		Y2_ 		;	// 	��Ȧ�ھࣨ������
	//	double	CLZ2_		;	// 	��Ȧ���ѳ���mm��
	//	double	Rrv_		;	//	��Ȧ������
	//	double	DETAG2_		;	//	ת�Ӳ�Ш��(mm)
	//	double	URPW_		;	//	ת�Ӳ�Ш�ȴŵ�
	//							//	01) ת�Ӳ�Ш�ŵ�������մŵ��ʵı�ֵ��
	//	int		RCoilType_	;	//	��������
	//							//	01) �⵼��Ϊ1��
	//							//	02) Բ����Ϊ2��
	//	int		NR_ 		;	//	�⵼�ߵĲ��Ƹ���
	//	double	Drci_		;	//	Բ���ߵ��ھ��ߴ�
	//	double	A2R_		;	//	�⵼�ߵĿ��߳ߴ�
	//	double	B2R_		;	//	�⵼�ߵ�խ�߳ߴ�
	//	int Flag_ROutlet_	;	//	��ת���߶˱�־��
	//							//	01) ��ת��������߶�(˫�˳���ʱΪǰ��)�Ͷ���������߶�Ϊͬ��ʱΪ+1��
	//							//	02) ��ת��������߶�(˫�˳���ʱΪǰ��)�Ͷ���������߶�Ϊ����ʱΪ-1.
	//	int Flag_RPhaseSequ_;	//	ת�������������־��(*****�Ƕ�ȡ����*****)
	//							//	01) ��ת��������߶˿�ȥ˳ʱ�뷽��ʱΪ+1��
	//							//	02) ��ת��������߶˿�ȥ��ʱ�뷽��ʱΪ-1.
	//	int	clockwise_rotor_;	//  ת�Ӳ��������־��
	//							//	01) ��ת��������߶˿�ȥ˳ʱ������ʱΪ+1��
	//							//	02) ��ת��������߶˿�ȥ��ʱ������ʱΪ-1.
	//	int	RCShape_ 		;	//  ת����Ȧ��״��־��
	//							//	01) �ӳ��߶˿�����������Ȧ�·���
	//							//	02) �ӱ�  �˿�����������Ȧ�Ϸ���
	//							//	03) ��۱������ʱΪ+1��
	//							//	04) ��۱����ұ�ʱΪ-1.
	//	int RWCType_		;	//	ת�������������ʹ���
	//							//	01) �Լ��ӷ�ʱΪ1��
	//							//	02) �����ӷ�ʱΪ2.
	//	double **RWCFinArray_ ;	//	ת����Ȧ�����洢����
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
	//	double CLB_			;	//	������(mm)
	//	double DR_			;	//	�˻�ƽ��ֱ��(mm)
	//	double Be_			;	//	�˻�����(mm)
	//	double He_			;	//	�˻��߶�(mm)
	//	double rob_			;	//	���������ʣ�ohm*mm^2/m��
	//	double roe_			;	//	�˻������ʣ�ohm*mm^2/m��
	//	double U_			;	//	�����ߵ�ѹ��Чֵ(V)
	//	double F_			;	//	�����ߵ�ѹ��Ƶ��(Hz)
	//	double Slip_		;	//	ת����
	//	int	   Fordermax_	;	//	���������߽״�
	//	int    HarmCalType	;	//	���̽ⷨ��־����1ʱΪ�ⷨһ��2ʱΪ�ⷨ��
	//------------------------------------------------------------------------------------------------
};