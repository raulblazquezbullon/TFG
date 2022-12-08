void m3l_rebin6()
{
//=========Macro generated from canvas: m3l_rebin6_canvas/m3l_rebin6
//=========  (Thu Dec  8 14:21:39 2022) by ROOT version 6.12/07
   TCanvas *m3l_rebin6_canvas = new TCanvas("m3l_rebin6_canvas", "m3l_rebin6",0,0,600,750);
   gStyle->SetOptFit(1);
   gStyle->SetOptStat(0);
   gStyle->SetOptTitle(0);
   m3l_rebin6_canvas->SetHighLightColor(2);
   m3l_rebin6_canvas->Range(0,0,1,1);
   m3l_rebin6_canvas->SetFillColor(0);
   m3l_rebin6_canvas->SetBorderMode(0);
   m3l_rebin6_canvas->SetBorderSize(2);
   m3l_rebin6_canvas->SetTickx(1);
   m3l_rebin6_canvas->SetTicky(1);
   m3l_rebin6_canvas->SetLeftMargin(0.18);
   m3l_rebin6_canvas->SetRightMargin(0.04);
   m3l_rebin6_canvas->SetBottomMargin(0.13);
   m3l_rebin6_canvas->SetFrameFillStyle(0);
   m3l_rebin6_canvas->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: pad1
   TPad *pad1 = new TPad("pad1", "pad1",0,0.3,1,1);
   pad1->Draw();
   pad1->cd();
   pad1->Range(-115.3846,-52.78256,525.641,2058.52);
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
   Double_t xAxis1[7] = {0, 120.8356, 141.6712, 166.2679, 193.369, 237.9113, 500}; 
   
   TH1D *m3l_rebin6_total__1 = new TH1D("m3l_rebin6_total__1","dummy",6, xAxis1);
   m3l_rebin6_total__1->SetBinContent(2,7.641959);
   m3l_rebin6_total__1->SetBinContent(3,31.59953);
   m3l_rebin6_total__1->SetBinContent(4,112.0543);
   m3l_rebin6_total__1->SetBinContent(5,378.7279);
   m3l_rebin6_total__1->SetBinContent(6,965.9209);
   m3l_rebin6_total__1->SetBinError(2,3.448735);
   m3l_rebin6_total__1->SetBinError(3,5.579002);
   m3l_rebin6_total__1->SetBinError(4,6.224687);
   m3l_rebin6_total__1->SetBinError(5,9.869015);
   m3l_rebin6_total__1->SetBinError(6,12.33706);
   m3l_rebin6_total__1->SetMinimum(0);
   m3l_rebin6_total__1->SetMaximum(1931.842);
   m3l_rebin6_total__1->SetEntries(15152);
   m3l_rebin6_total__1->SetDirectory(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#00cc00");
   m3l_rebin6_total__1->SetFillColor(ci);
   m3l_rebin6_total__1->SetMarkerStyle(20);
   m3l_rebin6_total__1->SetMarkerSize(1.1);
   m3l_rebin6_total__1->GetXaxis()->SetTitle("m3l");
   m3l_rebin6_total__1->GetXaxis()->SetMoreLogLabels();
   m3l_rebin6_total__1->GetXaxis()->SetLabelFont(42);
   m3l_rebin6_total__1->GetXaxis()->SetLabelOffset(999);
   m3l_rebin6_total__1->GetXaxis()->SetLabelSize(0.05);
   m3l_rebin6_total__1->GetXaxis()->SetTitleSize(0.05);
   m3l_rebin6_total__1->GetXaxis()->SetTitleOffset(999);
   m3l_rebin6_total__1->GetXaxis()->SetTitleFont(42);
   m3l_rebin6_total__1->GetYaxis()->SetTitle("Events");
   m3l_rebin6_total__1->GetYaxis()->SetLabelFont(42);
   m3l_rebin6_total__1->GetYaxis()->SetLabelOffset(0.007);
   m3l_rebin6_total__1->GetYaxis()->SetLabelSize(0.05);
   m3l_rebin6_total__1->GetYaxis()->SetTitleSize(0.06);
   m3l_rebin6_total__1->GetYaxis()->SetTitleOffset(1.48);
   m3l_rebin6_total__1->GetYaxis()->SetTitleFont(42);
   m3l_rebin6_total__1->GetZaxis()->SetLabelFont(42);
   m3l_rebin6_total__1->GetZaxis()->SetLabelOffset(0.007);
   m3l_rebin6_total__1->GetZaxis()->SetLabelSize(0.05);
   m3l_rebin6_total__1->GetZaxis()->SetTitleSize(0.06);
   m3l_rebin6_total__1->GetZaxis()->SetTitleFont(42);
   m3l_rebin6_total__1->Draw("HIST");
   
   THStack *m3l_rebin6_stack = new THStack();
   m3l_rebin6_stack->SetName("m3l_rebin6_stack");
   m3l_rebin6_stack->SetTitle("m3l_rebin6");
   Double_t xAxis2[7] = {0, 120.8356, 141.6712, 166.2679, 193.369, 237.9113, 500}; 
   
   TH1F *m3l_rebin6_stack_stack_1 = new TH1F("m3l_rebin6_stack_stack_1","m3l_rebin6",6, xAxis2);
   m3l_rebin6_stack_stack_1->SetMinimum(0);
   m3l_rebin6_stack_stack_1->SetMaximum(1014.217);
   m3l_rebin6_stack_stack_1->SetDirectory(0);
   m3l_rebin6_stack_stack_1->SetStats(0);
   m3l_rebin6_stack_stack_1->SetLineStyle(0);
   m3l_rebin6_stack_stack_1->SetMarkerStyle(20);
   m3l_rebin6_stack_stack_1->GetXaxis()->SetLabelFont(42);
   m3l_rebin6_stack_stack_1->GetXaxis()->SetLabelOffset(0.007);
   m3l_rebin6_stack_stack_1->GetXaxis()->SetLabelSize(0.05);
   m3l_rebin6_stack_stack_1->GetXaxis()->SetTitleSize(0.06);
   m3l_rebin6_stack_stack_1->GetXaxis()->SetTitleOffset(0.9);
   m3l_rebin6_stack_stack_1->GetXaxis()->SetTitleFont(42);
   m3l_rebin6_stack_stack_1->GetYaxis()->SetLabelFont(42);
   m3l_rebin6_stack_stack_1->GetYaxis()->SetLabelOffset(0.007);
   m3l_rebin6_stack_stack_1->GetYaxis()->SetLabelSize(0.05);
   m3l_rebin6_stack_stack_1->GetYaxis()->SetTitleSize(0.06);
   m3l_rebin6_stack_stack_1->GetYaxis()->SetTitleOffset(1.35);
   m3l_rebin6_stack_stack_1->GetYaxis()->SetTitleFont(42);
   m3l_rebin6_stack_stack_1->GetZaxis()->SetLabelFont(42);
   m3l_rebin6_stack_stack_1->GetZaxis()->SetLabelOffset(0.007);
   m3l_rebin6_stack_stack_1->GetZaxis()->SetLabelSize(0.05);
   m3l_rebin6_stack_stack_1->GetZaxis()->SetTitleSize(0.06);
   m3l_rebin6_stack_stack_1->GetZaxis()->SetTitleFont(42);
   m3l_rebin6_stack->SetHistogram(m3l_rebin6_stack_stack_1);
   
   Double_t xAxis3[7] = {0, 120.8356, 141.6712, 166.2679, 193.369, 237.9113, 500}; 
   
   TH1D *m3l_rebin6_fakes_VV_stack_1 = new TH1D("m3l_rebin6_fakes_VV_stack_1","dummy",6, xAxis3);
   m3l_rebin6_fakes_VV_stack_1->SetBinContent(5,0.2915801);
   m3l_rebin6_fakes_VV_stack_1->SetBinContent(6,0.3887735);
   m3l_rebin6_fakes_VV_stack_1->SetBinError(5,0.1683439);
   m3l_rebin6_fakes_VV_stack_1->SetBinError(6,0.1943867);
   m3l_rebin6_fakes_VV_stack_1->SetEntries(11);

   ci = TColor::GetColor("#2e3294");
   m3l_rebin6_fakes_VV_stack_1->SetFillColor(ci);
   m3l_rebin6_fakes_VV_stack_1->SetMarkerStyle(0);
   m3l_rebin6_fakes_VV_stack_1->SetMarkerSize(1.1);
   m3l_rebin6_fakes_VV_stack_1->GetXaxis()->SetTitle("m3l");
   m3l_rebin6_fakes_VV_stack_1->GetXaxis()->SetMoreLogLabels();
   m3l_rebin6_fakes_VV_stack_1->GetXaxis()->SetLabelFont(42);
   m3l_rebin6_fakes_VV_stack_1->GetXaxis()->SetLabelOffset(0.007);
   m3l_rebin6_fakes_VV_stack_1->GetXaxis()->SetLabelSize(0.05);
   m3l_rebin6_fakes_VV_stack_1->GetXaxis()->SetTitleSize(0.06);
   m3l_rebin6_fakes_VV_stack_1->GetXaxis()->SetTitleOffset(0.9);
   m3l_rebin6_fakes_VV_stack_1->GetXaxis()->SetTitleFont(42);
   m3l_rebin6_fakes_VV_stack_1->GetYaxis()->SetTitle("Events");
   m3l_rebin6_fakes_VV_stack_1->GetYaxis()->SetLabelFont(42);
   m3l_rebin6_fakes_VV_stack_1->GetYaxis()->SetLabelOffset(0.007);
   m3l_rebin6_fakes_VV_stack_1->GetYaxis()->SetLabelSize(0.05);
   m3l_rebin6_fakes_VV_stack_1->GetYaxis()->SetTitleSize(0.06);
   m3l_rebin6_fakes_VV_stack_1->GetYaxis()->SetTitleOffset(1.35);
   m3l_rebin6_fakes_VV_stack_1->GetYaxis()->SetTitleFont(42);
   m3l_rebin6_fakes_VV_stack_1->GetZaxis()->SetLabelFont(42);
   m3l_rebin6_fakes_VV_stack_1->GetZaxis()->SetLabelOffset(0.007);
   m3l_rebin6_fakes_VV_stack_1->GetZaxis()->SetLabelSize(0.05);
   m3l_rebin6_fakes_VV_stack_1->GetZaxis()->SetTitleSize(0.06);
   m3l_rebin6_fakes_VV_stack_1->GetZaxis()->SetTitleFont(42);
   m3l_rebin6_stack->Add(m3l_rebin6_fakes_VV_stack_1,"");
   Double_t xAxis4[7] = {0, 120.8356, 141.6712, 166.2679, 193.369, 237.9113, 500}; 
   
   TH1D *m3l_rebin6_fakes_TT_stack_2 = new TH1D("m3l_rebin6_fakes_TT_stack_2","dummy",6, xAxis4);
   m3l_rebin6_fakes_TT_stack_2->SetBinContent(2,0.3116311);
   m3l_rebin6_fakes_TT_stack_2->SetBinContent(3,0.9765733);
   m3l_rebin6_fakes_TT_stack_2->SetBinContent(4,4.126616);
   m3l_rebin6_fakes_TT_stack_2->SetBinContent(5,12.36793);
   m3l_rebin6_fakes_TT_stack_2->SetBinContent(6,37.26158);
   m3l_rebin6_fakes_TT_stack_2->SetBinError(2,0.1607536);
   m3l_rebin6_fakes_TT_stack_2->SetBinError(3,0.2646819);
   m3l_rebin6_fakes_TT_stack_2->SetBinError(4,0.5382901);
   m3l_rebin6_fakes_TT_stack_2->SetBinError(5,0.9068603);
   m3l_rebin6_fakes_TT_stack_2->SetBinError(6,1.591268);
   m3l_rebin6_fakes_TT_stack_2->SetEntries(841);

   ci = TColor::GetColor("#666666");
   m3l_rebin6_fakes_TT_stack_2->SetFillColor(ci);
   m3l_rebin6_fakes_TT_stack_2->SetMarkerStyle(0);
   m3l_rebin6_fakes_TT_stack_2->SetMarkerSize(1.1);
   m3l_rebin6_fakes_TT_stack_2->GetXaxis()->SetTitle("m3l");
   m3l_rebin6_fakes_TT_stack_2->GetXaxis()->SetMoreLogLabels();
   m3l_rebin6_fakes_TT_stack_2->GetXaxis()->SetLabelFont(42);
   m3l_rebin6_fakes_TT_stack_2->GetXaxis()->SetLabelOffset(0.007);
   m3l_rebin6_fakes_TT_stack_2->GetXaxis()->SetLabelSize(0.05);
   m3l_rebin6_fakes_TT_stack_2->GetXaxis()->SetTitleSize(0.06);
   m3l_rebin6_fakes_TT_stack_2->GetXaxis()->SetTitleOffset(0.9);
   m3l_rebin6_fakes_TT_stack_2->GetXaxis()->SetTitleFont(42);
   m3l_rebin6_fakes_TT_stack_2->GetYaxis()->SetTitle("Events");
   m3l_rebin6_fakes_TT_stack_2->GetYaxis()->SetLabelFont(42);
   m3l_rebin6_fakes_TT_stack_2->GetYaxis()->SetLabelOffset(0.007);
   m3l_rebin6_fakes_TT_stack_2->GetYaxis()->SetLabelSize(0.05);
   m3l_rebin6_fakes_TT_stack_2->GetYaxis()->SetTitleSize(0.06);
   m3l_rebin6_fakes_TT_stack_2->GetYaxis()->SetTitleOffset(1.35);
   m3l_rebin6_fakes_TT_stack_2->GetYaxis()->SetTitleFont(42);
   m3l_rebin6_fakes_TT_stack_2->GetZaxis()->SetLabelFont(42);
   m3l_rebin6_fakes_TT_stack_2->GetZaxis()->SetLabelOffset(0.007);
   m3l_rebin6_fakes_TT_stack_2->GetZaxis()->SetLabelSize(0.05);
   m3l_rebin6_fakes_TT_stack_2->GetZaxis()->SetTitleSize(0.06);
   m3l_rebin6_fakes_TT_stack_2->GetZaxis()->SetTitleFont(42);
   m3l_rebin6_stack->Add(m3l_rebin6_fakes_TT_stack_2,"");
   Double_t xAxis5[7] = {0, 120.8356, 141.6712, 166.2679, 193.369, 237.9113, 500}; 
   
   TH1D *m3l_rebin6_fakes_DY_stack_3 = new TH1D("m3l_rebin6_fakes_DY_stack_3","dummy",6, xAxis5);
   m3l_rebin6_fakes_DY_stack_3->SetBinContent(2,6.878088);
   m3l_rebin6_fakes_DY_stack_3->SetBinContent(3,17.19522);
   m3l_rebin6_fakes_DY_stack_3->SetBinContent(4,17.19522);
   m3l_rebin6_fakes_DY_stack_3->SetBinContent(5,37.82949);
   m3l_rebin6_fakes_DY_stack_3->SetBinContent(6,37.82949);
   m3l_rebin6_fakes_DY_stack_3->SetBinError(2,3.439044);
   m3l_rebin6_fakes_DY_stack_3->SetBinError(3,5.437606);
   m3l_rebin6_fakes_DY_stack_3->SetBinError(4,5.437606);
   m3l_rebin6_fakes_DY_stack_3->SetBinError(5,8.065274);
   m3l_rebin6_fakes_DY_stack_3->SetBinError(6,8.065274);
   m3l_rebin6_fakes_DY_stack_3->SetEntries(72);

   ci = TColor::GetColor("#cccccc");
   m3l_rebin6_fakes_DY_stack_3->SetFillColor(ci);
   m3l_rebin6_fakes_DY_stack_3->SetMarkerStyle(0);
   m3l_rebin6_fakes_DY_stack_3->SetMarkerSize(1.1);
   m3l_rebin6_fakes_DY_stack_3->GetXaxis()->SetTitle("m3l");
   m3l_rebin6_fakes_DY_stack_3->GetXaxis()->SetMoreLogLabels();
   m3l_rebin6_fakes_DY_stack_3->GetXaxis()->SetLabelFont(42);
   m3l_rebin6_fakes_DY_stack_3->GetXaxis()->SetLabelOffset(0.007);
   m3l_rebin6_fakes_DY_stack_3->GetXaxis()->SetLabelSize(0.05);
   m3l_rebin6_fakes_DY_stack_3->GetXaxis()->SetTitleSize(0.06);
   m3l_rebin6_fakes_DY_stack_3->GetXaxis()->SetTitleOffset(0.9);
   m3l_rebin6_fakes_DY_stack_3->GetXaxis()->SetTitleFont(42);
   m3l_rebin6_fakes_DY_stack_3->GetYaxis()->SetTitle("Events");
   m3l_rebin6_fakes_DY_stack_3->GetYaxis()->SetLabelFont(42);
   m3l_rebin6_fakes_DY_stack_3->GetYaxis()->SetLabelOffset(0.007);
   m3l_rebin6_fakes_DY_stack_3->GetYaxis()->SetLabelSize(0.05);
   m3l_rebin6_fakes_DY_stack_3->GetYaxis()->SetTitleSize(0.06);
   m3l_rebin6_fakes_DY_stack_3->GetYaxis()->SetTitleOffset(1.35);
   m3l_rebin6_fakes_DY_stack_3->GetYaxis()->SetTitleFont(42);
   m3l_rebin6_fakes_DY_stack_3->GetZaxis()->SetLabelFont(42);
   m3l_rebin6_fakes_DY_stack_3->GetZaxis()->SetLabelOffset(0.007);
   m3l_rebin6_fakes_DY_stack_3->GetZaxis()->SetLabelSize(0.05);
   m3l_rebin6_fakes_DY_stack_3->GetZaxis()->SetTitleSize(0.06);
   m3l_rebin6_fakes_DY_stack_3->GetZaxis()->SetTitleFont(42);
   m3l_rebin6_stack->Add(m3l_rebin6_fakes_DY_stack_3,"");
   Double_t xAxis6[7] = {0, 120.8356, 141.6712, 166.2679, 193.369, 237.9113, 500}; 
   
   TH1D *m3l_rebin6_prompt_ZZ_stack_4 = new TH1D("m3l_rebin6_prompt_ZZ_stack_4","dummy",6, xAxis6);
   m3l_rebin6_prompt_ZZ_stack_4->SetBinContent(3,2.935767);
   m3l_rebin6_prompt_ZZ_stack_4->SetBinContent(4,7.339416);
   m3l_rebin6_prompt_ZZ_stack_4->SetBinContent(5,19.44945);
   m3l_rebin6_prompt_ZZ_stack_4->SetBinContent(6,43.48604);
   m3l_rebin6_prompt_ZZ_stack_4->SetBinError(3,0.7339416);
   m3l_rebin6_prompt_ZZ_stack_4->SetBinError(4,1.160464);
   m3l_rebin6_prompt_ZZ_stack_4->SetBinError(5,1.889098);
   m3l_rebin6_prompt_ZZ_stack_4->SetBinError(6,2.824722);
   m3l_rebin6_prompt_ZZ_stack_4->SetEntries(403);

   ci = TColor::GetColor("#00cc00");
   m3l_rebin6_prompt_ZZ_stack_4->SetFillColor(ci);
   m3l_rebin6_prompt_ZZ_stack_4->SetMarkerStyle(0);
   m3l_rebin6_prompt_ZZ_stack_4->SetMarkerSize(1.1);
   m3l_rebin6_prompt_ZZ_stack_4->GetXaxis()->SetTitle("m3l");
   m3l_rebin6_prompt_ZZ_stack_4->GetXaxis()->SetMoreLogLabels();
   m3l_rebin6_prompt_ZZ_stack_4->GetXaxis()->SetLabelFont(42);
   m3l_rebin6_prompt_ZZ_stack_4->GetXaxis()->SetLabelOffset(0.007);
   m3l_rebin6_prompt_ZZ_stack_4->GetXaxis()->SetLabelSize(0.05);
   m3l_rebin6_prompt_ZZ_stack_4->GetXaxis()->SetTitleSize(0.06);
   m3l_rebin6_prompt_ZZ_stack_4->GetXaxis()->SetTitleOffset(0.9);
   m3l_rebin6_prompt_ZZ_stack_4->GetXaxis()->SetTitleFont(42);
   m3l_rebin6_prompt_ZZ_stack_4->GetYaxis()->SetTitle("Events");
   m3l_rebin6_prompt_ZZ_stack_4->GetYaxis()->SetLabelFont(42);
   m3l_rebin6_prompt_ZZ_stack_4->GetYaxis()->SetLabelOffset(0.007);
   m3l_rebin6_prompt_ZZ_stack_4->GetYaxis()->SetLabelSize(0.05);
   m3l_rebin6_prompt_ZZ_stack_4->GetYaxis()->SetTitleSize(0.06);
   m3l_rebin6_prompt_ZZ_stack_4->GetYaxis()->SetTitleOffset(1.35);
   m3l_rebin6_prompt_ZZ_stack_4->GetYaxis()->SetTitleFont(42);
   m3l_rebin6_prompt_ZZ_stack_4->GetZaxis()->SetLabelFont(42);
   m3l_rebin6_prompt_ZZ_stack_4->GetZaxis()->SetLabelOffset(0.007);
   m3l_rebin6_prompt_ZZ_stack_4->GetZaxis()->SetLabelSize(0.05);
   m3l_rebin6_prompt_ZZ_stack_4->GetZaxis()->SetTitleSize(0.06);
   m3l_rebin6_prompt_ZZ_stack_4->GetZaxis()->SetTitleFont(42);
   m3l_rebin6_stack->Add(m3l_rebin6_prompt_ZZ_stack_4,"");
   Double_t xAxis7[7] = {0, 120.8356, 141.6712, 166.2679, 193.369, 237.9113, 500}; 
   
   TH1D *m3l_rebin6_prompt_WZ_stack_5 = new TH1D("m3l_rebin6_prompt_WZ_stack_5","dummy",6, xAxis7);
   m3l_rebin6_prompt_WZ_stack_5->SetBinContent(2,0.45224);
   m3l_rebin6_prompt_WZ_stack_5->SetBinContent(3,10.49197);
   m3l_rebin6_prompt_WZ_stack_5->SetBinContent(4,83.39305);
   m3l_rebin6_prompt_WZ_stack_5->SetBinContent(5,308.7894);
   m3l_rebin6_prompt_WZ_stack_5->SetBinContent(6,846.955);
   m3l_rebin6_prompt_WZ_stack_5->SetBinError(2,0.2022479);
   m3l_rebin6_prompt_WZ_stack_5->SetBinError(3,0.9741547);
   m3l_rebin6_prompt_WZ_stack_5->SetBinError(4,2.746404);
   m3l_rebin6_prompt_WZ_stack_5->SetBinError(5,5.284826);
   m3l_rebin6_prompt_WZ_stack_5->SetBinError(6,8.75245);
   m3l_rebin6_prompt_WZ_stack_5->SetEntries(13825);

   ci = TColor::GetColor("#ffcc00");
   m3l_rebin6_prompt_WZ_stack_5->SetFillColor(ci);
   m3l_rebin6_prompt_WZ_stack_5->SetMarkerStyle(0);
   m3l_rebin6_prompt_WZ_stack_5->SetMarkerSize(1.1);
   m3l_rebin6_prompt_WZ_stack_5->GetXaxis()->SetTitle("m3l");
   m3l_rebin6_prompt_WZ_stack_5->GetXaxis()->SetMoreLogLabels();
   m3l_rebin6_prompt_WZ_stack_5->GetXaxis()->SetLabelFont(42);
   m3l_rebin6_prompt_WZ_stack_5->GetXaxis()->SetLabelOffset(0.007);
   m3l_rebin6_prompt_WZ_stack_5->GetXaxis()->SetLabelSize(0.05);
   m3l_rebin6_prompt_WZ_stack_5->GetXaxis()->SetTitleSize(0.06);
   m3l_rebin6_prompt_WZ_stack_5->GetXaxis()->SetTitleOffset(0.9);
   m3l_rebin6_prompt_WZ_stack_5->GetXaxis()->SetTitleFont(42);
   m3l_rebin6_prompt_WZ_stack_5->GetYaxis()->SetTitle("Events");
   m3l_rebin6_prompt_WZ_stack_5->GetYaxis()->SetLabelFont(42);
   m3l_rebin6_prompt_WZ_stack_5->GetYaxis()->SetLabelOffset(0.007);
   m3l_rebin6_prompt_WZ_stack_5->GetYaxis()->SetLabelSize(0.05);
   m3l_rebin6_prompt_WZ_stack_5->GetYaxis()->SetTitleSize(0.06);
   m3l_rebin6_prompt_WZ_stack_5->GetYaxis()->SetTitleOffset(1.35);
   m3l_rebin6_prompt_WZ_stack_5->GetYaxis()->SetTitleFont(42);
   m3l_rebin6_prompt_WZ_stack_5->GetZaxis()->SetLabelFont(42);
   m3l_rebin6_prompt_WZ_stack_5->GetZaxis()->SetLabelOffset(0.007);
   m3l_rebin6_prompt_WZ_stack_5->GetZaxis()->SetLabelSize(0.05);
   m3l_rebin6_prompt_WZ_stack_5->GetZaxis()->SetTitleSize(0.06);
   m3l_rebin6_prompt_WZ_stack_5->GetZaxis()->SetTitleFont(42);
   m3l_rebin6_stack->Add(m3l_rebin6_prompt_WZ_stack_5,"");
   m3l_rebin6_stack->Draw("same hist");
   Double_t xAxis8[7] = {0, 120.8356, 141.6712, 166.2679, 193.369, 237.9113, 500}; 
   
   TH1D *m3l_rebin6_total__2 = new TH1D("m3l_rebin6_total__2","dummy",6, xAxis8);
   m3l_rebin6_total__2->SetBinContent(2,7.641959);
   m3l_rebin6_total__2->SetBinContent(3,31.59953);
   m3l_rebin6_total__2->SetBinContent(4,112.0543);
   m3l_rebin6_total__2->SetBinContent(5,378.7279);
   m3l_rebin6_total__2->SetBinContent(6,965.9209);
   m3l_rebin6_total__2->SetBinError(2,3.448735);
   m3l_rebin6_total__2->SetBinError(3,5.579002);
   m3l_rebin6_total__2->SetBinError(4,6.224687);
   m3l_rebin6_total__2->SetBinError(5,9.869015);
   m3l_rebin6_total__2->SetBinError(6,12.33706);
   m3l_rebin6_total__2->SetMinimum(0);
   m3l_rebin6_total__2->SetMaximum(1931.842);
   m3l_rebin6_total__2->SetEntries(15152);
   m3l_rebin6_total__2->SetDirectory(0);

   ci = TColor::GetColor("#00cc00");
   m3l_rebin6_total__2->SetFillColor(ci);
   m3l_rebin6_total__2->SetMarkerStyle(20);
   m3l_rebin6_total__2->SetMarkerSize(1.1);
   m3l_rebin6_total__2->GetXaxis()->SetTitle("m3l");
   m3l_rebin6_total__2->GetXaxis()->SetMoreLogLabels();
   m3l_rebin6_total__2->GetXaxis()->SetLabelFont(42);
   m3l_rebin6_total__2->GetXaxis()->SetLabelOffset(999);
   m3l_rebin6_total__2->GetXaxis()->SetLabelSize(0.05);
   m3l_rebin6_total__2->GetXaxis()->SetTitleSize(0.05);
   m3l_rebin6_total__2->GetXaxis()->SetTitleOffset(999);
   m3l_rebin6_total__2->GetXaxis()->SetTitleFont(42);
   m3l_rebin6_total__2->GetYaxis()->SetTitle("Events");
   m3l_rebin6_total__2->GetYaxis()->SetLabelFont(42);
   m3l_rebin6_total__2->GetYaxis()->SetLabelOffset(0.007);
   m3l_rebin6_total__2->GetYaxis()->SetLabelSize(0.05);
   m3l_rebin6_total__2->GetYaxis()->SetTitleSize(0.06);
   m3l_rebin6_total__2->GetYaxis()->SetTitleOffset(1.48);
   m3l_rebin6_total__2->GetYaxis()->SetTitleFont(42);
   m3l_rebin6_total__2->GetZaxis()->SetLabelFont(42);
   m3l_rebin6_total__2->GetZaxis()->SetLabelOffset(0.007);
   m3l_rebin6_total__2->GetZaxis()->SetLabelSize(0.05);
   m3l_rebin6_total__2->GetZaxis()->SetTitleSize(0.06);
   m3l_rebin6_total__2->GetZaxis()->SetTitleFont(42);
   m3l_rebin6_total__2->Draw("AXIS SAME");
   
   Double_t m3l_rebin6_total_errors_fx3001[5] = {
   131.2534,
   153.9696,
   179.8185,
   215.6402,
   368.9556};
   Double_t m3l_rebin6_total_errors_fy3001[5] = {
   7.641959,
   31.59953,
   112.0543,
   378.7279,
   965.9209};
   Double_t m3l_rebin6_total_errors_felx3001[5] = {
   10.41781,
   12.29831,
   13.55059,
   22.27112,
   131.0444};
   Double_t m3l_rebin6_total_errors_fely3001[5] = {
   3.448735,
   5.579002,
   6.224687,
   9.869015,
   12.33706};
   Double_t m3l_rebin6_total_errors_fehx3001[5] = {
   10.41781,
   12.29831,
   13.55059,
   22.27112,
   131.0444};
   Double_t m3l_rebin6_total_errors_fehy3001[5] = {
   3.448735,
   5.579002,
   6.224687,
   9.869015,
   12.33706};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(5,m3l_rebin6_total_errors_fx3001,m3l_rebin6_total_errors_fy3001,m3l_rebin6_total_errors_felx3001,m3l_rebin6_total_errors_fehx3001,m3l_rebin6_total_errors_fely3001,m3l_rebin6_total_errors_fehy3001);
   grae->SetName("m3l_rebin6_total_errors");
   grae->SetTitle("Graph");
   grae->SetFillColor(1);
   grae->SetFillStyle(3013);
   grae->SetMarkerStyle(0);
   
   TH1F *Graph_m3l_rebin6_total_errors3001 = new TH1F("Graph_m3l_rebin6_total_errors3001","Graph",100,82.91919,537.9164);
   Graph_m3l_rebin6_total_errors3001->SetMinimum(3.773902);
   Graph_m3l_rebin6_total_errors3001->SetMaximum(1075.664);
   Graph_m3l_rebin6_total_errors3001->SetDirectory(0);
   Graph_m3l_rebin6_total_errors3001->SetStats(0);
   Graph_m3l_rebin6_total_errors3001->SetLineStyle(0);
   Graph_m3l_rebin6_total_errors3001->SetMarkerStyle(20);
   Graph_m3l_rebin6_total_errors3001->GetXaxis()->SetLabelFont(42);
   Graph_m3l_rebin6_total_errors3001->GetXaxis()->SetLabelOffset(0.007);
   Graph_m3l_rebin6_total_errors3001->GetXaxis()->SetLabelSize(0.05);
   Graph_m3l_rebin6_total_errors3001->GetXaxis()->SetTitleSize(0.06);
   Graph_m3l_rebin6_total_errors3001->GetXaxis()->SetTitleOffset(0.9);
   Graph_m3l_rebin6_total_errors3001->GetXaxis()->SetTitleFont(42);
   Graph_m3l_rebin6_total_errors3001->GetYaxis()->SetLabelFont(42);
   Graph_m3l_rebin6_total_errors3001->GetYaxis()->SetLabelOffset(0.007);
   Graph_m3l_rebin6_total_errors3001->GetYaxis()->SetLabelSize(0.05);
   Graph_m3l_rebin6_total_errors3001->GetYaxis()->SetTitleSize(0.06);
   Graph_m3l_rebin6_total_errors3001->GetYaxis()->SetTitleOffset(1.35);
   Graph_m3l_rebin6_total_errors3001->GetYaxis()->SetTitleFont(42);
   Graph_m3l_rebin6_total_errors3001->GetZaxis()->SetLabelFont(42);
   Graph_m3l_rebin6_total_errors3001->GetZaxis()->SetLabelOffset(0.007);
   Graph_m3l_rebin6_total_errors3001->GetZaxis()->SetLabelSize(0.05);
   Graph_m3l_rebin6_total_errors3001->GetZaxis()->SetTitleSize(0.06);
   Graph_m3l_rebin6_total_errors3001->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_m3l_rebin6_total_errors3001);
   
   grae->Draw("pe2 ");
   
   Double_t m3l_rebin6_data_graph_fx3002[6] = {
   60.41781,
   131.2534,
   153.9696,
   179.8185,
   215.6402,
   368.9556};
   Double_t m3l_rebin6_data_graph_fy3002[6] = {
   1,
   7,
   22,
   136,
   370,
   977};
   Double_t m3l_rebin6_data_graph_felx3002[6] = {
   60.41781,
   10.41781,
   12.29831,
   13.55059,
   22.27112,
   131.0444};
   Double_t m3l_rebin6_data_graph_fely3002[6] = {
   0.8272525,
   2.581513,
   4.654589,
   11.64779,
   19.2271,
   31.25232};
   Double_t m3l_rebin6_data_graph_fehx3002[6] = {
   60.41781,
   10.41781,
   12.29831,
   13.55059,
   22.27112,
   131.0444};
   Double_t m3l_rebin6_data_graph_fehy3002[6] = {
   2.29957,
   3.770356,
   5.761484,
   12.69078,
   20.25316,
   32.26836};
   grae = new TGraphAsymmErrors(6,m3l_rebin6_data_graph_fx3002,m3l_rebin6_data_graph_fy3002,m3l_rebin6_data_graph_felx3002,m3l_rebin6_data_graph_fehx3002,m3l_rebin6_data_graph_fely3002,m3l_rebin6_data_graph_fehy3002);
   grae->SetName("m3l_rebin6_data_graph");
   grae->SetTitle("Graph");
   grae->SetFillStyle(1000);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.1);
   
   TH1F *Graph_m3l_rebin6_data_graph3002 = new TH1F("Graph_m3l_rebin6_data_graph3002","Graph",100,0,550);
   Graph_m3l_rebin6_data_graph3002->SetMinimum(0.1554728);
   Graph_m3l_rebin6_data_graph3002->SetMaximum(1110.178);
   Graph_m3l_rebin6_data_graph3002->SetDirectory(0);
   Graph_m3l_rebin6_data_graph3002->SetStats(0);
   Graph_m3l_rebin6_data_graph3002->SetLineStyle(0);
   Graph_m3l_rebin6_data_graph3002->SetMarkerStyle(20);
   Graph_m3l_rebin6_data_graph3002->GetXaxis()->SetLabelFont(42);
   Graph_m3l_rebin6_data_graph3002->GetXaxis()->SetLabelOffset(0.007);
   Graph_m3l_rebin6_data_graph3002->GetXaxis()->SetLabelSize(0.05);
   Graph_m3l_rebin6_data_graph3002->GetXaxis()->SetTitleSize(0.06);
   Graph_m3l_rebin6_data_graph3002->GetXaxis()->SetTitleOffset(0.9);
   Graph_m3l_rebin6_data_graph3002->GetXaxis()->SetTitleFont(42);
   Graph_m3l_rebin6_data_graph3002->GetYaxis()->SetLabelFont(42);
   Graph_m3l_rebin6_data_graph3002->GetYaxis()->SetLabelOffset(0.007);
   Graph_m3l_rebin6_data_graph3002->GetYaxis()->SetLabelSize(0.05);
   Graph_m3l_rebin6_data_graph3002->GetYaxis()->SetTitleSize(0.06);
   Graph_m3l_rebin6_data_graph3002->GetYaxis()->SetTitleOffset(1.35);
   Graph_m3l_rebin6_data_graph3002->GetYaxis()->SetTitleFont(42);
   Graph_m3l_rebin6_data_graph3002->GetZaxis()->SetLabelFont(42);
   Graph_m3l_rebin6_data_graph3002->GetZaxis()->SetLabelOffset(0.007);
   Graph_m3l_rebin6_data_graph3002->GetZaxis()->SetLabelSize(0.05);
   Graph_m3l_rebin6_data_graph3002->GetZaxis()->SetTitleSize(0.06);
   Graph_m3l_rebin6_data_graph3002->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_m3l_rebin6_data_graph3002);
   
   grae->Draw("pz ");
   
   TLegend *leg = new TLegend(0.62,0.628,0.9,0.91,NULL,"brNDC");
   leg->SetBorderSize(1);
   leg->SetTextSize(0.036);
   leg->SetLineColor(0);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("m3l_rebin6_data","Data","LPE");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1.1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("m3l_rebin6_prompt_WZ_stack_5","WZ","F");

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
   entry=leg->AddEntry("m3l_rebin6_prompt_ZZ_stack_4","qqZZ","F");

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
   entry=leg->AddEntry("m3l_rebin6_fakes_DY_stack_3","Fakes DY","F");

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
   entry=leg->AddEntry("m3l_rebin6_fakes_TT_stack_2","Fakes TT","F");

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
   entry=leg->AddEntry("m3l_rebin6_total_errors","Total unc.","F");
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
   m3l_rebin6_canvas->cd();
  
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
   Double_t xAxis9[7] = {0, 120.8356, 141.6712, 166.2679, 193.369, 237.9113, 500}; 
   
   TH1D *m3l_rebin6_total__3 = new TH1D("m3l_rebin6_total__3","dummy",6, xAxis9);
   m3l_rebin6_total__3->SetBinContent(2,1);
   m3l_rebin6_total__3->SetBinContent(3,1);
   m3l_rebin6_total__3->SetBinContent(4,1);
   m3l_rebin6_total__3->SetBinContent(5,1);
   m3l_rebin6_total__3->SetBinContent(6,1);
   m3l_rebin6_total__3->SetMinimum(0.5);
   m3l_rebin6_total__3->SetMaximum(2);
   m3l_rebin6_total__3->SetEntries(15158);

   ci = TColor::GetColor("#00cc00");
   m3l_rebin6_total__3->SetFillColor(ci);

   ci = TColor::GetColor("#6666ff");
   m3l_rebin6_total__3->SetMarkerColor(ci);
   m3l_rebin6_total__3->SetMarkerSize(1.1);
   m3l_rebin6_total__3->GetXaxis()->SetTitle("m3l");
   m3l_rebin6_total__3->GetXaxis()->SetMoreLogLabels();
   m3l_rebin6_total__3->GetXaxis()->SetLabelFont(42);
   m3l_rebin6_total__3->GetXaxis()->SetLabelOffset(0.015);
   m3l_rebin6_total__3->GetXaxis()->SetLabelSize(0.1);
   m3l_rebin6_total__3->GetXaxis()->SetTitleSize(0.14);
   m3l_rebin6_total__3->GetXaxis()->SetTitleFont(42);
   m3l_rebin6_total__3->GetYaxis()->SetTitle("Data/pred.");
   m3l_rebin6_total__3->GetYaxis()->SetDecimals();
   m3l_rebin6_total__3->GetYaxis()->SetNdivisions(505);
   m3l_rebin6_total__3->GetYaxis()->SetLabelFont(42);
   m3l_rebin6_total__3->GetYaxis()->SetLabelOffset(0.01);
   m3l_rebin6_total__3->GetYaxis()->SetLabelSize(0.11);
   m3l_rebin6_total__3->GetYaxis()->SetTitleSize(0.14);
   m3l_rebin6_total__3->GetYaxis()->SetTitleOffset(0.62);
   m3l_rebin6_total__3->GetYaxis()->SetTitleFont(42);
   m3l_rebin6_total__3->GetZaxis()->SetLabelFont(42);
   m3l_rebin6_total__3->GetZaxis()->SetLabelOffset(0.007);
   m3l_rebin6_total__3->GetZaxis()->SetLabelSize(0.05);
   m3l_rebin6_total__3->GetZaxis()->SetTitleSize(0.06);
   m3l_rebin6_total__3->GetZaxis()->SetTitleFont(42);
   m3l_rebin6_total__3->Draw("AXIS");
   
   Double_t m3l_rebin6_total_errors_fx3003[5] = {
   131.2534,
   153.9696,
   179.8185,
   215.6402,
   368.9556};
   Double_t m3l_rebin6_total_errors_fy3003[5] = {
   1,
   1,
   1,
   1,
   1};
   Double_t m3l_rebin6_total_errors_felx3003[5] = {
   10.41781,
   12.29831,
   13.55059,
   22.27112,
   131.0444};
   Double_t m3l_rebin6_total_errors_fely3003[5] = {
   0.4512893,
   0.1765533,
   0.05555063,
   0.02605833,
   0.01277233};
   Double_t m3l_rebin6_total_errors_fehx3003[5] = {
   10.41781,
   12.29831,
   13.55059,
   22.27112,
   131.0444};
   Double_t m3l_rebin6_total_errors_fehy3003[5] = {
   0.4512893,
   0.1765533,
   0.05555063,
   0.02605833,
   0.01277233};
   grae = new TGraphAsymmErrors(5,m3l_rebin6_total_errors_fx3003,m3l_rebin6_total_errors_fy3003,m3l_rebin6_total_errors_felx3003,m3l_rebin6_total_errors_fehx3003,m3l_rebin6_total_errors_fely3003,m3l_rebin6_total_errors_fehy3003);
   grae->SetName("m3l_rebin6_total_errors");
   grae->SetTitle("Graph");

   ci = TColor::GetColor("#00ffff");
   grae->SetFillColor(ci);

   ci = TColor::GetColor("#00ffff");
   grae->SetMarkerColor(ci);
   grae->Draw("e2");
   
   Double_t m3l_rebin6_total_errors_fx3004[5] = {
   131.2534,
   153.9696,
   179.8185,
   215.6402,
   368.9556};
   Double_t m3l_rebin6_total_errors_fy3004[5] = {
   1,
   1,
   1,
   1,
   1};
   Double_t m3l_rebin6_total_errors_felx3004[5] = {
   10.41781,
   12.29831,
   13.55059,
   22.27112,
   131.0444};
   Double_t m3l_rebin6_total_errors_fely3004[5] = {
   0.4512893,
   0.1765533,
   0.05555063,
   0.02605833,
   0.01277233};
   Double_t m3l_rebin6_total_errors_fehx3004[5] = {
   10.41781,
   12.29831,
   13.55059,
   22.27112,
   131.0444};
   Double_t m3l_rebin6_total_errors_fehy3004[5] = {
   0.4512893,
   0.1765533,
   0.05555063,
   0.02605833,
   0.01277233};
   grae = new TGraphAsymmErrors(5,m3l_rebin6_total_errors_fx3004,m3l_rebin6_total_errors_fy3004,m3l_rebin6_total_errors_felx3004,m3l_rebin6_total_errors_fehx3004,m3l_rebin6_total_errors_fely3004,m3l_rebin6_total_errors_fehy3004);
   grae->SetName("m3l_rebin6_total_errors");
   grae->SetTitle("Graph");

   ci = TColor::GetColor("#6666ff");
   grae->SetFillColor(ci);

   ci = TColor::GetColor("#6666ff");
   grae->SetMarkerColor(ci);
   grae->Draw("e2 ");
   Double_t xAxis10[7] = {0, 120.8356, 141.6712, 166.2679, 193.369, 237.9113, 500}; 
   
   TH1D *m3l_rebin6_total__4 = new TH1D("m3l_rebin6_total__4","dummy",6, xAxis10);
   m3l_rebin6_total__4->SetBinContent(2,1);
   m3l_rebin6_total__4->SetBinContent(3,1);
   m3l_rebin6_total__4->SetBinContent(4,1);
   m3l_rebin6_total__4->SetBinContent(5,1);
   m3l_rebin6_total__4->SetBinContent(6,1);
   m3l_rebin6_total__4->SetMinimum(0.5);
   m3l_rebin6_total__4->SetMaximum(2);
   m3l_rebin6_total__4->SetEntries(15158);

   ci = TColor::GetColor("#00cc00");
   m3l_rebin6_total__4->SetFillColor(ci);

   ci = TColor::GetColor("#6666ff");
   m3l_rebin6_total__4->SetMarkerColor(ci);
   m3l_rebin6_total__4->SetMarkerSize(1.1);
   m3l_rebin6_total__4->GetXaxis()->SetTitle("m3l");
   m3l_rebin6_total__4->GetXaxis()->SetMoreLogLabels();
   m3l_rebin6_total__4->GetXaxis()->SetLabelFont(42);
   m3l_rebin6_total__4->GetXaxis()->SetLabelOffset(0.015);
   m3l_rebin6_total__4->GetXaxis()->SetLabelSize(0.1);
   m3l_rebin6_total__4->GetXaxis()->SetTitleSize(0.14);
   m3l_rebin6_total__4->GetXaxis()->SetTitleFont(42);
   m3l_rebin6_total__4->GetYaxis()->SetTitle("Data/pred.");
   m3l_rebin6_total__4->GetYaxis()->SetDecimals();
   m3l_rebin6_total__4->GetYaxis()->SetNdivisions(505);
   m3l_rebin6_total__4->GetYaxis()->SetLabelFont(42);
   m3l_rebin6_total__4->GetYaxis()->SetLabelOffset(0.01);
   m3l_rebin6_total__4->GetYaxis()->SetLabelSize(0.11);
   m3l_rebin6_total__4->GetYaxis()->SetTitleSize(0.14);
   m3l_rebin6_total__4->GetYaxis()->SetTitleOffset(0.62);
   m3l_rebin6_total__4->GetYaxis()->SetTitleFont(42);
   m3l_rebin6_total__4->GetZaxis()->SetLabelFont(42);
   m3l_rebin6_total__4->GetZaxis()->SetLabelOffset(0.007);
   m3l_rebin6_total__4->GetZaxis()->SetLabelSize(0.05);
   m3l_rebin6_total__4->GetZaxis()->SetTitleSize(0.06);
   m3l_rebin6_total__4->GetZaxis()->SetTitleFont(42);
   m3l_rebin6_total__4->Draw("AXIS SAME");
   TLine *line = new TLine(0,1,500,1);
   line->SetLineColor(58);
   line->SetLineWidth(2);
   line->Draw();
   
   Double_t data_div_fx3005[6] = {
   60.41781,
   131.2534,
   153.9696,
   179.8185,
   215.6402,
   368.9556};
   Double_t data_div_fy3005[6] = {
   0,
   0.9159954,
   0.6962129,
   1.213697,
   0.9769547,
   1.01147};
   Double_t data_div_felx3005[6] = {
   60.41781,
   10.41781,
   12.29831,
   13.55059,
   22.27112,
   131.0444};
   Double_t data_div_fely3005[6] = {
   0,
   0.3378077,
   0.1472993,
   0.1039478,
   0.05076759,
   0.03235495};
   Double_t data_div_fehx3005[6] = {
   60.41781,
   10.41781,
   12.29831,
   13.55059,
   22.27112,
   131.0444};
   Double_t data_div_fehy3005[6] = {
   0,
   0.4933755,
   0.1823282,
   0.1132556,
   0.05347681,
   0.03340684};
   grae = new TGraphAsymmErrors(6,data_div_fx3005,data_div_fy3005,data_div_felx3005,data_div_fehx3005,data_div_fely3005,data_div_fehy3005);
   grae->SetName("data_div");
   grae->SetTitle("Graph");
   grae->SetFillStyle(1000);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.1);
   
   TH1F *Graph_m3l_rebin6_data_graph3005 = new TH1F("Graph_m3l_rebin6_data_graph3005","Graph",100,0,550);
   Graph_m3l_rebin6_data_graph3005->SetMinimum(0.1554728);
   Graph_m3l_rebin6_data_graph3005->SetMaximum(1110.178);
   Graph_m3l_rebin6_data_graph3005->SetDirectory(0);
   Graph_m3l_rebin6_data_graph3005->SetStats(0);
   Graph_m3l_rebin6_data_graph3005->SetLineStyle(0);
   Graph_m3l_rebin6_data_graph3005->SetMarkerStyle(20);
   Graph_m3l_rebin6_data_graph3005->GetXaxis()->SetLabelFont(42);
   Graph_m3l_rebin6_data_graph3005->GetXaxis()->SetLabelOffset(0.007);
   Graph_m3l_rebin6_data_graph3005->GetXaxis()->SetLabelSize(0.05);
   Graph_m3l_rebin6_data_graph3005->GetXaxis()->SetTitleSize(0.06);
   Graph_m3l_rebin6_data_graph3005->GetXaxis()->SetTitleOffset(0.9);
   Graph_m3l_rebin6_data_graph3005->GetXaxis()->SetTitleFont(42);
   Graph_m3l_rebin6_data_graph3005->GetYaxis()->SetLabelFont(42);
   Graph_m3l_rebin6_data_graph3005->GetYaxis()->SetLabelOffset(0.007);
   Graph_m3l_rebin6_data_graph3005->GetYaxis()->SetLabelSize(0.05);
   Graph_m3l_rebin6_data_graph3005->GetYaxis()->SetTitleSize(0.06);
   Graph_m3l_rebin6_data_graph3005->GetYaxis()->SetTitleOffset(1.35);
   Graph_m3l_rebin6_data_graph3005->GetYaxis()->SetTitleFont(42);
   Graph_m3l_rebin6_data_graph3005->GetZaxis()->SetLabelFont(42);
   Graph_m3l_rebin6_data_graph3005->GetZaxis()->SetLabelOffset(0.007);
   Graph_m3l_rebin6_data_graph3005->GetZaxis()->SetLabelSize(0.05);
   Graph_m3l_rebin6_data_graph3005->GetZaxis()->SetTitleSize(0.06);
   Graph_m3l_rebin6_data_graph3005->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_m3l_rebin6_data_graph3005);
   
   grae->Draw("pz ");
   
   leg = new TLegend(0,0,0,0,NULL,"brNDC");
   leg->SetBorderSize(1);
   leg->SetTextSize(0.084);
   leg->SetLineColor(0);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   entry=leg->AddEntry("m3l_rebin6_total_errors","stat. unc.","F");
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
   entry=leg->AddEntry("m3l_rebin6_total_errors","total unc.","F");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   leg->Draw();
   pad2->Modified();
   m3l_rebin6_canvas->cd();
   m3l_rebin6_canvas->Modified();
   m3l_rebin6_canvas->cd();
   m3l_rebin6_canvas->SetSelected(m3l_rebin6_canvas);
}
