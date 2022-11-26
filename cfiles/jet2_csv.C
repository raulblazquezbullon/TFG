void jet2_csv()
{
//=========Macro generated from canvas: jet2_csv_canvas/jet2_csv
//=========  (Fri Nov 18 13:17:19 2022) by ROOT version 6.12/07
   TCanvas *jet2_csv_canvas = new TCanvas("jet2_csv_canvas", "jet2_csv",0,0,600,750);
   gStyle->SetOptFit(1);
   gStyle->SetOptStat(0);
   gStyle->SetOptTitle(0);
   jet2_csv_canvas->SetHighLightColor(2);
   jet2_csv_canvas->Range(0,0,1,1);
   jet2_csv_canvas->SetFillColor(0);
   jet2_csv_canvas->SetBorderMode(0);
   jet2_csv_canvas->SetBorderSize(2);
   jet2_csv_canvas->SetTickx(1);
   jet2_csv_canvas->SetTicky(1);
   jet2_csv_canvas->SetLeftMargin(0.18);
   jet2_csv_canvas->SetRightMargin(0.04);
   jet2_csv_canvas->SetBottomMargin(0.13);
   jet2_csv_canvas->SetFrameFillStyle(0);
   jet2_csv_canvas->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: pad1
   TPad *pad1 = new TPad("pad1", "pad1",0,0.3,1,1);
   pad1->Draw();
   pad1->cd();
   pad1->Range(-0.2307692,-16.79038,1.051282,654.825);
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
   
   TH1D *jet2_csv_total__169 = new TH1D("jet2_csv_total__169","dummy",10,0,1);
   jet2_csv_total__169->SetBinContent(1,327.6365);
   jet2_csv_total__169->SetBinContent(2,65.29222);
   jet2_csv_total__169->SetBinContent(3,22.55084);
   jet2_csv_total__169->SetBinContent(4,10.96869);
   jet2_csv_total__169->SetBinContent(5,7.603716);
   jet2_csv_total__169->SetBinContent(6,2.659977);
   jet2_csv_total__169->SetBinContent(7,2.782231);
   jet2_csv_total__169->SetBinContent(8,1.635916);
   jet2_csv_total__169->SetBinContent(9,1.853986);
   jet2_csv_total__169->SetBinContent(10,2.051993);
   jet2_csv_total__169->SetBinError(1,9.021997);
   jet2_csv_total__169->SetBinError(2,2.999063);
   jet2_csv_total__169->SetBinError(3,2.226119);
   jet2_csv_total__169->SetBinError(4,1.951793);
   jet2_csv_total__169->SetBinError(5,1.866052);
   jet2_csv_total__169->SetBinError(6,0.5087275);
   jet2_csv_total__169->SetBinError(7,0.5039181);
   jet2_csv_total__169->SetBinError(8,0.3611713);
   jet2_csv_total__169->SetBinError(9,0.3865939);
   jet2_csv_total__169->SetBinError(10,1.725938);
   jet2_csv_total__169->SetMinimum(0);
   jet2_csv_total__169->SetMaximum(614.5281);
   jet2_csv_total__169->SetEntries(4536);
   jet2_csv_total__169->SetDirectory(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#00cc00");
   jet2_csv_total__169->SetFillColor(ci);
   jet2_csv_total__169->SetMarkerStyle(20);
   jet2_csv_total__169->SetMarkerSize(1.1);
   jet2_csv_total__169->GetXaxis()->SetTitle("DCSV(subleading jet)");
   jet2_csv_total__169->GetXaxis()->SetMoreLogLabels();
   jet2_csv_total__169->GetXaxis()->SetLabelFont(42);
   jet2_csv_total__169->GetXaxis()->SetLabelOffset(999);
   jet2_csv_total__169->GetXaxis()->SetLabelSize(0.05);
   jet2_csv_total__169->GetXaxis()->SetTitleSize(0.05);
   jet2_csv_total__169->GetXaxis()->SetTitleOffset(999);
   jet2_csv_total__169->GetXaxis()->SetTitleFont(42);
   jet2_csv_total__169->GetYaxis()->SetTitle("Jets");
   jet2_csv_total__169->GetYaxis()->SetLabelFont(42);
   jet2_csv_total__169->GetYaxis()->SetLabelOffset(0.007);
   jet2_csv_total__169->GetYaxis()->SetLabelSize(0.05);
   jet2_csv_total__169->GetYaxis()->SetTitleSize(0.06);
   jet2_csv_total__169->GetYaxis()->SetTitleOffset(1.48);
   jet2_csv_total__169->GetYaxis()->SetTitleFont(42);
   jet2_csv_total__169->GetZaxis()->SetLabelFont(42);
   jet2_csv_total__169->GetZaxis()->SetLabelOffset(0.007);
   jet2_csv_total__169->GetZaxis()->SetLabelSize(0.05);
   jet2_csv_total__169->GetZaxis()->SetTitleSize(0.06);
   jet2_csv_total__169->GetZaxis()->SetTitleFont(42);
   jet2_csv_total__169->Draw("HIST");
   
   THStack *jet2_csv_stack = new THStack();
   jet2_csv_stack->SetName("jet2_csv_stack");
   jet2_csv_stack->SetTitle("jet2_csv");
   
   TH1F *jet2_csv_stack_stack_43 = new TH1F("jet2_csv_stack_stack_43","jet2_csv",10,0,1);
   jet2_csv_stack_stack_43->SetMinimum(0);
   jet2_csv_stack_stack_43->SetMaximum(344.0183);
   jet2_csv_stack_stack_43->SetDirectory(0);
   jet2_csv_stack_stack_43->SetStats(0);
   jet2_csv_stack_stack_43->SetLineStyle(0);
   jet2_csv_stack_stack_43->SetMarkerStyle(20);
   jet2_csv_stack_stack_43->GetXaxis()->SetLabelFont(42);
   jet2_csv_stack_stack_43->GetXaxis()->SetLabelOffset(0.007);
   jet2_csv_stack_stack_43->GetXaxis()->SetLabelSize(0.05);
   jet2_csv_stack_stack_43->GetXaxis()->SetTitleSize(0.06);
   jet2_csv_stack_stack_43->GetXaxis()->SetTitleOffset(0.9);
   jet2_csv_stack_stack_43->GetXaxis()->SetTitleFont(42);
   jet2_csv_stack_stack_43->GetYaxis()->SetLabelFont(42);
   jet2_csv_stack_stack_43->GetYaxis()->SetLabelOffset(0.007);
   jet2_csv_stack_stack_43->GetYaxis()->SetLabelSize(0.05);
   jet2_csv_stack_stack_43->GetYaxis()->SetTitleSize(0.06);
   jet2_csv_stack_stack_43->GetYaxis()->SetTitleOffset(1.35);
   jet2_csv_stack_stack_43->GetYaxis()->SetTitleFont(42);
   jet2_csv_stack_stack_43->GetZaxis()->SetLabelFont(42);
   jet2_csv_stack_stack_43->GetZaxis()->SetLabelOffset(0.007);
   jet2_csv_stack_stack_43->GetZaxis()->SetLabelSize(0.05);
   jet2_csv_stack_stack_43->GetZaxis()->SetTitleSize(0.06);
   jet2_csv_stack_stack_43->GetZaxis()->SetTitleFont(42);
   jet2_csv_stack->SetHistogram(jet2_csv_stack_stack_43);
   
   
   TH1D *jet2_csv_fakes_VV_stack_1 = new TH1D("jet2_csv_fakes_VV_stack_1","dummy",10,0,1);
   jet2_csv_fakes_VV_stack_1->SetBinContent(1,0.1943867);
   jet2_csv_fakes_VV_stack_1->SetBinError(1,0.1374522);
   jet2_csv_fakes_VV_stack_1->SetEntries(6);

   ci = TColor::GetColor("#2e3294");
   jet2_csv_fakes_VV_stack_1->SetFillColor(ci);
   jet2_csv_fakes_VV_stack_1->SetMarkerStyle(0);
   jet2_csv_fakes_VV_stack_1->SetMarkerSize(1.1);
   jet2_csv_fakes_VV_stack_1->GetXaxis()->SetTitle("DCSV(subleading jet)");
   jet2_csv_fakes_VV_stack_1->GetXaxis()->SetMoreLogLabels();
   jet2_csv_fakes_VV_stack_1->GetXaxis()->SetLabelFont(42);
   jet2_csv_fakes_VV_stack_1->GetXaxis()->SetLabelOffset(0.007);
   jet2_csv_fakes_VV_stack_1->GetXaxis()->SetLabelSize(0.05);
   jet2_csv_fakes_VV_stack_1->GetXaxis()->SetTitleSize(0.06);
   jet2_csv_fakes_VV_stack_1->GetXaxis()->SetTitleOffset(0.9);
   jet2_csv_fakes_VV_stack_1->GetXaxis()->SetTitleFont(42);
   jet2_csv_fakes_VV_stack_1->GetYaxis()->SetTitle("Jets");
   jet2_csv_fakes_VV_stack_1->GetYaxis()->SetLabelFont(42);
   jet2_csv_fakes_VV_stack_1->GetYaxis()->SetLabelOffset(0.007);
   jet2_csv_fakes_VV_stack_1->GetYaxis()->SetLabelSize(0.05);
   jet2_csv_fakes_VV_stack_1->GetYaxis()->SetTitleSize(0.06);
   jet2_csv_fakes_VV_stack_1->GetYaxis()->SetTitleOffset(1.35);
   jet2_csv_fakes_VV_stack_1->GetYaxis()->SetTitleFont(42);
   jet2_csv_fakes_VV_stack_1->GetZaxis()->SetLabelFont(42);
   jet2_csv_fakes_VV_stack_1->GetZaxis()->SetLabelOffset(0.007);
   jet2_csv_fakes_VV_stack_1->GetZaxis()->SetLabelSize(0.05);
   jet2_csv_fakes_VV_stack_1->GetZaxis()->SetTitleSize(0.06);
   jet2_csv_fakes_VV_stack_1->GetZaxis()->SetTitleFont(42);
   jet2_csv_stack->Add(jet2_csv_fakes_VV_stack_1,"");
   
   TH1D *jet2_csv_fakes_TT_stack_2 = new TH1D("jet2_csv_fakes_TT_stack_2","dummy",10,0,1);
   jet2_csv_fakes_TT_stack_2->SetBinContent(1,25.67074);
   jet2_csv_fakes_TT_stack_2->SetBinContent(2,4.812398);
   jet2_csv_fakes_TT_stack_2->SetBinContent(3,1.994827);
   jet2_csv_fakes_TT_stack_2->SetBinContent(4,1.462873);
   jet2_csv_fakes_TT_stack_2->SetBinContent(5,0.9974134);
   jet2_csv_fakes_TT_stack_2->SetBinContent(6,0.6649422);
   jet2_csv_fakes_TT_stack_2->SetBinContent(7,1.329884);
   jet2_csv_fakes_TT_stack_2->SetBinContent(8,0.7314365);
   jet2_csv_fakes_TT_stack_2->SetBinContent(9,1.130402);
   jet2_csv_fakes_TT_stack_2->SetBinContent(10,0.3324711);
   jet2_csv_fakes_TT_stack_2->SetBinError(1,1.322439);
   jet2_csv_fakes_TT_stack_2->SetBinError(2,0.5746623);
   jet2_csv_fakes_TT_stack_2->SetBinError(3,0.3761481);
   jet2_csv_fakes_TT_stack_2->SetBinError(4,0.3118856);
   jet2_csv_fakes_TT_stack_2->SetBinError(5,0.257531);
   jet2_csv_fakes_TT_stack_2->SetBinError(6,0.2102732);
   jet2_csv_fakes_TT_stack_2->SetBinError(7,0.2973712);
   jet2_csv_fakes_TT_stack_2->SetBinError(8,0.2205364);
   jet2_csv_fakes_TT_stack_2->SetBinError(9,0.2898416);
   jet2_csv_fakes_TT_stack_2->SetBinError(10,0.1486856);
   jet2_csv_fakes_TT_stack_2->SetEntries(603);

   ci = TColor::GetColor("#666666");
   jet2_csv_fakes_TT_stack_2->SetFillColor(ci);
   jet2_csv_fakes_TT_stack_2->SetMarkerStyle(0);
   jet2_csv_fakes_TT_stack_2->SetMarkerSize(1.1);
   jet2_csv_fakes_TT_stack_2->GetXaxis()->SetTitle("DCSV(subleading jet)");
   jet2_csv_fakes_TT_stack_2->GetXaxis()->SetMoreLogLabels();
   jet2_csv_fakes_TT_stack_2->GetXaxis()->SetLabelFont(42);
   jet2_csv_fakes_TT_stack_2->GetXaxis()->SetLabelOffset(0.007);
   jet2_csv_fakes_TT_stack_2->GetXaxis()->SetLabelSize(0.05);
   jet2_csv_fakes_TT_stack_2->GetXaxis()->SetTitleSize(0.06);
   jet2_csv_fakes_TT_stack_2->GetXaxis()->SetTitleOffset(0.9);
   jet2_csv_fakes_TT_stack_2->GetXaxis()->SetTitleFont(42);
   jet2_csv_fakes_TT_stack_2->GetYaxis()->SetTitle("Jets");
   jet2_csv_fakes_TT_stack_2->GetYaxis()->SetLabelFont(42);
   jet2_csv_fakes_TT_stack_2->GetYaxis()->SetLabelOffset(0.007);
   jet2_csv_fakes_TT_stack_2->GetYaxis()->SetLabelSize(0.05);
   jet2_csv_fakes_TT_stack_2->GetYaxis()->SetTitleSize(0.06);
   jet2_csv_fakes_TT_stack_2->GetYaxis()->SetTitleOffset(1.35);
   jet2_csv_fakes_TT_stack_2->GetYaxis()->SetTitleFont(42);
   jet2_csv_fakes_TT_stack_2->GetZaxis()->SetLabelFont(42);
   jet2_csv_fakes_TT_stack_2->GetZaxis()->SetLabelOffset(0.007);
   jet2_csv_fakes_TT_stack_2->GetZaxis()->SetLabelSize(0.05);
   jet2_csv_fakes_TT_stack_2->GetZaxis()->SetTitleSize(0.06);
   jet2_csv_fakes_TT_stack_2->GetZaxis()->SetTitleFont(42);
   jet2_csv_stack->Add(jet2_csv_fakes_TT_stack_2,"");
   
   TH1D *jet2_csv_fakes_DY_stack_3 = new TH1D("jet2_csv_fakes_DY_stack_3","dummy",10,0,1);
   jet2_csv_fakes_DY_stack_3->SetBinContent(1,30.9514);
   jet2_csv_fakes_DY_stack_3->SetBinContent(2,1.719522);
   jet2_csv_fakes_DY_stack_3->SetBinContent(3,1.719522);
   jet2_csv_fakes_DY_stack_3->SetBinContent(4,1.719522);
   jet2_csv_fakes_DY_stack_3->SetBinContent(5,1.719522);
   jet2_csv_fakes_DY_stack_3->SetBinContent(10,1.719522);
   jet2_csv_fakes_DY_stack_3->SetBinError(1,7.295314);
   jet2_csv_fakes_DY_stack_3->SetBinError(2,1.719522);
   jet2_csv_fakes_DY_stack_3->SetBinError(3,1.719522);
   jet2_csv_fakes_DY_stack_3->SetBinError(4,1.719522);
   jet2_csv_fakes_DY_stack_3->SetBinError(5,1.719522);
   jet2_csv_fakes_DY_stack_3->SetBinError(10,1.719522);
   jet2_csv_fakes_DY_stack_3->SetEntries(27);

   ci = TColor::GetColor("#cccccc");
   jet2_csv_fakes_DY_stack_3->SetFillColor(ci);
   jet2_csv_fakes_DY_stack_3->SetMarkerStyle(0);
   jet2_csv_fakes_DY_stack_3->SetMarkerSize(1.1);
   jet2_csv_fakes_DY_stack_3->GetXaxis()->SetTitle("DCSV(subleading jet)");
   jet2_csv_fakes_DY_stack_3->GetXaxis()->SetMoreLogLabels();
   jet2_csv_fakes_DY_stack_3->GetXaxis()->SetLabelFont(42);
   jet2_csv_fakes_DY_stack_3->GetXaxis()->SetLabelOffset(0.007);
   jet2_csv_fakes_DY_stack_3->GetXaxis()->SetLabelSize(0.05);
   jet2_csv_fakes_DY_stack_3->GetXaxis()->SetTitleSize(0.06);
   jet2_csv_fakes_DY_stack_3->GetXaxis()->SetTitleOffset(0.9);
   jet2_csv_fakes_DY_stack_3->GetXaxis()->SetTitleFont(42);
   jet2_csv_fakes_DY_stack_3->GetYaxis()->SetTitle("Jets");
   jet2_csv_fakes_DY_stack_3->GetYaxis()->SetLabelFont(42);
   jet2_csv_fakes_DY_stack_3->GetYaxis()->SetLabelOffset(0.007);
   jet2_csv_fakes_DY_stack_3->GetYaxis()->SetLabelSize(0.05);
   jet2_csv_fakes_DY_stack_3->GetYaxis()->SetTitleSize(0.06);
   jet2_csv_fakes_DY_stack_3->GetYaxis()->SetTitleOffset(1.35);
   jet2_csv_fakes_DY_stack_3->GetYaxis()->SetTitleFont(42);
   jet2_csv_fakes_DY_stack_3->GetZaxis()->SetLabelFont(42);
   jet2_csv_fakes_DY_stack_3->GetZaxis()->SetLabelOffset(0.007);
   jet2_csv_fakes_DY_stack_3->GetZaxis()->SetLabelSize(0.05);
   jet2_csv_fakes_DY_stack_3->GetZaxis()->SetTitleSize(0.06);
   jet2_csv_fakes_DY_stack_3->GetZaxis()->SetTitleFont(42);
   jet2_csv_stack->Add(jet2_csv_fakes_DY_stack_3,"");
   
   TH1D *jet2_csv_prompt_ZZ_stack_4 = new TH1D("jet2_csv_prompt_ZZ_stack_4","dummy",10,0,1);
   jet2_csv_prompt_ZZ_stack_4->SetBinContent(1,20.55037);
   jet2_csv_prompt_ZZ_stack_4->SetBinContent(2,4.220164);
   jet2_csv_prompt_ZZ_stack_4->SetBinContent(3,1.651369);
   jet2_csv_prompt_ZZ_stack_4->SetBinContent(4,0.5504562);
   jet2_csv_prompt_ZZ_stack_4->SetBinContent(5,0.1834854);
   jet2_csv_prompt_ZZ_stack_4->SetBinContent(6,0.3669708);
   jet2_csv_prompt_ZZ_stack_4->SetBinContent(7,0.3669708);
   jet2_csv_prompt_ZZ_stack_4->SetBinError(1,1.941827);
   jet2_csv_prompt_ZZ_stack_4->SetBinError(2,0.8799651);
   jet2_csv_prompt_ZZ_stack_4->SetBinError(3,0.5504562);
   jet2_csv_prompt_ZZ_stack_4->SetBinError(4,0.3178061);
   jet2_csv_prompt_ZZ_stack_4->SetBinError(5,0.1834854);
   jet2_csv_prompt_ZZ_stack_4->SetBinError(6,0.2594876);
   jet2_csv_prompt_ZZ_stack_4->SetBinError(7,0.2594876);
   jet2_csv_prompt_ZZ_stack_4->SetEntries(156);

   ci = TColor::GetColor("#00cc00");
   jet2_csv_prompt_ZZ_stack_4->SetFillColor(ci);
   jet2_csv_prompt_ZZ_stack_4->SetMarkerStyle(0);
   jet2_csv_prompt_ZZ_stack_4->SetMarkerSize(1.1);
   jet2_csv_prompt_ZZ_stack_4->GetXaxis()->SetTitle("DCSV(subleading jet)");
   jet2_csv_prompt_ZZ_stack_4->GetXaxis()->SetMoreLogLabels();
   jet2_csv_prompt_ZZ_stack_4->GetXaxis()->SetLabelFont(42);
   jet2_csv_prompt_ZZ_stack_4->GetXaxis()->SetLabelOffset(0.007);
   jet2_csv_prompt_ZZ_stack_4->GetXaxis()->SetLabelSize(0.05);
   jet2_csv_prompt_ZZ_stack_4->GetXaxis()->SetTitleSize(0.06);
   jet2_csv_prompt_ZZ_stack_4->GetXaxis()->SetTitleOffset(0.9);
   jet2_csv_prompt_ZZ_stack_4->GetXaxis()->SetTitleFont(42);
   jet2_csv_prompt_ZZ_stack_4->GetYaxis()->SetTitle("Jets");
   jet2_csv_prompt_ZZ_stack_4->GetYaxis()->SetLabelFont(42);
   jet2_csv_prompt_ZZ_stack_4->GetYaxis()->SetLabelOffset(0.007);
   jet2_csv_prompt_ZZ_stack_4->GetYaxis()->SetLabelSize(0.05);
   jet2_csv_prompt_ZZ_stack_4->GetYaxis()->SetTitleSize(0.06);
   jet2_csv_prompt_ZZ_stack_4->GetYaxis()->SetTitleOffset(1.35);
   jet2_csv_prompt_ZZ_stack_4->GetYaxis()->SetTitleFont(42);
   jet2_csv_prompt_ZZ_stack_4->GetZaxis()->SetLabelFont(42);
   jet2_csv_prompt_ZZ_stack_4->GetZaxis()->SetLabelOffset(0.007);
   jet2_csv_prompt_ZZ_stack_4->GetZaxis()->SetLabelSize(0.05);
   jet2_csv_prompt_ZZ_stack_4->GetZaxis()->SetTitleSize(0.06);
   jet2_csv_prompt_ZZ_stack_4->GetZaxis()->SetTitleFont(42);
   jet2_csv_stack->Add(jet2_csv_prompt_ZZ_stack_4,"");
   
   TH1D *jet2_csv_prompt_WZ_stack_5 = new TH1D("jet2_csv_prompt_WZ_stack_5","dummy",10,0,1);
   jet2_csv_prompt_WZ_stack_5->SetBinContent(1,250.2696);
   jet2_csv_prompt_WZ_stack_5->SetBinContent(2,54.54014);
   jet2_csv_prompt_WZ_stack_5->SetBinContent(3,17.18512);
   jet2_csv_prompt_WZ_stack_5->SetBinContent(4,7.235839);
   jet2_csv_prompt_WZ_stack_5->SetBinContent(5,4.703295);
   jet2_csv_prompt_WZ_stack_5->SetBinContent(6,1.628064);
   jet2_csv_prompt_WZ_stack_5->SetBinContent(7,1.085376);
   jet2_csv_prompt_WZ_stack_5->SetBinContent(8,0.9044799);
   jet2_csv_prompt_WZ_stack_5->SetBinContent(9,0.7235839);
   jet2_csv_prompt_WZ_stack_5->SetBinError(1,4.757771);
   jet2_csv_prompt_WZ_stack_5->SetBinError(2,2.221046);
   jet2_csv_prompt_WZ_stack_5->SetBinError(3,1.24674);
   jet2_csv_prompt_WZ_stack_5->SetBinError(4,0.8089914);
   jet2_csv_prompt_WZ_stack_5->SetBinError(5,0.6522297);
   jet2_csv_prompt_WZ_stack_5->SetBinError(6,0.3837383);
   jet2_csv_prompt_WZ_stack_5->SetBinError(7,0.313321);
   jet2_csv_prompt_WZ_stack_5->SetBinError(8,0.2860217);
   jet2_csv_prompt_WZ_stack_5->SetBinError(9,0.2558255);
   jet2_csv_prompt_WZ_stack_5->SetEntries(3744);

   ci = TColor::GetColor("#ffcc00");
   jet2_csv_prompt_WZ_stack_5->SetFillColor(ci);
   jet2_csv_prompt_WZ_stack_5->SetMarkerStyle(0);
   jet2_csv_prompt_WZ_stack_5->SetMarkerSize(1.1);
   jet2_csv_prompt_WZ_stack_5->GetXaxis()->SetTitle("DCSV(subleading jet)");
   jet2_csv_prompt_WZ_stack_5->GetXaxis()->SetMoreLogLabels();
   jet2_csv_prompt_WZ_stack_5->GetXaxis()->SetLabelFont(42);
   jet2_csv_prompt_WZ_stack_5->GetXaxis()->SetLabelOffset(0.007);
   jet2_csv_prompt_WZ_stack_5->GetXaxis()->SetLabelSize(0.05);
   jet2_csv_prompt_WZ_stack_5->GetXaxis()->SetTitleSize(0.06);
   jet2_csv_prompt_WZ_stack_5->GetXaxis()->SetTitleOffset(0.9);
   jet2_csv_prompt_WZ_stack_5->GetXaxis()->SetTitleFont(42);
   jet2_csv_prompt_WZ_stack_5->GetYaxis()->SetTitle("Jets");
   jet2_csv_prompt_WZ_stack_5->GetYaxis()->SetLabelFont(42);
   jet2_csv_prompt_WZ_stack_5->GetYaxis()->SetLabelOffset(0.007);
   jet2_csv_prompt_WZ_stack_5->GetYaxis()->SetLabelSize(0.05);
   jet2_csv_prompt_WZ_stack_5->GetYaxis()->SetTitleSize(0.06);
   jet2_csv_prompt_WZ_stack_5->GetYaxis()->SetTitleOffset(1.35);
   jet2_csv_prompt_WZ_stack_5->GetYaxis()->SetTitleFont(42);
   jet2_csv_prompt_WZ_stack_5->GetZaxis()->SetLabelFont(42);
   jet2_csv_prompt_WZ_stack_5->GetZaxis()->SetLabelOffset(0.007);
   jet2_csv_prompt_WZ_stack_5->GetZaxis()->SetLabelSize(0.05);
   jet2_csv_prompt_WZ_stack_5->GetZaxis()->SetTitleSize(0.06);
   jet2_csv_prompt_WZ_stack_5->GetZaxis()->SetTitleFont(42);
   jet2_csv_stack->Add(jet2_csv_prompt_WZ_stack_5,"");
   jet2_csv_stack->Draw("same hist");
   
   TH1D *jet2_csv_total__170 = new TH1D("jet2_csv_total__170","dummy",10,0,1);
   jet2_csv_total__170->SetBinContent(1,327.6365);
   jet2_csv_total__170->SetBinContent(2,65.29222);
   jet2_csv_total__170->SetBinContent(3,22.55084);
   jet2_csv_total__170->SetBinContent(4,10.96869);
   jet2_csv_total__170->SetBinContent(5,7.603716);
   jet2_csv_total__170->SetBinContent(6,2.659977);
   jet2_csv_total__170->SetBinContent(7,2.782231);
   jet2_csv_total__170->SetBinContent(8,1.635916);
   jet2_csv_total__170->SetBinContent(9,1.853986);
   jet2_csv_total__170->SetBinContent(10,2.051993);
   jet2_csv_total__170->SetBinError(1,9.021997);
   jet2_csv_total__170->SetBinError(2,2.999063);
   jet2_csv_total__170->SetBinError(3,2.226119);
   jet2_csv_total__170->SetBinError(4,1.951793);
   jet2_csv_total__170->SetBinError(5,1.866052);
   jet2_csv_total__170->SetBinError(6,0.5087275);
   jet2_csv_total__170->SetBinError(7,0.5039181);
   jet2_csv_total__170->SetBinError(8,0.3611713);
   jet2_csv_total__170->SetBinError(9,0.3865939);
   jet2_csv_total__170->SetBinError(10,1.725938);
   jet2_csv_total__170->SetMinimum(0);
   jet2_csv_total__170->SetMaximum(614.5281);
   jet2_csv_total__170->SetEntries(4536);
   jet2_csv_total__170->SetDirectory(0);

   ci = TColor::GetColor("#00cc00");
   jet2_csv_total__170->SetFillColor(ci);
   jet2_csv_total__170->SetMarkerStyle(20);
   jet2_csv_total__170->SetMarkerSize(1.1);
   jet2_csv_total__170->GetXaxis()->SetTitle("DCSV(subleading jet)");
   jet2_csv_total__170->GetXaxis()->SetMoreLogLabels();
   jet2_csv_total__170->GetXaxis()->SetLabelFont(42);
   jet2_csv_total__170->GetXaxis()->SetLabelOffset(999);
   jet2_csv_total__170->GetXaxis()->SetLabelSize(0.05);
   jet2_csv_total__170->GetXaxis()->SetTitleSize(0.05);
   jet2_csv_total__170->GetXaxis()->SetTitleOffset(999);
   jet2_csv_total__170->GetXaxis()->SetTitleFont(42);
   jet2_csv_total__170->GetYaxis()->SetTitle("Jets");
   jet2_csv_total__170->GetYaxis()->SetLabelFont(42);
   jet2_csv_total__170->GetYaxis()->SetLabelOffset(0.007);
   jet2_csv_total__170->GetYaxis()->SetLabelSize(0.05);
   jet2_csv_total__170->GetYaxis()->SetTitleSize(0.06);
   jet2_csv_total__170->GetYaxis()->SetTitleOffset(1.48);
   jet2_csv_total__170->GetYaxis()->SetTitleFont(42);
   jet2_csv_total__170->GetZaxis()->SetLabelFont(42);
   jet2_csv_total__170->GetZaxis()->SetLabelOffset(0.007);
   jet2_csv_total__170->GetZaxis()->SetLabelSize(0.05);
   jet2_csv_total__170->GetZaxis()->SetTitleSize(0.06);
   jet2_csv_total__170->GetZaxis()->SetTitleFont(42);
   jet2_csv_total__170->Draw("AXIS SAME");
   
   Double_t jet2_csv_total_errors_fx3211[10] = {
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
   Double_t jet2_csv_total_errors_fy3211[10] = {
   327.6365,
   65.29222,
   22.55084,
   10.96869,
   7.603716,
   2.659977,
   2.782231,
   1.635916,
   1.853986,
   2.051993};
   Double_t jet2_csv_total_errors_felx3211[10] = {
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
   Double_t jet2_csv_total_errors_fely3211[10] = {
   9.021997,
   2.999063,
   2.226119,
   1.951793,
   1.866052,
   0.5087275,
   0.5039181,
   0.3611713,
   0.3865939,
   1.725938};
   Double_t jet2_csv_total_errors_fehx3211[10] = {
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
   Double_t jet2_csv_total_errors_fehy3211[10] = {
   9.021997,
   2.999063,
   2.226119,
   1.951793,
   1.866052,
   0.5087275,
   0.5039181,
   0.3611713,
   0.3865939,
   1.725938};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(10,jet2_csv_total_errors_fx3211,jet2_csv_total_errors_fy3211,jet2_csv_total_errors_felx3211,jet2_csv_total_errors_fehx3211,jet2_csv_total_errors_fely3211,jet2_csv_total_errors_fehy3211);
   grae->SetName("jet2_csv_total_errors");
   grae->SetTitle("Graph");
   grae->SetFillColor(1);
   grae->SetFillStyle(3013);
   grae->SetMarkerStyle(0);
   
   TH1F *Graph_jet2_csv_total_errors3211 = new TH1F("Graph_jet2_csv_total_errors3211","Graph",100,0,1.1);
   Graph_jet2_csv_total_errors3211->SetMinimum(0.2934493);
   Graph_jet2_csv_total_errors3211->SetMaximum(370.2917);
   Graph_jet2_csv_total_errors3211->SetDirectory(0);
   Graph_jet2_csv_total_errors3211->SetStats(0);
   Graph_jet2_csv_total_errors3211->SetLineStyle(0);
   Graph_jet2_csv_total_errors3211->SetMarkerStyle(20);
   Graph_jet2_csv_total_errors3211->GetXaxis()->SetLabelFont(42);
   Graph_jet2_csv_total_errors3211->GetXaxis()->SetLabelOffset(0.007);
   Graph_jet2_csv_total_errors3211->GetXaxis()->SetLabelSize(0.05);
   Graph_jet2_csv_total_errors3211->GetXaxis()->SetTitleSize(0.06);
   Graph_jet2_csv_total_errors3211->GetXaxis()->SetTitleOffset(0.9);
   Graph_jet2_csv_total_errors3211->GetXaxis()->SetTitleFont(42);
   Graph_jet2_csv_total_errors3211->GetYaxis()->SetLabelFont(42);
   Graph_jet2_csv_total_errors3211->GetYaxis()->SetLabelOffset(0.007);
   Graph_jet2_csv_total_errors3211->GetYaxis()->SetLabelSize(0.05);
   Graph_jet2_csv_total_errors3211->GetYaxis()->SetTitleSize(0.06);
   Graph_jet2_csv_total_errors3211->GetYaxis()->SetTitleOffset(1.35);
   Graph_jet2_csv_total_errors3211->GetYaxis()->SetTitleFont(42);
   Graph_jet2_csv_total_errors3211->GetZaxis()->SetLabelFont(42);
   Graph_jet2_csv_total_errors3211->GetZaxis()->SetLabelOffset(0.007);
   Graph_jet2_csv_total_errors3211->GetZaxis()->SetLabelSize(0.05);
   Graph_jet2_csv_total_errors3211->GetZaxis()->SetTitleSize(0.06);
   Graph_jet2_csv_total_errors3211->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_jet2_csv_total_errors3211);
   
   grae->Draw("pe2 ");
   
   Double_t jet2_csv_data_graph_fx3212[10] = {
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
   Double_t jet2_csv_data_graph_fy3212[10] = {
   444,
   92,
   26,
   16,
   12,
   10,
   6,
   11,
   6,
   2};
   Double_t jet2_csv_data_graph_felx3212[10] = {
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
   Double_t jet2_csv_data_graph_fely3212[10] = {
   21.06382,
   9.574395,
   5.066111,
   3.957873,
   3.415326,
   3.108748,
   2.379969,
   3.265636,
   2.379969,
   1.29183};
   Double_t jet2_csv_data_graph_fehx3212[10] = {
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
   Double_t jet2_csv_data_graph_fehy3212[10] = {
   22.08761,
   10.62667,
   6.164451,
   5.083169,
   4.559911,
   4.267035,
   3.583712,
   4.416609,
   3.583712,
   2.63791};
   grae = new TGraphAsymmErrors(10,jet2_csv_data_graph_fx3212,jet2_csv_data_graph_fy3212,jet2_csv_data_graph_felx3212,jet2_csv_data_graph_fehx3212,jet2_csv_data_graph_fely3212,jet2_csv_data_graph_fehy3212);
   grae->SetName("jet2_csv_data_graph");
   grae->SetTitle("Graph");
   grae->SetFillStyle(1000);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.1);
   
   TH1F *Graph_jet2_csv_data_graph3212 = new TH1F("Graph_jet2_csv_data_graph3212","Graph",100,0,1.1);
   Graph_jet2_csv_data_graph3212->SetMinimum(0.6373533);
   Graph_jet2_csv_data_graph3212->SetMaximum(512.6256);
   Graph_jet2_csv_data_graph3212->SetDirectory(0);
   Graph_jet2_csv_data_graph3212->SetStats(0);
   Graph_jet2_csv_data_graph3212->SetLineStyle(0);
   Graph_jet2_csv_data_graph3212->SetMarkerStyle(20);
   Graph_jet2_csv_data_graph3212->GetXaxis()->SetLabelFont(42);
   Graph_jet2_csv_data_graph3212->GetXaxis()->SetLabelOffset(0.007);
   Graph_jet2_csv_data_graph3212->GetXaxis()->SetLabelSize(0.05);
   Graph_jet2_csv_data_graph3212->GetXaxis()->SetTitleSize(0.06);
   Graph_jet2_csv_data_graph3212->GetXaxis()->SetTitleOffset(0.9);
   Graph_jet2_csv_data_graph3212->GetXaxis()->SetTitleFont(42);
   Graph_jet2_csv_data_graph3212->GetYaxis()->SetLabelFont(42);
   Graph_jet2_csv_data_graph3212->GetYaxis()->SetLabelOffset(0.007);
   Graph_jet2_csv_data_graph3212->GetYaxis()->SetLabelSize(0.05);
   Graph_jet2_csv_data_graph3212->GetYaxis()->SetTitleSize(0.06);
   Graph_jet2_csv_data_graph3212->GetYaxis()->SetTitleOffset(1.35);
   Graph_jet2_csv_data_graph3212->GetYaxis()->SetTitleFont(42);
   Graph_jet2_csv_data_graph3212->GetZaxis()->SetLabelFont(42);
   Graph_jet2_csv_data_graph3212->GetZaxis()->SetLabelOffset(0.007);
   Graph_jet2_csv_data_graph3212->GetZaxis()->SetLabelSize(0.05);
   Graph_jet2_csv_data_graph3212->GetZaxis()->SetTitleSize(0.06);
   Graph_jet2_csv_data_graph3212->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_jet2_csv_data_graph3212);
   
   grae->Draw("pz ");
   
   TLegend *leg = new TLegend(0.62,0.628,0.9,0.91,NULL,"brNDC");
   leg->SetBorderSize(1);
   leg->SetTextSize(0.036);
   leg->SetLineColor(0);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("jet2_csv_data","Data","LPE");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1.1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("jet2_csv_prompt_WZ_stack_5","WZ","F");

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
   entry=leg->AddEntry("jet2_csv_prompt_ZZ_stack_4","qqZZ","F");

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
   entry=leg->AddEntry("jet2_csv_fakes_DY_stack_3","Fakes DY","F");

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
   entry=leg->AddEntry("jet2_csv_fakes_TT_stack_2","Fakes TT","F");

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
   entry=leg->AddEntry("jet2_csv_total_errors","Total unc.","F");
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
   jet2_csv_canvas->cd();
  
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
   
   TH1D *jet2_csv_total__171 = new TH1D("jet2_csv_total__171","dummy",10,0,1);
   jet2_csv_total__171->SetBinContent(1,1);
   jet2_csv_total__171->SetBinContent(2,1);
   jet2_csv_total__171->SetBinContent(3,1);
   jet2_csv_total__171->SetBinContent(4,1);
   jet2_csv_total__171->SetBinContent(5,1);
   jet2_csv_total__171->SetBinContent(6,1);
   jet2_csv_total__171->SetBinContent(7,1);
   jet2_csv_total__171->SetBinContent(8,1);
   jet2_csv_total__171->SetBinContent(9,1);
   jet2_csv_total__171->SetBinContent(10,1);
   jet2_csv_total__171->SetMinimum(0.5);
   jet2_csv_total__171->SetMaximum(2);
   jet2_csv_total__171->SetEntries(4546);

   ci = TColor::GetColor("#00cc00");
   jet2_csv_total__171->SetFillColor(ci);

   ci = TColor::GetColor("#6666ff");
   jet2_csv_total__171->SetMarkerColor(ci);
   jet2_csv_total__171->SetMarkerSize(1.1);
   jet2_csv_total__171->GetXaxis()->SetTitle("DCSV(subleading jet)");
   jet2_csv_total__171->GetXaxis()->SetMoreLogLabels();
   jet2_csv_total__171->GetXaxis()->SetLabelFont(42);
   jet2_csv_total__171->GetXaxis()->SetLabelOffset(0.015);
   jet2_csv_total__171->GetXaxis()->SetLabelSize(0.1);
   jet2_csv_total__171->GetXaxis()->SetTitleSize(0.14);
   jet2_csv_total__171->GetXaxis()->SetTitleFont(42);
   jet2_csv_total__171->GetYaxis()->SetTitle("Data/pred.");
   jet2_csv_total__171->GetYaxis()->SetDecimals();
   jet2_csv_total__171->GetYaxis()->SetNdivisions(505);
   jet2_csv_total__171->GetYaxis()->SetLabelFont(42);
   jet2_csv_total__171->GetYaxis()->SetLabelOffset(0.01);
   jet2_csv_total__171->GetYaxis()->SetLabelSize(0.11);
   jet2_csv_total__171->GetYaxis()->SetTitleSize(0.14);
   jet2_csv_total__171->GetYaxis()->SetTitleOffset(0.62);
   jet2_csv_total__171->GetYaxis()->SetTitleFont(42);
   jet2_csv_total__171->GetZaxis()->SetLabelFont(42);
   jet2_csv_total__171->GetZaxis()->SetLabelOffset(0.007);
   jet2_csv_total__171->GetZaxis()->SetLabelSize(0.05);
   jet2_csv_total__171->GetZaxis()->SetTitleSize(0.06);
   jet2_csv_total__171->GetZaxis()->SetTitleFont(42);
   jet2_csv_total__171->Draw("AXIS");
   
   Double_t jet2_csv_total_errors_fx3213[10] = {
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
   Double_t jet2_csv_total_errors_fy3213[10] = {
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
   Double_t jet2_csv_total_errors_felx3213[10] = {
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
   Double_t jet2_csv_total_errors_fely3213[10] = {
   0.02753661,
   0.04593292,
   0.09871558,
   0.1779422,
   0.2454131,
   0.1912526,
   0.1811202,
   0.2207761,
   0.2085204,
   0.8411034};
   Double_t jet2_csv_total_errors_fehx3213[10] = {
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
   Double_t jet2_csv_total_errors_fehy3213[10] = {
   0.02753661,
   0.04593292,
   0.09871558,
   0.1779422,
   0.2454131,
   0.1912526,
   0.1811202,
   0.2207761,
   0.2085204,
   0.8411034};
   grae = new TGraphAsymmErrors(10,jet2_csv_total_errors_fx3213,jet2_csv_total_errors_fy3213,jet2_csv_total_errors_felx3213,jet2_csv_total_errors_fehx3213,jet2_csv_total_errors_fely3213,jet2_csv_total_errors_fehy3213);
   grae->SetName("jet2_csv_total_errors");
   grae->SetTitle("Graph");

   ci = TColor::GetColor("#00ffff");
   grae->SetFillColor(ci);

   ci = TColor::GetColor("#00ffff");
   grae->SetMarkerColor(ci);
   grae->Draw("e2");
   
   Double_t jet2_csv_total_errors_fx3214[10] = {
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
   Double_t jet2_csv_total_errors_fy3214[10] = {
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
   Double_t jet2_csv_total_errors_felx3214[10] = {
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
   Double_t jet2_csv_total_errors_fely3214[10] = {
   0.02753661,
   0.04593292,
   0.09871558,
   0.1779422,
   0.2454131,
   0.1912526,
   0.1811202,
   0.2207761,
   0.2085204,
   0.8411034};
   Double_t jet2_csv_total_errors_fehx3214[10] = {
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
   Double_t jet2_csv_total_errors_fehy3214[10] = {
   0.02753661,
   0.04593292,
   0.09871558,
   0.1779422,
   0.2454131,
   0.1912526,
   0.1811202,
   0.2207761,
   0.2085204,
   0.8411034};
   grae = new TGraphAsymmErrors(10,jet2_csv_total_errors_fx3214,jet2_csv_total_errors_fy3214,jet2_csv_total_errors_felx3214,jet2_csv_total_errors_fehx3214,jet2_csv_total_errors_fely3214,jet2_csv_total_errors_fehy3214);
   grae->SetName("jet2_csv_total_errors");
   grae->SetTitle("Graph");

   ci = TColor::GetColor("#6666ff");
   grae->SetFillColor(ci);

   ci = TColor::GetColor("#6666ff");
   grae->SetMarkerColor(ci);
   grae->Draw("e2 ");
   
   TH1D *jet2_csv_total__172 = new TH1D("jet2_csv_total__172","dummy",10,0,1);
   jet2_csv_total__172->SetBinContent(1,1);
   jet2_csv_total__172->SetBinContent(2,1);
   jet2_csv_total__172->SetBinContent(3,1);
   jet2_csv_total__172->SetBinContent(4,1);
   jet2_csv_total__172->SetBinContent(5,1);
   jet2_csv_total__172->SetBinContent(6,1);
   jet2_csv_total__172->SetBinContent(7,1);
   jet2_csv_total__172->SetBinContent(8,1);
   jet2_csv_total__172->SetBinContent(9,1);
   jet2_csv_total__172->SetBinContent(10,1);
   jet2_csv_total__172->SetMinimum(0.5);
   jet2_csv_total__172->SetMaximum(2);
   jet2_csv_total__172->SetEntries(4546);

   ci = TColor::GetColor("#00cc00");
   jet2_csv_total__172->SetFillColor(ci);

   ci = TColor::GetColor("#6666ff");
   jet2_csv_total__172->SetMarkerColor(ci);
   jet2_csv_total__172->SetMarkerSize(1.1);
   jet2_csv_total__172->GetXaxis()->SetTitle("DCSV(subleading jet)");
   jet2_csv_total__172->GetXaxis()->SetMoreLogLabels();
   jet2_csv_total__172->GetXaxis()->SetLabelFont(42);
   jet2_csv_total__172->GetXaxis()->SetLabelOffset(0.015);
   jet2_csv_total__172->GetXaxis()->SetLabelSize(0.1);
   jet2_csv_total__172->GetXaxis()->SetTitleSize(0.14);
   jet2_csv_total__172->GetXaxis()->SetTitleFont(42);
   jet2_csv_total__172->GetYaxis()->SetTitle("Data/pred.");
   jet2_csv_total__172->GetYaxis()->SetDecimals();
   jet2_csv_total__172->GetYaxis()->SetNdivisions(505);
   jet2_csv_total__172->GetYaxis()->SetLabelFont(42);
   jet2_csv_total__172->GetYaxis()->SetLabelOffset(0.01);
   jet2_csv_total__172->GetYaxis()->SetLabelSize(0.11);
   jet2_csv_total__172->GetYaxis()->SetTitleSize(0.14);
   jet2_csv_total__172->GetYaxis()->SetTitleOffset(0.62);
   jet2_csv_total__172->GetYaxis()->SetTitleFont(42);
   jet2_csv_total__172->GetZaxis()->SetLabelFont(42);
   jet2_csv_total__172->GetZaxis()->SetLabelOffset(0.007);
   jet2_csv_total__172->GetZaxis()->SetLabelSize(0.05);
   jet2_csv_total__172->GetZaxis()->SetTitleSize(0.06);
   jet2_csv_total__172->GetZaxis()->SetTitleFont(42);
   jet2_csv_total__172->Draw("AXIS SAME");
   TLine *line = new TLine(0,1,1,1);
   line->SetLineColor(58);
   line->SetLineWidth(2);
   line->Draw();
   
   Double_t data_div_fx3215[10] = {
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
   Double_t data_div_fy3215[10] = {
   1.35516,
   1.40905,
   1.152951,
   1.458697,
   1.578176,
   3.759431,
   2.156543,
   6.72406,
   3.236271,
   0.9746621};
   Double_t data_div_felx3215[10] = {
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
   Double_t data_div_fely3215[10] = {
   0.06429023,
   0.1466391,
   0.2246529,
   0.3608337,
   0.4491654,
   1.168712,
   0.8554175,
   1.996212,
   1.283704,
   0.6295487};
   Double_t data_div_fehx3215[10] = {
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
   Double_t data_div_fehy3215[10] = {
   0.06741499,
   0.1627555,
   0.273358,
   0.4634253,
   0.5996951,
   1.604163,
   1.288071,
   2.699777,
   1.932977,
   1.285535};
   grae = new TGraphAsymmErrors(10,data_div_fx3215,data_div_fy3215,data_div_felx3215,data_div_fehx3215,data_div_fely3215,data_div_fehy3215);
   grae->SetName("data_div");
   grae->SetTitle("Graph");
   grae->SetFillStyle(1000);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.1);
   
   TH1F *Graph_jet2_csv_data_graph3215 = new TH1F("Graph_jet2_csv_data_graph3215","Graph",100,0,1.1);
   Graph_jet2_csv_data_graph3215->SetMinimum(0.6373533);
   Graph_jet2_csv_data_graph3215->SetMaximum(512.6256);
   Graph_jet2_csv_data_graph3215->SetDirectory(0);
   Graph_jet2_csv_data_graph3215->SetStats(0);
   Graph_jet2_csv_data_graph3215->SetLineStyle(0);
   Graph_jet2_csv_data_graph3215->SetMarkerStyle(20);
   Graph_jet2_csv_data_graph3215->GetXaxis()->SetLabelFont(42);
   Graph_jet2_csv_data_graph3215->GetXaxis()->SetLabelOffset(0.007);
   Graph_jet2_csv_data_graph3215->GetXaxis()->SetLabelSize(0.05);
   Graph_jet2_csv_data_graph3215->GetXaxis()->SetTitleSize(0.06);
   Graph_jet2_csv_data_graph3215->GetXaxis()->SetTitleOffset(0.9);
   Graph_jet2_csv_data_graph3215->GetXaxis()->SetTitleFont(42);
   Graph_jet2_csv_data_graph3215->GetYaxis()->SetLabelFont(42);
   Graph_jet2_csv_data_graph3215->GetYaxis()->SetLabelOffset(0.007);
   Graph_jet2_csv_data_graph3215->GetYaxis()->SetLabelSize(0.05);
   Graph_jet2_csv_data_graph3215->GetYaxis()->SetTitleSize(0.06);
   Graph_jet2_csv_data_graph3215->GetYaxis()->SetTitleOffset(1.35);
   Graph_jet2_csv_data_graph3215->GetYaxis()->SetTitleFont(42);
   Graph_jet2_csv_data_graph3215->GetZaxis()->SetLabelFont(42);
   Graph_jet2_csv_data_graph3215->GetZaxis()->SetLabelOffset(0.007);
   Graph_jet2_csv_data_graph3215->GetZaxis()->SetLabelSize(0.05);
   Graph_jet2_csv_data_graph3215->GetZaxis()->SetTitleSize(0.06);
   Graph_jet2_csv_data_graph3215->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_jet2_csv_data_graph3215);
   
   grae->Draw("pz ");
   
   leg = new TLegend(0,0,0,0,NULL,"brNDC");
   leg->SetBorderSize(1);
   leg->SetTextSize(0.084);
   leg->SetLineColor(0);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   entry=leg->AddEntry("jet2_csv_total_errors","stat. unc.","F");
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
   entry=leg->AddEntry("jet2_csv_total_errors","total unc.","F");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   leg->Draw();
   pad2->Modified();
   jet2_csv_canvas->cd();
   jet2_csv_canvas->Modified();
   jet2_csv_canvas->cd();
   jet2_csv_canvas->SetSelected(jet2_csv_canvas);
}
