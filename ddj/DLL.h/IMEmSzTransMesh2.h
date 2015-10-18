#pragma once

#include "errno.h"
#include <iostream>
#include <fstream>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <math.h>
using namespace std;

//电磁分析-暂态（数值法）->网格生成

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
	//	char	*OutputPath	:	//输出路径，如D:\\
	//	double	D1			;	//定子铁心磁路计算等效外径(mm)
	//	double	DI1			;	//定子铁心内径(mm)
	//	int		Q1			;	//定子槽数
	//	int		SSlotType	;	//定子槽型代码
	//							//	01) 全开口矩形槽时为1；
	//							//	02) 半开口矩形槽时为2；
	//							//	03) 半开口圆底槽时为3；
	//	double	BS0			;	//定子冲片槽口宽(mm)
	//	double	BS1			;	//定子冲片槽沟宽(mm)
	//	double	BS2			;	//定子冲片槽底宽(mm)
	//	double	HS0			;	//定子冲片槽口高(mm)
	//	double	HS1			;	//定子冲片槽沟高(mm)
	//	double	HS2			;	//定子冲片槽  高(mm)
	//	int		swlay 		;	//定子绕组层数
	//							//	01) 单层绕组时为1；
	//							//	02) 双层绕组时为2.
	//	double	USPW 		;	//定子槽楔比磁导(即定子槽楔的磁导率与真空磁导率的比值)
	//	double	DETAG1 		;	//定子槽楔厚（mm）
	//	double	DO2 		;	//转子铁心外径(mm)
	//	int		CalcuMult	;	//整圆为解域的倍数
	//	double	dSLiner		;	//绕组对地绝缘双边厚度 (mm)
	//  						//	01) 定子散嵌绕组时输入槽绝缘（对地绝缘）的双边厚度,
	//  						//	02) 定子成型绕组时输入槽绝缘（对地绝缘）的双边厚度,
	//  						//	03) 定子散嵌绕组时定子槽绝缘（对地绝缘）包围作为整体的双层线圈边,
	//  						//	04) 定子成型绕组时定子槽绝缘（对地绝缘）包围作为整体的单层线圈边.
	//	double	dSWedgeDw	;	//楔下垫条厚度 (mm)
	//	double	dSLineBot	;	//槽底垫条厚度 (mm)
	//	int		FlagSToothRi;	//定子齿内半径的标志数
	//							//	01)	 0时为按定子内径确定；
	//							//	02)	 1时为按输入内径确定
	//	int		SToothRiRow	;	//定子齿内半径数组元素数量
	//	double *SToothRi;       //定子齿内半径数组 (mm)
	//	int		ElemNumPerSArc;	//定子气隙边界上一个齿距对应的单元数量
	//	int		SmrtSizeStator;	//定子部分剖分等级
	//	int	  FlagSToothAddSlot;//定子齿上加辅助小槽标志数
	//							//	01)	 0时为不加；
	//							//	02)	 1时为要加；
	//	double SToothAddSlotWidth;//定子齿上加辅助小槽的槽口宽度 (mm)
	//	double SToothAddSlotHigth;//定子齿上加辅助小槽的槽体高度 (mm)
	//	int		FlagEMType0	:	//电机类型标志数
	//							//	01)	1时为鼠笼型转子；
	//							//	02)	2时为绕线型转子；
	//	double	DI2 		;	//	转子铁心内径(mm)
	//	int		Q2 			;	//	转子槽数
	//	int		RSlotType 	; 	//	转子槽型代码
	//							//	01) A型槽时为1，梨型槽；
	//							//	02) B型槽时为2，梯型槽；
	//							//	03) C型槽时为3，凸型槽；
	//							//	04) D型槽时为4，半凸型槽；
	//							//	05) E型槽时为5，斜肩梨型槽；
	//							//	06) F型槽时为6；
	//							//	07) G型槽时为7；
	//							//	08) H型槽时为8；
	//	double	BR0 		;	//	转子冲片槽口宽(mm)
	//	double	BR1 		;	//	转子冲片槽宽1 (mm)
	//	double	BR2 		;	//	转子冲片槽宽2 (mm)
	//	double	BR3 		;	//	转子冲片槽宽3 (mm)
	//	double	BR4 		;	//	转子冲片槽宽4 (mm)
	//	double	HR0 		;	//	转子冲片槽口高(mm)
	//	double	HR1 		;	//	转子冲片槽高1 (mm)
	//	double	HR2 		;	//	转子冲片槽高2 (mm)
	//	int		rwlay 		;	// 	绕组层数
	//							//	01) 单层绕组时为1；
	//							//	02) 双层绕组时为2.
	//	double	DETAG2 		;	//	转子槽楔厚(mm)
	//	double	URPW 		;	//	转子槽楔比磁导
	//							//	01) 转子槽楔磁导率与真空磁导率的比值；
	//	int		FlagAngleRSlot; //转子槽口沿圆周分布的标志数
	//							//	01)	 0时为要均分；
	//							//	02)	 1时为非均分；
	//	int		AngleRSlotRow;	//转子槽口中心线机械角度数组元素数量
	//	double *AngleRSlot	 ;  //转子槽口中心线机械角度数组 (度)
	//	int		SmrtSizeRotor;	//转子部分剖分等级
	//  cbGetString cb      ;   //回调函数  
	//------------------------------------------------------------------------------------------------
};
