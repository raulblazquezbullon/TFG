void jet1_csv()
{
//=========Macro generated from canvas: jet1_csv_canvas/jet1_csv
//=========  (Fri Nov 18 13:16:54 2022) by ROOT version 6.12/07
   TCanvas *jet1_csv_canvas = new TCanvas("jet1_csv_canvas", "jet1_csv",0,0,600,750);
   gStyle->SetOptFit(1);
   gStyle->SetOptStat(0);
   gStyle->SetOptTitle(0);
   jet1_csv_canvas->SetHighLightColor(2);
   jet1_csv_canvas->Range(0,0,1,1);
   jet1_csv_canvas->SetFillColor(0);
   jet1_csv_canvas->SetBorderMode(0);
   jet1_csv_canvas->SetBorderSize(2);
   jet1_csv_canvas->SetTickx(1);
   jet1_csv_canvas->SetTicky(1);
   jet1_csv_canvas->SetLeftMargin(0.18);
   jet1_csv_canvas->SetRightMargin(0.04);
   jet1_csv_canvas->SetBottomMargin(0.13);
   jet1_csv_canvas->SetFrameFillStyle(0);
   jet1_csv_canvas->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: pad1
   TPad *pad1 = new TPad("pad1", "pad1",0,0.3,1,1);
   pad1->Draw();
   pad1->cd();
   pad1->Range(-0.2307692,-28.71414,1.051282,1119.851);
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
   
   TH1D *jet1_csv_total__165 = new TH1D("jet1_csv_total__165","dummy",10,0,1);
   jet1_csv_total__165->SetBinContent(1,700.0118);
   jet1_csv_total__165->SetBinContent(2,122.4935);
   jet1_csv_total__165->SetBinContent(3,44.97845);
   jet1_csv_total__165->SetBinContent(4,23.80479);
   jet1_csv_total__165->SetBinContent(5,13.07951);
   jet1_csv_total__165->SetBinContent(6,8.803202);
   jet1_csv_total__165->SetBinContent(7,6.442399);
   jet1_csv_total__165->SetBinContent(8,4.130891);
   jet1_csv_total__165->SetBinContent(9,5.130893);
   jet1_csv_total__165->SetBinContent(10,0.8537947);
   jet1_csv_total__165->SetBinError(1,12.38052);
   jet1_csv_total__165->SetBinError(2,5.337447);
   jet1_csv_total__165->SetBinError(3,3.551438);
   jet1_csv_total__165->SetBinError(4,2.798499);
   jet1_csv_total__165->SetBinError(5,2.007594);
   jet1_csv_total__165->SetBinError(6,1.891835);
   jet1_csv_total__165->SetBinError(7,0.7540629);
   jet1_csv_total__165->SetBinError(8,0.5581327);
   jet1_csv_total__165->SetBinError(9,0.6355962);
   jet1_csv_total__165->SetBinError(10,0.2910984);
   jet1_csv_total__165->SetMinimum(0);
   jet1_csv_total__165->SetMaximum(1050.937);
   jet1_csv_total__165->SetEntries(9419);
   jet1_csv_total__165->SetDirectory(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#00cc00");
   jet1_csv_total__165->SetFillColor(ci);
   jet1_csv_total__165->SetMarkerStyle(20);
   jet1_csv_total__165->SetMarkerSize(1.1);
   jet1_csv_total__165->GetXaxis()->SetTitle("DCSV(leading jet)");
   jet1_csv_total__165->GetXaxis()->SetMoreLogLabels();
   jet1_csv_total__165->GetXaxis()->SetLabelFont(42);
   jet1_csv_total__165->GetXaxis()->SetLabelOffset(999);
   jet1_csv_total__165->GetXaxis()->SetLabelSize(0.05);
   jet1_csv_total__165->GetXaxis()->SetTitleSize(0.05);
   jet1_csv_total__165->GetXaxis()->SetTitleOffset(999);
   jet1_csv_total__165->GetXaxis()->SetTitleFont(42);
   jet1_csv_total__165->GetYaxis()->SetTitle("Jets");
   jet1_csv_total__165->GetYaxis()->SetLabelFont(42);
   jet1_csv_total__165->GetYaxis()->SetLabelOffset(0.007);
   jet1_csv_total__165->GetYaxis()->SetLabelSize(0.05);
   jet1_csv_total__165->GetYaxis()->SetTitleSize(0.06);
   jet1_csv_total__165->GetYaxis()->SetTitleOffset(1.48);
   jet1_csv_total__165->GetYaxis()->SetTitleFont(42);
   jet1_csv_total__165->GetZaxis()->SetLabelFont(42);
   jet1_csv_total__165->GetZaxis()->SetLabelOffset(0.007);
   jet1_csv_total__165->GetZaxis()->SetLabelSize(0.05);
   jet1_csv_total__165->GetZaxis()->SetTitleSize(0.06);
   jet1_csv_total__165->GetZaxis()->SetTitleFont(42);
   jet1_csv_total__165->Draw("HIST");
   
   THStack *jet1_csv_stack = new THStack();
   jet1_csv_stack->SetName("jet1_csv_stack");
   jet1_csv_stack->SetTitle("jet1_csv");
   
   TH1F *jet1_csv_stack_stack_42 = new TH1F("jet1_csv_stack_stack_42","jet1_csv",10,0,1);
   jet1_csv_stack_stack_42->SetMinimum(0);
   jet1_csv_stack_stack_42->SetMaximum(735.0124);
   jet1_csv_stack_stack_42->SetDirectory(0);
   jet1_csv_stack_stack_42->SetStats(0);
   jet1_csv_stack_stack_42->SetLineStyle(0);
   jet1_csv_stack_stack_42->SetMarkerStyle(20);
   jet1_csv_stack_stack_42->GetXaxis()->SetLabelFont(42);
   jet1_csv_stack_stack_42->GetXaxis()->SetLabelOffset(0.007);
   jet1_csv_stack_stack_42->GetXaxis()->SetLabelSize(0.05);
   jet1_csv_stack_stack_42->GetXaxis()->SetTitleSize(0.06);
   jet1_csv_stack_stack_42->GetXaxis()->SetTitleOffset(0.9);
   jet1_csv_stack_stack_42->GetXaxis()->SetTitleFont(42);
   jet1_csv_stack_stack_42->GetYaxis()->SetLabelFont(42);
   jet1_csv_stack_stack_42->GetYaxis()->SetLabelOffset(0.007);
   jet1_csv_stack_stack_42->GetYaxis()->SetLabelSize(0.05);
   jet1_csv_stack_stack_42->GetYaxis()->SetTitleSize(0.06);
   jet1_csv_stack_stack_42->GetYaxis()->SetTitleOffset(1.35);
   jet1_csv_stack_stack_42->GetYaxis()->SetTitleFont(42);
   jet1_csv_stack_stack_42->GetZaxis()->SetLabelFont(42);
   jet1_csv_stack_stack_42->GetZaxis()->SetLabelOffset(0.007);
   jet1_csv_stack_stack_42->GetZaxis()->SetLabelSize(0.05);
   jet1_csv_stack_stack_42->GetZaxis()->SetTitleSize(0.06);
   jet1_csv_stack_stack_42->GetZaxis()->SetTitleFont(42);
   jet1_csv_stack->SetHistogram(jet1_csv_stack_stack_42);
   
   
   TH1D *jet1_csv_fakes_VV_stack_1 = new TH1D("jet1_csv_fakes_VV_stack_1","dummy",10,0,1);
   jet1_csv_fakes_VV_stack_1->SetBinContent(1,0.3887735);
   jet1_csv_fakes_VV_stack_1->SetBinContent(5,0.09719337);
   jet1_csv_fakes_VV_stack_1->SetBinError(1,0.1943867);
   jet1_csv_fakes_VV_stack_1->SetBinError(5,0.09719337);
   jet1_csv_fakes_VV_stack_1->SetEntries(9);

   ci = TColor::GetColor("#2e3294");
   jet1_csv_fakes_VV_stack_1->SetFillColor(ci);
   jet1_csv_fakes_VV_stack_1->SetMarkerStyle(0);
   jet1_csv_fakes_VV_stack_1->SetMarkerSize(1.1);
   jet1_csv_fakes_VV_stack_1->GetXaxis()->SetTitle("DCSV(leading jet)");
   jet1_csv_fakes_VV_stack_1->GetXaxis()->SetMoreLogLabels();
   jet1_csv_fakes_VV_stack_1->GetXaxis()->SetLabelFont(42);
   jet1_csv_fakes_VV_stack_1->GetXaxis()->SetLabelOffset(0.007);
   jet1_csv_fakes_VV_stack_1->GetXaxis()->SetLabelSize(0.05);
   jet1_csv_fakes_VV_stack_1->GetXaxis()->SetTitleSize(0.06);
   jet1_csv_fakes_VV_stack_1->GetXaxis()->SetTitleOffset(0.9);
   jet1_csv_fakes_VV_stack_1->GetXaxis()->SetTitleFont(42);
   jet1_csv_fakes_VV_stack_1->GetYaxis()->SetTitle("Jets");
   jet1_csv_fakes_VV_stack_1->GetYaxis()->SetLabelFont(42);
   jet1_csv_fakes_VV_stack_1->GetYaxis()->SetLabelOffset(0.007);
   jet1_csv_fakes_VV_stack_1->GetYaxis()->SetLabelSize(0.05);
   jet1_csv_fakes_VV_stack_1->GetYaxis()->SetTitleSize(0.06);
   jet1_csv_fakes_VV_stack_1->GetYaxis()->SetTitleOffset(1.35);
   jet1_csv_fakes_VV_stack_1->GetYaxis()->SetTitleFont(42);
   jet1_csv_fakes_VV_stack_1->GetZaxis()->SetLabelFont(42);
   jet1_csv_fakes_VV_stack_1->GetZaxis()->SetLabelOffset(0.007);
   jet1_csv_fakes_VV_stack_1->GetZaxis()->SetLabelSize(0.05);
   jet1_csv_fakes_VV_stack_1->GetZaxis()->SetTitleSize(0.06);
   jet1_csv_fakes_VV_stack_1->GetZaxis()->SetTitleFont(42);
   jet1_csv_stack->Add(jet1_csv_fakes_VV_stack_1,"");
   
   TH1D *jet1_csv_fakes_TT_stack_2 = new TH1D("jet1_csv_fakes_TT_stack_2","dummy",10,0,1);
   jet1_csv_fakes_TT_stack_2->SetBinContent(1,25.91588);
   jet1_csv_fakes_TT_stack_2->SetBinContent(2,5.610329);
   jet1_csv_fakes_TT_stack_2->SetBinContent(3,3.968813);
   jet1_csv_fakes_TT_stack_2->SetBinContent(4,2.526781);
   jet1_csv_fakes_TT_stack_2->SetBinContent(5,1.662356);
   jet1_csv_fakes_TT_stack_2->SetBinContent(6,2.194309);
   jet1_csv_fakes_TT_stack_2->SetBinContent(7,2.726263);
   jet1_csv_fakes_TT_stack_2->SetBinContent(8,2.593275);
   jet1_csv_fakes_TT_stack_2->SetBinContent(9,3.590688);
   jet1_csv_fakes_TT_stack_2->SetBinContent(10,0.3989653);
   jet1_csv_fakes_TT_stack_2->SetBinError(1,1.327186);
   jet1_csv_fakes_TT_stack_2->SetBinError(2,0.6262089);
   jet1_csv_fakes_TT_stack_2->SetBinError(3,0.5271301);
   jet1_csv_fakes_TT_stack_2->SetBinError(4,0.4098979);
   jet1_csv_fakes_TT_stack_2->SetBinError(5,0.3324711);
   jet1_csv_fakes_TT_stack_2->SetBinError(6,0.3819802);
   jet1_csv_fakes_TT_stack_2->SetBinError(7,0.4257708);
   jet1_csv_fakes_TT_stack_2->SetBinError(8,0.4152563);
   jet1_csv_fakes_TT_stack_2->SetBinError(9,0.4975972);
   jet1_csv_fakes_TT_stack_2->SetBinError(10,0.1628769);
   jet1_csv_fakes_TT_stack_2->SetEntries(783);

   ci = TColor::GetColor("#666666");
   jet1_csv_fakes_TT_stack_2->SetFillColor(ci);
   jet1_csv_fakes_TT_stack_2->SetMarkerStyle(0);
   jet1_csv_fakes_TT_stack_2->SetMarkerSize(1.1);
   jet1_csv_fakes_TT_stack_2->GetXaxis()->SetTitle("DCSV(leading jet)");
   jet1_csv_fakes_TT_stack_2->GetXaxis()->SetMoreLogLabels();
   jet1_csv_fakes_TT_stack_2->GetXaxis()->SetLabelFont(42);
   jet1_csv_fakes_TT_stack_2->GetXaxis()->SetLabelOffset(0.007);
   jet1_csv_fakes_TT_stack_2->GetXaxis()->SetLabelSize(0.05);
   jet1_csv_fakes_TT_stack_2->GetXaxis()->SetTitleSize(0.06);
   jet1_csv_fakes_TT_stack_2->GetXaxis()->SetTitleOffset(0.9);
   jet1_csv_fakes_TT_stack_2->GetXaxis()->SetTitleFont(42);
   jet1_csv_fakes_TT_stack_2->GetYaxis()->SetTitle("Jets");
   jet1_csv_fakes_TT_stack_2->GetYaxis()->SetLabelFont(42);
   jet1_csv_fakes_TT_stack_2->GetYaxis()->SetLabelOffset(0.007);
   jet1_csv_fakes_TT_stack_2->GetYaxis()->SetLabelSize(0.05);
   jet1_csv_fakes_TT_stack_2->GetYaxis()->SetTitleSize(0.06);
   jet1_csv_fakes_TT_stack_2->GetYaxis()->SetTitleOffset(1.35);
   jet1_csv_fakes_TT_stack_2->GetYaxis()->SetTitleFont(42);
   jet1_csv_fakes_TT_stack_2->GetZaxis()->SetLabelFont(42);
   jet1_csv_fakes_TT_stack_2->GetZaxis()->SetLabelOffset(0.007);
   jet1_csv_fakes_TT_stack_2->GetZaxis()->SetLabelSize(0.05);
   jet1_csv_fakes_TT_stack_2->GetZaxis()->SetTitleSize(0.06);
   jet1_csv_fakes_TT_stack_2->GetZaxis()->SetTitleFont(42);
   jet1_csv_stack->Add(jet1_csv_fakes_TT_stack_2,"");
   
   TH1D *jet1_csv_fakes_DY_stack_3 = new TH1D("jet1_csv_fakes_DY_stack_3","dummy",10,0,1);
   jet1_csv_fakes_DY_stack_3->SetBinContent(1,53.30519);
   jet1_csv_fakes_DY_stack_3->SetBinContent(2,10.31713);
   jet1_csv_fakes_DY_stack_3->SetBinContent(3,5.158566);
   jet1_csv_fakes_DY_stack_3->SetBinContent(4,3.439044);
   jet1_csv_fakes_DY_stack_3->SetBinContent(5,1.719522);
   jet1_csv_fakes_DY_stack_3->SetBinContent(6,1.719522);
   jet1_csv_fakes_DY_stack_3->SetBinError(1,9.573894);
   jet1_csv_fakes_DY_stack_3->SetBinError(2,4.211952);
   jet1_csv_fakes_DY_stack_3->SetBinError(3,2.9783);
   jet1_csv_fakes_DY_stack_3->SetBinError(4,2.431771);
   jet1_csv_fakes_DY_stack_3->SetBinError(5,1.719522);
   jet1_csv_fakes_DY_stack_3->SetBinError(6,1.719522);
   jet1_csv_fakes_DY_stack_3->SetEntries(48);

   ci = TColor::GetColor("#cccccc");
   jet1_csv_fakes_DY_stack_3->SetFillColor(ci);
   jet1_csv_fakes_DY_stack_3->SetMarkerStyle(0);
   jet1_csv_fakes_DY_stack_3->SetMarkerSize(1.1);
   jet1_csv_fakes_DY_stack_3->GetXaxis()->SetTitle("DCSV(leading jet)");
   jet1_csv_fakes_DY_stack_3->GetXaxis()->SetMoreLogLabels();
   jet1_csv_fakes_DY_stack_3->GetXaxis()->SetLabelFont(42);
   jet1_csv_fakes_DY_stack_3->GetXaxis()->SetLabelOffset(0.007);
   jet1_csv_fakes_DY_stack_3->GetXaxis()->SetLabelSize(0.05);
   jet1_csv_fakes_DY_stack_3->GetXaxis()->SetTitleSize(0.06);
   jet1_csv_fakes_DY_stack_3->GetXaxis()->SetTitleOffset(0.9);
   jet1_csv_fakes_DY_stack_3->GetXaxis()->SetTitleFont(42);
   jet1_csv_fakes_DY_stack_3->GetYaxis()->SetTitle("Jets");
   jet1_csv_fakes_DY_stack_3->GetYaxis()->SetLabelFont(42);
   jet1_csv_fakes_DY_stack_3->GetYaxis()->SetLabelOffset(0.007);
   jet1_csv_fakes_DY_stack_3->GetYaxis()->SetLabelSize(0.05);
   jet1_csv_fakes_DY_stack_3->GetYaxis()->SetTitleSize(0.06);
   jet1_csv_fakes_DY_stack_3->GetYaxis()->SetTitleOffset(1.35);
   jet1_csv_fakes_DY_stack_3->GetYaxis()->SetTitleFont(42);
   jet1_csv_fakes_DY_stack_3->GetZaxis()->SetLabelFont(42);
   jet1_csv_fakes_DY_stack_3->GetZaxis()->SetLabelOffset(0.007);
   jet1_csv_fakes_DY_stack_3->GetZaxis()->SetLabelSize(0.05);
   jet1_csv_fakes_DY_stack_3->GetZaxis()->SetTitleSize(0.06);
   jet1_csv_fakes_DY_stack_3->GetZaxis()->SetTitleFont(42);
   jet1_csv_stack->Add(jet1_csv_fakes_DY_stack_3,"");
   
   TH1D *jet1_csv_prompt_ZZ_stack_4 = new TH1D("jet1_csv_prompt_ZZ_stack_4","dummy",10,0,1);
   jet1_csv_prompt_ZZ_stack_4->SetBinContent(1,39.81633);
   jet1_csv_prompt_ZZ_stack_4->SetBinContent(2,7.706387);
   jet1_csv_prompt_ZZ_stack_4->SetBinContent(3,2.38531);
   jet1_csv_prompt_ZZ_stack_4->SetBinContent(4,1.467883);
   jet1_csv_prompt_ZZ_stack_4->SetBinContent(5,0.917427);
   jet1_csv_prompt_ZZ_stack_4->SetBinContent(6,0.3669708);
   jet1_csv_prompt_ZZ_stack_4->SetBinContent(7,0.5504562);
   jet1_csv_prompt_ZZ_stack_4->SetBinContent(9,0.1834854);
   jet1_csv_prompt_ZZ_stack_4->SetBinContent(10,0.1834854);
   jet1_csv_prompt_ZZ_stack_4->SetBinError(1,2.702909);
   jet1_csv_prompt_ZZ_stack_4->SetBinError(2,1.189121);
   jet1_csv_prompt_ZZ_stack_4->SetBinError(3,0.6615661);
   jet1_csv_prompt_ZZ_stack_4->SetBinError(4,0.5189751);
   jet1_csv_prompt_ZZ_stack_4->SetBinError(5,0.4102858);
   jet1_csv_prompt_ZZ_stack_4->SetBinError(6,0.2594876);
   jet1_csv_prompt_ZZ_stack_4->SetBinError(7,0.3178061);
   jet1_csv_prompt_ZZ_stack_4->SetBinError(9,0.1834854);
   jet1_csv_prompt_ZZ_stack_4->SetBinError(10,0.1834854);
   jet1_csv_prompt_ZZ_stack_4->SetEntries(296);

   ci = TColor::GetColor("#00cc00");
   jet1_csv_prompt_ZZ_stack_4->SetFillColor(ci);
   jet1_csv_prompt_ZZ_stack_4->SetMarkerStyle(0);
   jet1_csv_prompt_ZZ_stack_4->SetMarkerSize(1.1);
   jet1_csv_prompt_ZZ_stack_4->GetXaxis()->SetTitle("DCSV(leading jet)");
   jet1_csv_prompt_ZZ_stack_4->GetXaxis()->SetMoreLogLabels();
   jet1_csv_prompt_ZZ_stack_4->GetXaxis()->SetLabelFont(42);
   jet1_csv_prompt_ZZ_stack_4->GetXaxis()->SetLabelOffset(0.007);
   jet1_csv_prompt_ZZ_stack_4->GetXaxis()->SetLabelSize(0.05);
   jet1_csv_prompt_ZZ_stack_4->GetXaxis()->SetTitleSize(0.06);
   jet1_csv_prompt_ZZ_stack_4->GetXaxis()->SetTitleOffset(0.9);
   jet1_csv_prompt_ZZ_stack_4->GetXaxis()->SetTitleFont(42);
   jet1_csv_prompt_ZZ_stack_4->GetYaxis()->SetTitle("Jets");
   jet1_csv_prompt_ZZ_stack_4->GetYaxis()->SetLabelFont(42);
   jet1_csv_prompt_ZZ_stack_4->GetYaxis()->SetLabelOffset(0.007);
   jet1_csv_prompt_ZZ_stack_4->GetYaxis()->SetLabelSize(0.05);
   jet1_csv_prompt_ZZ_stack_4->GetYaxis()->SetTitleSize(0.06);
   jet1_csv_prompt_ZZ_stack_4->GetYaxis()->SetTitleOffset(1.35);
   jet1_csv_prompt_ZZ_stack_4->GetYaxis()->SetTitleFont(42);
   jet1_csv_prompt_ZZ_stack_4->GetZaxis()->SetLabelFont(42);
   jet1_csv_prompt_ZZ_stack_4->GetZaxis()->SetLabelOffset(0.007);
   jet1_csv_prompt_ZZ_stack_4->GetZaxis()->SetLabelSize(0.05);
   jet1_csv_prompt_ZZ_stack_4->GetZaxis()->SetTitleSize(0.06);
   jet1_csv_prompt_ZZ_stack_4->GetZaxis()->SetTitleFont(42);
   jet1_csv_stack->Add(jet1_csv_prompt_ZZ_stack_4,"");
   
   TH1D *jet1_csv_prompt_WZ_stack_5 = new TH1D("jet1_csv_prompt_WZ_stack_5","dummy",10,0,1);
   jet1_csv_prompt_WZ_stack_5->SetBinContent(1,580.5856);
   jet1_csv_prompt_WZ_stack_5->SetBinContent(2,98.85965);
   jet1_csv_prompt_WZ_stack_5->SetBinContent(3,33.46576);
   jet1_csv_prompt_WZ_stack_5->SetBinContent(4,16.37109);
   jet1_csv_prompt_WZ_stack_5->SetBinContent(5,8.683007);
   jet1_csv_prompt_WZ_stack_5->SetBinContent(6,4.5224);
   jet1_csv_prompt_WZ_stack_5->SetBinContent(7,3.16568);
   jet1_csv_prompt_WZ_stack_5->SetBinContent(8,1.537616);
   jet1_csv_prompt_WZ_stack_5->SetBinContent(9,1.35672);
   jet1_csv_prompt_WZ_stack_5->SetBinContent(10,0.271344);
   jet1_csv_prompt_WZ_stack_5->SetBinError(1,7.246572);
   jet1_csv_prompt_WZ_stack_5->SetBinError(2,2.99026);
   jet1_csv_prompt_WZ_stack_5->SetBinError(3,1.739802);
   jet1_csv_prompt_WZ_stack_5->SetBinError(4,1.216853);
   jet1_csv_prompt_WZ_stack_5->SetBinError(5,0.8862057);
   jet1_csv_prompt_WZ_stack_5->SetBinError(6,0.6395639);
   jet1_csv_prompt_WZ_stack_5->SetBinError(7,0.5350975);
   jet1_csv_prompt_WZ_stack_5->SetBinError(8,0.3729266);
   jet1_csv_prompt_WZ_stack_5->SetBinError(9,0.3503036);
   jet1_csv_prompt_WZ_stack_5->SetBinError(10,0.1566605);
   jet1_csv_prompt_WZ_stack_5->SetEntries(8283);

   ci = TColor::GetColor("#ffcc00");
   jet1_csv_prompt_WZ_stack_5->SetFillColor(ci);
   jet1_csv_prompt_WZ_stack_5->SetMarkerStyle(0);
   jet1_csv_prompt_WZ_stack_5->SetMarkerSize(1.1);
   jet1_csv_prompt_WZ_stack_5->GetXaxis()->SetTitle("DCSV(leading jet)");
   jet1_csv_prompt_WZ_stack_5->GetXaxis()->SetMoreLogLabels();
   jet1_csv_prompt_WZ_stack_5->GetXaxis()->SetLabelFont(42);
   jet1_csv_prompt_WZ_stack_5->GetXaxis()->SetLabelOffset(0.007);
   jet1_csv_prompt_WZ_stack_5->GetXaxis()->SetLabelSize(0.05);
   jet1_csv_prompt_WZ_stack_5->GetXaxis()->SetTitleSize(0.06);
   jet1_csv_prompt_WZ_stack_5->GetXaxis()->SetTitleOffset(0.9);
   jet1_csv_prompt_WZ_stack_5->GetXaxis()->SetTitleFont(42);
   jet1_csv_prompt_WZ_stack_5->GetYaxis()->SetTitle("Jets");
   jet1_csv_prompt_WZ_stack_5->GetYaxis()->SetLabelFont(42);
   jet1_csv_prompt_WZ_stack_5->GetYaxis()->SetLabelOffset(0.007);
   jet1_csv_prompt_WZ_stack_5->GetYaxis()->SetLabelSize(0.05);
   jet1_csv_prompt_WZ_stack_5->GetYaxis()->SetTitleSize(0.06);
   jet1_csv_prompt_WZ_stack_5->GetYaxis()->SetTitleOffset(1.35);
   jet1_csv_prompt_WZ_stack_5->GetYaxis()->SetTitleFont(42);
   jet1_csv_prompt_WZ_stack_5->GetZaxis()->SetLabelFont(42);
   jet1_csv_prompt_WZ_stack_5->GetZaxis()->SetLabelOffset(0.007);
   jet1_csv_prompt_WZ_stack_5->GetZaxis()->SetLabelSize(0.05);
   jet1_csv_prompt_WZ_stack_5->GetZaxis()->SetTitleSize(0.06);
   jet1_csv_prompt_WZ_stack_5->GetZaxis()->SetTitleFont(42);
   jet1_csv_stack->Add(jet1_csv_prompt_WZ_stack_5,"");
   jet1_csv_stack->Draw("same hist");
   
   TH1D *jet1_csv_total__166 = new TH1D("jet1_csv_total__166","dummy",10,0,1);
   jet1_csv_total__166->SetBinContent(1,700.0118);
   jet1_csv_total__166->SetBinContent(2,122.4935);
   jet1_csv_total__166->SetBinContent(3,44.97845);
   jet1_csv_total__166->SetBinContent(4,23.80479);
   jet1_csv_total__166->SetBinContent(5,13.07951);
   jet1_csv_total__166->SetBinContent(6,8.803202);
   jet1_csv_total__166->SetBinContent(7,6.442399);
   jet1_csv_total__166->SetBinContent(8,4.130891);
   jet1_csv_total__166->SetBinContent(9,5.130893);
   jet1_csv_total__166->SetBinContent(10,0.8537947);
   jet1_csv_total__166->SetBinError(1,12.38052);
   jet1_csv_total__166->SetBinError(2,5.337447);
   jet1_csv_total__166->SetBinError(3,3.551438);
   jet1_csv_total__166->SetBinError(4,2.798499);
   jet1_csv_total__166->SetBinError(5,2.007594);
   jet1_csv_total__166->SetBinError(6,1.891835);
   jet1_csv_total__166->SetBinError(7,0.7540629);
   jet1_csv_total__166->SetBinError(8,0.5581327);
   jet1_csv_total__166->SetBinError(9,0.6355962);
   jet1_csv_total__166->SetBinError(10,0.2910984);
   jet1_csv_total__166->SetMinimum(0);
   jet1_csv_total__166->SetMaximum(1050.937);
   jet1_csv_total__166->SetEntries(9419);
   jet1_csv_total__166->SetDirectory(0);

   ci = TColor::GetColor("#00cc00");
   jet1_csv_total__166->SetFillColor(ci);
   jet1_csv_total__166->SetMarkerStyle(20);
   jet1_csv_total__166->SetMarkerSize(1.1);
   jet1_csv_total__166->GetXaxis()->SetTitle("DCSV(leading jet)");
   jet1_csv_total__166->GetXaxis()->SetMoreLogLabels();
   jet1_csv_total__166->GetXaxis()->SetLabelFont(42);
   jet1_csv_total__166->GetXaxis()->SetLabelOffset(999);
   jet1_csv_total__166->GetXaxis()->SetLabelSize(0.05);
   jet1_csv_total__166->GetXaxis()->SetTitleSize(0.05);
   jet1_csv_total__166->GetXaxis()->SetTitleOffset(999);
   jet1_csv_total__166->GetXaxis()->SetTitleFont(42);
   jet1_csv_total__166->GetYaxis()->SetTitle("Jets");
   jet1_csv_total__166->GetYaxis()->SetLabelFont(42);
   jet1_csv_total__166->GetYaxis()->SetLabelOffset(0.007);
   jet1_csv_total__166->GetYaxis()->SetLabelSize(0.05);
   jet1_csv_total__166->GetYaxis()->SetTitleSize(0.06);
   jet1_csv_total__166->GetYaxis()->SetTitleOffset(1.48);
   jet1_csv_total__166->GetYaxis()->SetTitleFont(42);
   jet1_csv_total__166->GetZaxis()->SetLabelFont(42);
   jet1_csv_total__166->GetZaxis()->SetLabelOffset(0.007);
   jet1_csv_total__166->GetZaxis()->SetLabelSize(0.05);
   jet1_csv_total__166->GetZaxis()->SetTitleSize(0.06);
   jet1_csv_total__166->GetZaxis()->SetTitleFont(42);
   jet1_csv_total__166->Draw("AXIS SAME");
   
   Double_t jet1_csv_total_errors_fx3206[10] = {
   0.05,
   0.15,
   0.25,
   0.35,
   0.45,
   0.55,
   0.65,
   0.75,
   0.85,
   0.95};
   Double_t jet1_csv_total_errors_fy3206[10] = {
   700.0118,
   122.4935,
   44.97845,
   23.80479,
   13.07951,
   8.803202,
   6.442399,
   4.130891,
   5.130893,
   0.8537947};
   Double_t jet1_csv_total_errors_felx3206[10] = {
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05};
   Double_t jet1_csv_total_errors_fely3206[10] = {
   12.38052,
   5.337447,
   3.551438,
   2.798499,
   2.007594,
   1.891835,
   0.7540629,
   0.5581327,
   0.6355962,
   0.2910984};
   Double_t jet1_csv_total_errors_fehx3206[10] = {
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05};
   Double_t jet1_csv_total_errors_fehy3206[10] = {
   12.38052,
   5.337447,
   3.551438,
   2.798499,
   2.007594,
   1.891835,
   0.7540629,
   0.5581327,
   0.6355962,
   0.2910984};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(10,jet1_csv_total_errors_fx3206,jet1_csv_total_errors_fy3206,jet1_csv_total_errors_felx3206,jet1_csv_total_errors_fehx3206,jet1_csv_total_errors_fely3206,jet1_csv_total_errors_fehy3206);
   grae->SetName("jet1_csv_total_errors");
   grae->SetTitle("Graph");
   grae->SetFillColor(1);
   grae->SetFillStyle(3013);
   grae->SetMarkerStyle(0);
   
   TH1F *Graph_jet1_csv_total_errors3206 = new TH1F("Graph_jet1_csv_total_errors3206","Graph",100,0,1.1);
   Graph_jet1_csv_total_errors3206->SetMinimum(0.5064267);
   Graph_jet1_csv_total_errors3206->SetMaximum(783.5753);
   Graph_jet1_csv_total_errors3206->SetDirectory(0);
   Graph_jet1_csv_total_errors3206->SetStats(0);
   Graph_jet1_csv_total_errors3206->SetLineStyle(0);
   Graph_jet1_csv_total_errors3206->SetMarkerStyle(20);
   Graph_jet1_csv_total_errors3206->GetXaxis()->SetLabelFont(42);
   Graph_jet1_csv_total_errors3206->GetXaxis()->SetLabelOffset(0.007);
   Graph_jet1_csv_total_errors3206->GetXaxis()->SetLabelSize(0.05);
   Graph_jet1_csv_total_errors3206->GetXaxis()->SetTitleSize(0.06);
   Graph_jet1_csv_total_errors3206->GetXaxis()->SetTitleOffset(0.9);
   Graph_jet1_csv_total_errors3206->GetXaxis()->SetTitleFont(42);
   Graph_jet1_csv_total_errors3206->GetYaxis()->SetLabelFont(42);
   Graph_jet1_csv_total_errors3206->GetYaxis()->SetLabelOffset(0.007);
   Graph_jet1_csv_total_errors3206->GetYaxis()->SetLabelSize(0.05);
   Graph_jet1_csv_total_errors3206->GetYaxis()->SetTitleSize(0.06);
   Graph_jet1_csv_total_errors3206->GetYaxis()->SetTitleOffset(1.35);
   Graph_jet1_csv_total_errors3206->GetYaxis()->SetTitleFont(42);
   Graph_jet1_csv_total_errors3206->GetZaxis()->SetLabelFont(42);
   Graph_jet1_csv_total_errors3206->GetZaxis()->SetLabelOffset(0.007);
   Graph_jet1_csv_total_errors3206->GetZaxis()->SetLabelSize(0.05);
   Graph_jet1_csv_total_errors3206->GetZaxis()->SetTitleSize(0.06);
   Graph_jet1_csv_total_errors3206->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_jet1_csv_total_errors3206);
   
   grae->Draw("pe2 ");
   
   Double_t jet1_csv_data_graph_fx3207[10] = {
   0.05,
   0.15,
   0.25,
   0.35,
   0.45,
   0.55,
   0.65,
   0.75,
   0.85,
   0.95};
   Double_t jet1_csv_data_graph_fy3207[10] = {
   771,
   124,
   70,
   24,
   18,
   17,
   8,
   9,
   15,
   0};
   Double_t jet1_csv_data_graph_felx3207[10] = {
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05};
   Double_t jet1_csv_data_graph_fely3207[10] = {
   27.76146,
   11.12073,
   8.346733,
   4.864704,
   4.202964,
   4.082258,
   2.768432,
   2.943511,
   3.829449,
   0};
   Double_t jet1_csv_data_graph_fehx3207[10] = {
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05};
   Double_t jet1_csv_data_graph_fehy3207[10] = {
   28.77952,
   12.16575,
   9.406665,
   5.967055,
   5.321116,
   5.203825,
   3.94522,
   4.110286,
   4.958839,
   1.841055};
   grae = new TGraphAsymmErrors(10,jet1_csv_data_graph_fx3207,jet1_csv_data_graph_fy3207,jet1_csv_data_graph_felx3207,jet1_csv_data_graph_fehx3207,jet1_csv_data_graph_fely3207,jet1_csv_data_graph_fehy3207);
   grae->SetName("jet1_csv_data_graph");
   grae->SetTitle("Graph");
   grae->SetFillStyle(1000);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.1);
   
   TH1F *Graph_jet1_csv_data_graph3207 = new TH1F("Graph_jet1_csv_data_graph3207","Graph",100,0,1.1);
   Graph_jet1_csv_data_graph3207->SetMinimum(0);
   Graph_jet1_csv_data_graph3207->SetMaximum(879.7575);
   Graph_jet1_csv_data_graph3207->SetDirectory(0);
   Graph_jet1_csv_data_graph3207->SetStats(0);
   Graph_jet1_csv_data_graph3207->SetLineStyle(0);
   Graph_jet1_csv_data_graph3207->SetMarkerStyle(20);
   Graph_jet1_csv_data_graph3207->GetXaxis()->SetLabelFont(42);
   Graph_jet1_csv_data_graph3207->GetXaxis()->SetLabelOffset(0.007);
   Graph_jet1_csv_data_graph3207->GetXaxis()->SetLabelSize(0.05);
   Graph_jet1_csv_data_graph3207->GetXaxis()->SetTitleSize(0.06);
   Graph_jet1_csv_data_graph3207->GetXaxis()->SetTitleOffset(0.9);
   Graph_jet1_csv_data_graph3207->GetXaxis()->SetTitleFont(42);
   Graph_jet1_csv_data_graph3207->GetYaxis()->SetLabelFont(42);
   Graph_jet1_csv_data_graph3207->GetYaxis()->SetLabelOffset(0.007);
   Graph_jet1_csv_data_graph3207->GetYaxis()->SetLabelSize(0.05);
   Graph_jet1_csv_data_graph3207->GetYaxis()->SetTitleSize(0.06);
   Graph_jet1_csv_data_graph3207->GetYaxis()->SetTitleOffset(1.35);
   Graph_jet1_csv_data_graph3207->GetYaxis()->SetTitleFont(42);
   Graph_jet1_csv_data_graph3207->GetZaxis()->SetLabelFont(42);
   Graph_jet1_csv_data_graph3207->GetZaxis()->SetLabelOffset(0.007);
   Graph_jet1_csv_data_graph3207->GetZaxis()->SetLabelSize(0.05);
   Graph_jet1_csv_data_graph3207->GetZaxis()->SetTitleSize(0.06);
   Graph_jet1_csv_data_graph3207->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_jet1_csv_data_graph3207);
   
   grae->Draw("pz ");
   
   TLegend *leg = new TLegend(0.62,0.628,0.9,0.91,NULL,"brNDC");
   leg->SetBorderSize(1);
   leg->SetTextSize(0.036);
   leg->SetLineColor(0);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("jet1_csv_data","Data","LPE");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1.1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("jet1_csv_prompt_WZ_stack_5","WZ","F");

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
   entry=leg->AddEntry("jet1_csv_prompt_ZZ_stack_4","qqZZ","F");

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
   entry=leg->AddEntry("jet1_csv_fakes_DY_stack_3","Fakes DY","F");

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
   entry=leg->AddEntry("jet1_csv_fakes_TT_stack_2","Fakes TT","F");

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
   entry=leg->AddEntry("jet1_csv_total_errors","Total unc.","F");
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
   jet1_csv_canvas->cd();
  
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
   
   TH1D *jet1_csv_total__167 = new TH1D("jet1_csv_total__167","dummy",10,0,1);
   jet1_csv_total__167->SetBinContent(1,1);
   jet1_csv_total__167->SetBinContent(2,1);
   jet1_csv_total__167->SetBinContent(3,1);
   jet1_csv_total__167->SetBinContent(4,1);
   jet1_csv_total__167->SetBinContent(5,1);
   jet1_csv_total__167->SetBinContent(6,1);
   jet1_csv_total__167->SetBinContent(7,1);
   jet1_csv_total__167->SetBinContent(8,1);
   jet1_csv_total__167->SetBinContent(9,1);
   jet1_csv_total__167->SetBinContent(10,1);
   jet1_csv_total__167->SetMinimum(0.5);
   jet1_csv_total__167->SetMaximum(2);
   jet1_csv_total__167->SetEntries(9429);

   ci = TColor::GetColor("#00cc00");
   jet1_csv_total__167->SetFillColor(ci);

   ci = TColor::GetColor("#6666ff");
   jet1_csv_total__167->SetMarkerColor(ci);
   jet1_csv_total__167->SetMarkerSize(1.1);
   jet1_csv_total__167->GetXaxis()->SetTitle("DCSV(leading jet)");
   jet1_csv_total__167->GetXaxis()->SetMoreLogLabels();
   jet1_csv_total__167->GetXaxis()->SetLabelFont(42);
   jet1_csv_total__167->GetXaxis()->SetLabelOffset(0.015);
   jet1_csv_total__167->GetXaxis()->SetLabelSize(0.1);
   jet1_csv_total__167->GetXaxis()->SetTitleSize(0.14);
   jet1_csv_total__167->GetXaxis()->SetTitleFont(42);
   jet1_csv_total__167->GetYaxis()->SetTitle("Data/pred.");
   jet1_csv_total__167->GetYaxis()->SetDecimals();
   jet1_csv_total__167->GetYaxis()->SetNdivisions(505);
   jet1_csv_total__167->GetYaxis()->SetLabelFont(42);
   jet1_csv_total__167->GetYaxis()->SetLabelOffset(0.01);
   jet1_csv_total__167->GetYaxis()->SetLabelSize(0.11);
   jet1_csv_total__167->GetYaxis()->SetTitleSize(0.14);
   jet1_csv_total__167->GetYaxis()->SetTitleOffset(0.62);
   jet1_csv_total__167->GetYaxis()->SetTitleFont(42);
   jet1_csv_total__167->GetZaxis()->SetLabelFont(42);
   jet1_csv_total__167->GetZaxis()->SetLabelOffset(0.007);
   jet1_csv_total__167->GetZaxis()->SetLabelSize(0.05);
   jet1_csv_total__167->GetZaxis()->SetTitleSize(0.06);
   jet1_csv_total__167->GetZaxis()->SetTitleFont(42);
   jet1_csv_total__167->Draw("AXIS");
   
   Double_t jet1_csv_total_errors_fx3208[10] = {
   0.05,
   0.15,
   0.25,
   0.35,
   0.45,
   0.55,
   0.65,
   0.75,
   0.85,
   0.95};
   Double_t jet1_csv_total_errors_fy3208[10] = {
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1};
   Double_t jet1_csv_total_errors_felx3208[10] = {
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05};
   Double_t jet1_csv_total_errors_fely3208[10] = {
   0.01768615,
   0.04357331,
   0.07895867,
   0.1175603,
   0.1534916,
   0.2149031,
   0.1170469,
   0.1351119,
   0.1238763,
   0.3409466};
   Double_t jet1_csv_total_errors_fehx3208[10] = {
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05};
   Double_t jet1_csv_total_errors_fehy3208[10] = {
   0.01768615,
   0.04357331,
   0.07895867,
   0.1175603,
   0.1534916,
   0.2149031,
   0.1170469,
   0.1351119,
   0.1238763,
   0.3409466};
   grae = new TGraphAsymmErrors(10,jet1_csv_total_errors_fx3208,jet1_csv_total_errors_fy3208,jet1_csv_total_errors_felx3208,jet1_csv_total_errors_fehx3208,jet1_csv_total_errors_fely3208,jet1_csv_total_errors_fehy3208);
   grae->SetName("jet1_csv_total_errors");
   grae->SetTitle("Graph");

   ci = TColor::GetColor("#00ffff");
   grae->SetFillColor(ci);

   ci = TColor::GetColor("#00ffff");
   grae->SetMarkerColor(ci);
   grae->Draw("e2");
   
   Double_t jet1_csv_total_errors_fx3209[10] = {
   0.05,
   0.15,
   0.25,
   0.35,
   0.45,
   0.55,
   0.65,
   0.75,
   0.85,
   0.95};
   Double_t jet1_csv_total_errors_fy3209[10] = {
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1};
   Double_t jet1_csv_total_errors_felx3209[10] = {
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05};
   Double_t jet1_csv_total_errors_fely3209[10] = {
   0.01768615,
   0.04357331,
   0.07895867,
   0.1175603,
   0.1534916,
   0.2149031,
   0.1170469,
   0.1351119,
   0.1238763,
   0.3409466};
   Double_t jet1_csv_total_errors_fehx3209[10] = {
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05};
   Double_t jet1_csv_total_errors_fehy3209[10] = {
   0.01768615,
   0.04357331,
   0.07895867,
   0.1175603,
   0.1534916,
   0.2149031,
   0.1170469,
   0.1351119,
   0.1238763,
   0.3409466};
   grae = new TGraphAsymmErrors(10,jet1_csv_total_errors_fx3209,jet1_csv_total_errors_fy3209,jet1_csv_total_errors_felx3209,jet1_csv_total_errors_fehx3209,jet1_csv_total_errors_fely3209,jet1_csv_total_errors_fehy3209);
   grae->SetName("jet1_csv_total_errors");
   grae->SetTitle("Graph");

   ci = TColor::GetColor("#6666ff");
   grae->SetFillColor(ci);

   ci = TColor::GetColor("#6666ff");
   grae->SetMarkerColor(ci);
   grae->Draw("e2 ");
   
   TH1D *jet1_csv_total__168 = new TH1D("jet1_csv_total__168","dummy",10,0,1);
   jet1_csv_total__168->SetBinContent(1,1);
   jet1_csv_total__168->SetBinContent(2,1);
   jet1_csv_total__168->SetBinContent(3,1);
   jet1_csv_total__168->SetBinContent(4,1);
   jet1_csv_total__168->SetBinContent(5,1);
   jet1_csv_total__168->SetBinContent(6,1);
   jet1_csv_total__168->SetBinContent(7,1);
   jet1_csv_total__168->SetBinContent(8,1);
   jet1_csv_total__168->SetBinContent(9,1);
   jet1_csv_total__168->SetBinContent(10,1);
   jet1_csv_total__168->SetMinimum(0.5);
   jet1_csv_total__168->SetMaximum(2);
   jet1_csv_total__168->SetEntries(9429);

   ci = TColor::GetColor("#00cc00");
   jet1_csv_total__168->SetFillColor(ci);

   ci = TColor::GetColor("#6666ff");
   jet1_csv_total__168->SetMarkerColor(ci);
   jet1_csv_total__168->SetMarkerSize(1.1);
   jet1_csv_total__168->GetXaxis()->SetTitle("DCSV(leading jet)");
   jet1_csv_total__168->GetXaxis()->SetMoreLogLabels();
   jet1_csv_total__168->GetXaxis()->SetLabelFont(42);
   jet1_csv_total__168->GetXaxis()->SetLabelOffset(0.015);
   jet1_csv_total__168->GetXaxis()->SetLabelSize(0.1);
   jet1_csv_total__168->GetXaxis()->SetTitleSize(0.14);
   jet1_csv_total__168->GetXaxis()->SetTitleFont(42);
   jet1_csv_total__168->GetYaxis()->SetTitle("Data/pred.");
   jet1_csv_total__168->GetYaxis()->SetDecimals();
   jet1_csv_total__168->GetYaxis()->SetNdivisions(505);
   jet1_csv_total__168->GetYaxis()->SetLabelFont(42);
   jet1_csv_total__168->GetYaxis()->SetLabelOffset(0.01);
   jet1_csv_total__168->GetYaxis()->SetLabelSize(0.11);
   jet1_csv_total__168->GetYaxis()->SetTitleSize(0.14);
   jet1_csv_total__168->GetYaxis()->SetTitleOffset(0.62);
   jet1_csv_total__168->GetYaxis()->SetTitleFont(42);
   jet1_csv_total__168->GetZaxis()->SetLabelFont(42);
   jet1_csv_total__168->GetZaxis()->SetLabelOffset(0.007);
   jet1_csv_total__168->GetZaxis()->SetLabelSize(0.05);
   jet1_csv_total__168->GetZaxis()->SetTitleSize(0.06);
   jet1_csv_total__168->GetZaxis()->SetTitleFont(42);
   jet1_csv_total__168->Draw("AXIS SAME");
   TLine *line = new TLine(0,1,1,1);
   line->SetLineColor(58);
   line->SetLineWidth(2);
   line->Draw();
   
   Double_t data_div_fx3210[10] = {
   0.05,
   0.15,
   0.25,
   0.35,
   0.45,
   0.55,
   0.65,
   0.75,
   0.85,
   0.95};
   Double_t data_div_fy3210[10] = {
   1.10141,
   1.012299,
   1.556301,
   1.0082,
   1.376199,
   1.931116,
   1.241773,
   2.178707,
   2.923467,
   0};
   Double_t data_div_felx3210[10] = {
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05};
   Double_t data_div_fely3210[10] = {
   0.03965856,
   0.09078625,
   0.1855718,
   0.2043581,
   0.3213397,
   0.4637243,
   0.4297207,
   0.7125609,
   0.7463513,
   0};
   Double_t data_div_fehx3210[10] = {
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05};
   Double_t data_div_fehy3210[10] = {
   0.0411129,
   0.09931748,
   0.2091372,
   0.2506661,
   0.4068285,
   0.5911287,
   0.6123837,
   0.9950122,
   0.966467,
   2.15632};
   grae = new TGraphAsymmErrors(10,data_div_fx3210,data_div_fy3210,data_div_felx3210,data_div_fehx3210,data_div_fely3210,data_div_fehy3210);
   grae->SetName("data_div");
   grae->SetTitle("Graph");
   grae->SetFillStyle(1000);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.1);
   
   TH1F *Graph_jet1_csv_data_graph3210 = new TH1F("Graph_jet1_csv_data_graph3210","Graph",100,0,1.1);
   Graph_jet1_csv_data_graph3210->SetMinimum(0);
   Graph_jet1_csv_data_graph3210->SetMaximum(879.7575);
   Graph_jet1_csv_data_graph3210->SetDirectory(0);
   Graph_jet1_csv_data_graph3210->SetStats(0);
   Graph_jet1_csv_data_graph3210->SetLineStyle(0);
   Graph_jet1_csv_data_graph3210->SetMarkerStyle(20);
   Graph_jet1_csv_data_graph3210->GetXaxis()->SetLabelFont(42);
   Graph_jet1_csv_data_graph3210->GetXaxis()->SetLabelOffset(0.007);
   Graph_jet1_csv_data_graph3210->GetXaxis()->SetLabelSize(0.05);
   Graph_jet1_csv_data_graph3210->GetXaxis()->SetTitleSize(0.06);
   Graph_jet1_csv_data_graph3210->GetXaxis()->SetTitleOffset(0.9);
   Graph_jet1_csv_data_graph3210->GetXaxis()->SetTitleFont(42);
   Graph_jet1_csv_data_graph3210->GetYaxis()->SetLabelFont(42);
   Graph_jet1_csv_data_graph3210->GetYaxis()->SetLabelOffset(0.007);
   Graph_jet1_csv_data_graph3210->GetYaxis()->SetLabelSize(0.05);
   Graph_jet1_csv_data_graph3210->GetYaxis()->SetTitleSize(0.06);
   Graph_jet1_csv_data_graph3210->GetYaxis()->SetTitleOffset(1.35);
   Graph_jet1_csv_data_graph3210->GetYaxis()->SetTitleFont(42);
   Graph_jet1_csv_data_graph3210->GetZaxis()->SetLabelFont(42);
   Graph_jet1_csv_data_graph3210->GetZaxis()->SetLabelOffset(0.007);
   Graph_jet1_csv_data_graph3210->GetZaxis()->SetLabelSize(0.05);
   Graph_jet1_csv_data_graph3210->GetZaxis()->SetTitleSize(0.06);
   Graph_jet1_csv_data_graph3210->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_jet1_csv_data_graph3210);
   
   grae->Draw("pz ");
   
   leg = new TLegend(0,0,0,0,NULL,"brNDC");
   leg->SetBorderSize(1);
   leg->SetTextSize(0.084);
   leg->SetLineColor(0);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   entry=leg->AddEntry("jet1_csv_total_errors","stat. unc.","F");
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
   entry=leg->AddEntry("jet1_csv_total_errors","total unc.","F");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   leg->Draw();
   pad2->Modified();
   jet1_csv_canvas->cd();
   jet1_csv_canvas->Modified();
   jet1_csv_canvas->cd();
   jet1_csv_canvas->SetSelected(jet1_csv_canvas);
}
