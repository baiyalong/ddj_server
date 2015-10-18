using MDM.Model;
using Nancy;
using Nancy.ModelBinding;
using System;
using System.Collections.Generic;
using System.Linq;
using System.Runtime.InteropServices;
using System.Text;
using System.Threading.Tasks;
using System.Web;

namespace MDM.Controller
{
    public class DLLController : NancyModule
    {
        public DLLController() : base("/api/dll")
        {

            Post["/IMDbEcStatorCal2", true] = async (_, t) =>
            {
                var model = this.Bind<IMDbEcStatorCal2Model>();
                StringBuilder sb = new StringBuilder();
                sb.AppendLine(model.user);
                sb.AppendLine(model.project);
                sb.AppendLine(model.design);
                sb.AppendLine(model.timestamp.ToString());
                await Task.Run(() =>
                {
                    sb.AppendLine("begin------------------------------");
                    IMDbEcStatorCalMain("",
                            model.Pn_, model.I1_, model.M_, model.P_, model.U_, model.F_,
                            model.DI1_, model.SCL_, model.Q1_, model.NK1_, model.BK1_,
                            model.SSlotType_, model.BS0_, model.BS1_, model.BS2_,
                            model.HS0_, model.HS1_, model.HS2_,
                            model.DO2_, model.RCL_, model.Q2_, model.NK2_, model.BK2_, model.BSK_,
                            model.RSlotType_, model.BR0_, model.BR1_, model.BR2_, model.BR3_, model.BR4_,
                            model.HR0_, model.HR1_, model.HR2_,
                            model.DETAG1_, model.dSWedgeDw_, model.dSLineBot_,
                            model.AA1_, model.LL_, model.CLB_, model.DR_, model.JC_, model.Z1_, model.A1_, model.Y1_,
                            model.Me_, model.Ae_,
                    (s) => sb.AppendLine(s));
                    sb.AppendLine("end--------------------------------");
                });
                return sb.ToString();
            };

            Post["/IMEmEcSteadCal2", true] = async (_, t) =>
            {
                double a = 0, b = 0;
                await Task.Run(() => IMEmEcSteadCalMain("", "", 1, 1, 1,
                1, 1, 1, 1, 1,
                1, 1, 1, 1, 1,
                1, 1, 1, 1, 1,
                1, 1,
                1, 1, 1, 1, 1,
                1, 1, 1, 1, 1,
                1, 1, 1, 1,
                1, 1, 1, 1, ref a,
                1, 1, 1, 1, 1,
                1, 1, 1, 1, 1,
                1, 1, 1, 1, 1,
                1, 1, 1, 1, 1,
                1, 1, 1, 1, 1,
                1, 1, 1, 1, 1,
                1, 1,
                1, 1, 1, 1, ref b,
                1, 1,
                1, 1, 1, 1, 1,
                1,
                1, 1, 1, 1, 1, CallbackFun
                ));
                return 200;
            };

            Post["/IMEmEcTransCal2", true] = async (_, t) =>
            {
                double a = 0, b = 0, c = 0, d = 0, e = 0;
                //await Task.Run(() => IMEmEcTransCalMain(
                //"", "", 1,
                //1, 1, 1, 1,
                //1, 1, 1, 1, 1,
                //1, 1, 1, 1, 1,
                //1, 1, 1, 1, 1,
                //1, 1, 1, 1, 1,
                //1, 1, 1, 1, 1,
                //1, 1, 1, 1, 1,
                //1, 1, 1, 1, ref a,
                //1, 1, 1, 1, 1,
                //1, 1, 1, 1, 1,
                //1, 1, 1, 1, 1,
                //1, 1, 1, 1, 1,
                //1, 1, 1, 1, 1,
                //1,
                //1, 1, 1, 1,
                //1, 1, 1, 1, ref b,
                //ref c, 1, 1, 1, 1,
                //1, 1, 1, ref d, ref e,
                //1, 1, CallbackFun));
                return 200;
            };

            Post["/IMEmSzTransCal2", true] = async (_, t) =>
            {
                await Task.Run(() => IMPredictFrMainCal(1, 1, 1, 1, 1, 1, "", CallbackFun));
                return 200;
            };

            Post["/IMEmSzTransMesh2", true] = async (_, t) =>
            {
                await Task.Run(() => IMPredictFrMainCal(1, 1, 1, 1, 1, 1, "", CallbackFun));
                return 200;
            };

            Post["/IMMeEcStatorCal2", true] = async (_, t) =>
            {
                await Task.Run(() => IMMeEcStatorCalMain(
                    "", 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
               CallbackFun));
                return 200;
            };

            Post["/IMMeSzStatorCal2", true] = async (_, t) =>
            {
                //double[] a = 0,b=[];
                // await Task.Run(() => IMMeSzStatorCalMain(
                //     "",1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,ref a,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,ref b
                //   , CallbackFun));
                return 200;
            };

            Post["/IMPredictFr2", true] = async (_, t) =>
            {
                await Task.Run(() =>
                {
                    IMPredictFrMainCal(1, 1, 1, 1, 1, 1, "", CallbackFun);
                    System.Diagnostics.Debug.WriteLine("-----the end----------------");
                });
                return 200;
            };

        }



