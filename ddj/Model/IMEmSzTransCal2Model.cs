using System;
using System.Collections.Generic;
using System.Linq;
using System.Web;

namespace MDM.Model
{
    public class IMEmSzTransCal2Model
    {
        public string user { get; set; }
        public string project { get; set; }
        public string design { get; set; }
        public DateTime timestamp { get; set; }

        //	char	*OutputPath	:	//输出路径（不包括最后的斜杠），如D:
        public int FlagEMType0 { get; set; }    //电机类型标志数
                                                //	01)	1时为鼠笼型转子；
                                                //	02)	2时为绕线型转子；
        public int M { get; set; }  //相数
        public int P { get; set; }  //极数
        public double U { get; set; }   //定子线电压有效值(V)
        public double F { get; set; }   //定子线电压的频率(Hz)
        public double D1 { get; set; }  //定子铁心磁路计算等效外径(mm)
        public double DI1 { get; set; } //定子铁心内径(mm)
        public double SCL { get; set; } //定子铁心长度（包括径向风道）(mm)
        public int Q1 { get; set; } //定子槽数
        public int NK1 { get; set; }    //定子铁心径向通风道数量
        public double BK1 { get; set; } //定子铁心径向通风道宽度(mm)
        public double Kfes { get; set; }    //定子铁心叠压系数
        public int IKRS { get; set; }   //定子铁心硅钢牌号代码
                                        //	01) 50W470时为1；
                                        //	02) 50W540时为2；
        public int SSlotType { get; set; }  //定子槽型代码
                                            //	01) 全开口矩形槽时为1；
                                            //	02) 半开口矩形槽时为2；
                                            //	03) 半开口圆底槽时为3；
        public double BS0 { get; set; } //定子冲片槽口宽(mm)
        public double BS1 { get; set; } //定子冲片槽沟宽(mm)
        public double BS2 { get; set; } //定子冲片槽底宽(mm)
        public double HS0 { get; set; } //定子冲片槽口高(mm)
        public double HS1 { get; set; } //定子冲片槽沟高(mm)
        public double HS2 { get; set; } //定子冲片槽  高(mm)
        public double SCCONDUCTY { get; set; }  //	定子铁心叠片的电导率，单位为(S/m)
        public int JC { get; set; } //  定子绕组接法代码
                                    //	01) Ｙ时为0；
                                    //	02) △时为1；
        public int swlay { get; set; }  //  绕组层数
                                        //	01) 单层绕组时为1；
                                        //	02) 双层绕组时为2.
        public int A1 { get; set; } //  并联路数
        public int Y1 { get; set; } //  线圈截距  （槽数）
        public int Z1 { get; set; } //  每槽导体数（根）
        public double CLZ1 { get; set; }    //  线圈半匝长（mm）
        public double Srv { get; set; } //	线圈电阻率（ohm*mm^2/m）
        public double DETAG1 { get; set; }  //	定子槽楔厚（mm）
        public double USPW { get; set; }    //	定子槽楔比磁导(即定子槽楔的磁导率与真空磁导率的比值)
        public int SCoilType { get; set; }  //	导线类型
                                            //	01) 扁导线为1；
                                            //	02) 圆导线为2.
        public int N1 { get; set; } //  扁导线的并绕根数
        public double Dsci { get; set; }    //	圆导线-1的裸线直径(mm)
        public double A1S { get; set; } //	扁导线的窄边尺寸(mm)
        public double B1S { get; set; } //	扁导线的宽边尺寸(mm)
        public double AA1 { get; set; } //	线圈端部单端伸出槽口长(mm)
        public double LL { get; set; }  //	单边端部伸出轴向投影长(mm)
        public int Flag_SPhaseSequ { get; set; }    //  定子绕组相序方向标志数
                                                    //	01) 从定子绕组出线端看去顺时针方向时为+1；
                                                    //	02) 从定子绕组出线端看去逆时针方向时为-1.
        public int clockwise_stator { get; set; }   //  定子槽排序方向标志数
                                                    //	01) 从定子绕组出线端看去顺时针排序时为+1；
                                                    //	02) 从定子绕组出线端看去逆时针排序时为-1.
        public int SCShape { get; set; }    //  定子线圈形状标志数
                                            //	01) 从出线端看且轴心在线圈下方；
                                            //	02) 从鼻  端看且轴心在线圈上方；
                                            //	03) 入槽边在左边时为+1；
                                            //	04) 入槽边在右边时为-1.
        public int SWCType { get; set; }    //	定子绕组连接类型代码
                                            //	01) 显极接法时为1；
                                            //	02) 庶极接法时为2.
        public double[,] SWCFinArray { get; set; }   //	定子线圈输入框存储矩阵
                                                     //	01) 共(Q*wlay/2)行，共4列
                                                     //		01.01)  第i行第j列元素对应于输入框中第i行第j列元素；
                                                     //	02) 每一行表示一个线圈
                                                     //		02.01)  矩阵行号不一定和该行表示的线圈入槽号一致；
                                                     //	03) 第i行第01列表示第i号线圈的入槽号
                                                     //		03.01)  单层绕组时线头连接入槽边槽号，如5、12；
                                                     //		03.02)  双层绕组时线头连接入槽边槽号，如5、12；
                                                     //		03.03)  单层绕组时线头连接入槽边在输入框中显示为(入槽边槽号) ，如5 、12 ；
                                                     //		03.04)  双层绕组时线头连接入槽边在输入框中显示为(入槽边槽号T)，如5T、12T；
                                                     //	04) 第i行第02列表示第i号线圈的出槽号
                                                     //		04.01)  单层绕组时线尾连接出槽边槽号的负值，如-5、-12；
                                                     //		04.02)  双层绕组时线尾连接出槽边槽号的负值，如-5、-12；
                                                     //		04.03)  单层绕组时线尾连接出槽边在输入框中显示为(出槽边槽号) ，如5 、12 ；
                                                     //		04.04)  双层绕组时线尾连接出槽边在输入框中显示为(出槽边槽号B)，如5B、12B；
                                                     //	05) 第i行第03列的元素表示第i号线圈所属相路号
                                                     //		05.01)  表示线圈属于某相的第几号支路；
                                                     //		05.02)  正值表示线圈顺接，即顺绕组连接方向先入槽线圈边再出槽线圈边；
                                                     //		05.03)  负值表示线圈反接，即顺绕组连接方向先出槽线圈边再入槽线圈边；
                                                     //		05.04)  属于A相的支路号从   1开始，如
                                                     //				    1表示线圈属于A相的第1条支路且顺接，
                                                     //				   -2表示线圈属于A相的第2条支路且反接，······；
                                                     //		05.05)  属于B相的支路号从1001开始，如
                                                     //				-1001表示线圈属于B相的第1条支路且反接，
                                                     //				 1002表示线圈属于B相的第2条支路且顺接，······；
                                                     //		05.06)  属于C相的支路号从2001开始，如
                                                     //				 2001表示线圈属于C相的第1条支路且顺接，
                                                     //				-2002表示线圈属于C相的第2条支路且反接，······；
                                                     //		05.07)       1在输入框中显示为 A1，   -2在输入框中显示为-A2；
                                                     //		05.08)    1001在输入框中显示为 B1，-1002在输入框中显示为-B2；
                                                     //		05.09)   -2001在输入框中显示为-C1， 2002在输入框中显示为 C2；
                                                     //	06) 第i行第04列表示第i号线圈的匝数
                                                     //		06.01)  线圈匝数均为正整数；
                                                     //		06.02)  在输入框中按匝数大小实际显示，如5、12；
                                                     //	07) 第i行第05列表示第i号线圈的半匝长(mm)
                                                     //		07.01)  线圈半匝长均为正实数，单位为mm；
                                                     //		07.02)  在输入框中按半匝长大小实际显示，如126.500；
        public double DO2 { get; set; } //	转子铁心外径(mm)
        public double DI2 { get; set; } //	转子铁心内径(mm)
        public double RCL { get; set; } //	转子铁心长度(mm)
        public int Q2 { get; set; } //	转子槽数
        public int NK2 { get; set; }    //	转子径向通风道个数
        public double BK2 { get; set; } //	转子径向通风道宽度(mm)
        public double BSK { get; set; } //	转子斜槽周向长(mm)
        public double Kfer { get; set; }    //	转子铁心叠压系数
        public int IKRR { get; set; }   //	转子铁心硅钢牌号代码
                                        //	01) 50W470时为1；
                                        //	02) 50W540时为2；
        public int RSlotType { get; set; }  //	转子槽型代码
                                            //	01) A型槽时为1，梨型槽；
                                            //	02) B型槽时为2，梯型槽；
                                            //	03) C型槽时为3，凸型槽；
                                            //	04) D型槽时为4，半凸型槽；
                                            //	05) E型槽时为5，斜肩梨型槽；
                                            //	06) F型槽时为6；
                                            //	07) G型槽时为7；
                                            //	08) H型槽时为8；
        public double BR0 { get; set; } //	转子冲片槽口宽(mm)
        public double BR1 { get; set; } //	转子冲片槽宽1 (mm)
        public double BR2 { get; set; } //	转子冲片槽宽2 (mm)
        public double BR3 { get; set; } //	转子冲片槽宽3 (mm)
        public double BR4 { get; set; } //	转子冲片槽宽4 (mm)
        public double HR0 { get; set; } //	转子冲片槽口高(mm)
        public double HR1 { get; set; } //	转子冲片槽高1 (mm)
        public double HR2 { get; set; } //	转子冲片槽高2 (mm)
        public double RCCONDUCTY { get; set; }  //	转子铁心叠片的电导率，单位为(S/m)
        public int JCR { get; set; }    // 	转子绕组接法代码
                                        //	01) Ｙ时为0；
                                        //	02) △时为1；
        public int A2 { get; set; } // 	并联路数
        public int rwlay { get; set; }  // 	绕组层数
                                        //	01) 单层绕组时为1；
                                        //	02) 双层绕组时为2.
        public int Z2 { get; set; } // 	绕组每槽导体数（根）
        public int Y2 { get; set; } // 	线圈节距（槽数）
        public double CLZ2 { get; set; }    // 	线圈半匝长（mm）
        public double Rrv { get; set; } //	线圈电阻率
        public double DETAG2 { get; set; }  //	转子槽楔厚(mm)
        public double URPW { get; set; }    //	转子槽楔比磁导
                                            //	01) 转子槽楔磁导率与真空磁导率的比值；
        public int Flag2KindWaveWinding { get; set; }
        public int RCoilType { get; set; }  //	导线类型
                                            //	01) 扁导线为1；
                                            //	02) 圆导线为2；
        public int NR { get; set; } //	扁导线的并绕根数
        public double Drci { get; set; }    //	圆导线的内径尺寸
        public double A2R { get; set; } //	扁导线的宽边尺寸
        public double B2R { get; set; } //	扁导线的窄边尺寸
        public int Flag_ROutlet { get; set; }   //	定转出线端标志数
                                                //	01) 当转子绕组出线端(双端出线时为前端)和定子绕组出线端为同侧时为+1；
                                                //	02) 当转子绕组出线端(双端出线时为前端)和定子绕组出线端为反侧时为-1.
        public int Flag_RPhaseSequ { get; set; }    //	转子绕组相序方向标志数(*****非读取参数*****)
                                                    //	01) 从转子绕组出线端看去顺时针方向时为+1；
                                                    //	02) 从转子绕组出线端看去逆时针方向时为-1.
        public int clockwise_rotor { get; set; }    //  转子槽排序方向标志数
                                                    //	01) 从转子绕组出线端看去顺时针排序时为+1；
                                                    //	02) 从转子绕组出线端看去逆时针排序时为-1.
        public int RCShape { get; set; }    //  转子线圈形状标志数
                                            //	01) 从出线端看且轴心在线圈下方；
                                            //	02) 从鼻  端看且轴心在线圈上方；
                                            //	03) 入槽边在左边时为+1；
                                            //	04) 入槽边在右边时为-1.
        public int RWCType { get; set; }    //	转子绕组连接类型代码
                                            //	01) 显极接法时为1；
                                            //	02) 庶极接法时为2.
        public double[,] RWCFinArray { get; set; }   //	转子线圈输入框存储矩阵
                                                     //	01) 共(Q*wlay/2)行，共4列
                                                     //		01.01)  第i行第j列元素对应于输入框中第i行第j列元素；
                                                     //	02) 每一行表示一个线圈
                                                     //		02.01)  矩阵行号不一定和该行表示的线圈入槽号一致；
                                                     //	03) 第i行第01列表示第i号线圈的入槽号
                                                     //		03.01)  单层绕组时线头连接入槽边槽号，如5、12；
                                                     //		03.02)  双层绕组时线头连接入槽边槽号，如5、12；
                                                     //		03.03)  单层绕组时线头连接入槽边在输入框中显示为(入槽边槽号) ，如5 、12 ；
                                                     //		03.04)  双层绕组时线头连接入槽边在输入框中显示为(入槽边槽号T)，如5T、12T；
                                                     //	04) 第i行第02列表示第i号线圈的出槽号
                                                     //		04.01)  单层绕组时线尾连接出槽边槽号的负值，如-5、-12；
                                                     //		04.02)  双层绕组时线尾连接出槽边槽号的负值，如-5、-12；
                                                     //		04.03)  单层绕组时线尾连接出槽边在输入框中显示为(出槽边槽号) ，如5 、12 ；
                                                     //		04.04)  双层绕组时线尾连接出槽边在输入框中显示为(出槽边槽号B)，如5B、12B；
                                                     //	05) 第i行第03列的元素表示第i号线圈所属相路号
                                                     //		05.01)  表示线圈属于某相的第几号支路；
                                                     //		05.02)  正值表示线圈顺接，即顺绕组连接方向先入槽线圈边再出槽线圈边；
                                                     //		05.03)  负值表示线圈反接，即顺绕组连接方向先出槽线圈边再入槽线圈边；
                                                     //		05.04)  属于A相的支路号从   1开始，如
                                                     //					1表示线圈属于A相的第1条支路且顺接，
                                                     //					-2表示线圈属于A相的第2条支路且反接，······；
                                                     //		05.05)  属于B相的支路号从1001开始，如
                                                     //				-1001表示线圈属于B相的第1条支路且反接，
                                                     //					1002表示线圈属于B相的第2条支路且顺接，······；
                                                     //		05.06)  属于C相的支路号从2001开始，如
                                                     //					2001表示线圈属于C相的第1条支路且顺接，
                                                     //				-2002表示线圈属于C相的第2条支路且反接，······；
                                                     //		05.07)       1在输入框中显示为 A1，   -2在输入框中显示为-A2；
                                                     //		05.08)    1001在输入框中显示为 B1，-1002在输入框中显示为-B2；
                                                     //		05.09)   -2001在输入框中显示为-C1， 2002在输入框中显示为 C2；
                                                     //	06) 第i行第04列表示第i号线圈的匝数
                                                     //		06.01)  线圈匝数均为正整数；
                                                     //		06.02)  在输入框中按匝数大小实际显示，如5、12；
                                                     //	07) 第i行第05列表示第i号线圈的半匝长(mm)
                                                     //		07.01)  线圈半匝长均为正实数，单位为mm；
                                                     //		07.02)  在输入框中按半匝长大小实际显示，如126.500；
                                                     //	08) 乙类波绕组时说明
                                                     //		08.01)  输入框中属于相同支路的线圈依次排列；
                                                     //		08.02)  输入框中每条支路均从前端开始按照绕组联接顺序依次输入线圈参数；
                                                     //		08.03)  翻层槽之前的线圈和翻层槽之后的线圈均按翻层槽之前的线圈形状表示；
                                                     //		08.04)  翻层槽之前的线圈顺反接和翻层槽之后的线圈顺反接相同；
                                                     //		08.05)  翻层槽所在的线圈匝数均为整线圈匝数；
        public double CLB { get; set; } //	导条长(mm)
        public double DR { get; set; }  //	端环平均直径(mm)
        public double Be { get; set; }  //	端环宽度(mm)
        public double He { get; set; }  //	端环高度(mm)
        public double rob { get; set; } //	导条电阻率（ohm*mm^2/m）
        public double roe { get; set; } //	端环电阻率（ohm*mm^2/m）
        public int CalcuMult { get; set; }
        public double WKKS { get; set; }    //电机旋转部分整体的转动惯量（kg·m^2）
        public double PFWP { get; set; }    //机械损耗（W）
                                            //	01)	输入时为kW，存储时为W；
        public double WindLoss { get; set; }    //参考转速时测量的风扇损耗 (W)
                                                //	01)	输入时为kW，存储时为W；
        public double ReferSpeed { get; set; }  //参考转速 (r/min)
        public int FlagRMove { get; set; }  //转子运动标志参数
                                            //	01)  0时为转子恒速；
                                            //	02)  1时为转子变速(单个仿真状态中为转子差值变输出)；
        public int RunFlag0 { get; set; }   //转子负载变量标志参数
                                            //	01)  0时为转子负载随时间而变化；
                                            //	02)  1时为转子负载随转速而变化；
        public int RunFlag2 { get; set; }   //转子负载类型标志参数
                                            //	01)  0时为转子负载为转矩；
                                            //	02)  1时为转子负载为功率；
        public int RunNums { get; set; }    //转子负载数量参数
        public double[] RunX { get; set; }   //转子负载自变量数组
                                             //	01) 共RunNums个元素；
                                             //	02) (i)为第i个仿真状态点的仿真的运行时间(s)或者转速(r/min)；
                                             //	03) RunFlag0为0时为时间(s)；
                                             //	04) RunFlag0为1时为转速(r/min)；
        public double[] RunY { get; set; }   //转子负载应变量数组
                                             //	01) 共RunNums个元素；
                                             //	02) (i)为第i个仿真状态的负载转矩或者负载功率；
                                             //	03) RunFlag2为0时为负载转矩(N*m)；
                                             //	04) RunFlag2为1时为负载功率(W)；
                                             //	05) 功率输入时单位kW，变量存储时单位W；
        public double SimTotalTime { get; set; }    //仿真计算的总时间（s）
        public double step { get; set; }    //时间步长（s）
        public double RequiredPrecision { get; set; }//计算精度
        public double InitAnglPos { get; set; } //从0到仿真起始时间内转子坐标系X轴顺定子相序方向转过的机械角度(度)
        public double InitNr { get; set; }  //仿真起始时刻(或每步起始时刻)转子的转速(r/min)
                                            //	01）正方向为顺定子相序方向；
        public int Flag_Us_line { get; set; }   //定子机端电压类型标志数
                                                //	01)  0时为利用输入线电压的有效值；
                                                //	02)  1时为利用输入线电压数据文件；
                                                //public double U { get; set; }   //定子线电压有效值(V)
                                                //public double F { get; set; }   //定子线电压的频率(Hz)
        public int N_Us_line { get; set; }  //线电压波形数据的数据点数
        public double[] Time_Us_line { get; set; }   //线电压波形数据的时间数组
                                                     //	01) 共N_Us_line个元素；
                                                     //	02)	时间单位为s；
        public double[,] Us_line { get; set; }   //线电压波形数据
                                                 //	01) 共N_Us_line行；
                                                 //	02) 共02列；
                                                 //	03) 第01列为Uab，第02列为Ubc；
                                                 //	04)	电压单位为V；
        public int Numb_AixalSimu { get; set; } //轴向分段数量
                                                //	01）单截面为1；
                                                //	02）多截面>=2；
        public int FlagSteadyEstimate { get; set; } //稳态判断标志数
                                                    //	01） 0时为不必稳态判断；
                                                    //	02） 1时为自动稳态判断；
        public double ErrorSteadyEstimate { get; set; } //稳态判断精度
                                                        //	01）稳态判断时两个相邻周期的基波幅值的偏差限制
        public int Flag_Fourier { get; set; }   //计算Fourier级数的系数标志数
                                                //	01)  0时为不计算；
                                                //	02)  1时为要计算；
        public int Flag_FourierMethod { get; set; } //计算Fourier级数的方法
                                                    //	01)  0时为法一，即利用FFT2计算；
                                                    //	02)  1时为法二，即利用Fourier级数的实数形式的表达式计算；
        public double InitTime_Fourier { get; set; }    //计算Fourier级数的起始时间(s)
        public double Fourier_FreqMax { get; set; } //计算Fourier级数的最高频率(Hz)
        public double Fourier_FreqResolution { get; set; }  //计算Fourier级数的分辨频率(Hz)
        public int Flag_AirB_Fourier { get; set; }  //计算气隙磁密谐波的标志数
                                                    //	01)  0时为不计算；
                                                    //	02)  1时为要计算；
        public int Fourier_AirB_ModeOrder { get; set; } //计算气隙磁密谐波最高阶次
        public double Fourier_AirB_AmplMin { get; set; }    //计算气隙磁密谐波最小幅值(T)
        public int Flag_AirF_Fourier { get; set; }  //计算气隙磁力谐波的标志数
                                                    //	01)  0时为不计算；
                                                    //	02)  1时为要计算；
        public int Fourier_AirF_ModeOrder { get; set; } //计算气隙磁力谐波最高阶次
        public double Fourier_AirF_AmplMin { get; set; }    //计算气隙磁力谐波最小幅值(Pa)
        public int Flag_RedefineStep { get; set; }  //根据Fourier分析需要的采样频率重新确定步长标志数
                                                    //	01)  0时为不重新确定步长；
                                                    //	02)  1时为要重新确定步长；
        public int Flag_Fourier_2powN_FFT2 { get; set; }    //采样点数是2的整数次幂标志数
                                                            //	01)  0时为不设定；
                                                            //	02)  1时为要设定；
                                                            //	03) FFT2分析时该项才起作用；
        public double drmax_rotatedNode_ { get; set; }              //气隙隔离带内圆的直径(mm)
        public double d_GapOuter_ { get; set; } //气隙隔离带的外圆直径(mm)
        public int number_of_rotating_node_in_GapSeparateBar_ { get; set; } //气隙隔离带内圆上的一圈旋转的实节点总数
        public int total_of_NODE_in_Rotor_all_ { get; set; }    //转子上节点总数
        public int total_of_fixedELEMENT_in_Rotor_ { get; set; }    //转子上固定单元总数
        public int total_of_NODE_in_Stator_all_ { get; set; }   //定子上节点总数
        public int total_of_fixedELEMENT_in_Stator_ { get; set; }   //定子上固定单元总数


