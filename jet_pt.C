void jet_pt()
{
//=========Macro generated from canvas: jet_pt_canvas/jet_pt
//=========  (Fri Nov 18 13:17:48 2022) by ROOT version 6.12/07
   TCanvas *jet_pt_canvas = new TCanvas("jet_pt_canvas", "jet_pt",0,0,600,750);
   gStyle->SetOptFit(1);
   gStyle->SetOptStat(0);
   gStyle->SetOptTitle(0);
   jet_pt_canvas->SetHighLightColor(2);
   jet_pt_canvas->Range(0,0,1,1);
   jet_pt_canvas->SetFillColor(0);
   jet_pt_canvas->SetBorderMode(0);
   jet_pt_canvas->SetBorderSize(2);
   jet_pt_canvas->SetTickx(1);
   jet_pt_canvas->SetTicky(1);
   jet_pt_canvas->SetLeftMargin(0.18);
   jet_pt_canvas->SetRightMargin(0.04);
   jet_pt_canvas->SetBottomMargin(0.13);
   jet_pt_canvas->SetFrameFillStyle(0);
   jet_pt_canvas->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: pad1
   TPad *pad1 = new TPad("pad1", "pad1",0,0.3,1,1);
   pad1->Draw();
   pad1->cd();
   pad1->Range(-46.15385,-19.89851,210.2564,776.0418);
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
   
   TH1D *jet_pt_total__173 = new TH1D("jet_pt_total__173","dummy",20,0,200);
   jet_pt_total__173->SetBinContent(2,504.8018);
   jet_pt_total__173->SetBinContent(3,448.1143);
   jet_pt_total__173->SetBinContent(4,218.4658);
   jet_pt_total__173->SetBinContent(5,121.1274);
   jet_pt_total__173->SetBinContent(6,83.01313);
   jet_pt_total__173->SetBinContent(7,62.72525);
   jet_pt_total__173->SetBinContent(8,41.08226);
   jet_pt_total__173->SetBinContent(9,34.47893);
   jet_pt_total__173->SetBinContent(10,28.90859);
   jet_pt_total__173->SetBinContent(11,23.24682);
   jet_pt_total__173->SetBinContent(12,19.83489);
   jet_pt_total__173->SetBinContent(13,13.17264);
   jet_pt_total__173->SetBinContent(14,9.882304);
   jet_pt_total__173->SetBinContent(15,9.934336);
   jet_pt_total__173->SetBinContent(16,10.92348);
   jet_pt_total__173->SetBinContent(17,6.610368);
   jet_pt_total__173->SetBinContent(18,5.825845);
   jet_pt_total__173->SetBinContent(19,5.692668);
   jet_pt_total__173->SetBinContent(20,44.54306);
   jet_pt_total__173->SetBinError(2,11.60067);
   jet_pt_total__173->SetBinError(3,10.7238);
   jet_pt_total__173->SetBinError(4,7.554927);
   jet_pt_total__173->SetBinError(5,4.458047);
   jet_pt_total__173->SetBinError(6,4.668035);
   jet_pt_total__173->SetBinError(7,4.472763);
   jet_pt_total__173->SetBinError(8,2.570094);
   jet_pt_total__173->SetBinError(9,2.959597);
   jet_pt_total__173->SetBinError(10,2.360712);
   jet_pt_total__173->SetBinError(11,2.789809);
   jet_pt_total__173->SetBinError(12,2.148326);
   jet_pt_total__173->SetBinError(13,1.111991);
   jet_pt_total__173->SetBinError(14,0.9539425);
   jet_pt_total__173->SetBinError(15,1.930373);
   jet_pt_total__173->SetBinError(16,1.964753);
   jet_pt_total__173->SetBinError(17,0.7798363);
   jet_pt_total__173->SetBinError(18,0.7254117);
   jet_pt_total__173->SetBinError(19,0.7323183);
   jet_pt_total__173->SetBinError(20,2.640161);
   jet_pt_total__173->SetMinimum(0);
   jet_pt_total__173->SetMaximum(728.2854);
   jet_pt_total__173->SetEntries(17048);
   jet_pt_total__173->SetDirectory(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#00cc00");
   jet_pt_total__173->SetFillColor(ci);
   jet_pt_total__173->SetMarkerStyle(20);
   jet_pt_total__173->SetMarkerSize(1.1);
   jet_pt_total__173->GetXaxis()->SetTitle("p_{T}(jet) [GeV]");
   jet_pt_total__173->GetXaxis()->SetMoreLogLabels();
   jet_pt_total__173->GetXaxis()->SetLabelFont(42);
   jet_pt_total__173->GetXaxis()->SetLabelOffset(999);
   jet_pt_total__173->GetXaxis()->SetLabelSize(0.05);
   jet_pt_total__173->GetXaxis()->SetTitleSize(0.05);
   jet_pt_total__173->GetXaxis()->SetTitleOffset(999);
   jet_pt_total__173->GetXaxis()->SetTitleFont(42);
   jet_pt_total__173->GetYaxis()->SetTitle("Jets");
   jet_pt_total__173->GetYaxis()->SetLabelFont(42);
   jet_pt_total__173->GetYaxis()->SetLabelOffset(0.007);
   jet_pt_total__173->GetYaxis()->SetLabelSize(0.05);
   jet_pt_total__173->GetYaxis()->SetTitleSize(0.06);
   jet_pt_total__173->GetYaxis()->SetTitleOffset(1.48);
   jet_pt_total__173->GetYaxis()->SetTitleFont(42);
   jet_pt_total__173->GetZaxis()->SetLabelFont(42);
   jet_pt_total__173->GetZaxis()->SetLabelOffset(0.007);
   jet_pt_total__173->GetZaxis()->SetLabelSize(0.05);
   jet_pt_total__173->GetZaxis()->SetTitleSize(0.06);
   jet_pt_total__173->GetZaxis()->SetTitleFont(42);
   jet_pt_total__173->Draw("HIST");
   
   THStack *jet_pt_stack = new THStack();
   jet_pt_stack->SetName("jet_pt_stack");
   jet_pt_stack->SetTitle("jet_pt");
   
   TH1F *jet_pt_stack_stack_44 = new TH1F("jet_pt_stack_stack_44","jet_pt",20,0,200);
   jet_pt_stack_stack_44->SetMinimum(0);
   jet_pt_stack_stack_44->SetMaximum(530.0419);
   jet_pt_stack_stack_44->SetDirectory(0);
   jet_pt_stack_stack_44->SetStats(0);
   jet_pt_stack_stack_44->SetLineStyle(0);
   jet_pt_stack_stack_44->SetMarkerStyle(20);
   jet_pt_stack_stack_44->GetXaxis()->SetLabelFont(42);
   jet_pt_stack_stack_44->GetXaxis()->SetLabelOffset(0.007);
   jet_pt_stack_stack_44->GetXaxis()->SetLabelSize(0.05);
   jet_pt_stack_stack_44->GetXaxis()->SetTitleSize(0.06);
   jet_pt_stack_stack_44->GetXaxis()->SetTitleOffset(0.9);
   jet_pt_stack_stack_44->GetXaxis()->SetTitleFont(42);
   jet_pt_stack_stack_44->GetYaxis()->SetLabelFont(42);
   jet_pt_stack_stack_44->GetYaxis()->SetLabelOffset(0.007);
   jet_pt_stack_stack_44->GetYaxis()->SetLabelSize(0.05);
   jet_pt_stack_stack_44->GetYaxis()->SetTitleSize(0.06);
   jet_pt_stack_stack_44->GetYaxis()->SetTitleOffset(1.35);
   jet_pt_stack_stack_44->GetYaxis()->SetTitleFont(42);
   jet_pt_stack_stack_44->GetZaxis()->SetLabelFont(42);
   jet_pt_stack_stack_44->GetZaxis()->SetLabelOffset(0.007);
   jet_pt_stack_stack_44->GetZaxis()->SetLabelSize(0.05);
   jet_pt_stack_stack_44->GetZaxis()->SetTitleSize(0.06);
   jet_pt_stack_stack_44->GetZaxis()->SetTitleFont(42);
   jet_pt_stack->SetHistogram(jet_pt_stack_stack_44);
   
   
   TH1D *jet_pt_fakes_VV_stack_1 = new TH1D("jet_pt_fakes_VV_stack_1","dummy",20,0,200);
   jet_pt_fakes_VV_stack_1->SetBinContent(2,0.3887735);
   jet_pt_fakes_VV_stack_1->SetBinContent(3,0.09719337);
   jet_pt_fakes_VV_stack_1->SetBinContent(6,0.09719337);
   jet_pt_fakes_VV_stack_1->SetBinContent(9,0.09719337);
   jet_pt_fakes_VV_stack_1->SetBinError(2,0.1943867);
   jet_pt_fakes_VV_stack_1->SetBinError(3,0.09719337);
   jet_pt_fakes_VV_stack_1->SetBinError(6,0.09719337);
   jet_pt_fakes_VV_stack_1->SetBinError(9,0.09719337);
   jet_pt_fakes_VV_stack_1->SetEntries(11);

   ci = TColor::GetColor("#2e3294");
   jet_pt_fakes_VV_stack_1->SetFillColor(ci);
   jet_pt_fakes_VV_stack_1->SetMarkerStyle(0);
   jet_pt_fakes_VV_stack_1->SetMarkerSize(1.1);
   jet_pt_fakes_VV_stack_1->GetXaxis()->SetTitle("p_{T}(jet) [GeV]");
   jet_pt_fakes_VV_stack_1->GetXaxis()->SetMoreLogLabels();
   jet_pt_fakes_VV_stack_1->GetXaxis()->SetLabelFont(42);
   jet_pt_fakes_VV_stack_1->GetXaxis()->SetLabelOffset(0.007);
   jet_pt_fakes_VV_stack_1->GetXaxis()->SetLabelSize(0.05);
   jet_pt_fakes_VV_stack_1->GetXaxis()->SetTitleSize(0.06);
   jet_pt_fakes_VV_stack_1->GetXaxis()->SetTitleOffset(0.9);
   jet_pt_fakes_VV_stack_1->GetXaxis()->SetTitleFont(42);
   jet_pt_fakes_VV_stack_1->GetYaxis()->SetTitle("Jets");
   jet_pt_fakes_VV_stack_1->GetYaxis()->SetLabelFont(42);
   jet_pt_fakes_VV_stack_1->GetYaxis()->SetLabelOffset(0.007);
   jet_pt_fakes_VV_stack_1->GetYaxis()->SetLabelSize(0.05);
   jet_pt_fakes_VV_stack_1->GetYaxis()->SetTitleSize(0.06);
   jet_pt_fakes_VV_stack_1->GetYaxis()->SetTitleOffset(1.35);
   jet_pt_fakes_VV_stack_1->GetYaxis()->SetTitleFont(42);
   jet_pt_fakes_VV_stack_1->GetZaxis()->SetLabelFont(42);
   jet_pt_fakes_VV_stack_1->GetZaxis()->SetLabelOffset(0.007);
   jet_pt_fakes_VV_stack_1->GetZaxis()->SetLabelSize(0.05);
   jet_pt_fakes_VV_stack_1->GetZaxis()->SetTitleSize(0.06);
   jet_pt_fakes_VV_stack_1->GetZaxis()->SetTitleFont(42);
   jet_pt_stack->Add(jet_pt_fakes_VV_stack_1,"");
   
   TH1D *jet_pt_fakes_TT_stack_2 = new TH1D("jet_pt_fakes_TT_stack_2","dummy",20,0,200);
   jet_pt_fakes_TT_stack_2->SetBinContent(2,28.39701);
   jet_pt_fakes_TT_stack_2->SetBinContent(3,31.38925);
   jet_pt_fakes_TT_stack_2->SetBinContent(4,19.26249);
   jet_pt_fakes_TT_stack_2->SetBinContent(5,10.66389);
   jet_pt_fakes_TT_stack_2->SetBinContent(6,9.753811);
   jet_pt_fakes_TT_stack_2->SetBinContent(7,7.293525);
   jet_pt_fakes_TT_stack_2->SetBinContent(8,6.586902);
   jet_pt_fakes_TT_stack_2->SetBinContent(9,3.790171);
   jet_pt_fakes_TT_stack_2->SetBinContent(10,3.636342);
   jet_pt_fakes_TT_stack_2->SetBinContent(11,1.973987);
   jet_pt_fakes_TT_stack_2->SetBinContent(12,2.726263);
   jet_pt_fakes_TT_stack_2->SetBinContent(13,2.393792);
   jet_pt_fakes_TT_stack_2->SetBinContent(14,1.462873);
   jet_pt_fakes_TT_stack_2->SetBinContent(15,1.24255);
   jet_pt_fakes_TT_stack_2->SetBinContent(16,0.598448);
   jet_pt_fakes_TT_stack_2->SetBinContent(17,0.9974134);
   jet_pt_fakes_TT_stack_2->SetBinContent(18,0.3989653);
   jet_pt_fakes_TT_stack_2->SetBinContent(19,0.5319538);
   jet_pt_fakes_TT_stack_2->SetBinContent(20,2.904906);
   jet_pt_fakes_TT_stack_2->SetBinError(2,1.39564);
   jet_pt_fakes_TT_stack_2->SetBinError(3,1.450022);
   jet_pt_fakes_TT_stack_2->SetBinError(4,1.137896);
   jet_pt_fakes_TT_stack_2->SetBinError(5,0.8533289);
   jet_pt_fakes_TT_stack_2->SetBinError(6,0.8139626);
   jet_pt_fakes_TT_stack_2->SetBinError(7,0.7125891);
   jet_pt_fakes_TT_stack_2->SetBinError(8,0.6798486);
   jet_pt_fakes_TT_stack_2->SetBinError(9,0.5107518);
   jet_pt_fakes_TT_stack_2->SetBinError(10,0.4969062);
   jet_pt_fakes_TT_stack_2->SetBinError(11,0.3925108);
   jet_pt_fakes_TT_stack_2->SetBinError(12,0.4257708);
   jet_pt_fakes_TT_stack_2->SetBinError(13,0.3989653);
   jet_pt_fakes_TT_stack_2->SetBinError(14,0.3118856);
   jet_pt_fakes_TT_stack_2->SetBinError(15,0.2962135);
   jet_pt_fakes_TT_stack_2->SetBinError(16,0.1994827);
   jet_pt_fakes_TT_stack_2->SetBinError(17,0.257531);
   jet_pt_fakes_TT_stack_2->SetBinError(18,0.1880741);
   jet_pt_fakes_TT_stack_2->SetBinError(19,0.1880741);
   jet_pt_fakes_TT_stack_2->SetBinError(20,0.4452859);
   jet_pt_fakes_TT_stack_2->SetEntries(2071);

   ci = TColor::GetColor("#666666");
   jet_pt_fakes_TT_stack_2->SetFillColor(ci);
   jet_pt_fakes_TT_stack_2->SetMarkerStyle(0);
   jet_pt_fakes_TT_stack_2->SetMarkerSize(1.1);
   jet_pt_fakes_TT_stack_2->GetXaxis()->SetTitle("p_{T}(jet) [GeV]");
   jet_pt_fakes_TT_stack_2->GetXaxis()->SetMoreLogLabels();
   jet_pt_fakes_TT_stack_2->GetXaxis()->SetLabelFont(42);
   jet_pt_fakes_TT_stack_2->GetXaxis()->SetLabelOffset(0.007);
   jet_pt_fakes_TT_stack_2->GetXaxis()->SetLabelSize(0.05);
   jet_pt_fakes_TT_stack_2->GetXaxis()->SetTitleSize(0.06);
   jet_pt_fakes_TT_stack_2->GetXaxis()->SetTitleOffset(0.9);
   jet_pt_fakes_TT_stack_2->GetXaxis()->SetTitleFont(42);
   jet_pt_fakes_TT_stack_2->GetYaxis()->SetTitle("Jets");
   jet_pt_fakes_TT_stack_2->GetYaxis()->SetLabelFont(42);
   jet_pt_fakes_TT_stack_2->GetYaxis()->SetLabelOffset(0.007);
   jet_pt_fakes_TT_stack_2->GetYaxis()->SetLabelSize(0.05);
   jet_pt_fakes_TT_stack_2->GetYaxis()->SetTitleSize(0.06);
   jet_pt_fakes_TT_stack_2->GetYaxis()->SetTitleOffset(1.35);
   jet_pt_fakes_TT_stack_2->GetYaxis()->SetTitleFont(42);
   jet_pt_fakes_TT_stack_2->GetZaxis()->SetLabelFont(42);
   jet_pt_fakes_TT_stack_2->GetZaxis()->SetLabelOffset(0.007);
   jet_pt_fakes_TT_stack_2->GetZaxis()->SetLabelSize(0.05);
   jet_pt_fakes_TT_stack_2->GetZaxis()->SetTitleSize(0.06);
   jet_pt_fakes_TT_stack_2->GetZaxis()->SetTitleFont(42);
   jet_pt_stack->Add(jet_pt_fakes_TT_stack_2,"");
   
   TH1D *jet_pt_fakes_DY_stack_3 = new TH1D("jet_pt_fakes_DY_stack_3","dummy",20,0,200);
   jet_pt_fakes_DY_stack_3->SetBinContent(2,53.30519);
   jet_pt_fakes_DY_stack_3->SetBinContent(3,44.70757);
   jet_pt_fakes_DY_stack_3->SetBinContent(4,22.35379);
   jet_pt_fakes_DY_stack_3->SetBinContent(5,5.158566);
   jet_pt_fakes_DY_stack_3->SetBinContent(6,8.597611);
   jet_pt_fakes_DY_stack_3->SetBinContent(7,8.597611);
   jet_pt_fakes_DY_stack_3->SetBinContent(8,1.719522);
   jet_pt_fakes_DY_stack_3->SetBinContent(9,3.439044);
   jet_pt_fakes_DY_stack_3->SetBinContent(10,1.719522);
   jet_pt_fakes_DY_stack_3->SetBinContent(11,3.439044);
   jet_pt_fakes_DY_stack_3->SetBinContent(12,1.719522);
   jet_pt_fakes_DY_stack_3->SetBinContent(15,1.719522);
   jet_pt_fakes_DY_stack_3->SetBinContent(16,1.719522);
   jet_pt_fakes_DY_stack_3->SetBinContent(20,1.719522);
   jet_pt_fakes_DY_stack_3->SetBinError(2,9.573894);
   jet_pt_fakes_DY_stack_3->SetBinError(3,8.767877);
   jet_pt_fakes_DY_stack_3->SetBinError(4,6.199825);
   jet_pt_fakes_DY_stack_3->SetBinError(5,2.9783);
   jet_pt_fakes_DY_stack_3->SetBinError(6,3.844968);
   jet_pt_fakes_DY_stack_3->SetBinError(7,3.844968);
   jet_pt_fakes_DY_stack_3->SetBinError(8,1.719522);
   jet_pt_fakes_DY_stack_3->SetBinError(9,2.431771);
   jet_pt_fakes_DY_stack_3->SetBinError(10,1.719522);
   jet_pt_fakes_DY_stack_3->SetBinError(11,2.431771);
   jet_pt_fakes_DY_stack_3->SetBinError(12,1.719522);
   jet_pt_fakes_DY_stack_3->SetBinError(15,1.719522);
   jet_pt_fakes_DY_stack_3->SetBinError(16,1.719522);
   jet_pt_fakes_DY_stack_3->SetBinError(20,1.719522);
   jet_pt_fakes_DY_stack_3->SetEntries(97);

   ci = TColor::GetColor("#cccccc");
   jet_pt_fakes_DY_stack_3->SetFillColor(ci);
   jet_pt_fakes_DY_stack_3->SetMarkerStyle(0);
   jet_pt_fakes_DY_stack_3->SetMarkerSize(1.1);
   jet_pt_fakes_DY_stack_3->GetXaxis()->SetTitle("p_{T}(jet) [GeV]");
   jet_pt_fakes_DY_stack_3->GetXaxis()->SetMoreLogLabels();
   jet_pt_fakes_DY_stack_3->GetXaxis()->SetLabelFont(42);
   jet_pt_fakes_DY_stack_3->GetXaxis()->SetLabelOffset(0.007);
   jet_pt_fakes_DY_stack_3->GetXaxis()->SetLabelSize(0.05);
   jet_pt_fakes_DY_stack_3->GetXaxis()->SetTitleSize(0.06);
   jet_pt_fakes_DY_stack_3->GetXaxis()->SetTitleOffset(0.9);
   jet_pt_fakes_DY_stack_3->GetXaxis()->SetTitleFont(42);
   jet_pt_fakes_DY_stack_3->GetYaxis()->SetTitle("Jets");
   jet_pt_fakes_DY_stack_3->GetYaxis()->SetLabelFont(42);
   jet_pt_fakes_DY_stack_3->GetYaxis()->SetLabelOffset(0.007);
   jet_pt_fakes_DY_stack_3->GetYaxis()->SetLabelSize(0.05);
   jet_pt_fakes_DY_stack_3->GetYaxis()->SetTitleSize(0.06);
   jet_pt_fakes_DY_stack_3->GetYaxis()->SetTitleOffset(1.35);
   jet_pt_fakes_DY_stack_3->GetYaxis()->SetTitleFont(42);
   jet_pt_fakes_DY_stack_3->GetZaxis()->SetLabelFont(42);
   jet_pt_fakes_DY_stack_3->GetZaxis()->SetLabelOffset(0.007);
   jet_pt_fakes_DY_stack_3->GetZaxis()->SetLabelSize(0.05);
   jet_pt_fakes_DY_stack_3->GetZaxis()->SetTitleSize(0.06);
   jet_pt_fakes_DY_stack_3->GetZaxis()->SetTitleFont(42);
   jet_pt_stack->Add(jet_pt_fakes_DY_stack_3,"");
   
   TH1D *jet_pt_prompt_ZZ_stack_4 = new TH1D("jet_pt_prompt_ZZ_stack_4","dummy",20,0,200);
   jet_pt_prompt_ZZ_stack_4->SetBinContent(2,28.99069);
   jet_pt_prompt_ZZ_stack_4->SetBinContent(3,25.50447);
   jet_pt_prompt_ZZ_stack_4->SetBinContent(4,14.49535);
   jet_pt_prompt_ZZ_stack_4->SetBinContent(5,8.073358);
   jet_pt_prompt_ZZ_stack_4->SetBinContent(6,5.321077);
   jet_pt_prompt_ZZ_stack_4->SetBinContent(7,5.137591);
   jet_pt_prompt_ZZ_stack_4->SetBinContent(8,2.38531);
   jet_pt_prompt_ZZ_stack_4->SetBinContent(9,1.284398);
   jet_pt_prompt_ZZ_stack_4->SetBinContent(10,2.568796);
   jet_pt_prompt_ZZ_stack_4->SetBinContent(11,1.100912);
   jet_pt_prompt_ZZ_stack_4->SetBinContent(12,0.917427);
   jet_pt_prompt_ZZ_stack_4->SetBinContent(13,1.100912);
   jet_pt_prompt_ZZ_stack_4->SetBinContent(14,0.5504562);
   jet_pt_prompt_ZZ_stack_4->SetBinContent(15,0.5504562);
   jet_pt_prompt_ZZ_stack_4->SetBinContent(16,0.917427);
   jet_pt_prompt_ZZ_stack_4->SetBinContent(17,0.3669708);
   jet_pt_prompt_ZZ_stack_4->SetBinContent(19,0.3669708);
   jet_pt_prompt_ZZ_stack_4->SetBinContent(20,2.201825);
   jet_pt_prompt_ZZ_stack_4->SetBinError(2,2.306376);
   jet_pt_prompt_ZZ_stack_4->SetBinError(3,2.163261);
   jet_pt_prompt_ZZ_stack_4->SetBinError(4,1.630854);
   jet_pt_prompt_ZZ_stack_4->SetBinError(5,1.217105);
   jet_pt_prompt_ZZ_stack_4->SetBinError(6,0.9880992);
   jet_pt_prompt_ZZ_stack_4->SetBinError(7,0.9709135);
   jet_pt_prompt_ZZ_stack_4->SetBinError(8,0.6615661);
   jet_pt_prompt_ZZ_stack_4->SetBinError(9,0.4854568);
   jet_pt_prompt_ZZ_stack_4->SetBinError(10,0.6865395);
   jet_pt_prompt_ZZ_stack_4->SetBinError(11,0.4494456);
   jet_pt_prompt_ZZ_stack_4->SetBinError(12,0.4102858);
   jet_pt_prompt_ZZ_stack_4->SetBinError(13,0.4494456);
   jet_pt_prompt_ZZ_stack_4->SetBinError(14,0.3178061);
   jet_pt_prompt_ZZ_stack_4->SetBinError(15,0.3178061);
   jet_pt_prompt_ZZ_stack_4->SetBinError(16,0.4102858);
   jet_pt_prompt_ZZ_stack_4->SetBinError(17,0.2594876);
   jet_pt_prompt_ZZ_stack_4->SetBinError(19,0.2594876);
   jet_pt_prompt_ZZ_stack_4->SetBinError(20,0.6356121);
   jet_pt_prompt_ZZ_stack_4->SetEntries(559);

   ci = TColor::GetColor("#00cc00");
   jet_pt_prompt_ZZ_stack_4->SetFillColor(ci);
   jet_pt_prompt_ZZ_stack_4->SetMarkerStyle(0);
   jet_pt_prompt_ZZ_stack_4->SetMarkerSize(1.1);
   jet_pt_prompt_ZZ_stack_4->GetXaxis()->SetTitle("p_{T}(jet) [GeV]");
   jet_pt_prompt_ZZ_stack_4->GetXaxis()->SetMoreLogLabels();
   jet_pt_prompt_ZZ_stack_4->GetXaxis()->SetLabelFont(42);
   jet_pt_prompt_ZZ_stack_4->GetXaxis()->SetLabelOffset(0.007);
   jet_pt_prompt_ZZ_stack_4->GetXaxis()->SetLabelSize(0.05);
   jet_pt_prompt_ZZ_stack_4->GetXaxis()->SetTitleSize(0.06);
   jet_pt_prompt_ZZ_stack_4->GetXaxis()->SetTitleOffset(0.9);
   jet_pt_prompt_ZZ_stack_4->GetXaxis()->SetTitleFont(42);
   jet_pt_prompt_ZZ_stack_4->GetYaxis()->SetTitle("Jets");
   jet_pt_prompt_ZZ_stack_4->GetYaxis()->SetLabelFont(42);
   jet_pt_prompt_ZZ_stack_4->GetYaxis()->SetLabelOffset(0.007);
   jet_pt_prompt_ZZ_stack_4->GetYaxis()->SetLabelSize(0.05);
   jet_pt_prompt_ZZ_stack_4->GetYaxis()->SetTitleSize(0.06);
   jet_pt_prompt_ZZ_stack_4->GetYaxis()->SetTitleOffset(1.35);
   jet_pt_prompt_ZZ_stack_4->GetYaxis()->SetTitleFont(42);
   jet_pt_prompt_ZZ_stack_4->GetZaxis()->SetLabelFont(42);
   jet_pt_prompt_ZZ_stack_4->GetZaxis()->SetLabelOffset(0.007);
   jet_pt_prompt_ZZ_stack_4->GetZaxis()->SetLabelSize(0.05);
   jet_pt_prompt_ZZ_stack_4->GetZaxis()->SetTitleSize(0.06);
   jet_pt_prompt_ZZ_stack_4->GetZaxis()->SetTitleFont(42);
   jet_pt_stack->Add(jet_pt_prompt_ZZ_stack_4,"");
   
   TH1D *jet_pt_prompt_WZ_stack_5 = new TH1D("jet_pt_prompt_WZ_stack_5","dummy",20,0,200);
   jet_pt_prompt_WZ_stack_5->SetBinContent(2,393.7201);
   jet_pt_prompt_WZ_stack_5->SetBinContent(3,346.4158);
   jet_pt_prompt_WZ_stack_5->SetBinContent(4,162.3541);
   jet_pt_prompt_WZ_stack_5->SetBinContent(5,97.23159);
   jet_pt_prompt_WZ_stack_5->SetBinContent(6,59.24343);
   jet_pt_prompt_WZ_stack_5->SetBinContent(7,41.69652);
   jet_pt_prompt_WZ_stack_5->SetBinContent(8,30.39052);
   jet_pt_prompt_WZ_stack_5->SetBinContent(9,25.86813);
   jet_pt_prompt_WZ_stack_5->SetBinContent(10,20.98393);
   jet_pt_prompt_WZ_stack_5->SetBinContent(11,16.73288);
   jet_pt_prompt_WZ_stack_5->SetBinContent(12,14.47168);
   jet_pt_prompt_WZ_stack_5->SetBinContent(13,9.677935);
   jet_pt_prompt_WZ_stack_5->SetBinContent(14,7.868975);
   jet_pt_prompt_WZ_stack_5->SetBinContent(15,6.421807);
   jet_pt_prompt_WZ_stack_5->SetBinContent(16,7.688079);
   jet_pt_prompt_WZ_stack_5->SetBinContent(17,5.245983);
   jet_pt_prompt_WZ_stack_5->SetBinContent(18,5.426879);
   jet_pt_prompt_WZ_stack_5->SetBinContent(19,4.793743);
   jet_pt_prompt_WZ_stack_5->SetBinContent(20,37.71681);
   jet_pt_prompt_WZ_stack_5->SetBinError(2,5.967511);
   jet_pt_prompt_WZ_stack_5->SetBinError(3,5.597554);
   jet_pt_prompt_WZ_stack_5->SetBinError(4,3.83205);
   jet_pt_prompt_WZ_stack_5->SetBinError(5,2.965536);
   jet_pt_prompt_WZ_stack_5->SetBinError(6,2.314832);
   jet_pt_prompt_WZ_stack_5->SetBinError(7,1.942001);
   jet_pt_prompt_WZ_stack_5->SetBinError(8,1.657939);
   jet_pt_prompt_WZ_stack_5->SetBinError(9,1.529614);
   jet_pt_prompt_WZ_stack_5->SetBinError(10,1.377663);
   jet_pt_prompt_WZ_stack_5->SetBinError(11,1.230226);
   jet_pt_prompt_WZ_stack_5->SetBinError(12,1.144087);
   jet_pt_prompt_WZ_stack_5->SetBinError(13,0.9356013);
   jet_pt_prompt_WZ_stack_5->SetBinError(14,0.8436427);
   jet_pt_prompt_WZ_stack_5->SetBinError(15,0.7621283);
   jet_pt_prompt_WZ_stack_5->SetBinError(16,0.8338893);
   jet_pt_prompt_WZ_stack_5->SetBinError(17,0.6888314);
   jet_pt_prompt_WZ_stack_5->SetBinError(18,0.7006071);
   jet_pt_prompt_WZ_stack_5->SetBinError(19,0.6584713);
   jet_pt_prompt_WZ_stack_5->SetBinError(20,1.847);
   jet_pt_prompt_WZ_stack_5->SetEntries(14310);

   ci = TColor::GetColor("#ffcc00");
   jet_pt_prompt_WZ_stack_5->SetFillColor(ci);
   jet_pt_prompt_WZ_stack_5->SetMarkerStyle(0);
   jet_pt_prompt_WZ_stack_5->SetMarkerSize(1.1);
   jet_pt_prompt_WZ_stack_5->GetXaxis()->SetTitle("p_{T}(jet) [GeV]");
   jet_pt_prompt_WZ_stack_5->GetXaxis()->SetMoreLogLabels();
   jet_pt_prompt_WZ_stack_5->GetXaxis()->SetLabelFont(42);
   jet_pt_prompt_WZ_stack_5->GetXaxis()->SetLabelOffset(0.007);
   jet_pt_prompt_WZ_stack_5->GetXaxis()->SetLabelSize(0.05);
   jet_pt_prompt_WZ_stack_5->GetXaxis()->SetTitleSize(0.06);
   jet_pt_prompt_WZ_stack_5->GetXaxis()->SetTitleOffset(0.9);
   jet_pt_prompt_WZ_stack_5->GetXaxis()->SetTitleFont(42);
   jet_pt_prompt_WZ_stack_5->GetYaxis()->SetTitle("Jets");
   jet_pt_prompt_WZ_stack_5->GetYaxis()->SetLabelFont(42);
   jet_pt_prompt_WZ_stack_5->GetYaxis()->SetLabelOffset(0.007);
   jet_pt_prompt_WZ_stack_5->GetYaxis()->SetLabelSize(0.05);
   jet_pt_prompt_WZ_stack_5->GetYaxis()->SetTitleSize(0.06);
   jet_pt_prompt_WZ_stack_5->GetYaxis()->SetTitleOffset(1.35);
   jet_pt_prompt_WZ_stack_5->GetYaxis()->SetTitleFont(42);
   jet_pt_prompt_WZ_stack_5->GetZaxis()->SetLabelFont(42);
   jet_pt_prompt_WZ_stack_5->GetZaxis()->SetLabelOffset(0.007);
   jet_pt_prompt_WZ_stack_5->GetZaxis()->SetLabelSize(0.05);
   jet_pt_prompt_WZ_stack_5->GetZaxis()->SetTitleSize(0.06);
   jet_pt_prompt_WZ_stack_5->GetZaxis()->SetTitleFont(42);
   jet_pt_stack->Add(jet_pt_prompt_WZ_stack_5,"");
   jet_pt_stack->Draw("same hist");
   
   TH1D *jet_pt_total__174 = new TH1D("jet_pt_total__174","dummy",20,0,200);
   jet_pt_total__174->SetBinContent(2,504.8018);
   jet_pt_total__174->SetBinContent(3,448.1143);
   jet_pt_total__174->SetBinContent(4,218.4658);
   jet_pt_total__174->SetBinContent(5,121.1274);
   jet_pt_total__174->SetBinContent(6,83.01313);
   jet_pt_total__174->SetBinContent(7,62.72525);
   jet_pt_total__174->SetBinContent(8,41.08226);
   jet_pt_total__174->SetBinContent(9,34.47893);
   jet_pt_total__174->SetBinContent(10,28.90859);
   jet_pt_total__174->SetBinContent(11,23.24682);
   jet_pt_total__174->SetBinContent(12,19.83489);
   jet_pt_total__174->SetBinContent(13,13.17264);
   jet_pt_total__174->SetBinContent(14,9.882304);
   jet_pt_total__174->SetBinContent(15,9.934336);
   jet_pt_total__174->SetBinContent(16,10.92348);
   jet_pt_total__174->SetBinContent(17,6.610368);
   jet_pt_total__174->SetBinContent(18,5.825845);
   jet_pt_total__174->SetBinContent(19,5.692668);
   jet_pt_total__174->SetBinContent(20,44.54306);
   jet_pt_total__174->SetBinError(2,11.60067);
   jet_pt_total__174->SetBinError(3,10.7238);
   jet_pt_total__174->SetBinError(4,7.554927);
   jet_pt_total__174->SetBinError(5,4.458047);
   jet_pt_total__174->SetBinError(6,4.668035);
   jet_pt_total__174->SetBinError(7,4.472763);
   jet_pt_total__174->SetBinError(8,2.570094);
   jet_pt_total__174->SetBinError(9,2.959597);
   jet_pt_total__174->SetBinError(10,2.360712);
   jet_pt_total__174->SetBinError(11,2.789809);
   jet_pt_total__174->SetBinError(12,2.148326);
   jet_pt_total__174->SetBinError(13,1.111991);
   jet_pt_total__174->SetBinError(14,0.9539425);
   jet_pt_total__174->SetBinError(15,1.930373);
   jet_pt_total__174->SetBinError(16,1.964753);
   jet_pt_total__174->SetBinError(17,0.7798363);
   jet_pt_total__174->SetBinError(18,0.7254117);
   jet_pt_total__174->SetBinError(19,0.7323183);
   jet_pt_total__174->SetBinError(20,2.640161);
   jet_pt_total__174->SetMinimum(0);
   jet_pt_total__174->SetMaximum(728.2854);
   jet_pt_total__174->SetEntries(17048);
   jet_pt_total__174->SetDirectory(0);

   ci = TColor::GetColor("#00cc00");
   jet_pt_total__174->SetFillColor(ci);
   jet_pt_total__174->SetMarkerStyle(20);
   jet_pt_total__174->SetMarkerSize(1.1);
   jet_pt_total__174->GetXaxis()->SetTitle("p_{T}(jet) [GeV]");
   jet_pt_total__174->GetXaxis()->SetMoreLogLabels();
   jet_pt_total__174->GetXaxis()->SetLabelFont(42);
   jet_pt_total__174->GetXaxis()->SetLabelOffset(999);
   jet_pt_total__174->GetXaxis()->SetLabelSize(0.05);
   jet_pt_total__174->GetXaxis()->SetTitleSize(0.05);
   jet_pt_total__174->GetXaxis()->SetTitleOffset(999);
   jet_pt_total__174->GetXaxis()->SetTitleFont(42);
   jet_pt_total__174->GetYaxis()->SetTitle("Jets");
   jet_pt_total__174->GetYaxis()->SetLabelFont(42);
   jet_pt_total__174->GetYaxis()->SetLabelOffset(0.007);
   jet_pt_total__174->GetYaxis()->SetLabelSize(0.05);
   jet_pt_total__174->GetYaxis()->SetTitleSize(0.06);
   jet_pt_total__174->GetYaxis()->SetTitleOffset(1.48);
   jet_pt_total__174->GetYaxis()->SetTitleFont(42);
   jet_pt_total__174->GetZaxis()->SetLabelFont(42);
   jet_pt_total__174->GetZaxis()->SetLabelOffset(0.007);
   jet_pt_total__174->GetZaxis()->SetLabelSize(0.05);
   jet_pt_total__174->GetZaxis()->SetTitleSize(0.06);
   jet_pt_total__174->GetZaxis()->SetTitleFont(42);
   jet_pt_total__174->Draw("AXIS SAME");
   
   Double_t jet_pt_total_errors_fx3216[19] = {
   15,
   25,
   35,
   45,
   55,
   65,
   75,
   85,
   95,
   105,
   115,
   125,
   135,
   145,
   155,
   165,
   175,
   185,
   195};
   Double_t jet_pt_total_errors_fy3216[19] = {
   504.8018,
   448.1143,
   218.4658,
   121.1274,
   83.01313,
   62.72525,
   41.08226,
   34.47893,
   28.90859,
   23.24682,
   19.83489,
   13.17264,
   9.882304,
   9.934336,
   10.92348,
   6.610368,
   5.825845,
   5.692668,
   44.54306};
   Double_t jet_pt_total_errors_felx3216[19] = {
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5};
   Double_t jet_pt_total_errors_fely3216[19] = {
   11.60067,
   10.7238,
   7.554927,
   4.458047,
   4.668035,
   4.472763,
   2.570094,
   2.959597,
   2.360712,
   2.789809,
   2.148326,
   1.111991,
   0.9539425,
   1.930373,
   1.964753,
   0.7798363,
   0.7254117,
   0.7323183,
   2.640161};
   Double_t jet_pt_total_errors_fehx3216[19] = {
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5};
   Double_t jet_pt_total_errors_fehy3216[19] = {
   11.60067,
   10.7238,
   7.554927,
   4.458047,
   4.668035,
   4.472763,
   2.570094,
   2.959597,
   2.360712,
   2.789809,
   2.148326,
   1.111991,
   0.9539425,
   1.930373,
   1.964753,
   0.7798363,
   0.7254117,
   0.7323183,
   2.640161};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(19,jet_pt_total_errors_fx3216,jet_pt_total_errors_fy3216,jet_pt_total_errors_felx3216,jet_pt_total_errors_fehx3216,jet_pt_total_errors_fely3216,jet_pt_total_errors_fehy3216);
   grae->SetName("jet_pt_total_errors");
   grae->SetTitle("Graph");
   grae->SetFillColor(1);
   grae->SetFillStyle(3013);
   grae->SetMarkerStyle(0);
   
   TH1F *Graph_jet_pt_total_errors3216 = new TH1F("Graph_jet_pt_total_errors3216","Graph",100,0,219);
   Graph_jet_pt_total_errors3216->SetMinimum(4.464315);
   Graph_jet_pt_total_errors3216->SetMaximum(567.5466);
   Graph_jet_pt_total_errors3216->SetDirectory(0);
   Graph_jet_pt_total_errors3216->SetStats(0);
   Graph_jet_pt_total_errors3216->SetLineStyle(0);
   Graph_jet_pt_total_errors3216->SetMarkerStyle(20);
   Graph_jet_pt_total_errors3216->GetXaxis()->SetLabelFont(42);
   Graph_jet_pt_total_errors3216->GetXaxis()->SetLabelOffset(0.007);
   Graph_jet_pt_total_errors3216->GetXaxis()->SetLabelSize(0.05);
   Graph_jet_pt_total_errors3216->GetXaxis()->SetTitleSize(0.06);
   Graph_jet_pt_total_errors3216->GetXaxis()->SetTitleOffset(0.9);
   Graph_jet_pt_total_errors3216->GetXaxis()->SetTitleFont(42);
   Graph_jet_pt_total_errors3216->GetYaxis()->SetLabelFont(42);
   Graph_jet_pt_total_errors3216->GetYaxis()->SetLabelOffset(0.007);
   Graph_jet_pt_total_errors3216->GetYaxis()->SetLabelSize(0.05);
   Graph_jet_pt_total_errors3216->GetYaxis()->SetTitleSize(0.06);
   Graph_jet_pt_total_errors3216->GetYaxis()->SetTitleOffset(1.35);
   Graph_jet_pt_total_errors3216->GetYaxis()->SetTitleFont(42);
   Graph_jet_pt_total_errors3216->GetZaxis()->SetLabelFont(42);
   Graph_jet_pt_total_errors3216->GetZaxis()->SetLabelOffset(0.007);
   Graph_jet_pt_total_errors3216->GetZaxis()->SetLabelSize(0.05);
   Graph_jet_pt_total_errors3216->GetZaxis()->SetTitleSize(0.06);
   Graph_jet_pt_total_errors3216->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_jet_pt_total_errors3216);
   
   grae->Draw("pe2 ");
   
   Double_t jet_pt_data_graph_fx3217[20] = {
   5,
   15,
   25,
   35,
   45,
   55,
   65,
   75,
   85,
   95,
   105,
   115,
   125,
   135,
   145,
   155,
   165,
   175,
   185,
   195};
   Double_t jet_pt_data_graph_fy3217[20] = {
   0,
   506,
   529,
   267,
   183,
   149,
   95,
   91,
   66,
   64,
   51,
   38,
   33,
   19,
   23,
   24,
   26,
   16,
   19,
   118};
   Double_t jet_pt_data_graph_felx3217[20] = {
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5};
   Double_t jet_pt_data_graph_fely3217[20] = {
   0,
   22.48749,
   22.99322,
   16.33025,
   13.51567,
   12.1931,
   9.729809,
   9.522026,
   8.103564,
   7.979201,
   7.118073,
   6.137282,
   5.715412,
   4.320299,
   4.760806,
   4.864704,
   5.066111,
   3.957873,
   4.320299,
   10.84759};
   Double_t jet_pt_data_graph_fehx3217[20] = {
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5};
   Double_t jet_pt_data_graph_fehy3217[20] = {
   1.841055,
   23.50978,
   24.01502,
   17.36092,
   14.55272,
   13.23417,
   10.78125,
   10.57459,
   9.165286,
   9.041881,
   8.188292,
   7.218633,
   6.802707,
   5.435307,
   5.865355,
   5.967055,
   6.164451,
   5.083169,
   5.435307,
   11.89374};
   grae = new TGraphAsymmErrors(20,jet_pt_data_graph_fx3217,jet_pt_data_graph_fy3217,jet_pt_data_graph_felx3217,jet_pt_data_graph_fehx3217,jet_pt_data_graph_fely3217,jet_pt_data_graph_fehy3217);
   grae->SetName("jet_pt_data_graph");
   grae->SetTitle("Graph");
   grae->SetFillStyle(1000);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.1);
   
   TH1F *Graph_jet_pt_data_graph3217 = new TH1F("Graph_jet_pt_data_graph3217","Graph",100,0,220);
   Graph_jet_pt_data_graph3217->SetMinimum(0);
   Graph_jet_pt_data_graph3217->SetMaximum(608.3165);
   Graph_jet_pt_data_graph3217->SetDirectory(0);
   Graph_jet_pt_data_graph3217->SetStats(0);
   Graph_jet_pt_data_graph3217->SetLineStyle(0);
   Graph_jet_pt_data_graph3217->SetMarkerStyle(20);
   Graph_jet_pt_data_graph3217->GetXaxis()->SetLabelFont(42);
   Graph_jet_pt_data_graph3217->GetXaxis()->SetLabelOffset(0.007);
   Graph_jet_pt_data_graph3217->GetXaxis()->SetLabelSize(0.05);
   Graph_jet_pt_data_graph3217->GetXaxis()->SetTitleSize(0.06);
   Graph_jet_pt_data_graph3217->GetXaxis()->SetTitleOffset(0.9);
   Graph_jet_pt_data_graph3217->GetXaxis()->SetTitleFont(42);
   Graph_jet_pt_data_graph3217->GetYaxis()->SetLabelFont(42);
   Graph_jet_pt_data_graph3217->GetYaxis()->SetLabelOffset(0.007);
   Graph_jet_pt_data_graph3217->GetYaxis()->SetLabelSize(0.05);
   Graph_jet_pt_data_graph3217->GetYaxis()->SetTitleSize(0.06);
   Graph_jet_pt_data_graph3217->GetYaxis()->SetTitleOffset(1.35);
   Graph_jet_pt_data_graph3217->GetYaxis()->SetTitleFont(42);
   Graph_jet_pt_data_graph3217->GetZaxis()->SetLabelFont(42);
   Graph_jet_pt_data_graph3217->GetZaxis()->SetLabelOffset(0.007);
   Graph_jet_pt_data_graph3217->GetZaxis()->SetLabelSize(0.05);
   Graph_jet_pt_data_graph3217->GetZaxis()->SetTitleSize(0.06);
   Graph_jet_pt_data_graph3217->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_jet_pt_data_graph3217);
   
   grae->Draw("pz ");
   
   TLegend *leg = new TLegend(0.62,0.628,0.9,0.91,NULL,"brNDC");
   leg->SetBorderSize(1);
   leg->SetTextSize(0.036);
   leg->SetLineColor(0);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("jet_pt_data","Data","LPE");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1.1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("jet_pt_prompt_WZ_stack_5","WZ","F");

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
   entry=leg->AddEntry("jet_pt_prompt_ZZ_stack_4","qqZZ","F");

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
   entry=leg->AddEntry("jet_pt_fakes_DY_stack_3","Fakes DY","F");

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
   entry=leg->AddEntry("jet_pt_fakes_TT_stack_2","Fakes TT","F");

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
   entry=leg->AddEntry("jet_pt_total_errors","Total unc.","F");
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
   jet_pt_canvas->cd();
  
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
   
   TH1D *jet_pt_total__175 = new TH1D("jet_pt_total__175","dummy",20,0,200);
   jet_pt_total__175->SetBinContent(2,1);
   jet_pt_total__175->SetBinContent(3,1);
   jet_pt_total__175->SetBinContent(4,1);
   jet_pt_total__175->SetBinContent(5,1);
   jet_pt_total__175->SetBinContent(6,1);
   jet_pt_total__175->SetBinContent(7,1);
   jet_pt_total__175->SetBinContent(8,1);
   jet_pt_total__175->SetBinContent(9,1);
   jet_pt_total__175->SetBinContent(10,1);
   jet_pt_total__175->SetBinContent(11,1);
   jet_pt_total__175->SetBinContent(12,1);
   jet_pt_total__175->SetBinContent(13,1);
   jet_pt_total__175->SetBinContent(14,1);
   jet_pt_total__175->SetBinContent(15,1);
   jet_pt_total__175->SetBinContent(16,1);
   jet_pt_total__175->SetBinContent(17,1);
   jet_pt_total__175->SetBinContent(18,1);
   jet_pt_total__175->SetBinContent(19,1);
   jet_pt_total__175->SetBinContent(20,1);
   jet_pt_total__175->SetMinimum(0.5);
   jet_pt_total__175->SetMaximum(2);
   jet_pt_total__175->SetEntries(17068);

   ci = TColor::GetColor("#00cc00");
   jet_pt_total__175->SetFillColor(ci);

   ci = TColor::GetColor("#6666ff");
   jet_pt_total__175->SetMarkerColor(ci);
   jet_pt_total__175->SetMarkerSize(1.1);
   jet_pt_total__175->GetXaxis()->SetTitle("p_{T}(jet) [GeV]");
   jet_pt_total__175->GetXaxis()->SetMoreLogLabels();
   jet_pt_total__175->GetXaxis()->SetLabelFont(42);
   jet_pt_total__175->GetXaxis()->SetLabelOffset(0.015);
   jet_pt_total__175->GetXaxis()->SetLabelSize(0.1);
   jet_pt_total__175->GetXaxis()->SetTitleSize(0.14);
   jet_pt_total__175->GetXaxis()->SetTitleFont(42);
   jet_pt_total__175->GetYaxis()->SetTitle("Data/pred.");
   jet_pt_total__175->GetYaxis()->SetDecimals();
   jet_pt_total__175->GetYaxis()->SetNdivisions(505);
   jet_pt_total__175->GetYaxis()->SetLabelFont(42);
   jet_pt_total__175->GetYaxis()->SetLabelOffset(0.01);
   jet_pt_total__175->GetYaxis()->SetLabelSize(0.11);
   jet_pt_total__175->GetYaxis()->SetTitleSize(0.14);
   jet_pt_total__175->GetYaxis()->SetTitleOffset(0.62);
   jet_pt_total__175->GetYaxis()->SetTitleFont(42);
   jet_pt_total__175->GetZaxis()->SetLabelFont(42);
   jet_pt_total__175->GetZaxis()->SetLabelOffset(0.007);
   jet_pt_total__175->GetZaxis()->SetLabelSize(0.05);
   jet_pt_total__175->GetZaxis()->SetTitleSize(0.06);
   jet_pt_total__175->GetZaxis()->SetTitleFont(42);
   jet_pt_total__175->Draw("AXIS");
   
   Double_t jet_pt_total_errors_fx3218[19] = {
   15,
   25,
   35,
   45,
   55,
   65,
   75,
   85,
   95,
   105,
   115,
   125,
   135,
   145,
   155,
   165,
   175,
   185,
   195};
   Double_t jet_pt_total_errors_fy3218[19] = {
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
   Double_t jet_pt_total_errors_felx3218[19] = {
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5};
   Double_t jet_pt_total_errors_fely3218[19] = {
   0.02298065,
   0.02393096,
   0.03458175,
   0.03680461,
   0.0562325,
   0.07130721,
   0.0625597,
   0.08583784,
   0.08166127,
   0.1200082,
   0.1083105,
   0.08441674,
   0.09653037,
   0.1943132,
   0.1798652,
   0.1179717,
   0.1245161,
   0.1286424,
   0.05927209};
   Double_t jet_pt_total_errors_fehx3218[19] = {
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5};
   Double_t jet_pt_total_errors_fehy3218[19] = {
   0.02298065,
   0.02393096,
   0.03458175,
   0.03680461,
   0.0562325,
   0.07130721,
   0.0625597,
   0.08583784,
   0.08166127,
   0.1200082,
   0.1083105,
   0.08441674,
   0.09653037,
   0.1943132,
   0.1798652,
   0.1179717,
   0.1245161,
   0.1286424,
   0.05927209};
   grae = new TGraphAsymmErrors(19,jet_pt_total_errors_fx3218,jet_pt_total_errors_fy3218,jet_pt_total_errors_felx3218,jet_pt_total_errors_fehx3218,jet_pt_total_errors_fely3218,jet_pt_total_errors_fehy3218);
   grae->SetName("jet_pt_total_errors");
   grae->SetTitle("Graph");

   ci = TColor::GetColor("#00ffff");
   grae->SetFillColor(ci);

   ci = TColor::GetColor("#00ffff");
   grae->SetMarkerColor(ci);
   grae->Draw("e2");
   
   Double_t jet_pt_total_errors_fx3219[19] = {
   15,
   25,
   35,
   45,
   55,
   65,
   75,
   85,
   95,
   105,
   115,
   125,
   135,
   145,
   155,
   165,
   175,
   185,
   195};
   Double_t jet_pt_total_errors_fy3219[19] = {
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
   Double_t jet_pt_total_errors_felx3219[19] = {
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5};
   Double_t jet_pt_total_errors_fely3219[19] = {
   0.02298065,
   0.02393096,
   0.03458175,
   0.03680461,
   0.0562325,
   0.07130721,
   0.0625597,
   0.08583784,
   0.08166127,
   0.1200082,
   0.1083105,
   0.08441674,
   0.09653037,
   0.1943132,
   0.1798652,
   0.1179717,
   0.1245161,
   0.1286424,
   0.05927209};
   Double_t jet_pt_total_errors_fehx3219[19] = {
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5};
   Double_t jet_pt_total_errors_fehy3219[19] = {
   0.02298065,
   0.02393096,
   0.03458175,
   0.03680461,
   0.0562325,
   0.07130721,
   0.0625597,
   0.08583784,
   0.08166127,
   0.1200082,
   0.1083105,
   0.08441674,
   0.09653037,
   0.1943132,
   0.1798652,
   0.1179717,
   0.1245161,
   0.1286424,
   0.05927209};
   grae = new TGraphAsymmErrors(19,jet_pt_total_errors_fx3219,jet_pt_total_errors_fy3219,jet_pt_total_errors_felx3219,jet_pt_total_errors_fehx3219,jet_pt_total_errors_fely3219,jet_pt_total_errors_fehy3219);
   grae->SetName("jet_pt_total_errors");
   grae->SetTitle("Graph");

   ci = TColor::GetColor("#6666ff");
   grae->SetFillColor(ci);

   ci = TColor::GetColor("#6666ff");
   grae->SetMarkerColor(ci);
   grae->Draw("e2 ");
   
   TH1D *jet_pt_total__176 = new TH1D("jet_pt_total__176","dummy",20,0,200);
   jet_pt_total__176->SetBinContent(2,1);
   jet_pt_total__176->SetBinContent(3,1);
   jet_pt_total__176->SetBinContent(4,1);
   jet_pt_total__176->SetBinContent(5,1);
   jet_pt_total__176->SetBinContent(6,1);
   jet_pt_total__176->SetBinContent(7,1);
   jet_pt_total__176->SetBinContent(8,1);
   jet_pt_total__176->SetBinContent(9,1);
   jet_pt_total__176->SetBinContent(10,1);
   jet_pt_total__176->SetBinContent(11,1);
   jet_pt_total__176->SetBinContent(12,1);
   jet_pt_total__176->SetBinContent(13,1);
   jet_pt_total__176->SetBinContent(14,1);
   jet_pt_total__176->SetBinContent(15,1);
   jet_pt_total__176->SetBinContent(16,1);
   jet_pt_total__176->SetBinContent(17,1);
   jet_pt_total__176->SetBinContent(18,1);
   jet_pt_total__176->SetBinContent(19,1);
   jet_pt_total__176->SetBinContent(20,1);
   jet_pt_total__176->SetMinimum(0.5);
   jet_pt_total__176->SetMaximum(2);
   jet_pt_total__176->SetEntries(17068);

   ci = TColor::GetColor("#00cc00");
   jet_pt_total__176->SetFillColor(ci);

   ci = TColor::GetColor("#6666ff");
   jet_pt_total__176->SetMarkerColor(ci);
   jet_pt_total__176->SetMarkerSize(1.1);
   jet_pt_total__176->GetXaxis()->SetTitle("p_{T}(jet) [GeV]");
   jet_pt_total__176->GetXaxis()->SetMoreLogLabels();
   jet_pt_total__176->GetXaxis()->SetLabelFont(42);
   jet_pt_total__176->GetXaxis()->SetLabelOffset(0.015);
   jet_pt_total__176->GetXaxis()->SetLabelSize(0.1);
   jet_pt_total__176->GetXaxis()->SetTitleSize(0.14);
   jet_pt_total__176->GetXaxis()->SetTitleFont(42);
   jet_pt_total__176->GetYaxis()->SetTitle("Data/pred.");
   jet_pt_total__176->GetYaxis()->SetDecimals();
   jet_pt_total__176->GetYaxis()->SetNdivisions(505);
   jet_pt_total__176->GetYaxis()->SetLabelFont(42);
   jet_pt_total__176->GetYaxis()->SetLabelOffset(0.01);
   jet_pt_total__176->GetYaxis()->SetLabelSize(0.11);
   jet_pt_total__176->GetYaxis()->SetTitleSize(0.14);
   jet_pt_total__176->GetYaxis()->SetTitleOffset(0.62);
   jet_pt_total__176->GetYaxis()->SetTitleFont(42);
   jet_pt_total__176->GetZaxis()->SetLabelFont(42);
   jet_pt_total__176->GetZaxis()->SetLabelOffset(0.007);
   jet_pt_total__176->GetZaxis()->SetLabelSize(0.05);
   jet_pt_total__176->GetZaxis()->SetTitleSize(0.06);
   jet_pt_total__176->GetZaxis()->SetTitleFont(42);
   jet_pt_total__176->Draw("AXIS SAME");
   TLine *line = new TLine(0,1,200,1);
   line->SetLineColor(58);
   line->SetLineWidth(2);
   line->Draw();
   
   Double_t data_div_fx3220[20] = {
   5,
   15,
   25,
   35,
   45,
   55,
   65,
   75,
   85,
   95,
   105,
   115,
   125,
   135,
   145,
   155,
   165,
   175,
   185,
   195};
   Double_t data_div_fy3220[20] = {
   0,
   1.002374,
   1.180502,
   1.222159,
   1.510806,
   1.794897,
   1.514542,
   2.215068,
   1.914212,
   2.213875,
   2.193848,
   1.915816,
   2.505193,
   1.922629,
   2.315203,
   2.197103,
   3.933215,
   2.746383,
   3.337627,
   2.649122};
   Double_t data_div_felx3220[20] = {
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5};
   Double_t data_div_fely3220[20] = {
   0,
   0.04454718,
   0.05131107,
   0.07474968,
   0.1115822,
   0.1468816,
   0.1551179,
   0.2317795,
   0.2350294,
   0.2760148,
   0.3061955,
   0.3094185,
   0.4338851,
   0.4371753,
   0.4792274,
   0.4453439,
   0.7663887,
   0.6793646,
   0.7589234,
   0.2435304};
   Double_t data_div_fehx3220[20] = {
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5};
   Double_t data_div_fehy3220[20] = {
   0,
   0.04657229,
   0.05359128,
   0.07946747,
   0.1201439,
   0.1594226,
   0.1718805,
   0.2574003,
   0.2658228,
   0.3127748,
   0.3522328,
   0.3639361,
   0.5164271,
   0.550004,
   0.5904124,
   0.5462597,
   0.9325428,
   0.8725205,
   0.9547908,
   0.2670167};
   grae = new TGraphAsymmErrors(20,data_div_fx3220,data_div_fy3220,data_div_felx3220,data_div_fehx3220,data_div_fely3220,data_div_fehy3220);
   grae->SetName("data_div");
   grae->SetTitle("Graph");
   grae->SetFillStyle(1000);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.1);
   
   TH1F *Graph_jet_pt_data_graph3220 = new TH1F("Graph_jet_pt_data_graph3220","Graph",100,0,220);
   Graph_jet_pt_data_graph3220->SetMinimum(0);
   Graph_jet_pt_data_graph3220->SetMaximum(608.3165);
   Graph_jet_pt_data_graph3220->SetDirectory(0);
   Graph_jet_pt_data_graph3220->SetStats(0);
   Graph_jet_pt_data_graph3220->SetLineStyle(0);
   Graph_jet_pt_data_graph3220->SetMarkerStyle(20);
   Graph_jet_pt_data_graph3220->GetXaxis()->SetLabelFont(42);
   Graph_jet_pt_data_graph3220->GetXaxis()->SetLabelOffset(0.007);
   Graph_jet_pt_data_graph3220->GetXaxis()->SetLabelSize(0.05);
   Graph_jet_pt_data_graph3220->GetXaxis()->SetTitleSize(0.06);
   Graph_jet_pt_data_graph3220->GetXaxis()->SetTitleOffset(0.9);
   Graph_jet_pt_data_graph3220->GetXaxis()->SetTitleFont(42);
   Graph_jet_pt_data_graph3220->GetYaxis()->SetLabelFont(42);
   Graph_jet_pt_data_graph3220->GetYaxis()->SetLabelOffset(0.007);
   Graph_jet_pt_data_graph3220->GetYaxis()->SetLabelSize(0.05);
   Graph_jet_pt_data_graph3220->GetYaxis()->SetTitleSize(0.06);
   Graph_jet_pt_data_graph3220->GetYaxis()->SetTitleOffset(1.35);
   Graph_jet_pt_data_graph3220->GetYaxis()->SetTitleFont(42);
   Graph_jet_pt_data_graph3220->GetZaxis()->SetLabelFont(42);
   Graph_jet_pt_data_graph3220->GetZaxis()->SetLabelOffset(0.007);
   Graph_jet_pt_data_graph3220->GetZaxis()->SetLabelSize(0.05);
   Graph_jet_pt_data_graph3220->GetZaxis()->SetTitleSize(0.06);
   Graph_jet_pt_data_graph3220->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_jet_pt_data_graph3220);
   
   grae->Draw("pz ");
   
   leg = new TLegend(0,0,0,0,NULL,"brNDC");
   leg->SetBorderSize(1);
   leg->SetTextSize(0.084);
   leg->SetLineColor(0);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   entry=leg->AddEntry("jet_pt_total_errors","stat. unc.","F");
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
   entry=leg->AddEntry("jet_pt_total_errors","total unc.","F");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   leg->Draw();
   pad2->Modified();
   jet_pt_canvas->cd();
   jet_pt_canvas->Modified();
   jet_pt_canvas->cd();
   jet_pt_canvas->SetSelected(jet_pt_canvas);
}