        [UnmanagedFunctionPointerAttribute(CallingConvention.Cdecl, CharSet = CharSet.Ansi)]
        public delegate void Callback(string s);
        public static void CallbackFun(string line)
        {
            System.Diagnostics.Debug.WriteLine(line);
        }

        [DllImport("../DLL/IMDbEcStatorCal2.dll", CallingConvention = CallingConvention.Cdecl, CharSet = CharSet.Ansi, EntryPoint = "IMDbEcStatorCalMain")]
        public static extern void IMDbEcStatorCalMain(
                string OutputPath,
                double Pn_, double I1_, int M_, int P_, double U_, double F_,
                double DI1_, double SCL_, int Q1_, int NK1_, double BK1_,
                int SSlotType_, double BS0_, double BS1_, double BS2_,
                double HS0_, double HS1_, double HS2_,
                double DO2_, double RCL_, int Q2_, int NK2_, double BK2_, double BSK_,
                int RSlotType_, double BR0_, double BR1_, double BR2_, double BR3_, double BR4_,
                double HR0_, double HR1_, double HR2_,
                double DETAG1_, double dSWedgeDw_, double dSLineBot_,
                double AA1_, double LL_, double CLB_, double DR_, int JC_, int Z1_, int A1_, int Y1_,
                int Me_, double Ae_, Callback cb);

        [DllImport("../DLL/IMEmEcSteadCal2.dll", CallingConvention = CallingConvention.Cdecl, CharSet = CharSet.Ansi, EntryPoint = "IMEmEcSteadCalMain")]
        public static extern void IMEmEcSteadCalMain(
                string DI_Output_, string DI_Review_, int FlagEMType0_, int M_, int P_,
                double D1_, double DI1_, double SCL_, int Q1_, int NK1_,
                double BK1_, double Kfes_, int IKRS_, int SSlotType_, double BS0_,
                double BS1_, double BS2_, double HS0_, double HS1_, double HS2_,
                double a_El_, double b_El_,
                int JC_, int swlay_, int A1_, int Y1_, int Z1_,
                double CLZ1_, double Srv_, int SCoilType_, int N1_, double Dsci_,
                double A1S_, double B1S_, double AA1_, double LL_,
                int Flag_SPhaseSequ_, int clockwise_stator_, int SCShape_, int SWCType_, ref double SWCFinArray_,
                double DO2_, double DI2_, double RCL_, int Q2_, int NK2_,
                double BK2_, double BSK_, double Kfer_, int IKRR_, int RSlotType_,
                double BR0_, double BR1_, double BR2_, double BR3_, double BR4_,
                double HR0_, double HR1_, double HR2_, double Es_, double Ed_,
                int JCR_, int rwlay_, int A2_, int Y2_, int Z2_,
                double CLZ2_, double Rrv_, int RCoilType_, int NR_, double Drci_,
                double A2R_, double B2R_,
                int Flag_RPhaseSequ_, int clockwise_rotor_, int RCShape_, int RWCType_, ref double RWCFinArray_,
                int Flag_ROutlet_, int Flag2KindWaveWinding_,
                double CLB_, double DR_, double Be_, double He_, double rob_,
                double roe_,
                double U_, double F_, double Slip_, int Fordermax_, int HarmCalType, Callback cb);

