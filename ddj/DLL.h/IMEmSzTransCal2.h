#pragma once

#include "errno.h"
#include <iostream>
#include <fstream>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <math.h>
using namespace std;

//电磁分析-暂态（数值法）

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
	//	char	*OutputPath	:	//输出路径（不包括最后的斜杠），如D:
	//	int		FlagEMType0	:	//电机类型标志数
	//							//	01)	1时为鼠笼型转子；
	//							//	02)	2时为绕线型转子；
	//	int		M			;	//相数
	//	int		P			;	//极数
	//	double	U			;	//定子线电压有效值(V)
	//	double	F			;	//定子线电压的频率(Hz)
	//	double	D1			;	//定子铁心磁路计算等效外径(mm)
	//	double	DI1			;	//定子铁心内径(mm)
	//	double	SCL			;	//定子铁心长度（包括径向风道）(mm)
	//	int		Q1			;	//定子槽数
	//	int		NK1			;	//定子铁心径向通风道数量
	//	double	BK1			;	//定子铁心径向通风道宽度(mm)
	//	double	Kfes		;	//定子铁心叠压系数
	//	int		IKRS		;	//定子铁心硅钢牌号代码
	//							//	01) 50W470时为1；
	//							//	02) 50W540时为2；
	//	double	SCCONDUCTY	;	//定子铁心叠片的电导率，单位为(S/m)
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
	//	double	SCCONDUCTY	;	//	定子铁心叠片的电导率，单位为(S/m)
	//	int		JC 			;	//  定子绕组接法代码
	//							//	01) Ｙ时为0；
	//							//	02) △时为1；
	//	int		swlay 		;	//  绕组层数
	//							//	01) 单层绕组时为1；
	//							//	02) 双层绕组时为2.
	//	int		A1  		;	//  并联路数
	//	int		Y1  		;	//  线圈截距  （槽数）
	//	int		Z1  		;	//  每槽导体数（根）
	//	double	CLZ1 		;	//  线圈半匝长（mm）
	//	double	Srv 		;	//	线圈电阻率（ohm*mm^2/m）
	//	double	DETAG1 		;	//	定子槽楔厚（mm）
	//	double	USPW 		;	//	定子槽楔比磁导(即定子槽楔的磁导率与真空磁导率的比值)
	//	int		SCoilType 	;	//	导线类型
	//							//	01) 扁导线为1；
	//							//	02) 圆导线为2.
	//	int		N1 			;	//  扁导线的并绕根数
	//	double	Dsci 		;	//	圆导线-1的裸线直径(mm)
	//	double	A1S 		;	//	扁导线的窄边尺寸(mm)
	//	double	B1S 		;	//	扁导线的宽边尺寸(mm)
	//	double	AA1  		;	//	线圈端部单端伸出槽口长(mm)
	//	double	LL 			;	//	单边端部伸出轴向投影长(mm)
	//	int Flag_SPhaseSequ ;	//  定子绕组相序方向标志数
	//							//	01) 从定子绕组出线端看去顺时针方向时为+1；
	//							//	02) 从定子绕组出线端看去逆时针方向时为-1.
	//	int	clockwise_stator;	//  定子槽排序方向标志数
	//							//	01) 从定子绕组出线端看去顺时针排序时为+1；
	//							//	02) 从定子绕组出线端看去逆时针排序时为-1.
	//	int	SCShape  		;	//  定子线圈形状标志数
	//							//	01) 从出线端看且轴心在线圈下方；
	//							//	02) 从鼻  端看且轴心在线圈上方；
	//							//	03) 入槽边在左边时为+1；
	//							//	04) 入槽边在右边时为-1.
	//	int SWCType			;	//	定子绕组连接类型代码
	//							//	01) 显极接法时为1；
	//							//	02) 庶极接法时为2.
	//	double **SWCFinArray;	//	定子线圈输入框存储矩阵
	//							//	01) 共(Q*wlay/2)行，共4列
	//							//		01.01)  第i行第j列元素对应于输入框中第i行第j列元素；
	//							//	02) 每一行表示一个线圈
	//							//		02.01)  矩阵行号不一定和该行表示的线圈入槽号一致；
	//							//	03) 第i行第01列表示第i号线圈的入槽号
	//							//		03.01)  单层绕组时线头连接入槽边槽号，如5、12；
	//							//		03.02)  双层绕组时线头连接入槽边槽号，如5、12；
	//							//		03.03)  单层绕组时线头连接入槽边在输入框中显示为(入槽边槽号) ，如5 、12 ；
	//							//		03.04)  双层绕组时线头连接入槽边在输入框中显示为(入槽边槽号T)，如5T、12T；
	//							//	04) 第i行第02列表示第i号线圈的出槽号
	//							//		04.01)  单层绕组时线尾连接出槽边槽号的负值，如-5、-12；
	//							//		04.02)  双层绕组时线尾连接出槽边槽号的负值，如-5、-12；
	//							//		04.03)  单层绕组时线尾连接出槽边在输入框中显示为(出槽边槽号) ，如5 、12 ；
	//							//		04.04)  双层绕组时线尾连接出槽边在输入框中显示为(出槽边槽号B)，如5B、12B；
	//							//	05) 第i行第03列的元素表示第i号线圈所属相路号
	//							//		05.01)  表示线圈属于某相的第几号支路；
	//							//		05.02)  正值表示线圈顺接，即顺绕组连接方向先入槽线圈边再出槽线圈边；
	//							//		05.03)  负值表示线圈反接，即顺绕组连接方向先出槽线圈边再入槽线圈边；
	//							//		05.04)  属于A相的支路号从   1开始，如
	//							//				    1表示线圈属于A相的第1条支路且顺接，
	//							//				   -2表示线圈属于A相的第2条支路且反接，······；
	//							//		05.05)  属于B相的支路号从1001开始，如
	//							//				-1001表示线圈属于B相的第1条支路且反接，
	//							//				 1002表示线圈属于B相的第2条支路且顺接，······；
	//							//		05.06)  属于C相的支路号从2001开始，如
	//							//				 2001表示线圈属于C相的第1条支路且顺接，
	//							//				-2002表示线圈属于C相的第2条支路且反接，······；
	//							//		05.07)       1在输入框中显示为 A1，   -2在输入框中显示为-A2；
	//							//		05.08)    1001在输入框中显示为 B1，-1002在输入框中显示为-B2；
	//							//		05.09)   -2001在输入框中显示为-C1， 2002在输入框中显示为 C2；
	//							//	06) 第i行第04列表示第i号线圈的匝数
	//							//		06.01)  线圈匝数均为正整数；
	//							//		06.02)  在输入框中按匝数大小实际显示，如5、12；
	//							//	07) 第i行第05列表示第i号线圈的半匝长(mm)
	//							//		07.01)  线圈半匝长均为正实数，单位为mm；
	//							//		07.02)  在输入框中按半匝长大小实际显示，如126.500；
	//	double	DO2 		;	//	转子铁心外径(mm)
	//	double	DI2 		;	//	转子铁心内径(mm)
	//	double	RCL 		;	//	转子铁心长度(mm)
	//	int		Q2 			;	//	转子槽数
	//	int		NK2 		;	//	转子径向通风道个数
	//	double	BK2 		;	//	转子径向通风道宽度(mm)
	//	double	BSK 		;	//	转子斜槽周向长(mm)
	//	double	Kfer 		;	//	转子铁心叠压系数
	//	int		IKRR 		;	//	转子铁心硅钢牌号代码
	//							//	01) 50W470时为1；
	//							//	02) 50W540时为2；
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
	//	double	RCCONDUCTY 	;	//	转子铁心叠片的电导率，单位为(S/m)
	//	int		JCR 		;	// 	转子绕组接法代码
	//							//	01) Ｙ时为0；
	//							//	02) △时为1；
	//	int		A2  		;	// 	并联路数
	//	int		rwlay 		;	// 	绕组层数
	//							//	01) 单层绕组时为1；
	//							//	02) 双层绕组时为2.
	//	int		Z2  		;	// 	绕组每槽导体数（根）
	//	int		Y2  		;	// 	线圈节距（槽数）
	//	double	CLZ2 		;	// 	线圈半匝长（mm）
	//	double	Rrv 		;	//	线圈电阻率
	//	double	DETAG2 		;	//	转子槽楔厚(mm)
	//	double	URPW 		;	//	转子槽楔比磁导
	//							//	01) 转子槽楔磁导率与真空磁导率的比值；
	//	int		RCoilType 	;	//	导线类型
	//							//	01) 扁导线为1；
	//							//	02) 圆导线为2；
	//	int		NR  		;	//	扁导线的并绕根数
	//	double	Drci 		;	//	圆导线的内径尺寸
	//	double	A2R 		;	//	扁导线的宽边尺寸
	//	double	B2R 		;	//	扁导线的窄边尺寸
	//	int Flag_ROutlet 	;	//	定转出线端标志数
	//							//	01) 当转子绕组出线端(双端出线时为前端)和定子绕组出线端为同侧时为+1；
	//							//	02) 当转子绕组出线端(双端出线时为前端)和定子绕组出线端为反侧时为-1.
	//	int Flag_RPhaseSequ ;	//	转子绕组相序方向标志数(*****非读取参数*****)
	//							//	01) 从转子绕组出线端看去顺时针方向时为+1；
	//							//	02) 从转子绕组出线端看去逆时针方向时为-1.
	//	int	clockwise_rotor ;	//  转子槽排序方向标志数
	//							//	01) 从转子绕组出线端看去顺时针排序时为+1；
	//							//	02) 从转子绕组出线端看去逆时针排序时为-1.
	//	int	RCShape  		;	//  转子线圈形状标志数
	//							//	01) 从出线端看且轴心在线圈下方；
	//							//	02) 从鼻  端看且轴心在线圈上方；
	//							//	03) 入槽边在左边时为+1；
	//							//	04) 入槽边在右边时为-1.
	//	int RWCType 		;	//	转子绕组连接类型代码
	//							//	01) 显极接法时为1；
	//							//	02) 庶极接法时为2.
	//	double **RWCFinArray  ;	//	转子线圈输入框存储矩阵
	//							//	01) 共(Q*wlay/2)行，共4列
	//							//		01.01)  第i行第j列元素对应于输入框中第i行第j列元素；
	//							//	02) 每一行表示一个线圈
	//							//		02.01)  矩阵行号不一定和该行表示的线圈入槽号一致；
	//							//	03) 第i行第01列表示第i号线圈的入槽号
	//							//		03.01)  单层绕组时线头连接入槽边槽号，如5、12；
	//							//		03.02)  双层绕组时线头连接入槽边槽号，如5、12；
	//							//		03.03)  单层绕组时线头连接入槽边在输入框中显示为(入槽边槽号) ，如5 、12 ；
	//							//		03.04)  双层绕组时线头连接入槽边在输入框中显示为(入槽边槽号T)，如5T、12T；
	//							//	04) 第i行第02列表示第i号线圈的出槽号
	//							//		04.01)  单层绕组时线尾连接出槽边槽号的负值，如-5、-12；
	//							//		04.02)  双层绕组时线尾连接出槽边槽号的负值，如-5、-12；
	//							//		04.03)  单层绕组时线尾连接出槽边在输入框中显示为(出槽边槽号) ，如5 、12 ；
	//							//		04.04)  双层绕组时线尾连接出槽边在输入框中显示为(出槽边槽号B)，如5B、12B；
	//							//	05) 第i行第03列的元素表示第i号线圈所属相路号
	//							//		05.01)  表示线圈属于某相的第几号支路；
	//							//		05.02)  正值表示线圈顺接，即顺绕组连接方向先入槽线圈边再出槽线圈边；
	//							//		05.03)  负值表示线圈反接，即顺绕组连接方向先出槽线圈边再入槽线圈边；
	//							//		05.04)  属于A相的支路号从   1开始，如
	//							//					1表示线圈属于A相的第1条支路且顺接，
	//							//					-2表示线圈属于A相的第2条支路且反接，······；
	//							//		05.05)  属于B相的支路号从1001开始，如
	//							//				-1001表示线圈属于B相的第1条支路且反接，
	//							//					1002表示线圈属于B相的第2条支路且顺接，······；
	//							//		05.06)  属于C相的支路号从2001开始，如
	//							//					2001表示线圈属于C相的第1条支路且顺接，
	//							//				-2002表示线圈属于C相的第2条支路且反接，······；
	//							//		05.07)       1在输入框中显示为 A1，   -2在输入框中显示为-A2；
	//							//		05.08)    1001在输入框中显示为 B1，-1002在输入框中显示为-B2；
	//							//		05.09)   -2001在输入框中显示为-C1， 2002在输入框中显示为 C2；
	//							//	06) 第i行第04列表示第i号线圈的匝数
	//							//		06.01)  线圈匝数均为正整数；
	//							//		06.02)  在输入框中按匝数大小实际显示，如5、12；
	//							//	07) 第i行第05列表示第i号线圈的半匝长(mm)
	//							//		07.01)  线圈半匝长均为正实数，单位为mm；
	//							//		07.02)  在输入框中按半匝长大小实际显示，如126.500；
	//							//	08) 乙类波绕组时说明
	//							//		08.01)  输入框中属于相同支路的线圈依次排列；
	//							//		08.02)  输入框中每条支路均从前端开始按照绕组联接顺序依次输入线圈参数；
	//							//		08.03)  翻层槽之前的线圈和翻层槽之后的线圈均按翻层槽之前的线圈形状表示；
	//							//		08.04)  翻层槽之前的线圈顺反接和翻层槽之后的线圈顺反接相同；
	//							//		08.05)  翻层槽所在的线圈匝数均为整线圈匝数；
	//	double CLB 			;	//	导条长(mm)
	//	double DR 			;	//	端环平均直径(mm)
	//	double Be 			;	//	端环宽度(mm)
	//	double He 			;	//	端环高度(mm)
	//	double rob 			;	//	导条电阻率（ohm*mm^2/m）
	//	double roe 			;	//	端环电阻率（ohm*mm^2/m）
	//	double	WKKS 		;	//电机旋转部分整体的转动惯量（kg·m^2）
	//	double	PFWP 		;	//机械损耗（W）
	//							//	01)	输入时为kW，存储时为W；
	//	double	WindLoss 	;	//参考转速时测量的风扇损耗 (W)
	//							//	01)	输入时为kW，存储时为W；
	//	double	ReferSpeed 	;	//参考转速 (r/min)
	//	int	    FlagRMove 	;	//转子运动标志参数
	//							//	01)  0时为转子恒速；
	//							//	02)  1时为转子变速(单个仿真状态中为转子差值变输出)；
	//	int		RunFlag0 	;	//转子负载变量标志参数
	//							//	01)  0时为转子负载随时间而变化；
	//							//	02)  1时为转子负载随转速而变化；
	//	int		RunFlag2 	;	//转子负载类型标志参数
	//							//	01)  0时为转子负载为转矩；
	//							//	02)  1时为转子负载为功率；
	//	int		RunNums 	;	//转子负载数量参数
	//	double *RunX 		;	//转子负载自变量数组
	//							//	01) 共RunNums个元素；
	//							//	02) (i)为第i个仿真状态点的仿真的运行时间(s)或者转速(r/min)；
	//							//	03) RunFlag0为0时为时间(s)；
	//							//	04) RunFlag0为1时为转速(r/min)；
	//	double *RunY 		;	//转子负载应变量数组
	//							//	01) 共RunNums个元素；
	//							//	02) (i)为第i个仿真状态的负载转矩或者负载功率；
	//							//	03) RunFlag2为0时为负载转矩(N*m)；
	//							//	04) RunFlag2为1时为负载功率(W)；
	//							//	05) 功率输入时单位kW，变量存储时单位W；
	//	double	SimTotalTime;	//仿真计算的总时间（s）
	//	double	step 		;	//时间步长（s）
	//	double RequiredPrecision//计算精度
	//	double	InitAnglPos ;	//从0到仿真起始时间内转子坐标系X轴顺定子相序方向转过的机械角度(度)
	//	double  InitNr 		;	//仿真起始时刻(或每步起始时刻)转子的转速(r/min)
	//							//	01）正方向为顺定子相序方向；
	//	int		Flag_Us_line;	//定子机端电压类型标志数
	//							//	01)  0时为利用输入线电压的有效值；
	//							//	02)  1时为利用输入线电压数据文件；
	//	double	U 			;	//定子线电压有效值(V)
	//	double	F 			;	//定子线电压的频率(Hz)
	//	int		N_Us_line 	;	//线电压波形数据的数据点数
	//	double *Time_Us_line;	//线电压波形数据的时间数组
	//							//	01) 共N_Us_line个元素；
	//							//	02)	时间单位为s；
	//	double **Us_line 	;	//线电压波形数据
	//							//	01) 共N_Us_line行；
	//							//	02) 共02列；
	//							//	03) 第01列为Uab，第02列为Ubc；
	//							//	04)	电压单位为V；
	//	int		Numb_AixalSimu;	//轴向分段数量
	//							//	01）单截面为1；
	//							//	02）多截面>=2；
	//	int FlagSteadyEstimate;	//稳态判断标志数
	//							//	01） 0时为不必稳态判断；
	//							//	02） 1时为自动稳态判断；
	//	double ErrorSteadyEstimate;	//稳态判断精度
	//							//	01）稳态判断时两个相邻周期的基波幅值的偏差限制
	//	int		Flag_Fourier;	//计算Fourier级数的系数标志数
	//							//	01)  0时为不计算；
	//							//	02)  1时为要计算；
	//	int	Flag_FourierMethod;	//计算Fourier级数的方法
	//							//	01)  0时为法一，即利用FFT2计算；
	//							//	02)  1时为法二，即利用Fourier级数的实数形式的表达式计算；
	//	double	InitTime_Fourier			;	//计算Fourier级数的起始时间(s)
	//	double	Fourier_FreqMax				;	//计算Fourier级数的最高频率(Hz)
	//	double	Fourier_FreqResolution		;	//计算Fourier级数的分辨频率(Hz)
	//	int		Flag_AirB_Fourier			;	//计算气隙磁密谐波的标志数
	//											//	01)  0时为不计算；
	//											//	02)  1时为要计算；
	//	int		Fourier_AirB_ModeOrder		;	//计算气隙磁密谐波最高阶次
	//	double	Fourier_AirB_AmplMin		;	//计算气隙磁密谐波最小幅值(T)
	//	int		Flag_AirF_Fourier			;	//计算气隙磁力谐波的标志数
	//											//	01)  0时为不计算；
	//											//	02)  1时为要计算；
	//	int		Fourier_AirF_ModeOrder		;	//计算气隙磁力谐波最高阶次
	//	double	Fourier_AirF_AmplMin		;	//计算气隙磁力谐波最小幅值(Pa)
	//	int		Flag_RedefineStep			;	//根据Fourier分析需要的采样频率重新确定步长标志数
	//											//	01)  0时为不重新确定步长；
	//											//	02)  1时为要重新确定步长；
	//	int		Flag_Fourier_2powN_FFT2		;	//采样点数是2的整数次幂标志数
	//											//	01)  0时为不设定；
	//											//	02)  1时为要设定；
	//											//	03) FFT2分析时该项才起作用；
	//	double	drmax_rotatedNode_;				//气隙隔离带内圆的直径(mm)
	//	double	d_GapOuter_							  ;	//气隙隔离带的外圆直径(mm)
	//	int	number_of_rotating_node_in_GapSeparateBar_;	//气隙隔离带内圆上的一圈旋转的实节点总数
	//	int	total_of_NODE_in_Rotor_all_     		  ;	//转子上节点总数
	//	int	total_of_fixedELEMENT_in_Rotor_ 		  ;	//转子上固定单元总数
	//	int	total_of_NODE_in_Stator_all_    		  ;	//定子上节点总数
	//	int	total_of_fixedELEMENT_in_Stator_		  ;	//定子上固定单元总数
	//	int	total_of_NODE_all_		 ;					//节点总数
	//	int	total_of_fixedELEMENT_	 ;					//固定单元总数
	//	int	total_of_variableELEMENT_;					//可变单元总数
	//	int	total_of_ELEMENT_        ;					//单元总数
	//	double	*x_pos_ ;								//节点的X坐标值（单位：mm）
	//	double	*y_pos_ ;								//节点的Y坐标值（单位：mm）
	//	int		total_of_rotatedNODEs_	;				//旋转节点总数
	//	int		*num_of_rotatedNODE_	;				//存贮旋转节点的数组
	//	int		*total_of_NODEs_on_firstBoundaryLine_;	//第一类边界条件各段线上的节点总数
	//	int		*num_of_firstNODE_					 ;	//第一类边界条件线上的节点编号
	//	int		total_of_NODES_on_Border_Rotor_ ;		//转子上的周期性边界的节点总数(单边)
	//	int		total_of_NODES_on_Border_Stator_;		//定子上的周期性边界的节点总数(单边)
	//	int		*num_of_NODES_on_Border_Real_   ;		//存贮周期性边界实节点的数组
	//	int		*num_of_NODES_on_Border_Virtual_;		//存贮周期性边界虚节点的数组
	//	double drmax_rotatedNode__;						//气隙隔离带内圆的直径(mm)
	//	double d_GapOuter__ 	  ;						//气隙隔离带的外圆直径(mm)
	//	int	number_of_rotating_node_in_GapSeparateBar__;//气隙隔离带内圆上一圈旋转的节点总数
	//	int	total_of_NODE_in_Rotor__				   ;//转子上节点总数
	//	int	total_of_fixedELEMENT_in_Rotor__		   ;//转子上固定单元总数
	//	int	total_of_NODE_in_Stator__				   ;//定子上节点总数
	//	int	total_of_fixedELEMENT_in_Stator__		   ;//定子上固定单元总数
	//	int		*NodeNum_of_GapInner__  ;				//存放气隙隔离带内圆上的节点编号
	//	int		*NodeNum_of_GapOuter__  ;				//存放气隙隔离带外圆上的节点编号
	//	int		*ipoint__         		;				//单元的第i号节点的编号
	//	int		*jpoint__        		;				//单元的第j号节点的编号
	//	int		*kpoint__         		;				//单元的第k号节点的编号
	//	double	*area_of_ELEMENT__		;				//单元的面积(平方毫米) 
	//	int		*MatNumber__     		;				//单元的材料号
	//	int		*ElemTypeNumber__ 		;				//单元的类型号
	//	double	*x_pos__ ;								//节点的X坐标值//单位：mm
	//	double	*y_pos__ ;								//节点的Y坐标值//单位：mm
	//	int		total_of_rotatedNODEs__ ;				//旋转节点总数
	//	int		*num_of_rotatedNODE__   ;				//存贮旋转节点的数组
	//	int		*total_of_NODEs_on_firstBoundaryLine__; //第一类边界条件各段线上的节点总数
	//	int		*num_of_firstNODE__		;				//第一类边界条件线上的节点编号
	//----------------------------------------------------------------------------------------------------
};
