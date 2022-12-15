void m3l_rebin5()
{
//=========Macro generated from canvas: m3l_rebin5_canvas/m3l_rebin5
//=========  (Thu Dec 15 19:38:46 2022) by ROOT version 6.12/07
   TCanvas *m3l_rebin5_canvas = new TCanvas("m3l_rebin5_canvas", "m3l_rebin5",0,0,600,750);
   gStyle->SetOptFit(1);
   gStyle->SetOptStat(0);
   gStyle->SetOptTitle(0);
   m3l_rebin5_canvas->SetHighLightColor(2);
   m3l_rebin5_canvas->Range(0,0,1,1);
   m3l_rebin5_canvas->SetFillColor(0);
   m3l_rebin5_canvas->SetBorderMode(0);
   m3l_rebin5_canvas->SetBorderSize(2);
   m3l_rebin5_canvas->SetTickx(1);
   m3l_rebin5_canvas->SetTicky(1);
   m3l_rebin5_canvas->SetLeftMargin(0.18);
   m3l_rebin5_canvas->SetRightMargin(0.04);
   m3l_rebin5_canvas->SetBottomMargin(0.13);
   m3l_rebin5_canvas->SetFrameFillStyle(0);
   m3l_rebin5_canvas->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: pad1
   TPad *pad1 = new TPad("pad1", "pad1",0,0.3,1,1);
   pad1->Draw();
   pad1->cd();
   pad1->Range(-115.3846,-57.85791,525.641,2256.458);
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
   Double_t xAxis1[6] = {0, 125.0027, 150.0071, 182.5286, 227.8729, 500}; 
   
   TH1D *m3l_rebin5_total__1 = new TH1D("m3l_rebin5_total__1","dummy",5, xAxis1);
   m3l_rebin5_total__1->SetBinContent(1,1.719522);
   m3l_rebin5_total__1->SetBinContent(2,6.869458);
   m3l_rebin5_total__1->SetBinContent(3,84.59406);
   m3l_rebin5_total__1->SetBinContent(4,343.9618);
   m3l_rebin5_total__1->SetBinContent(5,1058.8);
   m3l_rebin5_total__1->SetBinError(1,1.719522);
   m3l_rebin5_total__1->SetBinError(2,3.003246);
   m3l_rebin5_total__1->SetBinError(3,7.279769);
   m3l_rebin5_total__1->SetBinError(4,9.709296);
   m3l_rebin5_total__1->SetBinError(5,13.11962);
   m3l_rebin5_total__1->SetMinimum(0);
   m3l_rebin5_total__1->SetMaximum(2117.599);
   m3l_rebin5_total__1->SetEntries(15152);
   m3l_rebin5_total__1->SetDirectory(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#00cc00");
   m3l_rebin5_total__1->SetFillColor(ci);
   m3l_rebin5_total__1->SetMarkerStyle(20);
   m3l_rebin5_total__1->SetMarkerSize(1.1);
   m3l_rebin5_total__1->GetXaxis()->SetTitle("m3l");
   m3l_rebin5_total__1->GetXaxis()->SetMoreLogLabels();
   m3l_rebin5_total__1->GetXaxis()->SetLabelFont(42);
   m3l_rebin5_total__1->GetXaxis()->SetLabelOffset(999);
   m3l_rebin5_total__1->GetXaxis()->SetLabelSize(0.05);
   m3l_rebin5_total__1->GetXaxis()->SetTitleSize(0.05);
   m3l_rebin5_total__1->GetXaxis()->SetTitleOffset(999);
   m3l_rebin5_total__1->GetXaxis()->SetTitleFont(42);
   m3l_rebin5_total__1->GetYaxis()->SetTitle("Events");
   m3l_rebin5_total__1->GetYaxis()->SetLabelFont(42);
   m3l_rebin5_total__1->GetYaxis()->SetLabelOffset(0.007);
   m3l_rebin5_total__1->GetYaxis()->SetLabelSize(0.05);
   m3l_rebin5_total__1->GetYaxis()->SetTitleSize(0.06);
   m3l_rebin5_total__1->GetYaxis()->SetTitleOffset(1.48);
   m3l_rebin5_total__1->GetYaxis()->SetTitleFont(42);
   m3l_rebin5_total__1->GetZaxis()->SetLabelFont(42);
   m3l_rebin5_total__1->GetZaxis()->SetLabelOffset(0.007);
   m3l_rebin5_total__1->GetZaxis()->SetLabelSize(0.05);
   m3l_rebin5_total__1->GetZaxis()->SetTitleSize(0.06);
   m3l_rebin5_total__1->GetZaxis()->SetTitleFont(42);
   m3l_rebin5_total__1->Draw("HIST");
   
   THStack *m3l_rebin5_stack = new THStack();
   m3l_rebin5_stack->SetName("m3l_rebin5_stack");
   m3l_rebin5_stack->SetTitle("m3l_rebin5");
   Double_t xAxis2[6] = {0, 125.0027, 150.0071, 182.5286, 227.8729, 500}; 
   
   TH1F *m3l_rebin5_stack_stack_1 = new TH1F("m3l_rebin5_stack_stack_1","m3l_rebin5",5, xAxis2);
   m3l_rebin5_stack_stack_1->SetMinimum(0);
   m3l_rebin5_stack_stack_1->SetMaximum(1111.74);
   m3l_rebin5_stack_stack_1->SetDirectory(0);
   m3l_rebin5_stack_stack_1->SetStats(0);
   m3l_rebin5_stack_stack_1->SetLineStyle(0);
   m3l_rebin5_stack_stack_1->SetMarkerStyle(20);
   m3l_rebin5_stack_stack_1->GetXaxis()->SetLabelFont(42);
   m3l_rebin5_stack_stack_1->GetXaxis()->SetLabelOffset(0.007);
   m3l_rebin5_stack_stack_1->GetXaxis()->SetLabelSize(0.05);
   m3l_rebin5_stack_stack_1->GetXaxis()->SetTitleSize(0.06);
   m3l_rebin5_stack_stack_1->GetXaxis()->SetTitleOffset(0.9);
   m3l_rebin5_stack_stack_1->GetXaxis()->SetTitleFont(42);
   m3l_rebin5_stack_stack_1->GetYaxis()->SetLabelFont(42);
   m3l_rebin5_stack_stack_1->GetYaxis()->SetLabelOffset(0.007);
   m3l_rebin5_stack_stack_1->GetYaxis()->SetLabelSize(0.05);
   m3l_rebin5_stack_stack_1->GetYaxis()->SetTitleSize(0.06);
   m3l_rebin5_stack_stack_1->GetYaxis()->SetTitleOffset(1.35);
   m3l_rebin5_stack_stack_1->GetYaxis()->SetTitleFont(42);
   m3l_rebin5_stack_stack_1->GetZaxis()->SetLabelFont(42);
   m3l_rebin5_stack_stack_1->GetZaxis()->SetLabelOffset(0.007);
   m3l_rebin5_stack_stack_1->GetZaxis()->SetLabelSize(0.05);
   m3l_rebin5_stack_stack_1->GetZaxis()->SetTitleSize(0.06);
   m3l_rebin5_stack_stack_1->GetZaxis()->SetTitleFont(42);
   m3l_rebin5_stack->SetHistogram(m3l_rebin5_stack_stack_1);
   
   Double_t xAxis3[6] = {0, 125.0027, 150.0071, 182.5286, 227.8729, 500}; 
   
   TH1D *m3l_rebin5_fakes_VV_stack_1 = new TH1D("m3l_rebin5_fakes_VV_stack_1","dummy",5, xAxis3);
   m3l_rebin5_fakes_VV_stack_1->SetBinContent(4,0.09719337);
   m3l_rebin5_fakes_VV_stack_1->SetBinContent(5,0.5831602);
   m3l_rebin5_fakes_VV_stack_1->SetBinError(4,0.09719337);
   m3l_rebin5_fakes_VV_stack_1->SetBinError(5,0.2380742);
   m3l_rebin5_fakes_VV_stack_1->SetEntries(11);

   ci = TColor::GetColor("#2e3294");
   m3l_rebin5_fakes_VV_stack_1->SetFillColor(ci);
   m3l_rebin5_fakes_VV_stack_1->SetMarkerStyle(0);
   m3l_rebin5_fakes_VV_stack_1->SetMarkerSize(1.1);
   m3l_rebin5_fakes_VV_stack_1->GetXaxis()->SetTitle("m3l");
   m3l_rebin5_fakes_VV_stack_1->GetXaxis()->SetMoreLogLabels();
   m3l_rebin5_fakes_VV_stack_1->GetXaxis()->SetLabelFont(42);
   m3l_rebin5_fakes_VV_stack_1->GetXaxis()->SetLabelOffset(0.007);
   m3l_rebin5_fakes_VV_stack_1->GetXaxis()->SetLabelSize(0.05);
   m3l_rebin5_fakes_VV_stack_1->GetXaxis()->SetTitleSize(0.06);
   m3l_rebin5_fakes_VV_stack_1->GetXaxis()->SetTitleOffset(0.9);
   m3l_rebin5_fakes_VV_stack_1->GetXaxis()->SetTitleFont(42);
   m3l_rebin5_fakes_VV_stack_1->GetYaxis()->SetTitle("Events");
   m3l_rebin5_fakes_VV_stack_1->GetYaxis()->SetLabelFont(42);
   m3l_rebin5_fakes_VV_stack_1->GetYaxis()->SetLabelOffset(0.007);
   m3l_rebin5_fakes_VV_stack_1->GetYaxis()->SetLabelSize(0.05);
   m3l_rebin5_fakes_VV_stack_1->GetYaxis()->SetTitleSize(0.06);
   m3l_rebin5_fakes_VV_stack_1->GetYaxis()->SetTitleOffset(1.35);
   m3l_rebin5_fakes_VV_stack_1->GetYaxis()->SetTitleFont(42);
   m3l_rebin5_fakes_VV_stack_1->GetZaxis()->SetLabelFont(42);
   m3l_rebin5_fakes_VV_stack_1->GetZaxis()->SetLabelOffset(0.007);
   m3l_rebin5_fakes_VV_stack_1->GetZaxis()->SetLabelSize(0.05);
   m3l_rebin5_fakes_VV_stack_1->GetZaxis()->SetTitleSize(0.06);
   m3l_rebin5_fakes_VV_stack_1->GetZaxis()->SetTitleFont(42);
   m3l_rebin5_stack->Add(m3l_rebin5_fakes_VV_stack_1,"");
   Double_t xAxis4[6] = {0, 125.0027, 150.0071, 182.5286, 227.8729, 500}; 
   
   TH1D *m3l_rebin5_fakes_TT_stack_2 = new TH1D("m3l_rebin5_fakes_TT_stack_2","dummy",5, xAxis4);
   m3l_rebin5_fakes_TT_stack_2->SetBinContent(2,0.4446195);
   m3l_rebin5_fakes_TT_stack_2->SetBinContent(3,2.996214);
   m3l_rebin5_fakes_TT_stack_2->SetBinContent(4,11.0837);
   m3l_rebin5_fakes_TT_stack_2->SetBinContent(5,40.5198);
   m3l_rebin5_fakes_TT_stack_2->SetBinError(2,0.1862382);
   m3l_rebin5_fakes_TT_stack_2->SetBinError(3,0.4632398);
   m3l_rebin5_fakes_TT_stack_2->SetBinError(4,0.8614649);
   m3l_rebin5_fakes_TT_stack_2->SetBinError(5,1.657947);
   m3l_rebin5_fakes_TT_stack_2->SetEntries(841);

   ci = TColor::GetColor("#666666");
   m3l_rebin5_fakes_TT_stack_2->SetFillColor(ci);
   m3l_rebin5_fakes_TT_stack_2->SetMarkerStyle(0);
   m3l_rebin5_fakes_TT_stack_2->SetMarkerSize(1.1);
   m3l_rebin5_fakes_TT_stack_2->GetXaxis()->SetTitle("m3l");
   m3l_rebin5_fakes_TT_stack_2->GetXaxis()->SetMoreLogLabels();
   m3l_rebin5_fakes_TT_stack_2->GetXaxis()->SetLabelFont(42);
   m3l_rebin5_fakes_TT_stack_2->GetXaxis()->SetLabelOffset(0.007);
   m3l_rebin5_fakes_TT_stack_2->GetXaxis()->SetLabelSize(0.05);
   m3l_rebin5_fakes_TT_stack_2->GetXaxis()->SetTitleSize(0.06);
   m3l_rebin5_fakes_TT_stack_2->GetXaxis()->SetTitleOffset(0.9);
   m3l_rebin5_fakes_TT_stack_2->GetXaxis()->SetTitleFont(42);
   m3l_rebin5_fakes_TT_stack_2->GetYaxis()->SetTitle("Events");
   m3l_rebin5_fakes_TT_stack_2->GetYaxis()->SetLabelFont(42);
   m3l_rebin5_fakes_TT_stack_2->GetYaxis()->SetLabelOffset(0.007);
   m3l_rebin5_fakes_TT_stack_2->GetYaxis()->SetLabelSize(0.05);
   m3l_rebin5_fakes_TT_stack_2->GetYaxis()->SetTitleSize(0.06);
   m3l_rebin5_fakes_TT_stack_2->GetYaxis()->SetTitleOffset(1.35);
   m3l_rebin5_fakes_TT_stack_2->GetYaxis()->SetTitleFont(42);
   m3l_rebin5_fakes_TT_stack_2->GetZaxis()->SetLabelFont(42);
   m3l_rebin5_fakes_TT_stack_2->GetZaxis()->SetLabelOffset(0.007);
   m3l_rebin5_fakes_TT_stack_2->GetZaxis()->SetLabelSize(0.05);
   m3l_rebin5_fakes_TT_stack_2->GetZaxis()->SetTitleSize(0.06);
   m3l_rebin5_fakes_TT_stack_2->GetZaxis()->SetTitleFont(42);
   m3l_rebin5_stack->Add(m3l_rebin5_fakes_TT_stack_2,"");
   Double_t xAxis5[6] = {0, 125.0027, 150.0071, 182.5286, 227.8729, 500}; 
   
   TH1D *m3l_rebin5_fakes_DY_stack_3 = new TH1D("m3l_rebin5_fakes_DY_stack_3","dummy",5, xAxis5);
   m3l_rebin5_fakes_DY_stack_3->SetBinContent(1,1.719522);
   m3l_rebin5_fakes_DY_stack_3->SetBinContent(2,5.158566);
   m3l_rebin5_fakes_DY_stack_3->SetBinContent(3,27.51235);
   m3l_rebin5_fakes_DY_stack_3->SetBinContent(4,37.82949);
   m3l_rebin5_fakes_DY_stack_3->SetBinContent(5,44.70757);
   m3l_rebin5_fakes_DY_stack_3->SetBinError(1,1.719522);
   m3l_rebin5_fakes_DY_stack_3->SetBinError(2,2.9783);
   m3l_rebin5_fakes_DY_stack_3->SetBinError(3,6.878088);
   m3l_rebin5_fakes_DY_stack_3->SetBinError(4,8.065274);
   m3l_rebin5_fakes_DY_stack_3->SetBinError(5,8.767877);
   m3l_rebin5_fakes_DY_stack_3->SetEntries(72);

   ci = TColor::GetColor("#cccccc");
   m3l_rebin5_fakes_DY_stack_3->SetFillColor(ci);
   m3l_rebin5_fakes_DY_stack_3->SetMarkerStyle(0);
   m3l_rebin5_fakes_DY_stack_3->SetMarkerSize(1.1);
   m3l_rebin5_fakes_DY_stack_3->GetXaxis()->SetTitle("m3l");
   m3l_rebin5_fakes_DY_stack_3->GetXaxis()->SetMoreLogLabels();
   m3l_rebin5_fakes_DY_stack_3->GetXaxis()->SetLabelFont(42);
   m3l_rebin5_fakes_DY_stack_3->GetXaxis()->SetLabelOffset(0.007);
   m3l_rebin5_fakes_DY_stack_3->GetXaxis()->SetLabelSize(0.05);
   m3l_rebin5_fakes_DY_stack_3->GetXaxis()->SetTitleSize(0.06);
   m3l_rebin5_fakes_DY_stack_3->GetXaxis()->SetTitleOffset(0.9);
   m3l_rebin5_fakes_DY_stack_3->GetXaxis()->SetTitleFont(42);
   m3l_rebin5_fakes_DY_stack_3->GetYaxis()->SetTitle("Events");
   m3l_rebin5_fakes_DY_stack_3->GetYaxis()->SetLabelFont(42);
   m3l_rebin5_fakes_DY_stack_3->GetYaxis()->SetLabelOffset(0.007);
   m3l_rebin5_fakes_DY_stack_3->GetYaxis()->SetLabelSize(0.05);
   m3l_rebin5_fakes_DY_stack_3->GetYaxis()->SetTitleSize(0.06);
   m3l_rebin5_fakes_DY_stack_3->GetYaxis()->SetTitleOffset(1.35);
   m3l_rebin5_fakes_DY_stack_3->GetYaxis()->SetTitleFont(42);
   m3l_rebin5_fakes_DY_stack_3->GetZaxis()->SetLabelFont(42);
   m3l_rebin5_fakes_DY_stack_3->GetZaxis()->SetLabelOffset(0.007);
   m3l_rebin5_fakes_DY_stack_3->GetZaxis()->SetLabelSize(0.05);
   m3l_rebin5_fakes_DY_stack_3->GetZaxis()->SetTitleSize(0.06);
   m3l_rebin5_fakes_DY_stack_3->GetZaxis()->SetTitleFont(42);
   m3l_rebin5_stack->Add(m3l_rebin5_fakes_DY_stack_3,"");
   Double_t xAxis6[6] = {0, 125.0027, 150.0071, 182.5286, 227.8729, 500}; 
   
   TH1D *m3l_rebin5_prompt_ZZ_stack_4 = new TH1D("m3l_rebin5_prompt_ZZ_stack_4","dummy",5, xAxis6);
   m3l_rebin5_prompt_ZZ_stack_4->SetBinContent(3,6.238504);
   m3l_rebin5_prompt_ZZ_stack_4->SetBinContent(4,19.26597);
   m3l_rebin5_prompt_ZZ_stack_4->SetBinContent(5,47.70621);
   m3l_rebin5_prompt_ZZ_stack_4->SetBinError(3,1.069895);
   m3l_rebin5_prompt_ZZ_stack_4->SetBinError(4,1.880166);
   m3l_rebin5_prompt_ZZ_stack_4->SetBinError(5,2.958613);
   m3l_rebin5_prompt_ZZ_stack_4->SetEntries(403);

   ci = TColor::GetColor("#00cc00");
   m3l_rebin5_prompt_ZZ_stack_4->SetFillColor(ci);
   m3l_rebin5_prompt_ZZ_stack_4->SetMarkerStyle(0);
   m3l_rebin5_prompt_ZZ_stack_4->SetMarkerSize(1.1);
   m3l_rebin5_prompt_ZZ_stack_4->GetXaxis()->SetTitle("m3l");
   m3l_rebin5_prompt_ZZ_stack_4->GetXaxis()->SetMoreLogLabels();
   m3l_rebin5_prompt_ZZ_stack_4->GetXaxis()->SetLabelFont(42);
   m3l_rebin5_prompt_ZZ_stack_4->GetXaxis()->SetLabelOffset(0.007);
   m3l_rebin5_prompt_ZZ_stack_4->GetXaxis()->SetLabelSize(0.05);
   m3l_rebin5_prompt_ZZ_stack_4->GetXaxis()->SetTitleSize(0.06);
   m3l_rebin5_prompt_ZZ_stack_4->GetXaxis()->SetTitleOffset(0.9);
   m3l_rebin5_prompt_ZZ_stack_4->GetXaxis()->SetTitleFont(42);
   m3l_rebin5_prompt_ZZ_stack_4->GetYaxis()->SetTitle("Events");
   m3l_rebin5_prompt_ZZ_stack_4->GetYaxis()->SetLabelFont(42);
   m3l_rebin5_prompt_ZZ_stack_4->GetYaxis()->SetLabelOffset(0.007);
   m3l_rebin5_prompt_ZZ_stack_4->GetYaxis()->SetLabelSize(0.05);
   m3l_rebin5_prompt_ZZ_stack_4->GetYaxis()->SetTitleSize(0.06);
   m3l_rebin5_prompt_ZZ_stack_4->GetYaxis()->SetTitleOffset(1.35);
   m3l_rebin5_prompt_ZZ_stack_4->GetYaxis()->SetTitleFont(42);
   m3l_rebin5_prompt_ZZ_stack_4->GetZaxis()->SetLabelFont(42);
   m3l_rebin5_prompt_ZZ_stack_4->GetZaxis()->SetLabelOffset(0.007);
   m3l_rebin5_prompt_ZZ_stack_4->GetZaxis()->SetLabelSize(0.05);
   m3l_rebin5_prompt_ZZ_stack_4->GetZaxis()->SetTitleSize(0.06);
   m3l_rebin5_prompt_ZZ_stack_4->GetZaxis()->SetTitleFont(42);
   m3l_rebin5_stack->Add(m3l_rebin5_prompt_ZZ_stack_4,"");
   Double_t xAxis7[6] = {0, 125.0027, 150.0071, 182.5286, 227.8729, 500}; 
   
   TH1D *m3l_rebin5_prompt_WZ_stack_5 = new TH1D("m3l_rebin5_prompt_WZ_stack_5","dummy",5, xAxis7);
   m3l_rebin5_prompt_WZ_stack_5->SetBinContent(2,1.266272);
   m3l_rebin5_prompt_WZ_stack_5->SetBinContent(3,47.84699);
   m3l_rebin5_prompt_WZ_stack_5->SetBinContent(4,275.6855);
   m3l_rebin5_prompt_WZ_stack_5->SetBinContent(5,925.2829);
   m3l_rebin5_prompt_WZ_stack_5->SetBinError(2,0.3384254);
   m3l_rebin5_prompt_WZ_stack_5->SetBinError(3,2.080304);
   m3l_rebin5_prompt_WZ_stack_5->SetBinError(4,4.993516);
   m3l_rebin5_prompt_WZ_stack_5->SetBinError(5,9.148223);
   m3l_rebin5_prompt_WZ_stack_5->SetEntries(13825);

   ci = TColor::GetColor("#ffcc00");
   m3l_rebin5_prompt_WZ_stack_5->SetFillColor(ci);
   m3l_rebin5_prompt_WZ_stack_5->SetMarkerStyle(0);
   m3l_rebin5_prompt_WZ_stack_5->SetMarkerSize(1.1);
   m3l_rebin5_prompt_WZ_stack_5->GetXaxis()->SetTitle("m3l");
   m3l_rebin5_prompt_WZ_stack_5->GetXaxis()->SetMoreLogLabels();
   m3l_rebin5_prompt_WZ_stack_5->GetXaxis()->SetLabelFont(42);
   m3l_rebin5_prompt_WZ_stack_5->GetXaxis()->SetLabelOffset(0.007);
   m3l_rebin5_prompt_WZ_stack_5->GetXaxis()->SetLabelSize(0.05);
   m3l_rebin5_prompt_WZ_stack_5->GetXaxis()->SetTitleSize(0.06);
   m3l_rebin5_prompt_WZ_stack_5->GetXaxis()->SetTitleOffset(0.9);
   m3l_rebin5_prompt_WZ_stack_5->GetXaxis()->SetTitleFont(42);
   m3l_rebin5_prompt_WZ_stack_5->GetYaxis()->SetTitle("Events");
   m3l_rebin5_prompt_WZ_stack_5->GetYaxis()->SetLabelFont(42);
   m3l_rebin5_prompt_WZ_stack_5->GetYaxis()->SetLabelOffset(0.007);
   m3l_rebin5_prompt_WZ_stack_5->GetYaxis()->SetLabelSize(0.05);
   m3l_rebin5_prompt_WZ_stack_5->GetYaxis()->SetTitleSize(0.06);
   m3l_rebin5_prompt_WZ_stack_5->GetYaxis()->SetTitleOffset(1.35);
   m3l_rebin5_prompt_WZ_stack_5->GetYaxis()->SetTitleFont(42);
   m3l_rebin5_prompt_WZ_stack_5->GetZaxis()->SetLabelFont(42);
   m3l_rebin5_prompt_WZ_stack_5->GetZaxis()->SetLabelOffset(0.007);
   m3l_rebin5_prompt_WZ_stack_5->GetZaxis()->SetLabelSize(0.05);
   m3l_rebin5_prompt_WZ_stack_5->GetZaxis()->SetTitleSize(0.06);
   m3l_rebin5_prompt_WZ_stack_5->GetZaxis()->SetTitleFont(42);
   m3l_rebin5_stack->Add(m3l_rebin5_prompt_WZ_stack_5,"");
   m3l_rebin5_stack->Draw("same hist");
   Double_t xAxis8[6] = {0, 125.0027, 150.0071, 182.5286, 227.8729, 500}; 
   
   TH1D *m3l_rebin5_total__2 = new TH1D("m3l_rebin5_total__2","dummy",5, xAxis8);
   m3l_rebin5_total__2->SetBinContent(1,1.719522);
   m3l_rebin5_total__2->SetBinContent(2,6.869458);
   m3l_rebin5_total__2->SetBinContent(3,84.59406);
   m3l_rebin5_total__2->SetBinContent(4,343.9618);
   m3l_rebin5_total__2->SetBinContent(5,1058.8);
   m3l_rebin5_total__2->SetBinError(1,1.719522);
   m3l_rebin5_total__2->SetBinError(2,3.003246);
   m3l_rebin5_total__2->SetBinError(3,7.279769);
   m3l_rebin5_total__2->SetBinError(4,9.709296);
   m3l_rebin5_total__2->SetBinError(5,13.11962);
   m3l_rebin5_total__2->SetMinimum(0);
   m3l_rebin5_total__2->SetMaximum(2117.599);
   m3l_rebin5_total__2->SetEntries(15152);
   m3l_rebin5_total__2->SetDirectory(0);

   ci = TColor::GetColor("#00cc00");
   m3l_rebin5_total__2->SetFillColor(ci);
   m3l_rebin5_total__2->SetMarkerStyle(20);
   m3l_rebin5_total__2->SetMarkerSize(1.1);
   m3l_rebin5_total__2->GetXaxis()->SetTitle("m3l");
   m3l_rebin5_total__2->GetXaxis()->SetMoreLogLabels();
   m3l_rebin5_total__2->GetXaxis()->SetLabelFont(42);
   m3l_rebin5_total__2->GetXaxis()->SetLabelOffset(999);
   m3l_rebin5_total__2->GetXaxis()->SetLabelSize(0.05);
   m3l_rebin5_total__2->GetXaxis()->SetTitleSize(0.05);
   m3l_rebin5_total__2->GetXaxis()->SetTitleOffset(999);
   m3l_rebin5_total__2->GetXaxis()->SetTitleFont(42);
   m3l_rebin5_total__2->GetYaxis()->SetTitle("Events");
   m3l_rebin5_total__2->GetYaxis()->SetLabelFont(42);
   m3l_rebin5_total__2->GetYaxis()->SetLabelOffset(0.007);
   m3l_rebin5_total__2->GetYaxis()->SetLabelSize(0.05);
   m3l_rebin5_total__2->GetYaxis()->SetTitleSize(0.06);
   m3l_rebin5_total__2->GetYaxis()->SetTitleOffset(1.48);
   m3l_rebin5_total__2->GetYaxis()->SetTitleFont(42);
   m3l_rebin5_total__2->GetZaxis()->SetLabelFont(42);
   m3l_rebin5_total__2->GetZaxis()->SetLabelOffset(0.007);
   m3l_rebin5_total__2->GetZaxis()->SetLabelSize(0.05);
   m3l_rebin5_total__2->GetZaxis()->SetTitleSize(0.06);
   m3l_rebin5_total__2->GetZaxis()->SetTitleFont(42);
   m3l_rebin5_total__2->Draw("AXIS SAME");
   
   Double_t m3l_rebin5_total_errors_fx3001[5] = {
   62.50137,
   137.5049,
   166.2679,
   205.2007,
   363.9365};
   Double_t m3l_rebin5_total_errors_fy3001[5] = {
   1.719522,
   6.869458,
   84.59406,
   343.9618,
   1058.8};
   Double_t m3l_rebin5_total_errors_felx3001[5] = {
   62.50137,
   12.5022,
   16.26072,
   22.67216,
   136.0635};
   Double_t m3l_rebin5_total_errors_fely3001[5] = {
   1.719522,
   3.003246,
   7.279769,
   9.709296,
   13.11962};
   Double_t m3l_rebin5_total_errors_fehx3001[5] = {
   62.50137,
   12.5022,
   16.26072,
   22.67216,
   136.0635};
   Double_t m3l_rebin5_total_errors_fehy3001[5] = {
   1.719522,
   3.003246,
   7.279769,
   9.709296,
   13.11962};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(5,m3l_rebin5_total_errors_fx3001,m3l_rebin5_total_errors_fy3001,m3l_rebin5_total_errors_felx3001,m3l_rebin5_total_errors_fehx3001,m3l_rebin5_total_errors_fely3001,m3l_rebin5_total_errors_fehy3001);
   grae->SetName("m3l_rebin5_total_errors");
   grae->SetTitle("Graph");
   grae->SetFillColor(1);
   grae->SetFillStyle(3013);
   grae->SetMarkerStyle(0);
   
   TH1F *Graph_m3l_rebin5_total_errors3001 = new TH1F("Graph_m3l_rebin5_total_errors3001","Graph",100,0,550);
   Graph_m3l_rebin5_total_errors3001->SetMinimum(0);
   Graph_m3l_rebin5_total_errors3001->SetMaximum(1179.111);
   Graph_m3l_rebin5_total_errors3001->SetDirectory(0);
   Graph_m3l_rebin5_total_errors3001->SetStats(0);
   Graph_m3l_rebin5_total_errors3001->SetLineStyle(0);
   Graph_m3l_rebin5_total_errors3001->SetMarkerStyle(20);
   Graph_m3l_rebin5_total_errors3001->GetXaxis()->SetLabelFont(42);
   Graph_m3l_rebin5_total_errors3001->GetXaxis()->SetLabelOffset(0.007);
   Graph_m3l_rebin5_total_errors3001->GetXaxis()->SetLabelSize(0.05);
   Graph_m3l_rebin5_total_errors3001->GetXaxis()->SetTitleSize(0.06);
   Graph_m3l_rebin5_total_errors3001->GetXaxis()->SetTitleOffset(0.9);
   Graph_m3l_rebin5_total_errors3001->GetXaxis()->SetTitleFont(42);
   Graph_m3l_rebin5_total_errors3001->GetYaxis()->SetLabelFont(42);
   Graph_m3l_rebin5_total_errors3001->GetYaxis()->SetLabelOffset(0.007);
   Graph_m3l_rebin5_total_errors3001->GetYaxis()->SetLabelSize(0.05);
   Graph_m3l_rebin5_total_errors3001->GetYaxis()->SetTitleSize(0.06);
   Graph_m3l_rebin5_total_errors3001->GetYaxis()->SetTitleOffset(1.35);
   Graph_m3l_rebin5_total_errors3001->GetYaxis()->SetTitleFont(42);
   Graph_m3l_rebin5_total_errors3001->GetZaxis()->SetLabelFont(42);
   Graph_m3l_rebin5_total_errors3001->GetZaxis()->SetLabelOffset(0.007);
   Graph_m3l_rebin5_total_errors3001->GetZaxis()->SetLabelSize(0.05);
   Graph_m3l_rebin5_total_errors3001->GetZaxis()->SetTitleSize(0.06);
   Graph_m3l_rebin5_total_errors3001->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_m3l_rebin5_total_errors3001);
   
   grae->Draw("pe2 ");
   
   Double_t m3l_rebin5_data_graph_fx3002[5] = {
   62.50137,
   137.5049,
   166.2679,
   205.2007,
   363.9365};
   Double_t m3l_rebin5_data_graph_fy3002[5] = {
   3,
   8,
   80,
   365,
   1057};
   Double_t m3l_rebin5_data_graph_felx3002[5] = {
   62.50137,
   12.5022,
   16.26072,
   22.67216,
   136.0635};
   Double_t m3l_rebin5_data_graph_fely3002[5] = {
   1.632727,
   2.768432,
   8.925719,
   19.09663,
   32.50709};
   Double_t m3l_rebin5_data_graph_fehx3002[5] = {
   62.50137,
   12.5022,
   16.26072,
   22.67216,
   136.0635};
   Double_t m3l_rebin5_data_graph_fehy3002[5] = {
   2.918242,
   3.94522,
   9.981777,
   20.12286,
   33.52252};
   grae = new TGraphAsymmErrors(5,m3l_rebin5_data_graph_fx3002,m3l_rebin5_data_graph_fy3002,m3l_rebin5_data_graph_felx3002,m3l_rebin5_data_graph_fehx3002,m3l_rebin5_data_graph_fely3002,m3l_rebin5_data_graph_fehy3002);
   grae->SetName("m3l_rebin5_data_graph");
   grae->SetTitle("Graph");
   grae->SetFillStyle(1000);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.1);
   
   TH1F *Graph_m3l_rebin5_data_graph3002 = new TH1F("Graph_m3l_rebin5_data_graph3002","Graph",100,0,550);
   Graph_m3l_rebin5_data_graph3002->SetMinimum(1.230546);
   Graph_m3l_rebin5_data_graph3002->SetMaximum(1199.438);
   Graph_m3l_rebin5_data_graph3002->SetDirectory(0);
   Graph_m3l_rebin5_data_graph3002->SetStats(0);
   Graph_m3l_rebin5_data_graph3002->SetLineStyle(0);
   Graph_m3l_rebin5_data_graph3002->SetMarkerStyle(20);
   Graph_m3l_rebin5_data_graph3002->GetXaxis()->SetLabelFont(42);
   Graph_m3l_rebin5_data_graph3002->GetXaxis()->SetLabelOffset(0.007);
   Graph_m3l_rebin5_data_graph3002->GetXaxis()->SetLabelSize(0.05);
   Graph_m3l_rebin5_data_graph3002->GetXaxis()->SetTitleSize(0.06);
   Graph_m3l_rebin5_data_graph3002->GetXaxis()->SetTitleOffset(0.9);
   Graph_m3l_rebin5_data_graph3002->GetXaxis()->SetTitleFont(42);
   Graph_m3l_rebin5_data_graph3002->GetYaxis()->SetLabelFont(42);
   Graph_m3l_rebin5_data_graph3002->GetYaxis()->SetLabelOffset(0.007);
   Graph_m3l_rebin5_data_graph3002->GetYaxis()->SetLabelSize(0.05);
   Graph_m3l_rebin5_data_graph3002->GetYaxis()->SetTitleSize(0.06);
   Graph_m3l_rebin5_data_graph3002->GetYaxis()->SetTitleOffset(1.35);
   Graph_m3l_rebin5_data_graph3002->GetYaxis()->SetTitleFont(42);
   Graph_m3l_rebin5_data_graph3002->GetZaxis()->SetLabelFont(42);
   Graph_m3l_rebin5_data_graph3002->GetZaxis()->SetLabelOffset(0.007);
   Graph_m3l_rebin5_data_graph3002->GetZaxis()->SetLabelSize(0.05);
   Graph_m3l_rebin5_data_graph3002->GetZaxis()->SetTitleSize(0.06);
   Graph_m3l_rebin5_data_graph3002->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_m3l_rebin5_data_graph3002);
   
   grae->Draw("pz ");
   
   TLegend *leg = new TLegend(0.62,0.628,0.9,0.91,NULL,"brNDC");
   leg->SetBorderSize(1);
   leg->SetTextSize(0.036);
   leg->SetLineColor(0);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("m3l_rebin5_data","Data","LPE");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1.1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("m3l_rebin5_prompt_WZ_stack_5","WZ","F");

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
   entry=leg->AddEntry("m3l_rebin5_prompt_ZZ_stack_4","qqZZ","F");

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
   entry=leg->AddEntry("m3l_rebin5_fakes_DY_stack_3","Fakes DY","F");

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
   entry=leg->AddEntry("m3l_rebin5_fakes_TT_stack_2","Fakes TT","F");

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
   entry=leg->AddEntry("m3l_rebin5_total_errors","Total unc.","F");
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
   m3l_rebin5_canvas->cd();
  
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
   Double_t xAxis9[6] = {0, 125.0027, 150.0071, 182.5286, 227.8729, 500}; 
   
   TH1D *m3l_rebin5_total__3 = new TH1D("m3l_rebin5_total__3","dummy",5, xAxis9);
   m3l_rebin5_total__3->SetBinContent(1,1);
   m3l_rebin5_total__3->SetBinContent(2,1);
   m3l_rebin5_total__3->SetBinContent(3,1);
   m3l_rebin5_total__3->SetBinContent(4,1);
   m3l_rebin5_total__3->SetBinContent(5,1);
   m3l_rebin5_total__3->SetMinimum(0.5);
   m3l_rebin5_total__3->SetMaximum(2);
   m3l_rebin5_total__3->SetEntries(15157);

   ci = TColor::GetColor("#00cc00");
   m3l_rebin5_total__3->SetFillColor(ci);

   ci = TColor::GetColor("#6666ff");
   m3l_rebin5_total__3->SetMarkerColor(ci);
   m3l_rebin5_total__3->SetMarkerSize(1.1);
   m3l_rebin5_total__3->GetXaxis()->SetTitle("m3l");
   m3l_rebin5_total__3->GetXaxis()->SetMoreLogLabels();
   m3l_rebin5_total__3->GetXaxis()->SetLabelFont(42);
   m3l_rebin5_total__3->GetXaxis()->SetLabelOffset(0.015);
   m3l_rebin5_total__3->GetXaxis()->SetLabelSize(0.1);
   m3l_rebin5_total__3->GetXaxis()->SetTitleSize(0.14);
   m3l_rebin5_total__3->GetXaxis()->SetTitleFont(42);
   m3l_rebin5_total__3->GetYaxis()->SetTitle("Data/pred.");
   m3l_rebin5_total__3->GetYaxis()->SetDecimals();
   m3l_rebin5_total__3->GetYaxis()->SetNdivisions(505);
   m3l_rebin5_total__3->GetYaxis()->SetLabelFont(42);
   m3l_rebin5_total__3->GetYaxis()->SetLabelOffset(0.01);
   m3l_rebin5_total__3->GetYaxis()->SetLabelSize(0.11);
   m3l_rebin5_total__3->GetYaxis()->SetTitleSize(0.14);
   m3l_rebin5_total__3->GetYaxis()->SetTitleOffset(0.62);
   m3l_rebin5_total__3->GetYaxis()->SetTitleFont(42);
   m3l_rebin5_total__3->GetZaxis()->SetLabelFont(42);
   m3l_rebin5_total__3->GetZaxis()->SetLabelOffset(0.007);
   m3l_rebin5_total__3->GetZaxis()->SetLabelSize(0.05);
   m3l_rebin5_total__3->GetZaxis()->SetTitleSize(0.06);
   m3l_rebin5_total__3->GetZaxis()->SetTitleFont(42);
   m3l_rebin5_total__3->Draw("AXIS");
   
   Double_t m3l_rebin5_total_errors_fx3003[5] = {
   62.50137,
   137.5049,
   166.2679,
   205.2007,
   363.9365};
   Double_t m3l_rebin5_total_errors_fy3003[5] = {
   1,
   1,
   1,
   1,
   1};
   Double_t m3l_rebin5_total_errors_felx3003[5] = {
   62.50137,
   12.5022,
   16.26072,
   22.67216,
   136.0635};
   Double_t m3l_rebin5_total_errors_fely3003[5] = {
   1,
   0.4371882,
   0.08605532,
   0.02822783,
   0.01239103};
   Double_t m3l_rebin5_total_errors_fehx3003[5] = {
   62.50137,
   12.5022,
   16.26072,
   22.67216,
   136.0635};
   Double_t m3l_rebin5_total_errors_fehy3003[5] = {
   1,
   0.4371882,
   0.08605532,
   0.02822783,
   0.01239103};
   grae = new TGraphAsymmErrors(5,m3l_rebin5_total_errors_fx3003,m3l_rebin5_total_errors_fy3003,m3l_rebin5_total_errors_felx3003,m3l_rebin5_total_errors_fehx3003,m3l_rebin5_total_errors_fely3003,m3l_rebin5_total_errors_fehy3003);
   grae->SetName("m3l_rebin5_total_errors");
   grae->SetTitle("Graph");

   ci = TColor::GetColor("#00ffff");
   grae->SetFillColor(ci);

   ci = TColor::GetColor("#00ffff");
   grae->SetMarkerColor(ci);
   grae->Draw("e2");
   
   Double_t m3l_rebin5_total_errors_fx3004[5] = {
   62.50137,
   137.5049,
   166.2679,
   205.2007,
   363.9365};
   Double_t m3l_rebin5_total_errors_fy3004[5] = {
   1,
   1,
   1,
   1,
   1};
   Double_t m3l_rebin5_total_errors_felx3004[5] = {
   62.50137,
   12.5022,
   16.26072,
   22.67216,
   136.0635};
   Double_t m3l_rebin5_total_errors_fely3004[5] = {
   1,
   0.4371882,
   0.08605532,
   0.02822783,
   0.01239103};
   Double_t m3l_rebin5_total_errors_fehx3004[5] = {
   62.50137,
   12.5022,
   16.26072,
   22.67216,
   136.0635};
   Double_t m3l_rebin5_total_errors_fehy3004[5] = {
   1,
   0.4371882,
   0.08605532,
   0.02822783,
   0.01239103};
   grae = new TGraphAsymmErrors(5,m3l_rebin5_total_errors_fx3004,m3l_rebin5_total_errors_fy3004,m3l_rebin5_total_errors_felx3004,m3l_rebin5_total_errors_fehx3004,m3l_rebin5_total_errors_fely3004,m3l_rebin5_total_errors_fehy3004);
   grae->SetName("m3l_rebin5_total_errors");
   grae->SetTitle("Graph");

   ci = TColor::GetColor("#6666ff");
   grae->SetFillColor(ci);

   ci = TColor::GetColor("#6666ff");
   grae->SetMarkerColor(ci);
   grae->Draw("e2 ");
   Double_t xAxis10[6] = {0, 125.0027, 150.0071, 182.5286, 227.8729, 500}; 
   
   TH1D *m3l_rebin5_total__4 = new TH1D("m3l_rebin5_total__4","dummy",5, xAxis10);
   m3l_rebin5_total__4->SetBinContent(1,1);
   m3l_rebin5_total__4->SetBinContent(2,1);
   m3l_rebin5_total__4->SetBinContent(3,1);
   m3l_rebin5_total__4->SetBinContent(4,1);
   m3l_rebin5_total__4->SetBinContent(5,1);
   m3l_rebin5_total__4->SetMinimum(0.5);
   m3l_rebin5_total__4->SetMaximum(2);
   m3l_rebin5_total__4->SetEntries(15157);

   ci = TColor::GetColor("#00cc00");
   m3l_rebin5_total__4->SetFillColor(ci);

   ci = TColor::GetColor("#6666ff");
   m3l_rebin5_total__4->SetMarkerColor(ci);
   m3l_rebin5_total__4->SetMarkerSize(1.1);
   m3l_rebin5_total__4->GetXaxis()->SetTitle("m3l");
   m3l_rebin5_total__4->GetXaxis()->SetMoreLogLabels();
   m3l_rebin5_total__4->GetXaxis()->SetLabelFont(42);
   m3l_rebin5_total__4->GetXaxis()->SetLabelOffset(0.015);
   m3l_rebin5_total__4->GetXaxis()->SetLabelSize(0.1);
   m3l_rebin5_total__4->GetXaxis()->SetTitleSize(0.14);
   m3l_rebin5_total__4->GetXaxis()->SetTitleFont(42);
   m3l_rebin5_total__4->GetYaxis()->SetTitle("Data/pred.");
   m3l_rebin5_total__4->GetYaxis()->SetDecimals();
   m3l_rebin5_total__4->GetYaxis()->SetNdivisions(505);
   m3l_rebin5_total__4->GetYaxis()->SetLabelFont(42);
   m3l_rebin5_total__4->GetYaxis()->SetLabelOffset(0.01);
   m3l_rebin5_total__4->GetYaxis()->SetLabelSize(0.11);
   m3l_rebin5_total__4->GetYaxis()->SetTitleSize(0.14);
   m3l_rebin5_total__4->GetYaxis()->SetTitleOffset(0.62);
   m3l_rebin5_total__4->GetYaxis()->SetTitleFont(42);
   m3l_rebin5_total__4->GetZaxis()->SetLabelFont(42);
   m3l_rebin5_total__4->GetZaxis()->SetLabelOffset(0.007);
   m3l_rebin5_total__4->GetZaxis()->SetLabelSize(0.05);
   m3l_rebin5_total__4->GetZaxis()->SetTitleSize(0.06);
   m3l_rebin5_total__4->GetZaxis()->SetTitleFont(42);
   m3l_rebin5_total__4->Draw("AXIS SAME");
   TLine *line = new TLine(0,1,500,1);
   line->SetLineColor(58);
   line->SetLineWidth(2);
   line->Draw();
   
   Double_t data_div_fx3005[5] = {
   62.50137,
   137.5049,
   166.2679,
   205.2007,
   363.9365};
   Double_t data_div_fy3005[5] = {
   1.744671,
   1.164575,
   0.9456929,
   1.061164,
   0.9983003};
   Double_t data_div_felx3005[5] = {
   62.50137,
   12.5022,
   16.26072,
   22.67216,
   136.0635};
   Double_t data_div_fely3005[5] = {
   0.9495236,
   0.4030059,
   0.1055124,
   0.05551962,
   0.03070184};
   Double_t data_div_fehx3005[5] = {
   62.50137,
   12.5022,
   16.26072,
   22.67216,
   136.0635};
   Double_t data_div_fehy3005[5] = {
   1.697124,
   0.5743132,
   0.1179962,
   0.05850319,
   0.03166087};
   grae = new TGraphAsymmErrors(5,data_div_fx3005,data_div_fy3005,data_div_felx3005,data_div_fehx3005,data_div_fely3005,data_div_fehy3005);
   grae->SetName("data_div");
   grae->SetTitle("Graph");
   grae->SetFillStyle(1000);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.1);
   
   TH1F *Graph_m3l_rebin5_data_graph3005 = new TH1F("Graph_m3l_rebin5_data_graph3005","Graph",100,0,550);
   Graph_m3l_rebin5_data_graph3005->SetMinimum(1.230546);
   Graph_m3l_rebin5_data_graph3005->SetMaximum(1199.438);
   Graph_m3l_rebin5_data_graph3005->SetDirectory(0);
   Graph_m3l_rebin5_data_graph3005->SetStats(0);
   Graph_m3l_rebin5_data_graph3005->SetLineStyle(0);
   Graph_m3l_rebin5_data_graph3005->SetMarkerStyle(20);
   Graph_m3l_rebin5_data_graph3005->GetXaxis()->SetLabelFont(42);
   Graph_m3l_rebin5_data_graph3005->GetXaxis()->SetLabelOffset(0.007);
   Graph_m3l_rebin5_data_graph3005->GetXaxis()->SetLabelSize(0.05);
   Graph_m3l_rebin5_data_graph3005->GetXaxis()->SetTitleSize(0.06);
   Graph_m3l_rebin5_data_graph3005->GetXaxis()->SetTitleOffset(0.9);
   Graph_m3l_rebin5_data_graph3005->GetXaxis()->SetTitleFont(42);
   Graph_m3l_rebin5_data_graph3005->GetYaxis()->SetLabelFont(42);
   Graph_m3l_rebin5_data_graph3005->GetYaxis()->SetLabelOffset(0.007);
   Graph_m3l_rebin5_data_graph3005->GetYaxis()->SetLabelSize(0.05);
   Graph_m3l_rebin5_data_graph3005->GetYaxis()->SetTitleSize(0.06);
   Graph_m3l_rebin5_data_graph3005->GetYaxis()->SetTitleOffset(1.35);
   Graph_m3l_rebin5_data_graph3005->GetYaxis()->SetTitleFont(42);
   Graph_m3l_rebin5_data_graph3005->GetZaxis()->SetLabelFont(42);
   Graph_m3l_rebin5_data_graph3005->GetZaxis()->SetLabelOffset(0.007);
   Graph_m3l_rebin5_data_graph3005->GetZaxis()->SetLabelSize(0.05);
   Graph_m3l_rebin5_data_graph3005->GetZaxis()->SetTitleSize(0.06);
   Graph_m3l_rebin5_data_graph3005->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_m3l_rebin5_data_graph3005);
   
   grae->Draw("pz ");
   
   leg = new TLegend(0,0,0,0,NULL,"brNDC");
   leg->SetBorderSize(1);
   leg->SetTextSize(0.084);
   leg->SetLineColor(0);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   entry=leg->AddEntry("m3l_rebin5_total_errors","stat. unc.","F");
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
   entry=leg->AddEntry("m3l_rebin5_total_errors","total unc.","F");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   leg->Draw();
   pad2->Modified();
   m3l_rebin5_canvas->cd();
   m3l_rebin5_canvas->Modified();
   m3l_rebin5_canvas->cd();
   m3l_rebin5_canvas->SetSelected(m3l_rebin5_canvas);
}
