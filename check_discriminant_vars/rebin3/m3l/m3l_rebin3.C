void m3l_rebin3()
{
//=========Macro generated from canvas: m3l_rebin3_canvas/m3l_rebin3
//=========  (Thu Dec  8 14:17:51 2022) by ROOT version 6.12/07
   TCanvas *m3l_rebin3_canvas = new TCanvas("m3l_rebin3_canvas", "m3l_rebin3",0,0,600,750);
   gStyle->SetOptFit(1);
   gStyle->SetOptStat(0);
   gStyle->SetOptTitle(0);
   m3l_rebin3_canvas->SetHighLightColor(2);
   m3l_rebin3_canvas->Range(0,0,1,1);
   m3l_rebin3_canvas->SetFillColor(0);
   m3l_rebin3_canvas->SetBorderMode(0);
   m3l_rebin3_canvas->SetBorderSize(2);
   m3l_rebin3_canvas->SetTickx(1);
   m3l_rebin3_canvas->SetTicky(1);
   m3l_rebin3_canvas->SetLeftMargin(0.18);
   m3l_rebin3_canvas->SetRightMargin(0.04);
   m3l_rebin3_canvas->SetBottomMargin(0.13);
   m3l_rebin3_canvas->SetFrameFillStyle(0);
   m3l_rebin3_canvas->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: pad1
   TPad *pad1 = new TPad("pad1", "pad1",0,0.3,1,1);
   pad1->Draw();
   pad1->cd();
   pad1->Range(-115.3846,-73.47807,525.641,2865.645);
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
   Double_t xAxis1[4] = {0, 141.6712, 193.369, 500}; 
   
   TH1D *m3l_rebin3_total__1 = new TH1D("m3l_rebin3_total__1","dummy",3, xAxis1);
   m3l_rebin3_total__1->SetBinContent(1,7.641959);
   m3l_rebin3_total__1->SetBinContent(2,143.6538);
   m3l_rebin3_total__1->SetBinContent(3,1344.649);
   m3l_rebin3_total__1->SetBinError(1,3.448735);
   m3l_rebin3_total__1->SetBinError(2,8.358947);
   m3l_rebin3_total__1->SetBinError(3,15.79875);
   m3l_rebin3_total__1->SetMinimum(0);
   m3l_rebin3_total__1->SetMaximum(2689.297);
   m3l_rebin3_total__1->SetEntries(15152);
   m3l_rebin3_total__1->SetDirectory(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#00cc00");
   m3l_rebin3_total__1->SetFillColor(ci);
   m3l_rebin3_total__1->SetMarkerStyle(20);
   m3l_rebin3_total__1->SetMarkerSize(1.1);
   m3l_rebin3_total__1->GetXaxis()->SetTitle("m3l");
   m3l_rebin3_total__1->GetXaxis()->SetMoreLogLabels();
   m3l_rebin3_total__1->GetXaxis()->SetLabelFont(42);
   m3l_rebin3_total__1->GetXaxis()->SetLabelOffset(999);
   m3l_rebin3_total__1->GetXaxis()->SetLabelSize(0.05);
   m3l_rebin3_total__1->GetXaxis()->SetTitleSize(0.05);
   m3l_rebin3_total__1->GetXaxis()->SetTitleOffset(999);
   m3l_rebin3_total__1->GetXaxis()->SetTitleFont(42);
   m3l_rebin3_total__1->GetYaxis()->SetTitle("Events");
   m3l_rebin3_total__1->GetYaxis()->SetLabelFont(42);
   m3l_rebin3_total__1->GetYaxis()->SetLabelOffset(0.007);
   m3l_rebin3_total__1->GetYaxis()->SetLabelSize(0.05);
   m3l_rebin3_total__1->GetYaxis()->SetTitleSize(0.06);
   m3l_rebin3_total__1->GetYaxis()->SetTitleOffset(1.48);
   m3l_rebin3_total__1->GetYaxis()->SetTitleFont(42);
   m3l_rebin3_total__1->GetZaxis()->SetLabelFont(42);
   m3l_rebin3_total__1->GetZaxis()->SetLabelOffset(0.007);
   m3l_rebin3_total__1->GetZaxis()->SetLabelSize(0.05);
   m3l_rebin3_total__1->GetZaxis()->SetTitleSize(0.06);
   m3l_rebin3_total__1->GetZaxis()->SetTitleFont(42);
   m3l_rebin3_total__1->Draw("HIST");
   
   THStack *m3l_rebin3_stack = new THStack();
   m3l_rebin3_stack->SetName("m3l_rebin3_stack");
   m3l_rebin3_stack->SetTitle("m3l_rebin3");
   Double_t xAxis2[4] = {0, 141.6712, 193.369, 500}; 
   
   TH1F *m3l_rebin3_stack_stack_1 = new TH1F("m3l_rebin3_stack_stack_1","m3l_rebin3",3, xAxis2);
   m3l_rebin3_stack_stack_1->SetMinimum(0);
   m3l_rebin3_stack_stack_1->SetMaximum(1411.881);
   m3l_rebin3_stack_stack_1->SetDirectory(0);
   m3l_rebin3_stack_stack_1->SetStats(0);
   m3l_rebin3_stack_stack_1->SetLineStyle(0);
   m3l_rebin3_stack_stack_1->SetMarkerStyle(20);
   m3l_rebin3_stack_stack_1->GetXaxis()->SetLabelFont(42);
   m3l_rebin3_stack_stack_1->GetXaxis()->SetLabelOffset(0.007);
   m3l_rebin3_stack_stack_1->GetXaxis()->SetLabelSize(0.05);
   m3l_rebin3_stack_stack_1->GetXaxis()->SetTitleSize(0.06);
   m3l_rebin3_stack_stack_1->GetXaxis()->SetTitleOffset(0.9);
   m3l_rebin3_stack_stack_1->GetXaxis()->SetTitleFont(42);
   m3l_rebin3_stack_stack_1->GetYaxis()->SetLabelFont(42);
   m3l_rebin3_stack_stack_1->GetYaxis()->SetLabelOffset(0.007);
   m3l_rebin3_stack_stack_1->GetYaxis()->SetLabelSize(0.05);
   m3l_rebin3_stack_stack_1->GetYaxis()->SetTitleSize(0.06);
   m3l_rebin3_stack_stack_1->GetYaxis()->SetTitleOffset(1.35);
   m3l_rebin3_stack_stack_1->GetYaxis()->SetTitleFont(42);
   m3l_rebin3_stack_stack_1->GetZaxis()->SetLabelFont(42);
   m3l_rebin3_stack_stack_1->GetZaxis()->SetLabelOffset(0.007);
   m3l_rebin3_stack_stack_1->GetZaxis()->SetLabelSize(0.05);
   m3l_rebin3_stack_stack_1->GetZaxis()->SetTitleSize(0.06);
   m3l_rebin3_stack_stack_1->GetZaxis()->SetTitleFont(42);
   m3l_rebin3_stack->SetHistogram(m3l_rebin3_stack_stack_1);
   
   Double_t xAxis3[4] = {0, 141.6712, 193.369, 500}; 
   
   TH1D *m3l_rebin3_fakes_VV_stack_1 = new TH1D("m3l_rebin3_fakes_VV_stack_1","dummy",3, xAxis3);
   m3l_rebin3_fakes_VV_stack_1->SetBinContent(3,0.6803536);
   m3l_rebin3_fakes_VV_stack_1->SetBinError(3,0.2571495);
   m3l_rebin3_fakes_VV_stack_1->SetEntries(11);

   ci = TColor::GetColor("#2e3294");
   m3l_rebin3_fakes_VV_stack_1->SetFillColor(ci);
   m3l_rebin3_fakes_VV_stack_1->SetMarkerStyle(0);
   m3l_rebin3_fakes_VV_stack_1->SetMarkerSize(1.1);
   m3l_rebin3_fakes_VV_stack_1->GetXaxis()->SetTitle("m3l");
   m3l_rebin3_fakes_VV_stack_1->GetXaxis()->SetMoreLogLabels();
   m3l_rebin3_fakes_VV_stack_1->GetXaxis()->SetLabelFont(42);
   m3l_rebin3_fakes_VV_stack_1->GetXaxis()->SetLabelOffset(0.007);
   m3l_rebin3_fakes_VV_stack_1->GetXaxis()->SetLabelSize(0.05);
   m3l_rebin3_fakes_VV_stack_1->GetXaxis()->SetTitleSize(0.06);
   m3l_rebin3_fakes_VV_stack_1->GetXaxis()->SetTitleOffset(0.9);
   m3l_rebin3_fakes_VV_stack_1->GetXaxis()->SetTitleFont(42);
   m3l_rebin3_fakes_VV_stack_1->GetYaxis()->SetTitle("Events");
   m3l_rebin3_fakes_VV_stack_1->GetYaxis()->SetLabelFont(42);
   m3l_rebin3_fakes_VV_stack_1->GetYaxis()->SetLabelOffset(0.007);
   m3l_rebin3_fakes_VV_stack_1->GetYaxis()->SetLabelSize(0.05);
   m3l_rebin3_fakes_VV_stack_1->GetYaxis()->SetTitleSize(0.06);
   m3l_rebin3_fakes_VV_stack_1->GetYaxis()->SetTitleOffset(1.35);
   m3l_rebin3_fakes_VV_stack_1->GetYaxis()->SetTitleFont(42);
   m3l_rebin3_fakes_VV_stack_1->GetZaxis()->SetLabelFont(42);
   m3l_rebin3_fakes_VV_stack_1->GetZaxis()->SetLabelOffset(0.007);
   m3l_rebin3_fakes_VV_stack_1->GetZaxis()->SetLabelSize(0.05);
   m3l_rebin3_fakes_VV_stack_1->GetZaxis()->SetTitleSize(0.06);
   m3l_rebin3_fakes_VV_stack_1->GetZaxis()->SetTitleFont(42);
   m3l_rebin3_stack->Add(m3l_rebin3_fakes_VV_stack_1,"");
   Double_t xAxis4[4] = {0, 141.6712, 193.369, 500}; 
   
   TH1D *m3l_rebin3_fakes_TT_stack_2 = new TH1D("m3l_rebin3_fakes_TT_stack_2","dummy",3, xAxis4);
   m3l_rebin3_fakes_TT_stack_2->SetBinContent(1,0.3116311);
   m3l_rebin3_fakes_TT_stack_2->SetBinContent(2,5.103189);
   m3l_rebin3_fakes_TT_stack_2->SetBinContent(3,49.62951);
   m3l_rebin3_fakes_TT_stack_2->SetBinError(1,0.1607536);
   m3l_rebin3_fakes_TT_stack_2->SetBinError(2,0.599844);
   m3l_rebin3_fakes_TT_stack_2->SetBinError(3,1.831538);
   m3l_rebin3_fakes_TT_stack_2->SetEntries(841);

   ci = TColor::GetColor("#666666");
   m3l_rebin3_fakes_TT_stack_2->SetFillColor(ci);
   m3l_rebin3_fakes_TT_stack_2->SetMarkerStyle(0);
   m3l_rebin3_fakes_TT_stack_2->SetMarkerSize(1.1);
   m3l_rebin3_fakes_TT_stack_2->GetXaxis()->SetTitle("m3l");
   m3l_rebin3_fakes_TT_stack_2->GetXaxis()->SetMoreLogLabels();
   m3l_rebin3_fakes_TT_stack_2->GetXaxis()->SetLabelFont(42);
   m3l_rebin3_fakes_TT_stack_2->GetXaxis()->SetLabelOffset(0.007);
   m3l_rebin3_fakes_TT_stack_2->GetXaxis()->SetLabelSize(0.05);
   m3l_rebin3_fakes_TT_stack_2->GetXaxis()->SetTitleSize(0.06);
   m3l_rebin3_fakes_TT_stack_2->GetXaxis()->SetTitleOffset(0.9);
   m3l_rebin3_fakes_TT_stack_2->GetXaxis()->SetTitleFont(42);
   m3l_rebin3_fakes_TT_stack_2->GetYaxis()->SetTitle("Events");
   m3l_rebin3_fakes_TT_stack_2->GetYaxis()->SetLabelFont(42);
   m3l_rebin3_fakes_TT_stack_2->GetYaxis()->SetLabelOffset(0.007);
   m3l_rebin3_fakes_TT_stack_2->GetYaxis()->SetLabelSize(0.05);
   m3l_rebin3_fakes_TT_stack_2->GetYaxis()->SetTitleSize(0.06);
   m3l_rebin3_fakes_TT_stack_2->GetYaxis()->SetTitleOffset(1.35);
   m3l_rebin3_fakes_TT_stack_2->GetYaxis()->SetTitleFont(42);
   m3l_rebin3_fakes_TT_stack_2->GetZaxis()->SetLabelFont(42);
   m3l_rebin3_fakes_TT_stack_2->GetZaxis()->SetLabelOffset(0.007);
   m3l_rebin3_fakes_TT_stack_2->GetZaxis()->SetLabelSize(0.05);
   m3l_rebin3_fakes_TT_stack_2->GetZaxis()->SetTitleSize(0.06);
   m3l_rebin3_fakes_TT_stack_2->GetZaxis()->SetTitleFont(42);
   m3l_rebin3_stack->Add(m3l_rebin3_fakes_TT_stack_2,"");
   Double_t xAxis5[4] = {0, 141.6712, 193.369, 500}; 
   
   TH1D *m3l_rebin3_fakes_DY_stack_3 = new TH1D("m3l_rebin3_fakes_DY_stack_3","dummy",3, xAxis5);
   m3l_rebin3_fakes_DY_stack_3->SetBinContent(1,6.878088);
   m3l_rebin3_fakes_DY_stack_3->SetBinContent(2,34.39044);
   m3l_rebin3_fakes_DY_stack_3->SetBinContent(3,75.65897);
   m3l_rebin3_fakes_DY_stack_3->SetBinError(1,3.439044);
   m3l_rebin3_fakes_DY_stack_3->SetBinError(2,7.689937);
   m3l_rebin3_fakes_DY_stack_3->SetBinError(3,11.40602);
   m3l_rebin3_fakes_DY_stack_3->SetEntries(72);

   ci = TColor::GetColor("#cccccc");
   m3l_rebin3_fakes_DY_stack_3->SetFillColor(ci);
   m3l_rebin3_fakes_DY_stack_3->SetMarkerStyle(0);
   m3l_rebin3_fakes_DY_stack_3->SetMarkerSize(1.1);
   m3l_rebin3_fakes_DY_stack_3->GetXaxis()->SetTitle("m3l");
   m3l_rebin3_fakes_DY_stack_3->GetXaxis()->SetMoreLogLabels();
   m3l_rebin3_fakes_DY_stack_3->GetXaxis()->SetLabelFont(42);
   m3l_rebin3_fakes_DY_stack_3->GetXaxis()->SetLabelOffset(0.007);
   m3l_rebin3_fakes_DY_stack_3->GetXaxis()->SetLabelSize(0.05);
   m3l_rebin3_fakes_DY_stack_3->GetXaxis()->SetTitleSize(0.06);
   m3l_rebin3_fakes_DY_stack_3->GetXaxis()->SetTitleOffset(0.9);
   m3l_rebin3_fakes_DY_stack_3->GetXaxis()->SetTitleFont(42);
   m3l_rebin3_fakes_DY_stack_3->GetYaxis()->SetTitle("Events");
   m3l_rebin3_fakes_DY_stack_3->GetYaxis()->SetLabelFont(42);
   m3l_rebin3_fakes_DY_stack_3->GetYaxis()->SetLabelOffset(0.007);
   m3l_rebin3_fakes_DY_stack_3->GetYaxis()->SetLabelSize(0.05);
   m3l_rebin3_fakes_DY_stack_3->GetYaxis()->SetTitleSize(0.06);
   m3l_rebin3_fakes_DY_stack_3->GetYaxis()->SetTitleOffset(1.35);
   m3l_rebin3_fakes_DY_stack_3->GetYaxis()->SetTitleFont(42);
   m3l_rebin3_fakes_DY_stack_3->GetZaxis()->SetLabelFont(42);
   m3l_rebin3_fakes_DY_stack_3->GetZaxis()->SetLabelOffset(0.007);
   m3l_rebin3_fakes_DY_stack_3->GetZaxis()->SetLabelSize(0.05);
   m3l_rebin3_fakes_DY_stack_3->GetZaxis()->SetTitleSize(0.06);
   m3l_rebin3_fakes_DY_stack_3->GetZaxis()->SetTitleFont(42);
   m3l_rebin3_stack->Add(m3l_rebin3_fakes_DY_stack_3,"");
   Double_t xAxis6[4] = {0, 141.6712, 193.369, 500}; 
   
   TH1D *m3l_rebin3_prompt_ZZ_stack_4 = new TH1D("m3l_rebin3_prompt_ZZ_stack_4","dummy",3, xAxis6);
   m3l_rebin3_prompt_ZZ_stack_4->SetBinContent(2,10.27518);
   m3l_rebin3_prompt_ZZ_stack_4->SetBinContent(3,62.9355);
   m3l_rebin3_prompt_ZZ_stack_4->SetBinError(2,1.373079);
   m3l_rebin3_prompt_ZZ_stack_4->SetBinError(3,3.398197);
   m3l_rebin3_prompt_ZZ_stack_4->SetEntries(403);

   ci = TColor::GetColor("#00cc00");
   m3l_rebin3_prompt_ZZ_stack_4->SetFillColor(ci);
   m3l_rebin3_prompt_ZZ_stack_4->SetMarkerStyle(0);
   m3l_rebin3_prompt_ZZ_stack_4->SetMarkerSize(1.1);
   m3l_rebin3_prompt_ZZ_stack_4->GetXaxis()->SetTitle("m3l");
   m3l_rebin3_prompt_ZZ_stack_4->GetXaxis()->SetMoreLogLabels();
   m3l_rebin3_prompt_ZZ_stack_4->GetXaxis()->SetLabelFont(42);
   m3l_rebin3_prompt_ZZ_stack_4->GetXaxis()->SetLabelOffset(0.007);
   m3l_rebin3_prompt_ZZ_stack_4->GetXaxis()->SetLabelSize(0.05);
   m3l_rebin3_prompt_ZZ_stack_4->GetXaxis()->SetTitleSize(0.06);
   m3l_rebin3_prompt_ZZ_stack_4->GetXaxis()->SetTitleOffset(0.9);
   m3l_rebin3_prompt_ZZ_stack_4->GetXaxis()->SetTitleFont(42);
   m3l_rebin3_prompt_ZZ_stack_4->GetYaxis()->SetTitle("Events");
   m3l_rebin3_prompt_ZZ_stack_4->GetYaxis()->SetLabelFont(42);
   m3l_rebin3_prompt_ZZ_stack_4->GetYaxis()->SetLabelOffset(0.007);
   m3l_rebin3_prompt_ZZ_stack_4->GetYaxis()->SetLabelSize(0.05);
   m3l_rebin3_prompt_ZZ_stack_4->GetYaxis()->SetTitleSize(0.06);
   m3l_rebin3_prompt_ZZ_stack_4->GetYaxis()->SetTitleOffset(1.35);
   m3l_rebin3_prompt_ZZ_stack_4->GetYaxis()->SetTitleFont(42);
   m3l_rebin3_prompt_ZZ_stack_4->GetZaxis()->SetLabelFont(42);
   m3l_rebin3_prompt_ZZ_stack_4->GetZaxis()->SetLabelOffset(0.007);
   m3l_rebin3_prompt_ZZ_stack_4->GetZaxis()->SetLabelSize(0.05);
   m3l_rebin3_prompt_ZZ_stack_4->GetZaxis()->SetTitleSize(0.06);
   m3l_rebin3_prompt_ZZ_stack_4->GetZaxis()->SetTitleFont(42);
   m3l_rebin3_stack->Add(m3l_rebin3_prompt_ZZ_stack_4,"");
   Double_t xAxis7[4] = {0, 141.6712, 193.369, 500}; 
   
   TH1D *m3l_rebin3_prompt_WZ_stack_5 = new TH1D("m3l_rebin3_prompt_WZ_stack_5","dummy",3, xAxis7);
   m3l_rebin3_prompt_WZ_stack_5->SetBinContent(1,0.45224);
   m3l_rebin3_prompt_WZ_stack_5->SetBinContent(2,93.88501);
   m3l_rebin3_prompt_WZ_stack_5->SetBinContent(3,1155.744);
   m3l_rebin3_prompt_WZ_stack_5->SetBinError(1,0.2022479);
   m3l_rebin3_prompt_WZ_stack_5->SetBinError(2,2.914054);
   m3l_rebin3_prompt_WZ_stack_5->SetBinError(3,10.22422);
   m3l_rebin3_prompt_WZ_stack_5->SetEntries(13825);

   ci = TColor::GetColor("#ffcc00");
   m3l_rebin3_prompt_WZ_stack_5->SetFillColor(ci);
   m3l_rebin3_prompt_WZ_stack_5->SetMarkerStyle(0);
   m3l_rebin3_prompt_WZ_stack_5->SetMarkerSize(1.1);
   m3l_rebin3_prompt_WZ_stack_5->GetXaxis()->SetTitle("m3l");
   m3l_rebin3_prompt_WZ_stack_5->GetXaxis()->SetMoreLogLabels();
   m3l_rebin3_prompt_WZ_stack_5->GetXaxis()->SetLabelFont(42);
   m3l_rebin3_prompt_WZ_stack_5->GetXaxis()->SetLabelOffset(0.007);
   m3l_rebin3_prompt_WZ_stack_5->GetXaxis()->SetLabelSize(0.05);
   m3l_rebin3_prompt_WZ_stack_5->GetXaxis()->SetTitleSize(0.06);
   m3l_rebin3_prompt_WZ_stack_5->GetXaxis()->SetTitleOffset(0.9);
   m3l_rebin3_prompt_WZ_stack_5->GetXaxis()->SetTitleFont(42);
   m3l_rebin3_prompt_WZ_stack_5->GetYaxis()->SetTitle("Events");
   m3l_rebin3_prompt_WZ_stack_5->GetYaxis()->SetLabelFont(42);
   m3l_rebin3_prompt_WZ_stack_5->GetYaxis()->SetLabelOffset(0.007);
   m3l_rebin3_prompt_WZ_stack_5->GetYaxis()->SetLabelSize(0.05);
   m3l_rebin3_prompt_WZ_stack_5->GetYaxis()->SetTitleSize(0.06);
   m3l_rebin3_prompt_WZ_stack_5->GetYaxis()->SetTitleOffset(1.35);
   m3l_rebin3_prompt_WZ_stack_5->GetYaxis()->SetTitleFont(42);
   m3l_rebin3_prompt_WZ_stack_5->GetZaxis()->SetLabelFont(42);
   m3l_rebin3_prompt_WZ_stack_5->GetZaxis()->SetLabelOffset(0.007);
   m3l_rebin3_prompt_WZ_stack_5->GetZaxis()->SetLabelSize(0.05);
   m3l_rebin3_prompt_WZ_stack_5->GetZaxis()->SetTitleSize(0.06);
   m3l_rebin3_prompt_WZ_stack_5->GetZaxis()->SetTitleFont(42);
   m3l_rebin3_stack->Add(m3l_rebin3_prompt_WZ_stack_5,"");
   m3l_rebin3_stack->Draw("same hist");
   Double_t xAxis8[4] = {0, 141.6712, 193.369, 500}; 
   
   TH1D *m3l_rebin3_total__2 = new TH1D("m3l_rebin3_total__2","dummy",3, xAxis8);
   m3l_rebin3_total__2->SetBinContent(1,7.641959);
   m3l_rebin3_total__2->SetBinContent(2,143.6538);
   m3l_rebin3_total__2->SetBinContent(3,1344.649);
   m3l_rebin3_total__2->SetBinError(1,3.448735);
   m3l_rebin3_total__2->SetBinError(2,8.358947);
   m3l_rebin3_total__2->SetBinError(3,15.79875);
   m3l_rebin3_total__2->SetMinimum(0);
   m3l_rebin3_total__2->SetMaximum(2689.297);
   m3l_rebin3_total__2->SetEntries(15152);
   m3l_rebin3_total__2->SetDirectory(0);

   ci = TColor::GetColor("#00cc00");
   m3l_rebin3_total__2->SetFillColor(ci);
   m3l_rebin3_total__2->SetMarkerStyle(20);
   m3l_rebin3_total__2->SetMarkerSize(1.1);
   m3l_rebin3_total__2->GetXaxis()->SetTitle("m3l");
   m3l_rebin3_total__2->GetXaxis()->SetMoreLogLabels();
   m3l_rebin3_total__2->GetXaxis()->SetLabelFont(42);
   m3l_rebin3_total__2->GetXaxis()->SetLabelOffset(999);
   m3l_rebin3_total__2->GetXaxis()->SetLabelSize(0.05);
   m3l_rebin3_total__2->GetXaxis()->SetTitleSize(0.05);
   m3l_rebin3_total__2->GetXaxis()->SetTitleOffset(999);
   m3l_rebin3_total__2->GetXaxis()->SetTitleFont(42);
   m3l_rebin3_total__2->GetYaxis()->SetTitle("Events");
   m3l_rebin3_total__2->GetYaxis()->SetLabelFont(42);
   m3l_rebin3_total__2->GetYaxis()->SetLabelOffset(0.007);
   m3l_rebin3_total__2->GetYaxis()->SetLabelSize(0.05);
   m3l_rebin3_total__2->GetYaxis()->SetTitleSize(0.06);
   m3l_rebin3_total__2->GetYaxis()->SetTitleOffset(1.48);
   m3l_rebin3_total__2->GetYaxis()->SetTitleFont(42);
   m3l_rebin3_total__2->GetZaxis()->SetLabelFont(42);
   m3l_rebin3_total__2->GetZaxis()->SetLabelOffset(0.007);
   m3l_rebin3_total__2->GetZaxis()->SetLabelSize(0.05);
   m3l_rebin3_total__2->GetZaxis()->SetTitleSize(0.06);
   m3l_rebin3_total__2->GetZaxis()->SetTitleFont(42);
   m3l_rebin3_total__2->Draw("AXIS SAME");
   
   Double_t m3l_rebin3_total_errors_fx3001[3] = {
   70.83562,
   167.5201,
   346.6845};
   Double_t m3l_rebin3_total_errors_fy3001[3] = {
   7.641959,
   143.6538,
   1344.649};
   Double_t m3l_rebin3_total_errors_felx3001[3] = {
   70.83562,
   25.8489,
   153.3155};
   Double_t m3l_rebin3_total_errors_fely3001[3] = {
   3.448735,
   8.358947,
   15.79875};
   Double_t m3l_rebin3_total_errors_fehx3001[3] = {
   70.83562,
   25.8489,
   153.3155};
   Double_t m3l_rebin3_total_errors_fehy3001[3] = {
   3.448735,
   8.358947,
   15.79875};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(3,m3l_rebin3_total_errors_fx3001,m3l_rebin3_total_errors_fy3001,m3l_rebin3_total_errors_felx3001,m3l_rebin3_total_errors_fehx3001,m3l_rebin3_total_errors_fely3001,m3l_rebin3_total_errors_fehy3001);
   grae->SetName("m3l_rebin3_total_errors");
   grae->SetTitle("Graph");
   grae->SetFillColor(1);
   grae->SetFillStyle(3013);
   grae->SetMarkerStyle(0);
   
   TH1F *Graph_m3l_rebin3_total_errors3001 = new TH1F("Graph_m3l_rebin3_total_errors3001","Graph",100,0,550);
   Graph_m3l_rebin3_total_errors3001->SetMinimum(3.773902);
   Graph_m3l_rebin3_total_errors3001->SetMaximum(1496.073);
   Graph_m3l_rebin3_total_errors3001->SetDirectory(0);
   Graph_m3l_rebin3_total_errors3001->SetStats(0);
   Graph_m3l_rebin3_total_errors3001->SetLineStyle(0);
   Graph_m3l_rebin3_total_errors3001->SetMarkerStyle(20);
   Graph_m3l_rebin3_total_errors3001->GetXaxis()->SetLabelFont(42);
   Graph_m3l_rebin3_total_errors3001->GetXaxis()->SetLabelOffset(0.007);
   Graph_m3l_rebin3_total_errors3001->GetXaxis()->SetLabelSize(0.05);
   Graph_m3l_rebin3_total_errors3001->GetXaxis()->SetTitleSize(0.06);
   Graph_m3l_rebin3_total_errors3001->GetXaxis()->SetTitleOffset(0.9);
   Graph_m3l_rebin3_total_errors3001->GetXaxis()->SetTitleFont(42);
   Graph_m3l_rebin3_total_errors3001->GetYaxis()->SetLabelFont(42);
   Graph_m3l_rebin3_total_errors3001->GetYaxis()->SetLabelOffset(0.007);
   Graph_m3l_rebin3_total_errors3001->GetYaxis()->SetLabelSize(0.05);
   Graph_m3l_rebin3_total_errors3001->GetYaxis()->SetTitleSize(0.06);
   Graph_m3l_rebin3_total_errors3001->GetYaxis()->SetTitleOffset(1.35);
   Graph_m3l_rebin3_total_errors3001->GetYaxis()->SetTitleFont(42);
   Graph_m3l_rebin3_total_errors3001->GetZaxis()->SetLabelFont(42);
   Graph_m3l_rebin3_total_errors3001->GetZaxis()->SetLabelOffset(0.007);
   Graph_m3l_rebin3_total_errors3001->GetZaxis()->SetLabelSize(0.05);
   Graph_m3l_rebin3_total_errors3001->GetZaxis()->SetTitleSize(0.06);
   Graph_m3l_rebin3_total_errors3001->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_m3l_rebin3_total_errors3001);
   
   grae->Draw("pe2 ");
   
   Double_t m3l_rebin3_data_graph_fx3002[3] = {
   70.83562,
   167.5201,
   346.6845};
   Double_t m3l_rebin3_data_graph_fy3002[3] = {
   8,
   158,
   1347};
   Double_t m3l_rebin3_data_graph_felx3002[3] = {
   70.83562,
   25.8489,
   153.3155};
   Double_t m3l_rebin3_data_graph_fely3002[3] = {
   2.768432,
   12.55675,
   36.69773};
   Double_t m3l_rebin3_data_graph_fehx3002[3] = {
   70.83562,
   25.8489,
   153.3155};
   Double_t m3l_rebin3_data_graph_fehy3002[3] = {
   3.94522,
   13.59664,
   37.7114};
   grae = new TGraphAsymmErrors(3,m3l_rebin3_data_graph_fx3002,m3l_rebin3_data_graph_fy3002,m3l_rebin3_data_graph_felx3002,m3l_rebin3_data_graph_fehx3002,m3l_rebin3_data_graph_fely3002,m3l_rebin3_data_graph_fehy3002);
   grae->SetName("m3l_rebin3_data_graph");
   grae->SetTitle("Graph");
   grae->SetFillStyle(1000);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.1);
   
   TH1F *Graph_m3l_rebin3_data_graph3002 = new TH1F("Graph_m3l_rebin3_data_graph3002","Graph",100,0,550);
   Graph_m3l_rebin3_data_graph3002->SetMinimum(4.708411);
   Graph_m3l_rebin3_data_graph3002->SetMaximum(1522.659);
   Graph_m3l_rebin3_data_graph3002->SetDirectory(0);
   Graph_m3l_rebin3_data_graph3002->SetStats(0);
   Graph_m3l_rebin3_data_graph3002->SetLineStyle(0);
   Graph_m3l_rebin3_data_graph3002->SetMarkerStyle(20);
   Graph_m3l_rebin3_data_graph3002->GetXaxis()->SetLabelFont(42);
   Graph_m3l_rebin3_data_graph3002->GetXaxis()->SetLabelOffset(0.007);
   Graph_m3l_rebin3_data_graph3002->GetXaxis()->SetLabelSize(0.05);
   Graph_m3l_rebin3_data_graph3002->GetXaxis()->SetTitleSize(0.06);
   Graph_m3l_rebin3_data_graph3002->GetXaxis()->SetTitleOffset(0.9);
   Graph_m3l_rebin3_data_graph3002->GetXaxis()->SetTitleFont(42);
   Graph_m3l_rebin3_data_graph3002->GetYaxis()->SetLabelFont(42);
   Graph_m3l_rebin3_data_graph3002->GetYaxis()->SetLabelOffset(0.007);
   Graph_m3l_rebin3_data_graph3002->GetYaxis()->SetLabelSize(0.05);
   Graph_m3l_rebin3_data_graph3002->GetYaxis()->SetTitleSize(0.06);
   Graph_m3l_rebin3_data_graph3002->GetYaxis()->SetTitleOffset(1.35);
   Graph_m3l_rebin3_data_graph3002->GetYaxis()->SetTitleFont(42);
   Graph_m3l_rebin3_data_graph3002->GetZaxis()->SetLabelFont(42);
   Graph_m3l_rebin3_data_graph3002->GetZaxis()->SetLabelOffset(0.007);
   Graph_m3l_rebin3_data_graph3002->GetZaxis()->SetLabelSize(0.05);
   Graph_m3l_rebin3_data_graph3002->GetZaxis()->SetTitleSize(0.06);
   Graph_m3l_rebin3_data_graph3002->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_m3l_rebin3_data_graph3002);
   
   grae->Draw("pz ");
   
   TLegend *leg = new TLegend(0.62,0.628,0.9,0.91,NULL,"brNDC");
   leg->SetBorderSize(1);
   leg->SetTextSize(0.036);
   leg->SetLineColor(0);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("m3l_rebin3_data","Data","LPE");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1.1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("m3l_rebin3_prompt_WZ_stack_5","WZ","F");

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
   entry=leg->AddEntry("m3l_rebin3_prompt_ZZ_stack_4","qqZZ","F");

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
   entry=leg->AddEntry("m3l_rebin3_fakes_DY_stack_3","Fakes DY","F");

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
   entry=leg->AddEntry("m3l_rebin3_fakes_TT_stack_2","Fakes TT","F");

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
   entry=leg->AddEntry("m3l_rebin3_total_errors","Total unc.","F");
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
   m3l_rebin3_canvas->cd();
  
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
   Double_t xAxis9[4] = {0, 141.6712, 193.369, 500}; 
   
   TH1D *m3l_rebin3_total__3 = new TH1D("m3l_rebin3_total__3","dummy",3, xAxis9);
   m3l_rebin3_total__3->SetBinContent(1,1);
   m3l_rebin3_total__3->SetBinContent(2,1);
   m3l_rebin3_total__3->SetBinContent(3,1);
   m3l_rebin3_total__3->SetMinimum(0.5);
   m3l_rebin3_total__3->SetMaximum(2);
   m3l_rebin3_total__3->SetEntries(15155);

   ci = TColor::GetColor("#00cc00");
   m3l_rebin3_total__3->SetFillColor(ci);

   ci = TColor::GetColor("#6666ff");
   m3l_rebin3_total__3->SetMarkerColor(ci);
   m3l_rebin3_total__3->SetMarkerSize(1.1);
   m3l_rebin3_total__3->GetXaxis()->SetTitle("m3l");
   m3l_rebin3_total__3->GetXaxis()->SetMoreLogLabels();
   m3l_rebin3_total__3->GetXaxis()->SetLabelFont(42);
   m3l_rebin3_total__3->GetXaxis()->SetLabelOffset(0.015);
   m3l_rebin3_total__3->GetXaxis()->SetLabelSize(0.1);
   m3l_rebin3_total__3->GetXaxis()->SetTitleSize(0.14);
   m3l_rebin3_total__3->GetXaxis()->SetTitleFont(42);
   m3l_rebin3_total__3->GetYaxis()->SetTitle("Data/pred.");
   m3l_rebin3_total__3->GetYaxis()->SetDecimals();
   m3l_rebin3_total__3->GetYaxis()->SetNdivisions(505);
   m3l_rebin3_total__3->GetYaxis()->SetLabelFont(42);
   m3l_rebin3_total__3->GetYaxis()->SetLabelOffset(0.01);
   m3l_rebin3_total__3->GetYaxis()->SetLabelSize(0.11);
   m3l_rebin3_total__3->GetYaxis()->SetTitleSize(0.14);
   m3l_rebin3_total__3->GetYaxis()->SetTitleOffset(0.62);
   m3l_rebin3_total__3->GetYaxis()->SetTitleFont(42);
   m3l_rebin3_total__3->GetZaxis()->SetLabelFont(42);
   m3l_rebin3_total__3->GetZaxis()->SetLabelOffset(0.007);
   m3l_rebin3_total__3->GetZaxis()->SetLabelSize(0.05);
   m3l_rebin3_total__3->GetZaxis()->SetTitleSize(0.06);
   m3l_rebin3_total__3->GetZaxis()->SetTitleFont(42);
   m3l_rebin3_total__3->Draw("AXIS");
   
   Double_t m3l_rebin3_total_errors_fx3003[3] = {
   70.83562,
   167.5201,
   346.6845};
   Double_t m3l_rebin3_total_errors_fy3003[3] = {
   1,
   1,
   1};
   Double_t m3l_rebin3_total_errors_felx3003[3] = {
   70.83562,
   25.8489,
   153.3155};
   Double_t m3l_rebin3_total_errors_fely3003[3] = {
   0.4512893,
   0.05818813,
   0.01174935};
   Double_t m3l_rebin3_total_errors_fehx3003[3] = {
   70.83562,
   25.8489,
   153.3155};
   Double_t m3l_rebin3_total_errors_fehy3003[3] = {
   0.4512893,
   0.05818813,
   0.01174935};
   grae = new TGraphAsymmErrors(3,m3l_rebin3_total_errors_fx3003,m3l_rebin3_total_errors_fy3003,m3l_rebin3_total_errors_felx3003,m3l_rebin3_total_errors_fehx3003,m3l_rebin3_total_errors_fely3003,m3l_rebin3_total_errors_fehy3003);
   grae->SetName("m3l_rebin3_total_errors");
   grae->SetTitle("Graph");

   ci = TColor::GetColor("#00ffff");
   grae->SetFillColor(ci);

   ci = TColor::GetColor("#00ffff");
   grae->SetMarkerColor(ci);
   grae->Draw("e2");
   
   Double_t m3l_rebin3_total_errors_fx3004[3] = {
   70.83562,
   167.5201,
   346.6845};
   Double_t m3l_rebin3_total_errors_fy3004[3] = {
   1,
   1,
   1};
   Double_t m3l_rebin3_total_errors_felx3004[3] = {
   70.83562,
   25.8489,
   153.3155};
   Double_t m3l_rebin3_total_errors_fely3004[3] = {
   0.4512893,
   0.05818813,
   0.01174935};
   Double_t m3l_rebin3_total_errors_fehx3004[3] = {
   70.83562,
   25.8489,
   153.3155};
   Double_t m3l_rebin3_total_errors_fehy3004[3] = {
   0.4512893,
   0.05818813,
   0.01174935};
   grae = new TGraphAsymmErrors(3,m3l_rebin3_total_errors_fx3004,m3l_rebin3_total_errors_fy3004,m3l_rebin3_total_errors_felx3004,m3l_rebin3_total_errors_fehx3004,m3l_rebin3_total_errors_fely3004,m3l_rebin3_total_errors_fehy3004);
   grae->SetName("m3l_rebin3_total_errors");
   grae->SetTitle("Graph");

   ci = TColor::GetColor("#6666ff");
   grae->SetFillColor(ci);

   ci = TColor::GetColor("#6666ff");
   grae->SetMarkerColor(ci);
   grae->Draw("e2 ");
   Double_t xAxis10[4] = {0, 141.6712, 193.369, 500}; 
   
   TH1D *m3l_rebin3_total__4 = new TH1D("m3l_rebin3_total__4","dummy",3, xAxis10);
   m3l_rebin3_total__4->SetBinContent(1,1);
   m3l_rebin3_total__4->SetBinContent(2,1);
   m3l_rebin3_total__4->SetBinContent(3,1);
   m3l_rebin3_total__4->SetMinimum(0.5);
   m3l_rebin3_total__4->SetMaximum(2);
   m3l_rebin3_total__4->SetEntries(15155);

   ci = TColor::GetColor("#00cc00");
   m3l_rebin3_total__4->SetFillColor(ci);

   ci = TColor::GetColor("#6666ff");
   m3l_rebin3_total__4->SetMarkerColor(ci);
   m3l_rebin3_total__4->SetMarkerSize(1.1);
   m3l_rebin3_total__4->GetXaxis()->SetTitle("m3l");
   m3l_rebin3_total__4->GetXaxis()->SetMoreLogLabels();
   m3l_rebin3_total__4->GetXaxis()->SetLabelFont(42);
   m3l_rebin3_total__4->GetXaxis()->SetLabelOffset(0.015);
   m3l_rebin3_total__4->GetXaxis()->SetLabelSize(0.1);
   m3l_rebin3_total__4->GetXaxis()->SetTitleSize(0.14);
   m3l_rebin3_total__4->GetXaxis()->SetTitleFont(42);
   m3l_rebin3_total__4->GetYaxis()->SetTitle("Data/pred.");
   m3l_rebin3_total__4->GetYaxis()->SetDecimals();
   m3l_rebin3_total__4->GetYaxis()->SetNdivisions(505);
   m3l_rebin3_total__4->GetYaxis()->SetLabelFont(42);
   m3l_rebin3_total__4->GetYaxis()->SetLabelOffset(0.01);
   m3l_rebin3_total__4->GetYaxis()->SetLabelSize(0.11);
   m3l_rebin3_total__4->GetYaxis()->SetTitleSize(0.14);
   m3l_rebin3_total__4->GetYaxis()->SetTitleOffset(0.62);
   m3l_rebin3_total__4->GetYaxis()->SetTitleFont(42);
   m3l_rebin3_total__4->GetZaxis()->SetLabelFont(42);
   m3l_rebin3_total__4->GetZaxis()->SetLabelOffset(0.007);
   m3l_rebin3_total__4->GetZaxis()->SetLabelSize(0.05);
   m3l_rebin3_total__4->GetZaxis()->SetTitleSize(0.06);
   m3l_rebin3_total__4->GetZaxis()->SetTitleFont(42);
   m3l_rebin3_total__4->Draw("AXIS SAME");
   TLine *line = new TLine(0,1,500,1);
   line->SetLineColor(58);
   line->SetLineWidth(2);
   line->Draw();
   
   Double_t data_div_fx3005[3] = {
   70.83562,
   167.5201,
   346.6845};
   Double_t data_div_fy3005[3] = {
   1.046852,
   1.099866,
   1.001749};
   Double_t data_div_felx3005[3] = {
   70.83562,
   25.8489,
   153.3155};
   Double_t data_div_fely3005[3] = {
   0.3622673,
   0.08740982,
   0.02729169};
   Double_t data_div_fehx3005[3] = {
   70.83562,
   25.8489,
   153.3155};
   Double_t data_div_fehy3005[3] = {
   0.5162577,
   0.09464861,
   0.02804554};
   grae = new TGraphAsymmErrors(3,data_div_fx3005,data_div_fy3005,data_div_felx3005,data_div_fehx3005,data_div_fely3005,data_div_fehy3005);
   grae->SetName("data_div");
   grae->SetTitle("Graph");
   grae->SetFillStyle(1000);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.1);
   
   TH1F *Graph_m3l_rebin3_data_graph3005 = new TH1F("Graph_m3l_rebin3_data_graph3005","Graph",100,0,550);
   Graph_m3l_rebin3_data_graph3005->SetMinimum(4.708411);
   Graph_m3l_rebin3_data_graph3005->SetMaximum(1522.659);
   Graph_m3l_rebin3_data_graph3005->SetDirectory(0);
   Graph_m3l_rebin3_data_graph3005->SetStats(0);
   Graph_m3l_rebin3_data_graph3005->SetLineStyle(0);
   Graph_m3l_rebin3_data_graph3005->SetMarkerStyle(20);
   Graph_m3l_rebin3_data_graph3005->GetXaxis()->SetLabelFont(42);
   Graph_m3l_rebin3_data_graph3005->GetXaxis()->SetLabelOffset(0.007);
   Graph_m3l_rebin3_data_graph3005->GetXaxis()->SetLabelSize(0.05);
   Graph_m3l_rebin3_data_graph3005->GetXaxis()->SetTitleSize(0.06);
   Graph_m3l_rebin3_data_graph3005->GetXaxis()->SetTitleOffset(0.9);
   Graph_m3l_rebin3_data_graph3005->GetXaxis()->SetTitleFont(42);
   Graph_m3l_rebin3_data_graph3005->GetYaxis()->SetLabelFont(42);
   Graph_m3l_rebin3_data_graph3005->GetYaxis()->SetLabelOffset(0.007);
   Graph_m3l_rebin3_data_graph3005->GetYaxis()->SetLabelSize(0.05);
   Graph_m3l_rebin3_data_graph3005->GetYaxis()->SetTitleSize(0.06);
   Graph_m3l_rebin3_data_graph3005->GetYaxis()->SetTitleOffset(1.35);
   Graph_m3l_rebin3_data_graph3005->GetYaxis()->SetTitleFont(42);
   Graph_m3l_rebin3_data_graph3005->GetZaxis()->SetLabelFont(42);
   Graph_m3l_rebin3_data_graph3005->GetZaxis()->SetLabelOffset(0.007);
   Graph_m3l_rebin3_data_graph3005->GetZaxis()->SetLabelSize(0.05);
   Graph_m3l_rebin3_data_graph3005->GetZaxis()->SetTitleSize(0.06);
   Graph_m3l_rebin3_data_graph3005->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_m3l_rebin3_data_graph3005);
   
   grae->Draw("pz ");
   
   leg = new TLegend(0,0,0,0,NULL,"brNDC");
   leg->SetBorderSize(1);
   leg->SetTextSize(0.084);
   leg->SetLineColor(0);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   entry=leg->AddEntry("m3l_rebin3_total_errors","stat. unc.","F");
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
   entry=leg->AddEntry("m3l_rebin3_total_errors","total unc.","F");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   leg->Draw();
   pad2->Modified();
   m3l_rebin3_canvas->cd();
   m3l_rebin3_canvas->Modified();
   m3l_rebin3_canvas->cd();
   m3l_rebin3_canvas->SetSelected(m3l_rebin3_canvas);
}
