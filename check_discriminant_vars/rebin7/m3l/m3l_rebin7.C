void m3l_rebin7()
{
//=========Macro generated from canvas: m3l_rebin7_canvas/m3l_rebin7
//=========  (Thu Dec 15 19:41:28 2022) by ROOT version 6.12/07
   TCanvas *m3l_rebin7_canvas = new TCanvas("m3l_rebin7_canvas", "m3l_rebin7",0,0,600,750);
   gStyle->SetOptFit(1);
   gStyle->SetOptStat(0);
   gStyle->SetOptTitle(0);
   m3l_rebin7_canvas->SetHighLightColor(2);
   m3l_rebin7_canvas->Range(0,0,1,1);
   m3l_rebin7_canvas->SetFillColor(0);
   m3l_rebin7_canvas->SetBorderMode(0);
   m3l_rebin7_canvas->SetBorderSize(2);
   m3l_rebin7_canvas->SetTickx(1);
   m3l_rebin7_canvas->SetTicky(1);
   m3l_rebin7_canvas->SetLeftMargin(0.18);
   m3l_rebin7_canvas->SetRightMargin(0.04);
   m3l_rebin7_canvas->SetBottomMargin(0.13);
   m3l_rebin7_canvas->SetFrameFillStyle(0);
   m3l_rebin7_canvas->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: pad1
   TPad *pad1 = new TPad("pad1", "pad1",0,0.3,1,1);
   pad1->Draw();
   pad1->cd();
   pad1->Range(-115.3846,-49.06416,525.641,1913.502);
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
   Double_t xAxis1[8] = {0, 117.8591, 135.7182, 154.6531, 177.8827, 202.0599, 245.0816, 500}; 
   
   TH1D *m3l_rebin7_total__1 = new TH1D("m3l_rebin7_total__1","dummy",7, xAxis1);
   m3l_rebin7_total__1->SetBinContent(2,5.470197);
   m3l_rebin7_total__1->SetBinContent(3,11.55825);
   m3l_rebin7_total__1->SetBinContent(4,56.77297);
   m3l_rebin7_total__1->SetBinContent(5,139.4567);
   m3l_rebin7_total__1->SetBinContent(6,384.8123);
   m3l_rebin7_total__1->SetBinContent(7,897.8741);
   m3l_rebin7_total__1->SetBinError(2,2.982635);
   m3l_rebin7_total__1->SetBinError(3,3.883007);
   m3l_rebin7_total__1->SetBinError(4,5.791296);
   m3l_rebin7_total__1->SetBinError(5,6.856039);
   m3l_rebin7_total__1->SetBinError(6,9.30812);
   m3l_rebin7_total__1->SetBinError(7,11.8409);
   m3l_rebin7_total__1->SetMinimum(0);
   m3l_rebin7_total__1->SetMaximum(1795.748);
   m3l_rebin7_total__1->SetEntries(15152);
   m3l_rebin7_total__1->SetDirectory(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#00cc00");
   m3l_rebin7_total__1->SetFillColor(ci);
   m3l_rebin7_total__1->SetMarkerStyle(20);
   m3l_rebin7_total__1->SetMarkerSize(1.1);
   m3l_rebin7_total__1->GetXaxis()->SetTitle("m3l");
   m3l_rebin7_total__1->GetXaxis()->SetMoreLogLabels();
   m3l_rebin7_total__1->GetXaxis()->SetLabelFont(42);
   m3l_rebin7_total__1->GetXaxis()->SetLabelOffset(999);
   m3l_rebin7_total__1->GetXaxis()->SetLabelSize(0.05);
   m3l_rebin7_total__1->GetXaxis()->SetTitleSize(0.05);
   m3l_rebin7_total__1->GetXaxis()->SetTitleOffset(999);
   m3l_rebin7_total__1->GetXaxis()->SetTitleFont(42);
   m3l_rebin7_total__1->GetYaxis()->SetTitle("Events");
   m3l_rebin7_total__1->GetYaxis()->SetLabelFont(42);
   m3l_rebin7_total__1->GetYaxis()->SetLabelOffset(0.007);
   m3l_rebin7_total__1->GetYaxis()->SetLabelSize(0.05);
   m3l_rebin7_total__1->GetYaxis()->SetTitleSize(0.06);
   m3l_rebin7_total__1->GetYaxis()->SetTitleOffset(1.48);
   m3l_rebin7_total__1->GetYaxis()->SetTitleFont(42);
   m3l_rebin7_total__1->GetZaxis()->SetLabelFont(42);
   m3l_rebin7_total__1->GetZaxis()->SetLabelOffset(0.007);
   m3l_rebin7_total__1->GetZaxis()->SetLabelSize(0.05);
   m3l_rebin7_total__1->GetZaxis()->SetTitleSize(0.06);
   m3l_rebin7_total__1->GetZaxis()->SetTitleFont(42);
   m3l_rebin7_total__1->Draw("HIST");
   
   THStack *m3l_rebin7_stack = new THStack();
   m3l_rebin7_stack->SetName("m3l_rebin7_stack");
   m3l_rebin7_stack->SetTitle("m3l_rebin7");
   Double_t xAxis2[8] = {0, 117.8591, 135.7182, 154.6531, 177.8827, 202.0599, 245.0816, 500}; 
   
   TH1F *m3l_rebin7_stack_stack_1 = new TH1F("m3l_rebin7_stack_stack_1","m3l_rebin7",7, xAxis2);
   m3l_rebin7_stack_stack_1->SetMinimum(0);
   m3l_rebin7_stack_stack_1->SetMaximum(942.7678);
   m3l_rebin7_stack_stack_1->SetDirectory(0);
   m3l_rebin7_stack_stack_1->SetStats(0);
   m3l_rebin7_stack_stack_1->SetLineStyle(0);
   m3l_rebin7_stack_stack_1->SetMarkerStyle(20);
   m3l_rebin7_stack_stack_1->GetXaxis()->SetLabelFont(42);
   m3l_rebin7_stack_stack_1->GetXaxis()->SetLabelOffset(0.007);
   m3l_rebin7_stack_stack_1->GetXaxis()->SetLabelSize(0.05);
   m3l_rebin7_stack_stack_1->GetXaxis()->SetTitleSize(0.06);
   m3l_rebin7_stack_stack_1->GetXaxis()->SetTitleOffset(0.9);
   m3l_rebin7_stack_stack_1->GetXaxis()->SetTitleFont(42);
   m3l_rebin7_stack_stack_1->GetYaxis()->SetLabelFont(42);
   m3l_rebin7_stack_stack_1->GetYaxis()->SetLabelOffset(0.007);
   m3l_rebin7_stack_stack_1->GetYaxis()->SetLabelSize(0.05);
   m3l_rebin7_stack_stack_1->GetYaxis()->SetTitleSize(0.06);
   m3l_rebin7_stack_stack_1->GetYaxis()->SetTitleOffset(1.35);
   m3l_rebin7_stack_stack_1->GetYaxis()->SetTitleFont(42);
   m3l_rebin7_stack_stack_1->GetZaxis()->SetLabelFont(42);
   m3l_rebin7_stack_stack_1->GetZaxis()->SetLabelOffset(0.007);
   m3l_rebin7_stack_stack_1->GetZaxis()->SetLabelSize(0.05);
   m3l_rebin7_stack_stack_1->GetZaxis()->SetTitleSize(0.06);
   m3l_rebin7_stack_stack_1->GetZaxis()->SetTitleFont(42);
   m3l_rebin7_stack->SetHistogram(m3l_rebin7_stack_stack_1);
   
   Double_t xAxis3[8] = {0, 117.8591, 135.7182, 154.6531, 177.8827, 202.0599, 245.0816, 500}; 
   
   TH1D *m3l_rebin7_fakes_VV_stack_1 = new TH1D("m3l_rebin7_fakes_VV_stack_1","dummy",7, xAxis3);
   m3l_rebin7_fakes_VV_stack_1->SetBinContent(5,0.09719337);
   m3l_rebin7_fakes_VV_stack_1->SetBinContent(6,0.1943867);
   m3l_rebin7_fakes_VV_stack_1->SetBinContent(7,0.3887735);
   m3l_rebin7_fakes_VV_stack_1->SetBinError(5,0.09719337);
   m3l_rebin7_fakes_VV_stack_1->SetBinError(6,0.1374522);
   m3l_rebin7_fakes_VV_stack_1->SetBinError(7,0.1943867);
   m3l_rebin7_fakes_VV_stack_1->SetEntries(11);

   ci = TColor::GetColor("#2e3294");
   m3l_rebin7_fakes_VV_stack_1->SetFillColor(ci);
   m3l_rebin7_fakes_VV_stack_1->SetMarkerStyle(0);
   m3l_rebin7_fakes_VV_stack_1->SetMarkerSize(1.1);
   m3l_rebin7_fakes_VV_stack_1->GetXaxis()->SetTitle("m3l");
   m3l_rebin7_fakes_VV_stack_1->GetXaxis()->SetMoreLogLabels();
   m3l_rebin7_fakes_VV_stack_1->GetXaxis()->SetLabelFont(42);
   m3l_rebin7_fakes_VV_stack_1->GetXaxis()->SetLabelOffset(0.007);
   m3l_rebin7_fakes_VV_stack_1->GetXaxis()->SetLabelSize(0.05);
   m3l_rebin7_fakes_VV_stack_1->GetXaxis()->SetTitleSize(0.06);
   m3l_rebin7_fakes_VV_stack_1->GetXaxis()->SetTitleOffset(0.9);
   m3l_rebin7_fakes_VV_stack_1->GetXaxis()->SetTitleFont(42);
   m3l_rebin7_fakes_VV_stack_1->GetYaxis()->SetTitle("Events");
   m3l_rebin7_fakes_VV_stack_1->GetYaxis()->SetLabelFont(42);
   m3l_rebin7_fakes_VV_stack_1->GetYaxis()->SetLabelOffset(0.007);
   m3l_rebin7_fakes_VV_stack_1->GetYaxis()->SetLabelSize(0.05);
   m3l_rebin7_fakes_VV_stack_1->GetYaxis()->SetTitleSize(0.06);
   m3l_rebin7_fakes_VV_stack_1->GetYaxis()->SetTitleOffset(1.35);
   m3l_rebin7_fakes_VV_stack_1->GetYaxis()->SetTitleFont(42);
   m3l_rebin7_fakes_VV_stack_1->GetZaxis()->SetLabelFont(42);
   m3l_rebin7_fakes_VV_stack_1->GetZaxis()->SetLabelOffset(0.007);
   m3l_rebin7_fakes_VV_stack_1->GetZaxis()->SetLabelSize(0.05);
   m3l_rebin7_fakes_VV_stack_1->GetZaxis()->SetTitleSize(0.06);
   m3l_rebin7_fakes_VV_stack_1->GetZaxis()->SetTitleFont(42);
   m3l_rebin7_stack->Add(m3l_rebin7_fakes_VV_stack_1,"");
   Double_t xAxis4[8] = {0, 117.8591, 135.7182, 154.6531, 177.8827, 202.0599, 245.0816, 500}; 
   
   TH1D *m3l_rebin7_fakes_TT_stack_2 = new TH1D("m3l_rebin7_fakes_TT_stack_2","dummy",7, xAxis4);
   m3l_rebin7_fakes_TT_stack_2->SetBinContent(2,0.3116311);
   m3l_rebin7_fakes_TT_stack_2->SetBinContent(3,0.3324711);
   m3l_rebin7_fakes_TT_stack_2->SetBinContent(4,1.886652);
   m3l_rebin7_fakes_TT_stack_2->SetBinContent(5,5.078375);
   m3l_rebin7_fakes_TT_stack_2->SetBinContent(6,11.96896);
   m3l_rebin7_fakes_TT_stack_2->SetBinContent(7,35.46624);
   m3l_rebin7_fakes_TT_stack_2->SetBinError(2,0.1607536);
   m3l_rebin7_fakes_TT_stack_2->SetBinError(3,0.1486856);
   m3l_rebin7_fakes_TT_stack_2->SetBinError(4,0.3683634);
   m3l_rebin7_fakes_TT_stack_2->SetBinError(5,0.5898497);
   m3l_rebin7_fakes_TT_stack_2->SetBinError(6,0.8970561);
   m3l_rebin7_fakes_TT_stack_2->SetBinError(7,1.550455);
   m3l_rebin7_fakes_TT_stack_2->SetEntries(841);

   ci = TColor::GetColor("#666666");
   m3l_rebin7_fakes_TT_stack_2->SetFillColor(ci);
   m3l_rebin7_fakes_TT_stack_2->SetMarkerStyle(0);
   m3l_rebin7_fakes_TT_stack_2->SetMarkerSize(1.1);
   m3l_rebin7_fakes_TT_stack_2->GetXaxis()->SetTitle("m3l");
   m3l_rebin7_fakes_TT_stack_2->GetXaxis()->SetMoreLogLabels();
   m3l_rebin7_fakes_TT_stack_2->GetXaxis()->SetLabelFont(42);
   m3l_rebin7_fakes_TT_stack_2->GetXaxis()->SetLabelOffset(0.007);
   m3l_rebin7_fakes_TT_stack_2->GetXaxis()->SetLabelSize(0.05);
   m3l_rebin7_fakes_TT_stack_2->GetXaxis()->SetTitleSize(0.06);
   m3l_rebin7_fakes_TT_stack_2->GetXaxis()->SetTitleOffset(0.9);
   m3l_rebin7_fakes_TT_stack_2->GetXaxis()->SetTitleFont(42);
   m3l_rebin7_fakes_TT_stack_2->GetYaxis()->SetTitle("Events");
   m3l_rebin7_fakes_TT_stack_2->GetYaxis()->SetLabelFont(42);
   m3l_rebin7_fakes_TT_stack_2->GetYaxis()->SetLabelOffset(0.007);
   m3l_rebin7_fakes_TT_stack_2->GetYaxis()->SetLabelSize(0.05);
   m3l_rebin7_fakes_TT_stack_2->GetYaxis()->SetTitleSize(0.06);
   m3l_rebin7_fakes_TT_stack_2->GetYaxis()->SetTitleOffset(1.35);
   m3l_rebin7_fakes_TT_stack_2->GetYaxis()->SetTitleFont(42);
   m3l_rebin7_fakes_TT_stack_2->GetZaxis()->SetLabelFont(42);
   m3l_rebin7_fakes_TT_stack_2->GetZaxis()->SetLabelOffset(0.007);
   m3l_rebin7_fakes_TT_stack_2->GetZaxis()->SetLabelSize(0.05);
   m3l_rebin7_fakes_TT_stack_2->GetZaxis()->SetTitleSize(0.06);
   m3l_rebin7_fakes_TT_stack_2->GetZaxis()->SetTitleFont(42);
   m3l_rebin7_stack->Add(m3l_rebin7_fakes_TT_stack_2,"");
   Double_t xAxis5[8] = {0, 117.8591, 135.7182, 154.6531, 177.8827, 202.0599, 245.0816, 500}; 
   
   TH1D *m3l_rebin7_fakes_DY_stack_3 = new TH1D("m3l_rebin7_fakes_DY_stack_3","dummy",7, xAxis5);
   m3l_rebin7_fakes_DY_stack_3->SetBinContent(2,5.158566);
   m3l_rebin7_fakes_DY_stack_3->SetBinContent(3,8.597611);
   m3l_rebin7_fakes_DY_stack_3->SetBinContent(4,17.19522);
   m3l_rebin7_fakes_DY_stack_3->SetBinContent(5,20.63427);
   m3l_rebin7_fakes_DY_stack_3->SetBinContent(6,30.9514);
   m3l_rebin7_fakes_DY_stack_3->SetBinContent(7,34.39044);
   m3l_rebin7_fakes_DY_stack_3->SetBinError(2,2.9783);
   m3l_rebin7_fakes_DY_stack_3->SetBinError(3,3.844968);
   m3l_rebin7_fakes_DY_stack_3->SetBinError(4,5.437606);
   m3l_rebin7_fakes_DY_stack_3->SetBinError(5,5.956599);
   m3l_rebin7_fakes_DY_stack_3->SetBinError(6,7.295314);
   m3l_rebin7_fakes_DY_stack_3->SetBinError(7,7.689937);
   m3l_rebin7_fakes_DY_stack_3->SetEntries(72);

   ci = TColor::GetColor("#cccccc");
   m3l_rebin7_fakes_DY_stack_3->SetFillColor(ci);
   m3l_rebin7_fakes_DY_stack_3->SetMarkerStyle(0);
   m3l_rebin7_fakes_DY_stack_3->SetMarkerSize(1.1);
   m3l_rebin7_fakes_DY_stack_3->GetXaxis()->SetTitle("m3l");
   m3l_rebin7_fakes_DY_stack_3->GetXaxis()->SetMoreLogLabels();
   m3l_rebin7_fakes_DY_stack_3->GetXaxis()->SetLabelFont(42);
   m3l_rebin7_fakes_DY_stack_3->GetXaxis()->SetLabelOffset(0.007);
   m3l_rebin7_fakes_DY_stack_3->GetXaxis()->SetLabelSize(0.05);
   m3l_rebin7_fakes_DY_stack_3->GetXaxis()->SetTitleSize(0.06);
   m3l_rebin7_fakes_DY_stack_3->GetXaxis()->SetTitleOffset(0.9);
   m3l_rebin7_fakes_DY_stack_3->GetXaxis()->SetTitleFont(42);
   m3l_rebin7_fakes_DY_stack_3->GetYaxis()->SetTitle("Events");
   m3l_rebin7_fakes_DY_stack_3->GetYaxis()->SetLabelFont(42);
   m3l_rebin7_fakes_DY_stack_3->GetYaxis()->SetLabelOffset(0.007);
   m3l_rebin7_fakes_DY_stack_3->GetYaxis()->SetLabelSize(0.05);
   m3l_rebin7_fakes_DY_stack_3->GetYaxis()->SetTitleSize(0.06);
   m3l_rebin7_fakes_DY_stack_3->GetYaxis()->SetTitleOffset(1.35);
   m3l_rebin7_fakes_DY_stack_3->GetYaxis()->SetTitleFont(42);
   m3l_rebin7_fakes_DY_stack_3->GetZaxis()->SetLabelFont(42);
   m3l_rebin7_fakes_DY_stack_3->GetZaxis()->SetLabelOffset(0.007);
   m3l_rebin7_fakes_DY_stack_3->GetZaxis()->SetLabelSize(0.05);
   m3l_rebin7_fakes_DY_stack_3->GetZaxis()->SetTitleSize(0.06);
   m3l_rebin7_fakes_DY_stack_3->GetZaxis()->SetTitleFont(42);
   m3l_rebin7_stack->Add(m3l_rebin7_fakes_DY_stack_3,"");
   Double_t xAxis6[8] = {0, 117.8591, 135.7182, 154.6531, 177.8827, 202.0599, 245.0816, 500}; 
   
   TH1D *m3l_rebin7_prompt_ZZ_stack_4 = new TH1D("m3l_rebin7_prompt_ZZ_stack_4","dummy",7, xAxis6);
   m3l_rebin7_prompt_ZZ_stack_4->SetBinContent(3,0.3669708);
   m3l_rebin7_prompt_ZZ_stack_4->SetBinContent(4,4.587135);
   m3l_rebin7_prompt_ZZ_stack_4->SetBinContent(5,9.541241);
   m3l_rebin7_prompt_ZZ_stack_4->SetBinContent(6,18.16506);
   m3l_rebin7_prompt_ZZ_stack_4->SetBinContent(7,40.55028);
   m3l_rebin7_prompt_ZZ_stack_4->SetBinError(3,0.2594876);
   m3l_rebin7_prompt_ZZ_stack_4->SetBinError(4,0.917427);
   m3l_rebin7_prompt_ZZ_stack_4->SetBinError(5,1.323132);
   m3l_rebin7_prompt_ZZ_stack_4->SetBinError(6,1.825657);
   m3l_rebin7_prompt_ZZ_stack_4->SetBinError(7,2.727707);
   m3l_rebin7_prompt_ZZ_stack_4->SetEntries(403);

   ci = TColor::GetColor("#00cc00");
   m3l_rebin7_prompt_ZZ_stack_4->SetFillColor(ci);
   m3l_rebin7_prompt_ZZ_stack_4->SetMarkerStyle(0);
   m3l_rebin7_prompt_ZZ_stack_4->SetMarkerSize(1.1);
   m3l_rebin7_prompt_ZZ_stack_4->GetXaxis()->SetTitle("m3l");
   m3l_rebin7_prompt_ZZ_stack_4->GetXaxis()->SetMoreLogLabels();
   m3l_rebin7_prompt_ZZ_stack_4->GetXaxis()->SetLabelFont(42);
   m3l_rebin7_prompt_ZZ_stack_4->GetXaxis()->SetLabelOffset(0.007);
   m3l_rebin7_prompt_ZZ_stack_4->GetXaxis()->SetLabelSize(0.05);
   m3l_rebin7_prompt_ZZ_stack_4->GetXaxis()->SetTitleSize(0.06);
   m3l_rebin7_prompt_ZZ_stack_4->GetXaxis()->SetTitleOffset(0.9);
   m3l_rebin7_prompt_ZZ_stack_4->GetXaxis()->SetTitleFont(42);
   m3l_rebin7_prompt_ZZ_stack_4->GetYaxis()->SetTitle("Events");
   m3l_rebin7_prompt_ZZ_stack_4->GetYaxis()->SetLabelFont(42);
   m3l_rebin7_prompt_ZZ_stack_4->GetYaxis()->SetLabelOffset(0.007);
   m3l_rebin7_prompt_ZZ_stack_4->GetYaxis()->SetLabelSize(0.05);
   m3l_rebin7_prompt_ZZ_stack_4->GetYaxis()->SetTitleSize(0.06);
   m3l_rebin7_prompt_ZZ_stack_4->GetYaxis()->SetTitleOffset(1.35);
   m3l_rebin7_prompt_ZZ_stack_4->GetYaxis()->SetTitleFont(42);
   m3l_rebin7_prompt_ZZ_stack_4->GetZaxis()->SetLabelFont(42);
   m3l_rebin7_prompt_ZZ_stack_4->GetZaxis()->SetLabelOffset(0.007);
   m3l_rebin7_prompt_ZZ_stack_4->GetZaxis()->SetLabelSize(0.05);
   m3l_rebin7_prompt_ZZ_stack_4->GetZaxis()->SetTitleSize(0.06);
   m3l_rebin7_prompt_ZZ_stack_4->GetZaxis()->SetTitleFont(42);
   m3l_rebin7_stack->Add(m3l_rebin7_prompt_ZZ_stack_4,"");
   Double_t xAxis7[8] = {0, 117.8591, 135.7182, 154.6531, 177.8827, 202.0599, 245.0816, 500}; 
   
   TH1D *m3l_rebin7_prompt_WZ_stack_5 = new TH1D("m3l_rebin7_prompt_WZ_stack_5","dummy",7, xAxis7);
   m3l_rebin7_prompt_WZ_stack_5->SetBinContent(3,2.2612);
   m3l_rebin7_prompt_WZ_stack_5->SetBinContent(4,33.10396);
   m3l_rebin7_prompt_WZ_stack_5->SetBinContent(5,104.1056);
   m3l_rebin7_prompt_WZ_stack_5->SetBinContent(6,323.5325);
   m3l_rebin7_prompt_WZ_stack_5->SetBinContent(7,787.0784);
   m3l_rebin7_prompt_WZ_stack_5->SetBinError(3,0.45224);
   m3l_rebin7_prompt_WZ_stack_5->SetBinError(4,1.730372);
   m3l_rebin7_prompt_WZ_stack_5->SetBinError(5,3.068574);
   m3l_rebin7_prompt_WZ_stack_5->SetBinError(6,5.409516);
   m3l_rebin7_prompt_WZ_stack_5->SetBinError(7,8.437397);
   m3l_rebin7_prompt_WZ_stack_5->SetEntries(13825);

   ci = TColor::GetColor("#ffcc00");
   m3l_rebin7_prompt_WZ_stack_5->SetFillColor(ci);
   m3l_rebin7_prompt_WZ_stack_5->SetMarkerStyle(0);
   m3l_rebin7_prompt_WZ_stack_5->SetMarkerSize(1.1);
   m3l_rebin7_prompt_WZ_stack_5->GetXaxis()->SetTitle("m3l");
   m3l_rebin7_prompt_WZ_stack_5->GetXaxis()->SetMoreLogLabels();
   m3l_rebin7_prompt_WZ_stack_5->GetXaxis()->SetLabelFont(42);
   m3l_rebin7_prompt_WZ_stack_5->GetXaxis()->SetLabelOffset(0.007);
   m3l_rebin7_prompt_WZ_stack_5->GetXaxis()->SetLabelSize(0.05);
   m3l_rebin7_prompt_WZ_stack_5->GetXaxis()->SetTitleSize(0.06);
   m3l_rebin7_prompt_WZ_stack_5->GetXaxis()->SetTitleOffset(0.9);
   m3l_rebin7_prompt_WZ_stack_5->GetXaxis()->SetTitleFont(42);
   m3l_rebin7_prompt_WZ_stack_5->GetYaxis()->SetTitle("Events");
   m3l_rebin7_prompt_WZ_stack_5->GetYaxis()->SetLabelFont(42);
   m3l_rebin7_prompt_WZ_stack_5->GetYaxis()->SetLabelOffset(0.007);
   m3l_rebin7_prompt_WZ_stack_5->GetYaxis()->SetLabelSize(0.05);
   m3l_rebin7_prompt_WZ_stack_5->GetYaxis()->SetTitleSize(0.06);
   m3l_rebin7_prompt_WZ_stack_5->GetYaxis()->SetTitleOffset(1.35);
   m3l_rebin7_prompt_WZ_stack_5->GetYaxis()->SetTitleFont(42);
   m3l_rebin7_prompt_WZ_stack_5->GetZaxis()->SetLabelFont(42);
   m3l_rebin7_prompt_WZ_stack_5->GetZaxis()->SetLabelOffset(0.007);
   m3l_rebin7_prompt_WZ_stack_5->GetZaxis()->SetLabelSize(0.05);
   m3l_rebin7_prompt_WZ_stack_5->GetZaxis()->SetTitleSize(0.06);
   m3l_rebin7_prompt_WZ_stack_5->GetZaxis()->SetTitleFont(42);
   m3l_rebin7_stack->Add(m3l_rebin7_prompt_WZ_stack_5,"");
   m3l_rebin7_stack->Draw("same hist");
   Double_t xAxis8[8] = {0, 117.8591, 135.7182, 154.6531, 177.8827, 202.0599, 245.0816, 500}; 
   
   TH1D *m3l_rebin7_total__2 = new TH1D("m3l_rebin7_total__2","dummy",7, xAxis8);
   m3l_rebin7_total__2->SetBinContent(2,5.470197);
   m3l_rebin7_total__2->SetBinContent(3,11.55825);
   m3l_rebin7_total__2->SetBinContent(4,56.77297);
   m3l_rebin7_total__2->SetBinContent(5,139.4567);
   m3l_rebin7_total__2->SetBinContent(6,384.8123);
   m3l_rebin7_total__2->SetBinContent(7,897.8741);
   m3l_rebin7_total__2->SetBinError(2,2.982635);
   m3l_rebin7_total__2->SetBinError(3,3.883007);
   m3l_rebin7_total__2->SetBinError(4,5.791296);
   m3l_rebin7_total__2->SetBinError(5,6.856039);
   m3l_rebin7_total__2->SetBinError(6,9.30812);
   m3l_rebin7_total__2->SetBinError(7,11.8409);
   m3l_rebin7_total__2->SetMinimum(0);
   m3l_rebin7_total__2->SetMaximum(1795.748);
   m3l_rebin7_total__2->SetEntries(15152);
   m3l_rebin7_total__2->SetDirectory(0);

   ci = TColor::GetColor("#00cc00");
   m3l_rebin7_total__2->SetFillColor(ci);
   m3l_rebin7_total__2->SetMarkerStyle(20);
   m3l_rebin7_total__2->SetMarkerSize(1.1);
   m3l_rebin7_total__2->GetXaxis()->SetTitle("m3l");
   m3l_rebin7_total__2->GetXaxis()->SetMoreLogLabels();
   m3l_rebin7_total__2->GetXaxis()->SetLabelFont(42);
   m3l_rebin7_total__2->GetXaxis()->SetLabelOffset(999);
   m3l_rebin7_total__2->GetXaxis()->SetLabelSize(0.05);
   m3l_rebin7_total__2->GetXaxis()->SetTitleSize(0.05);
   m3l_rebin7_total__2->GetXaxis()->SetTitleOffset(999);
   m3l_rebin7_total__2->GetXaxis()->SetTitleFont(42);
   m3l_rebin7_total__2->GetYaxis()->SetTitle("Events");
   m3l_rebin7_total__2->GetYaxis()->SetLabelFont(42);
   m3l_rebin7_total__2->GetYaxis()->SetLabelOffset(0.007);
   m3l_rebin7_total__2->GetYaxis()->SetLabelSize(0.05);
   m3l_rebin7_total__2->GetYaxis()->SetTitleSize(0.06);
   m3l_rebin7_total__2->GetYaxis()->SetTitleOffset(1.48);
   m3l_rebin7_total__2->GetYaxis()->SetTitleFont(42);
   m3l_rebin7_total__2->GetZaxis()->SetLabelFont(42);
   m3l_rebin7_total__2->GetZaxis()->SetLabelOffset(0.007);
   m3l_rebin7_total__2->GetZaxis()->SetLabelSize(0.05);
   m3l_rebin7_total__2->GetZaxis()->SetTitleSize(0.06);
   m3l_rebin7_total__2->GetZaxis()->SetTitleFont(42);
   m3l_rebin7_total__2->Draw("AXIS SAME");
   
   Double_t m3l_rebin7_total_errors_fx3001[6] = {
   126.7887,
   145.1856,
   166.2679,
   189.9713,
   223.5707,
   372.5408};
   Double_t m3l_rebin7_total_errors_fy3001[6] = {
   5.470197,
   11.55825,
   56.77297,
   139.4567,
   384.8123,
   897.8741};
   Double_t m3l_rebin7_total_errors_felx3001[6] = {
   8.929554,
   9.467422,
   11.6148,
   12.08862,
   21.51083,
   127.4592};
   Double_t m3l_rebin7_total_errors_fely3001[6] = {
   2.982635,
   3.883007,
   5.791296,
   6.856039,
   9.30812,
   11.8409};
   Double_t m3l_rebin7_total_errors_fehx3001[6] = {
   8.929554,
   9.467422,
   11.6148,
   12.08862,
   21.51083,
   127.4592};
   Double_t m3l_rebin7_total_errors_fehy3001[6] = {
   2.982635,
   3.883007,
   5.791296,
   6.856039,
   9.30812,
   11.8409};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(6,m3l_rebin7_total_errors_fx3001,m3l_rebin7_total_errors_fy3001,m3l_rebin7_total_errors_felx3001,m3l_rebin7_total_errors_fehx3001,m3l_rebin7_total_errors_fely3001,m3l_rebin7_total_errors_fehy3001);
   grae->SetName("m3l_rebin7_total_errors");
   grae->SetTitle("Graph");
   grae->SetFillColor(1);
   grae->SetFillStyle(3013);
   grae->SetMarkerStyle(0);
   
   TH1F *Graph_m3l_rebin7_total_errors3001 = new TH1F("Graph_m3l_rebin7_total_errors3001","Graph",100,79.64502,538.2141);
   Graph_m3l_rebin7_total_errors3001->SetMinimum(2.238806);
   Graph_m3l_rebin7_total_errors3001->SetMaximum(1000.438);
   Graph_m3l_rebin7_total_errors3001->SetDirectory(0);
   Graph_m3l_rebin7_total_errors3001->SetStats(0);
   Graph_m3l_rebin7_total_errors3001->SetLineStyle(0);
   Graph_m3l_rebin7_total_errors3001->SetMarkerStyle(20);
   Graph_m3l_rebin7_total_errors3001->GetXaxis()->SetLabelFont(42);
   Graph_m3l_rebin7_total_errors3001->GetXaxis()->SetLabelOffset(0.007);
   Graph_m3l_rebin7_total_errors3001->GetXaxis()->SetLabelSize(0.05);
   Graph_m3l_rebin7_total_errors3001->GetXaxis()->SetTitleSize(0.06);
   Graph_m3l_rebin7_total_errors3001->GetXaxis()->SetTitleOffset(0.9);
   Graph_m3l_rebin7_total_errors3001->GetXaxis()->SetTitleFont(42);
   Graph_m3l_rebin7_total_errors3001->GetYaxis()->SetLabelFont(42);
   Graph_m3l_rebin7_total_errors3001->GetYaxis()->SetLabelOffset(0.007);
   Graph_m3l_rebin7_total_errors3001->GetYaxis()->SetLabelSize(0.05);
   Graph_m3l_rebin7_total_errors3001->GetYaxis()->SetTitleSize(0.06);
   Graph_m3l_rebin7_total_errors3001->GetYaxis()->SetTitleOffset(1.35);
   Graph_m3l_rebin7_total_errors3001->GetYaxis()->SetTitleFont(42);
   Graph_m3l_rebin7_total_errors3001->GetZaxis()->SetLabelFont(42);
   Graph_m3l_rebin7_total_errors3001->GetZaxis()->SetLabelOffset(0.007);
   Graph_m3l_rebin7_total_errors3001->GetZaxis()->SetLabelSize(0.05);
   Graph_m3l_rebin7_total_errors3001->GetZaxis()->SetTitleSize(0.06);
   Graph_m3l_rebin7_total_errors3001->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_m3l_rebin7_total_errors3001);
   
   grae->Draw("pe2 ");
   
   Double_t m3l_rebin7_data_graph_fx3002[7] = {
   58.92955,
   126.7887,
   145.1856,
   166.2679,
   189.9713,
   223.5707,
   372.5408};
   Double_t m3l_rebin7_data_graph_fy3002[7] = {
   1,
   6,
   6,
   56,
   164,
   360,
   920};
   Double_t m3l_rebin7_data_graph_felx3002[7] = {
   58.92955,
   8.929554,
   9.467422,
   11.6148,
   12.08862,
   21.51083,
   127.4592};
   Double_t m3l_rebin7_data_graph_fely3002[7] = {
   0.8272525,
   2.379969,
   2.379969,
   7.461048,
   12.79345,
   18.96526,
   30.32664};
   Double_t m3l_rebin7_data_graph_fehx3002[7] = {
   58.92955,
   8.929554,
   9.467422,
   11.6148,
   12.08862,
   21.51083,
   127.4592};
   Double_t m3l_rebin7_data_graph_fehy3002[7] = {
   2.29957,
   3.583712,
   3.583712,
   8.528058,
   13.83259,
   19.99167,
   31.34317};
   grae = new TGraphAsymmErrors(7,m3l_rebin7_data_graph_fx3002,m3l_rebin7_data_graph_fy3002,m3l_rebin7_data_graph_felx3002,m3l_rebin7_data_graph_fehx3002,m3l_rebin7_data_graph_fely3002,m3l_rebin7_data_graph_fehy3002);
   grae->SetName("m3l_rebin7_data_graph");
   grae->SetTitle("Graph");
   grae->SetFillStyle(1000);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.1);
   
   TH1F *Graph_m3l_rebin7_data_graph3002 = new TH1F("Graph_m3l_rebin7_data_graph3002","Graph",100,0,550);
   Graph_m3l_rebin7_data_graph3002->SetMinimum(0.1554728);
   Graph_m3l_rebin7_data_graph3002->SetMaximum(1046.46);
   Graph_m3l_rebin7_data_graph3002->SetDirectory(0);
   Graph_m3l_rebin7_data_graph3002->SetStats(0);
   Graph_m3l_rebin7_data_graph3002->SetLineStyle(0);
   Graph_m3l_rebin7_data_graph3002->SetMarkerStyle(20);
   Graph_m3l_rebin7_data_graph3002->GetXaxis()->SetLabelFont(42);
   Graph_m3l_rebin7_data_graph3002->GetXaxis()->SetLabelOffset(0.007);
   Graph_m3l_rebin7_data_graph3002->GetXaxis()->SetLabelSize(0.05);
   Graph_m3l_rebin7_data_graph3002->GetXaxis()->SetTitleSize(0.06);
   Graph_m3l_rebin7_data_graph3002->GetXaxis()->SetTitleOffset(0.9);
   Graph_m3l_rebin7_data_graph3002->GetXaxis()->SetTitleFont(42);
   Graph_m3l_rebin7_data_graph3002->GetYaxis()->SetLabelFont(42);
   Graph_m3l_rebin7_data_graph3002->GetYaxis()->SetLabelOffset(0.007);
   Graph_m3l_rebin7_data_graph3002->GetYaxis()->SetLabelSize(0.05);
   Graph_m3l_rebin7_data_graph3002->GetYaxis()->SetTitleSize(0.06);
   Graph_m3l_rebin7_data_graph3002->GetYaxis()->SetTitleOffset(1.35);
   Graph_m3l_rebin7_data_graph3002->GetYaxis()->SetTitleFont(42);
   Graph_m3l_rebin7_data_graph3002->GetZaxis()->SetLabelFont(42);
   Graph_m3l_rebin7_data_graph3002->GetZaxis()->SetLabelOffset(0.007);
   Graph_m3l_rebin7_data_graph3002->GetZaxis()->SetLabelSize(0.05);
   Graph_m3l_rebin7_data_graph3002->GetZaxis()->SetTitleSize(0.06);
   Graph_m3l_rebin7_data_graph3002->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_m3l_rebin7_data_graph3002);
   
   grae->Draw("pz ");
   
   TLegend *leg = new TLegend(0.62,0.628,0.9,0.91,NULL,"brNDC");
   leg->SetBorderSize(1);
   leg->SetTextSize(0.036);
   leg->SetLineColor(0);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("m3l_rebin7_data","Data","LPE");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1.1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("m3l_rebin7_prompt_WZ_stack_5","WZ","F");

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
   entry=leg->AddEntry("m3l_rebin7_prompt_ZZ_stack_4","qqZZ","F");

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
   entry=leg->AddEntry("m3l_rebin7_fakes_DY_stack_3","Fakes DY","F");

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
   entry=leg->AddEntry("m3l_rebin7_fakes_TT_stack_2","Fakes TT","F");

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
   entry=leg->AddEntry("m3l_rebin7_total_errors","Total unc.","F");
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
   m3l_rebin7_canvas->cd();
  
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
   Double_t xAxis9[8] = {0, 117.8591, 135.7182, 154.6531, 177.8827, 202.0599, 245.0816, 500}; 
   
   TH1D *m3l_rebin7_total__3 = new TH1D("m3l_rebin7_total__3","dummy",7, xAxis9);
   m3l_rebin7_total__3->SetBinContent(2,1);
   m3l_rebin7_total__3->SetBinContent(3,1);
   m3l_rebin7_total__3->SetBinContent(4,1);
   m3l_rebin7_total__3->SetBinContent(5,1);
   m3l_rebin7_total__3->SetBinContent(6,1);
   m3l_rebin7_total__3->SetBinContent(7,1);
   m3l_rebin7_total__3->SetMinimum(0.5);
   m3l_rebin7_total__3->SetMaximum(2);
   m3l_rebin7_total__3->SetEntries(15159);

   ci = TColor::GetColor("#00cc00");
   m3l_rebin7_total__3->SetFillColor(ci);

   ci = TColor::GetColor("#6666ff");
   m3l_rebin7_total__3->SetMarkerColor(ci);
   m3l_rebin7_total__3->SetMarkerSize(1.1);
   m3l_rebin7_total__3->GetXaxis()->SetTitle("m3l");
   m3l_rebin7_total__3->GetXaxis()->SetMoreLogLabels();
   m3l_rebin7_total__3->GetXaxis()->SetLabelFont(42);
   m3l_rebin7_total__3->GetXaxis()->SetLabelOffset(0.015);
   m3l_rebin7_total__3->GetXaxis()->SetLabelSize(0.1);
   m3l_rebin7_total__3->GetXaxis()->SetTitleSize(0.14);
   m3l_rebin7_total__3->GetXaxis()->SetTitleFont(42);
   m3l_rebin7_total__3->GetYaxis()->SetTitle("Data/pred.");
   m3l_rebin7_total__3->GetYaxis()->SetDecimals();
   m3l_rebin7_total__3->GetYaxis()->SetNdivisions(505);
   m3l_rebin7_total__3->GetYaxis()->SetLabelFont(42);
   m3l_rebin7_total__3->GetYaxis()->SetLabelOffset(0.01);
   m3l_rebin7_total__3->GetYaxis()->SetLabelSize(0.11);
   m3l_rebin7_total__3->GetYaxis()->SetTitleSize(0.14);
   m3l_rebin7_total__3->GetYaxis()->SetTitleOffset(0.62);
   m3l_rebin7_total__3->GetYaxis()->SetTitleFont(42);
   m3l_rebin7_total__3->GetZaxis()->SetLabelFont(42);
   m3l_rebin7_total__3->GetZaxis()->SetLabelOffset(0.007);
   m3l_rebin7_total__3->GetZaxis()->SetLabelSize(0.05);
   m3l_rebin7_total__3->GetZaxis()->SetTitleSize(0.06);
   m3l_rebin7_total__3->GetZaxis()->SetTitleFont(42);
   m3l_rebin7_total__3->Draw("AXIS");
   
   Double_t m3l_rebin7_total_errors_fx3003[6] = {
   126.7887,
   145.1856,
   166.2679,
   189.9713,
   223.5707,
   372.5408};
   Double_t m3l_rebin7_total_errors_fy3003[6] = {
   1,
   1,
   1,
   1,
   1,
   1};
   Double_t m3l_rebin7_total_errors_felx3003[6] = {
   8.929554,
   9.467422,
   11.6148,
   12.08862,
   21.51083,
   127.4592};
   Double_t m3l_rebin7_total_errors_fely3003[6] = {
   0.5452518,
   0.3359511,
   0.102008,
   0.04916249,
   0.02418873,
   0.0131877};
   Double_t m3l_rebin7_total_errors_fehx3003[6] = {
   8.929554,
   9.467422,
   11.6148,
   12.08862,
   21.51083,
   127.4592};
   Double_t m3l_rebin7_total_errors_fehy3003[6] = {
   0.5452518,
   0.3359511,
   0.102008,
   0.04916249,
   0.02418873,
   0.0131877};
   grae = new TGraphAsymmErrors(6,m3l_rebin7_total_errors_fx3003,m3l_rebin7_total_errors_fy3003,m3l_rebin7_total_errors_felx3003,m3l_rebin7_total_errors_fehx3003,m3l_rebin7_total_errors_fely3003,m3l_rebin7_total_errors_fehy3003);
   grae->SetName("m3l_rebin7_total_errors");
   grae->SetTitle("Graph");

   ci = TColor::GetColor("#00ffff");
   grae->SetFillColor(ci);

   ci = TColor::GetColor("#00ffff");
   grae->SetMarkerColor(ci);
   grae->Draw("e2");
   
   Double_t m3l_rebin7_total_errors_fx3004[6] = {
   126.7887,
   145.1856,
   166.2679,
   189.9713,
   223.5707,
   372.5408};
   Double_t m3l_rebin7_total_errors_fy3004[6] = {
   1,
   1,
   1,
   1,
   1,
   1};
   Double_t m3l_rebin7_total_errors_felx3004[6] = {
   8.929554,
   9.467422,
   11.6148,
   12.08862,
   21.51083,
   127.4592};
   Double_t m3l_rebin7_total_errors_fely3004[6] = {
   0.5452518,
   0.3359511,
   0.102008,
   0.04916249,
   0.02418873,
   0.0131877};
   Double_t m3l_rebin7_total_errors_fehx3004[6] = {
   8.929554,
   9.467422,
   11.6148,
   12.08862,
   21.51083,
   127.4592};
   Double_t m3l_rebin7_total_errors_fehy3004[6] = {
   0.5452518,
   0.3359511,
   0.102008,
   0.04916249,
   0.02418873,
   0.0131877};
   grae = new TGraphAsymmErrors(6,m3l_rebin7_total_errors_fx3004,m3l_rebin7_total_errors_fy3004,m3l_rebin7_total_errors_felx3004,m3l_rebin7_total_errors_fehx3004,m3l_rebin7_total_errors_fely3004,m3l_rebin7_total_errors_fehy3004);
   grae->SetName("m3l_rebin7_total_errors");
   grae->SetTitle("Graph");

   ci = TColor::GetColor("#6666ff");
   grae->SetFillColor(ci);

   ci = TColor::GetColor("#6666ff");
   grae->SetMarkerColor(ci);
   grae->Draw("e2 ");
   Double_t xAxis10[8] = {0, 117.8591, 135.7182, 154.6531, 177.8827, 202.0599, 245.0816, 500}; 
   
   TH1D *m3l_rebin7_total__4 = new TH1D("m3l_rebin7_total__4","dummy",7, xAxis10);
   m3l_rebin7_total__4->SetBinContent(2,1);
   m3l_rebin7_total__4->SetBinContent(3,1);
   m3l_rebin7_total__4->SetBinContent(4,1);
   m3l_rebin7_total__4->SetBinContent(5,1);
   m3l_rebin7_total__4->SetBinContent(6,1);
   m3l_rebin7_total__4->SetBinContent(7,1);
   m3l_rebin7_total__4->SetMinimum(0.5);
   m3l_rebin7_total__4->SetMaximum(2);
   m3l_rebin7_total__4->SetEntries(15159);

   ci = TColor::GetColor("#00cc00");
   m3l_rebin7_total__4->SetFillColor(ci);

   ci = TColor::GetColor("#6666ff");
   m3l_rebin7_total__4->SetMarkerColor(ci);
   m3l_rebin7_total__4->SetMarkerSize(1.1);
   m3l_rebin7_total__4->GetXaxis()->SetTitle("m3l");
   m3l_rebin7_total__4->GetXaxis()->SetMoreLogLabels();
   m3l_rebin7_total__4->GetXaxis()->SetLabelFont(42);
   m3l_rebin7_total__4->GetXaxis()->SetLabelOffset(0.015);
   m3l_rebin7_total__4->GetXaxis()->SetLabelSize(0.1);
   m3l_rebin7_total__4->GetXaxis()->SetTitleSize(0.14);
   m3l_rebin7_total__4->GetXaxis()->SetTitleFont(42);
   m3l_rebin7_total__4->GetYaxis()->SetTitle("Data/pred.");
   m3l_rebin7_total__4->GetYaxis()->SetDecimals();
   m3l_rebin7_total__4->GetYaxis()->SetNdivisions(505);
   m3l_rebin7_total__4->GetYaxis()->SetLabelFont(42);
   m3l_rebin7_total__4->GetYaxis()->SetLabelOffset(0.01);
   m3l_rebin7_total__4->GetYaxis()->SetLabelSize(0.11);
   m3l_rebin7_total__4->GetYaxis()->SetTitleSize(0.14);
   m3l_rebin7_total__4->GetYaxis()->SetTitleOffset(0.62);
   m3l_rebin7_total__4->GetYaxis()->SetTitleFont(42);
   m3l_rebin7_total__4->GetZaxis()->SetLabelFont(42);
   m3l_rebin7_total__4->GetZaxis()->SetLabelOffset(0.007);
   m3l_rebin7_total__4->GetZaxis()->SetLabelSize(0.05);
   m3l_rebin7_total__4->GetZaxis()->SetTitleSize(0.06);
   m3l_rebin7_total__4->GetZaxis()->SetTitleFont(42);
   m3l_rebin7_total__4->Draw("AXIS SAME");
   TLine *line = new TLine(0,1,500,1);
   line->SetLineColor(58);
   line->SetLineWidth(2);
   line->Draw();
   
   Double_t data_div_fx3005[7] = {
   58.92955,
   126.7887,
   145.1856,
   166.2679,
   189.9713,
   223.5707,
   372.5408};
   Double_t data_div_fy3005[7] = {
   0,
   1.096853,
   0.5191096,
   0.9863848,
   1.175992,
   0.9355211,
   1.024642};
   Double_t data_div_felx3005[7] = {
   58.92955,
   8.929554,
   9.467422,
   11.6148,
   12.08862,
   21.51083,
   127.4592};
   Double_t data_div_fely3005[7] = {
   0,
   0.4350792,
   0.2059108,
   0.131419,
   0.09173779,
   0.04928444,
   0.03377605};
   Double_t data_div_fehx3005[7] = {
   58.92955,
   8.929554,
   9.467422,
   11.6148,
   12.08862,
   21.51083,
   127.4592};
   Double_t data_div_fehy3005[7] = {
   0,
   0.655134,
   0.3100566,
   0.1502133,
   0.09918916,
   0.05195176,
   0.0349082};
   grae = new TGraphAsymmErrors(7,data_div_fx3005,data_div_fy3005,data_div_felx3005,data_div_fehx3005,data_div_fely3005,data_div_fehy3005);
   grae->SetName("data_div");
   grae->SetTitle("Graph");
   grae->SetFillStyle(1000);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.1);
   
   TH1F *Graph_m3l_rebin7_data_graph3005 = new TH1F("Graph_m3l_rebin7_data_graph3005","Graph",100,0,550);
   Graph_m3l_rebin7_data_graph3005->SetMinimum(0.1554728);
   Graph_m3l_rebin7_data_graph3005->SetMaximum(1046.46);
   Graph_m3l_rebin7_data_graph3005->SetDirectory(0);
   Graph_m3l_rebin7_data_graph3005->SetStats(0);
   Graph_m3l_rebin7_data_graph3005->SetLineStyle(0);
   Graph_m3l_rebin7_data_graph3005->SetMarkerStyle(20);
   Graph_m3l_rebin7_data_graph3005->GetXaxis()->SetLabelFont(42);
   Graph_m3l_rebin7_data_graph3005->GetXaxis()->SetLabelOffset(0.007);
   Graph_m3l_rebin7_data_graph3005->GetXaxis()->SetLabelSize(0.05);
   Graph_m3l_rebin7_data_graph3005->GetXaxis()->SetTitleSize(0.06);
   Graph_m3l_rebin7_data_graph3005->GetXaxis()->SetTitleOffset(0.9);
   Graph_m3l_rebin7_data_graph3005->GetXaxis()->SetTitleFont(42);
   Graph_m3l_rebin7_data_graph3005->GetYaxis()->SetLabelFont(42);
   Graph_m3l_rebin7_data_graph3005->GetYaxis()->SetLabelOffset(0.007);
   Graph_m3l_rebin7_data_graph3005->GetYaxis()->SetLabelSize(0.05);
   Graph_m3l_rebin7_data_graph3005->GetYaxis()->SetTitleSize(0.06);
   Graph_m3l_rebin7_data_graph3005->GetYaxis()->SetTitleOffset(1.35);
   Graph_m3l_rebin7_data_graph3005->GetYaxis()->SetTitleFont(42);
   Graph_m3l_rebin7_data_graph3005->GetZaxis()->SetLabelFont(42);
   Graph_m3l_rebin7_data_graph3005->GetZaxis()->SetLabelOffset(0.007);
   Graph_m3l_rebin7_data_graph3005->GetZaxis()->SetLabelSize(0.05);
   Graph_m3l_rebin7_data_graph3005->GetZaxis()->SetTitleSize(0.06);
   Graph_m3l_rebin7_data_graph3005->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_m3l_rebin7_data_graph3005);
   
   grae->Draw("pz ");
   
   leg = new TLegend(0,0,0,0,NULL,"brNDC");
   leg->SetBorderSize(1);
   leg->SetTextSize(0.084);
   leg->SetLineColor(0);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   entry=leg->AddEntry("m3l_rebin7_total_errors","stat. unc.","F");
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
   entry=leg->AddEntry("m3l_rebin7_total_errors","total unc.","F");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   leg->Draw();
   pad2->Modified();
   m3l_rebin7_canvas->cd();
   m3l_rebin7_canvas->Modified();
   m3l_rebin7_canvas->cd();
   m3l_rebin7_canvas->SetSelected(m3l_rebin7_canvas);
}
