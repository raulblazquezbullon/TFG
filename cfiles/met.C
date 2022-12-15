void met()
{
//=========Macro generated from canvas: met_canvas/met
//=========  (Thu Dec 15 18:28:21 2022) by ROOT version 6.12/07
   TCanvas *met_canvas = new TCanvas("met_canvas", "met",0,0,600,750);
   gStyle->SetOptFit(1);
   gStyle->SetOptStat(0);
   gStyle->SetOptTitle(0);
   met_canvas->SetHighLightColor(2);
   met_canvas->Range(0,0,1,1);
   met_canvas->SetFillColor(0);
   met_canvas->SetBorderMode(0);
   met_canvas->SetBorderSize(2);
   met_canvas->SetTickx(1);
   met_canvas->SetTicky(1);
   met_canvas->SetLeftMargin(0.18);
   met_canvas->SetRightMargin(0.04);
   met_canvas->SetBottomMargin(0.13);
   met_canvas->SetFrameFillStyle(0);
   met_canvas->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: pad1
   TPad *pad1 = new TPad("pad1", "pad1",0,0.3,1,1);
   pad1->Draw();
   pad1->cd();
   pad1->Range(-92.3077,-20.84778,420.5128,813.0632);
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
   
   TH1D *met_total__89 = new TH1D("met_total__89","dummy",20,0,400);
   met_total__89->SetBinContent(2,372.0548);
   met_total__89->SetBinContent(3,553.8677);
   met_total__89->SetBinContent(4,284.295);
   met_total__89->SetBinContent(5,128.4832);
   met_total__89->SetBinContent(6,66.95483);
   met_total__89->SetBinContent(7,34.38519);
   met_total__89->SetBinContent(8,19.3873);
   met_total__89->SetBinContent(9,10.67023);
   met_total__89->SetBinContent(10,6.913622);
   met_total__89->SetBinContent(11,5.647538);
   met_total__89->SetBinContent(12,3.45561);
   met_total__89->SetBinContent(13,2.50859);
   met_total__89->SetBinContent(14,1.489708);
   met_total__89->SetBinContent(15,1.60411);
   met_total__89->SetBinContent(16,1.447168);
   met_total__89->SetBinContent(17,0.6331359);
   met_total__89->SetBinContent(18,0.361792);
   met_total__89->SetBinContent(19,0.4282862);
   met_total__89->SetBinContent(20,1.35672);
   met_total__89->SetBinError(2,11.58005);
   met_total__89->SetBinError(3,11.06007);
   met_total__89->SetBinError(4,6.56769);
   met_total__89->SetBinError(5,3.806996);
   met_total__89->SetBinError(6,2.991189);
   met_total__89->SetBinError(7,1.784969);
   met_total__89->SetBinError(8,1.339088);
   met_total__89->SetBinError(9,1.010685);
   met_total__89->SetBinError(10,0.8127782);
   met_total__89->SetBinError(11,0.7199464);
   met_total__89->SetBinError(12,0.5547744);
   met_total__89->SetBinError(13,0.4746621);
   met_total__89->SetBinError(14,0.3627059);
   met_total__89->SetBinError(15,0.3788083);
   met_total__89->SetBinError(16,0.361792);
   met_total__89->SetBinError(17,0.2393029);
   met_total__89->SetBinError(18,0.180896);
   met_total__89->SetBinError(19,0.19273);
   met_total__89->SetBinError(20,0.3503036);
   met_total__89->SetMinimum(0);
   met_total__89->SetMaximum(763.0286);
   met_total__89->SetEntries(15152);
   met_total__89->SetDirectory(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#00cc00");
   met_total__89->SetFillColor(ci);
   met_total__89->SetMarkerStyle(20);
   met_total__89->SetMarkerSize(1.1);
   met_total__89->GetXaxis()->SetTitle("p_{T}^{miss}  (GeV)");
   met_total__89->GetXaxis()->SetMoreLogLabels();
   met_total__89->GetXaxis()->SetLabelFont(42);
   met_total__89->GetXaxis()->SetLabelOffset(999);
   met_total__89->GetXaxis()->SetLabelSize(0.05);
   met_total__89->GetXaxis()->SetTitleSize(0.05);
   met_total__89->GetXaxis()->SetTitleOffset(999);
   met_total__89->GetXaxis()->SetTitleFont(42);
   met_total__89->GetYaxis()->SetTitle("Events");
   met_total__89->GetYaxis()->SetLabelFont(42);
   met_total__89->GetYaxis()->SetLabelOffset(0.007);
   met_total__89->GetYaxis()->SetLabelSize(0.05);
   met_total__89->GetYaxis()->SetTitleSize(0.06);
   met_total__89->GetYaxis()->SetTitleOffset(1.48);
   met_total__89->GetYaxis()->SetTitleFont(42);
   met_total__89->GetZaxis()->SetLabelFont(42);
   met_total__89->GetZaxis()->SetLabelOffset(0.007);
   met_total__89->GetZaxis()->SetLabelSize(0.05);
   met_total__89->GetZaxis()->SetTitleSize(0.06);
   met_total__89->GetZaxis()->SetTitleFont(42);
   met_total__89->Draw("HIST");
   
   THStack *met_stack = new THStack();
   met_stack->SetName("met_stack");
   met_stack->SetTitle("met");
   
   TH1F *met_stack_stack_23 = new TH1F("met_stack_stack_23","met",20,0,400);
   met_stack_stack_23->SetMinimum(0);
   met_stack_stack_23->SetMaximum(581.5611);
   met_stack_stack_23->SetDirectory(0);
   met_stack_stack_23->SetStats(0);
   met_stack_stack_23->SetLineStyle(0);
   met_stack_stack_23->SetMarkerStyle(20);
   met_stack_stack_23->GetXaxis()->SetLabelFont(42);
   met_stack_stack_23->GetXaxis()->SetLabelOffset(0.007);
   met_stack_stack_23->GetXaxis()->SetLabelSize(0.05);
   met_stack_stack_23->GetXaxis()->SetTitleSize(0.06);
   met_stack_stack_23->GetXaxis()->SetTitleOffset(0.9);
   met_stack_stack_23->GetXaxis()->SetTitleFont(42);
   met_stack_stack_23->GetYaxis()->SetLabelFont(42);
   met_stack_stack_23->GetYaxis()->SetLabelOffset(0.007);
   met_stack_stack_23->GetYaxis()->SetLabelSize(0.05);
   met_stack_stack_23->GetYaxis()->SetTitleSize(0.06);
   met_stack_stack_23->GetYaxis()->SetTitleOffset(1.35);
   met_stack_stack_23->GetYaxis()->SetTitleFont(42);
   met_stack_stack_23->GetZaxis()->SetLabelFont(42);
   met_stack_stack_23->GetZaxis()->SetLabelOffset(0.007);
   met_stack_stack_23->GetZaxis()->SetLabelSize(0.05);
   met_stack_stack_23->GetZaxis()->SetTitleSize(0.06);
   met_stack_stack_23->GetZaxis()->SetTitleFont(42);
   met_stack->SetHistogram(met_stack_stack_23);
   
   
   TH1D *met_fakes_VV_stack_1 = new TH1D("met_fakes_VV_stack_1","dummy",20,0,400);
   met_fakes_VV_stack_1->SetBinContent(3,0.4859669);
   met_fakes_VV_stack_1->SetBinContent(6,0.1943867);
   met_fakes_VV_stack_1->SetBinError(3,0.217331);
   met_fakes_VV_stack_1->SetBinError(6,0.1374522);
   met_fakes_VV_stack_1->SetEntries(11);

   ci = TColor::GetColor("#2e3294");
   met_fakes_VV_stack_1->SetFillColor(ci);
   met_fakes_VV_stack_1->SetMarkerStyle(0);
   met_fakes_VV_stack_1->SetMarkerSize(1.1);
   met_fakes_VV_stack_1->GetXaxis()->SetTitle("p_{T}^{miss}  (GeV)");
   met_fakes_VV_stack_1->GetXaxis()->SetMoreLogLabels();
   met_fakes_VV_stack_1->GetXaxis()->SetLabelFont(42);
   met_fakes_VV_stack_1->GetXaxis()->SetLabelOffset(0.007);
   met_fakes_VV_stack_1->GetXaxis()->SetLabelSize(0.05);
   met_fakes_VV_stack_1->GetXaxis()->SetTitleSize(0.06);
   met_fakes_VV_stack_1->GetXaxis()->SetTitleOffset(0.9);
   met_fakes_VV_stack_1->GetXaxis()->SetTitleFont(42);
   met_fakes_VV_stack_1->GetYaxis()->SetTitle("Events");
   met_fakes_VV_stack_1->GetYaxis()->SetLabelFont(42);
   met_fakes_VV_stack_1->GetYaxis()->SetLabelOffset(0.007);
   met_fakes_VV_stack_1->GetYaxis()->SetLabelSize(0.05);
   met_fakes_VV_stack_1->GetYaxis()->SetTitleSize(0.06);
   met_fakes_VV_stack_1->GetYaxis()->SetTitleOffset(1.35);
   met_fakes_VV_stack_1->GetYaxis()->SetTitleFont(42);
   met_fakes_VV_stack_1->GetZaxis()->SetLabelFont(42);
   met_fakes_VV_stack_1->GetZaxis()->SetLabelOffset(0.007);
   met_fakes_VV_stack_1->GetZaxis()->SetLabelSize(0.05);
   met_fakes_VV_stack_1->GetZaxis()->SetTitleSize(0.06);
   met_fakes_VV_stack_1->GetZaxis()->SetTitleFont(42);
   met_stack->Add(met_fakes_VV_stack_1,"");
   
   TH1D *met_fakes_TT_stack_2 = new TH1D("met_fakes_TT_stack_2","dummy",20,0,400);
   met_fakes_TT_stack_2->SetBinContent(2,6.582928);
   met_fakes_TT_stack_2->SetBinContent(3,14.98601);
   met_fakes_TT_stack_2->SetBinContent(4,12.99119);
   met_fakes_TT_stack_2->SetBinContent(5,8.868546);
   met_fakes_TT_stack_2->SetBinContent(6,5.585515);
   met_fakes_TT_stack_2->SetBinContent(7,2.526781);
   met_fakes_TT_stack_2->SetBinContent(8,1.196896);
   met_fakes_TT_stack_2->SetBinContent(9,0.7105964);
   met_fakes_TT_stack_2->SetBinContent(10,0.6649422);
   met_fakes_TT_stack_2->SetBinContent(11,0.3989653);
   met_fakes_TT_stack_2->SetBinContent(12,0.1994827);
   met_fakes_TT_stack_2->SetBinContent(13,0.06649422);
   met_fakes_TT_stack_2->SetBinContent(14,0.1329884);
   met_fakes_TT_stack_2->SetBinContent(15,0.06649422);
   met_fakes_TT_stack_2->SetBinContent(19,0.06649422);
   met_fakes_TT_stack_2->SetBinError(2,0.6616092);
   met_fakes_TT_stack_2->SetBinError(3,1.003356);
   met_fakes_TT_stack_2->SetBinError(4,0.9490037);
   met_fakes_TT_stack_2->SetBinError(5,0.7745626);
   met_fakes_TT_stack_2->SetBinError(6,0.6237711);
   met_fakes_TT_stack_2->SetBinError(7,0.4098979);
   met_fakes_TT_stack_2->SetBinError(8,0.2821111);
   met_fakes_TT_stack_2->SetBinError(9,0.2288463);
   met_fakes_TT_stack_2->SetBinError(10,0.2102732);
   met_fakes_TT_stack_2->SetBinError(11,0.1628769);
   met_fakes_TT_stack_2->SetBinError(12,0.1151714);
   met_fakes_TT_stack_2->SetBinError(13,0.06649422);
   met_fakes_TT_stack_2->SetBinError(14,0.09403703);
   met_fakes_TT_stack_2->SetBinError(15,0.06649422);
   met_fakes_TT_stack_2->SetBinError(19,0.06649422);
   met_fakes_TT_stack_2->SetEntries(841);

   ci = TColor::GetColor("#666666");
   met_fakes_TT_stack_2->SetFillColor(ci);
   met_fakes_TT_stack_2->SetMarkerStyle(0);
   met_fakes_TT_stack_2->SetMarkerSize(1.1);
   met_fakes_TT_stack_2->GetXaxis()->SetTitle("p_{T}^{miss}  (GeV)");
   met_fakes_TT_stack_2->GetXaxis()->SetMoreLogLabels();
   met_fakes_TT_stack_2->GetXaxis()->SetLabelFont(42);
   met_fakes_TT_stack_2->GetXaxis()->SetLabelOffset(0.007);
   met_fakes_TT_stack_2->GetXaxis()->SetLabelSize(0.05);
   met_fakes_TT_stack_2->GetXaxis()->SetTitleSize(0.06);
   met_fakes_TT_stack_2->GetXaxis()->SetTitleOffset(0.9);
   met_fakes_TT_stack_2->GetXaxis()->SetTitleFont(42);
   met_fakes_TT_stack_2->GetYaxis()->SetTitle("Events");
   met_fakes_TT_stack_2->GetYaxis()->SetLabelFont(42);
   met_fakes_TT_stack_2->GetYaxis()->SetLabelOffset(0.007);
   met_fakes_TT_stack_2->GetYaxis()->SetLabelSize(0.05);
   met_fakes_TT_stack_2->GetYaxis()->SetTitleSize(0.06);
   met_fakes_TT_stack_2->GetYaxis()->SetTitleOffset(1.35);
   met_fakes_TT_stack_2->GetYaxis()->SetTitleFont(42);
   met_fakes_TT_stack_2->GetZaxis()->SetLabelFont(42);
   met_fakes_TT_stack_2->GetZaxis()->SetLabelOffset(0.007);
   met_fakes_TT_stack_2->GetZaxis()->SetLabelSize(0.05);
   met_fakes_TT_stack_2->GetZaxis()->SetTitleSize(0.06);
   met_fakes_TT_stack_2->GetZaxis()->SetTitleFont(42);
   met_stack->Add(met_fakes_TT_stack_2,"");
   
   TH1D *met_fakes_DY_stack_3 = new TH1D("met_fakes_DY_stack_3","dummy",20,0,400);
   met_fakes_DY_stack_3->SetBinContent(2,60.18327);
   met_fakes_DY_stack_3->SetBinContent(3,42.98805);
   met_fakes_DY_stack_3->SetBinContent(4,10.31713);
   met_fakes_DY_stack_3->SetBinContent(5,1.719522);
   met_fakes_DY_stack_3->SetBinContent(6,1.719522);
   met_fakes_DY_stack_3->SetBinError(2,10.17283);
   met_fakes_DY_stack_3->SetBinError(3,8.597611);
   met_fakes_DY_stack_3->SetBinError(4,4.211952);
   met_fakes_DY_stack_3->SetBinError(5,1.719522);
   met_fakes_DY_stack_3->SetBinError(6,1.719522);
   met_fakes_DY_stack_3->SetEntries(72);

   ci = TColor::GetColor("#cccccc");
   met_fakes_DY_stack_3->SetFillColor(ci);
   met_fakes_DY_stack_3->SetMarkerStyle(0);
   met_fakes_DY_stack_3->SetMarkerSize(1.1);
   met_fakes_DY_stack_3->GetXaxis()->SetTitle("p_{T}^{miss}  (GeV)");
   met_fakes_DY_stack_3->GetXaxis()->SetMoreLogLabels();
   met_fakes_DY_stack_3->GetXaxis()->SetLabelFont(42);
   met_fakes_DY_stack_3->GetXaxis()->SetLabelOffset(0.007);
   met_fakes_DY_stack_3->GetXaxis()->SetLabelSize(0.05);
   met_fakes_DY_stack_3->GetXaxis()->SetTitleSize(0.06);
   met_fakes_DY_stack_3->GetXaxis()->SetTitleOffset(0.9);
   met_fakes_DY_stack_3->GetXaxis()->SetTitleFont(42);
   met_fakes_DY_stack_3->GetYaxis()->SetTitle("Events");
   met_fakes_DY_stack_3->GetYaxis()->SetLabelFont(42);
   met_fakes_DY_stack_3->GetYaxis()->SetLabelOffset(0.007);
   met_fakes_DY_stack_3->GetYaxis()->SetLabelSize(0.05);
   met_fakes_DY_stack_3->GetYaxis()->SetTitleSize(0.06);
   met_fakes_DY_stack_3->GetYaxis()->SetTitleOffset(1.35);
   met_fakes_DY_stack_3->GetYaxis()->SetTitleFont(42);
   met_fakes_DY_stack_3->GetZaxis()->SetLabelFont(42);
   met_fakes_DY_stack_3->GetZaxis()->SetLabelOffset(0.007);
   met_fakes_DY_stack_3->GetZaxis()->SetLabelSize(0.05);
   met_fakes_DY_stack_3->GetZaxis()->SetTitleSize(0.06);
   met_fakes_DY_stack_3->GetZaxis()->SetTitleFont(42);
   met_stack->Add(met_fakes_DY_stack_3,"");
   
   TH1D *met_prompt_ZZ_stack_4 = new TH1D("met_prompt_ZZ_stack_4","dummy",20,0,400);
   met_prompt_ZZ_stack_4->SetBinContent(2,27.52281);
   met_prompt_ZZ_stack_4->SetBinContent(3,27.33933);
   met_prompt_ZZ_stack_4->SetBinContent(4,9.541241);
   met_prompt_ZZ_stack_4->SetBinContent(5,2.935767);
   met_prompt_ZZ_stack_4->SetBinContent(6,2.201825);
   met_prompt_ZZ_stack_4->SetBinContent(7,1.467883);
   met_prompt_ZZ_stack_4->SetBinContent(8,0.7339416);
   met_prompt_ZZ_stack_4->SetBinContent(9,0.7339416);
   met_prompt_ZZ_stack_4->SetBinContent(10,0.5504562);
   met_prompt_ZZ_stack_4->SetBinContent(11,0.1834854);
   met_prompt_ZZ_stack_4->SetBinError(2,2.247228);
   met_prompt_ZZ_stack_4->SetBinError(3,2.239725);
   met_prompt_ZZ_stack_4->SetBinError(4,1.323132);
   met_prompt_ZZ_stack_4->SetBinError(5,0.7339416);
   met_prompt_ZZ_stack_4->SetBinError(6,0.6356121);
   met_prompt_ZZ_stack_4->SetBinError(7,0.5189751);
   met_prompt_ZZ_stack_4->SetBinError(8,0.3669708);
   met_prompt_ZZ_stack_4->SetBinError(9,0.3669708);
   met_prompt_ZZ_stack_4->SetBinError(10,0.3178061);
   met_prompt_ZZ_stack_4->SetBinError(11,0.1834854);
   met_prompt_ZZ_stack_4->SetEntries(403);

   ci = TColor::GetColor("#00cc00");
   met_prompt_ZZ_stack_4->SetFillColor(ci);
   met_prompt_ZZ_stack_4->SetMarkerStyle(0);
   met_prompt_ZZ_stack_4->SetMarkerSize(1.1);
   met_prompt_ZZ_stack_4->GetXaxis()->SetTitle("p_{T}^{miss}  (GeV)");
   met_prompt_ZZ_stack_4->GetXaxis()->SetMoreLogLabels();
   met_prompt_ZZ_stack_4->GetXaxis()->SetLabelFont(42);
   met_prompt_ZZ_stack_4->GetXaxis()->SetLabelOffset(0.007);
   met_prompt_ZZ_stack_4->GetXaxis()->SetLabelSize(0.05);
   met_prompt_ZZ_stack_4->GetXaxis()->SetTitleSize(0.06);
   met_prompt_ZZ_stack_4->GetXaxis()->SetTitleOffset(0.9);
   met_prompt_ZZ_stack_4->GetXaxis()->SetTitleFont(42);
   met_prompt_ZZ_stack_4->GetYaxis()->SetTitle("Events");
   met_prompt_ZZ_stack_4->GetYaxis()->SetLabelFont(42);
   met_prompt_ZZ_stack_4->GetYaxis()->SetLabelOffset(0.007);
   met_prompt_ZZ_stack_4->GetYaxis()->SetLabelSize(0.05);
   met_prompt_ZZ_stack_4->GetYaxis()->SetTitleSize(0.06);
   met_prompt_ZZ_stack_4->GetYaxis()->SetTitleOffset(1.35);
   met_prompt_ZZ_stack_4->GetYaxis()->SetTitleFont(42);
   met_prompt_ZZ_stack_4->GetZaxis()->SetLabelFont(42);
   met_prompt_ZZ_stack_4->GetZaxis()->SetLabelOffset(0.007);
   met_prompt_ZZ_stack_4->GetZaxis()->SetLabelSize(0.05);
   met_prompt_ZZ_stack_4->GetZaxis()->SetTitleSize(0.06);
   met_prompt_ZZ_stack_4->GetZaxis()->SetTitleFont(42);
   met_stack->Add(met_prompt_ZZ_stack_4,"");
   
   TH1D *met_prompt_WZ_stack_5 = new TH1D("met_prompt_WZ_stack_5","dummy",20,0,400);
   met_prompt_WZ_stack_5->SetBinContent(2,277.7658);
   met_prompt_WZ_stack_5->SetBinContent(3,468.0683);
   met_prompt_WZ_stack_5->SetBinContent(4,251.4454);
   met_prompt_WZ_stack_5->SetBinContent(5,114.9594);
   met_prompt_WZ_stack_5->SetBinContent(6,57.25358);
   met_prompt_WZ_stack_5->SetBinContent(7,30.39052);
   met_prompt_WZ_stack_5->SetBinContent(8,17.45646);
   met_prompt_WZ_stack_5->SetBinContent(9,9.225695);
   met_prompt_WZ_stack_5->SetBinContent(10,5.698223);
   met_prompt_WZ_stack_5->SetBinContent(11,5.065087);
   met_prompt_WZ_stack_5->SetBinContent(12,3.256128);
   met_prompt_WZ_stack_5->SetBinContent(13,2.442096);
   met_prompt_WZ_stack_5->SetBinContent(14,1.35672);
   met_prompt_WZ_stack_5->SetBinContent(15,1.537616);
   met_prompt_WZ_stack_5->SetBinContent(16,1.447168);
   met_prompt_WZ_stack_5->SetBinContent(17,0.6331359);
   met_prompt_WZ_stack_5->SetBinContent(18,0.361792);
   met_prompt_WZ_stack_5->SetBinContent(19,0.361792);
   met_prompt_WZ_stack_5->SetBinContent(20,1.35672);
   met_prompt_WZ_stack_5->SetBinError(2,5.01232);
   met_prompt_WZ_stack_5->SetBinError(3,6.5066);
   met_prompt_WZ_stack_5->SetBinError(4,4.768934);
   met_prompt_WZ_stack_5->SetBinError(5,3.224569);
   met_prompt_WZ_stack_5->SetBinError(6,2.275625);
   met_prompt_WZ_stack_5->SetBinError(7,1.657939);
   met_prompt_WZ_stack_5->SetBinError(8,1.256544);
   met_prompt_WZ_stack_5->SetBinError(9,0.9134799);
   met_prompt_WZ_stack_5->SetBinError(10,0.7179087);
   met_prompt_WZ_stack_5->SetBinError(11,0.6768508);
   met_prompt_WZ_stack_5->SetBinError(12,0.5426879);
   met_prompt_WZ_stack_5->SetBinError(13,0.4699815);
   met_prompt_WZ_stack_5->SetBinError(14,0.3503036);
   met_prompt_WZ_stack_5->SetBinError(15,0.3729266);
   met_prompt_WZ_stack_5->SetBinError(16,0.361792);
   met_prompt_WZ_stack_5->SetBinError(17,0.2393029);
   met_prompt_WZ_stack_5->SetBinError(18,0.180896);
   met_prompt_WZ_stack_5->SetBinError(19,0.180896);
   met_prompt_WZ_stack_5->SetBinError(20,0.3503036);
   met_prompt_WZ_stack_5->SetEntries(13825);

   ci = TColor::GetColor("#ffcc00");
   met_prompt_WZ_stack_5->SetFillColor(ci);
   met_prompt_WZ_stack_5->SetMarkerStyle(0);
   met_prompt_WZ_stack_5->SetMarkerSize(1.1);
   met_prompt_WZ_stack_5->GetXaxis()->SetTitle("p_{T}^{miss}  (GeV)");
   met_prompt_WZ_stack_5->GetXaxis()->SetMoreLogLabels();
   met_prompt_WZ_stack_5->GetXaxis()->SetLabelFont(42);
   met_prompt_WZ_stack_5->GetXaxis()->SetLabelOffset(0.007);
   met_prompt_WZ_stack_5->GetXaxis()->SetLabelSize(0.05);
   met_prompt_WZ_stack_5->GetXaxis()->SetTitleSize(0.06);
   met_prompt_WZ_stack_5->GetXaxis()->SetTitleOffset(0.9);
   met_prompt_WZ_stack_5->GetXaxis()->SetTitleFont(42);
   met_prompt_WZ_stack_5->GetYaxis()->SetTitle("Events");
   met_prompt_WZ_stack_5->GetYaxis()->SetLabelFont(42);
   met_prompt_WZ_stack_5->GetYaxis()->SetLabelOffset(0.007);
   met_prompt_WZ_stack_5->GetYaxis()->SetLabelSize(0.05);
   met_prompt_WZ_stack_5->GetYaxis()->SetTitleSize(0.06);
   met_prompt_WZ_stack_5->GetYaxis()->SetTitleOffset(1.35);
   met_prompt_WZ_stack_5->GetYaxis()->SetTitleFont(42);
   met_prompt_WZ_stack_5->GetZaxis()->SetLabelFont(42);
   met_prompt_WZ_stack_5->GetZaxis()->SetLabelOffset(0.007);
   met_prompt_WZ_stack_5->GetZaxis()->SetLabelSize(0.05);
   met_prompt_WZ_stack_5->GetZaxis()->SetTitleSize(0.06);
   met_prompt_WZ_stack_5->GetZaxis()->SetTitleFont(42);
   met_stack->Add(met_prompt_WZ_stack_5,"");
   met_stack->Draw("same hist");
   
   TH1D *met_total__90 = new TH1D("met_total__90","dummy",20,0,400);
   met_total__90->SetBinContent(2,372.0548);
   met_total__90->SetBinContent(3,553.8677);
   met_total__90->SetBinContent(4,284.295);
   met_total__90->SetBinContent(5,128.4832);
   met_total__90->SetBinContent(6,66.95483);
   met_total__90->SetBinContent(7,34.38519);
   met_total__90->SetBinContent(8,19.3873);
   met_total__90->SetBinContent(9,10.67023);
   met_total__90->SetBinContent(10,6.913622);
   met_total__90->SetBinContent(11,5.647538);
   met_total__90->SetBinContent(12,3.45561);
   met_total__90->SetBinContent(13,2.50859);
   met_total__90->SetBinContent(14,1.489708);
   met_total__90->SetBinContent(15,1.60411);
   met_total__90->SetBinContent(16,1.447168);
   met_total__90->SetBinContent(17,0.6331359);
   met_total__90->SetBinContent(18,0.361792);
   met_total__90->SetBinContent(19,0.4282862);
   met_total__90->SetBinContent(20,1.35672);
   met_total__90->SetBinError(2,11.58005);
   met_total__90->SetBinError(3,11.06007);
   met_total__90->SetBinError(4,6.56769);
   met_total__90->SetBinError(5,3.806996);
   met_total__90->SetBinError(6,2.991189);
   met_total__90->SetBinError(7,1.784969);
   met_total__90->SetBinError(8,1.339088);
   met_total__90->SetBinError(9,1.010685);
   met_total__90->SetBinError(10,0.8127782);
   met_total__90->SetBinError(11,0.7199464);
   met_total__90->SetBinError(12,0.5547744);
   met_total__90->SetBinError(13,0.4746621);
   met_total__90->SetBinError(14,0.3627059);
   met_total__90->SetBinError(15,0.3788083);
   met_total__90->SetBinError(16,0.361792);
   met_total__90->SetBinError(17,0.2393029);
   met_total__90->SetBinError(18,0.180896);
   met_total__90->SetBinError(19,0.19273);
   met_total__90->SetBinError(20,0.3503036);
   met_total__90->SetMinimum(0);
   met_total__90->SetMaximum(763.0286);
   met_total__90->SetEntries(15152);
   met_total__90->SetDirectory(0);

   ci = TColor::GetColor("#00cc00");
   met_total__90->SetFillColor(ci);
   met_total__90->SetMarkerStyle(20);
   met_total__90->SetMarkerSize(1.1);
   met_total__90->GetXaxis()->SetTitle("p_{T}^{miss}  (GeV)");
   met_total__90->GetXaxis()->SetMoreLogLabels();
   met_total__90->GetXaxis()->SetLabelFont(42);
   met_total__90->GetXaxis()->SetLabelOffset(999);
   met_total__90->GetXaxis()->SetLabelSize(0.05);
   met_total__90->GetXaxis()->SetTitleSize(0.05);
   met_total__90->GetXaxis()->SetTitleOffset(999);
   met_total__90->GetXaxis()->SetTitleFont(42);
   met_total__90->GetYaxis()->SetTitle("Events");
   met_total__90->GetYaxis()->SetLabelFont(42);
   met_total__90->GetYaxis()->SetLabelOffset(0.007);
   met_total__90->GetYaxis()->SetLabelSize(0.05);
   met_total__90->GetYaxis()->SetTitleSize(0.06);
   met_total__90->GetYaxis()->SetTitleOffset(1.48);
   met_total__90->GetYaxis()->SetTitleFont(42);
   met_total__90->GetZaxis()->SetLabelFont(42);
   met_total__90->GetZaxis()->SetLabelOffset(0.007);
   met_total__90->GetZaxis()->SetLabelSize(0.05);
   met_total__90->GetZaxis()->SetTitleSize(0.06);
   met_total__90->GetZaxis()->SetTitleFont(42);
   met_total__90->Draw("AXIS SAME");
   
   Double_t met_total_errors_fx3111[19] = {
   30,
   50,
   70,
   90,
   110,
   130,
   150,
   170,
   190,
   210,
   230,
   250,
   270,
   290,
   310,
   330,
   350,
   370,
   390};
   Double_t met_total_errors_fy3111[19] = {
   372.0548,
   553.8677,
   284.295,
   128.4832,
   66.95483,
   34.38519,
   19.3873,
   10.67023,
   6.913622,
   5.647538,
   3.45561,
   2.50859,
   1.489708,
   1.60411,
   1.447168,
   0.6331359,
   0.361792,
   0.4282862,
   1.35672};
   Double_t met_total_errors_felx3111[19] = {
   10,
   10,
   10,
   10,
   10,
   10,
   10,
   10,
   10,
   10,
   10,
   10,
   10,
   10,
   10,
   10,
   10,
   10,
   10};
   Double_t met_total_errors_fely3111[19] = {
   11.58005,
   11.06007,
   6.56769,
   3.806996,
   2.991189,
   1.784969,
   1.339088,
   1.010685,
   0.8127782,
   0.7199464,
   0.5547744,
   0.4746621,
   0.3627059,
   0.3788083,
   0.361792,
   0.2393029,
   0.180896,
   0.19273,
   0.3503036};
   Double_t met_total_errors_fehx3111[19] = {
   10,
   10,
   10,
   10,
   10,
   10,
   10,
   10,
   10,
   10,
   10,
   10,
   10,
   10,
   10,
   10,
   10,
   10,
   10};
   Double_t met_total_errors_fehy3111[19] = {
   11.58005,
   11.06007,
   6.56769,
   3.806996,
   2.991189,
   1.784969,
   1.339088,
   1.010685,
   0.8127782,
   0.7199464,
   0.5547744,
   0.4746621,
   0.3627059,
   0.3788083,
   0.361792,
   0.2393029,
   0.180896,
   0.19273,
   0.3503036};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(19,met_total_errors_fx3111,met_total_errors_fy3111,met_total_errors_felx3111,met_total_errors_fehx3111,met_total_errors_fely3111,met_total_errors_fehy3111);
   grae->SetName("met_total_errors");
   grae->SetTitle("Graph");
   grae->SetFillColor(1);
   grae->SetFillStyle(3013);
   grae->SetMarkerStyle(0);
   
   TH1F *Graph_met_total_errors3111 = new TH1F("Graph_met_total_errors3111","Graph",100,0,438);
   Graph_met_total_errors3111->SetMinimum(0.1628064);
   Graph_met_total_errors3111->SetMaximum(621.4025);
   Graph_met_total_errors3111->SetDirectory(0);
   Graph_met_total_errors3111->SetStats(0);
   Graph_met_total_errors3111->SetLineStyle(0);
   Graph_met_total_errors3111->SetMarkerStyle(20);
   Graph_met_total_errors3111->GetXaxis()->SetLabelFont(42);
   Graph_met_total_errors3111->GetXaxis()->SetLabelOffset(0.007);
   Graph_met_total_errors3111->GetXaxis()->SetLabelSize(0.05);
   Graph_met_total_errors3111->GetXaxis()->SetTitleSize(0.06);
   Graph_met_total_errors3111->GetXaxis()->SetTitleOffset(0.9);
   Graph_met_total_errors3111->GetXaxis()->SetTitleFont(42);
   Graph_met_total_errors3111->GetYaxis()->SetLabelFont(42);
   Graph_met_total_errors3111->GetYaxis()->SetLabelOffset(0.007);
   Graph_met_total_errors3111->GetYaxis()->SetLabelSize(0.05);
   Graph_met_total_errors3111->GetYaxis()->SetTitleSize(0.06);
   Graph_met_total_errors3111->GetYaxis()->SetTitleOffset(1.35);
   Graph_met_total_errors3111->GetYaxis()->SetTitleFont(42);
   Graph_met_total_errors3111->GetZaxis()->SetLabelFont(42);
   Graph_met_total_errors3111->GetZaxis()->SetLabelOffset(0.007);
   Graph_met_total_errors3111->GetZaxis()->SetLabelSize(0.05);
   Graph_met_total_errors3111->GetZaxis()->SetTitleSize(0.06);
   Graph_met_total_errors3111->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_met_total_errors3111);
   
   grae->Draw("pe2 ");
   
   Double_t met_data_graph_fx3112[20] = {
   10,
   30,
   50,
   70,
   90,
   110,
   130,
   150,
   170,
   190,
   210,
   230,
   250,
   270,
   290,
   310,
   330,
   350,
   370,
   390};
   Double_t met_data_graph_fy3112[20] = {
   0,
   377,
   555,
   286,
   123,
   47,
   41,
   21,
   20,
   14,
   7,
   5,
   3,
   2,
   3,
   1,
   2,
   0,
   0,
   6};
   Double_t met_data_graph_felx3112[20] = {
   10,
   10,
   10,
   10,
   10,
   10,
   10,
   10,
   10,
   10,
   10,
   10,
   10,
   10,
   10,
   10,
   10,
   10,
   10,
   10};
   Double_t met_data_graph_fely3112[20] = {
   0,
   19.40829,
   23.55185,
   16.90201,
   11.07567,
   6.831306,
   6.377022,
   4.545892,
   4.43453,
   3.696566,
   2.581513,
   2.159724,
   1.632727,
   1.29183,
   1.632727,
   0.8272525,
   1.29183,
   0,
   0,
   2.379969};
   Double_t met_data_graph_fehx3112[20] = {
   10,
   10,
   10,
   10,
   10,
   10,
   10,
   10,
   10,
   10,
   10,
   10,
   10,
   10,
   10,
   10,
   10,
   10,
   10,
   10};
   Double_t met_data_graph_fehy3112[20] = {
   1.841055,
   20.43411,
   24.57312,
   17.93164,
   12.12087,
   7.904454,
   7.45534,
   5.655298,
   5.546633,
   4.830479,
   3.770356,
   3.382539,
   2.918242,
   2.63791,
   2.918242,
   2.29957,
   2.63791,
   1.841055,
   1.841055,
   3.583712};
   grae = new TGraphAsymmErrors(20,met_data_graph_fx3112,met_data_graph_fy3112,met_data_graph_felx3112,met_data_graph_fehx3112,met_data_graph_fely3112,met_data_graph_fehy3112);
   grae->SetName("met_data_graph");
   grae->SetTitle("Graph");
   grae->SetFillStyle(1000);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.1);
   
   TH1F *Graph_met_data_graph3112 = new TH1F("Graph_met_data_graph3112","Graph",100,0,440);
   Graph_met_data_graph3112->SetMinimum(0);
   Graph_met_data_graph3112->SetMaximum(637.5304);
   Graph_met_data_graph3112->SetDirectory(0);
   Graph_met_data_graph3112->SetStats(0);
   Graph_met_data_graph3112->SetLineStyle(0);
   Graph_met_data_graph3112->SetMarkerStyle(20);
   Graph_met_data_graph3112->GetXaxis()->SetLabelFont(42);
   Graph_met_data_graph3112->GetXaxis()->SetLabelOffset(0.007);
   Graph_met_data_graph3112->GetXaxis()->SetLabelSize(0.05);
   Graph_met_data_graph3112->GetXaxis()->SetTitleSize(0.06);
   Graph_met_data_graph3112->GetXaxis()->SetTitleOffset(0.9);
   Graph_met_data_graph3112->GetXaxis()->SetTitleFont(42);
   Graph_met_data_graph3112->GetYaxis()->SetLabelFont(42);
   Graph_met_data_graph3112->GetYaxis()->SetLabelOffset(0.007);
   Graph_met_data_graph3112->GetYaxis()->SetLabelSize(0.05);
   Graph_met_data_graph3112->GetYaxis()->SetTitleSize(0.06);
   Graph_met_data_graph3112->GetYaxis()->SetTitleOffset(1.35);
   Graph_met_data_graph3112->GetYaxis()->SetTitleFont(42);
   Graph_met_data_graph3112->GetZaxis()->SetLabelFont(42);
   Graph_met_data_graph3112->GetZaxis()->SetLabelOffset(0.007);
   Graph_met_data_graph3112->GetZaxis()->SetLabelSize(0.05);
   Graph_met_data_graph3112->GetZaxis()->SetTitleSize(0.06);
   Graph_met_data_graph3112->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_met_data_graph3112);
   
   grae->Draw("pz ");
   
   TLegend *leg = new TLegend(0.62,0.628,0.9,0.91,NULL,"brNDC");
   leg->SetBorderSize(1);
   leg->SetTextSize(0.036);
   leg->SetLineColor(0);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("met_data","Data","LPE");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1.1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("met_prompt_WZ_stack_5","WZ","F");

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
   entry=leg->AddEntry("met_prompt_ZZ_stack_4","qqZZ","F");

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
   entry=leg->AddEntry("met_fakes_DY_stack_3","Fakes DY","F");

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
   entry=leg->AddEntry("met_fakes_TT_stack_2","Fakes TT","F");

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
   entry=leg->AddEntry("met_total_errors","Total unc.","F");
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
   met_canvas->cd();
  
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
   
   TH1D *met_total__91 = new TH1D("met_total__91","dummy",20,0,400);
   met_total__91->SetBinContent(2,1);
   met_total__91->SetBinContent(3,1);
   met_total__91->SetBinContent(4,1);
   met_total__91->SetBinContent(5,1);
   met_total__91->SetBinContent(6,1);
   met_total__91->SetBinContent(7,1);
   met_total__91->SetBinContent(8,1);
   met_total__91->SetBinContent(9,1);
   met_total__91->SetBinContent(10,1);
   met_total__91->SetBinContent(11,1);
   met_total__91->SetBinContent(12,1);
   met_total__91->SetBinContent(13,1);
   met_total__91->SetBinContent(14,1);
   met_total__91->SetBinContent(15,1);
   met_total__91->SetBinContent(16,1);
   met_total__91->SetBinContent(17,1);
   met_total__91->SetBinContent(18,1);
   met_total__91->SetBinContent(19,1);
   met_total__91->SetBinContent(20,1);
   met_total__91->SetMinimum(0.5);
   met_total__91->SetMaximum(2);
   met_total__91->SetEntries(15172);

   ci = TColor::GetColor("#00cc00");
   met_total__91->SetFillColor(ci);

   ci = TColor::GetColor("#6666ff");
   met_total__91->SetMarkerColor(ci);
   met_total__91->SetMarkerSize(1.1);
   met_total__91->GetXaxis()->SetTitle("p_{T}^{miss}  (GeV)");
   met_total__91->GetXaxis()->SetMoreLogLabels();
   met_total__91->GetXaxis()->SetLabelFont(42);
   met_total__91->GetXaxis()->SetLabelOffset(0.015);
   met_total__91->GetXaxis()->SetLabelSize(0.1);
   met_total__91->GetXaxis()->SetTitleSize(0.14);
   met_total__91->GetXaxis()->SetTitleFont(42);
   met_total__91->GetYaxis()->SetTitle("Data/pred.");
   met_total__91->GetYaxis()->SetDecimals();
   met_total__91->GetYaxis()->SetNdivisions(505);
   met_total__91->GetYaxis()->SetLabelFont(42);
   met_total__91->GetYaxis()->SetLabelOffset(0.01);
   met_total__91->GetYaxis()->SetLabelSize(0.11);
   met_total__91->GetYaxis()->SetTitleSize(0.14);
   met_total__91->GetYaxis()->SetTitleOffset(0.62);
   met_total__91->GetYaxis()->SetTitleFont(42);
   met_total__91->GetZaxis()->SetLabelFont(42);
   met_total__91->GetZaxis()->SetLabelOffset(0.007);
   met_total__91->GetZaxis()->SetLabelSize(0.05);
   met_total__91->GetZaxis()->SetTitleSize(0.06);
   met_total__91->GetZaxis()->SetTitleFont(42);
   met_total__91->Draw("AXIS");
   
   Double_t met_total_errors_fx3113[19] = {
   30,
   50,
   70,
   90,
   110,
   130,
   150,
   170,
   190,
   210,
   230,
   250,
   270,
   290,
   310,
   330,
   350,
   370,
   390};
   Double_t met_total_errors_fy3113[19] = {
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
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
   Double_t met_total_errors_felx3113[19] = {
   10,
   10,
   10,
   10,
   10,
   10,
   10,
   10,
   10,
   10,
   10,
   10,
   10,
   10,
   10,
   10,
   10,
   10,
   10};
   Double_t met_total_errors_fely3113[19] = {
   0.03112459,
   0.01996879,
   0.02310168,
   0.0296303,
   0.04467474,
   0.05191098,
   0.06907036,
   0.09472003,
   0.1175618,
   0.1274797,
   0.1605431,
   0.1892147,
   0.2434744,
   0.2361486,
   0.25,
   0.3779645,
   0.5,
   0.4500027,
   0.2581989};
   Double_t met_total_errors_fehx3113[19] = {
   10,
   10,
   10,
   10,
   10,
   10,
   10,
   10,
   10,
   10,
   10,
   10,
   10,
   10,
   10,
   10,
   10,
   10,
   10};
   Double_t met_total_errors_fehy3113[19] = {
   0.03112459,
   0.01996879,
   0.02310168,
   0.0296303,
   0.04467474,
   0.05191098,
   0.06907036,
   0.09472003,
   0.1175618,
   0.1274797,
   0.1605431,
   0.1892147,
   0.2434744,
   0.2361486,
   0.25,
   0.3779645,
   0.5,
   0.4500027,
   0.2581989};
   grae = new TGraphAsymmErrors(19,met_total_errors_fx3113,met_total_errors_fy3113,met_total_errors_felx3113,met_total_errors_fehx3113,met_total_errors_fely3113,met_total_errors_fehy3113);
   grae->SetName("met_total_errors");
   grae->SetTitle("Graph");

   ci = TColor::GetColor("#00ffff");
   grae->SetFillColor(ci);

   ci = TColor::GetColor("#00ffff");
   grae->SetMarkerColor(ci);
   grae->Draw("e2");
   
   Double_t met_total_errors_fx3114[19] = {
   30,
   50,
   70,
   90,
   110,
   130,
   150,
   170,
   190,
   210,
   230,
   250,
   270,
   290,
   310,
   330,
   350,
   370,
   390};
   Double_t met_total_errors_fy3114[19] = {
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
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
   Double_t met_total_errors_felx3114[19] = {
   10,
   10,
   10,
   10,
   10,
   10,
   10,
   10,
   10,
   10,
   10,
   10,
   10,
   10,
   10,
   10,
   10,
   10,
   10};
   Double_t met_total_errors_fely3114[19] = {
   0.03112459,
   0.01996879,
   0.02310168,
   0.0296303,
   0.04467474,
   0.05191098,
   0.06907036,
   0.09472003,
   0.1175618,
   0.1274797,
   0.1605431,
   0.1892147,
   0.2434744,
   0.2361486,
   0.25,
   0.3779645,
   0.5,
   0.4500027,
   0.2581989};
   Double_t met_total_errors_fehx3114[19] = {
   10,
   10,
   10,
   10,
   10,
   10,
   10,
   10,
   10,
   10,
   10,
   10,
   10,
   10,
   10,
   10,
   10,
   10,
   10};
   Double_t met_total_errors_fehy3114[19] = {
   0.03112459,
   0.01996879,
   0.02310168,
   0.0296303,
   0.04467474,
   0.05191098,
   0.06907036,
   0.09472003,
   0.1175618,
   0.1274797,
   0.1605431,
   0.1892147,
   0.2434744,
   0.2361486,
   0.25,
   0.3779645,
   0.5,
   0.4500027,
   0.2581989};
   grae = new TGraphAsymmErrors(19,met_total_errors_fx3114,met_total_errors_fy3114,met_total_errors_felx3114,met_total_errors_fehx3114,met_total_errors_fely3114,met_total_errors_fehy3114);
   grae->SetName("met_total_errors");
   grae->SetTitle("Graph");

   ci = TColor::GetColor("#6666ff");
   grae->SetFillColor(ci);

   ci = TColor::GetColor("#6666ff");
   grae->SetMarkerColor(ci);
   grae->Draw("e2 ");
   
   TH1D *met_total__92 = new TH1D("met_total__92","dummy",20,0,400);
   met_total__92->SetBinContent(2,1);
   met_total__92->SetBinContent(3,1);
   met_total__92->SetBinContent(4,1);
   met_total__92->SetBinContent(5,1);
   met_total__92->SetBinContent(6,1);
   met_total__92->SetBinContent(7,1);
   met_total__92->SetBinContent(8,1);
   met_total__92->SetBinContent(9,1);
   met_total__92->SetBinContent(10,1);
   met_total__92->SetBinContent(11,1);
   met_total__92->SetBinContent(12,1);
   met_total__92->SetBinContent(13,1);
   met_total__92->SetBinContent(14,1);
   met_total__92->SetBinContent(15,1);
   met_total__92->SetBinContent(16,1);
   met_total__92->SetBinContent(17,1);
   met_total__92->SetBinContent(18,1);
   met_total__92->SetBinContent(19,1);
   met_total__92->SetBinContent(20,1);
   met_total__92->SetMinimum(0.5);
   met_total__92->SetMaximum(2);
   met_total__92->SetEntries(15172);

   ci = TColor::GetColor("#00cc00");
   met_total__92->SetFillColor(ci);

   ci = TColor::GetColor("#6666ff");
   met_total__92->SetMarkerColor(ci);
   met_total__92->SetMarkerSize(1.1);
   met_total__92->GetXaxis()->SetTitle("p_{T}^{miss}  (GeV)");
   met_total__92->GetXaxis()->SetMoreLogLabels();
   met_total__92->GetXaxis()->SetLabelFont(42);
   met_total__92->GetXaxis()->SetLabelOffset(0.015);
   met_total__92->GetXaxis()->SetLabelSize(0.1);
   met_total__92->GetXaxis()->SetTitleSize(0.14);
   met_total__92->GetXaxis()->SetTitleFont(42);
   met_total__92->GetYaxis()->SetTitle("Data/pred.");
   met_total__92->GetYaxis()->SetDecimals();
   met_total__92->GetYaxis()->SetNdivisions(505);
   met_total__92->GetYaxis()->SetLabelFont(42);
   met_total__92->GetYaxis()->SetLabelOffset(0.01);
   met_total__92->GetYaxis()->SetLabelSize(0.11);
   met_total__92->GetYaxis()->SetTitleSize(0.14);
   met_total__92->GetYaxis()->SetTitleOffset(0.62);
   met_total__92->GetYaxis()->SetTitleFont(42);
   met_total__92->GetZaxis()->SetLabelFont(42);
   met_total__92->GetZaxis()->SetLabelOffset(0.007);
   met_total__92->GetZaxis()->SetLabelSize(0.05);
   met_total__92->GetZaxis()->SetTitleSize(0.06);
   met_total__92->GetZaxis()->SetTitleFont(42);
   met_total__92->Draw("AXIS SAME");
   TLine *line = new TLine(0,1,400,1);
   line->SetLineColor(58);
   line->SetLineWidth(2);
   line->Draw();
   
   Double_t data_div_fx3115[20] = {
   10,
   30,
   50,
   70,
   90,
   110,
   130,
   150,
   170,
   190,
   210,
   230,
   250,
   270,
   290,
   310,
   330,
   350,
   370,
   390};
   Double_t data_div_fy3115[20] = {
   0,
   1.013292,
   1.002044,
   1.005997,
   0.9573234,
   0.7019658,
   1.192374,
   1.083183,
   1.874373,
   2.024988,
   1.239478,
   1.446922,
   1.195891,
   1.342545,
   1.870196,
   0.6910049,
   3.158879,
   0,
   0,
   4.422431};
   Double_t data_div_felx3115[20] = {
   10,
   10,
   10,
   10,
   10,
   10,
   10,
   10,
   10,
   10,
   10,
   10,
   10,
   10,
   10,
   10,
   10,
   10,
   10,
   10};
   Double_t data_div_fely3115[20] = {
   0,
   0.05216514,
   0.04252251,
   0.05945235,
   0.08620324,
   0.1020286,
   0.1854584,
   0.2344778,
   0.4155982,
   0.5346787,
   0.4571041,
   0.6249907,
   0.6508544,
   0.8671695,
   1.01784,
   0.5716355,
   2.040367,
   0,
   0,
   1.754208};
   Double_t data_div_fehx3115[20] = {
   10,
   10,
   10,
   10,
   10,
   10,
   10,
   10,
   10,
   10,
   10,
   10,
   10,
   10,
   10,
   10,
   10,
   10,
   10,
   10};
   Double_t data_div_fehy3115[20] = {
   0,
   0.0549223,
   0.04436641,
   0.06307408,
   0.09433818,
   0.1180565,
   0.2168184,
   0.2917012,
   0.519823,
   0.69869,
   0.6676105,
   0.9788544,
   1.1633,
   1.770756,
   1.819228,
   1.589014,
   4.16642,
   5.088711,
   4.298655,
   2.641454};
   grae = new TGraphAsymmErrors(20,data_div_fx3115,data_div_fy3115,data_div_felx3115,data_div_fehx3115,data_div_fely3115,data_div_fehy3115);
   grae->SetName("data_div");
   grae->SetTitle("Graph");
   grae->SetFillStyle(1000);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.1);
   
   TH1F *Graph_met_data_graph3115 = new TH1F("Graph_met_data_graph3115","Graph",100,0,440);
   Graph_met_data_graph3115->SetMinimum(0);
   Graph_met_data_graph3115->SetMaximum(637.5304);
   Graph_met_data_graph3115->SetDirectory(0);
   Graph_met_data_graph3115->SetStats(0);
   Graph_met_data_graph3115->SetLineStyle(0);
   Graph_met_data_graph3115->SetMarkerStyle(20);
   Graph_met_data_graph3115->GetXaxis()->SetLabelFont(42);
   Graph_met_data_graph3115->GetXaxis()->SetLabelOffset(0.007);
   Graph_met_data_graph3115->GetXaxis()->SetLabelSize(0.05);
   Graph_met_data_graph3115->GetXaxis()->SetTitleSize(0.06);
   Graph_met_data_graph3115->GetXaxis()->SetTitleOffset(0.9);
   Graph_met_data_graph3115->GetXaxis()->SetTitleFont(42);
   Graph_met_data_graph3115->GetYaxis()->SetLabelFont(42);
   Graph_met_data_graph3115->GetYaxis()->SetLabelOffset(0.007);
   Graph_met_data_graph3115->GetYaxis()->SetLabelSize(0.05);
   Graph_met_data_graph3115->GetYaxis()->SetTitleSize(0.06);
   Graph_met_data_graph3115->GetYaxis()->SetTitleOffset(1.35);
   Graph_met_data_graph3115->GetYaxis()->SetTitleFont(42);
   Graph_met_data_graph3115->GetZaxis()->SetLabelFont(42);
   Graph_met_data_graph3115->GetZaxis()->SetLabelOffset(0.007);
   Graph_met_data_graph3115->GetZaxis()->SetLabelSize(0.05);
   Graph_met_data_graph3115->GetZaxis()->SetTitleSize(0.06);
   Graph_met_data_graph3115->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_met_data_graph3115);
   
   grae->Draw("pz ");
   
   leg = new TLegend(0,0,0,0,NULL,"brNDC");
   leg->SetBorderSize(1);
   leg->SetTextSize(0.084);
   leg->SetLineColor(0);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   entry=leg->AddEntry("met_total_errors","stat. unc.","F");
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
   entry=leg->AddEntry("met_total_errors","total unc.","F");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   leg->Draw();
   pad2->Modified();
   met_canvas->cd();
   met_canvas->Modified();
   met_canvas->cd();
   met_canvas->SetSelected(met_canvas);
}
