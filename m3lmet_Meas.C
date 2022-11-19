void m3lmet_Meas()
{
//=========Macro generated from canvas: m3lmet_Meas_canvas/m3lmet_Meas
//=========  (Fri Nov 18 13:11:15 2022) by ROOT version 6.12/07
   TCanvas *m3lmet_Meas_canvas = new TCanvas("m3lmet_Meas_canvas", "m3lmet_Meas",0,0,600,750);
   gStyle->SetOptFit(1);
   gStyle->SetOptStat(0);
   gStyle->SetOptTitle(0);
   m3lmet_Meas_canvas->SetHighLightColor(2);
   m3lmet_Meas_canvas->Range(0,0,1,1);
   m3lmet_Meas_canvas->SetFillColor(0);
   m3lmet_Meas_canvas->SetBorderMode(0);
   m3lmet_Meas_canvas->SetBorderSize(2);
   m3lmet_Meas_canvas->SetTickx(1);
   m3lmet_Meas_canvas->SetTicky(1);
   m3lmet_Meas_canvas->SetLeftMargin(0.18);
   m3lmet_Meas_canvas->SetRightMargin(0.04);
   m3lmet_Meas_canvas->SetBottomMargin(0.13);
   m3lmet_Meas_canvas->SetFrameFillStyle(0);
   m3lmet_Meas_canvas->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: pad1
   TPad *pad1 = new TPad("pad1", "pad1",0,0.3,1,1);
   pad1->Draw();
   pad1->cd();
   pad1->Range(-115.3846,-16.13113,525.641,629.114);
   pad1->SetFillColor(0);
   pad1->SetBorderMode(0);
   pad1->SetBorderSize(2);
   pad1->SetTickx(1);
   pad1->SetTicky(1);
   pad1->SetLeftMargin(0.18);
   pad1->SetRightMargin(0.04);
   pad1->SetTopMargin(0.06);
   pad1->SetBottomMargin(0.025);
   pad1->SetFrameFillStyle(0);
   pad1->SetFrameBorderMode(0);
   pad1->SetFrameFillStyle(0);
   pad1->SetFrameBorderMode(0);
   
   TH1D *m3lmet_Meas_total__125 = new TH1D("m3lmet_Meas_total__125","dummy",10,0,500);
   m3lmet_Meas_total__125->SetBinContent(3,8.58898);
   m3lmet_Meas_total__125->SetBinContent(4,190.6916);
   m3lmet_Meas_total__125->SetBinContent(5,441.1353);
   m3lmet_Meas_total__125->SetBinContent(6,344.5708);
   m3lmet_Meas_total__125->SetBinContent(7,200.6092);
   m3lmet_Meas_total__125->SetBinContent(8,116.6327);
   m3lmet_Meas_total__125->SetBinContent(9,63.37543);
   m3lmet_Meas_total__125->SetBinContent(10,36.50574);
   m3lmet_Meas_total__125->SetBinContent(11,93.83467);
   m3lmet_Meas_total__125->SetBinError(3,3.460671);
   m3lmet_Meas_total__125->SetBinError(4,9.403074);
   m3lmet_Meas_total__125->SetBinError(5,9.876751);
   m3lmet_Meas_total__125->SetBinError(6,7.938721);
   m3lmet_Meas_total__125->SetBinError(7,5.739633);
   m3lmet_Meas_total__125->SetBinError(8,4.042573);
   m3lmet_Meas_total__125->SetBinError(9,2.453364);
   m3lmet_Meas_total__125->SetBinError(10,1.835987);
   m3lmet_Meas_total__125->SetBinError(11,3.423893);
   m3lmet_Meas_total__125->SetMinimum(0);
   m3lmet_Meas_total__125->SetMaximum(590.3993);
   m3lmet_Meas_total__125->SetEntries(15128);
   m3lmet_Meas_total__125->SetDirectory(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#00cc00");
   m3lmet_Meas_total__125->SetFillColor(ci);
   m3lmet_Meas_total__125->SetMarkerStyle(20);
   m3lmet_Meas_total__125->SetMarkerSize(1.1);
   m3lmet_Meas_total__125->GetXaxis()->SetTitle("m_{WZ} [GeV]");
   m3lmet_Meas_total__125->GetXaxis()->SetMoreLogLabels();
   m3lmet_Meas_total__125->GetXaxis()->SetLabelFont(42);
   m3lmet_Meas_total__125->GetXaxis()->SetLabelOffset(999);
   m3lmet_Meas_total__125->GetXaxis()->SetLabelSize(0.05);
   m3lmet_Meas_total__125->GetXaxis()->SetTitleSize(0.05);
   m3lmet_Meas_total__125->GetXaxis()->SetTitleOffset(999);
   m3lmet_Meas_total__125->GetXaxis()->SetTitleFont(42);
   m3lmet_Meas_total__125->GetYaxis()->SetTitle("Events/bin");
   m3lmet_Meas_total__125->GetYaxis()->SetLabelFont(42);
   m3lmet_Meas_total__125->GetYaxis()->SetLabelOffset(0.007);
   m3lmet_Meas_total__125->GetYaxis()->SetLabelSize(0.05);
   m3lmet_Meas_total__125->GetYaxis()->SetTitleSize(0.06);
   m3lmet_Meas_total__125->GetYaxis()->SetTitleOffset(1.48);
   m3lmet_Meas_total__125->GetYaxis()->SetTitleFont(42);
   m3lmet_Meas_total__125->GetZaxis()->SetLabelFont(42);
   m3lmet_Meas_total__125->GetZaxis()->SetLabelOffset(0.007);
   m3lmet_Meas_total__125->GetZaxis()->SetLabelSize(0.05);
   m3lmet_Meas_total__125->GetZaxis()->SetTitleSize(0.06);
   m3lmet_Meas_total__125->GetZaxis()->SetTitleFont(42);
   m3lmet_Meas_total__125->Draw("HIST");
   
   THStack *m3lmet_Meas_stack = new THStack();
   m3lmet_Meas_stack->SetName("m3lmet_Meas_stack");
   m3lmet_Meas_stack->SetTitle("m3lmet_Meas");
   
   TH1F *m3lmet_Meas_stack_stack_32 = new TH1F("m3lmet_Meas_stack_stack_32","m3lmet_Meas",10,0,500);
   m3lmet_Meas_stack_stack_32->SetMinimum(0);
   m3lmet_Meas_stack_stack_32->SetMaximum(463.1921);
   m3lmet_Meas_stack_stack_32->SetDirectory(0);
   m3lmet_Meas_stack_stack_32->SetStats(0);
   m3lmet_Meas_stack_stack_32->SetLineStyle(0);
   m3lmet_Meas_stack_stack_32->SetMarkerStyle(20);
   m3lmet_Meas_stack_stack_32->GetXaxis()->SetLabelFont(42);
   m3lmet_Meas_stack_stack_32->GetXaxis()->SetLabelOffset(0.007);
   m3lmet_Meas_stack_stack_32->GetXaxis()->SetLabelSize(0.05);
   m3lmet_Meas_stack_stack_32->GetXaxis()->SetTitleSize(0.06);
   m3lmet_Meas_stack_stack_32->GetXaxis()->SetTitleOffset(0.9);
   m3lmet_Meas_stack_stack_32->GetXaxis()->SetTitleFont(42);
   m3lmet_Meas_stack_stack_32->GetYaxis()->SetLabelFont(42);
   m3lmet_Meas_stack_stack_32->GetYaxis()->SetLabelOffset(0.007);
   m3lmet_Meas_stack_stack_32->GetYaxis()->SetLabelSize(0.05);
   m3lmet_Meas_stack_stack_32->GetYaxis()->SetTitleSize(0.06);
   m3lmet_Meas_stack_stack_32->GetYaxis()->SetTitleOffset(1.35);
   m3lmet_Meas_stack_stack_32->GetYaxis()->SetTitleFont(42);
   m3lmet_Meas_stack_stack_32->GetZaxis()->SetLabelFont(42);
   m3lmet_Meas_stack_stack_32->GetZaxis()->SetLabelOffset(0.007);
   m3lmet_Meas_stack_stack_32->GetZaxis()->SetLabelSize(0.05);
   m3lmet_Meas_stack_stack_32->GetZaxis()->SetTitleSize(0.06);
   m3lmet_Meas_stack_stack_32->GetZaxis()->SetTitleFont(42);
   m3lmet_Meas_stack->SetHistogram(m3lmet_Meas_stack_stack_32);
   
   
   TH1D *m3lmet_Meas_fakes_VV_stack_1 = new TH1D("m3lmet_Meas_fakes_VV_stack_1","dummy",10,0,500);
   m3lmet_Meas_fakes_VV_stack_1->SetBinContent(4,0.09719337);
   m3lmet_Meas_fakes_VV_stack_1->SetBinContent(5,0.1943867);
   m3lmet_Meas_fakes_VV_stack_1->SetBinContent(7,0.2915801);
   m3lmet_Meas_fakes_VV_stack_1->SetBinContent(11,0.09719337);
   m3lmet_Meas_fakes_VV_stack_1->SetBinError(4,0.09719337);
   m3lmet_Meas_fakes_VV_stack_1->SetBinError(5,0.1374522);
   m3lmet_Meas_fakes_VV_stack_1->SetBinError(7,0.1683439);
   m3lmet_Meas_fakes_VV_stack_1->SetBinError(11,0.09719337);
   m3lmet_Meas_fakes_VV_stack_1->SetEntries(7);

   ci = TColor::GetColor("#2e3294");
   m3lmet_Meas_fakes_VV_stack_1->SetFillColor(ci);
   m3lmet_Meas_fakes_VV_stack_1->SetMarkerStyle(0);
   m3lmet_Meas_fakes_VV_stack_1->SetMarkerSize(1.1);
   m3lmet_Meas_fakes_VV_stack_1->GetXaxis()->SetTitle("m_{WZ} [GeV]");
   m3lmet_Meas_fakes_VV_stack_1->GetXaxis()->SetMoreLogLabels();
   m3lmet_Meas_fakes_VV_stack_1->GetXaxis()->SetLabelFont(42);
   m3lmet_Meas_fakes_VV_stack_1->GetXaxis()->SetLabelOffset(0.007);
   m3lmet_Meas_fakes_VV_stack_1->GetXaxis()->SetLabelSize(0.05);
   m3lmet_Meas_fakes_VV_stack_1->GetXaxis()->SetTitleSize(0.06);
   m3lmet_Meas_fakes_VV_stack_1->GetXaxis()->SetTitleOffset(0.9);
   m3lmet_Meas_fakes_VV_stack_1->GetXaxis()->SetTitleFont(42);
   m3lmet_Meas_fakes_VV_stack_1->GetYaxis()->SetTitle("Events/bin");
   m3lmet_Meas_fakes_VV_stack_1->GetYaxis()->SetLabelFont(42);
   m3lmet_Meas_fakes_VV_stack_1->GetYaxis()->SetLabelOffset(0.007);
   m3lmet_Meas_fakes_VV_stack_1->GetYaxis()->SetLabelSize(0.05);
   m3lmet_Meas_fakes_VV_stack_1->GetYaxis()->SetTitleSize(0.06);
   m3lmet_Meas_fakes_VV_stack_1->GetYaxis()->SetTitleOffset(1.35);
   m3lmet_Meas_fakes_VV_stack_1->GetYaxis()->SetTitleFont(42);
   m3lmet_Meas_fakes_VV_stack_1->GetZaxis()->SetLabelFont(42);
   m3lmet_Meas_fakes_VV_stack_1->GetZaxis()->SetLabelOffset(0.007);
   m3lmet_Meas_fakes_VV_stack_1->GetZaxis()->SetLabelSize(0.05);
   m3lmet_Meas_fakes_VV_stack_1->GetZaxis()->SetTitleSize(0.06);
   m3lmet_Meas_fakes_VV_stack_1->GetZaxis()->SetTitleFont(42);
   m3lmet_Meas_stack->Add(m3lmet_Meas_fakes_VV_stack_1,"");
   
   TH1D *m3lmet_Meas_fakes_TT_stack_2 = new TH1D("m3lmet_Meas_fakes_TT_stack_2","dummy",10,0,500);
   m3lmet_Meas_fakes_TT_stack_2->SetBinContent(3,0.4446195);
   m3lmet_Meas_fakes_TT_stack_2->SetBinContent(4,6.765545);
   m3lmet_Meas_fakes_TT_stack_2->SetBinContent(5,14.16327);
   m3lmet_Meas_fakes_TT_stack_2->SetBinContent(6,13.85561);
   m3lmet_Meas_fakes_TT_stack_2->SetBinContent(7,9.043215);
   m3lmet_Meas_fakes_TT_stack_2->SetBinContent(8,4.521607);
   m3lmet_Meas_fakes_TT_stack_2->SetBinContent(9,2.99224);
   m3lmet_Meas_fakes_TT_stack_2->SetBinContent(10,1.396379);
   m3lmet_Meas_fakes_TT_stack_2->SetBinContent(11,1.861838);
   m3lmet_Meas_fakes_TT_stack_2->SetBinError(3,0.1862382);
   m3lmet_Meas_fakes_TT_stack_2->SetBinError(4,0.6858206);
   m3lmet_Meas_fakes_TT_stack_2->SetBinError(5,0.9795211);
   m3lmet_Meas_fakes_TT_stack_2->SetBinError(6,0.9651727);
   m3lmet_Meas_fakes_TT_stack_2->SetBinError(7,0.7754493);
   m3lmet_Meas_fakes_TT_stack_2->SetBinError(8,0.5563306);
   m3lmet_Meas_fakes_TT_stack_2->SetBinError(9,0.4460568);
   m3lmet_Meas_fakes_TT_stack_2->SetBinError(10,0.3047148);
   m3lmet_Meas_fakes_TT_stack_2->SetBinError(11,0.3761481);
   m3lmet_Meas_fakes_TT_stack_2->SetEntries(833);

   ci = TColor::GetColor("#666666");
   m3lmet_Meas_fakes_TT_stack_2->SetFillColor(ci);
   m3lmet_Meas_fakes_TT_stack_2->SetMarkerStyle(0);
   m3lmet_Meas_fakes_TT_stack_2->SetMarkerSize(1.1);
   m3lmet_Meas_fakes_TT_stack_2->GetXaxis()->SetTitle("m_{WZ} [GeV]");
   m3lmet_Meas_fakes_TT_stack_2->GetXaxis()->SetMoreLogLabels();
   m3lmet_Meas_fakes_TT_stack_2->GetXaxis()->SetLabelFont(42);
   m3lmet_Meas_fakes_TT_stack_2->GetXaxis()->SetLabelOffset(0.007);
   m3lmet_Meas_fakes_TT_stack_2->GetXaxis()->SetLabelSize(0.05);
   m3lmet_Meas_fakes_TT_stack_2->GetXaxis()->SetTitleSize(0.06);
   m3lmet_Meas_fakes_TT_stack_2->GetXaxis()->SetTitleOffset(0.9);
   m3lmet_Meas_fakes_TT_stack_2->GetXaxis()->SetTitleFont(42);
   m3lmet_Meas_fakes_TT_stack_2->GetYaxis()->SetTitle("Events/bin");
   m3lmet_Meas_fakes_TT_stack_2->GetYaxis()->SetLabelFont(42);
   m3lmet_Meas_fakes_TT_stack_2->GetYaxis()->SetLabelOffset(0.007);
   m3lmet_Meas_fakes_TT_stack_2->GetYaxis()->SetLabelSize(0.05);
   m3lmet_Meas_fakes_TT_stack_2->GetYaxis()->SetTitleSize(0.06);
   m3lmet_Meas_fakes_TT_stack_2->GetYaxis()->SetTitleOffset(1.35);
   m3lmet_Meas_fakes_TT_stack_2->GetYaxis()->SetTitleFont(42);
   m3lmet_Meas_fakes_TT_stack_2->GetZaxis()->SetLabelFont(42);
   m3lmet_Meas_fakes_TT_stack_2->GetZaxis()->SetLabelOffset(0.007);
   m3lmet_Meas_fakes_TT_stack_2->GetZaxis()->SetLabelSize(0.05);
   m3lmet_Meas_fakes_TT_stack_2->GetZaxis()->SetTitleSize(0.06);
   m3lmet_Meas_fakes_TT_stack_2->GetZaxis()->SetTitleFont(42);
   m3lmet_Meas_stack->Add(m3lmet_Meas_fakes_TT_stack_2,"");
   
   TH1D *m3lmet_Meas_fakes_DY_stack_3 = new TH1D("m3lmet_Meas_fakes_DY_stack_3","dummy",10,0,500);
   m3lmet_Meas_fakes_DY_stack_3->SetBinContent(3,6.878088);
   m3lmet_Meas_fakes_DY_stack_3->SetBinContent(4,42.98805);
   m3lmet_Meas_fakes_DY_stack_3->SetBinContent(5,34.39044);
   m3lmet_Meas_fakes_DY_stack_3->SetBinContent(6,18.91474);
   m3lmet_Meas_fakes_DY_stack_3->SetBinContent(7,8.597611);
   m3lmet_Meas_fakes_DY_stack_3->SetBinContent(8,3.439044);
   m3lmet_Meas_fakes_DY_stack_3->SetBinContent(11,1.719522);
   m3lmet_Meas_fakes_DY_stack_3->SetBinError(3,3.439044);
   m3lmet_Meas_fakes_DY_stack_3->SetBinError(4,8.597611);
   m3lmet_Meas_fakes_DY_stack_3->SetBinError(5,7.689937);
   m3lmet_Meas_fakes_DY_stack_3->SetBinError(6,5.70301);
   m3lmet_Meas_fakes_DY_stack_3->SetBinError(7,3.844968);
   m3lmet_Meas_fakes_DY_stack_3->SetBinError(8,2.431771);
   m3lmet_Meas_fakes_DY_stack_3->SetBinError(11,1.719522);
   m3lmet_Meas_fakes_DY_stack_3->SetEntries(68);

   ci = TColor::GetColor("#cccccc");
   m3lmet_Meas_fakes_DY_stack_3->SetFillColor(ci);
   m3lmet_Meas_fakes_DY_stack_3->SetMarkerStyle(0);
   m3lmet_Meas_fakes_DY_stack_3->SetMarkerSize(1.1);
   m3lmet_Meas_fakes_DY_stack_3->GetXaxis()->SetTitle("m_{WZ} [GeV]");
   m3lmet_Meas_fakes_DY_stack_3->GetXaxis()->SetMoreLogLabels();
   m3lmet_Meas_fakes_DY_stack_3->GetXaxis()->SetLabelFont(42);
   m3lmet_Meas_fakes_DY_stack_3->GetXaxis()->SetLabelOffset(0.007);
   m3lmet_Meas_fakes_DY_stack_3->GetXaxis()->SetLabelSize(0.05);
   m3lmet_Meas_fakes_DY_stack_3->GetXaxis()->SetTitleSize(0.06);
   m3lmet_Meas_fakes_DY_stack_3->GetXaxis()->SetTitleOffset(0.9);
   m3lmet_Meas_fakes_DY_stack_3->GetXaxis()->SetTitleFont(42);
   m3lmet_Meas_fakes_DY_stack_3->GetYaxis()->SetTitle("Events/bin");
   m3lmet_Meas_fakes_DY_stack_3->GetYaxis()->SetLabelFont(42);
   m3lmet_Meas_fakes_DY_stack_3->GetYaxis()->SetLabelOffset(0.007);
   m3lmet_Meas_fakes_DY_stack_3->GetYaxis()->SetLabelSize(0.05);
   m3lmet_Meas_fakes_DY_stack_3->GetYaxis()->SetTitleSize(0.06);
   m3lmet_Meas_fakes_DY_stack_3->GetYaxis()->SetTitleOffset(1.35);
   m3lmet_Meas_fakes_DY_stack_3->GetYaxis()->SetTitleFont(42);
   m3lmet_Meas_fakes_DY_stack_3->GetZaxis()->SetLabelFont(42);
   m3lmet_Meas_fakes_DY_stack_3->GetZaxis()->SetLabelOffset(0.007);
   m3lmet_Meas_fakes_DY_stack_3->GetZaxis()->SetLabelSize(0.05);
   m3lmet_Meas_fakes_DY_stack_3->GetZaxis()->SetTitleSize(0.06);
   m3lmet_Meas_fakes_DY_stack_3->GetZaxis()->SetTitleFont(42);
   m3lmet_Meas_stack->Add(m3lmet_Meas_fakes_DY_stack_3,"");
   
   TH1D *m3lmet_Meas_prompt_ZZ_stack_4 = new TH1D("m3lmet_Meas_prompt_ZZ_stack_4","dummy",10,0,500);
   m3lmet_Meas_prompt_ZZ_stack_4->SetBinContent(4,13.76141);
   m3lmet_Meas_prompt_ZZ_stack_4->SetBinContent(5,20.91734);
   m3lmet_Meas_prompt_ZZ_stack_4->SetBinContent(6,14.67883);
   m3lmet_Meas_prompt_ZZ_stack_4->SetBinContent(7,10.82564);
   m3lmet_Meas_prompt_ZZ_stack_4->SetBinContent(8,3.119252);
   m3lmet_Meas_prompt_ZZ_stack_4->SetBinContent(9,3.853194);
   m3lmet_Meas_prompt_ZZ_stack_4->SetBinContent(10,1.100912);
   m3lmet_Meas_prompt_ZZ_stack_4->SetBinContent(11,4.954106);
   m3lmet_Meas_prompt_ZZ_stack_4->SetBinError(4,1.58903);
   m3lmet_Meas_prompt_ZZ_stack_4->SetBinError(5,1.959088);
   m3lmet_Meas_prompt_ZZ_stack_4->SetBinError(6,1.641143);
   m3lmet_Meas_prompt_ZZ_stack_4->SetBinError(7,1.409378);
   m3lmet_Meas_prompt_ZZ_stack_4->SetBinError(8,0.7565297);
   m3lmet_Meas_prompt_ZZ_stack_4->SetBinError(9,0.8408358);
   m3lmet_Meas_prompt_ZZ_stack_4->SetBinError(10,0.4494456);
   m3lmet_Meas_prompt_ZZ_stack_4->SetBinError(11,0.9534182);
   m3lmet_Meas_prompt_ZZ_stack_4->SetEntries(399);

   ci = TColor::GetColor("#00cc00");
   m3lmet_Meas_prompt_ZZ_stack_4->SetFillColor(ci);
   m3lmet_Meas_prompt_ZZ_stack_4->SetMarkerStyle(0);
   m3lmet_Meas_prompt_ZZ_stack_4->SetMarkerSize(1.1);
   m3lmet_Meas_prompt_ZZ_stack_4->GetXaxis()->SetTitle("m_{WZ} [GeV]");
   m3lmet_Meas_prompt_ZZ_stack_4->GetXaxis()->SetMoreLogLabels();
   m3lmet_Meas_prompt_ZZ_stack_4->GetXaxis()->SetLabelFont(42);
   m3lmet_Meas_prompt_ZZ_stack_4->GetXaxis()->SetLabelOffset(0.007);
   m3lmet_Meas_prompt_ZZ_stack_4->GetXaxis()->SetLabelSize(0.05);
   m3lmet_Meas_prompt_ZZ_stack_4->GetXaxis()->SetTitleSize(0.06);
   m3lmet_Meas_prompt_ZZ_stack_4->GetXaxis()->SetTitleOffset(0.9);
   m3lmet_Meas_prompt_ZZ_stack_4->GetXaxis()->SetTitleFont(42);
   m3lmet_Meas_prompt_ZZ_stack_4->GetYaxis()->SetTitle("Events/bin");
   m3lmet_Meas_prompt_ZZ_stack_4->GetYaxis()->SetLabelFont(42);
   m3lmet_Meas_prompt_ZZ_stack_4->GetYaxis()->SetLabelOffset(0.007);
   m3lmet_Meas_prompt_ZZ_stack_4->GetYaxis()->SetLabelSize(0.05);
   m3lmet_Meas_prompt_ZZ_stack_4->GetYaxis()->SetTitleSize(0.06);
   m3lmet_Meas_prompt_ZZ_stack_4->GetYaxis()->SetTitleOffset(1.35);
   m3lmet_Meas_prompt_ZZ_stack_4->GetYaxis()->SetTitleFont(42);
   m3lmet_Meas_prompt_ZZ_stack_4->GetZaxis()->SetLabelFont(42);
   m3lmet_Meas_prompt_ZZ_stack_4->GetZaxis()->SetLabelOffset(0.007);
   m3lmet_Meas_prompt_ZZ_stack_4->GetZaxis()->SetLabelSize(0.05);
   m3lmet_Meas_prompt_ZZ_stack_4->GetZaxis()->SetTitleSize(0.06);
   m3lmet_Meas_prompt_ZZ_stack_4->GetZaxis()->SetTitleFont(42);
   m3lmet_Meas_stack->Add(m3lmet_Meas_prompt_ZZ_stack_4,"");
   
   TH1D *m3lmet_Meas_prompt_WZ_stack_5 = new TH1D("m3lmet_Meas_prompt_WZ_stack_5","dummy",10,0,500);
   m3lmet_Meas_prompt_WZ_stack_5->SetBinContent(3,1.266272);
   m3lmet_Meas_prompt_WZ_stack_5->SetBinContent(4,127.0794);
   m3lmet_Meas_prompt_WZ_stack_5->SetBinContent(5,371.4699);
   m3lmet_Meas_prompt_WZ_stack_5->SetBinContent(6,297.1216);
   m3lmet_Meas_prompt_WZ_stack_5->SetBinContent(7,171.8512);
   m3lmet_Meas_prompt_WZ_stack_5->SetBinContent(8,105.5528);
   m3lmet_Meas_prompt_WZ_stack_5->SetBinContent(9,56.52999);
   m3lmet_Meas_prompt_WZ_stack_5->SetBinContent(10,34.00844);
   m3lmet_Meas_prompt_WZ_stack_5->SetBinContent(11,85.20201);
   m3lmet_Meas_prompt_WZ_stack_5->SetBinError(3,0.3384254);
   m3lmet_Meas_prompt_WZ_stack_5->SetBinError(4,3.390292);
   m3lmet_Meas_prompt_WZ_stack_5->SetBinError(5,5.796439);
   m3lmet_Meas_prompt_WZ_stack_5->SetBinError(6,5.184019);
   m3lmet_Meas_prompt_WZ_stack_5->SetBinError(7,3.942536);
   m3lmet_Meas_prompt_WZ_stack_5->SetBinError(8,3.089828);
   m3lmet_Meas_prompt_WZ_stack_5->SetBinError(9,2.2612);
   m3lmet_Meas_prompt_WZ_stack_5->SetBinError(10,1.753852);
   m3lmet_Meas_prompt_WZ_stack_5->SetBinError(11,2.776031);
   m3lmet_Meas_prompt_WZ_stack_5->SetEntries(13821);

   ci = TColor::GetColor("#ffcc00");
   m3lmet_Meas_prompt_WZ_stack_5->SetFillColor(ci);
   m3lmet_Meas_prompt_WZ_stack_5->SetMarkerStyle(0);
   m3lmet_Meas_prompt_WZ_stack_5->SetMarkerSize(1.1);
   m3lmet_Meas_prompt_WZ_stack_5->GetXaxis()->SetTitle("m_{WZ} [GeV]");
   m3lmet_Meas_prompt_WZ_stack_5->GetXaxis()->SetMoreLogLabels();
   m3lmet_Meas_prompt_WZ_stack_5->GetXaxis()->SetLabelFont(42);
   m3lmet_Meas_prompt_WZ_stack_5->GetXaxis()->SetLabelOffset(0.007);
   m3lmet_Meas_prompt_WZ_stack_5->GetXaxis()->SetLabelSize(0.05);
   m3lmet_Meas_prompt_WZ_stack_5->GetXaxis()->SetTitleSize(0.06);
   m3lmet_Meas_prompt_WZ_stack_5->GetXaxis()->SetTitleOffset(0.9);
   m3lmet_Meas_prompt_WZ_stack_5->GetXaxis()->SetTitleFont(42);
   m3lmet_Meas_prompt_WZ_stack_5->GetYaxis()->SetTitle("Events/bin");
   m3lmet_Meas_prompt_WZ_stack_5->GetYaxis()->SetLabelFont(42);
   m3lmet_Meas_prompt_WZ_stack_5->GetYaxis()->SetLabelOffset(0.007);
   m3lmet_Meas_prompt_WZ_stack_5->GetYaxis()->SetLabelSize(0.05);
   m3lmet_Meas_prompt_WZ_stack_5->GetYaxis()->SetTitleSize(0.06);
   m3lmet_Meas_prompt_WZ_stack_5->GetYaxis()->SetTitleOffset(1.35);
   m3lmet_Meas_prompt_WZ_stack_5->GetYaxis()->SetTitleFont(42);
   m3lmet_Meas_prompt_WZ_stack_5->GetZaxis()->SetLabelFont(42);
   m3lmet_Meas_prompt_WZ_stack_5->GetZaxis()->SetLabelOffset(0.007);
   m3lmet_Meas_prompt_WZ_stack_5->GetZaxis()->SetLabelSize(0.05);
   m3lmet_Meas_prompt_WZ_stack_5->GetZaxis()->SetTitleSize(0.06);
   m3lmet_Meas_prompt_WZ_stack_5->GetZaxis()->SetTitleFont(42);
   m3lmet_Meas_stack->Add(m3lmet_Meas_prompt_WZ_stack_5,"");
   m3lmet_Meas_stack->Draw("same hist");
   
   TH1D *m3lmet_Meas_total__126 = new TH1D("m3lmet_Meas_total__126","dummy",10,0,500);
   m3lmet_Meas_total__126->SetBinContent(3,8.58898);
   m3lmet_Meas_total__126->SetBinContent(4,190.6916);
   m3lmet_Meas_total__126->SetBinContent(5,441.1353);
   m3lmet_Meas_total__126->SetBinContent(6,344.5708);
   m3lmet_Meas_total__126->SetBinContent(7,200.6092);
   m3lmet_Meas_total__126->SetBinContent(8,116.6327);
   m3lmet_Meas_total__126->SetBinContent(9,63.37543);
   m3lmet_Meas_total__126->SetBinContent(10,36.50574);
   m3lmet_Meas_total__126->SetBinContent(11,93.83467);
   m3lmet_Meas_total__126->SetBinError(3,3.460671);
   m3lmet_Meas_total__126->SetBinError(4,9.403074);
   m3lmet_Meas_total__126->SetBinError(5,9.876751);
   m3lmet_Meas_total__126->SetBinError(6,7.938721);
   m3lmet_Meas_total__126->SetBinError(7,5.739633);
   m3lmet_Meas_total__126->SetBinError(8,4.042573);
   m3lmet_Meas_total__126->SetBinError(9,2.453364);
   m3lmet_Meas_total__126->SetBinError(10,1.835987);
   m3lmet_Meas_total__126->SetBinError(11,3.423893);
   m3lmet_Meas_total__126->SetMinimum(0);
   m3lmet_Meas_total__126->SetMaximum(590.3993);
   m3lmet_Meas_total__126->SetEntries(15128);
   m3lmet_Meas_total__126->SetDirectory(0);

   ci = TColor::GetColor("#00cc00");
   m3lmet_Meas_total__126->SetFillColor(ci);
   m3lmet_Meas_total__126->SetMarkerStyle(20);
   m3lmet_Meas_total__126->SetMarkerSize(1.1);
   m3lmet_Meas_total__126->GetXaxis()->SetTitle("m_{WZ} [GeV]");
   m3lmet_Meas_total__126->GetXaxis()->SetMoreLogLabels();
   m3lmet_Meas_total__126->GetXaxis()->SetLabelFont(42);
   m3lmet_Meas_total__126->GetXaxis()->SetLabelOffset(999);
   m3lmet_Meas_total__126->GetXaxis()->SetLabelSize(0.05);
   m3lmet_Meas_total__126->GetXaxis()->SetTitleSize(0.05);
   m3lmet_Meas_total__126->GetXaxis()->SetTitleOffset(999);
   m3lmet_Meas_total__126->GetXaxis()->SetTitleFont(42);
   m3lmet_Meas_total__126->GetYaxis()->SetTitle("Events/bin");
   m3lmet_Meas_total__126->GetYaxis()->SetLabelFont(42);
   m3lmet_Meas_total__126->GetYaxis()->SetLabelOffset(0.007);
   m3lmet_Meas_total__126->GetYaxis()->SetLabelSize(0.05);
   m3lmet_Meas_total__126->GetYaxis()->SetTitleSize(0.06);
   m3lmet_Meas_total__126->GetYaxis()->SetTitleOffset(1.48);
   m3lmet_Meas_total__126->GetYaxis()->SetTitleFont(42);
   m3lmet_Meas_total__126->GetZaxis()->SetLabelFont(42);
   m3lmet_Meas_total__126->GetZaxis()->SetLabelOffset(0.007);
   m3lmet_Meas_total__126->GetZaxis()->SetLabelSize(0.05);
   m3lmet_Meas_total__126->GetZaxis()->SetTitleSize(0.06);
   m3lmet_Meas_total__126->GetZaxis()->SetTitleFont(42);
   m3lmet_Meas_total__126->Draw("AXIS SAME");
   
   Double_t m3lmet_Meas_total_errors_fx3156[8] = {
   125,
   175,
   225,
   275,
   325,
   375,
   425,
   475};
   Double_t m3lmet_Meas_total_errors_fy3156[8] = {
   8.58898,
   190.6916,
   441.1353,
   344.5708,
   200.6092,
   116.6327,
   63.37543,
   36.50574};
   Double_t m3lmet_Meas_total_errors_felx3156[8] = {
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25};
   Double_t m3lmet_Meas_total_errors_fely3156[8] = {
   3.460671,
   9.403074,
   9.876751,
   7.938721,
   5.739633,
   4.042573,
   2.453364,
   1.835987};
   Double_t m3lmet_Meas_total_errors_fehx3156[8] = {
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25};
   Double_t m3lmet_Meas_total_errors_fehy3156[8] = {
   3.460671,
   9.403074,
   9.876751,
   7.938721,
   5.739633,
   4.042573,
   2.453364,
   1.835987};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(8,m3lmet_Meas_total_errors_fx3156,m3lmet_Meas_total_errors_fy3156,m3lmet_Meas_total_errors_felx3156,m3lmet_Meas_total_errors_fehx3156,m3lmet_Meas_total_errors_fely3156,m3lmet_Meas_total_errors_fehy3156);
   grae->SetName("m3lmet_Meas_total_errors");
   grae->SetTitle("Graph");
   grae->SetFillColor(1);
   grae->SetFillStyle(3013);
   grae->SetMarkerStyle(0);
   
   TH1F *Graph_m3lmet_Meas_total_errors3156 = new TH1F("Graph_m3lmet_Meas_total_errors3156","Graph",100,60,540);
   Graph_m3lmet_Meas_total_errors3156->SetMinimum(4.615478);
   Graph_m3lmet_Meas_total_errors3156->SetMaximum(495.6005);
   Graph_m3lmet_Meas_total_errors3156->SetDirectory(0);
   Graph_m3lmet_Meas_total_errors3156->SetStats(0);
   Graph_m3lmet_Meas_total_errors3156->SetLineStyle(0);
   Graph_m3lmet_Meas_total_errors3156->SetMarkerStyle(20);
   Graph_m3lmet_Meas_total_errors3156->GetXaxis()->SetLabelFont(42);
   Graph_m3lmet_Meas_total_errors3156->GetXaxis()->SetLabelOffset(0.007);
   Graph_m3lmet_Meas_total_errors3156->GetXaxis()->SetLabelSize(0.05);
   Graph_m3lmet_Meas_total_errors3156->GetXaxis()->SetTitleSize(0.06);
   Graph_m3lmet_Meas_total_errors3156->GetXaxis()->SetTitleOffset(0.9);
   Graph_m3lmet_Meas_total_errors3156->GetXaxis()->SetTitleFont(42);
   Graph_m3lmet_Meas_total_errors3156->GetYaxis()->SetLabelFont(42);
   Graph_m3lmet_Meas_total_errors3156->GetYaxis()->SetLabelOffset(0.007);
   Graph_m3lmet_Meas_total_errors3156->GetYaxis()->SetLabelSize(0.05);
   Graph_m3lmet_Meas_total_errors3156->GetYaxis()->SetTitleSize(0.06);
   Graph_m3lmet_Meas_total_errors3156->GetYaxis()->SetTitleOffset(1.35);
   Graph_m3lmet_Meas_total_errors3156->GetYaxis()->SetTitleFont(42);
   Graph_m3lmet_Meas_total_errors3156->GetZaxis()->SetLabelFont(42);
   Graph_m3lmet_Meas_total_errors3156->GetZaxis()->SetLabelOffset(0.007);
   Graph_m3lmet_Meas_total_errors3156->GetZaxis()->SetLabelSize(0.05);
   Graph_m3lmet_Meas_total_errors3156->GetZaxis()->SetTitleSize(0.06);
   Graph_m3lmet_Meas_total_errors3156->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_m3lmet_Meas_total_errors3156);
   
   grae->Draw("pe2 ");
   
   Double_t m3lmet_Meas_data_graph_fx3157[10] = {
   25,
   75,
   125,
   175,
   225,
   275,
   325,
   375,
   425,
   475};
   Double_t m3lmet_Meas_data_graph_fy3157[10] = {
   0,
   0,
   11,
   199,
   426,
   362,
   192,
   128,
   61,
   35};
   Double_t m3lmet_Meas_data_graph_felx3157[10] = {
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25};
   Double_t m3lmet_Meas_data_graph_fely3157[10] = {
   0,
   0,
   3.265636,
   14.09517,
   20.63211,
   19.01792,
   13.84462,
   11.29915,
   7.788934,
   5.887788};
   Double_t m3lmet_Meas_data_graph_fehx3157[10] = {
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25};
   Double_t m3lmet_Meas_data_graph_fehy3157[10] = {
   1.841055,
   1.841055,
   4.416609,
   15.13071,
   21.65639,
   20.04426,
   14.8808,
   12.34346,
   8.853137,
   6.972554};
   grae = new TGraphAsymmErrors(10,m3lmet_Meas_data_graph_fx3157,m3lmet_Meas_data_graph_fy3157,m3lmet_Meas_data_graph_felx3157,m3lmet_Meas_data_graph_fehx3157,m3lmet_Meas_data_graph_fely3157,m3lmet_Meas_data_graph_fehy3157);
   grae->SetName("m3lmet_Meas_data_graph");
   grae->SetTitle("Graph");
   grae->SetFillStyle(1000);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.1);
   
   TH1F *Graph_m3lmet_Meas_data_graph3157 = new TH1F("Graph_m3lmet_Meas_data_graph3157","Graph",100,0,550);
   Graph_m3lmet_Meas_data_graph3157->SetMinimum(0);
   Graph_m3lmet_Meas_data_graph3157->SetMaximum(492.422);
   Graph_m3lmet_Meas_data_graph3157->SetDirectory(0);
   Graph_m3lmet_Meas_data_graph3157->SetStats(0);
   Graph_m3lmet_Meas_data_graph3157->SetLineStyle(0);
   Graph_m3lmet_Meas_data_graph3157->SetMarkerStyle(20);
   Graph_m3lmet_Meas_data_graph3157->GetXaxis()->SetLabelFont(42);
   Graph_m3lmet_Meas_data_graph3157->GetXaxis()->SetLabelOffset(0.007);
   Graph_m3lmet_Meas_data_graph3157->GetXaxis()->SetLabelSize(0.05);
   Graph_m3lmet_Meas_data_graph3157->GetXaxis()->SetTitleSize(0.06);
   Graph_m3lmet_Meas_data_graph3157->GetXaxis()->SetTitleOffset(0.9);
   Graph_m3lmet_Meas_data_graph3157->GetXaxis()->SetTitleFont(42);
   Graph_m3lmet_Meas_data_graph3157->GetYaxis()->SetLabelFont(42);
   Graph_m3lmet_Meas_data_graph3157->GetYaxis()->SetLabelOffset(0.007);
   Graph_m3lmet_Meas_data_graph3157->GetYaxis()->SetLabelSize(0.05);
   Graph_m3lmet_Meas_data_graph3157->GetYaxis()->SetTitleSize(0.06);
   Graph_m3lmet_Meas_data_graph3157->GetYaxis()->SetTitleOffset(1.35);
   Graph_m3lmet_Meas_data_graph3157->GetYaxis()->SetTitleFont(42);
   Graph_m3lmet_Meas_data_graph3157->GetZaxis()->SetLabelFont(42);
   Graph_m3lmet_Meas_data_graph3157->GetZaxis()->SetLabelOffset(0.007);
   Graph_m3lmet_Meas_data_graph3157->GetZaxis()->SetLabelSize(0.05);
   Graph_m3lmet_Meas_data_graph3157->GetZaxis()->SetTitleSize(0.06);
   Graph_m3lmet_Meas_data_graph3157->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_m3lmet_Meas_data_graph3157);
   
   grae->Draw("pz ");
   
   TLegend *leg = new TLegend(0.62,0.628,0.9,0.91,NULL,"brNDC");
   leg->SetBorderSize(1);
   leg->SetTextSize(0.036);
   leg->SetLineColor(0);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("m3lmet_Meas_data","Data","LPE");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1.1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("m3lmet_Meas_prompt_WZ_stack_5","WZ","F");

   ci = TColor::GetColor("#ffcc00");
   entry->SetFillColor(ci);
   entry->SetFillStyle(1001);
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("m3lmet_Meas_prompt_ZZ_stack_4","qqZZ","F");

   ci = TColor::GetColor("#00cc00");
   entry->SetFillColor(ci);
   entry->SetFillStyle(1001);
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("m3lmet_Meas_fakes_DY_stack_3","Fakes DY","F");

   ci = TColor::GetColor("#cccccc");
   entry->SetFillColor(ci);
   entry->SetFillStyle(1001);
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("m3lmet_Meas_fakes_TT_stack_2","Fakes TT","F");

   ci = TColor::GetColor("#666666");
   entry->SetFillColor(ci);
   entry->SetFillStyle(1001);
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("m3lmet_Meas_total_errors","Total unc.","F");
   entry->SetFillColor(1);
   entry->SetFillStyle(3013);
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   leg->Draw();
   TLatex *   tex = new TLatex(0.96,0.952,"13.09 fb^{-1} (13.6 TeV)");
