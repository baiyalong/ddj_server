using System;
using System.Collections.Generic;
using System.Linq;
using System.Web;

namespace MDM.Model
{
    public class IMEmEcTransCal2Model
    {
        public string user { get; set; }
        public string project { get; set; }
        public string design { get; set; }
        public DateTime timestamp { get; set; }

        //	char   *DI_Output_	:	//	输出文件的路径，如D:\\
        //char* DI_Review_	:	//	输出文件的路径，如D:\\
        public int ContCalMethod { get; set; }  //	解方程龙格库塔法
                                                //	01)	1时为半隐式；
                                                //	02)	2时为显式四阶；
        public int M_ { get; set; } //	相数
        public int P_ { get; set; } //	极数
        public double D1_ { get; set; } //	定子铁心磁路计算等效外径(mm)
        public double DI1_ { get; set; }    //	定子铁心内径(mm)
        public double SCL_ { get; set; }    //	定子铁心长度（包括径向风道）(mm)
        public int Q1_ { get; set; }    //	定子槽数
        public int NK1_ { get; set; }   //	定子铁心径向通风道数量
        public double BK1_ { get; set; }    //	定子铁心径向通风道宽度(mm)
        public double Kfes_ { get; set; }   //	定子铁心叠压系数
        public int IKRS_ { get; set; }  //	定子铁心硅钢牌号代码
                                        //	01) 50W470时为1；
                                        //	02) 50W540时为2；
        public int SSlotType_ { get; set; } //	定子槽型代码
                                            //	01) 全开口矩形槽时为1；
                                            //	02) 半开口矩形槽时为2；
                                            //	03) 半开口圆底槽时为3；
        public double BS0_ { get; set; }    //	定子冲片槽口宽(mm)
        public double BS1_ { get; set; }    //	定子冲片槽沟宽(mm)
        public double BS2_ { get; set; }    //	定子冲片槽底宽(mm)
        public double HS0_ { get; set; }    //	定子冲片槽口高(mm)
        public double HS1_ { get; set; }    //	定子冲片槽沟高(mm)
        public double HS2_ { get; set; }    //	定子冲片槽  高(mm)
        public double a_El_ { get; set; }   //	椭圆形长轴的长度超出定子内圆半径的部分和气隙长度的相对比值
        public double b_El_ { get; set; }   //	椭圆形短轴的长度短于定子内圆半径的部分和气隙长度的相对比值
        public int JC_ { get; set; }    //  定子绕组接法代码
                                        //	01) Ｙ时为0；
                                        //	02) △时为1；
        public int swlay_ { get; set; } //  绕组层数
                                        //	01) 单层绕组时为1；
                                        //	02) 双层绕组时为2.
        public int A1_ { get; set; }    //  并联路数
        public int Y1_ { get; set; }    //  线圈截距  （槽数）
        public int Z1_ { get; set; }    //  每槽导体数（根）
        public double CLZ1_ { get; set; }   //  线圈半匝长（mm）
        public double Srv_ { get; set; }    //	线圈电阻率（ohm*mm^2/m）
        public double DETAG1_ { get; set; } //	定子槽楔厚（mm）
        public double USPW_ { get; set; }   //	定子槽楔比磁导(即定子槽楔的磁导率与真空磁导率的比值)
        public int SCoilType_ { get; set; } //	导线类型
                                            //	01) 扁导线为1；
                                            //	02) 圆导线为2.
        public int N1_ { get; set; }    //  扁导线的并绕根数
        public double Dsci_ { get; set; }   //	圆导线的裸线直径(mm)
        public double A1S_ { get; set; }    //	扁导线的窄边尺寸(mm)
        public double B1S_ { get; set; }    //	扁导线的宽边尺寸(mm)
        public double AA1_ { get; set; }    //	线圈端部单端伸出槽口长(mm)
        public double LL_ { get; set; } //	单边端部伸出轴向投影长(mm)
        public int Flag_SPhaseSequ_ { get; set; }   //  定子绕组相序方向标志数
                                                    //	01) 从定子绕组出线端看去顺时针方向时为+1；
                                                    //	02) 从定子绕组出线端看去逆时针方向时为-1.
        public int clockwise_stator_ { get; set; }  //  定子槽排序方向标志数
                                                    //	01) 从定子绕组出线端看去顺时针排序时为+1；
                                                    //	02) 从定子绕组出线端看去逆时针排序时为-1.
        public int SCShape_ { get; set; }   //  定子线圈形状标志数
                                            //	01) 从出线端看且轴心在线圈下方；
                                            //	02) 从鼻  端看且轴心在线圈上方；
                                            //	03) 入槽边在左边时为+1；
                                            //	04) 入槽边在右边时为-1.
        public int SWCType_ { get; set; }   //	定子绕组连接类型代码
                                            //	01) 显极接法时为1；
                                            //	02) 庶极接法时为2.
        public double[,] SWCFinArray_ { get; set; }  //	定子线圈输入框存储矩阵
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
        public double DO2_ { get; set; }    //	转子铁心外径(mm)
        public double DI2_ { get; set; }    //	转子铁心内径(mm)
        public double RCL_ { get; set; }    //	转子铁心长度(mm)
        public int Q2_ { get; set; }    //	转子槽数
        public int NK2_ { get; set; }   //	转子径向通风道个数
        public double BK2_ { get; set; }    //	转子径向通风道宽度(mm)
        public double BSK_ { get; set; }    //	转子斜槽周向长(mm)
        public double Kfer_ { get; set; }   //	转子铁心叠压系数
        public int IKRR_ { get; set; }  //	转子铁心硅钢牌号代码
                                        //	01) 50W470时为1；
                                        //	02) 50W540时为2；
        public int RSlotType_ { get; set; }     //	转子槽型代码
                                                //	01) A型槽时为1，梨型槽；
                                                //	02) B型槽时为2，梯型槽；
                                                //	03) C型槽时为3，凸型槽；
                                                //	04) D型槽时为4，半凸型槽；
                                                //	05) E型槽时为5，斜肩梨型槽；
                                                //	06) F型槽时为6；
                                                //	07) G型槽时为7；
                                                //	08) H型槽时为8；
        public double BR0_ { get; set; }    //	转子冲片槽口宽(mm)
        public double BR1_ { get; set; }    //	转子冲片槽宽1 (mm)
        public double BR2_ { get; set; }    //	转子冲片槽宽2 (mm)
        public double BR3_ { get; set; }    //	转子冲片槽宽3 (mm)
        public double BR4_ { get; set; }    //	转子冲片槽宽4 (mm)
        public double HR0_ { get; set; }    //	转子冲片槽口高(mm)
        public double HR1_ { get; set; }    //	转子冲片槽高1 (mm)
        public double HR2_ { get; set; }    //	转子冲片槽高2 (mm)
        public double Es_ { get; set; } //	相对静态偏心量
        public double Ed_ { get; set; } //	相对动态偏心量
        public double CLB_ { get; set; }    //	导条长(mm)
        public double DR_ { get; set; } //	端环平均直径(mm)
        public double Be_ { get; set; } //	端环宽度(mm)
        public double He_ { get; set; } //	端环高度(mm)
        public double rob_ { get; set; }    //	导条电阻率（ohm*mm^2/m）
        public double roe_ { get; set; }    //	端环电阻率（ohm*mm^2/m）
        public double WKKS_ { get; set; }   //电机旋转部分整体的转动惯量（kg·m^2）
        public double PFWP_ { get; set; }   //机械损耗（W）
                                            //	01)	输入时为kW，存储时为W；
        public double WindLoss_ { get; set; }   //参考转速时测量的风扇损耗 (W)
                                                //	01)	输入时为kW，存储时为W；
        public double ReferSpeed_ { get; set; } //参考转速 (r/min)
        public int FlagRMove_ { get; set; } //转子运动标志参数
                                            //	01)  0时为转子恒速；
                                            //	02)  1时为转子变速(单个仿真状态中为转子差值变输出)；
        public int RunFlag0_ { get; set; }  //转子负载变量标志参数
                                            //	01)  0时为转子负载随时间而变化；
                                            //	02)  1时为转子负载随转速而变化；
        public int RunFlag2_ { get; set; }  //转子负载类型标志参数
                                            //	01)  0时为转子负载为转矩；
                                            //	02)  1时为转子负载为功率；
        public int RunNums_ { get; set; }   //转子负载数量参数
        public double[] RunX_ { get; set; }  //转子负载自变量数组
                                             //	01) 共RunNums个元素；
                                             //	02) (i)为第i个仿真状态点的仿真的运行时间(s)或者转速(r/min)；
                                             //	03) RunFlag0为0时为时间(s)；
                                             //	04) RunFlag0为1时为转速(r/min)；
        public double[] RunY_ { get; set; }  //转子负载应变量数组
                                             //	01) 共RunNums个元素；
                                             //	02) (i)为第i个仿真状态的负载转矩或者负载功率；
                                             //	03) RunFlag2为0时为负载转矩(N*m)；
                                             //	04) RunFlag2为1时为负载功率(W)；
                                             //	05) 功率输入时单位kW，变量存储时单位W；
        public double SimTotalTime_ { get; set; }   //仿真计算的总时间（s）
        public double step_ { get; set; }   //时间步长（s）
        public double Precision_ { get; set; }  //计算精度
        public double InitAnglPos_ { get; set; }    //从0到仿真起始时间内转子坐标系X轴顺定子相序方向转过的机械角度(度)
        public double InitNr_ { get; set; } //仿真起始时刻(或每步起始时刻)转子的转速(r/min)
                                            //	01）正方向为顺定子相序方向；
        public int Flag_Us_line_ { get; set; }  //定子机端电压类型标志数
                                                //	01)  0时为利用输入线电压的有效值；
                                                //	02)  1时为利用输入线电压数据文件；
        public double U_ { get; set; }  //定子线电压有效值(V)
        public double F_ { get; set; }  //定子线电压的频率(Hz)
        public int N_Us_line_ { get; set; } //线电压波形数据的数据点数
        public double[] Time_Us_line_ { get; set; }  //线电压波形数据的时间数组
                                                     //	01) 共N_Us_line个元素；
                                                     //	02)	时间单位为s；
        public double[,] Us_line_ { get; set; }  //线电压波形数据
                                                 //	01) 共N_Us_line行；
                                                 //	02) 共02列；
                                                 //	03) 第01列为Uab，第02列为Ubc；
                                                 //	04)	电压单位为V；
        public int FlagSteadyEstimate_ { get; set; }//稳态判断标志数
                                                    //	01） 0时为不必稳态判断；
                                                    //	02） 1时为自动稳态判断；
        public double ErrorSteadyEstimate_ { get; set; }    //稳态判断精度
                                                            //	01）稳态判断时两个相邻周期的基波幅值的偏差限制
                                                            //cbGetString cb;   //回调函数  
    }

}