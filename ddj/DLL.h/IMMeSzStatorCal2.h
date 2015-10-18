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

//机械分析-定子（数值法）

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
	//	char    *OutputPath	:	//输出路径，如D:\\
	//	double	D1			;	//定子铁心磁路计算等效外径(mm)
	//	double	DI1			;	//定子铁心内径(mm)
	//	double	SCL			;	//定子铁心长度（包括径向风道）(mm)
	//	int		Q1			;	//定子槽数
	//	int		NK1			;	//定子铁心径向通风道数量
	//	double	BK1			;	//定子铁心径向通风道宽度(mm)
	//	double	Kfes		;	//定子铁心叠压系数
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
	//	int		Z1  		;	//定子每槽导体数（根）
	//	int		SCoilType 	;	//定子导线类型
	//							//	01) 扁导线为1；
	//							//	02) 圆导线为2.
	//	int		N1 			;	//定子扁导线的并绕根数
	//	double	Dsci 		;	//定子圆导线的裸线直径(mm)
	//	double	A1S 		;	//定子扁导线的窄边尺寸(mm)
	//	double	B1S 		;	//定子扁导线的宽边尺寸(mm)
	//	int		SWireCol	;	//定子线圈裸扁导线排数
	//	double	DETAG1 		;	//定子槽楔厚（mm）
	//	double	dSConductor	;	//裸扁导线绝缘双边厚度 (mm)
	//	double	dSCoil		;	//导线匝间绝缘双边厚度 (mm)
	//	double	dSLiner		;	//绕组对地绝缘双边厚度 (mm)
	//							//  01) 定子散嵌绕组时输入槽绝缘（对地绝缘）的双边厚度,
	//							//  02) 定子成型绕组时输入槽绝缘（对地绝缘）的双边厚度,
	//							//  03) 定子散嵌绕组时定子槽绝缘（对地绝缘）包围作为整体的双层线圈边,
	//							//  04) 定子成型绕组时定子槽绝缘（对地绝缘）包围作为整体的单层线圈边.
	//	double	dSLiner2	;	//导线排间绝缘双边厚度 (mm)
	//	double	dSWedgeDw	;	//楔下垫条厚度 (mm)
	//	double	dSLineBot	;	//槽底垫条厚度 (mm)
	//	int		MechCalCont	;	//机械计算的类型控制参数
	//							//  01)  1时为机械力学参数计算；
	//							//  02)  2时为机械模态特性计算；
	//							//  03)  3时为谐波响应振动计算；
	//							//  04)  4时为瞬态响应振动计算；
	//							//  05)  5时为谐波电磁噪声指数计算；
	//							//  06)  6时为瞬态电磁噪声指数计算；
	//							//  07)  7时为谐波电磁噪声计算；
	//							//  08)  8时为瞬态电磁噪声计算；
	//	int		MechStrucSCore;	//机械结构中定子铁心存在标志数
	//  						//  01)  0时为不考虑；
	//  						//  02)  1时为要考虑；
	//	int	  MechStrucSWinding;//机械结构中定子绕组存在标志数
	//  						//  01)  0时为不考虑；
	//  						//  02)  1时为要考虑；
	//	int		MechStrucSFrame;//机械结构中定子机座存在标志数
	//  						//  01)  0时为不考虑；
	//  						//  02)  1时为要考虑；
	//	int		SCSegNum;		//定子铁芯段数
	//	double *Lsss	;		//铁心每段的长度数组 mm
	//							//  01) 定子铁芯各段的轴向长度(mm),不包括通风槽钢;
	//							//  02) 它为一个数组,有(NK1+1)个数据行,分别为第1段铁芯长度,第2段铁芯长度,...;
	//							//  03) 其中定子铁芯装配图上最右边的铁芯段为第1段,依次向左为第2段,第3段,.....
	//	double	MASSw	;		//单个定子绕组的质量 kg
	//							//  01) 即每槽上层和下层线圈边的质量和.
	//	int		ModeMax     ;	//提取的最大模态数
	//							//  01) 无机座时建议输入100到150,
	//							//  02) 有机座时建议输入150到200.
	//	double	FreqMin		;	//提取的最小模态频率 Hz
	//	double	FreqMax		;	//提取的最大模态频率 Hz
	//	double	AngleF1stdot;	//磁力采样的空间第一个点的机械角度(度)
	//	double	FrameEX  	;	//定子机座的弹性模量 Pa
	//	double	FramePRXY	;	//定子机座的泊 松 比
	//	double	FrameDENS	;	//定子机座的材料密度 kg/m^3
	//	int		FrameSSIZE	;	//智能网格划分时的等级
	//  						//  01)  0时为非智能网格划分；
	//  						//  02) 智能网格划分时输入范围为1-10；
	//	double	FrameESIZE	;	//固定单元边长时的单元边长的长度（mm）
	//  						//  01)  0时为程序自动处理
	//	int		FlagSCoreFrame;	//定子铁心和机座链接方式标志数
	//  						//  01)  0时为定子铁心过盈装配压入机座;
	//  						//  02)  1时为定子铁心通过骨架链接机座;
	//	double	DeltFC		;	//定子铁心和机座接触的过盈量 mm
	//  						//  01) 要考虑过盈量时输入值大于零；
	//  						//  02) 不考虑过盈量时输入0,即认为刚性接触；
	//	double	Lsca		;	//与定子骨架或者压圈相接触的通风槽钢的轴向长度 mm
	//	int     NumFixDot 	;	//固定约束点的数量
	//							//  01)  0时为不考虑安装固定；
	//							//  02) 该值大于0时以下参数才读取.
	//	double **FixDotXYZR	;	//固定约束点的坐标数组 mm
	//							//  01) 共NumFixDot行，共04列；
	//							//  02) 第01列为CX坐标；
	//							//  03) 第02列为CY坐标；
	//							//  04) 第03列为CZ坐标；
	//							//  05) 第04列为约束半径；
	//  cbGetString cb      ;   //回调函数  
	//------------------------------------------------------------------------------------------------
};
