#pragma once

#include "errno.h"
#include <iostream>
#include <fstream>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <math.h>
#include "MechCalcuOutputFile.h"
using namespace std;

//��е����-���ӣ���ֵ����

class CIMMeSzStatorCal
{

public:

	//--------------------------------------------------------------------------------------------------
		void IMMeSzStatorCalMain(
				char *OutputPath,double D1,double DI1,double SCL,int Q1,double Kfes,
				int SSlotType,double HS0,double HS1,double HS2,
				double BS0,double BS1,double BS2,int NK1,double BK1,
				int swlay,int Z1,int SCoilType,double Dsci,double A1S,double B1S,int N1,
				int SWireCol,double DETAG1,double dSConductor,double dSCoil,
				double dSLiner,double dSLiner2,double dSWedgeDw,double dSLineBot,
				int MechCalCont,int MechStrucSCore,int MechStrucSWinding,
				int MechStrucSFrame,int SCSegNum,double *Lsss,int STCElemNum,
				double MASSw,int ModeMax,double FreqMin,double FreqMax,
				double AngleF1stdot,double FrameEX,double FramePRXY,double FrameDENS,
				int FrameSSIZE,double FrameESIZE,int FlagSCoreFrame,double DeltFC,
				double Lsca,int NumFixDot,double **FixDotXYZR ,cbGetString cb);
	//--------------------------------------------------------------------------------------------------