        public int[] NodeNum_of_GapInner_ { get; set; }
        public int[] NodeNum_of_GapOuter_ { get; set; }
        public int[] ipoint_ { get; set; }
        public int[] jpoint_ { get; set; }
        public int[] kpoint_ { get; set; }
        public double[] area_of_ELEMENT_ { get; set; }
        public int[] MatNumber_ { get; set; }
        public int[] ElemTypeNumber_ { get; set; }

        public int total_of_NODE_all_ { get; set; }                 //节点总数
        public int total_of_fixedELEMENT_ { get; set; }                 //固定单元总数
        public int total_of_variableELEMENT_ { get; set; }                  //可变单元总数
        public int total_of_ELEMENT_ { get; set; }                  //单元总数
        public double[] x_pos_ { get; set; }                             //节点的X坐标值（单位：mm）
        public double[] y_pos_ { get; set; }                             //节点的Y坐标值（单位：mm）
        public int total_of_rotatedNODEs_ { get; set; }             //旋转节点总数
        public int[] num_of_rotatedNODE_ { get; set; }               //存贮旋转节点的数组
        public int[] total_of_NODEs_on_firstBoundaryLine_ { get; set; }  //第一类边界条件各段线上的节点总数
        public int[] num_of_firstNODE_ { get; set; } //第一类边界条件线上的节点编号
        public int total_of_NODES_on_Border_Rotor_ { get; set; }        //转子上的周期性边界的节点总数(单边)
        public int total_of_NODES_on_Border_Stator_ { get; set; }       //定子上的周期性边界的节点总数(单边)
        public int[] num_of_NODES_on_Border_Real_ { get; set; }      //存贮周期性边界实节点的数组
        public int[] num_of_NODES_on_Border_Virtual_ { get; set; }       //存贮周期性边界虚节点的数组
        public double drmax_rotatedNode__ { get; set; }                     //气隙隔离带内圆的直径(mm)
        public double d_GapOuter__ { get; set; }                        //气隙隔离带的外圆直径(mm)
        public int number_of_rotating_node_in_GapSeparateBar__ { get; set; }//气隙隔离带内圆上一圈旋转的节点总数
        public int total_of_NODE_in_Rotor__ { get; set; }//转子上节点总数
        public int total_of_fixedELEMENT_in_Rotor__ { get; set; }//转子上固定单元总数
        public int total_of_NODE_in_Stator__ { get; set; }//定子上节点总数
        public int total_of_fixedELEMENT_in_Stator__ { get; set; }//定子上固定单元总数
        public int[] NodeNum_of_GapInner__ { get; set; }             //存放气隙隔离带内圆上的节点编号
        public int[] NodeNum_of_GapOuter__ { get; set; }             //存放气隙隔离带外圆上的节点编号
        public int[] ipoint__ { get; set; }              //单元的第i号节点的编号
        public int[] jpoint__ { get; set; }              //单元的第j号节点的编号
        public int[] kpoint__ { get; set; }              //单元的第k号节点的编号
        public double[] area_of_ELEMENT__ { get; set; }              //单元的面积(平方毫米)
        public int[] MatNumber__ { get; set; }               //单元的材料号
        public int[] ElemTypeNumber__ { get; set; }              //单元的类型号
        public double[] x_pos__ { get; set; }                                //节点的X坐标值//单位：mm
        public double[] y_pos__ { get; set; }                                //节点的Y坐标值//单位：mm
        public int total_of_rotatedNODEs__ { get; set; }                //旋转节点总数
        public int[] num_of_rotatedNODE__ { get; set; }              //存贮旋转节点的数组
        public int[] total_of_NODEs_on_firstBoundaryLine__ { get; set; } //第一类边界条件各段线上的节点总数
        public int[] num_of_firstNODE__ { get; set; }				//第一类边界条件线上的节点编号
    }

}