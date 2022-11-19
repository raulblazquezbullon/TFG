void charge3l_eee3TC()
{
//=========Macro generated from canvas: charge3l_eee3TC_canvas/charge3l_eee3TC
//=========  (Fri Nov 18 13:12:59 2022) by ROOT version 6.12/07
   TCanvas *charge3l_eee3TC_canvas = new TCanvas("charge3l_eee3TC_canvas", "charge3l_eee3TC",0,0,600,750);
   gStyle->SetOptFit(1);
   gStyle->SetOptStat(0);
   gStyle->SetOptTitle(0);
   charge3l_eee3TC_canvas->SetHighLightColor(2);
   charge3l_eee3TC_canvas->Range(0,0,1,1);
   charge3l_eee3TC_canvas->SetFillColor(0);
   charge3l_eee3TC_canvas->SetBorderMode(0);
   charge3l_eee3TC_canvas->SetBorderSize(2);
   charge3l_eee3TC_canvas->SetTickx(1);
   charge3l_eee3TC_canvas->SetTicky(1);
   charge3l_eee3TC_canvas->SetLeftMargin(0.18);
   charge3l_eee3TC_canvas->SetRightMargin(0.04);
   charge3l_eee3TC_canvas->SetBottomMargin(0.13);
   charge3l_eee3TC_canvas->SetFrameFillStyle(0);
   charge3l_eee3TC_canvas->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: pad1
   TPad *pad1 = new TPad("pad1", "pad1",0,0.3,1,1);
   pad1->Draw();
   pad1->cd();
   pad1->Range(-5.115385,-70.51435,3.858974,2750.06);
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
   
   TH1D *charge3l_eee3TC_total__137 = new TH1D("charge3l_eee3TC_total__137","dummy",7,-3.5,3.5);
   charge3l_eee3TC_total__137->SetBinContent(3,635.6694);
   charge3l_eee3TC_total__137->SetBinContent(5,860.2751);
   charge3l_eee3TC_total__137->SetBinError(3,12.80119);
   charge3l_eee3TC_total__137->SetBinError(5,12.94202);
   charge3l_eee3TC_total__137->SetMinimum(0);
   charge3l_eee3TC_total__137->SetMaximum(2580.825);
   charge3l_eee3TC_total__137->SetEntries(15152);
   charge3l_eee3TC_total__137->SetDirectory(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#00cc00");
   charge3l_eee3TC_total__137->SetFillColor(ci);
   charge3l_eee3TC_total__137->SetMarkerStyle(20);
   charge3l_eee3TC_total__137->SetMarkerSize(1.1);
   charge3l_eee3TC_total__137->GetXaxis()->SetTitle("charge");
   charge3l_eee3TC_total__137->GetXaxis()->SetMoreLogLabels();
   charge3l_eee3TC_total__137->GetXaxis()->SetLabelFont(42);
   charge3l_eee3TC_total__137->GetXaxis()->SetLabelOffset(999);
   charge3l_eee3TC_total__137->GetXaxis()->SetLabelSize(0.05);
   charge3l_eee3TC_total__137->GetXaxis()->SetTitleSize(0.05);
   charge3l_eee3TC_total__137->GetXaxis()->SetTitleOffset(999);
   charge3l_eee3TC_total__137->GetXaxis()->SetTitleFont(42);
   charge3l_eee3TC_total__137->GetYaxis()->SetTitle("Events");
   charge3l_eee3TC_total__137->GetYaxis()->SetLabelFont(42);
   charge3l_eee3TC_total__137->GetYaxis()->SetLabelOffset(0.007);
   charge3l_eee3TC_total__137->GetYaxis()->SetLabelSize(0.05);
   charge3l_eee3TC_total__137->GetYaxis()->SetTitleSize(0.06);
   charge3l_eee3TC_total__137->GetYaxis()->SetTitleOffset(1.48);
   charge3l_eee3TC_total__137->GetYaxis()->SetTitleFont(42);
   charge3l_eee3TC_total__137->GetZaxis()->SetLabelFont(42);
   charge3l_eee3TC_total__137->GetZaxis()->SetLabelOffset(0.007);
   charge3l_eee3TC_total__137->GetZaxis()->SetLabelSize(0.05);
   charge3l_eee3TC_total__137->GetZaxis()->SetTitleSize(0.06);
   charge3l_eee3TC_total__137->GetZaxis()->SetTitleFont(42);
   charge3l_eee3TC_total__137->Draw("HIST");
   
   THStack *charge3l_eee3TC_stack = new THStack();
   charge3l_eee3TC_stack->SetName("charge3l_eee3TC_stack");
   charge3l_eee3TC_stack->SetTitle("charge3l_eee3TC");
   
   TH1F *charge3l_eee3TC_stack_stack_35 = new TH1F("charge3l_eee3TC_stack_stack_35","charge3l_eee3TC",7,-3.5,3.5);
   charge3l_eee3TC_stack_stack_35->SetMinimum(0);
   charge3l_eee3TC_stack_stack_35->SetMaximum(903.2889);
   charge3l_eee3TC_stack_stack_35->SetDirectory(0);
   charge3l_eee3TC_stack_stack_35->SetStats(0);
   charge3l_eee3TC_stack_stack_35->SetLineStyle(0);
   charge3l_eee3TC_stack_stack_35->SetMarkerStyle(20);
   charge3l_eee3TC_stack_stack_35->GetXaxis()->SetLabelFont(42);
   charge3l_eee3TC_stack_stack_35->GetXaxis()->SetLabelOffset(0.007);
   charge3l_eee3TC_stack_stack_35->GetXaxis()->SetLabelSize(0.05);
   charge3l_eee3TC_stack_stack_35->GetXaxis()->SetTitleSize(0.06);
   charge3l_eee3TC_stack_stack_35->GetXaxis()->SetTitleOffset(0.9);
   charge3l_eee3TC_stack_stack_35->GetXaxis()->SetTitleFont(42);
   charge3l_eee3TC_stack_stack_35->GetYaxis()->SetLabelFont(42);
   charge3l_eee3TC_stack_stack_35->GetYaxis()->SetLabelOffset(0.007);
   charge3l_eee3TC_stack_stack_35->GetYaxis()->SetLabelSize(0.05);
   charge3l_eee3TC_stack_stack_35->GetYaxis()->SetTitleSize(0.06);
   charge3l_eee3TC_stack_stack_35->GetYaxis()->SetTitleOffset(1.35);
   charge3l_eee3TC_stack_stack_35->GetYaxis()->SetTitleFont(42);
   charge3l_eee3TC_stack_stack_35->GetZaxis()->SetLabelFont(42);
   charge3l_eee3TC_stack_stack_35->GetZaxis()->SetLabelOffset(0.007);
   charge3l_eee3TC_stack_stack_35->GetZaxis()->SetLabelSize(0.05);
   charge3l_eee3TC_stack_stack_35->GetZaxis()->SetTitleSize(0.06);
   charge3l_eee3TC_stack_stack_35->GetZaxis()->SetTitleFont(42);
   charge3l_eee3TC_stack->SetHistogram(charge3l_eee3TC_stack_stack_35);
   
   
   TH1D *charge3l_eee3TC_fakes_VV_stack_1 = new TH1D("charge3l_eee3TC_fakes_VV_stack_1","dummy",7,-3.5,3.5);
   charge3l_eee3TC_fakes_VV_stack_1->SetBinContent(3,0.4859669);
   charge3l_eee3TC_fakes_VV_stack_1->SetBinContent(5,0.1943867);
   charge3l_eee3TC_fakes_VV_stack_1->SetBinError(3,0.217331);
   charge3l_eee3TC_fakes_VV_stack_1->SetBinError(5,0.1374522);
   charge3l_eee3TC_fakes_VV_stack_1->SetEntries(11);

   ci = TColor::GetColor("#2e3294");
   charge3l_eee3TC_fakes_VV_stack_1->SetFillColor(ci);
   charge3l_eee3TC_fakes_VV_stack_1->SetMarkerStyle(0);
   charge3l_eee3TC_fakes_VV_stack_1->SetMarkerSize(1.1);
   charge3l_eee3TC_fakes_VV_stack_1->GetXaxis()->SetTitle("charge");
   charge3l_eee3TC_fakes_VV_stack_1->GetXaxis()->SetMoreLogLabels();
   charge3l_eee3TC_fakes_VV_stack_1->GetXaxis()->SetLabelFont(42);
   charge3l_eee3TC_fakes_VV_stack_1->GetXaxis()->SetLabelOffset(0.007);
   charge3l_eee3TC_fakes_VV_stack_1->GetXaxis()->SetLabelSize(0.05);
   charge3l_eee3TC_fakes_VV_stack_1->GetXaxis()->SetTitleSize(0.06);
   charge3l_eee3TC_fakes_VV_stack_1->GetXaxis()->SetTitleOffset(0.9);
   charge3l_eee3TC_fakes_VV_stack_1->GetXaxis()->SetTitleFont(42);
   charge3l_eee3TC_fakes_VV_stack_1->GetYaxis()->SetTitle("Events");
   charge3l_eee3TC_fakes_VV_stack_1->GetYaxis()->SetLabelFont(42);
   charge3l_eee3TC_fakes_VV_stack_1->GetYaxis()->SetLabelOffset(0.007);
   charge3l_eee3TC_fakes_VV_stack_1->GetYaxis()->SetLabelSize(0.05);
   charge3l_eee3TC_fakes_VV_stack_1->GetYaxis()->SetTitleSize(0.06);
   charge3l_eee3TC_fakes_VV_stack_1->GetYaxis()->SetTitleOffset(1.35);
   charge3l_eee3TC_fakes_VV_stack_1->GetYaxis()->SetTitleFont(42);
   charge3l_eee3TC_fakes_VV_stack_1->GetZaxis()->SetLabelFont(42);
   charge3l_eee3TC_fakes_VV_stack_1->GetZaxis()->SetLabelOffset(0.007);
   charge3l_eee3TC_fakes_VV_stack_1->GetZaxis()->SetLabelSize(0.05);
   charge3l_eee3TC_fakes_VV_stack_1->GetZaxis()->SetTitleSize(0.06);
   charge3l_eee3TC_fakes_VV_stack_1->GetZaxis()->SetTitleFont(42);
   charge3l_eee3TC_stack->Add(charge3l_eee3TC_fakes_VV_stack_1,"");
   
   TH1D *charge3l_eee3TC_fakes_TT_stack_2 = new TH1D("charge3l_eee3TC_fakes_TT_stack_2","dummy",7,-3.5,3.5);
   charge3l_eee3TC_fakes_TT_stack_2->SetBinContent(3,26.2027);
   charge3l_eee3TC_fakes_TT_stack_2->SetBinContent(5,28.84163);
   charge3l_eee3TC_fakes_TT_stack_2->SetBinError(3,1.34235);
   charge3l_eee3TC_fakes_TT_stack_2->SetBinError(5,1.392222);
   charge3l_eee3TC_fakes_TT_stack_2->SetEntries(841);

   ci = TColor::GetColor("#666666");
   charge3l_eee3TC_fakes_TT_stack_2->SetFillColor(ci);
   charge3l_eee3TC_fakes_TT_stack_2->SetMarkerStyle(0);
   charge3l_eee3TC_fakes_TT_stack_2->SetMarkerSize(1.1);
   charge3l_eee3TC_fakes_TT_stack_2->GetXaxis()->SetTitle("charge");
   charge3l_eee3TC_fakes_TT_stack_2->GetXaxis()->SetMoreLogLabels();
   charge3l_eee3TC_fakes_TT_stack_2->GetXaxis()->SetLabelFont(42);
   charge3l_eee3TC_fakes_TT_stack_2->GetXaxis()->SetLabelOffset(0.007);
   charge3l_eee3TC_fakes_TT_stack_2->GetXaxis()->SetLabelSize(0.05);
   charge3l_eee3TC_fakes_TT_stack_2->GetXaxis()->SetTitleSize(0.06);
   charge3l_eee3TC_fakes_TT_stack_2->GetXaxis()->SetTitleOffset(0.9);
   charge3l_eee3TC_fakes_TT_stack_2->GetXaxis()->SetTitleFont(42);
   charge3l_eee3TC_fakes_TT_stack_2->GetYaxis()->SetTitle("Events");
   charge3l_eee3TC_fakes_TT_stack_2->GetYaxis()->SetLabelFont(42);
   charge3l_eee3TC_fakes_TT_stack_2->GetYaxis()->SetLabelOffset(0.007);
   charge3l_eee3TC_fakes_TT_stack_2->GetYaxis()->SetLabelSize(0.05);
   charge3l_eee3TC_fakes_TT_stack_2->GetYaxis()->SetTitleSize(0.06);
   charge3l_eee3TC_fakes_TT_stack_2->GetYaxis()->SetTitleOffset(1.35);
   charge3l_eee3TC_fakes_TT_stack_2->GetYaxis()->SetTitleFont(42);
   charge3l_eee3TC_fakes_TT_stack_2->GetZaxis()->SetLabelFont(42);
   charge3l_eee3TC_fakes_TT_stack_2->GetZaxis()->SetLabelOffset(0.007);
   charge3l_eee3TC_fakes_TT_stack_2->GetZaxis()->SetLabelSize(0.05);
   charge3l_eee3TC_fakes_TT_stack_2->GetZaxis()->SetTitleSize(0.06);
   charge3l_eee3TC_fakes_TT_stack_2->GetZaxis()->SetTitleFont(42);
   charge3l_eee3TC_stack->Add(charge3l_eee3TC_fakes_TT_stack_2,"");
   
   TH1D *charge3l_eee3TC_fakes_DY_stack_3 = new TH1D("charge3l_eee3TC_fakes_DY_stack_3","dummy",7,-3.5,3.5);
   charge3l_eee3TC_fakes_DY_stack_3->SetBinContent(3,63.62232);
   charge3l_eee3TC_fakes_DY_stack_3->SetBinContent(5,53.30519);
   charge3l_eee3TC_fakes_DY_stack_3->SetBinError(3,10.45944);
   charge3l_eee3TC_fakes_DY_stack_3->SetBinError(5,9.573894);
   charge3l_eee3TC_fakes_DY_stack_3->SetEntries(72);

   ci = TColor::GetColor("#cccccc");
   charge3l_eee3TC_fakes_DY_stack_3->SetFillColor(ci);
   charge3l_eee3TC_fakes_DY_stack_3->SetMarkerStyle(0);
   charge3l_eee3TC_fakes_DY_stack_3->SetMarkerSize(1.1);
   charge3l_eee3TC_fakes_DY_stack_3->GetXaxis()->SetTitle("charge");
   charge3l_eee3TC_fakes_DY_stack_3->GetXaxis()->SetMoreLogLabels();
   charge3l_eee3TC_fakes_DY_stack_3->GetXaxis()->SetLabelFont(42);
   charge3l_eee3TC_fakes_DY_stack_3->GetXaxis()->SetLabelOffset(0.007);
   charge3l_eee3TC_fakes_DY_stack_3->GetXaxis()->SetLabelSize(0.05);
   charge3l_eee3TC_fakes_DY_stack_3->GetXaxis()->SetTitleSize(0.06);
   charge3l_eee3TC_fakes_DY_stack_3->GetXaxis()->SetTitleOffset(0.9);
   charge3l_eee3TC_fakes_DY_stack_3->GetXaxis()->SetTitleFont(42);
   charge3l_eee3TC_fakes_DY_stack_3->GetYaxis()->SetTitle("Events");
   charge3l_eee3TC_fakes_DY_stack_3->GetYaxis()->SetLabelFont(42);
   charge3l_eee3TC_fakes_DY_stack_3->GetYaxis()->SetLabelOffset(0.007);
   charge3l_eee3TC_fakes_DY_stack_3->GetYaxis()->SetLabelSize(0.05);
   charge3l_eee3TC_fakes_DY_stack_3->GetYaxis()->SetTitleSize(0.06);
   charge3l_eee3TC_fakes_DY_stack_3->GetYaxis()->SetTitleOffset(1.35);
   charge3l_eee3TC_fakes_DY_stack_3->GetYaxis()->SetTitleFont(42);
   charge3l_eee3TC_fakes_DY_stack_3->GetZaxis()->SetLabelFont(42);
   charge3l_eee3TC_fakes_DY_stack_3->GetZaxis()->SetLabelOffset(0.007);
   charge3l_eee3TC_fakes_DY_stack_3->GetZaxis()->SetLabelSize(0.05);
   charge3l_eee3TC_fakes_DY_stack_3->GetZaxis()->SetTitleSize(0.06);
   charge3l_eee3TC_fakes_DY_stack_3->GetZaxis()->SetTitleFont(42);
   charge3l_eee3TC_stack->Add(charge3l_eee3TC_fakes_DY_stack_3,"");
   
   TH1D *charge3l_eee3TC_prompt_ZZ_stack_4 = new TH1D("charge3l_eee3TC_prompt_ZZ_stack_4","dummy",7,-3.5,3.5);
   charge3l_eee3TC_prompt_ZZ_stack_4->SetBinContent(3,35.41268);
   charge3l_eee3TC_prompt_ZZ_stack_4->SetBinContent(5,37.79799);
   charge3l_eee3TC_prompt_ZZ_stack_4->SetBinError(3,2.549061);
   charge3l_eee3TC_prompt_ZZ_stack_4->SetBinError(5,2.633511);
   charge3l_eee3TC_prompt_ZZ_stack_4->SetEntries(403);

   ci = TColor::GetColor("#00cc00");
   charge3l_eee3TC_prompt_ZZ_stack_4->SetFillColor(ci);
   charge3l_eee3TC_prompt_ZZ_stack_4->SetMarkerStyle(0);
   charge3l_eee3TC_prompt_ZZ_stack_4->SetMarkerSize(1.1);
   charge3l_eee3TC_prompt_ZZ_stack_4->GetXaxis()->SetTitle("charge");
   charge3l_eee3TC_prompt_ZZ_stack_4->GetXaxis()->SetMoreLogLabels();
   charge3l_eee3TC_prompt_ZZ_stack_4->GetXaxis()->SetLabelFont(42);
   charge3l_eee3TC_prompt_ZZ_stack_4->GetXaxis()->SetLabelOffset(0.007);
   charge3l_eee3TC_prompt_ZZ_stack_4->GetXaxis()->SetLabelSize(0.05);
   charge3l_eee3TC_prompt_ZZ_stack_4->GetXaxis()->SetTitleSize(0.06);
   charge3l_eee3TC_prompt_ZZ_stack_4->GetXaxis()->SetTitleOffset(0.9);
   charge3l_eee3TC_prompt_ZZ_stack_4->GetXaxis()->SetTitleFont(42);
   charge3l_eee3TC_prompt_ZZ_stack_4->GetYaxis()->SetTitle("Events");
   charge3l_eee3TC_prompt_ZZ_stack_4->GetYaxis()->SetLabelFont(42);
   charge3l_eee3TC_prompt_ZZ_stack_4->GetYaxis()->SetLabelOffset(0.007);
   charge3l_eee3TC_prompt_ZZ_stack_4->GetYaxis()->SetLabelSize(0.05);
   charge3l_eee3TC_prompt_ZZ_stack_4->GetYaxis()->SetTitleSize(0.06);
   charge3l_eee3TC_prompt_ZZ_stack_4->GetYaxis()->SetTitleOffset(1.35);
   charge3l_eee3TC_prompt_ZZ_stack_4->GetYaxis()->SetTitleFont(42);
   charge3l_eee3TC_prompt_ZZ_stack_4->GetZaxis()->SetLabelFont(42);
   charge3l_eee3TC_prompt_ZZ_stack_4->GetZaxis()->SetLabelOffset(0.007);
   charge3l_eee3TC_prompt_ZZ_stack_4->GetZaxis()->SetLabelSize(0.05);
   charge3l_eee3TC_prompt_ZZ_stack_4->GetZaxis()->SetTitleSize(0.06);
   charge3l_eee3TC_prompt_ZZ_stack_4->GetZaxis()->SetTitleFont(42);
   charge3l_eee3TC_stack->Add(charge3l_eee3TC_prompt_ZZ_stack_4,"");
   
   TH1D *charge3l_eee3TC_prompt_WZ_stack_5 = new TH1D("charge3l_eee3TC_prompt_WZ_stack_5","dummy",7,-3.5,3.5);
   charge3l_eee3TC_prompt_WZ_stack_5->SetBinContent(3,509.9458);
   charge3l_eee3TC_prompt_WZ_stack_5->SetBinContent(5,740.1359);
   charge3l_eee3TC_prompt_WZ_stack_5->SetBinError(3,6.791434);
   charge3l_eee3TC_prompt_WZ_stack_5->SetBinError(5,8.181919);
   charge3l_eee3TC_prompt_WZ_stack_5->SetEntries(13825);

   ci = TColor::GetColor("#ffcc00");
   charge3l_eee3TC_prompt_WZ_stack_5->SetFillColor(ci);
   charge3l_eee3TC_prompt_WZ_stack_5->SetMarkerStyle(0);
   charge3l_eee3TC_prompt_WZ_stack_5->SetMarkerSize(1.1);
   charge3l_eee3TC_prompt_WZ_stack_5->GetXaxis()->SetTitle("charge");
   charge3l_eee3TC_prompt_WZ_stack_5->GetXaxis()->SetMoreLogLabels();
   charge3l_eee3TC_prompt_WZ_stack_5->GetXaxis()->SetLabelFont(42);
   charge3l_eee3TC_prompt_WZ_stack_5->GetXaxis()->SetLabelOffset(0.007);
   charge3l_eee3TC_prompt_WZ_stack_5->GetXaxis()->SetLabelSize(0.05);
   charge3l_eee3TC_prompt_WZ_stack_5->GetXaxis()->SetTitleSize(0.06);
   charge3l_eee3TC_prompt_WZ_stack_5->GetXaxis()->SetTitleOffset(0.9);
   charge3l_eee3TC_prompt_WZ_stack_5->GetXaxis()->SetTitleFont(42);
   charge3l_eee3TC_prompt_WZ_stack_5->GetYaxis()->SetTitle("Events");
   charge3l_eee3TC_prompt_WZ_stack_5->GetYaxis()->SetLabelFont(42);
   charge3l_eee3TC_prompt_WZ_stack_5->GetYaxis()->SetLabelOffset(0.007);
   charge3l_eee3TC_prompt_WZ_stack_5->GetYaxis()->SetLabelSize(0.05);
   charge3l_eee3TC_prompt_WZ_stack_5->GetYaxis()->SetTitleSize(0.06);
   charge3l_eee3TC_prompt_WZ_stack_5->GetYaxis()->SetTitleOffset(1.35);
   charge3l_eee3TC_prompt_WZ_stack_5->GetYaxis()->SetTitleFont(42);
   charge3l_eee3TC_prompt_WZ_stack_5->GetZaxis()->SetLabelFont(42);
   charge3l_eee3TC_prompt_WZ_stack_5->GetZaxis()->SetLabelOffset(0.007);
   charge3l_eee3TC_prompt_WZ_stack_5->GetZaxis()->SetLabelSize(0.05);
   charge3l_eee3TC_prompt_WZ_stack_5->GetZaxis()->SetTitleSize(0.06);
   charge3l_eee3TC_prompt_WZ_stack_5->GetZaxis()->SetTitleFont(42);
   charge3l_eee3TC_stack->Add(charge3l_eee3TC_prompt_WZ_stack_5,"");
   charge3l_eee3TC_stack->Draw("same hist");
   
   TH1D *charge3l_eee3TC_total__138 = new TH1D("charge3l_eee3TC_total__138","dummy",7,-3.5,3.5);
   charge3l_eee3TC_total__138->SetBinContent(3,635.6694);
   charge3l_eee3TC_total__138->SetBinContent(5,860.2751);
   charge3l_eee3TC_total__138->SetBinError(3,12.80119);
   charge3l_eee3TC_total__138->SetBinError(5,12.94202);
   charge3l_eee3TC_total__138->SetMinimum(0);
   charge3l_eee3TC_total__138->SetMaximum(2580.825);
   charge3l_eee3TC_total__138->SetEntries(15152);
   charge3l_eee3TC_total__138->SetDirectory(0);

   ci = TColor::GetColor("#00cc00");
   charge3l_eee3TC_total__138->SetFillColor(ci);
   charge3l_eee3TC_total__138->SetMarkerStyle(20);
   charge3l_eee3TC_total__138->SetMarkerSize(1.1);
   charge3l_eee3TC_total__138->GetXaxis()->SetTitle("charge");
   charge3l_eee3TC_total__138->GetXaxis()->SetMoreLogLabels();
   charge3l_eee3TC_total__138->GetXaxis()->SetLabelFont(42);
   charge3l_eee3TC_total__138->GetXaxis()->SetLabelOffset(999);
   charge3l_eee3TC_total__138->GetXaxis()->SetLabelSize(0.05);
   charge3l_eee3TC_total__138->GetXaxis()->SetTitleSize(0.05);
   charge3l_eee3TC_total__138->GetXaxis()->SetTitleOffset(999);
   charge3l_eee3TC_total__138->GetXaxis()->SetTitleFont(42);
   charge3l_eee3TC_total__138->GetYaxis()->SetTitle("Events");
   charge3l_eee3TC_total__138->GetYaxis()->SetLabelFont(42);
   charge3l_eee3TC_total__138->GetYaxis()->SetLabelOffset(0.007);
   charge3l_eee3TC_total__138->GetYaxis()->SetLabelSize(0.05);
   charge3l_eee3TC_total__138->GetYaxis()->SetTitleSize(0.06);
   charge3l_eee3TC_total__138->GetYaxis()->SetTitleOffset(1.48);
   charge3l_eee3TC_total__138->GetYaxis()->SetTitleFont(42);
   charge3l_eee3TC_total__138->GetZaxis()->SetLabelFont(42);
   charge3l_eee3TC_total__138->GetZaxis()->SetLabelOffset(0.007);
   charge3l_eee3TC_total__138->GetZaxis()->SetLabelSize(0.05);
   charge3l_eee3TC_total__138->GetZaxis()->SetTitleSize(0.06);
   charge3l_eee3TC_total__138->GetZaxis()->SetTitleFont(42);
   charge3l_eee3TC_total__138->Draw("AXIS SAME");
   
   Double_t charge3l_eee3TC_total_errors_fx3171[2] = {
   -1,
   1};
   Double_t charge3l_eee3TC_total_errors_fy3171[2] = {
   635.6694,
   860.2751};
   Double_t charge3l_eee3TC_total_errors_felx3171[2] = {
   0.5,
   0.5};
   Double_t charge3l_eee3TC_total_errors_fely3171[2] = {
   12.80119,
   12.94202};
   Double_t charge3l_eee3TC_total_errors_fehx3171[2] = {
   0.5,
   0.5};
   Double_t charge3l_eee3TC_total_errors_fehy3171[2] = {
   12.80119,
   12.94202};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(2,charge3l_eee3TC_total_errors_fx3171,charge3l_eee3TC_total_errors_fy3171,charge3l_eee3TC_total_errors_felx3171,charge3l_eee3TC_total_errors_fehx3171,charge3l_eee3TC_total_errors_fely3171,charge3l_eee3TC_total_errors_fehy3171);
   grae->SetName("charge3l_eee3TC_total_errors");
   grae->SetTitle("Graph");
   grae->SetFillColor(1);
   grae->SetFillStyle(3013);
   grae->SetMarkerStyle(0);
   
   TH1F *Graph_charge3l_eee3TC_total_errors3171 = new TH1F("Graph_charge3l_eee3TC_total_errors3171","Graph",100,-1.8,1.8);
   Graph_charge3l_eee3TC_total_errors3171->SetMinimum(597.8334);
   Graph_charge3l_eee3TC_total_errors3171->SetMaximum(898.252);
   Graph_charge3l_eee3TC_total_errors3171->SetDirectory(0);
   Graph_charge3l_eee3TC_total_errors3171->SetStats(0);
   Graph_charge3l_eee3TC_total_errors3171->SetLineStyle(0);
   Graph_charge3l_eee3TC_total_errors3171->SetMarkerStyle(20);
   Graph_charge3l_eee3TC_total_errors3171->GetXaxis()->SetLabelFont(42);
   Graph_charge3l_eee3TC_total_errors3171->GetXaxis()->SetLabelOffset(0.007);
   Graph_charge3l_eee3TC_total_errors3171->GetXaxis()->SetLabelSize(0.05);
   Graph_charge3l_eee3TC_total_errors3171->GetXaxis()->SetTitleSize(0.06);
   Graph_charge3l_eee3TC_total_errors3171->GetXaxis()->SetTitleOffset(0.9);
   Graph_charge3l_eee3TC_total_errors3171->GetXaxis()->SetTitleFont(42);
   Graph_charge3l_eee3TC_total_errors3171->GetYaxis()->SetLabelFont(42);
   Graph_charge3l_eee3TC_total_errors3171->GetYaxis()->SetLabelOffset(0.007);
   Graph_charge3l_eee3TC_total_errors3171->GetYaxis()->SetLabelSize(0.05);
   Graph_charge3l_eee3TC_total_errors3171->GetYaxis()->SetTitleSize(0.06);
   Graph_charge3l_eee3TC_total_errors3171->GetYaxis()->SetTitleOffset(1.35);
   Graph_charge3l_eee3TC_total_errors3171->GetYaxis()->SetTitleFont(42);
   Graph_charge3l_eee3TC_total_errors3171->GetZaxis()->SetLabelFont(42);
   Graph_charge3l_eee3TC_total_errors3171->GetZaxis()->SetLabelOffset(0.007);
   Graph_charge3l_eee3TC_total_errors3171->GetZaxis()->SetLabelSize(0.05);
   Graph_charge3l_eee3TC_total_errors3171->GetZaxis()->SetTitleSize(0.06);
   Graph_charge3l_eee3TC_total_errors3171->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_charge3l_eee3TC_total_errors3171);
   
   grae->Draw("pe2 ");
   
   Double_t charge3l_eee3TC_data_graph_fx3172[7] = {
   -3,
   -2,
   -1,
   0,
   1,
   2,
   3};
   Double_t charge3l_eee3TC_data_graph_fy3172[7] = {
   0,
   0,
   647,
   0,
   866,
   0,
   0};
   Double_t charge3l_eee3TC_data_graph_felx3172[7] = {
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5};
   Double_t charge3l_eee3TC_data_graph_fely3172[7] = {
   0,
   0,
   25.43017,
   0,
   29.42283,
   0,
   0};
   Double_t charge3l_eee3TC_data_graph_fehx3172[7] = {
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5};
   Double_t charge3l_eee3TC_data_graph_fehy3172[7] = {
   1.841055,
   1.841055,
   26.44988,
   1.841055,
   30.43987,
   1.841055,
   1.841055};
   grae = new TGraphAsymmErrors(7,charge3l_eee3TC_data_graph_fx3172,charge3l_eee3TC_data_graph_fy3172,charge3l_eee3TC_data_graph_felx3172,charge3l_eee3TC_data_graph_fehx3172,charge3l_eee3TC_data_graph_fely3172,charge3l_eee3TC_data_graph_fehy3172);
   grae->SetName("charge3l_eee3TC_data_graph");
   grae->SetTitle("Graph");
   grae->SetFillStyle(1000);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.1);
   
   TH1F *Graph_charge3l_eee3TC_data_graph3172 = new TH1F("Graph_charge3l_eee3TC_data_graph3172","Graph",100,-4.2,4.2);
   Graph_charge3l_eee3TC_data_graph3172->SetMinimum(0);
   Graph_charge3l_eee3TC_data_graph3172->SetMaximum(986.0839);
   Graph_charge3l_eee3TC_data_graph3172->SetDirectory(0);
   Graph_charge3l_eee3TC_data_graph3172->SetStats(0);
   Graph_charge3l_eee3TC_data_graph3172->SetLineStyle(0);
   Graph_charge3l_eee3TC_data_graph3172->SetMarkerStyle(20);
   Graph_charge3l_eee3TC_data_graph3172->GetXaxis()->SetLabelFont(42);
   Graph_charge3l_eee3TC_data_graph3172->GetXaxis()->SetLabelOffset(0.007);
   Graph_charge3l_eee3TC_data_graph3172->GetXaxis()->SetLabelSize(0.05);
   Graph_charge3l_eee3TC_data_graph3172->GetXaxis()->SetTitleSize(0.06);
   Graph_charge3l_eee3TC_data_graph3172->GetXaxis()->SetTitleOffset(0.9);
   Graph_charge3l_eee3TC_data_graph3172->GetXaxis()->SetTitleFont(42);
   Graph_charge3l_eee3TC_data_graph3172->GetYaxis()->SetLabelFont(42);
   Graph_charge3l_eee3TC_data_graph3172->GetYaxis()->SetLabelOffset(0.007);
   Graph_charge3l_eee3TC_data_graph3172->GetYaxis()->SetLabelSize(0.05);
   Graph_charge3l_eee3TC_data_graph3172->GetYaxis()->SetTitleSize(0.06);
   Graph_charge3l_eee3TC_data_graph3172->GetYaxis()->SetTitleOffset(1.35);
   Graph_charge3l_eee3TC_data_graph3172->GetYaxis()->SetTitleFont(42);
   Graph_charge3l_eee3TC_data_graph3172->GetZaxis()->SetLabelFont(42);
   Graph_charge3l_eee3TC_data_graph3172->GetZaxis()->SetLabelOffset(0.007);
   Graph_charge3l_eee3TC_data_graph3172->GetZaxis()->SetLabelSize(0.05);
   Graph_charge3l_eee3TC_data_graph3172->GetZaxis()->SetTitleSize(0.06);
   Graph_charge3l_eee3TC_data_graph3172->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_charge3l_eee3TC_data_graph3172);
   
   grae->Draw("pz ");
   
   TLegend *leg = new TLegend(0.2,0.628,0.48,0.91,NULL,"brNDC");
   leg->SetBorderSize(1);
   leg->SetTextSize(0.036);
   leg->SetLineColor(0);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("charge3l_eee3TC_data","Data","LPE");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1.1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("charge3l_eee3TC_prompt_WZ_stack_5","WZ","F");

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
   entry=leg->AddEntry("charge3l_eee3TC_prompt_ZZ_stack_4","qqZZ","F");

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
   entry=leg->AddEntry("charge3l_eee3TC_fakes_DY_stack_3","Fakes DY","F");

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
   entry=leg->AddEntry("charge3l_eee3TC_fakes_TT_stack_2","Fakes TT","F");

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
   entry=leg->AddEntry("charge3l_eee3TC_total_errors","Total unc.","F");
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
   charge3l_eee3TC_canvas->cd();
  
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
   
   TH1D *charge3l_eee3TC_total__139 = new TH1D("charge3l_eee3TC_total__139","dummy",7,-3.5,3.5);
   charge3l_eee3TC_total__139->SetBinContent(3,1);
   charge3l_eee3TC_total__139->SetBinContent(5,1);
   charge3l_eee3TC_total__139->SetMinimum(0.5);
   charge3l_eee3TC_total__139->SetMaximum(2);
   charge3l_eee3TC_total__139->SetEntries(15159);

   ci = TColor::GetColor("#00cc00");
   charge3l_eee3TC_total__139->SetFillColor(ci);

   ci = TColor::GetColor("#6666ff");
   charge3l_eee3TC_total__139->SetMarkerColor(ci);
   charge3l_eee3TC_total__139->SetMarkerSize(1.1);
   charge3l_eee3TC_total__139->GetXaxis()->SetTitle("charge");
   charge3l_eee3TC_total__139->GetXaxis()->SetMoreLogLabels();
   charge3l_eee3TC_total__139->GetXaxis()->SetLabelFont(42);
   charge3l_eee3TC_total__139->GetXaxis()->SetLabelOffset(0.015);
   charge3l_eee3TC_total__139->GetXaxis()->SetLabelSize(0.1);
   charge3l_eee3TC_total__139->GetXaxis()->SetTitleSize(0.14);
   charge3l_eee3TC_total__139->GetXaxis()->SetTitleFont(42);
   charge3l_eee3TC_total__139->GetYaxis()->SetTitle("Data/pred.");
   charge3l_eee3TC_total__139->GetYaxis()->SetDecimals();
   charge3l_eee3TC_total__139->GetYaxis()->SetNdivisions(505);
   charge3l_eee3TC_total__139->GetYaxis()->SetLabelFont(42);
   charge3l_eee3TC_total__139->GetYaxis()->SetLabelOffset(0.01);
   charge3l_eee3TC_total__139->GetYaxis()->SetLabelSize(0.11);
   charge3l_eee3TC_total__139->GetYaxis()->SetTitleSize(0.14);
   charge3l_eee3TC_total__139->GetYaxis()->SetTitleOffset(0.62);
   charge3l_eee3TC_total__139->GetYaxis()->SetTitleFont(42);
   charge3l_eee3TC_total__139->GetZaxis()->SetLabelFont(42);
   charge3l_eee3TC_total__139->GetZaxis()->SetLabelOffset(0.007);
   charge3l_eee3TC_total__139->GetZaxis()->SetLabelSize(0.05);
   charge3l_eee3TC_total__139->GetZaxis()->SetTitleSize(0.06);
   charge3l_eee3TC_total__139->GetZaxis()->SetTitleFont(42);
   charge3l_eee3TC_total__139->Draw("AXIS");
   
   Double_t charge3l_eee3TC_total_errors_fx3173[2] = {
   -1,
   1};
   Double_t charge3l_eee3TC_total_errors_fy3173[2] = {
   1,
   1};
   Double_t charge3l_eee3TC_total_errors_felx3173[2] = {
   0.5,
   0.5};
   Double_t charge3l_eee3TC_total_errors_fely3173[2] = {
   0.02013812,
   0.01504404};
   Double_t charge3l_eee3TC_total_errors_fehx3173[2] = {
   0.5,
   0.5};
   Double_t charge3l_eee3TC_total_errors_fehy3173[2] = {
   0.02013812,
   0.01504404};
   grae = new TGraphAsymmErrors(2,charge3l_eee3TC_total_errors_fx3173,charge3l_eee3TC_total_errors_fy3173,charge3l_eee3TC_total_errors_felx3173,charge3l_eee3TC_total_errors_fehx3173,charge3l_eee3TC_total_errors_fely3173,charge3l_eee3TC_total_errors_fehy3173);
   grae->SetName("charge3l_eee3TC_total_errors");
   grae->SetTitle("Graph");

   ci = TColor::GetColor("#00ffff");
   grae->SetFillColor(ci);

   ci = TColor::GetColor("#00ffff");
   grae->SetMarkerColor(ci);
   grae->Draw("e2");
   
   Double_t charge3l_eee3TC_total_errors_fx3174[2] = {
   -1,
   1};
   Double_t charge3l_eee3TC_total_errors_fy3174[2] = {
   1,
   1};
   Double_t charge3l_eee3TC_total_errors_felx3174[2] = {
   0.5,
   0.5};
   Double_t charge3l_eee3TC_total_errors_fely3174[2] = {
   0.02013812,
   0.01504404};
   Double_t charge3l_eee3TC_total_errors_fehx3174[2] = {
   0.5,
   0.5};
   Double_t charge3l_eee3TC_total_errors_fehy3174[2] = {
   0.02013812,
   0.01504404};
   grae = new TGraphAsymmErrors(2,charge3l_eee3TC_total_errors_fx3174,charge3l_eee3TC_total_errors_fy3174,charge3l_eee3TC_total_errors_felx3174,charge3l_eee3TC_total_errors_fehx3174,charge3l_eee3TC_total_errors_fely3174,charge3l_eee3TC_total_errors_fehy3174);
   grae->SetName("charge3l_eee3TC_total_errors");
   grae->SetTitle("Graph");

   ci = TColor::GetColor("#6666ff");
   grae->SetFillColor(ci);

   ci = TColor::GetColor("#6666ff");
   grae->SetMarkerColor(ci);
   grae->Draw("e2 ");
   
   TH1D *charge3l_eee3TC_total__140 = new TH1D("charge3l_eee3TC_total__140","dummy",7,-3.5,3.5);
   charge3l_eee3TC_total__140->SetBinContent(3,1);
   charge3l_eee3TC_total__140->SetBinContent(5,1);
   charge3l_eee3TC_total__140->SetMinimum(0.5);
   charge3l_eee3TC_total__140->SetMaximum(2);
   charge3l_eee3TC_total__140->SetEntries(15159);

   ci = TColor::GetColor("#00cc00");
   charge3l_eee3TC_total__140->SetFillColor(ci);

   ci = TColor::GetColor("#6666ff");
   charge3l_eee3TC_total__140->SetMarkerColor(ci);
   charge3l_eee3TC_total__140->SetMarkerSize(1.1);
   charge3l_eee3TC_total__140->GetXaxis()->SetTitle("charge");
   charge3l_eee3TC_total__140->GetXaxis()->SetMoreLogLabels();
   charge3l_eee3TC_total__140->GetXaxis()->SetLabelFont(42);
   charge3l_eee3TC_total__140->GetXaxis()->SetLabelOffset(0.015);
   charge3l_eee3TC_total__140->GetXaxis()->SetLabelSize(0.1);
   charge3l_eee3TC_total__140->GetXaxis()->SetTitleSize(0.14);
   charge3l_eee3TC_total__140->GetXaxis()->SetTitleFont(42);
   charge3l_eee3TC_total__140->GetYaxis()->SetTitle("Data/pred.");
   charge3l_eee3TC_total__140->GetYaxis()->SetDecimals();
   charge3l_eee3TC_total__140->GetYaxis()->SetNdivisions(505);
   charge3l_eee3TC_total__140->GetYaxis()->SetLabelFont(42);
   charge3l_eee3TC_total__140->GetYaxis()->SetLabelOffset(0.01);
   charge3l_eee3TC_total__140->GetYaxis()->SetLabelSize(0.11);
   charge3l_eee3TC_total__140->GetYaxis()->SetTitleSize(0.14);
   charge3l_eee3TC_total__140->GetYaxis()->SetTitleOffset(0.62);
   charge3l_eee3TC_total__140->GetYaxis()->SetTitleFont(42);
   charge3l_eee3TC_total__140->GetZaxis()->SetLabelFont(42);
   charge3l_eee3TC_total__140->GetZaxis()->SetLabelOffset(0.007);
   charge3l_eee3TC_total__140->GetZaxis()->SetLabelSize(0.05);
   charge3l_eee3TC_total__140->GetZaxis()->SetTitleSize(0.06);
   charge3l_eee3TC_total__140->GetZaxis()->SetTitleFont(42);
   charge3l_eee3TC_total__140->Draw("AXIS SAME");
   TLine *line = new TLine(-3.5,1,3.5,1);
   line->SetLineColor(58);
   line->SetLineWidth(2);
   line->Draw();
   
   Double_t data_div_fx3175[7] = {
   -3,
   -2,
   -1,
   0,
   1,
   2,
   3};
   Double_t data_div_fy3175[7] = {
   0,
   0,
   1.017825,
   0,
   1.006655,
   0,
   0};
   Double_t data_div_felx3175[7] = {
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5};
   Double_t data_div_fely3175[7] = {
   0,
   0,
   0.04000533,
   0,
   0.03420165,
   0,
   0};
   Double_t data_div_fehx3175[7] = {
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5};
   Double_t data_div_fehy3175[7] = {
   0,
   0,
   0.04160948,
   0,
   0.03538387,
   0,
   0};
   grae = new TGraphAsymmErrors(7,data_div_fx3175,data_div_fy3175,data_div_felx3175,data_div_fehx3175,data_div_fely3175,data_div_fehy3175);
   grae->SetName("data_div");
   grae->SetTitle("Graph");
   grae->SetFillStyle(1000);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.1);
   
   TH1F *Graph_charge3l_eee3TC_data_graph3175 = new TH1F("Graph_charge3l_eee3TC_data_graph3175","Graph",100,-4.2,4.2);
   Graph_charge3l_eee3TC_data_graph3175->SetMinimum(0);
   Graph_charge3l_eee3TC_data_graph3175->SetMaximum(986.0839);
   Graph_charge3l_eee3TC_data_graph3175->SetDirectory(0);
   Graph_charge3l_eee3TC_data_graph3175->SetStats(0);
   Graph_charge3l_eee3TC_data_graph3175->SetLineStyle(0);
   Graph_charge3l_eee3TC_data_graph3175->SetMarkerStyle(20);
   Graph_charge3l_eee3TC_data_graph3175->GetXaxis()->SetLabelFont(42);
   Graph_charge3l_eee3TC_data_graph3175->GetXaxis()->SetLabelOffset(0.007);
   Graph_charge3l_eee3TC_data_graph3175->GetXaxis()->SetLabelSize(0.05);
   Graph_charge3l_eee3TC_data_graph3175->GetXaxis()->SetTitleSize(0.06);
   Graph_charge3l_eee3TC_data_graph3175->GetXaxis()->SetTitleOffset(0.9);
   Graph_charge3l_eee3TC_data_graph3175->GetXaxis()->SetTitleFont(42);
   Graph_charge3l_eee3TC_data_graph3175->GetYaxis()->SetLabelFont(42);
   Graph_charge3l_eee3TC_data_graph3175->GetYaxis()->SetLabelOffset(0.007);
   Graph_charge3l_eee3TC_data_graph3175->GetYaxis()->SetLabelSize(0.05);
   Graph_charge3l_eee3TC_data_graph3175->GetYaxis()->SetTitleSize(0.06);
   Graph_charge3l_eee3TC_data_graph3175->GetYaxis()->SetTitleOffset(1.35);
   Graph_charge3l_eee3TC_data_graph3175->GetYaxis()->SetTitleFont(42);
   Graph_charge3l_eee3TC_data_graph3175->GetZaxis()->SetLabelFont(42);
   Graph_charge3l_eee3TC_data_graph3175->GetZaxis()->SetLabelOffset(0.007);
   Graph_charge3l_eee3TC_data_graph3175->GetZaxis()->SetLabelSize(0.05);
   Graph_charge3l_eee3TC_data_graph3175->GetZaxis()->SetTitleSize(0.06);
   Graph_charge3l_eee3TC_data_graph3175->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_charge3l_eee3TC_data_graph3175);
   
   grae->Draw("pz ");
   
   leg = new TLegend(0,0,0,0,NULL,"brNDC");
   leg->SetBorderSize(1);
   leg->SetTextSize(0.084);
   leg->SetLineColor(0);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   entry=leg->AddEntry("charge3l_eee3TC_total_errors","stat. unc.","F");
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
   entry=leg->AddEntry("charge3l_eee3TC_total_errors","total unc.","F");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   leg->Draw();
   pad2->Modified();
   charge3l_eee3TC_canvas->cd();
   charge3l_eee3TC_canvas->Modified();
   charge3l_eee3TC_canvas->cd();
   charge3l_eee3TC_canvas->SetSelected(charge3l_eee3TC_canvas);
}
