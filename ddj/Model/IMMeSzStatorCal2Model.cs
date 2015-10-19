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

        //char* OutputPath	:	//输出路径，如D:\\
        public double Pn_ { get; set; } //输出功率(kW)
        public double I1_ { get; set; } //定子线电流有效值(A)
        public int M_ { get; set; } //相数
        public int P_ { get; set; } //极数
        public double U_ { get; set; }  //定子线电压有效值(V)
        public double F_ { get; set; }  //定子线电压的频率(Hz)
        public double DI1_ { get; set; }    //定子铁心内径(mm)
        public double SCL_ { get; set; }    //定子铁心长度（包括径向风道）(mm)
        public int Q1_ { get; set; }    //定子槽数
        public int NK1_ { get; set; }   //定子铁心径向通风道数量
        public double BK1_ { get; set; }    //定子铁心径向通风道宽度(mm)
        public int SSlotType_ { get; set; } //定子槽型代码
                                            //	01) 全开口矩形槽时为1；
                                            //	02) 半开口矩形槽时为2；
                                            //	03) 半开口圆底槽时为3；
        public double BS0_ { get; set; }    //定子冲片槽口宽(mm)
        public double BS1_ { get; set; }    //定子冲片槽沟宽(mm)
        public double BS2_ { get; set; }    //定子冲片槽底宽(mm)
        public double HS0_ { get; set; }    //定子冲片槽口高(mm)
        public double HS1_ { get; set; }    //定子冲片槽沟高(mm)
        public double HS2_ { get; set; }    //定子冲片槽  高(mm)
        public double DO2_ { get; set; }    //转子铁心外径(mm)
        public double RCL_ { get; set; }    //转子铁心长度(mm)
        public int Q2_ { get; set; }    //转子槽数
        public int NK2_ { get; set; }   //转子径向通风道个数
        public double BK2_ { get; set; }    //转子径向通风道宽度(mm)
        public double BSK_ { get; set; }    //转子斜槽周向长(mm)
        public int RSlotType_ { get; set; }     //转子槽型代码
                                                //	01) A型槽时为1，梨型槽；
                                                //	02) B型槽时为2，梯型槽；
                                                //	03) C型槽时为3，凸型槽；
                                                //	04) D型槽时为4，半凸型槽；
                                                //	05) E型槽时为5，斜肩梨型槽；
                                                //	06) F型槽时为6；
                                                //	07) G型槽时为7；
                                                //	08) H型槽时为8；
        public double BR0_ { get; set; }    //转子冲片槽口宽(mm)
        public double BR1_ { get; set; }    //转子冲片槽宽1 (mm)
        public double BR2_ { get; set; }    //转子冲片槽宽2 (mm)
        public double BR3_ { get; set; }    //转子冲片槽宽3 (mm)
        public double BR4_ { get; set; }    //转子冲片槽宽4 (mm)
        public double HR0_ { get; set; }    //转子冲片槽口高(mm)
        public double HR1_ { get; set; }    //转子冲片槽高1 (mm)
        public double HR2_ { get; set; }    //转子冲片槽高2 (mm)
        public double DETAG1_ { get; set; } //定子槽楔厚（mm）
        public double dSWedgeDw_ { get; set; }  //定子槽楔下垫条厚度 (mm)
        public double dSLineBot_ { get; set; }  //定子槽底的垫条厚度 (mm)
        public double AA1_ { get; set; }    //定子线圈端部单端伸出槽口长(mm)
        public double LL_ { get; set; } //定子单边端部伸出轴向投影长(mm)
        public double CLB_ { get; set; }    //转子导条长(mm)
        public double DR_ { get; set; } //转子端环平均直径(mm)
        public int JC_ { get; set; }    //定子绕组接法代码
                                        //	01) 星接时为0；
                                        //	02) 角接时为1；
        public int Z1_ { get; set; }    //定子每槽导体数（根）
        public int A1_ { get; set; }    //定子并联路数
        public int Y1_ { get; set; }    //定子线圈节距  （槽数）
        public int Me_ { get; set; }    //定子端部端箍的数量
        public double Ae_ { get; set; } //定子端部端箍的横截面积 (mm^2)
        //cbGetString cb;   //回调函数  
    }

}