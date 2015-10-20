using System;
using System.Collections.Generic;
using System.Linq;
using System.Web;

namespace MDM.Model
{
    public class IMMeSzStatorCal2Model
    {
        public string user { get; set; }
        public string project { get; set; }
        public string design { get; set; }
        public DateTime timestamp { get; set; }

        //	char    *OutputPath	:	//输出路径，如D:\\
        public double D1 { get; set; }  //定子铁心磁路计算等效外径(mm)
        public double DI1 { get; set; } //定子铁心内径(mm)
        public double SCL { get; set; } //定子铁心长度（包括径向风道）(mm)
        public int Q1 { get; set; } //定子槽数
        public int NK1 { get; set; }    //定子铁心径向通风道数量
        public double BK1 { get; set; } //定子铁心径向通风道宽度(mm)
        public double Kfes { get; set; }    //定子铁心叠压系数
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
        public int swlay { get; set; }  //定子绕组层数
                                        //	01) 单层绕组时为1；
                                        //	02) 双层绕组时为2.
        public int Z1 { get; set; } //定子每槽导体数（根）
        public int SCoilType { get; set; }  //定子导线类型
                                            //	01) 扁导线为1；
                                            //	02) 圆导线为2.
        public int N1 { get; set; } //定子扁导线的并绕根数
        public double Dsci { get; set; }    //定子圆导线的裸线直径(mm)
        public double A1S { get; set; } //定子扁导线的窄边尺寸(mm)
        public double B1S { get; set; } //定子扁导线的宽边尺寸(mm)
        public int SWireCol { get; set; }   //定子线圈裸扁导线排数
        public double DETAG1 { get; set; }  //定子槽楔厚（mm）
        public double dSConductor { get; set; } //裸扁导线绝缘双边厚度 (mm)
        public double dSCoil { get; set; }  //导线匝间绝缘双边厚度 (mm)
        public double dSLiner { get; set; } //绕组对地绝缘双边厚度 (mm)
                                            //  01) 定子散嵌绕组时输入槽绝缘（对地绝缘）的双边厚度,
                                            //  02) 定子成型绕组时输入槽绝缘（对地绝缘）的双边厚度,
                                            //  03) 定子散嵌绕组时定子槽绝缘（对地绝缘）包围作为整体的双层线圈边,
                                            //  04) 定子成型绕组时定子槽绝缘（对地绝缘）包围作为整体的单层线圈边.
        public double dSLiner2 { get; set; }    //导线排间绝缘双边厚度 (mm)
        public double dSWedgeDw { get; set; }   //楔下垫条厚度 (mm)
        public double dSLineBot { get; set; }   //槽底垫条厚度 (mm)
        public int MechCalCont { get; set; }    //机械计算的类型控制参数
                                                //  01)  1时为机械力学参数计算；
                                                //  02)  2时为机械模态特性计算；
                                                //  03)  3时为谐波响应振动计算；
                                                //  04)  4时为瞬态响应振动计算；
                                                //  05)  5时为谐波电磁噪声指数计算；
                                                //  06)  6时为瞬态电磁噪声指数计算；
                                                //  07)  7时为谐波电磁噪声计算；
                                                //  08)  8时为瞬态电磁噪声计算；
        public int MechStrucSCore { get; set; } //机械结构中定子铁心存在标志数
                                                //  01)  0时为不考虑；
                                                //  02)  1时为要考虑；
        public int MechStrucSWinding { get; set; }//机械结构中定子绕组存在标志数
                                                  //  01)  0时为不考虑；
                                                  //  02)  1时为要考虑；
        public int MechStrucSFrame { get; set; }//机械结构中定子机座存在标志数
                                                //  01)  0时为不考虑；
                                                //  02)  1时为要考虑；
        public int SCSegNum { get; set; }       //定子铁芯段数
        public double[] Lsss { get; set; }       //铁心每段的长度数组 mm
                                                 //  01) 定子铁芯各段的轴向长度(mm),不包括通风槽钢{get;set;}
                                                 //  02) 它为一个数组,有(NK1+1)个数据行,分别为第1段铁芯长度,第2段铁芯长度,...{get;set;}
                                                 //  03) 其中定子铁芯装配图上最右边的铁芯段为第1段,依次向左为第2段,第3段,.....
        public int STCElemNum { get; set; }
        public double MASSw { get; set; }       //单个定子绕组的质量 kg
                                                //  01) 即每槽上层和下层线圈边的质量和.
        public int ModeMax { get; set; }    //提取的最大模态数
                                            //  01) 无机座时建议输入100到150,
                                            //  02) 有机座时建议输入150到200.
        public double FreqMin { get; set; } //提取的最小模态频率 Hz
        public double FreqMax { get; set; } //提取的最大模态频率 Hz
        public double AngleF1stdot { get; set; }    //磁力采样的空间第一个点的机械角度(度)
        public double FrameEX { get; set; } //定子机座的弹性模量 Pa
        public double FramePRXY { get; set; }   //定子机座的泊 松 比
        public double FrameDENS { get; set; }   //定子机座的材料密度 kg/m^3
        public int FrameSSIZE { get; set; } //智能网格划分时的等级
                                            //  01)  0时为非智能网格划分；
                                            //  02) 智能网格划分时输入范围为1-10；
        public double FrameESIZE { get; set; }  //固定单元边长时的单元边长的长度（mm）
                                                //  01)  0时为程序自动处理
        public int FlagSCoreFrame { get; set; } //定子铁心和机座链接方式标志数
                                                //  01)  0时为定子铁心过盈装配压入机座{get;set;}
                                                //  02)  1时为定子铁心通过骨架链接机座{get;set;}
        public double DeltFC { get; set; }  //定子铁心和机座接触的过盈量 mm
                                            //  01) 要考虑过盈量时输入值大于零；
                                            //  02) 不考虑过盈量时输入0,即认为刚性接触；
        public double Lsca { get; set; }    //与定子骨架或者压圈相接触的通风槽钢的轴向长度 mm
        public int NumFixDot { get; set; }  //固定约束点的数量
                                            //  01)  0时为不考虑安装固定；
                                            //  02) 该值大于0时以下参数才读取.
        public double[,] FixDotXYZR { get; set; }    //固定约束点的坐标数组 mm
                                                     //  01) 共NumFixDot行，共04列；
                                                     //  02) 第01列为CX坐标；
                                                     //  03) 第02列为CY坐标；
                                                     //  04) 第03列为CZ坐标；
                                                     //  05) 第04列为约束半径；
                                                     //  cbGetString cb      ;   //回调函数  
    }

}