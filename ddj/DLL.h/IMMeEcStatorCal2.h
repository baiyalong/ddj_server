#ifndef  __IMMeEcStatorCal_HHHH__
#define  __IMMeEcStatorCal_HHHH__

#include <iostream>
#include <fstream>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <math.h>
using namespace std;

//��е����-���ӣ���������

class CIMMeEcStatorCal

{

public:

	//----------------------------------------------------------------------------------------------------
	void IMMeEcStatorCalMain(
		char   *OutputPath	,
		int		P			,double	DI1			,double	D1			,double	SCL			,int	Q1		,
		int		NK1			,double	BK1			,double	Kfes		,int	SSlotType	,double	BS0		,
		double	BS1			,double	BS2			,double	HS0			,double	HS1			,double	HS2		,
		int		swlay		,int	Z1 			,double	A1S			,double	B1S			,int	N1 		,
		double	CLZ1		,int    OrdeMax		,int	Ordefr0		,double	Freqfr0		,double	Amplfr0	,
		int     FlagCal    ,cbGetString cb );
	//----------------------------------------------------------------------------------------------------

	//------------------------------------------------------------------------------------------------------
	//	char   *OutputPath	:	//����ļ���·������D:\\
	//	int		P			;	//������
	//	double	DI1			;	//����������Բֱ��(mm)
	//	double	D1			;	//����������Բֱ��(mm)
	//	double	SCL			;	//�����������򳤶�(mm)
	//	int		Q1			;	//���Ӳ���
	//	int		NK1			;	//�������ľ���ͨ�������
	//	double	BK1			;	//�������ľ���ͨ������(mm)
	//	double	Kfes		;	//�������ĵ�ѹϵ��
	//	int		SSlotType	;	//���Ӳ��ʹ���
	//							//	01) ȫ���ھ��β�ʱΪ1��
	//							//	02) �뿪�ھ��β�ʱΪ2��
	//							//	03) �뿪��Բ�ײ�ʱΪ3.
	//	double	BS0			;	//���ӳ�Ƭ�ۿڿ�(mm)
	//	double	BS1			;	//���ӳ�Ƭ�۹���(mm)
	//	double	BS2			;	//���ӳ�Ƭ�۵׿�(mm)
	//	double	HS0			;	//���ӳ�Ƭ�ۿڸ�(mm)
	//	double	HS1			;	//���ӳ�Ƭ�۹���(mm)
	//	double	HS2			;	//���ӳ�Ƭ�����(mm)
	//	int		swlay		;	//���Ӳ�����Ȧ�Ĳ���
	//							//	01) ��������ʱΪ1��
	//							//	02) ˫������ʱΪ2��
	//	int		Z1 			;	//��������ÿ�۵�����
	//							//	01) ÿ�۵�������ָ��Ч���������������ƵĹ��߿���һ������Ч����.
	//	double	A1S			;	//���ӵ��ߵ�����խ�߳ߴ�(mm)
	//							//	01) �Գ�������Ϊ���ߵ�խ�߳ߴ磻
	//							//	02) ��ɢǶ����Ϊ���ߵ�ֱ����
	//	double	B1S			;	//���ӵ��ߵ����߿�߳ߴ�(mm)
	//							//	01) �Գ�������Ϊ���ߵĿ�߳ߴ磻
	//							//	02) ��ɢǶ����ʱΪ0��
	//	int		N1 			;	//������Ȧ���Ƹ���
	//	double	CLZ1		;	//������Ȧ���ѳ�(mm)
	//	int     OrdeMax		;	//����ģ̬����߽״�
	//	int		Ordefr0		;	//�����״�
	//	double	Freqfr0		;	//����Ƶ��(Hz)
	//	double	Amplfr0		;	//������ֵ(Pa)
	//	int		FlagCal		:	//���㹦�ܱ�־����0ʱΪ�������Ƶ�ʣ�1ʱΪ��������񶯣�2ʱΪ����������
	//  cbGetString cb      ;   //�ص�����  
	//------------------------------------------------------------------------------------------------------
};

#endif;