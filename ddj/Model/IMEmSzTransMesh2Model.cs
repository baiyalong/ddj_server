using System;
using System.Collections.Generic;
using System.Linq;
using System.Web;

namespace MDM.Model
{
    public class IMEmSzTransMesh2Model
    {
        public string user { get; set; }
        public string project { get; set; }
        public string design { get; set; }
        public DateTime timestamp { get; set; }

        //	char	*OutputPath	:	//输出路径，如D:\\
        public double D1 { get; set; }  //定子铁心磁路计算等效外径(mm)
        public double DI1 { get; set; } //定子铁心内径(mm)
        public int Q1 { get; set; } //定子槽数
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
        public double USPW { get; set; }    //定子槽楔比磁导(即定子槽楔的磁导率与真空磁导率的比值)
        public double DETAG1 { get; set; }  //定子槽楔厚（mm）
        public double DO2 { get; set; } //转子铁心外径(mm)
        public int CalcuMult { get; set; }  //整圆为解域的倍数
        public double dSLiner { get; set; } //绕组对地绝缘双边厚度 (mm)
                                            //	01) 定子散嵌绕组时输入槽绝缘（对地绝缘）的双边厚度,
                                            //	02) 定子成型绕组时输入槽绝缘（对地绝缘）的双边厚度,
                                            //	03) 定子散嵌绕组时定子槽绝缘（对地绝缘）包围作为整体的双层线圈边,
                                            //	04) 定子成型绕组时定子槽绝缘（对地绝缘）包围作为整体的单层线圈边.
        public double dSWedgeDw { get; set; }   //楔下垫条厚度 (mm)
        public double dSLineBot { get; set; }   //槽底垫条厚度 (mm)
        public int FlagSToothRi { get; set; }   //定子齿内半径的标志数
                                                //	01)	 0时为按定子内径确定；
                                                //	02)	 1时为按输入内径确定
        public int SToothRiRow { get; set; }    //定子齿内半径数组元素数量
        public double[] SToothRi { get; set; }       //定子齿内半径数组 (mm)
        public int ElemNumPerSArc { get; set; } //定子气隙边界上一个齿距对应的单元数量
        public int SmrtSizeStator { get; set; } //定子部分剖分等级
        public int FlagSToothAddSlot { get; set; }//定子齿上加辅助小槽标志数
                                                  //	01)	 0时为不加；
                                                  //	02)	 1时为要加；
        public double SToothAddSlotWidth { get; set; }//定子齿上加辅助小槽的槽口宽度 (mm)
        public double SToothAddSlotHigth { get; set; }//定子齿上加辅助小槽的槽体高度 (mm)
        public int FlagEMType0 { get; set; }    //电机类型标志数
                                                //	01)	1时为鼠笼型转子；
                                                //	02)	2时为绕线型转子；
        public double DI2 { get; set; } //	转子铁心内径(mm)
        public int Q2 { get; set; } //	转子槽数
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
        public int rwlay { get; set; }  // 	绕组层数
                                        //	01) 单层绕组时为1；
                                        //	02) 双层绕组时为2.
        public double DETAG2 { get; set; }  //	转子槽楔厚(mm)
        public double URPW { get; set; }    //	转子槽楔比磁导
                                            //	01) 转子槽楔磁导率与真空磁导率的比值；
        public int FlagAngleRSlot { get; set; } //转子槽口沿圆周分布的标志数
                                                //	01)	 0时为要均分；
                                                //	02)	 1时为非均分；
        public int AngleRSlotRow { get; set; }  //转子槽口中心线机械角度数组元素数量
        public double[] AngleRSlot { get; set; }  //转子槽口中心线机械角度数组 (度)
        public int SmrtSizeRotor { get; set; }	//转子部分剖分等级
        //  cbGetString cb      ;   //回调函数  
    }

}