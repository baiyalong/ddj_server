#pragma once

#include "errno.h"
#include <iostream>
#include <fstream>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <math.h>
using namespace std;

//电磁力波预测

class CIMPredictFr
{

public:

	//--------------------------------------------------------------------------------------------------
		void IMPredictFrMainCal(int P,int Q1,int Q2,double N_r,double F,int Frmax,char *OutputPath,cbGetString cb);
	//--------------------------------------------------------------------------------------------------

	//----------------------------------------------------------------------------
	//	char *OutputPath; //输出路径，如D:\\
	//	int		P		; //电机极数
	//	double	F		; //电压频率(Hz)
	//	int		Q1		; //定子槽数
	//	int		Q2		; //转子槽数
	//	double	N_r		; //转子转速(r/min)
	//	int		Frmax	; //力波最高阶次(最小值是0，最大值是20)
	//  cbGetString cb      ;   //回调函数  
	//----------------------------------------------------------------------------

};
