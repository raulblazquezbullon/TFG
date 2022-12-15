void charge3l_sign3TC()
{
//=========Macro generated from canvas: charge3l_sign3TC_canvas/charge3l_sign3TC
//=========  (Thu Dec 15 18:34:08 2022) by ROOT version 6.12/07
   TCanvas *charge3l_sign3TC_canvas = new TCanvas("charge3l_sign3TC_canvas", "charge3l_sign3TC",0,0,600,750);
   gStyle->SetOptFit(1);
   gStyle->SetOptStat(0);
   gStyle->SetOptTitle(0);
   charge3l_sign3TC_canvas->SetHighLightColor(2);
   charge3l_sign3TC_canvas->Range(0,0,1,1);
   charge3l_sign3TC_canvas->SetFillColor(0);
   charge3l_sign3TC_canvas->SetBorderMode(0);
   charge3l_sign3TC_canvas->SetBorderSize(2);
   charge3l_sign3TC_canvas->SetTickx(1);
   charge3l_sign3TC_canvas->SetTicky(1);
   charge3l_sign3TC_canvas->SetLeftMargin(0.18);
   charge3l_sign3TC_canvas->SetRightMargin(0.04);
   charge3l_sign3TC_canvas->SetBottomMargin(0.13);
   charge3l_sign3TC_canvas->SetFrameFillStyle(0);
   charge3l_sign3TC_canvas->SetFrameBorderMode(0);
  
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
   
   TH1D *charge3l_sign3TC_total__133 = new TH1D("charge3l_sign3TC_total__133","dummy",7,-3.5,3.5);
   charge3l_sign3TC_total__133->SetBinContent(3,635.6694);
   charge3l_sign3TC_total__133->SetBinContent(5,860.2751);
   charge3l_sign3TC_total__133->SetBinError(3,12.80119);
   charge3l_sign3TC_total__133->SetBinError(5,12.94202);
   charge3l_sign3TC_total__133->SetMinimum(0);
   charge3l_sign3TC_total__133->SetMaximum(2580.825);
   charge3l_sign3TC_total__133->SetEntries(15152);
   charge3l_sign3TC_total__133->SetDirectory(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#00cc00");
   charge3l_sign3TC_total__133->SetFillColor(ci);
   charge3l_sign3TC_total__133->SetMarkerStyle(20);
   charge3l_sign3TC_total__133->SetMarkerSize(1.1);
   charge3l_sign3TC_total__133->GetXaxis()->SetTitle("charge");
   charge3l_sign3TC_total__133->GetXaxis()->SetMoreLogLabels();
   charge3l_sign3TC_total__133->GetXaxis()->SetLabelFont(42);
   charge3l_sign3TC_total__133->GetXaxis()->SetLabelOffset(999);
   charge3l_sign3TC_total__133->GetXaxis()->SetLabelSize(0.05);
   charge3l_sign3TC_total__133->GetXaxis()->SetTitleSize(0.05);
   charge3l_sign3TC_total__133->GetXaxis()->SetTitleOffset(999);
   charge3l_sign3TC_total__133->GetXaxis()->SetTitleFont(42);
   charge3l_sign3TC_total__133->GetYaxis()->SetTitle("Events");
   charge3l_sign3TC_total__133->GetYaxis()->SetLabelFont(42);
   charge3l_sign3TC_total__133->GetYaxis()->SetLabelOffset(0.007);
   charge3l_sign3TC_total__133->GetYaxis()->SetLabelSize(0.05);
   charge3l_sign3TC_total__133->GetYaxis()->SetTitleSize(0.06);
   charge3l_sign3TC_total__133->GetYaxis()->SetTitleOffset(1.48);
   charge3l_sign3TC_total__133->GetYaxis()->SetTitleFont(42);
   charge3l_sign3TC_total__133->GetZaxis()->SetLabelFont(42);
   charge3l_sign3TC_total__133->GetZaxis()->SetLabelOffset(0.007);
   charge3l_sign3TC_total__133->GetZaxis()->SetLabelSize(0.05);
   charge3l_sign3TC_total__133->GetZaxis()->SetTitleSize(0.06);
   charge3l_sign3TC_total__133->GetZaxis()->SetTitleFont(42);
   charge3l_sign3TC_total__133->Draw("HIST");
   
   THStack *charge3l_sign3TC_stack = new THStack();
   charge3l_sign3TC_stack->SetName("charge3l_sign3TC_stack");
   charge3l_sign3TC_stack->SetTitle("charge3l_sign3TC");
   
   TH1F *charge3l_sign3TC_stack_stack_34 = new TH1F("charge3l_sign3TC_stack_stack_34","charge3l_sign3TC",7,-3.5,3.5);
   charge3l_sign3TC_stack_stack_34->SetMinimum(0);
   charge3l_sign3TC_stack_stack_34->SetMaximum(903.2889);
   charge3l_sign3TC_stack_stack_34->SetDirectory(0);
   charge3l_sign3TC_stack_stack_34->SetStats(0);
   charge3l_sign3TC_stack_stack_34->SetLineStyle(0);
   charge3l_sign3TC_stack_stack_34->SetMarkerStyle(20);
   charge3l_sign3TC_stack_stack_34->GetXaxis()->SetLabelFont(42);
   charge3l_sign3TC_stack_stack_34->GetXaxis()->SetLabelOffset(0.007);
   charge3l_sign3TC_stack_stack_34->GetXaxis()->SetLabelSize(0.05);
   charge3l_sign3TC_stack_stack_34->GetXaxis()->SetTitleSize(0.06);
   charge3l_sign3TC_stack_stack_34->GetXaxis()->SetTitleOffset(0.9);
   charge3l_sign3TC_stack_stack_34->GetXaxis()->SetTitleFont(42);
   charge3l_sign3TC_stack_stack_34->GetYaxis()->SetLabelFont(42);
   charge3l_sign3TC_stack_stack_34->GetYaxis()->SetLabelOffset(0.007);
   charge3l_sign3TC_stack_stack_34->GetYaxis()->SetLabelSize(0.05);
   charge3l_sign3TC_stack_stack_34->GetYaxis()->SetTitleSize(0.06);
   charge3l_sign3TC_stack_stack_34->GetYaxis()->SetTitleOffset(1.35);
   charge3l_sign3TC_stack_stack_34->GetYaxis()->SetTitleFont(42);
   charge3l_sign3TC_stack_stack_34->GetZaxis()->SetLabelFont(42);
   charge3l_sign3TC_stack_stack_34->GetZaxis()->SetLabelOffset(0.007);
   charge3l_sign3TC_stack_stack_34->GetZaxis()->SetLabelSize(0.05);
   charge3l_sign3TC_stack_stack_34->GetZaxis()->SetTitleSize(0.06);
   charge3l_sign3TC_stack_stack_34->GetZaxis()->SetTitleFont(42);
   charge3l_sign3TC_stack->SetHistogram(charge3l_sign3TC_stack_stack_34);
   
   
   TH1D *charge3l_sign3TC_fakes_VV_stack_1 = new TH1D("charge3l_sign3TC_fakes_VV_stack_1","dummy",7,-3.5,3.5);
   charge3l_sign3TC_fakes_VV_stack_1->SetBinContent(3,0.4859669);
   charge3l_sign3TC_fakes_VV_stack_1->SetBinContent(5,0.1943867);
   charge3l_sign3TC_fakes_VV_stack_1->SetBinError(3,0.217331);
   charge3l_sign3TC_fakes_VV_stack_1->SetBinError(5,0.1374522);
   charge3l_sign3TC_fakes_VV_stack_1->SetEntries(11);

   ci = TColor::GetColor("#2e3294");
   charge3l_sign3TC_fakes_VV_stack_1->SetFillColor(ci);
   charge3l_sign3TC_fakes_VV_stack_1->SetMarkerStyle(0);
   charge3l_sign3TC_fakes_VV_stack_1->SetMarkerSize(1.1);
   charge3l_sign3TC_fakes_VV_stack_1->GetXaxis()->SetTitle("charge");
   charge3l_sign3TC_fakes_VV_stack_1->GetXaxis()->SetMoreLogLabels();
   charge3l_sign3TC_fakes_VV_stack_1->GetXaxis()->SetLabelFont(42);
   charge3l_sign3TC_fakes_VV_stack_1->GetXaxis()->SetLabelOffset(0.007);
   charge3l_sign3TC_fakes_VV_stack_1->GetXaxis()->SetLabelSize(0.05);
   charge3l_sign3TC_fakes_VV_stack_1->GetXaxis()->SetTitleSize(0.06);
   charge3l_sign3TC_fakes_VV_stack_1->GetXaxis()->SetTitleOffset(0.9);
   charge3l_sign3TC_fakes_VV_stack_1->GetXaxis()->SetTitleFont(42);
   charge3l_sign3TC_fakes_VV_stack_1->GetYaxis()->SetTitle("Events");
   charge3l_sign3TC_fakes_VV_stack_1->GetYaxis()->SetLabelFont(42);
   charge3l_sign3TC_fakes_VV_stack_1->GetYaxis()->SetLabelOffset(0.007);
   charge3l_sign3TC_fakes_VV_stack_1->GetYaxis()->SetLabelSize(0.05);
   charge3l_sign3TC_fakes_VV_stack_1->GetYaxis()->SetTitleSize(0.06);
   charge3l_sign3TC_fakes_VV_stack_1->GetYaxis()->SetTitleOffset(1.35);
   charge3l_sign3TC_fakes_VV_stack_1->GetYaxis()->SetTitleFont(42);
   charge3l_sign3TC_fakes_VV_stack_1->GetZaxis()->SetLabelFont(42);
   charge3l_sign3TC_fakes_VV_stack_1->GetZaxis()->SetLabelOffset(0.007);
   charge3l_sign3TC_fakes_VV_stack_1->GetZaxis()->SetLabelSize(0.05);
   charge3l_sign3TC_fakes_VV_stack_1->GetZaxis()->SetTitleSize(0.06);
   charge3l_sign3TC_fakes_VV_stack_1->GetZaxis()->SetTitleFont(42);
   charge3l_sign3TC_stack->Add(charge3l_sign3TC_fakes_VV_stack_1,"");
   
   TH1D *charge3l_sign3TC_fakes_TT_stack_2 = new TH1D("charge3l_sign3TC_fakes_TT_stack_2","dummy",7,-3.5,3.5);
   charge3l_sign3TC_fakes_TT_stack_2->SetBinContent(3,26.2027);
   charge3l_sign3TC_fakes_TT_stack_2->SetBinContent(5,28.84163);
   charge3l_sign3TC_fakes_TT_stack_2->SetBinError(3,1.34235);
   charge3l_sign3TC_fakes_TT_stack_2->SetBinError(5,1.392222);
   charge3l_sign3TC_fakes_TT_stack_2->SetEntries(841);

   ci = TColor::GetColor("#666666");
   charge3l_sign3TC_fakes_TT_stack_2->SetFillColor(ci);
   charge3l_sign3TC_fakes_TT_stack_2->SetMarkerStyle(0);
   charge3l_sign3TC_fakes_TT_stack_2->SetMarkerSize(1.1);
   charge3l_sign3TC_fakes_TT_stack_2->GetXaxis()->SetTitle("charge");
   charge3l_sign3TC_fakes_TT_stack_2->GetXaxis()->SetMoreLogLabels();
   charge3l_sign3TC_fakes_TT_stack_2->GetXaxis()->SetLabelFont(42);
   charge3l_sign3TC_fakes_TT_stack_2->GetXaxis()->SetLabelOffset(0.007);
   charge3l_sign3TC_fakes_TT_stack_2->GetXaxis()->SetLabelSize(0.05);
   charge3l_sign3TC_fakes_TT_stack_2->GetXaxis()->SetTitleSize(0.06);
   charge3l_sign3TC_fakes_TT_stack_2->GetXaxis()->SetTitleOffset(0.9);
   charge3l_sign3TC_fakes_TT_stack_2->GetXaxis()->SetTitleFont(42);
   charge3l_sign3TC_fakes_TT_stack_2->GetYaxis()->SetTitle("Events");
   charge3l_sign3TC_fakes_TT_stack_2->GetYaxis()->SetLabelFont(42);
   charge3l_sign3TC_fakes_TT_stack_2->GetYaxis()->SetLabelOffset(0.007);
   charge3l_sign3TC_fakes_TT_stack_2->GetYaxis()->SetLabelSize(0.05);
   charge3l_sign3TC_fakes_TT_stack_2->GetYaxis()->SetTitleSize(0.06);
   charge3l_sign3TC_fakes_TT_stack_2->GetYaxis()->SetTitleOffset(1.35);
   charge3l_sign3TC_fakes_TT_stack_2->GetYaxis()->SetTitleFont(42);
   charge3l_sign3TC_fakes_TT_stack_2->GetZaxis()->SetLabelFont(42);
   charge3l_sign3TC_fakes_TT_stack_2->GetZaxis()->SetLabelOffset(0.007);
   charge3l_sign3TC_fakes_TT_stack_2->GetZaxis()->SetLabelSize(0.05);
   charge3l_sign3TC_fakes_TT_stack_2->GetZaxis()->SetTitleSize(0.06);
   charge3l_sign3TC_fakes_TT_stack_2->GetZaxis()->SetTitleFont(42);
   charge3l_sign3TC_stack->Add(charge3l_sign3TC_fakes_TT_stack_2,"");
   
   TH1D *charge3l_sign3TC_fakes_DY_stack_3 = new TH1D("charge3l_sign3TC_fakes_DY_stack_3","dummy",7,-3.5,3.5);
   charge3l_sign3TC_fakes_DY_stack_3->SetBinContent(3,63.62232);
   charge3l_sign3TC_fakes_DY_stack_3->SetBinContent(5,53.30519);
   charge3l_sign3TC_fakes_DY_stack_3->SetBinError(3,10.45944);
   charge3l_sign3TC_fakes_DY_stack_3->SetBinError(5,9.573894);
   charge3l_sign3TC_fakes_DY_stack_3->SetEntries(72);

   ci = TColor::GetColor("#cccccc");
   charge3l_sign3TC_fakes_DY_stack_3->SetFillColor(ci);
   charge3l_sign3TC_fakes_DY_stack_3->SetMarkerStyle(0);
   charge3l_sign3TC_fakes_DY_stack_3->SetMarkerSize(1.1);
   charge3l_sign3TC_fakes_DY_stack_3->GetXaxis()->SetTitle("charge");
   charge3l_sign3TC_fakes_DY_stack_3->GetXaxis()->SetMoreLogLabels();
   charge3l_sign3TC_fakes_DY_stack_3->GetXaxis()->SetLabelFont(42);
   charge3l_sign3TC_fakes_DY_stack_3->GetXaxis()->SetLabelOffset(0.007);
   charge3l_sign3TC_fakes_DY_stack_3->GetXaxis()->SetLabelSize(0.05);
   charge3l_sign3TC_fakes_DY_stack_3->GetXaxis()->SetTitleSize(0.06);
   charge3l_sign3TC_fakes_DY_stack_3->GetXaxis()->SetTitleOffset(0.9);
   charge3l_sign3TC_fakes_DY_stack_3->GetXaxis()->SetTitleFont(42);
   charge3l_sign3TC_fakes_DY_stack_3->GetYaxis()->SetTitle("Events");
   charge3l_sign3TC_fakes_DY_stack_3->GetYaxis()->SetLabelFont(42);
   charge3l_sign3TC_fakes_DY_stack_3->GetYaxis()->SetLabelOffset(0.007);
   charge3l_sign3TC_fakes_DY_stack_3->GetYaxis()->SetLabelSize(0.05);
   charge3l_sign3TC_fakes_DY_stack_3->GetYaxis()->SetTitleSize(0.06);
   charge3l_sign3TC_fakes_DY_stack_3->GetYaxis()->SetTitleOffset(1.35);
   charge3l_sign3TC_fakes_DY_stack_3->GetYaxis()->SetTitleFont(42);
   charge3l_sign3TC_fakes_DY_stack_3->GetZaxis()->SetLabelFont(42);
   charge3l_sign3TC_fakes_DY_stack_3->GetZaxis()->SetLabelOffset(0.007);
   charge3l_sign3TC_fakes_DY_stack_3->GetZaxis()->SetLabelSize(0.05);
   charge3l_sign3TC_fakes_DY_stack_3->GetZaxis()->SetTitleSize(0.06);
   charge3l_sign3TC_fakes_DY_stack_3->GetZaxis()->SetTitleFont(42);
   charge3l_sign3TC_stack->Add(charge3l_sign3TC_fakes_DY_stack_3,"");
   
   TH1D *charge3l_sign3TC_prompt_ZZ_stack_4 = new TH1D("charge3l_sign3TC_prompt_ZZ_stack_4","dummy",7,-3.5,3.5);
   charge3l_sign3TC_prompt_ZZ_stack_4->SetBinContent(3,35.41268);
   charge3l_sign3TC_prompt_ZZ_stack_4->SetBinContent(5,37.79799);
   charge3l_sign3TC_prompt_ZZ_stack_4->SetBinError(3,2.549061);
   charge3l_sign3TC_prompt_ZZ_stack_4->SetBinError(5,2.633511);
   charge3l_sign3TC_prompt_ZZ_stack_4->SetEntries(403);

   ci = TColor::GetColor("#00cc00");
   charge3l_sign3TC_prompt_ZZ_stack_4->SetFillColor(ci);
   charge3l_sign3TC_prompt_ZZ_stack_4->SetMarkerStyle(0);
   charge3l_sign3TC_prompt_ZZ_stack_4->SetMarkerSize(1.1);
   charge3l_sign3TC_prompt_ZZ_stack_4->GetXaxis()->SetTitle("charge");
   charge3l_sign3TC_prompt_ZZ_stack_4->GetXaxis()->SetMoreLogLabels();
   charge3l_sign3TC_prompt_ZZ_stack_4->GetXaxis()->SetLabelFont(42);
   charge3l_sign3TC_prompt_ZZ_stack_4->GetXaxis()->SetLabelOffset(0.007);
   charge3l_sign3TC_prompt_ZZ_stack_4->GetXaxis()->SetLabelSize(0.05);
   charge3l_sign3TC_prompt_ZZ_stack_4->GetXaxis()->SetTitleSize(0.06);
   charge3l_sign3TC_prompt_ZZ_stack_4->GetXaxis()->SetTitleOffset(0.9);
   charge3l_sign3TC_prompt_ZZ_stack_4->GetXaxis()->SetTitleFont(42);
   charge3l_sign3TC_prompt_ZZ_stack_4->GetYaxis()->SetTitle("Events");
   charge3l_sign3TC_prompt_ZZ_stack_4->GetYaxis()->SetLabelFont(42);
   charge3l_sign3TC_prompt_ZZ_stack_4->GetYaxis()->SetLabelOffset(0.007);
   charge3l_sign3TC_prompt_ZZ_stack_4->GetYaxis()->SetLabelSize(0.05);
   charge3l_sign3TC_prompt_ZZ_stack_4->GetYaxis()->SetTitleSize(0.06);
   charge3l_sign3TC_prompt_ZZ_stack_4->GetYaxis()->SetTitleOffset(1.35);
   charge3l_sign3TC_prompt_ZZ_stack_4->GetYaxis()->SetTitleFont(42);
   charge3l_sign3TC_prompt_ZZ_stack_4->GetZaxis()->SetLabelFont(42);
   charge3l_sign3TC_prompt_ZZ_stack_4->GetZaxis()->SetLabelOffset(0.007);
   charge3l_sign3TC_prompt_ZZ_stack_4->GetZaxis()->SetLabelSize(0.05);
   charge3l_sign3TC_prompt_ZZ_stack_4->GetZaxis()->SetTitleSize(0.06);
   charge3l_sign3TC_prompt_ZZ_stack_4->GetZaxis()->SetTitleFont(42);
   charge3l_sign3TC_stack->Add(charge3l_sign3TC_prompt_ZZ_stack_4,"");
   
   TH1D *charge3l_sign3TC_prompt_WZ_stack_5 = new TH1D("charge3l_sign3TC_prompt_WZ_stack_5","dummy",7,-3.5,3.5);
   charge3l_sign3TC_prompt_WZ_stack_5->SetBinContent(3,509.9458);
   charge3l_sign3TC_prompt_WZ_stack_5->SetBinContent(5,740.1359);
   charge3l_sign3TC_prompt_WZ_stack_5->SetBinError(3,6.791434);
   charge3l_sign3TC_prompt_WZ_stack_5->SetBinError(5,8.181919);
   charge3l_sign3TC_prompt_WZ_stack_5->SetEntries(13825);

   ci = TColor::GetColor("#ffcc00");
   charge3l_sign3TC_prompt_WZ_stack_5->SetFillColor(ci);
   charge3l_sign3TC_prompt_WZ_stack_5->SetMarkerStyle(0);
   charge3l_sign3TC_prompt_WZ_stack_5->SetMarkerSize(1.1);
   charge3l_sign3TC_prompt_WZ_stack_5->GetXaxis()->SetTitle("charge");
   charge3l_sign3TC_prompt_WZ_stack_5->GetXaxis()->SetMoreLogLabels();
   charge3l_sign3TC_prompt_WZ_stack_5->GetXaxis()->SetLabelFont(42);
   charge3l_sign3TC_prompt_WZ_stack_5->GetXaxis()->SetLabelOffset(0.007);
   charge3l_sign3TC_prompt_WZ_stack_5->GetXaxis()->SetLabelSize(0.05);
   charge3l_sign3TC_prompt_WZ_stack_5->GetXaxis()->SetTitleSize(0.06);
   charge3l_sign3TC_prompt_WZ_stack_5->GetXaxis()->SetTitleOffset(0.9);
   charge3l_sign3TC_prompt_WZ_stack_5->GetXaxis()->SetTitleFont(42);
   charge3l_sign3TC_prompt_WZ_stack_5->GetYaxis()->SetTitle("Events");
   charge3l_sign3TC_prompt_WZ_stack_5->GetYaxis()->SetLabelFont(42);
   charge3l_sign3TC_prompt_WZ_stack_5->GetYaxis()->SetLabelOffset(0.007);
   charge3l_sign3TC_prompt_WZ_stack_5->GetYaxis()->SetLabelSize(0.05);
   charge3l_sign3TC_prompt_WZ_stack_5->GetYaxis()->SetTitleSize(0.06);
   charge3l_sign3TC_prompt_WZ_stack_5->GetYaxis()->SetTitleOffset(1.35);
   charge3l_sign3TC_prompt_WZ_stack_5->GetYaxis()->SetTitleFont(42);
   charge3l_sign3TC_prompt_WZ_stack_5->GetZaxis()->SetLabelFont(42);
   charge3l_sign3TC_prompt_WZ_stack_5->GetZaxis()->SetLabelOffset(0.007);
   charge3l_sign3TC_prompt_WZ_stack_5->GetZaxis()->SetLabelSize(0.05);
   charge3l_sign3TC_prompt_WZ_stack_5->GetZaxis()->SetTitleSize(0.06);
   charge3l_sign3TC_prompt_WZ_stack_5->GetZaxis()->SetTitleFont(42);
   charge3l_sign3TC_stack->Add(charge3l_sign3TC_prompt_WZ_stack_5,"");
   charge3l_sign3TC_stack->Draw("same hist");
   
   TH1D *charge3l_sign3TC_total__134 = new TH1D("charge3l_sign3TC_total__134","dummy",7,-3.5,3.5);
   charge3l_sign3TC_total__134->SetBinContent(3,635.6694);
   charge3l_sign3TC_total__134->SetBinContent(5,860.2751);
   charge3l_sign3TC_total__134->SetBinError(3,12.80119);
   charge3l_sign3TC_total__134->SetBinError(5,12.94202);
   charge3l_sign3TC_total__134->SetMinimum(0);
   charge3l_sign3TC_total__134->SetMaximum(2580.825);
   charge3l_sign3TC_total__134->SetEntries(15152);
   charge3l_sign3TC_total__134->SetDirectory(0);

   ci = TColor::GetColor("#00cc00");
   charge3l_sign3TC_total__134->SetFillColor(ci);
   charge3l_sign3TC_total__134->SetMarkerStyle(20);
   charge3l_sign3TC_total__134->SetMarkerSize(1.1);
   charge3l_sign3TC_total__134->GetXaxis()->SetTitle("charge");
   charge3l_sign3TC_total__134->GetXaxis()->SetMoreLogLabels();
   charge3l_sign3TC_total__134->GetXaxis()->SetLabelFont(42);
   charge3l_sign3TC_total__134->GetXaxis()->SetLabelOffset(999);
   charge3l_sign3TC_total__134->GetXaxis()->SetLabelSize(0.05);
   charge3l_sign3TC_total__134->GetXaxis()->SetTitleSize(0.05);
   charge3l_sign3TC_total__134->GetXaxis()->SetTitleOffset(999);
   charge3l_sign3TC_total__134->GetXaxis()->SetTitleFont(42);
   charge3l_sign3TC_total__134->GetYaxis()->SetTitle("Events");
   charge3l_sign3TC_total__134->GetYaxis()->SetLabelFont(42);
   charge3l_sign3TC_total__134->GetYaxis()->SetLabelOffset(0.007);
   charge3l_sign3TC_total__134->GetYaxis()->SetLabelSize(0.05);
   charge3l_sign3TC_total__134->GetYaxis()->SetTitleSize(0.06);
   charge3l_sign3TC_total__134->GetYaxis()->SetTitleOffset(1.48);
   charge3l_sign3TC_total__134->GetYaxis()->SetTitleFont(42);
   charge3l_sign3TC_total__134->GetZaxis()->SetLabelFont(42);
   charge3l_sign3TC_total__134->GetZaxis()->SetLabelOffset(0.007);
   charge3l_sign3TC_total__134->GetZaxis()->SetLabelSize(0.05);
   charge3l_sign3TC_total__134->GetZaxis()->SetTitleSize(0.06);
   charge3l_sign3TC_total__134->GetZaxis()->SetTitleFont(42);
   charge3l_sign3TC_total__134->Draw("AXIS SAME");
   
   Double_t charge3l_sign3TC_total_errors_fx3166[2] = {
   -1,
   1};
   Double_t charge3l_sign3TC_total_errors_fy3166[2] = {
   635.6694,
   860.2751};
   Double_t charge3l_sign3TC_total_errors_felx3166[2] = {
   0.5,
   0.5};
   Double_t charge3l_sign3TC_total_errors_fely3166[2] = {
   12.80119,
   12.94202};
   Double_t charge3l_sign3TC_total_errors_fehx3166[2] = {
   0.5,
   0.5};
   Double_t charge3l_sign3TC_total_errors_fehy3166[2] = {
   12.80119,
   12.94202};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(2,charge3l_sign3TC_total_errors_fx3166,charge3l_sign3TC_total_errors_fy3166,charge3l_sign3TC_total_errors_felx3166,charge3l_sign3TC_total_errors_fehx3166,charge3l_sign3TC_total_errors_fely3166,charge3l_sign3TC_total_errors_fehy3166);
   grae->SetName("charge3l_sign3TC_total_errors");
   grae->SetTitle("Graph");
   grae->SetFillColor(1);
   grae->SetFillStyle(3013);
   grae->SetMarkerStyle(0);
   
   TH1F *Graph_charge3l_sign3TC_total_errors3166 = new TH1F("Graph_charge3l_sign3TC_total_errors3166","Graph",100,-1.8,1.8);
   Graph_charge3l_sign3TC_total_errors3166->SetMinimum(597.8334);
   Graph_charge3l_sign3TC_total_errors3166->SetMaximum(898.252);
   Graph_charge3l_sign3TC_total_errors3166->SetDirectory(0);
   Graph_charge3l_sign3TC_total_errors3166->SetStats(0);
   Graph_charge3l_sign3TC_total_errors3166->SetLineStyle(0);
   Graph_charge3l_sign3TC_total_errors3166->SetMarkerStyle(20);
   Graph_charge3l_sign3TC_total_errors3166->GetXaxis()->SetLabelFont(42);
   Graph_charge3l_sign3TC_total_errors3166->GetXaxis()->SetLabelOffset(0.007);
   Graph_charge3l_sign3TC_total_errors3166->GetXaxis()->SetLabelSize(0.05);
   Graph_charge3l_sign3TC_total_errors3166->GetXaxis()->SetTitleSize(0.06);
   Graph_charge3l_sign3TC_total_errors3166->GetXaxis()->SetTitleOffset(0.9);
   Graph_charge3l_sign3TC_total_errors3166->GetXaxis()->SetTitleFont(42);
   Graph_charge3l_sign3TC_total_errors3166->GetYaxis()->SetLabelFont(42);
   Graph_charge3l_sign3TC_total_errors3166->GetYaxis()->SetLabelOffset(0.007);
   Graph_charge3l_sign3TC_total_errors3166->GetYaxis()->SetLabelSize(0.05);
   Graph_charge3l_sign3TC_total_errors3166->GetYaxis()->SetTitleSize(0.06);
   Graph_charge3l_sign3TC_total_errors3166->GetYaxis()->SetTitleOffset(1.35);
   Graph_charge3l_sign3TC_total_errors3166->GetYaxis()->SetTitleFont(42);
   Graph_charge3l_sign3TC_total_errors3166->GetZaxis()->SetLabelFont(42);
   Graph_charge3l_sign3TC_total_errors3166->GetZaxis()->SetLabelOffset(0.007);
   Graph_charge3l_sign3TC_total_errors3166->GetZaxis()->SetLabelSize(0.05);
   Graph_charge3l_sign3TC_total_errors3166->GetZaxis()->SetTitleSize(0.06);
   Graph_charge3l_sign3TC_total_errors3166->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_charge3l_sign3TC_total_errors3166);
   
   grae->Draw("pe2 ");
   
   Double_t charge3l_sign3TC_data_graph_fx3167[7] = {
   -3,
   -2,
   -1,
   0,
   1,
   2,
   3};
   Double_t charge3l_sign3TC_data_graph_fy3167[7] = {
   0,
   0,
   647,
   0,
   866,
   0,
   0};
   Double_t charge3l_sign3TC_data_graph_felx3167[7] = {
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5};
   Double_t charge3l_sign3TC_data_graph_fely3167[7] = {
   0,
   0,
   25.43017,
   0,
   29.42283,
   0,
   0};
   Double_t charge3l_sign3TC_data_graph_fehx3167[7] = {
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5};
   Double_t charge3l_sign3TC_data_graph_fehy3167[7] = {
   1.841055,
   1.841055,
   26.44988,
   1.841055,
   30.43987,
   1.841055,
   1.841055};
   grae = new TGraphAsymmErrors(7,charge3l_sign3TC_data_graph_fx3167,charge3l_sign3TC_data_graph_fy3167,charge3l_sign3TC_data_graph_felx3167,charge3l_sign3TC_data_graph_fehx3167,charge3l_sign3TC_data_graph_fely3167,charge3l_sign3TC_data_graph_fehy3167);
   grae->SetName("charge3l_sign3TC_data_graph");
   grae->SetTitle("Graph");
   grae->SetFillStyle(1000);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.1);
   
   TH1F *Graph_charge3l_sign3TC_data_graph3167 = new TH1F("Graph_charge3l_sign3TC_data_graph3167","Graph",100,-4.2,4.2);
   Graph_charge3l_sign3TC_data_graph3167->SetMinimum(0);
   Graph_charge3l_sign3TC_data_graph3167->SetMaximum(986.0839);
   Graph_charge3l_sign3TC_data_graph3167->SetDirectory(0);
   Graph_charge3l_sign3TC_data_graph3167->SetStats(0);
   Graph_charge3l_sign3TC_data_graph3167->SetLineStyle(0);
   Graph_charge3l_sign3TC_data_graph3167->SetMarkerStyle(20);
   Graph_charge3l_sign3TC_data_graph3167->GetXaxis()->SetLabelFont(42);
   Graph_charge3l_sign3TC_data_graph3167->GetXaxis()->SetLabelOffset(0.007);
   Graph_charge3l_sign3TC_data_graph3167->GetXaxis()->SetLabelSize(0.05);
   Graph_charge3l_sign3TC_data_graph3167->GetXaxis()->SetTitleSize(0.06);
   Graph_charge3l_sign3TC_data_graph3167->GetXaxis()->SetTitleOffset(0.9);
   Graph_charge3l_sign3TC_data_graph3167->GetXaxis()->SetTitleFont(42);
   Graph_charge3l_sign3TC_data_graph3167->GetYaxis()->SetLabelFont(42);
   Graph_charge3l_sign3TC_data_graph3167->GetYaxis()->SetLabelOffset(0.007);
   Graph_charge3l_sign3TC_data_graph3167->GetYaxis()->SetLabelSize(0.05);
   Graph_charge3l_sign3TC_data_graph3167->GetYaxis()->SetTitleSize(0.06);
   Graph_charge3l_sign3TC_data_graph3167->GetYaxis()->SetTitleOffset(1.35);
   Graph_charge3l_sign3TC_data_graph3167->GetYaxis()->SetTitleFont(42);
   Graph_charge3l_sign3TC_data_graph3167->GetZaxis()->SetLabelFont(42);
   Graph_charge3l_sign3TC_data_graph3167->GetZaxis()->SetLabelOffset(0.007);
   Graph_charge3l_sign3TC_data_graph3167->GetZaxis()->SetLabelSize(0.05);
   Graph_charge3l_sign3TC_data_graph3167->GetZaxis()->SetTitleSize(0.06);
   Graph_charge3l_sign3TC_data_graph3167->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_charge3l_sign3TC_data_graph3167);
   
   grae->Draw("pz ");
   
   TLegend *leg = new TLegend(0.2,0.628,0.48,0.91,NULL,"brNDC");
   leg->SetBorderSize(1);
   leg->SetTextSize(0.036);
   leg->SetLineColor(0);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("charge3l_sign3TC_data","Data","LPE");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1.1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("charge3l_sign3TC_prompt_WZ_stack_5","WZ","F");

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
   entry=leg->AddEntry("charge3l_sign3TC_prompt_ZZ_stack_4","qqZZ","F");

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
   entry=leg->AddEntry("charge3l_sign3TC_fakes_DY_stack_3","Fakes DY","F");

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
   entry=leg->AddEntry("charge3l_sign3TC_fakes_TT_stack_2","Fakes TT","F");

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
   entry=leg->AddEntry("charge3l_sign3TC_total_errors","Total unc.","F");
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
   charge3l_sign3TC_canvas->cd();
  
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
   
   TH1D *charge3l_sign3TC_total__135 = new TH1D("charge3l_sign3TC_total__135","dummy",7,-3.5,3.5);
   charge3l_sign3TC_total__135->SetBinContent(3,1);
   charge3l_sign3TC_total__135->SetBinContent(5,1);
   charge3l_sign3TC_total__135->SetMinimum(0.5);
   charge3l_sign3TC_total__135->SetMaximum(2);
   charge3l_sign3TC_total__135->SetEntries(15159);

   ci = TColor::GetColor("#00cc00");
   charge3l_sign3TC_total__135->SetFillColor(ci);

   ci = TColor::GetColor("#6666ff");
   charge3l_sign3TC_total__135->SetMarkerColor(ci);
   charge3l_sign3TC_total__135->SetMarkerSize(1.1);
   charge3l_sign3TC_total__135->GetXaxis()->SetTitle("charge");
   charge3l_sign3TC_total__135->GetXaxis()->SetMoreLogLabels();
   charge3l_sign3TC_total__135->GetXaxis()->SetLabelFont(42);
   charge3l_sign3TC_total__135->GetXaxis()->SetLabelOffset(0.015);
   charge3l_sign3TC_total__135->GetXaxis()->SetLabelSize(0.1);
   charge3l_sign3TC_total__135->GetXaxis()->SetTitleSize(0.14);
   charge3l_sign3TC_total__135->GetXaxis()->SetTitleFont(42);
   charge3l_sign3TC_total__135->GetYaxis()->SetTitle("Data/pred.");
   charge3l_sign3TC_total__135->GetYaxis()->SetDecimals();
   charge3l_sign3TC_total__135->GetYaxis()->SetNdivisions(505);
   charge3l_sign3TC_total__135->GetYaxis()->SetLabelFont(42);
   charge3l_sign3TC_total__135->GetYaxis()->SetLabelOffset(0.01);
   charge3l_sign3TC_total__135->GetYaxis()->SetLabelSize(0.11);
   charge3l_sign3TC_total__135->GetYaxis()->SetTitleSize(0.14);
   charge3l_sign3TC_total__135->GetYaxis()->SetTitleOffset(0.62);
   charge3l_sign3TC_total__135->GetYaxis()->SetTitleFont(42);
   charge3l_sign3TC_total__135->GetZaxis()->SetLabelFont(42);
   charge3l_sign3TC_total__135->GetZaxis()->SetLabelOffset(0.007);
   charge3l_sign3TC_total__135->GetZaxis()->SetLabelSize(0.05);
   charge3l_sign3TC_total__135->GetZaxis()->SetTitleSize(0.06);
   charge3l_sign3TC_total__135->GetZaxis()->SetTitleFont(42);
   charge3l_sign3TC_total__135->Draw("AXIS");
   
   Double_t charge3l_sign3TC_total_errors_fx3168[2] = {
   -1,
   1};
   Double_t charge3l_sign3TC_total_errors_fy3168[2] = {
   1,
   1};
   Double_t charge3l_sign3TC_total_errors_felx3168[2] = {
   0.5,
   0.5};
   Double_t charge3l_sign3TC_total_errors_fely3168[2] = {
   0.02013812,
   0.01504404};
   Double_t charge3l_sign3TC_total_errors_fehx3168[2] = {
   0.5,
   0.5};
   Double_t charge3l_sign3TC_total_errors_fehy3168[2] = {
   0.02013812,
   0.01504404};
   grae = new TGraphAsymmErrors(2,charge3l_sign3TC_total_errors_fx3168,charge3l_sign3TC_total_errors_fy3168,charge3l_sign3TC_total_errors_felx3168,charge3l_sign3TC_total_errors_fehx3168,charge3l_sign3TC_total_errors_fely3168,charge3l_sign3TC_total_errors_fehy3168);
   grae->SetName("charge3l_sign3TC_total_errors");
   grae->SetTitle("Graph");

   ci = TColor::GetColor("#00ffff");
   grae->SetFillColor(ci);

   ci = TColor::GetColor("#00ffff");
   grae->SetMarkerColor(ci);
   grae->Draw("e2");
   
   Double_t charge3l_sign3TC_total_errors_fx3169[2] = {
   -1,
   1};
   Double_t charge3l_sign3TC_total_errors_fy3169[2] = {
   1,
   1};
   Double_t charge3l_sign3TC_total_errors_felx3169[2] = {
   0.5,
   0.5};
   Double_t charge3l_sign3TC_total_errors_fely3169[2] = {
   0.02013812,
   0.01504404};
   Double_t charge3l_sign3TC_total_errors_fehx3169[2] = {
   0.5,
   0.5};
   Double_t charge3l_sign3TC_total_errors_fehy3169[2] = {
   0.02013812,
   0.01504404};
   grae = new TGraphAsymmErrors(2,charge3l_sign3TC_total_errors_fx3169,charge3l_sign3TC_total_errors_fy3169,charge3l_sign3TC_total_errors_felx3169,charge3l_sign3TC_total_errors_fehx3169,charge3l_sign3TC_total_errors_fely3169,charge3l_sign3TC_total_errors_fehy3169);
   grae->SetName("charge3l_sign3TC_total_errors");
   grae->SetTitle("Graph");

   ci = TColor::GetColor("#6666ff");
   grae->SetFillColor(ci);

   ci = TColor::GetColor("#6666ff");
   grae->SetMarkerColor(ci);
   grae->Draw("e2 ");
   
   TH1D *charge3l_sign3TC_total__136 = new TH1D("charge3l_sign3TC_total__136","dummy",7,-3.5,3.5);
   charge3l_sign3TC_total__136->SetBinContent(3,1);
   charge3l_sign3TC_total__136->SetBinContent(5,1);
   charge3l_sign3TC_total__136->SetMinimum(0.5);
   charge3l_sign3TC_total__136->SetMaximum(2);
   charge3l_sign3TC_total__136->SetEntries(15159);

   ci = TColor::GetColor("#00cc00");
   charge3l_sign3TC_total__136->SetFillColor(ci);

   ci = TColor::GetColor("#6666ff");
   charge3l_sign3TC_total__136->SetMarkerColor(ci);
   charge3l_sign3TC_total__136->SetMarkerSize(1.1);
   charge3l_sign3TC_total__136->GetXaxis()->SetTitle("charge");
   charge3l_sign3TC_total__136->GetXaxis()->SetMoreLogLabels();
   charge3l_sign3TC_total__136->GetXaxis()->SetLabelFont(42);
   charge3l_sign3TC_total__136->GetXaxis()->SetLabelOffset(0.015);
   charge3l_sign3TC_total__136->GetXaxis()->SetLabelSize(0.1);
   charge3l_sign3TC_total__136->GetXaxis()->SetTitleSize(0.14);
   charge3l_sign3TC_total__136->GetXaxis()->SetTitleFont(42);
   charge3l_sign3TC_total__136->GetYaxis()->SetTitle("Data/pred.");
   charge3l_sign3TC_total__136->GetYaxis()->SetDecimals();
   charge3l_sign3TC_total__136->GetYaxis()->SetNdivisions(505);
   charge3l_sign3TC_total__136->GetYaxis()->SetLabelFont(42);
   charge3l_sign3TC_total__136->GetYaxis()->SetLabelOffset(0.01);
   charge3l_sign3TC_total__136->GetYaxis()->SetLabelSize(0.11);
   charge3l_sign3TC_total__136->GetYaxis()->SetTitleSize(0.14);
   charge3l_sign3TC_total__136->GetYaxis()->SetTitleOffset(0.62);
   charge3l_sign3TC_total__136->GetYaxis()->SetTitleFont(42);
   charge3l_sign3TC_total__136->GetZaxis()->SetLabelFont(42);
   charge3l_sign3TC_total__136->GetZaxis()->SetLabelOffset(0.007);
   charge3l_sign3TC_total__136->GetZaxis()->SetLabelSize(0.05);
   charge3l_sign3TC_total__136->GetZaxis()->SetTitleSize(0.06);
   charge3l_sign3TC_total__136->GetZaxis()->SetTitleFont(42);
   charge3l_sign3TC_total__136->Draw("AXIS SAME");
   TLine *line = new TLine(-3.5,1,3.5,1);
   line->SetLineColor(58);
   line->SetLineWidth(2);
   line->Draw();
   
   Double_t data_div_fx3170[7] = {
   -3,
   -2,
   -1,
   0,
   1,
   2,
   3};
   Double_t data_div_fy3170[7] = {
   0,
   0,
   1.017825,
   0,
   1.006655,
   0,
   0};
   Double_t data_div_felx3170[7] = {
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5};
   Double_t data_div_fely3170[7] = {
   0,
   0,
   0.04000533,
   0,
   0.03420165,
   0,
   0};
   Double_t data_div_fehx3170[7] = {
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5};
   Double_t data_div_fehy3170[7] = {
   0,
   0,
   0.04160948,
   0,
   0.03538387,
   0,
   0};
   grae = new TGraphAsymmErrors(7,data_div_fx3170,data_div_fy3170,data_div_felx3170,data_div_fehx3170,data_div_fely3170,data_div_fehy3170);
   grae->SetName("data_div");
   grae->SetTitle("Graph");
   grae->SetFillStyle(1000);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.1);
   
   TH1F *Graph_charge3l_sign3TC_data_graph3170 = new TH1F("Graph_charge3l_sign3TC_data_graph3170","Graph",100,-4.2,4.2);
   Graph_charge3l_sign3TC_data_graph3170->SetMinimum(0);
   Graph_charge3l_sign3TC_data_graph3170->SetMaximum(986.0839);
   Graph_charge3l_sign3TC_data_graph3170->SetDirectory(0);
   Graph_charge3l_sign3TC_data_graph3170->SetStats(0);
   Graph_charge3l_sign3TC_data_graph3170->SetLineStyle(0);
   Graph_charge3l_sign3TC_data_graph3170->SetMarkerStyle(20);
   Graph_charge3l_sign3TC_data_graph3170->GetXaxis()->SetLabelFont(42);
   Graph_charge3l_sign3TC_data_graph3170->GetXaxis()->SetLabelOffset(0.007);
   Graph_charge3l_sign3TC_data_graph3170->GetXaxis()->SetLabelSize(0.05);
   Graph_charge3l_sign3TC_data_graph3170->GetXaxis()->SetTitleSize(0.06);
   Graph_charge3l_sign3TC_data_graph3170->GetXaxis()->SetTitleOffset(0.9);
   Graph_charge3l_sign3TC_data_graph3170->GetXaxis()->SetTitleFont(42);
   Graph_charge3l_sign3TC_data_graph3170->GetYaxis()->SetLabelFont(42);
   Graph_charge3l_sign3TC_data_graph3170->GetYaxis()->SetLabelOffset(0.007);
   Graph_charge3l_sign3TC_data_graph3170->GetYaxis()->SetLabelSize(0.05);
   Graph_charge3l_sign3TC_data_graph3170->GetYaxis()->SetTitleSize(0.06);
   Graph_charge3l_sign3TC_data_graph3170->GetYaxis()->SetTitleOffset(1.35);
   Graph_charge3l_sign3TC_data_graph3170->GetYaxis()->SetTitleFont(42);
   Graph_charge3l_sign3TC_data_graph3170->GetZaxis()->SetLabelFont(42);
   Graph_charge3l_sign3TC_data_graph3170->GetZaxis()->SetLabelOffset(0.007);
   Graph_charge3l_sign3TC_data_graph3170->GetZaxis()->SetLabelSize(0.05);
   Graph_charge3l_sign3TC_data_graph3170->GetZaxis()->SetTitleSize(0.06);
   Graph_charge3l_sign3TC_data_graph3170->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_charge3l_sign3TC_data_graph3170);
   
   grae->Draw("pz ");
   
   leg = new TLegend(0,0,0,0,NULL,"brNDC");
   leg->SetBorderSize(1);
   leg->SetTextSize(0.084);
   leg->SetLineColor(0);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   entry=leg->AddEntry("charge3l_sign3TC_total_errors","stat. unc.","F");
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
   entry=leg->AddEntry("charge3l_sign3TC_total_errors","total unc.","F");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   leg->Draw();
   pad2->Modified();
   charge3l_sign3TC_canvas->cd();
   charge3l_sign3TC_canvas->Modified();
   charge3l_sign3TC_canvas->cd();
   charge3l_sign3TC_canvas->SetSelected(charge3l_sign3TC_canvas);
}
