#pragma once

#include "errno.h"
#include <iostream>
#include <fstream>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <math.h>
using namespace std;

//端部分析-定子（解析法）

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
	//	char	*OutputPath	:	//输出路径，如D:\\
	//	double	Pn_			;	//输出功率(kW)
	//	double	I1_			;	//定子线电流有效值(A)
	//	int		M_			;	//相数
	//	int		P_			;	//极数
	//	double	U_			;	//定子线电压有效值(V)
	//	double	F_			;	//定子线电压的频率(Hz)
	//	double	DI1_		;	//定子铁心内径(mm)
	//	double	SCL_		;	//定子铁心长度（包括径向风道）(mm)
	//	int		Q1_			;	//定子槽数
	//	int		NK1_		;	//定子铁心径向通风道数量
	//	double	BK1_		;	//定子铁心径向通风道宽度(mm)
	//	int		SSlotType_	;	//定子槽型代码
	//							//	01) 全开口矩形槽时为1；
	//							//	02) 半开口矩形槽时为2；
	//							//	03) 半开口圆底槽时为3；
	//	double	BS0_		;	//定子冲片槽口宽(mm)
	//	double	BS1_		;	//定子冲片槽沟宽(mm)
	//	double	BS2_		;	//定子冲片槽底宽(mm)
	//	double	HS0_		;	//定子冲片槽口高(mm)
	//	double	HS1_		;	//定子冲片槽沟高(mm)
	//	double	HS2_		;	//定子冲片槽  高(mm)
	//	double	DO2_ 		;	//转子铁心外径(mm)
	//	double	RCL_ 		;	//转子铁心长度(mm)
	//	int		Q2_ 		;	//转子槽数
	//	int		NK2_ 		;	//转子径向通风道个数
	//	double	BK2_ 		;	//转子径向通风道宽度(mm)
	//	double	BSK_ 		;	//转子斜槽周向长(mm)
	//	int		RSlotType_ 	; 	//转子槽型代码
	//							//	01) A型槽时为1，梨型槽；
	//							//	02) B型槽时为2，梯型槽；
	//							//	03) C型槽时为3，凸型槽；
	//							//	04) D型槽时为4，半凸型槽；
	//							//	05) E型槽时为5，斜肩梨型槽；
	//							//	06) F型槽时为6；
	//							//	07) G型槽时为7；
	//							//	08) H型槽时为8；
	//	double	BR0_ 		;	//转子冲片槽口宽(mm)
	//	double	BR1_ 		;	//转子冲片槽宽1 (mm)
	//	double	BR2_ 		;	//转子冲片槽宽2 (mm)
	//	double	BR3_ 		;	//转子冲片槽宽3 (mm)
	//	double	BR4_ 		;	//转子冲片槽宽4 (mm)
	//	double	HR0_ 		;	//转子冲片槽口高(mm)
	//	double	HR1_ 		;	//转子冲片槽高1 (mm)
	//	double	HR2_ 		;	//转子冲片槽高2 (mm)
	//	double	DETAG1_ 	;	//定子槽楔厚（mm）
	//	double	dSWedgeDw_	;	//定子槽楔下垫条厚度 (mm)
	//	double	dSLineBot_	;	//定子槽底的垫条厚度 (mm)
	//	double	AA1_  		;	//定子线圈端部单端伸出槽口长(mm)
	//	double	LL_ 		;	//定子单边端部伸出轴向投影长(mm)
	//	double	CLB_ 		;	//转子导条长(mm)
	//	double	DR_ 		;	//转子端环平均直径(mm)
	//	int		JC_ 		;	//定子绕组接法代码
	//							//	01) 星接时为0；
	//							//	02) 角接时为1；
	//	int		Z1_  		;	//定子每槽导体数（根）
	//	int		A1_  		;	//定子并联路数
	//	int		Y1_  		;	//定子线圈节距  （槽数）
	//	int		Me_			;	//定子端部端箍的数量
	//	double	Ae_			;	//定子端部端箍的横截面积 (mm^2)
	//  cbGetString cb      ;   //回调函数  
	//----------------------------------------------------------------------------
};