	//------------------------------------------------------------------------------------------------
	//	char    *OutputPath	:	//���·������D:\\
	//	double	D1			;	//�������Ĵ�·�����Ч�⾶(mm)
	//	double	DI1			;	//���������ھ�(mm)
	//	double	SCL			;	//�������ĳ��ȣ�������������(mm)
	//	int		Q1			;	//���Ӳ���
	//	int		NK1			;	//�������ľ���ͨ�������
	//	double	BK1			;	//�������ľ���ͨ������(mm)
	//	double	Kfes		;	//�������ĵ�ѹϵ��
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
	//	int		Z1  		;	//����ÿ�۵�����������
	//	int		SCoilType 	;	//���ӵ�������
	//							//	01) �⵼��Ϊ1��
	//							//	02) Բ����Ϊ2.
	//	int		N1 			;	//���ӱ⵼�ߵĲ��Ƹ���
	//	double	Dsci 		;	//����Բ���ߵ�����ֱ��(mm)
	//	double	A1S 		;	//���ӱ⵼�ߵ�խ�߳ߴ�(mm)
	//	double	B1S 		;	//���ӱ⵼�ߵĿ�߳ߴ�(mm)
	//	int		SWireCol	;	//������Ȧ��⵼������
	//	double	DETAG1 		;	//���Ӳ�Ш��mm��
	//	double	dSConductor	;	//��⵼�߾�Ե˫�ߺ�� (mm)
	//	double	dSCoil		;	//�����Ѽ��Ե˫�ߺ�� (mm)
	//	double	dSLiner		;	//����Եؾ�Ե˫�ߺ�� (mm)
	//							//  01) ����ɢǶ����ʱ����۾�Ե���Եؾ�Ե����˫�ߺ��,
	//							//  02) ���ӳ�������ʱ����۾�Ե���Եؾ�Ե����˫�ߺ��,
	//							//  03) ����ɢǶ����ʱ���Ӳ۾�Ե���Եؾ�Ե����Χ��Ϊ�����˫����Ȧ��,
	//							//  04) ���ӳ�������ʱ���Ӳ۾�Ե���Եؾ�Ե����Χ��Ϊ����ĵ�����Ȧ��.
	//	double	dSLiner2	;	//�����ż��Ե˫�ߺ�� (mm)
	//	double	dSWedgeDw	;	//Ш�µ������ (mm)
	//	double	dSLineBot	;	//�۵׵������ (mm)
	//	int		MechCalCont	;	//��е��������Ϳ��Ʋ���
	//							//  01)  1ʱΪ��е��ѧ�������㣻
	//							//  02)  2ʱΪ��еģ̬���Լ��㣻
	//							//  03)  3ʱΪг����Ӧ�񶯼��㣻
	//							//  04)  4ʱΪ˲̬��Ӧ�񶯼��㣻
	//							//  05)  5ʱΪг���������ָ�����㣻
	//							//  06)  6ʱΪ˲̬�������ָ�����㣻
	//							//  07)  7ʱΪг������������㣻
	//							//  08)  8ʱΪ˲̬����������㣻
	//	int		MechStrucSCore;	//��е�ṹ�ж������Ĵ��ڱ�־��
	//  						//  01)  0ʱΪ�����ǣ�
	//  						//  02)  1ʱΪҪ���ǣ�
	//	int	  MechStrucSWinding;//��е�ṹ�ж���������ڱ�־��
	//  						//  01)  0ʱΪ�����ǣ�
	//  						//  02)  1ʱΪҪ���ǣ�
	//	int		MechStrucSFrame;//��е�ṹ�ж��ӻ������ڱ�־��
	//  						//  01)  0ʱΪ�����ǣ�
	//  						//  02)  1ʱΪҪ���ǣ�
	//	int		SCSegNum;		//������о����
	//	double *Lsss	;		//����ÿ�εĳ������� mm
	//							//  01) ������о���ε����򳤶�(mm),������ͨ��۸�;
	//							//  02) ��Ϊһ������,��(NK1+1)��������,�ֱ�Ϊ��1����о����,��2����о����,...;
	//							//  03) ���ж�����оװ��ͼ�����ұߵ���о��Ϊ��1��,��������Ϊ��2��,��3��,.....
	//	double	MASSw	;		//����������������� kg
	//							//  01) ��ÿ���ϲ���²���Ȧ�ߵ�������.
	//	int		ModeMax     ;	//��ȡ�����ģ̬��
	//							//  01) �޻���ʱ��������100��150,
	//							//  02) �л���ʱ��������150��200.
	//	double	FreqMin		;	//��ȡ����Сģ̬Ƶ�� Hz
	//	double	FreqMax		;	//��ȡ�����ģ̬Ƶ�� Hz
	//	double	AngleF1stdot;	//���������Ŀռ��һ����Ļ�е�Ƕ�(��)
	//	double	FrameEX  	;	//���ӻ����ĵ���ģ�� Pa
	//	double	FramePRXY	;	//���ӻ����Ĳ� �� ��
	//	double	FrameDENS	;	//���ӻ����Ĳ����ܶ� kg/m^3
	//	int		FrameSSIZE	;	//�������񻮷�ʱ�ĵȼ�
	//  						//  01)  0ʱΪ���������񻮷֣�
	//  						//  02) �������񻮷�ʱ���뷶ΧΪ1-10��
	//	double	FrameESIZE	;	//�̶���Ԫ�߳�ʱ�ĵ�Ԫ�߳��ĳ��ȣ�mm��
	//  						//  01)  0ʱΪ�����Զ�����
	//	int		FlagSCoreFrame;	//�������ĺͻ������ӷ�ʽ��־��
	//  						//  01)  0ʱΪ�������Ĺ�ӯװ��ѹ�����;
	//  						//  02)  1ʱΪ��������ͨ���Ǽ����ӻ���;
	//	double	DeltFC		;	//�������ĺͻ����Ӵ��Ĺ�ӯ�� mm
	//  						//  01) Ҫ���ǹ�ӯ��ʱ����ֵ�����㣻
	//  						//  02) �����ǹ�ӯ��ʱ����0,����Ϊ���ԽӴ���
	//	double	Lsca		;	//�붨�ӹǼܻ���ѹȦ��Ӵ���ͨ��۸ֵ����򳤶� mm
	//	int     NumFixDot 	;	//�̶�Լ���������
	//							//  01)  0ʱΪ�����ǰ�װ�̶���
	//							//  02) ��ֵ����0ʱ���²����Ŷ�ȡ.
	//	double **FixDotXYZR	;	//�̶�Լ������������� mm
	//							//  01) ��NumFixDot�У���04�У�
	//							//  02) ��01��ΪCX���ꣻ
	//							//  03) ��02��ΪCY���ꣻ
	//							//  04) ��03��ΪCZ���ꣻ
	//							//  05) ��04��ΪԼ���뾶��
	//  cbGetString cb      ;   //�ص�����  
	//------------------------------------------------------------------------------------------------
};
