using System;

namespace MDM.Model
{
    public class IMPredictFr2Model
    {
        public string user { get; set; }
        public string project { get; set; }
        public string design { get; set; }
        public DateTime timestamp { get; set; }

        //	char *OutputPath; //输出路径，如D:\\
        public int P { get; set; } //电机极数
        public double F { get; set; } //电压频率(Hz)
        public int Q1 { get; set; } //定子槽数
        public int Q2 { get; set; } //转子槽数
        public double N_r { get; set; } //转子转速(r/min)
        public int Frmax { get; set; } //力波最高阶次(最小值是0，最大值是20)
        //  cbGetString cb      ;   //回调函数  

    }
}