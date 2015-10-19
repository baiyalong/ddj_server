using System;
using System.Collections.Generic;
using System.Linq;
using System.Web;

namespace MDM.Model
{
    public class IMMeEcStatorCal2Model
    {
        public string user { get; set; }
        public string project { get; set; }
        public string design { get; set; }
        public DateTime timestamp { get; set; }

        //	char   *OutputPath	:	//输出文件的路径，如D:\\
        public int P { get; set; }  //极对数
        public double DI1 { get; set; } //定子铁心内圆直径(mm)
        public double D1 { get; set; }  //定子铁心外圆直径(mm)
        public double SCL { get; set; } //定子铁心轴向长度(mm)
        public int Q1 { get; set; } //定子槽数
        public int NK1 { get; set; }    //定子铁心径向通风道个数
        public double BK1 { get; set; } //定子铁心径向通风道宽度(mm)
        public double Kfes { get; set; }    //定子铁心叠压系数
        public int SSlotType { get; set; }  //定子槽型代码
                                            //	01) 全开口矩形槽时为1；
                                            //	02) 半开口矩形槽时为2；
                                            //	03) 半开口圆底槽时为3.
        public double BS0 { get; set; } //定子冲片槽口宽(mm)
        public double BS1 { get; set; } //定子冲片槽沟宽(mm)
        public double BS2 { get; set; } //定子冲片槽底宽(mm)
        public double HS0 { get; set; } //定子冲片槽口高(mm)
        public double HS1 { get; set; } //定子冲片槽沟高(mm)
        public double HS2 { get; set; } //定子冲片槽体高(mm)
        public int swlay { get; set; }  //定子槽中线圈的层数
                                        //	01) 单层绕组时为1；
                                        //	02) 双层绕组时为2；
        public int Z1 { get; set; } //定子绕组每槽导体数
                                    //	01) 每槽导体数是指有效导体数，即将并绕的股线看成一个根有效导体.
        public double A1S { get; set; } //定子导线的裸线窄边尺寸(mm)
                                        //	01) 对成型绕组为裸线的窄边尺寸；
                                        //	02) 对散嵌绕组为裸线的直径；
        public double B1S { get; set; } //定子导线的裸线宽边尺寸(mm)
                                        //	01) 对成型绕组为裸线的宽边尺寸；
                                        //	02) 对散嵌绕组时为0；
        public int N1 { get; set; } //定子线圈并绕根数
        public double CLZ1 { get; set; }    //定子线圈半匝长(mm)
        public int OrdeMax { get; set; }    //计算模态的最高阶次
        public int Ordefr0 { get; set; }    //力波阶次
        public double Freqfr0 { get; set; } //力波频率(Hz)
        public double Amplfr0 { get; set; } //力波幅值(Pa)
        public int FlagCal { get; set; }	//计算功能标志数：0时为计算固有频率，1时为计算表面振动；2时为计算电磁噪声
        //  cbGetString cb      ;   //回调函数  
    }

}