void nJet30()
{
//=========Macro generated from canvas: nJet30_canvas/nJet30
//=========  (Fri Nov 18 13:07:00 2022) by ROOT version 6.12/07
   TCanvas *nJet30_canvas = new TCanvas("nJet30_canvas", "nJet30",0,0,600,750);
   gStyle->SetOptFit(1);
   gStyle->SetOptStat(0);
   gStyle->SetOptTitle(0);
   nJet30_canvas->SetHighLightColor(2);
   nJet30_canvas->Range(0,0,1,1);
   nJet30_canvas->SetFillColor(0);
   nJet30_canvas->SetBorderMode(0);
   nJet30_canvas->SetBorderSize(2);
   nJet30_canvas->SetTickx(1);
   nJet30_canvas->SetTicky(1);
   nJet30_canvas->SetLeftMargin(0.18);
   nJet30_canvas->SetRightMargin(0.04);
   nJet30_canvas->SetBottomMargin(0.13);
   nJet30_canvas->SetFrameFillStyle(0);
   nJet30_canvas->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: pad1
   TPad *pad1 = new TPad("pad1", "pad1",0,0.3,1,1);
   pad1->Draw();
   pad1->cd();
   pad1->Range(-2.576923,-28.20518,8.961538,1100.002);
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
   Double_t xAxis1[10] = {-0.5, 0.5, 1.5, 2.5, 3.5, 4.5, 5.5, 6.5, 7.5, 8.5}; 
   
   TH1D *nJet30_total__93 = new TH1D("nJet30_total__93","dummy",9, xAxis1);
   nJet30_total__93->SetBinContent(1,933.5304);
   nJet30_total__93->SetBinContent(2,394.2012);
   nJet30_total__93->SetBinContent(3,117.1749);
   nJet30_total__93->SetBinContent(4,35.27126);
   nJet30_total__93->SetBinContent(5,11.55215);
   nJet30_total__93->SetBinContent(6,3.743774);
   nJet30_total__93->SetBinContent(7,0.3138844);
   nJet30_total__93->SetBinContent(8,0.06649422);
   nJet30_total__93->SetBinContent(9,0.09044799);
   nJet30_total__93->SetBinError(1,14.8102);
   nJet30_total__93->SetBinError(2,8.586686);
   nJet30_total__93->SetBinError(3,4.109249);
   nJet30_total__93->SetBinError(4,3.396981);
   nJet30_total__93->SetBinError(5,2.584542);
   nJet30_total__93->SetBinError(6,1.774777);
   nJet30_total__93->SetBinError(7,0.1587597);
   nJet30_total__93->SetBinError(8,0.06649422);
   nJet30_total__93->SetBinError(9,0.09044799);
   nJet30_total__93->SetMinimum(0);
   nJet30_total__93->SetMaximum(1032.31);
   nJet30_total__93->SetEntries(15152);
   nJet30_total__93->SetDirectory(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#00cc00");
   nJet30_total__93->SetFillColor(ci);
   nJet30_total__93->SetMarkerStyle(20);
   nJet30_total__93->SetMarkerSize(1.1);
   nJet30_total__93->GetXaxis()->SetTitle("N(jet, p_{T} > 30)");
   nJet30_total__93->GetXaxis()->SetMoreLogLabels();
   nJet30_total__93->GetXaxis()->SetLabelFont(42);
   nJet30_total__93->GetXaxis()->SetLabelOffset(999);
   nJet30_total__93->GetXaxis()->SetLabelSize(0.05);
   nJet30_total__93->GetXaxis()->SetTitleSize(0.05);
   nJet30_total__93->GetXaxis()->SetTitleOffset(999);
   nJet30_total__93->GetXaxis()->SetTitleFont(42);
   nJet30_total__93->GetYaxis()->SetTitle("Events");
   nJet30_total__93->GetYaxis()->SetLabelFont(42);
   nJet30_total__93->GetYaxis()->SetLabelOffset(0.007);
   nJet30_total__93->GetYaxis()->SetLabelSize(0.05);
   nJet30_total__93->GetYaxis()->SetTitleSize(0.06);
   nJet30_total__93->GetYaxis()->SetTitleOffset(1.48);
   nJet30_total__93->GetYaxis()->SetTitleFont(42);
   nJet30_total__93->GetZaxis()->SetLabelFont(42);
   nJet30_total__93->GetZaxis()->SetLabelOffset(0.007);
   nJet30_total__93->GetZaxis()->SetLabelSize(0.05);
   nJet30_total__93->GetZaxis()->SetTitleSize(0.06);
   nJet30_total__93->GetZaxis()->SetTitleFont(42);
   nJet30_total__93->Draw("HIST");
   
   THStack *nJet30_stack = new THStack();
   nJet30_stack->SetName("nJet30_stack");
   nJet30_stack->SetTitle("nJet30");
   Double_t xAxis2[10] = {-0.5, 0.5, 1.5, 2.5, 3.5, 4.5, 5.5, 6.5, 7.5, 8.5}; 
   
   TH1F *nJet30_stack_stack_24 = new TH1F("nJet30_stack_stack_24","nJet30",9, xAxis2);
   nJet30_stack_stack_24->SetMinimum(0);
   nJet30_stack_stack_24->SetMaximum(980.2069);
   nJet30_stack_stack_24->SetDirectory(0);
   nJet30_stack_stack_24->SetStats(0);
   nJet30_stack_stack_24->SetLineStyle(0);
   nJet30_stack_stack_24->SetMarkerStyle(20);
   nJet30_stack_stack_24->GetXaxis()->SetLabelFont(42);
   nJet30_stack_stack_24->GetXaxis()->SetLabelOffset(0.007);
   nJet30_stack_stack_24->GetXaxis()->SetLabelSize(0.05);
   nJet30_stack_stack_24->GetXaxis()->SetTitleSize(0.06);
   nJet30_stack_stack_24->GetXaxis()->SetTitleOffset(0.9);
   nJet30_stack_stack_24->GetXaxis()->SetTitleFont(42);
   nJet30_stack_stack_24->GetYaxis()->SetLabelFont(42);
   nJet30_stack_stack_24->GetYaxis()->SetLabelOffset(0.007);
   nJet30_stack_stack_24->GetYaxis()->SetLabelSize(0.05);
   nJet30_stack_stack_24->GetYaxis()->SetTitleSize(0.06);
   nJet30_stack_stack_24->GetYaxis()->SetTitleOffset(1.35);
   nJet30_stack_stack_24->GetYaxis()->SetTitleFont(42);
   nJet30_stack_stack_24->GetZaxis()->SetLabelFont(42);
   nJet30_stack_stack_24->GetZaxis()->SetLabelOffset(0.007);
   nJet30_stack_stack_24->GetZaxis()->SetLabelSize(0.05);
   nJet30_stack_stack_24->GetZaxis()->SetTitleSize(0.06);
   nJet30_stack_stack_24->GetZaxis()->SetTitleFont(42);
   nJet30_stack->SetHistogram(nJet30_stack_stack_24);
   
   Double_t xAxis3[10] = {-0.5, 0.5, 1.5, 2.5, 3.5, 4.5, 5.5, 6.5, 7.5, 8.5}; 
   
   TH1D *nJet30_fakes_VV_stack_1 = new TH1D("nJet30_fakes_VV_stack_1","dummy",9, xAxis3);
   nJet30_fakes_VV_stack_1->SetBinContent(1,0.4859669);
   nJet30_fakes_VV_stack_1->SetBinContent(2,0.1943867);
   nJet30_fakes_VV_stack_1->SetBinError(1,0.217331);
   nJet30_fakes_VV_stack_1->SetBinError(2,0.1374522);
   nJet30_fakes_VV_stack_1->SetEntries(11);

   ci = TColor::GetColor("#2e3294");
   nJet30_fakes_VV_stack_1->SetFillColor(ci);
   nJet30_fakes_VV_stack_1->SetMarkerStyle(0);
   nJet30_fakes_VV_stack_1->SetMarkerSize(1.1);
   nJet30_fakes_VV_stack_1->GetXaxis()->SetTitle("N(jet, p_{T} > 30)");
   nJet30_fakes_VV_stack_1->GetXaxis()->SetMoreLogLabels();
   nJet30_fakes_VV_stack_1->GetXaxis()->SetLabelFont(42);
   nJet30_fakes_VV_stack_1->GetXaxis()->SetLabelOffset(0.007);
   nJet30_fakes_VV_stack_1->GetXaxis()->SetLabelSize(0.05);
   nJet30_fakes_VV_stack_1->GetXaxis()->SetTitleSize(0.06);
   nJet30_fakes_VV_stack_1->GetXaxis()->SetTitleOffset(0.9);
   nJet30_fakes_VV_stack_1->GetXaxis()->SetTitleFont(42);
   nJet30_fakes_VV_stack_1->GetYaxis()->SetTitle("Events");
   nJet30_fakes_VV_stack_1->GetYaxis()->SetLabelFont(42);
   nJet30_fakes_VV_stack_1->GetYaxis()->SetLabelOffset(0.007);
   nJet30_fakes_VV_stack_1->GetYaxis()->SetLabelSize(0.05);
   nJet30_fakes_VV_stack_1->GetYaxis()->SetTitleSize(0.06);
   nJet30_fakes_VV_stack_1->GetYaxis()->SetTitleOffset(1.35);
   nJet30_fakes_VV_stack_1->GetYaxis()->SetTitleFont(42);
   nJet30_fakes_VV_stack_1->GetZaxis()->SetLabelFont(42);
   nJet30_fakes_VV_stack_1->GetZaxis()->SetLabelOffset(0.007);
   nJet30_fakes_VV_stack_1->GetZaxis()->SetLabelSize(0.05);
   nJet30_fakes_VV_stack_1->GetZaxis()->SetTitleSize(0.06);
   nJet30_fakes_VV_stack_1->GetZaxis()->SetTitleFont(42);
   nJet30_stack->Add(nJet30_fakes_VV_stack_1,"");
   Double_t xAxis4[10] = {-0.5, 0.5, 1.5, 2.5, 3.5, 4.5, 5.5, 6.5, 7.5, 8.5}; 
   
   TH1D *nJet30_fakes_TT_stack_2 = new TH1D("nJet30_fakes_TT_stack_2","dummy",9, xAxis4);
   nJet30_fakes_TT_stack_2->SetBinContent(1,11.70298);
   nJet30_fakes_TT_stack_2->SetBinContent(2,20.4842);
   nJet30_fakes_TT_stack_2->SetBinContent(3,13.36931);
   nJet30_fakes_TT_stack_2->SetBinContent(4,6.761571);
   nJet30_fakes_TT_stack_2->SetBinContent(5,1.861838);
   nJet30_fakes_TT_stack_2->SetBinContent(6,0.6649422);
   nJet30_fakes_TT_stack_2->SetBinContent(7,0.1329884);
   nJet30_fakes_TT_stack_2->SetBinContent(8,0.06649422);
   nJet30_fakes_TT_stack_2->SetBinError(1,0.8871436);
   nJet30_fakes_TT_stack_2->SetBinError(2,1.181155);
   nJet30_fakes_TT_stack_2->SetBinError(3,0.9509691);
   nJet30_fakes_TT_stack_2->SetBinError(4,0.6743333);
   nJet30_fakes_TT_stack_2->SetBinError(5,0.3642039);
   nJet30_fakes_TT_stack_2->SetBinError(6,0.2303428);
   nJet30_fakes_TT_stack_2->SetBinError(7,0.09403703);
   nJet30_fakes_TT_stack_2->SetBinError(8,0.06649422);
   nJet30_fakes_TT_stack_2->SetEntries(841);

   ci = TColor::GetColor("#666666");
   nJet30_fakes_TT_stack_2->SetFillColor(ci);
   nJet30_fakes_TT_stack_2->SetMarkerStyle(0);
   nJet30_fakes_TT_stack_2->SetMarkerSize(1.1);
   nJet30_fakes_TT_stack_2->GetXaxis()->SetTitle("N(jet, p_{T} > 30)");
   nJet30_fakes_TT_stack_2->GetXaxis()->SetMoreLogLabels();
   nJet30_fakes_TT_stack_2->GetXaxis()->SetLabelFont(42);
   nJet30_fakes_TT_stack_2->GetXaxis()->SetLabelOffset(0.007);
   nJet30_fakes_TT_stack_2->GetXaxis()->SetLabelSize(0.05);
   nJet30_fakes_TT_stack_2->GetXaxis()->SetTitleSize(0.06);
   nJet30_fakes_TT_stack_2->GetXaxis()->SetTitleOffset(0.9);
   nJet30_fakes_TT_stack_2->GetXaxis()->SetTitleFont(42);
   nJet30_fakes_TT_stack_2->GetYaxis()->SetTitle("Events");
   nJet30_fakes_TT_stack_2->GetYaxis()->SetLabelFont(42);
   nJet30_fakes_TT_stack_2->GetYaxis()->SetLabelOffset(0.007);
   nJet30_fakes_TT_stack_2->GetYaxis()->SetLabelSize(0.05);
   nJet30_fakes_TT_stack_2->GetYaxis()->SetTitleSize(0.06);
   nJet30_fakes_TT_stack_2->GetYaxis()->SetTitleOffset(1.35);
   nJet30_fakes_TT_stack_2->GetYaxis()->SetTitleFont(42);
   nJet30_fakes_TT_stack_2->GetZaxis()->SetLabelFont(42);
   nJet30_fakes_TT_stack_2->GetZaxis()->SetLabelOffset(0.007);
   nJet30_fakes_TT_stack_2->GetZaxis()->SetLabelSize(0.05);
   nJet30_fakes_TT_stack_2->GetZaxis()->SetTitleSize(0.06);
   nJet30_fakes_TT_stack_2->GetZaxis()->SetTitleFont(42);
   nJet30_stack->Add(nJet30_fakes_TT_stack_2,"");
   Double_t xAxis5[10] = {-0.5, 0.5, 1.5, 2.5, 3.5, 4.5, 5.5, 6.5, 7.5, 8.5}; 
   
   TH1D *nJet30_fakes_DY_stack_3 = new TH1D("nJet30_fakes_DY_stack_3","dummy",9, xAxis5);
   nJet30_fakes_DY_stack_3->SetBinContent(1,80.81754);
   nJet30_fakes_DY_stack_3->SetBinContent(2,22.35379);
   nJet30_fakes_DY_stack_3->SetBinContent(3,3.439044);
   nJet30_fakes_DY_stack_3->SetBinContent(4,5.158566);
   nJet30_fakes_DY_stack_3->SetBinContent(5,3.439044);
   nJet30_fakes_DY_stack_3->SetBinContent(6,1.719522);
   nJet30_fakes_DY_stack_3->SetBinError(1,11.78845);
   nJet30_fakes_DY_stack_3->SetBinError(2,6.199825);
   nJet30_fakes_DY_stack_3->SetBinError(3,2.431771);
   nJet30_fakes_DY_stack_3->SetBinError(4,2.9783);
   nJet30_fakes_DY_stack_3->SetBinError(5,2.431771);
   nJet30_fakes_DY_stack_3->SetBinError(6,1.719522);
   nJet30_fakes_DY_stack_3->SetEntries(72);

   ci = TColor::GetColor("#cccccc");
   nJet30_fakes_DY_stack_3->SetFillColor(ci);
   nJet30_fakes_DY_stack_3->SetMarkerStyle(0);
   nJet30_fakes_DY_stack_3->SetMarkerSize(1.1);
   nJet30_fakes_DY_stack_3->GetXaxis()->SetTitle("N(jet, p_{T} > 30)");
   nJet30_fakes_DY_stack_3->GetXaxis()->SetMoreLogLabels();
   nJet30_fakes_DY_stack_3->GetXaxis()->SetLabelFont(42);
   nJet30_fakes_DY_stack_3->GetXaxis()->SetLabelOffset(0.007);
   nJet30_fakes_DY_stack_3->GetXaxis()->SetLabelSize(0.05);
   nJet30_fakes_DY_stack_3->GetXaxis()->SetTitleSize(0.06);
   nJet30_fakes_DY_stack_3->GetXaxis()->SetTitleOffset(0.9);
   nJet30_fakes_DY_stack_3->GetXaxis()->SetTitleFont(42);
   nJet30_fakes_DY_stack_3->GetYaxis()->SetTitle("Events");
   nJet30_fakes_DY_stack_3->GetYaxis()->SetLabelFont(42);
   nJet30_fakes_DY_stack_3->GetYaxis()->SetLabelOffset(0.007);
   nJet30_fakes_DY_stack_3->GetYaxis()->SetLabelSize(0.05);
   nJet30_fakes_DY_stack_3->GetYaxis()->SetTitleSize(0.06);
   nJet30_fakes_DY_stack_3->GetYaxis()->SetTitleOffset(1.35);
   nJet30_fakes_DY_stack_3->GetYaxis()->SetTitleFont(42);
   nJet30_fakes_DY_stack_3->GetZaxis()->SetLabelFont(42);
   nJet30_fakes_DY_stack_3->GetZaxis()->SetLabelOffset(0.007);
   nJet30_fakes_DY_stack_3->GetZaxis()->SetLabelSize(0.05);
   nJet30_fakes_DY_stack_3->GetZaxis()->SetTitleSize(0.06);
   nJet30_fakes_DY_stack_3->GetZaxis()->SetTitleFont(42);
   nJet30_stack->Add(nJet30_fakes_DY_stack_3,"");
   Double_t xAxis6[10] = {-0.5, 0.5, 1.5, 2.5, 3.5, 4.5, 5.5, 6.5, 7.5, 8.5}; 
   
   TH1D *nJet30_prompt_ZZ_stack_4 = new TH1D("nJet30_prompt_ZZ_stack_4","dummy",9, xAxis6);
   nJet30_prompt_ZZ_stack_4->SetBinContent(1,37.79799);
   nJet30_prompt_ZZ_stack_4->SetBinContent(2,22.75219);
   nJet30_prompt_ZZ_stack_4->SetBinContent(3,10.64215);
   nJet30_prompt_ZZ_stack_4->SetBinContent(4,1.100912);
   nJet30_prompt_ZZ_stack_4->SetBinContent(5,0.7339416);
   nJet30_prompt_ZZ_stack_4->SetBinContent(6,0.1834854);
   nJet30_prompt_ZZ_stack_4->SetBinError(1,2.633511);
   nJet30_prompt_ZZ_stack_4->SetBinError(2,2.043207);
   nJet30_prompt_ZZ_stack_4->SetBinError(3,1.397383);
   nJet30_prompt_ZZ_stack_4->SetBinError(4,0.4494456);
   nJet30_prompt_ZZ_stack_4->SetBinError(5,0.3669708);
   nJet30_prompt_ZZ_stack_4->SetBinError(6,0.1834854);
   nJet30_prompt_ZZ_stack_4->SetEntries(403);

   ci = TColor::GetColor("#00cc00");
   nJet30_prompt_ZZ_stack_4->SetFillColor(ci);
   nJet30_prompt_ZZ_stack_4->SetMarkerStyle(0);
   nJet30_prompt_ZZ_stack_4->SetMarkerSize(1.1);
   nJet30_prompt_ZZ_stack_4->GetXaxis()->SetTitle("N(jet, p_{T} > 30)");
   nJet30_prompt_ZZ_stack_4->GetXaxis()->SetMoreLogLabels();
   nJet30_prompt_ZZ_stack_4->GetXaxis()->SetLabelFont(42);
   nJet30_prompt_ZZ_stack_4->GetXaxis()->SetLabelOffset(0.007);
   nJet30_prompt_ZZ_stack_4->GetXaxis()->SetLabelSize(0.05);
   nJet30_prompt_ZZ_stack_4->GetXaxis()->SetTitleSize(0.06);
   nJet30_prompt_ZZ_stack_4->GetXaxis()->SetTitleOffset(0.9);
   nJet30_prompt_ZZ_stack_4->GetXaxis()->SetTitleFont(42);
   nJet30_prompt_ZZ_stack_4->GetYaxis()->SetTitle("Events");
   nJet30_prompt_ZZ_stack_4->GetYaxis()->SetLabelFont(42);
   nJet30_prompt_ZZ_stack_4->GetYaxis()->SetLabelOffset(0.007);
   nJet30_prompt_ZZ_stack_4->GetYaxis()->SetLabelSize(0.05);
   nJet30_prompt_ZZ_stack_4->GetYaxis()->SetTitleSize(0.06);
   nJet30_prompt_ZZ_stack_4->GetYaxis()->SetTitleOffset(1.35);
   nJet30_prompt_ZZ_stack_4->GetYaxis()->SetTitleFont(42);
   nJet30_prompt_ZZ_stack_4->GetZaxis()->SetLabelFont(42);
   nJet30_prompt_ZZ_stack_4->GetZaxis()->SetLabelOffset(0.007);
   nJet30_prompt_ZZ_stack_4->GetZaxis()->SetLabelSize(0.05);
   nJet30_prompt_ZZ_stack_4->GetZaxis()->SetTitleSize(0.06);
   nJet30_prompt_ZZ_stack_4->GetZaxis()->SetTitleFont(42);
   nJet30_stack->Add(nJet30_prompt_ZZ_stack_4,"");
   Double_t xAxis7[10] = {-0.5, 0.5, 1.5, 2.5, 3.5, 4.5, 5.5, 6.5, 7.5, 8.5}; 
   
   TH1D *nJet30_prompt_WZ_stack_5 = new TH1D("nJet30_prompt_WZ_stack_5","dummy",9, xAxis7);
   nJet30_prompt_WZ_stack_5->SetBinContent(1,802.7259);
   nJet30_prompt_WZ_stack_5->SetBinContent(2,328.4167);
   nJet30_prompt_WZ_stack_5->SetBinContent(3,89.72441);
   nJet30_prompt_WZ_stack_5->SetBinContent(4,22.25021);
   nJet30_prompt_WZ_stack_5->SetBinContent(5,5.517327);
   nJet30_prompt_WZ_stack_5->SetBinContent(6,1.175824);
   nJet30_prompt_WZ_stack_5->SetBinContent(7,0.180896);
   nJet30_prompt_WZ_stack_5->SetBinContent(9,0.09044799);
   nJet30_prompt_WZ_stack_5->SetBinError(1,8.520854);
   nJet30_prompt_WZ_stack_5->SetBinError(2,5.450195);
   nJet30_prompt_WZ_stack_5->SetBinError(3,2.848753);
   nJet30_prompt_WZ_stack_5->SetBinError(4,1.418621);
   nJet30_prompt_WZ_stack_5->SetBinError(5,0.7064214);
   nJet30_prompt_WZ_stack_5->SetBinError(6,0.3261149);
   nJet30_prompt_WZ_stack_5->SetBinError(7,0.1279128);
   nJet30_prompt_WZ_stack_5->SetBinError(9,0.09044799);
   nJet30_prompt_WZ_stack_5->SetEntries(13825);

   ci = TColor::GetColor("#ffcc00");
   nJet30_prompt_WZ_stack_5->SetFillColor(ci);
   nJet30_prompt_WZ_stack_5->SetMarkerStyle(0);
   nJet30_prompt_WZ_stack_5->SetMarkerSize(1.1);
   nJet30_prompt_WZ_stack_5->GetXaxis()->SetTitle("N(jet, p_{T} > 30)");
   nJet30_prompt_WZ_stack_5->GetXaxis()->SetMoreLogLabels();
   nJet30_prompt_WZ_stack_5->GetXaxis()->SetLabelFont(42);
   nJet30_prompt_WZ_stack_5->GetXaxis()->SetLabelOffset(0.007);
   nJet30_prompt_WZ_stack_5->GetXaxis()->SetLabelSize(0.05);
   nJet30_prompt_WZ_stack_5->GetXaxis()->SetTitleSize(0.06);
   nJet30_prompt_WZ_stack_5->GetXaxis()->SetTitleOffset(0.9);
   nJet30_prompt_WZ_stack_5->GetXaxis()->SetTitleFont(42);
   nJet30_prompt_WZ_stack_5->GetYaxis()->SetTitle("Events");
   nJet30_prompt_WZ_stack_5->GetYaxis()->SetLabelFont(42);
   nJet30_prompt_WZ_stack_5->GetYaxis()->SetLabelOffset(0.007);
   nJet30_prompt_WZ_stack_5->GetYaxis()->SetLabelSize(0.05);
   nJet30_prompt_WZ_stack_5->GetYaxis()->SetTitleSize(0.06);
   nJet30_prompt_WZ_stack_5->GetYaxis()->SetTitleOffset(1.35);
   nJet30_prompt_WZ_stack_5->GetYaxis()->SetTitleFont(42);
   nJet30_prompt_WZ_stack_5->GetZaxis()->SetLabelFont(42);
   nJet30_prompt_WZ_stack_5->GetZaxis()->SetLabelOffset(0.007);
   nJet30_prompt_WZ_stack_5->GetZaxis()->SetLabelSize(0.05);
   nJet30_prompt_WZ_stack_5->GetZaxis()->SetTitleSize(0.06);
   nJet30_prompt_WZ_stack_5->GetZaxis()->SetTitleFont(42);
   nJet30_stack->Add(nJet30_prompt_WZ_stack_5,"");
   nJet30_stack->Draw("same hist");
   Double_t xAxis8[10] = {-0.5, 0.5, 1.5, 2.5, 3.5, 4.5, 5.5, 6.5, 7.5, 8.5}; 
   
   TH1D *nJet30_total__94 = new TH1D("nJet30_total__94","dummy",9, xAxis8);
   nJet30_total__94->SetBinContent(1,933.5304);
   nJet30_total__94->SetBinContent(2,394.2012);
   nJet30_total__94->SetBinContent(3,117.1749);
   nJet30_total__94->SetBinContent(4,35.27126);
   nJet30_total__94->SetBinContent(5,11.55215);
   nJet30_total__94->SetBinContent(6,3.743774);
   nJet30_total__94->SetBinContent(7,0.3138844);
   nJet30_total__94->SetBinContent(8,0.06649422);
   nJet30_total__94->SetBinContent(9,0.09044799);
   nJet30_total__94->SetBinError(1,14.8102);
   nJet30_total__94->SetBinError(2,8.586686);
   nJet30_total__94->SetBinError(3,4.109249);
   nJet30_total__94->SetBinError(4,3.396981);
   nJet30_total__94->SetBinError(5,2.584542);
   nJet30_total__94->SetBinError(6,1.774777);
   nJet30_total__94->SetBinError(7,0.1587597);
   nJet30_total__94->SetBinError(8,0.06649422);
   nJet30_total__94->SetBinError(9,0.09044799);
   nJet30_total__94->SetMinimum(0);
   nJet30_total__94->SetMaximum(1032.31);
   nJet30_total__94->SetEntries(15152);
   nJet30_total__94->SetDirectory(0);

   ci = TColor::GetColor("#00cc00");
   nJet30_total__94->SetFillColor(ci);
   nJet30_total__94->SetMarkerStyle(20);
   nJet30_total__94->SetMarkerSize(1.1);
   nJet30_total__94->GetXaxis()->SetTitle("N(jet, p_{T} > 30)");
   nJet30_total__94->GetXaxis()->SetMoreLogLabels();
   nJet30_total__94->GetXaxis()->SetLabelFont(42);
   nJet30_total__94->GetXaxis()->SetLabelOffset(999);
   nJet30_total__94->GetXaxis()->SetLabelSize(0.05);
   nJet30_total__94->GetXaxis()->SetTitleSize(0.05);
   nJet30_total__94->GetXaxis()->SetTitleOffset(999);
   nJet30_total__94->GetXaxis()->SetTitleFont(42);
   nJet30_total__94->GetYaxis()->SetTitle("Events");
   nJet30_total__94->GetYaxis()->SetLabelFont(42);
   nJet30_total__94->GetYaxis()->SetLabelOffset(0.007);
   nJet30_total__94->GetYaxis()->SetLabelSize(0.05);
   nJet30_total__94->GetYaxis()->SetTitleSize(0.06);
   nJet30_total__94->GetYaxis()->SetTitleOffset(1.48);
   nJet30_total__94->GetYaxis()->SetTitleFont(42);
   nJet30_total__94->GetZaxis()->SetLabelFont(42);
   nJet30_total__94->GetZaxis()->SetLabelOffset(0.007);
   nJet30_total__94->GetZaxis()->SetLabelSize(0.05);
   nJet30_total__94->GetZaxis()->SetTitleSize(0.06);
   nJet30_total__94->GetZaxis()->SetTitleFont(42);
   nJet30_total__94->Draw("AXIS SAME");
   
   Double_t nJet30_total_errors_fx3116[9] = {
   0,
   1,
   2,
   3,
   4,
   5,
   6,
   7,
   8};
   Double_t nJet30_total_errors_fy3116[9] = {
   933.5304,
   394.2012,
   117.1749,
   35.27126,
   11.55215,
   3.743774,
   0.3138844,
   0.06649422,
   0.09044799};
   Double_t nJet30_total_errors_felx3116[9] = {
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5};
   Double_t nJet30_total_errors_fely3116[9] = {
   14.8102,
   8.586686,
   4.109249,
   3.396981,
   2.584542,
   1.774777,
   0.1587597,
   0.06649422,
   0.09044799};
   Double_t nJet30_total_errors_fehx3116[9] = {
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5};
   Double_t nJet30_total_errors_fehy3116[9] = {
   14.8102,
   8.586686,
   4.109249,
   3.396981,
   2.584542,
   1.774777,
   0.1587597,
   0.06649422,
   0.09044799};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(9,nJet30_total_errors_fx3116,nJet30_total_errors_fy3116,nJet30_total_errors_felx3116,nJet30_total_errors_fehx3116,nJet30_total_errors_fely3116,nJet30_total_errors_fehy3116);
   grae->SetName("nJet30_total_errors");
   grae->SetTitle("Graph");
   grae->SetFillColor(1);
   grae->SetFillStyle(3013);
   grae->SetMarkerStyle(0);
   
   TH1F *Graph_nJet30_total_errors3116 = new TH1F("Graph_nJet30_total_errors3116","Graph",100,-1.4,9.4);
   Graph_nJet30_total_errors3116->SetMinimum(0);
   Graph_nJet30_total_errors3116->SetMaximum(1043.175);
   Graph_nJet30_total_errors3116->SetDirectory(0);
   Graph_nJet30_total_errors3116->SetStats(0);
   Graph_nJet30_total_errors3116->SetLineStyle(0);
   Graph_nJet30_total_errors3116->SetMarkerStyle(20);
   Graph_nJet30_total_errors3116->GetXaxis()->SetLabelFont(42);
   Graph_nJet30_total_errors3116->GetXaxis()->SetLabelOffset(0.007);
   Graph_nJet30_total_errors3116->GetXaxis()->SetLabelSize(0.05);
   Graph_nJet30_total_errors3116->GetXaxis()->SetTitleSize(0.06);
   Graph_nJet30_total_errors3116->GetXaxis()->SetTitleOffset(0.9);
   Graph_nJet30_total_errors3116->GetXaxis()->SetTitleFont(42);
   Graph_nJet30_total_errors3116->GetYaxis()->SetLabelFont(42);
   Graph_nJet30_total_errors3116->GetYaxis()->SetLabelOffset(0.007);
   Graph_nJet30_total_errors3116->GetYaxis()->SetLabelSize(0.05);
   Graph_nJet30_total_errors3116->GetYaxis()->SetTitleSize(0.06);
   Graph_nJet30_total_errors3116->GetYaxis()->SetTitleOffset(1.35);
   Graph_nJet30_total_errors3116->GetYaxis()->SetTitleFont(42);
   Graph_nJet30_total_errors3116->GetZaxis()->SetLabelFont(42);
   Graph_nJet30_total_errors3116->GetZaxis()->SetLabelOffset(0.007);
   Graph_nJet30_total_errors3116->GetZaxis()->SetLabelSize(0.05);
   Graph_nJet30_total_errors3116->GetZaxis()->SetTitleSize(0.06);
   Graph_nJet30_total_errors3116->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_nJet30_total_errors3116);
   
   grae->Draw("pe2 ");
   
   Double_t nJet30_data_graph_fx3117[9] = {
   0,
   1,
   2,
   3,
   4,
   5,
   6,
   7,
   8};
   Double_t nJet30_data_graph_fy3117[9] = {
   757,
   419,
   209,
   87,
   29,
   5,
   6,
   1,
   0};
   Double_t nJet30_data_graph_felx3117[9] = {
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5};
   Double_t nJet30_data_graph_fely3117[9] = {
   27.50815,
   20.46176,
   14.44557,
   9.309608,
   5.354034,
   2.159724,
   2.379969,
   0.8272525,
   0};
   Double_t nJet30_data_graph_fehx3117[9] = {
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5};
   Double_t nJet30_data_graph_fehy3117[9] = {
   28.52637,
   21.48625,
   15.48024,
   10.36336,
   6.447153,
   3.382539,
   3.583712,
   2.29957,
   1.841055};
   grae = new TGraphAsymmErrors(9,nJet30_data_graph_fx3117,nJet30_data_graph_fy3117,nJet30_data_graph_felx3117,nJet30_data_graph_fehx3117,nJet30_data_graph_fely3117,nJet30_data_graph_fehy3117);
   grae->SetName("nJet30_data_graph");
   grae->SetTitle("Graph");
   grae->SetFillStyle(1000);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.1);
   
   TH1F *Graph_nJet30_data_graph3117 = new TH1F("Graph_nJet30_data_graph3117","Graph",100,-1.4,9.4);
   Graph_nJet30_data_graph3117->SetMinimum(0);
   Graph_nJet30_data_graph3117->SetMaximum(864.079);
   Graph_nJet30_data_graph3117->SetDirectory(0);
   Graph_nJet30_data_graph3117->SetStats(0);
   Graph_nJet30_data_graph3117->SetLineStyle(0);
   Graph_nJet30_data_graph3117->SetMarkerStyle(20);
   Graph_nJet30_data_graph3117->GetXaxis()->SetLabelFont(42);
   Graph_nJet30_data_graph3117->GetXaxis()->SetLabelOffset(0.007);
   Graph_nJet30_data_graph3117->GetXaxis()->SetLabelSize(0.05);
   Graph_nJet30_data_graph3117->GetXaxis()->SetTitleSize(0.06);
   Graph_nJet30_data_graph3117->GetXaxis()->SetTitleOffset(0.9);
   Graph_nJet30_data_graph3117->GetXaxis()->SetTitleFont(42);
   Graph_nJet30_data_graph3117->GetYaxis()->SetLabelFont(42);
   Graph_nJet30_data_graph3117->GetYaxis()->SetLabelOffset(0.007);
   Graph_nJet30_data_graph3117->GetYaxis()->SetLabelSize(0.05);
   Graph_nJet30_data_graph3117->GetYaxis()->SetTitleSize(0.06);
   Graph_nJet30_data_graph3117->GetYaxis()->SetTitleOffset(1.35);
   Graph_nJet30_data_graph3117->GetYaxis()->SetTitleFont(42);
   Graph_nJet30_data_graph3117->GetZaxis()->SetLabelFont(42);
   Graph_nJet30_data_graph3117->GetZaxis()->SetLabelOffset(0.007);
   Graph_nJet30_data_graph3117->GetZaxis()->SetLabelSize(0.05);
   Graph_nJet30_data_graph3117->GetZaxis()->SetTitleSize(0.06);
   Graph_nJet30_data_graph3117->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_nJet30_data_graph3117);
   
   grae->Draw("pz ");
   
   TLegend *leg = new TLegend(0.62,0.628,0.9,0.91,NULL,"brNDC");
   leg->SetBorderSize(1);
   leg->SetTextSize(0.036);
   leg->SetLineColor(0);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("nJet30_data","Data","LPE");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1.1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("nJet30_prompt_WZ_stack_5","WZ","F");

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
   entry=leg->AddEntry("nJet30_prompt_ZZ_stack_4","qqZZ","F");

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
   entry=leg->AddEntry("nJet30_fakes_DY_stack_3","Fakes DY","F");

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
   entry=leg->AddEntry("nJet30_fakes_TT_stack_2","Fakes TT","F");

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
   entry=leg->AddEntry("nJet30_total_errors","Total unc.","F");
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
   nJet30_canvas->cd();
  
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
   Double_t xAxis9[10] = {-0.5, 0.5, 1.5, 2.5, 3.5, 4.5, 5.5, 6.5, 7.5, 8.5}; 
   
   TH1D *nJet30_total__95 = new TH1D("nJet30_total__95","dummy",9, xAxis9);
   nJet30_total__95->SetBinContent(1,1);
   nJet30_total__95->SetBinContent(2,1);
   nJet30_total__95->SetBinContent(3,1);
   nJet30_total__95->SetBinContent(4,1);
   nJet30_total__95->SetBinContent(5,1);
   nJet30_total__95->SetBinContent(6,1);
   nJet30_total__95->SetBinContent(7,1);
   nJet30_total__95->SetBinContent(8,1);
   nJet30_total__95->SetBinContent(9,1);
   nJet30_total__95->SetMinimum(0.5);
   nJet30_total__95->SetMaximum(2);
   nJet30_total__95->SetEntries(15161);

   ci = TColor::GetColor("#00cc00");
   nJet30_total__95->SetFillColor(ci);

   ci = TColor::GetColor("#6666ff");
   nJet30_total__95->SetMarkerColor(ci);
   nJet30_total__95->SetMarkerSize(1.1);
   nJet30_total__95->GetXaxis()->SetTitle("N(jet, p_{T} > 30)");
   nJet30_total__95->GetXaxis()->SetMoreLogLabels();
   nJet30_total__95->GetXaxis()->SetLabelFont(42);
   nJet30_total__95->GetXaxis()->SetLabelOffset(0.015);
   nJet30_total__95->GetXaxis()->SetLabelSize(0.1);
   nJet30_total__95->GetXaxis()->SetTitleSize(0.14);
   nJet30_total__95->GetXaxis()->SetTitleFont(42);
   nJet30_total__95->GetYaxis()->SetTitle("Data/pred.");
   nJet30_total__95->GetYaxis()->SetDecimals();
   nJet30_total__95->GetYaxis()->SetNdivisions(505);
   nJet30_total__95->GetYaxis()->SetLabelFont(42);
   nJet30_total__95->GetYaxis()->SetLabelOffset(0.01);
   nJet30_total__95->GetYaxis()->SetLabelSize(0.11);
   nJet30_total__95->GetYaxis()->SetTitleSize(0.14);
   nJet30_total__95->GetYaxis()->SetTitleOffset(0.62);
   nJet30_total__95->GetYaxis()->SetTitleFont(42);
   nJet30_total__95->GetZaxis()->SetLabelFont(42);
   nJet30_total__95->GetZaxis()->SetLabelOffset(0.007);
   nJet30_total__95->GetZaxis()->SetLabelSize(0.05);
   nJet30_total__95->GetZaxis()->SetTitleSize(0.06);
   nJet30_total__95->GetZaxis()->SetTitleFont(42);
   nJet30_total__95->Draw("AXIS");
   
   Double_t nJet30_total_errors_fx3118[9] = {
   0,
   1,
   2,
   3,
   4,
   5,
   6,
   7,
   8};
   Double_t nJet30_total_errors_fy3118[9] = {
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1};
   Double_t nJet30_total_errors_felx3118[9] = {
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5};
   Double_t nJet30_total_errors_fely3118[9] = {
   0.01586473,
   0.02178249,
   0.03506936,
   0.09631019,
   0.2237282,
   0.4740609,
   0.5057903,
   1,
   1};
   Double_t nJet30_total_errors_fehx3118[9] = {
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5};
   Double_t nJet30_total_errors_fehy3118[9] = {
   0.01586473,
   0.02178249,
   0.03506936,
   0.09631019,
   0.2237282,
   0.4740609,
   0.5057903,
   1,
   1};
   grae = new TGraphAsymmErrors(9,nJet30_total_errors_fx3118,nJet30_total_errors_fy3118,nJet30_total_errors_felx3118,nJet30_total_errors_fehx3118,nJet30_total_errors_fely3118,nJet30_total_errors_fehy3118);
   grae->SetName("nJet30_total_errors");
   grae->SetTitle("Graph");

   ci = TColor::GetColor("#00ffff");
   grae->SetFillColor(ci);

   ci = TColor::GetColor("#00ffff");
   grae->SetMarkerColor(ci);
   grae->Draw("e2");
   
   Double_t nJet30_total_errors_fx3119[9] = {
   0,
   1,
   2,
   3,
   4,
   5,
   6,
   7,
   8};
   Double_t nJet30_total_errors_fy3119[9] = {
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1};
   Double_t nJet30_total_errors_felx3119[9] = {
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5};
   Double_t nJet30_total_errors_fely3119[9] = {
   0.01586473,
   0.02178249,
   0.03506936,
   0.09631019,
   0.2237282,
   0.4740609,
   0.5057903,
   1,
   1};
   Double_t nJet30_total_errors_fehx3119[9] = {
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5};
   Double_t nJet30_total_errors_fehy3119[9] = {
   0.01586473,
   0.02178249,
   0.03506936,
   0.09631019,
   0.2237282,
   0.4740609,
   0.5057903,
   1,
   1};
   grae = new TGraphAsymmErrors(9,nJet30_total_errors_fx3119,nJet30_total_errors_fy3119,nJet30_total_errors_felx3119,nJet30_total_errors_fehx3119,nJet30_total_errors_fely3119,nJet30_total_errors_fehy3119);
   grae->SetName("nJet30_total_errors");
   grae->SetTitle("Graph");

   ci = TColor::GetColor("#6666ff");
   grae->SetFillColor(ci);

   ci = TColor::GetColor("#6666ff");
   grae->SetMarkerColor(ci);
   grae->Draw("e2 ");
   Double_t xAxis10[10] = {-0.5, 0.5, 1.5, 2.5, 3.5, 4.5, 5.5, 6.5, 7.5, 8.5}; 
   
   TH1D *nJet30_total__96 = new TH1D("nJet30_total__96","dummy",9, xAxis10);
   nJet30_total__96->SetBinContent(1,1);
   nJet30_total__96->SetBinContent(2,1);
   nJet30_total__96->SetBinContent(3,1);
   nJet30_total__96->SetBinContent(4,1);
   nJet30_total__96->SetBinContent(5,1);
   nJet30_total__96->SetBinContent(6,1);
   nJet30_total__96->SetBinContent(7,1);
   nJet30_total__96->SetBinContent(8,1);
   nJet30_total__96->SetBinContent(9,1);
   nJet30_total__96->SetMinimum(0.5);
   nJet30_total__96->SetMaximum(2);
   nJet30_total__96->SetEntries(15161);

   ci = TColor::GetColor("#00cc00");
   nJet30_total__96->SetFillColor(ci);

   ci = TColor::GetColor("#6666ff");
   nJet30_total__96->SetMarkerColor(ci);
   nJet30_total__96->SetMarkerSize(1.1);
   nJet30_total__96->GetXaxis()->SetTitle("N(jet, p_{T} > 30)");
   nJet30_total__96->GetXaxis()->SetMoreLogLabels();
   nJet30_total__96->GetXaxis()->SetLabelFont(42);
   nJet30_total__96->GetXaxis()->SetLabelOffset(0.015);
   nJet30_total__96->GetXaxis()->SetLabelSize(0.1);
   nJet30_total__96->GetXaxis()->SetTitleSize(0.14);
   nJet30_total__96->GetXaxis()->SetTitleFont(42);
   nJet30_total__96->GetYaxis()->SetTitle("Data/pred.");
   nJet30_total__96->GetYaxis()->SetDecimals();
   nJet30_total__96->GetYaxis()->SetNdivisions(505);
   nJet30_total__96->GetYaxis()->SetLabelFont(42);
   nJet30_total__96->GetYaxis()->SetLabelOffset(0.01);
   nJet30_total__96->GetYaxis()->SetLabelSize(0.11);
   nJet30_total__96->GetYaxis()->SetTitleSize(0.14);
   nJet30_total__96->GetYaxis()->SetTitleOffset(0.62);
   nJet30_total__96->GetYaxis()->SetTitleFont(42);
   nJet30_total__96->GetZaxis()->SetLabelFont(42);
   nJet30_total__96->GetZaxis()->SetLabelOffset(0.007);
   nJet30_total__96->GetZaxis()->SetLabelSize(0.05);
   nJet30_total__96->GetZaxis()->SetTitleSize(0.06);
   nJet30_total__96->GetZaxis()->SetTitleFont(42);
   nJet30_total__96->Draw("AXIS SAME");
   TLine *line = new TLine(-0.5,1,8.5,1);
   line->SetLineColor(58);
   line->SetLineWidth(2);
   line->Draw();
   
   Double_t data_div_fx3120[9] = {
   0,
   1,
   2,
   3,
   4,
   5,
   6,
   7,
   8};
   Double_t data_div_fy3120[9] = {
   0.8109002,
   1.062909,
   1.783658,
   2.466598,
   2.510355,
   1.335551,
   19.11532,
   15.0389,
   0};
   Double_t data_div_felx3120[9] = {
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5};
   Double_t data_div_fely3120[9] = {
   0.02946679,
   0.05190689,
   0.1232821,
   0.2639432,
   0.4634664,
   0.5768843,
   7.582311,
   12.44097,
   0};
   Double_t data_div_fehx3120[9] = {
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5};
   Double_t data_div_fehy3120[9] = {
   0.03055751,
   0.05450578,
   0.1321122,
   0.2938189,
   0.5580911,
   0.9035106,
   11.4173,
   34.583,
   20.35484};
   grae = new TGraphAsymmErrors(9,data_div_fx3120,data_div_fy3120,data_div_felx3120,data_div_fehx3120,data_div_fely3120,data_div_fehy3120);
   grae->SetName("data_div");
   grae->SetTitle("Graph");
   grae->SetFillStyle(1000);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.1);
   
   TH1F *Graph_nJet30_data_graph3120 = new TH1F("Graph_nJet30_data_graph3120","Graph",100,-1.4,9.4);
   Graph_nJet30_data_graph3120->SetMinimum(0);
   Graph_nJet30_data_graph3120->SetMaximum(864.079);
   Graph_nJet30_data_graph3120->SetDirectory(0);
   Graph_nJet30_data_graph3120->SetStats(0);
   Graph_nJet30_data_graph3120->SetLineStyle(0);
   Graph_nJet30_data_graph3120->SetMarkerStyle(20);
   Graph_nJet30_data_graph3120->GetXaxis()->SetLabelFont(42);
   Graph_nJet30_data_graph3120->GetXaxis()->SetLabelOffset(0.007);
   Graph_nJet30_data_graph3120->GetXaxis()->SetLabelSize(0.05);
   Graph_nJet30_data_graph3120->GetXaxis()->SetTitleSize(0.06);
   Graph_nJet30_data_graph3120->GetXaxis()->SetTitleOffset(0.9);
   Graph_nJet30_data_graph3120->GetXaxis()->SetTitleFont(42);
   Graph_nJet30_data_graph3120->GetYaxis()->SetLabelFont(42);
   Graph_nJet30_data_graph3120->GetYaxis()->SetLabelOffset(0.007);
   Graph_nJet30_data_graph3120->GetYaxis()->SetLabelSize(0.05);
   Graph_nJet30_data_graph3120->GetYaxis()->SetTitleSize(0.06);
   Graph_nJet30_data_graph3120->GetYaxis()->SetTitleOffset(1.35);
   Graph_nJet30_data_graph3120->GetYaxis()->SetTitleFont(42);
   Graph_nJet30_data_graph3120->GetZaxis()->SetLabelFont(42);
   Graph_nJet30_data_graph3120->GetZaxis()->SetLabelOffset(0.007);
   Graph_nJet30_data_graph3120->GetZaxis()->SetLabelSize(0.05);
   Graph_nJet30_data_graph3120->GetZaxis()->SetTitleSize(0.06);
   Graph_nJet30_data_graph3120->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_nJet30_data_graph3120);
   
   grae->Draw("pz ");
   
   leg = new TLegend(0,0,0,0,NULL,"brNDC");
   leg->SetBorderSize(1);
   leg->SetTextSize(0.084);
   leg->SetLineColor(0);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   entry=leg->AddEntry("nJet30_total_errors","stat. unc.","F");
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
   entry=leg->AddEntry("nJet30_total_errors","total unc.","F");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   leg->Draw();
   pad2->Modified();
   nJet30_canvas->cd();
   nJet30_canvas->Modified();
   nJet30_canvas->cd();
   nJet30_canvas->SetSelected(nJet30_canvas);
}
