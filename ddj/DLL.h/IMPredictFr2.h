#pragma once

#include "errno.h"
#include <iostream>
#include <fstream>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <math.h>
using namespace std;

//�������Ԥ��

class CIMPredictFr
{

public:

	//--------------------------------------------------------------------------------------------------
		void IMPredictFrMainCal(int P,int Q1,int Q2,double N_r,double F,int Frmax,char *OutputPath,cbGetString cb);
	//--------------------------------------------------------------------------------------------------

	//----------------------------------------------------------------------------
	//	char *OutputPath; //���·������D:\\
	//	int		P		; //�������
	//	double	F		; //��ѹƵ��(Hz)
	//	int		Q1		; //���Ӳ���
	//	int		Q2		; //ת�Ӳ���
	//	double	N_r		; //ת��ת��(r/min)
	//	int		Frmax	; //������߽״�(��Сֵ��0�����ֵ��20)
	//  cbGetString cb      ;   //�ص�����  
	//----------------------------------------------------------------------------

};