tex->SetNDC();
   tex->SetTextAlign(31);
   tex->SetTextFont(42);
   tex->SetTextSize(0.036);
   tex->SetLineWidth(2);
   tex->Draw();
      tex = new TLatex(0.18,0.952,"CMS");
tex->SetNDC();
   tex->SetTextFont(61);
   tex->SetTextSize(0.045);
   tex->SetLineWidth(2);
   tex->Draw();
      tex = new TLatex(0.2813,0.952,"Preliminary");
tex->SetNDC();
   tex->SetTextFont(52);
   tex->SetTextSize(0.0342);
   tex->SetLineWidth(2);
   tex->Draw();
   pad1->Modified();
   m3lmet_Meas_canvas->cd();
  
// ------------>Primitives in pad: pad2
   TPad *pad2 = new TPad("pad2", "pad2",0,0,1,0.3);
   pad2->Draw();
   pad2->cd();
   pad2->Range(0,0,1,1);
   pad2->SetFillColor(0);
   pad2->SetFillStyle(4000);
   pad2->SetBorderMode(0);
   pad2->SetBorderSize(2);
   pad2->SetTickx(1);
   pad2->SetTicky(1);
   pad2->SetLeftMargin(0.18);
   pad2->SetRightMargin(0.04);
   pad2->SetTopMargin(0.06);
   pad2->SetBottomMargin(0.3);
   pad2->SetFrameFillStyle(0);
   pad2->SetFrameBorderMode(0);
   
   TH1D *m3lmet_Meas_total__127 = new TH1D("m3lmet_Meas_total__127","dummy",10,0,500);
   m3lmet_Meas_total__127->SetBinContent(3,1);
   m3lmet_Meas_total__127->SetBinContent(4,1);
   m3lmet_Meas_total__127->SetBinContent(5,1);
   m3lmet_Meas_total__127->SetBinContent(6,1);
   m3lmet_Meas_total__127->SetBinContent(7,1);
   m3lmet_Meas_total__127->SetBinContent(8,1);
   m3lmet_Meas_total__127->SetBinContent(9,1);
   m3lmet_Meas_total__127->SetBinContent(10,1);
   m3lmet_Meas_total__127->SetBinContent(11,93.83467);
   m3lmet_Meas_total__127->SetBinError(11,3.423893);
   m3lmet_Meas_total__127->SetMinimum(0.5);
   m3lmet_Meas_total__127->SetMaximum(2);
   m3lmet_Meas_total__127->SetEntries(15138);

   ci = TColor::GetColor("#00cc00");
   m3lmet_Meas_total__127->SetFillColor(ci);

   ci = TColor::GetColor("#6666ff");
   m3lmet_Meas_total__127->SetMarkerColor(ci);
   m3lmet_Meas_total__127->SetMarkerSize(1.1);
   m3lmet_Meas_total__127->GetXaxis()->SetTitle("m_{WZ} [GeV]");
   m3lmet_Meas_total__127->GetXaxis()->SetMoreLogLabels();
   m3lmet_Meas_total__127->GetXaxis()->SetLabelFont(42);
   m3lmet_Meas_total__127->GetXaxis()->SetLabelOffset(0.015);
   m3lmet_Meas_total__127->GetXaxis()->SetLabelSize(0.1);
   m3lmet_Meas_total__127->GetXaxis()->SetTitleSize(0.14);
   m3lmet_Meas_total__127->GetXaxis()->SetTitleFont(42);
   m3lmet_Meas_total__127->GetYaxis()->SetTitle("Data/pred.");
   m3lmet_Meas_total__127->GetYaxis()->SetDecimals();
   m3lmet_Meas_total__127->GetYaxis()->SetNdivisions(505);
   m3lmet_Meas_total__127->GetYaxis()->SetLabelFont(42);
   m3lmet_Meas_total__127->GetYaxis()->SetLabelOffset(0.01);
   m3lmet_Meas_total__127->GetYaxis()->SetLabelSize(0.11);
   m3lmet_Meas_total__127->GetYaxis()->SetTitleSize(0.14);
   m3lmet_Meas_total__127->GetYaxis()->SetTitleOffset(0.62);
   m3lmet_Meas_total__127->GetYaxis()->SetTitleFont(42);
   m3lmet_Meas_total__127->GetZaxis()->SetLabelFont(42);
   m3lmet_Meas_total__127->GetZaxis()->SetLabelOffset(0.007);
   m3lmet_Meas_total__127->GetZaxis()->SetLabelSize(0.05);
   m3lmet_Meas_total__127->GetZaxis()->SetTitleSize(0.06);
   m3lmet_Meas_total__127->GetZaxis()->SetTitleFont(42);
   m3lmet_Meas_total__127->Draw("AXIS");
   
   Double_t m3lmet_Meas_total_errors_fx3158[8] = {
   125,
   175,
   225,
   275,
   325,
   375,
   425,
   475};
   Double_t m3lmet_Meas_total_errors_fy3158[8] = {
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1};
   Double_t m3lmet_Meas_total_errors_felx3158[8] = {
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25};
   Double_t m3lmet_Meas_total_errors_fely3158[8] = {
   0.4029199,
   0.04931037,
   0.02238939,
   0.02303944,
   0.02861101,
   0.03466071,
   0.0387116,
   0.05029311};
   Double_t m3lmet_Meas_total_errors_fehx3158[8] = {
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25};
   Double_t m3lmet_Meas_total_errors_fehy3158[8] = {
   0.4029199,
   0.04931037,
   0.02238939,
   0.02303944,
   0.02861101,
   0.03466071,
   0.0387116,
   0.05029311};
   grae = new TGraphAsymmErrors(8,m3lmet_Meas_total_errors_fx3158,m3lmet_Meas_total_errors_fy3158,m3lmet_Meas_total_errors_felx3158,m3lmet_Meas_total_errors_fehx3158,m3lmet_Meas_total_errors_fely3158,m3lmet_Meas_total_errors_fehy3158);
   grae->SetName("m3lmet_Meas_total_errors");
   grae->SetTitle("Graph");

   ci = TColor::GetColor("#00ffff");
   grae->SetFillColor(ci);

   ci = TColor::GetColor("#00ffff");
   grae->SetMarkerColor(ci);
   grae->Draw("e2");
   
   Double_t m3lmet_Meas_total_errors_fx3159[8] = {
   125,
   175,
   225,
   275,
   325,
   375,
   425,
   475};
   Double_t m3lmet_Meas_total_errors_fy3159[8] = {
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1};
   Double_t m3lmet_Meas_total_errors_felx3159[8] = {
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25};
   Double_t m3lmet_Meas_total_errors_fely3159[8] = {
   0.4029199,
   0.04931037,
   0.02238939,
   0.02303944,
   0.02861101,
   0.03466071,
   0.0387116,
   0.05029311};
   Double_t m3lmet_Meas_total_errors_fehx3159[8] = {
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25};
   Double_t m3lmet_Meas_total_errors_fehy3159[8] = {
   0.4029199,
   0.04931037,
   0.02238939,
   0.02303944,
   0.02861101,
   0.03466071,
   0.0387116,
   0.05029311};
   grae = new TGraphAsymmErrors(8,m3lmet_Meas_total_errors_fx3159,m3lmet_Meas_total_errors_fy3159,m3lmet_Meas_total_errors_felx3159,m3lmet_Meas_total_errors_fehx3159,m3lmet_Meas_total_errors_fely3159,m3lmet_Meas_total_errors_fehy3159);
   grae->SetName("m3lmet_Meas_total_errors");
   grae->SetTitle("Graph");

   ci = TColor::GetColor("#6666ff");
   grae->SetFillColor(ci);

   ci = TColor::GetColor("#6666ff");
   grae->SetMarkerColor(ci);
   grae->Draw("e2 ");
   
   TH1D *m3lmet_Meas_total__128 = new TH1D("m3lmet_Meas_total__128","dummy",10,0,500);
   m3lmet_Meas_total__128->SetBinContent(3,1);
   m3lmet_Meas_total__128->SetBinContent(4,1);
   m3lmet_Meas_total__128->SetBinContent(5,1);
   m3lmet_Meas_total__128->SetBinContent(6,1);
   m3lmet_Meas_total__128->SetBinContent(7,1);
   m3lmet_Meas_total__128->SetBinContent(8,1);
   m3lmet_Meas_total__128->SetBinContent(9,1);
   m3lmet_Meas_total__128->SetBinContent(10,1);
   m3lmet_Meas_total__128->SetBinContent(11,93.83467);
   m3lmet_Meas_total__128->SetBinError(11,3.423893);
   m3lmet_Meas_total__128->SetMinimum(0.5);
   m3lmet_Meas_total__128->SetMaximum(2);
   m3lmet_Meas_total__128->SetEntries(15138);

   ci = TColor::GetColor("#00cc00");
   m3lmet_Meas_total__128->SetFillColor(ci);

   ci = TColor::GetColor("#6666ff");
   m3lmet_Meas_total__128->SetMarkerColor(ci);
   m3lmet_Meas_total__128->SetMarkerSize(1.1);
   m3lmet_Meas_total__128->GetXaxis()->SetTitle("m_{WZ} [GeV]");
   m3lmet_Meas_total__128->GetXaxis()->SetMoreLogLabels();
   m3lmet_Meas_total__128->GetXaxis()->SetLabelFont(42);
   m3lmet_Meas_total__128->GetXaxis()->SetLabelOffset(0.015);
   m3lmet_Meas_total__128->GetXaxis()->SetLabelSize(0.1);
   m3lmet_Meas_total__128->GetXaxis()->SetTitleSize(0.14);
   m3lmet_Meas_total__128->GetXaxis()->SetTitleFont(42);
   m3lmet_Meas_total__128->GetYaxis()->SetTitle("Data/pred.");
   m3lmet_Meas_total__128->GetYaxis()->SetDecimals();
   m3lmet_Meas_total__128->GetYaxis()->SetNdivisions(505);
   m3lmet_Meas_total__128->GetYaxis()->SetLabelFont(42);
   m3lmet_Meas_total__128->GetYaxis()->SetLabelOffset(0.01);
   m3lmet_Meas_total__128->GetYaxis()->SetLabelSize(0.11);
   m3lmet_Meas_total__128->GetYaxis()->SetTitleSize(0.14);
   m3lmet_Meas_total__128->GetYaxis()->SetTitleOffset(0.62);
   m3lmet_Meas_total__128->GetYaxis()->SetTitleFont(42);
   m3lmet_Meas_total__128->GetZaxis()->SetLabelFont(42);
   m3lmet_Meas_total__128->GetZaxis()->SetLabelOffset(0.007);
   m3lmet_Meas_total__128->GetZaxis()->SetLabelSize(0.05);
   m3lmet_Meas_total__128->GetZaxis()->SetTitleSize(0.06);
   m3lmet_Meas_total__128->GetZaxis()->SetTitleFont(42);
   m3lmet_Meas_total__128->Draw("AXIS SAME");
   TLine *line = new TLine(0,1,500,1);
   line->SetLineColor(58);
   line->SetLineWidth(2);
   line->Draw();
   
   Double_t data_div_fx3160[10] = {
   25,
   75,
   125,
   175,
   225,
   275,
   325,
   375,
   425,
   475};
   Double_t data_div_fy3160[10] = {
   0,
   0,
   1.280711,
   1.04357,
   0.9656901,
   1.050582,
   0.9570846,
   1.097462,
   0.9625182,
   0.9587535};
   Double_t data_div_felx3160[10] = {
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25};
   Double_t data_div_fely3160[10] = {
   0,
   0,
   0.3802124,
   0.07391606,
   0.04677047,
   0.05519305,
   0.0690129,
   0.09687803,
   0.1229015,
   0.1612839};
   Double_t data_div_fehx3160[10] = {
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25};
   Double_t data_div_fehy3160[10] = {
   0,
   0,
   0.5142182,
   0.07934647,
   0.0490924,
   0.05817166,
   0.07417804,
   0.1058319,
   0.1396935,
   0.1909989};
   grae = new TGraphAsymmErrors(10,data_div_fx3160,data_div_fy3160,data_div_felx3160,data_div_fehx3160,data_div_fely3160,data_div_fehy3160);
   grae->SetName("data_div");
   grae->SetTitle("Graph");
   grae->SetFillStyle(1000);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.1);
   
   TH1F *Graph_m3lmet_Meas_data_graph3160 = new TH1F("Graph_m3lmet_Meas_data_graph3160","Graph",100,0,550);
   Graph_m3lmet_Meas_data_graph3160->SetMinimum(0);
   Graph_m3lmet_Meas_data_graph3160->SetMaximum(492.422);
   Graph_m3lmet_Meas_data_graph3160->SetDirectory(0);
   Graph_m3lmet_Meas_data_graph3160->SetStats(0);
   Graph_m3lmet_Meas_data_graph3160->SetLineStyle(0);
   Graph_m3lmet_Meas_data_graph3160->SetMarkerStyle(20);
   Graph_m3lmet_Meas_data_graph3160->GetXaxis()->SetLabelFont(42);
   Graph_m3lmet_Meas_data_graph3160->GetXaxis()->SetLabelOffset(0.007);
   Graph_m3lmet_Meas_data_graph3160->GetXaxis()->SetLabelSize(0.05);
   Graph_m3lmet_Meas_data_graph3160->GetXaxis()->SetTitleSize(0.06);
   Graph_m3lmet_Meas_data_graph3160->GetXaxis()->SetTitleOffset(0.9);
   Graph_m3lmet_Meas_data_graph3160->GetXaxis()->SetTitleFont(42);
   Graph_m3lmet_Meas_data_graph3160->GetYaxis()->SetLabelFont(42);
   Graph_m3lmet_Meas_data_graph3160->GetYaxis()->SetLabelOffset(0.007);
   Graph_m3lmet_Meas_data_graph3160->GetYaxis()->SetLabelSize(0.05);
   Graph_m3lmet_Meas_data_graph3160->GetYaxis()->SetTitleSize(0.06);
   Graph_m3lmet_Meas_data_graph3160->GetYaxis()->SetTitleOffset(1.35);
   Graph_m3lmet_Meas_data_graph3160->GetYaxis()->SetTitleFont(42);
   Graph_m3lmet_Meas_data_graph3160->GetZaxis()->SetLabelFont(42);
   Graph_m3lmet_Meas_data_graph3160->GetZaxis()->SetLabelOffset(0.007);
   Graph_m3lmet_Meas_data_graph3160->GetZaxis()->SetLabelSize(0.05);
   Graph_m3lmet_Meas_data_graph3160->GetZaxis()->SetTitleSize(0.06);
   Graph_m3lmet_Meas_data_graph3160->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_m3lmet_Meas_data_graph3160);
   
   grae->Draw("pz ");
   
   leg = new TLegend(0,0,0,0,NULL,"brNDC");
   leg->SetBorderSize(1);
   leg->SetTextSize(0.084);
   leg->SetLineColor(0);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   entry=leg->AddEntry("m3lmet_Meas_total_errors","stat. unc.","F");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   leg->Draw();
   
   leg = new TLegend(0,0,0,0,NULL,"brNDC");
   leg->SetBorderSize(1);
   leg->SetTextSize(0.084);
   leg->SetLineColor(0);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   entry=leg->AddEntry("m3lmet_Meas_total_errors","total unc.","F");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   leg->Draw();
   pad2->Modified();
   m3lmet_Meas_canvas->cd();
   m3lmet_Meas_canvas->Modified();
   m3lmet_Meas_canvas->cd();
   m3lmet_Meas_canvas->SetSelected(m3lmet_Meas_canvas);
}
