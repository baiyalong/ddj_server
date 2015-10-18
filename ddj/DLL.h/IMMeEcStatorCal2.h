#ifndef  __IMMeEcStatorCal_HHHH__
#define  __IMMeEcStatorCal_HHHH__

#include <iostream>
#include <fstream>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <math.h>
using namespace std;

//机械分析-定子（解析法）

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
	//	char   *OutputPath	:	//输出文件的路径，如D:\\
	//	int		P			;	//极对数
	//	double	DI1			;	//定子铁心内圆直径(mm)
	//	double	D1			;	//定子铁心外圆直径(mm)
	//	double	SCL			;	//定子铁心轴向长度(mm)
	//	int		Q1			;	//定子槽数
	//	int		NK1			;	//定子铁心径向通风道个数
	//	double	BK1			;	//定子铁心径向通风道宽度(mm)
	//	double	Kfes		;	//定子铁心叠压系数
	//	int		SSlotType	;	//定子槽型代码
	//							//	01) 全开口矩形槽时为1；
	//							//	02) 半开口矩形槽时为2；
	//							//	03) 半开口圆底槽时为3.
	//	double	BS0			;	//定子冲片槽口宽(mm)
	//	double	BS1			;	//定子冲片槽沟宽(mm)
	//	double	BS2			;	//定子冲片槽底宽(mm)
	//	double	HS0			;	//定子冲片槽口高(mm)
	//	double	HS1			;	//定子冲片槽沟高(mm)
	//	double	HS2			;	//定子冲片槽体高(mm)
	//	int		swlay		;	//定子槽中线圈的层数
	//							//	01) 单层绕组时为1；
	//							//	02) 双层绕组时为2；
	//	int		Z1 			;	//定子绕组每槽导体数
	//							//	01) 每槽导体数是指有效导体数，即将并绕的股线看成一个根有效导体.
	//	double	A1S			;	//定子导线的裸线窄边尺寸(mm)
	//							//	01) 对成型绕组为裸线的窄边尺寸；
	//							//	02) 对散嵌绕组为裸线的直径；
	//	double	B1S			;	//定子导线的裸线宽边尺寸(mm)
	//							//	01) 对成型绕组为裸线的宽边尺寸；
	//							//	02) 对散嵌绕组时为0；
	//	int		N1 			;	//定子线圈并绕根数
	//	double	CLZ1		;	//定子线圈半匝长(mm)
	//	int     OrdeMax		;	//计算模态的最高阶次
	//	int		Ordefr0		;	//力波阶次
	//	double	Freqfr0		;	//力波频率(Hz)
	//	double	Amplfr0		;	//力波幅值(Pa)
	//	int		FlagCal		:	//计算功能标志数：0时为计算固有频率，1时为计算表面振动；2时为计算电磁噪声
	//  cbGetString cb      ;   //回调函数  
	//------------------------------------------------------------------------------------------------------
};

#endif;