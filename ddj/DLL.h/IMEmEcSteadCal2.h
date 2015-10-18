#pragma once

#include "errno.h"
#include <iostream>
#include <fstream>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <math.h>
using namespace std;

//电磁分析-稳态（解析法）

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
	//	char   *DI_Output_	:	//	输出文件的路径，如D:\\
	//	char   *DI_Review_	:	//	输出文件的路径，如D:\\
	//	int		FlagEMType0_;	//	电机类型标志数
	//							//	01)	1时为鼠笼型转子；
	//							//	02)	2时为绕线型转子；
	//	int		M_			;	//	相数
	//	int		P_			;	//	极数
	//	double	D1_			;	//	定子铁心磁路计算等效外径(mm)
	//	double	DI1_		;	//	定子铁心内径(mm)
	//	double	SCL_		;	//	定子铁心长度（包括径向风道）(mm)
	//	int		Q1_			;	//	定子槽数
	//	int		NK1_		;	//	定子铁心径向通风道数量
	//	double	BK1_		;	//	定子铁心径向通风道宽度(mm)
	//	double	Kfes_		;	//	定子铁心叠压系数
	//	int		IKRS_		;	//	定子铁心硅钢牌号代码
	//							//	01) 50W470时为1；
	//							//	02) 50W540时为2；
	//	double	SCCONDUCTY_	;	//	定子铁心叠片的电导率，单位为(S/m)
	//	int		SSlotType_	;	//	定子槽型代码
	//							//	01) 全开口矩形槽时为1；
	//							//	02) 半开口矩形槽时为2；
	//							//	03) 半开口圆底槽时为3；
	//	double	BS0_		;	//	定子冲片槽口宽(mm)
	//	double	BS1_		;	//	定子冲片槽沟宽(mm)
	//	double	BS2_		;	//	定子冲片槽底宽(mm)
	//	double	HS0_		;	//	定子冲片槽口高(mm)
	//	double	HS1_		;	//	定子冲片槽沟高(mm)
	//	double	HS2_		;	//	定子冲片槽  高(mm)
	//	double	a_El_		;	//	椭圆形长轴的长度超出定子内圆半径的部分和气隙长度的相对比值
	//	double	b_El_		;	//	椭圆形短轴的长度短于定子内圆半径的部分和气隙长度的相对比值
	//	int		JC_			;	//  定子绕组接法代码
	//							//	01) Ｙ时为0；
	//							//	02) △时为1；
	//	int		swlay_		;	//  绕组层数
	//							//	01) 单层绕组时为1；
	//							//	02) 双层绕组时为2.
	//	int		A1_ 		;	//  并联路数
	//	int		Y1_ 		;	//  线圈截距  （槽数）
	//	int		Z1_ 		;	//  每槽导体数（根）
	//	double	CLZ1_		;	//  线圈半匝长（mm）
	//	double	Srv_		;	//	线圈电阻率（ohm*mm^2/m）
	//	double	DETAG1_		;	//	定子槽楔厚（mm）
	//	double	USPW_		;	//	定子槽楔比磁导(即定子槽楔的磁导率与真空磁导率的比值)
	//	int		SCoilType_	;	//	导线类型
	//							//	01) 扁导线为1；
	//							//	02) 圆导线为2.
	//	int		N1_			;	//  扁导线的并绕根数
	//	double	Dsci_		;	//	圆导线-1的裸线直径(mm)
	//	double	A1S_		;	//	扁导线的窄边尺寸(mm)
	//	double	B1S_		;	//	扁导线的宽边尺寸(mm)
	//	double	AA1_ 		;	//	线圈端部单端伸出槽口长(mm)
	//	double	LL_			;	//	单边端部伸出轴向投影长(mm)
	//	int Flag_SPhaseSequ_;	//  定子绕组相序方向标志数
	//							//	01) 从定子绕组出线端看去顺时针方向时为+1；
	//							//	02) 从定子绕组出线端看去逆时针方向时为-1.
	//	int	clockwise_stator_;	//  定子槽排序方向标志数
	//							//	01) 从定子绕组出线端看去顺时针排序时为+1；
	//							//	02) 从定子绕组出线端看去逆时针排序时为-1.
	//	int	SCShape_ 		;	//  定子线圈形状标志数
	//							//	01) 从出线端看且轴心在线圈下方；
	//							//	02) 从鼻  端看且轴心在线圈上方；
	//							//	03) 入槽边在左边时为+1；
	//							//	04) 入槽边在右边时为-1.
	//	int SWCType_		;	//	定子绕组连接类型代码
	//							//	01) 显极接法时为1；
	//							//	02) 庶极接法时为2.
	//	double **SWCFinArray_;	//	定子线圈输入框存储矩阵
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
	//	double	DO2_		;	//	转子铁心外径(mm)
	//	double	DI2_		;	//	转子铁心内径(mm)
	//	double	RCL_		;	//	转子铁心长度(mm)
	//	int		Q2_			;	//	转子槽数
	//	int		NK2_		;	//	转子径向通风道个数
	//	double	BK2_		;	//	转子径向通风道宽度(mm)
	//	double	BSK_		;	//	转子斜槽周向长(mm)
	//	double	Kfer_		;	//	转子铁心叠压系数
	//	int		IKRR_		;	//	转子铁心硅钢牌号代码
	//							//	01) 50W470时为1；
	//							//	02) 50W540时为2；
	//	double	RCCONDUCTY_	;	//	转子铁心叠片的电导率，单位为m/(mm*mm*欧姆)，即(1E6(S/m))
	//	int		RSlotType_	; 	//	转子槽型代码
	//							//	01) A型槽时为1，梨型槽；
	//							//	02) B型槽时为2，梯型槽；
	//							//	03) C型槽时为3，凸型槽；
	//							//	04) D型槽时为4，半凸型槽；
	//							//	05) E型槽时为5，斜肩梨型槽；
	//							//	06) F型槽时为6；
	//							//	07) G型槽时为7；
	//							//	08) H型槽时为8；
	//	double	BR0_		;	//	转子冲片槽口宽(mm)
	//	double	BR1_		;	//	转子冲片槽宽1 (mm)
	//	double	BR2_		;	//	转子冲片槽宽2 (mm)
	//	double	BR3_		;	//	转子冲片槽宽3 (mm)
	//	double	BR4_		;	//	转子冲片槽宽4 (mm)
	//	double	HR0_		;	//	转子冲片槽口高(mm)
	//	double	HR1_		;	//	转子冲片槽高1 (mm)
	//	double	HR2_		;	//	转子冲片槽高2 (mm)
	//	double	Es_			;	//	相对静态偏心量
	//	double	Ed_			;	//	相对动态偏心量
	//	int		JCR_		;	// 	转子绕组接法代码
	//							//	01) Ｙ时为0；
	//							//	02) △时为1；
	//	int		A2_ 		;	// 	并联路数
	//	int		rwlay_		;	// 	绕组层数
	//							//	01) 单层绕组时为1；
	//							//	02) 双层绕组时为2.
	//	int		Z2_ 		;	// 	绕组每槽导体数（根）
	//	int		Y2_ 		;	// 	线圈节距（槽数）
	//	double	CLZ2_		;	// 	线圈半匝长（mm）
	//	double	Rrv_		;	//	线圈电阻率
	//	double	DETAG2_		;	//	转子槽楔厚(mm)
	//	double	URPW_		;	//	转子槽楔比磁导
	//							//	01) 转子槽楔磁导率与真空磁导率的比值；
	//	int		RCoilType_	;	//	导线类型
	//							//	01) 扁导线为1；
	//							//	02) 圆导线为2；
	//	int		NR_ 		;	//	扁导线的并绕根数
	//	double	Drci_		;	//	圆导线的内径尺寸
	//	double	A2R_		;	//	扁导线的宽边尺寸
	//	double	B2R_		;	//	扁导线的窄边尺寸
	//	int Flag_ROutlet_	;	//	定转出线端标志数
	//							//	01) 当转子绕组出线端(双端出线时为前端)和定子绕组出线端为同侧时为+1；
	//							//	02) 当转子绕组出线端(双端出线时为前端)和定子绕组出线端为反侧时为-1.
	//	int Flag_RPhaseSequ_;	//	转子绕组相序方向标志数(*****非读取参数*****)
	//							//	01) 从转子绕组出线端看去顺时针方向时为+1；
	//							//	02) 从转子绕组出线端看去逆时针方向时为-1.
	//	int	clockwise_rotor_;	//  转子槽排序方向标志数
	//							//	01) 从转子绕组出线端看去顺时针排序时为+1；
	//							//	02) 从转子绕组出线端看去逆时针排序时为-1.
	//	int	RCShape_ 		;	//  转子线圈形状标志数
	//							//	01) 从出线端看且轴心在线圈下方；
	//							//	02) 从鼻  端看且轴心在线圈上方；
	//							//	03) 入槽边在左边时为+1；
	//							//	04) 入槽边在右边时为-1.
	//	int RWCType_		;	//	转子绕组连接类型代码
	//							//	01) 显极接法时为1；
	//							//	02) 庶极接法时为2.
	//	double **RWCFinArray_ ;	//	转子线圈输入框存储矩阵
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
	//	double CLB_			;	//	导条长(mm)
	//	double DR_			;	//	端环平均直径(mm)
	//	double Be_			;	//	端环宽度(mm)
	//	double He_			;	//	端环高度(mm)
	//	double rob_			;	//	导条电阻率（ohm*mm^2/m）
	//	double roe_			;	//	端环电阻率（ohm*mm^2/m）
	//	double U_			;	//	定子线电压有效值(V)
	//	double F_			;	//	定子线电压的频率(Hz)
	//	double Slip_		;	//	转差率
	//	int	   Fordermax_	;	//	输出力波最高阶次
	//	int    HarmCalType	;	//	方程解法标志数：1时为解法一；2时为解法二
	//------------------------------------------------------------------------------------------------
};