        [DllImport("../DLL/IMEmEcTransCal2.dll", CallingConvention = CallingConvention.Cdecl, CharSet = CharSet.Ansi, EntryPoint = "IMEmEcTransCalMain")]
        public static extern void IMEmEcTransCalMain(
                string OutputPath_, string ReviewPath_, int ContCalMethod,
                int M_, int P_, double U_, double F_,
                double D1_, double DI1_, double SCL_, int Q1_, int NK1_,
                double BK1_, double Kfes_, int IKRS_, int SSlotType_, double BS0_,
                double BS1_, double BS2_, double HS0_, double HS1_, double HS2_,
                int JC_, int swlay_, int A1_, int Y1_, int Z1_,
                double CLZ1_, double Srv_, int SCoilType_, double Dsci_,
                double A1S_, double B1S_, int N1_, double AA1_, double LL_,
                int Flag_SPhaseSequ_, int clockwise_stator_, int SCShape_, int SWCType_, ref double SWCFinArray_,
                double DO2_, double DI2_, double RCL_, int Q2_, int NK2_,
                double BK2_, double BSK_, double Kfer_, int IKRR_, int RSlotType_,
                double BR0_, double BR1_, double BR2_, double BR3_, double BR4_,
                double HR0_, double HR1_, double HR2_, double Es_, double Ed_,
                double CLB_, double DR_, double Be_, double He_, double rob_,
                double roe_,
                double WKKS_, double PFWP_, double WindLoss_, double ReferSpeed_,
                int FlagRMove_, int RunFlag0_, int RunFlag2_, int RunNums_, ref double RunX_,
                ref double RunY_, double SimTotalTime_, double step_, double Precision_, double InitAnglPos_,
                double InitNr_, int Flag_Us_line_, int N_Us_line_, ref double Time_Us_line_, ref double Us_line_,
                int FlagSteadyEstimate_, double ErrorSteadyEstimate_, Callback cb);

        [DllImport("../DLL/IMEmSzTransCal2.dll", CallingConvention = CallingConvention.Cdecl, CharSet = CharSet.Ansi, EntryPoint = "IMEmSzTransCalMain")]
        public static extern void IMEmSzTransCalMain(
                string OutputPath,
                int FlagEMType0, int M, int P, double U, double F,
                double D1, double DI1, double SCL, int Q1, int NK1,
                double BK1, double Kfes, int IKRS, int SSlotType, double BS0,
                double BS1, double BS2, double HS0, double HS1, double HS2,
                double SCCONDUCTY,
                int JC, int swlay, int A1, int Y1, int Z1,
                double CLZ1, double Srv, int SCoilType, int N1, double Dsci,
                double A1S, double B1S, double AA1, double LL, double DETAG1,
                double USPW,
                int Flag_SPhaseSequ, int clockwise_stator, int SCShape, int SWCType, ref double SWCFinArray,
                double DO2, double DI2, double RCL, int Q2, int NK2,
                double BK2, double BSK, double Kfer, int IKRR, int RSlotType,
                double BR0, double BR1, double BR2, double BR3, double BR4,
                double HR0, double HR1, double HR2, double RCCONDUCTY,
                int JCR, int rwlay, int A2, int Y2, int Z2,
                double CLZ2, double Rrv, int RCoilType, int NR, double Drci,
                double A2R, double B2R, double DETAG2, double URPW, int Flag2KindWaveWinding,
                int Flag_ROutlet, int Flag_RPhaseSequ, int clockwise_rotor, int RCShape, int RWCType,
                ref double RWCFinArray,
                double CLB, double DR, double Be, double He, double rob,
                double roe,
                int CalcuMult, double WKKS, double PFWP, double WindLoss, double ReferSpeed,
                int FlagRMove, int RunFlag0, int RunFlag2, int RunNums, ref double RunX,
                ref double RunY, double SimTotalTime, double step, double RequiredPrecision, double InitAnglPos,
                double InitNr, int Flag_Us_line, int N_Us_line, ref double Time_Us_line, ref double Us_line,
                int Numb_AixalSimu, int FlagSteadyEstimate, double ErrorSteadyEstimate,
                int Flag_Fourier, double InitTime_Fourier, int Flag_FourierMethod,
                double Fourier_FreqMax, double Fourier_FreqResolution, int Flag_RedefineStep, int Flag_Fourier_2powN_FFT2,
                int Flag_AirB_Fourier, int Fourier_AirB_ModeOrder, double Fourier_AirB_AmplMin,
                int Flag_AirF_Fourier, int Fourier_AirF_ModeOrder, double Fourier_AirF_AmplMin,

                double drmax_rotatedNode_, double d_GapOuter_, int number_of_rotating_node_in_GapSeparateBar_,
                int total_of_NODE_in_Rotor_all_, int total_of_fixedELEMENT_in_Rotor_,
                int total_of_NODE_in_Stator_all_, int total_of_fixedELEMENT_in_Stator_,
                ref int NodeNum_of_GapInner_, ref int NodeNum_of_GapOuter_, ref int ipoint_, ref int jpoint_, ref int kpoint_,
                ref double area_of_ELEMENT_, ref int MatNumber_, ref int ElemTypeNumber_, ref double x_pos_, ref double y_pos_,
                int total_of_rotatedNODEs_, ref int num_of_rotatedNODE_,
                ref int total_of_NODEs_on_firstBoundaryLine_, ref int num_of_firstNODE_,
                int total_of_NODES_on_Border_Rotor_, int total_of_NODES_on_Border_Stator_,
                ref int num_of_NODES_on_Border_Real_, ref int num_of_NODES_on_Border_Virtual_,

                double drmax_rotatedNode__, double d_GapOuter__, int number_of_rotating_node_in_GapSeparateBar__,
                int total_of_NODE_in_Rotor__, int total_of_fixedELEMENT_in_Rotor__,
                int total_of_NODE_in_Stator__, int total_of_fixedELEMENT_in_Stator__,
                ref int NodeNum_of_GapInner__, ref int NodeNum_of_GapOuter__, ref int ipoint__, ref int jpoint__, ref int kpoint__,
                ref double area_of_ELEMENT__, ref int MatNumber__, ref int ElemTypeNumber__, ref double x_pos__, ref double y_pos__,
                int total_of_rotatedNODEs__, ref int num_of_rotatedNODE__,
                ref int total_of_NODEs_on_firstBoundaryLine__, ref int num_of_firstNODE__);

        [DllImport("../DLL/IMEmSzTransMesh2.dll", CallingConvention = CallingConvention.Cdecl, CharSet = CharSet.Ansi, EntryPoint = "IMEmSzTransMeshMain")]
        public static extern void IMEmSzTransMeshMain(
                string OutputPath, double D1, double DI1, int Q1, int SSlotType,
                double HS0, double HS1, double HS2, double BS0, double BS1, double BS2,
                int swlay, double USPW, double DETAG1, double DO2,
                int CalcuMult, double dSLiner, double dSWedgeDw, double dSLineBot,
                int FlagSToothRi, int SToothRiRow, ref double SToothRi,
                int ElemNumPerSArc, int SmrtSizeStator, int FlagSToothAddSlot,
                double SToothAddSlotWidth, double SToothAddSlotHigth,
                int FlagEMType0, double DI2, int Q2,
                int RSlotType, double HR0, double HR1, double HR2,
                double BR0, double BR1, double BR2, double BR3, double BR4,
                int rwlay, double URPW, double DETAG2,
                int FlagAngleRSlot, int AngleRSlotRow, ref double AngleRSlot,
                int SmrtSizeRotor, Callback cb);

        [DllImport("../DLL/IMMeEcStatorCal2.dll", CallingConvention = CallingConvention.Cdecl, CharSet = CharSet.Ansi, EntryPoint = "IMMeEcStatorCalMain")]
        public static extern void IMMeEcStatorCalMain(
                string OutputPath,
                int P, double DI1, double D1, double SCL, int Q1,
                int NK1, double BK1, double Kfes, int SSlotType, double BS0,
                double BS1, double BS2, double HS0, double HS1, double HS2,
                int swlay, int Z1, double A1S, double B1S, int N1,
                double CLZ1, int OrdeMax, int Ordefr0, double Freqfr0, double Amplfr0,
                int FlagCal, Callback cb);

        [DllImport("../DLL/IMMeSzStatorCal2.dll", CallingConvention = CallingConvention.Cdecl, CharSet = CharSet.Ansi, EntryPoint = "IMMeSzStatorCalMain")]
        public static extern void IMMeSzStatorCalMain(
                string OutputPath, double D1, double DI1, double SCL, int Q1, double Kfes,
                int SSlotType, double HS0, double HS1, double HS2,
                double BS0, double BS1, double BS2, int NK1, double BK1,
                int swlay, int Z1, int SCoilType, double Dsci, double A1S, double B1S, int N1,
                int SWireCol, double DETAG1, double dSConductor, double dSCoil,
                double dSLiner, double dSLiner2, double dSWedgeDw, double dSLineBot,
                int MechCalCont, int MechStrucSCore, int MechStrucSWinding,
                int MechStrucSFrame, int SCSegNum, ref double Lsss, int STCElemNum,
                double MASSw, int ModeMax, double FreqMin, double FreqMax,
                double AngleF1stdot, double FrameEX, double FramePRXY, double FrameDENS,
                int FrameSSIZE, double FrameESIZE, int FlagSCoreFrame, double DeltFC,
                double Lsca, int NumFixDot, ref double FixDotXYZR, Callback cb);

        [DllImport("../DLL/IMPredictFr2.dll", CallingConvention = CallingConvention.Cdecl, CharSet = CharSet.Ansi, EntryPoint = "IMPredictFrMainCal")]
        public static extern void IMPredictFrMainCal(
                int P, int Q1, int Q2, double N_r, double F, int Frmax, string OutputPath, Callback cb);

    }
}