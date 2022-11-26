void jet2_eta()
{
//=========Macro generated from canvas: jet2_eta_canvas/jet2_eta
//=========  (Fri Nov 18 13:16:16 2022) by ROOT version 6.12/07
   TCanvas *jet2_eta_canvas = new TCanvas("jet2_eta_canvas", "jet2_eta",0,0,600,750);
   gStyle->SetOptFit(1);
   gStyle->SetOptStat(0);
   gStyle->SetOptTitle(0);
   jet2_eta_canvas->SetHighLightColor(2);
   jet2_eta_canvas->Range(0,0,1,1);
   jet2_eta_canvas->SetFillColor(0);
   jet2_eta_canvas->SetBorderMode(0);
   jet2_eta_canvas->SetBorderSize(2);
   jet2_eta_canvas->SetTickx(1);
   jet2_eta_canvas->SetTicky(1);
   jet2_eta_canvas->SetLeftMargin(0.18);
   jet2_eta_canvas->SetRightMargin(0.04);
   jet2_eta_canvas->SetBottomMargin(0.13);
   jet2_eta_canvas->SetFrameFillStyle(0);
   jet2_eta_canvas->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: pad1
   TPad *pad1 = new TPad("pad1", "pad1",0,0.3,1,1);
   pad1->Draw();
   pad1->cd();
   pad1->Range(-3.507692,-3.454672,2.646154,134.7322);
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
   
   TH1D *jet2_eta_total__161 = new TH1D("jet2_eta_total__161","dummy",20,-2.4,2.4);
   jet2_eta_total__161->SetBinContent(1,90.61923);
   jet2_eta_total__161->SetBinContent(2,11.67546);
   jet2_eta_total__161->SetBinContent(3,14.54944);
   jet2_eta_total__161->SetBinContent(4,12.80041);
   jet2_eta_total__161->SetBinContent(5,14.40988);
   jet2_eta_total__161->SetBinContent(6,13.83011);
   jet2_eta_total__161->SetBinContent(7,15.23187);
   jet2_eta_total__161->SetBinContent(8,15.01101);
   jet2_eta_total__161->SetBinContent(9,18.8404);
   jet2_eta_total__161->SetBinContent(10,19.53812);
   jet2_eta_total__161->SetBinContent(11,17.68016);
   jet2_eta_total__161->SetBinContent(12,13.407);
   jet2_eta_total__161->SetBinContent(13,15.59787);
   jet2_eta_total__161->SetBinContent(14,16.67986);
   jet2_eta_total__161->SetBinContent(15,13.99214);
   jet2_eta_total__161->SetBinContent(16,15.95766);
   jet2_eta_total__161->SetBinContent(17,12.70756);
   jet2_eta_total__161->SetBinContent(18,15.29679);
   jet2_eta_total__161->SetBinContent(19,13.96972);
   jet2_eta_total__161->SetBinContent(20,83.24139);
   jet2_eta_total__161->SetBinError(1,5.307932);
   jet2_eta_total__161->SetBinError(2,1.032604);
   jet2_eta_total__161->SetBinError(3,2.035418);
   jet2_eta_total__161->SetBinError(4,1.096953);
   jet2_eta_total__161->SetBinError(5,1.163468);
   jet2_eta_total__161->SetBinError(6,1.114469);
   jet2_eta_total__161->SetBinError(7,1.208425);
   jet2_eta_total__161->SetBinError(8,2.049976);
   jet2_eta_total__161->SetBinError(9,2.141082);
   jet2_eta_total__161->SetBinError(10,2.722497);
   jet2_eta_total__161->SetBinError(11,2.125348);
   jet2_eta_total__161->SetBinError(12,1.113332);
   jet2_eta_total__161->SetBinError(13,2.0553);
   jet2_eta_total__161->SetBinError(14,2.100337);
   jet2_eta_total__161->SetBinError(15,1.165324);
   jet2_eta_total__161->SetBinError(16,2.083357);
   jet2_eta_total__161->SetBinError(17,1.072411);
   jet2_eta_total__161->SetBinError(18,2.059098);
   jet2_eta_total__161->SetBinError(19,2.038277);
   jet2_eta_total__161->SetBinError(20,4.683282);
   jet2_eta_total__161->SetMinimum(0);
   jet2_eta_total__161->SetMaximum(126.441);
   jet2_eta_total__161->SetEntries(4536);
   jet2_eta_total__161->SetDirectory(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#00cc00");
   jet2_eta_total__161->SetFillColor(ci);
   jet2_eta_total__161->SetMarkerStyle(20);
   jet2_eta_total__161->SetMarkerSize(1.1);
   jet2_eta_total__161->GetXaxis()->SetTitle("p_{T}(subleading jet) [GeV]");
   jet2_eta_total__161->GetXaxis()->SetMoreLogLabels();
   jet2_eta_total__161->GetXaxis()->SetLabelFont(42);
   jet2_eta_total__161->GetXaxis()->SetLabelOffset(999);
   jet2_eta_total__161->GetXaxis()->SetLabelSize(0.05);
   jet2_eta_total__161->GetXaxis()->SetTitleSize(0.05);
   jet2_eta_total__161->GetXaxis()->SetTitleOffset(999);
   jet2_eta_total__161->GetXaxis()->SetTitleFont(42);
   jet2_eta_total__161->GetYaxis()->SetTitle("Jets");
   jet2_eta_total__161->GetYaxis()->SetLabelFont(42);
   jet2_eta_total__161->GetYaxis()->SetLabelOffset(0.007);
   jet2_eta_total__161->GetYaxis()->SetLabelSize(0.05);
   jet2_eta_total__161->GetYaxis()->SetTitleSize(0.06);
   jet2_eta_total__161->GetYaxis()->SetTitleOffset(1.48);
   jet2_eta_total__161->GetYaxis()->SetTitleFont(42);
   jet2_eta_total__161->GetZaxis()->SetLabelFont(42);
   jet2_eta_total__161->GetZaxis()->SetLabelOffset(0.007);
   jet2_eta_total__161->GetZaxis()->SetLabelSize(0.05);
   jet2_eta_total__161->GetZaxis()->SetTitleSize(0.06);
   jet2_eta_total__161->GetZaxis()->SetTitleFont(42);
   jet2_eta_total__161->Draw("HIST");
   
   THStack *jet2_eta_stack = new THStack();
   jet2_eta_stack->SetName("jet2_eta_stack");
   jet2_eta_stack->SetTitle("jet2_eta");
   
   TH1F *jet2_eta_stack_stack_41 = new TH1F("jet2_eta_stack_stack_41","jet2_eta",20,-2.4,2.4);
   jet2_eta_stack_stack_41->SetMinimum(0);
   jet2_eta_stack_stack_41->SetMaximum(95.15019);
   jet2_eta_stack_stack_41->SetDirectory(0);
   jet2_eta_stack_stack_41->SetStats(0);
   jet2_eta_stack_stack_41->SetLineStyle(0);
   jet2_eta_stack_stack_41->SetMarkerStyle(20);
   jet2_eta_stack_stack_41->GetXaxis()->SetLabelFont(42);
   jet2_eta_stack_stack_41->GetXaxis()->SetLabelOffset(0.007);
   jet2_eta_stack_stack_41->GetXaxis()->SetLabelSize(0.05);
   jet2_eta_stack_stack_41->GetXaxis()->SetTitleSize(0.06);
   jet2_eta_stack_stack_41->GetXaxis()->SetTitleOffset(0.9);
   jet2_eta_stack_stack_41->GetXaxis()->SetTitleFont(42);
   jet2_eta_stack_stack_41->GetYaxis()->SetLabelFont(42);
   jet2_eta_stack_stack_41->GetYaxis()->SetLabelOffset(0.007);
   jet2_eta_stack_stack_41->GetYaxis()->SetLabelSize(0.05);
   jet2_eta_stack_stack_41->GetYaxis()->SetTitleSize(0.06);
   jet2_eta_stack_stack_41->GetYaxis()->SetTitleOffset(1.35);
   jet2_eta_stack_stack_41->GetYaxis()->SetTitleFont(42);
   jet2_eta_stack_stack_41->GetZaxis()->SetLabelFont(42);
   jet2_eta_stack_stack_41->GetZaxis()->SetLabelOffset(0.007);
   jet2_eta_stack_stack_41->GetZaxis()->SetLabelSize(0.05);
   jet2_eta_stack_stack_41->GetZaxis()->SetTitleSize(0.06);
   jet2_eta_stack_stack_41->GetZaxis()->SetTitleFont(42);
   jet2_eta_stack->SetHistogram(jet2_eta_stack_stack_41);
   
   
   TH1D *jet2_eta_fakes_VV_stack_1 = new TH1D("jet2_eta_fakes_VV_stack_1","dummy",20,-2.4,2.4);
   jet2_eta_fakes_VV_stack_1->SetBinContent(8,0.09719337);
   jet2_eta_fakes_VV_stack_1->SetBinContent(16,0.09719337);
   jet2_eta_fakes_VV_stack_1->SetBinError(8,0.09719337);
   jet2_eta_fakes_VV_stack_1->SetBinError(16,0.09719337);
   jet2_eta_fakes_VV_stack_1->SetEntries(6);

   ci = TColor::GetColor("#2e3294");
   jet2_eta_fakes_VV_stack_1->SetFillColor(ci);
   jet2_eta_fakes_VV_stack_1->SetMarkerStyle(0);
   jet2_eta_fakes_VV_stack_1->SetMarkerSize(1.1);
   jet2_eta_fakes_VV_stack_1->GetXaxis()->SetTitle("p_{T}(subleading jet) [GeV]");
   jet2_eta_fakes_VV_stack_1->GetXaxis()->SetMoreLogLabels();
   jet2_eta_fakes_VV_stack_1->GetXaxis()->SetLabelFont(42);
   jet2_eta_fakes_VV_stack_1->GetXaxis()->SetLabelOffset(0.007);
   jet2_eta_fakes_VV_stack_1->GetXaxis()->SetLabelSize(0.05);
   jet2_eta_fakes_VV_stack_1->GetXaxis()->SetTitleSize(0.06);
   jet2_eta_fakes_VV_stack_1->GetXaxis()->SetTitleOffset(0.9);
   jet2_eta_fakes_VV_stack_1->GetXaxis()->SetTitleFont(42);
   jet2_eta_fakes_VV_stack_1->GetYaxis()->SetTitle("Jets");
   jet2_eta_fakes_VV_stack_1->GetYaxis()->SetLabelFont(42);
   jet2_eta_fakes_VV_stack_1->GetYaxis()->SetLabelOffset(0.007);
   jet2_eta_fakes_VV_stack_1->GetYaxis()->SetLabelSize(0.05);
   jet2_eta_fakes_VV_stack_1->GetYaxis()->SetTitleSize(0.06);
   jet2_eta_fakes_VV_stack_1->GetYaxis()->SetTitleOffset(1.35);
   jet2_eta_fakes_VV_stack_1->GetYaxis()->SetTitleFont(42);
   jet2_eta_fakes_VV_stack_1->GetZaxis()->SetLabelFont(42);
   jet2_eta_fakes_VV_stack_1->GetZaxis()->SetLabelOffset(0.007);
   jet2_eta_fakes_VV_stack_1->GetZaxis()->SetLabelSize(0.05);
   jet2_eta_fakes_VV_stack_1->GetZaxis()->SetTitleSize(0.06);
   jet2_eta_fakes_VV_stack_1->GetZaxis()->SetTitleFont(42);
   jet2_eta_stack->Add(jet2_eta_fakes_VV_stack_1,"");
   
   TH1D *jet2_eta_fakes_TT_stack_2 = new TH1D("jet2_eta_fakes_TT_stack_2","dummy",20,-2.4,2.4);
   jet2_eta_fakes_TT_stack_2->SetBinContent(1,7.048388);
   jet2_eta_fakes_TT_stack_2->SetBinContent(2,0.9974134);
   jet2_eta_fakes_TT_stack_2->SetBinContent(3,1.063908);
   jet2_eta_fakes_TT_stack_2->SetBinContent(4,1.662356);
   jet2_eta_fakes_TT_stack_2->SetBinContent(5,1.462873);
   jet2_eta_fakes_TT_stack_2->SetBinContent(6,1.795344);
   jet2_eta_fakes_TT_stack_2->SetBinContent(7,1.196896);
   jet2_eta_fakes_TT_stack_2->SetBinContent(8,1.063908);
   jet2_eta_fakes_TT_stack_2->SetBinContent(9,1.907492);
   jet2_eta_fakes_TT_stack_2->SetBinContent(10,1.795344);
   jet2_eta_fakes_TT_stack_2->SetBinContent(11,1.196896);
   jet2_eta_fakes_TT_stack_2->SetBinContent(12,1.72885);
   jet2_eta_fakes_TT_stack_2->SetBinContent(13,1.840998);
   jet2_eta_fakes_TT_stack_2->SetBinContent(14,1.462873);
   jet2_eta_fakes_TT_stack_2->SetBinContent(15,1.130402);
   jet2_eta_fakes_TT_stack_2->SetBinContent(16,1.72885);
   jet2_eta_fakes_TT_stack_2->SetBinContent(17,1.396379);
   jet2_eta_fakes_TT_stack_2->SetBinContent(18,1.26339);
   jet2_eta_fakes_TT_stack_2->SetBinContent(19,1.109562);
   jet2_eta_fakes_TT_stack_2->SetBinContent(20,6.275271);
   jet2_eta_fakes_TT_stack_2->SetBinError(1,0.6910283);
   jet2_eta_fakes_TT_stack_2->SetBinError(2,0.257531);
   jet2_eta_fakes_TT_stack_2->SetBinError(3,0.2659769);
   jet2_eta_fakes_TT_stack_2->SetBinError(4,0.3324711);
   jet2_eta_fakes_TT_stack_2->SetBinError(5,0.3118856);
   jet2_eta_fakes_TT_stack_2->SetBinError(6,0.3455141);
   jet2_eta_fakes_TT_stack_2->SetBinError(7,0.2973712);
   jet2_eta_fakes_TT_stack_2->SetBinError(8,0.2659769);
   jet2_eta_fakes_TT_stack_2->SetBinError(9,0.3632592);
   jet2_eta_fakes_TT_stack_2->SetBinError(10,0.3455141);
   jet2_eta_fakes_TT_stack_2->SetBinError(11,0.2973712);
   jet2_eta_fakes_TT_stack_2->SetBinError(12,0.3390553);
   jet2_eta_fakes_TT_stack_2->SetBinError(13,0.3571215);
   jet2_eta_fakes_TT_stack_2->SetBinError(14,0.3118856);
   jet2_eta_fakes_TT_stack_2->SetBinError(15,0.2741627);
   jet2_eta_fakes_TT_stack_2->SetBinError(16,0.3390553);
   jet2_eta_fakes_TT_stack_2->SetBinError(17,0.3047148);
   jet2_eta_fakes_TT_stack_2->SetBinError(18,0.2898416);
   jet2_eta_fakes_TT_stack_2->SetBinError(19,0.2962135);
   jet2_eta_fakes_TT_stack_2->SetBinError(20,0.6605697);
   jet2_eta_fakes_TT_stack_2->SetEntries(603);

   ci = TColor::GetColor("#666666");
   jet2_eta_fakes_TT_stack_2->SetFillColor(ci);
   jet2_eta_fakes_TT_stack_2->SetMarkerStyle(0);
   jet2_eta_fakes_TT_stack_2->SetMarkerSize(1.1);
   jet2_eta_fakes_TT_stack_2->GetXaxis()->SetTitle("p_{T}(subleading jet) [GeV]");
   jet2_eta_fakes_TT_stack_2->GetXaxis()->SetMoreLogLabels();
   jet2_eta_fakes_TT_stack_2->GetXaxis()->SetLabelFont(42);
   jet2_eta_fakes_TT_stack_2->GetXaxis()->SetLabelOffset(0.007);
   jet2_eta_fakes_TT_stack_2->GetXaxis()->SetLabelSize(0.05);
   jet2_eta_fakes_TT_stack_2->GetXaxis()->SetTitleSize(0.06);
   jet2_eta_fakes_TT_stack_2->GetXaxis()->SetTitleOffset(0.9);
   jet2_eta_fakes_TT_stack_2->GetXaxis()->SetTitleFont(42);
   jet2_eta_fakes_TT_stack_2->GetYaxis()->SetTitle("Jets");
   jet2_eta_fakes_TT_stack_2->GetYaxis()->SetLabelFont(42);
   jet2_eta_fakes_TT_stack_2->GetYaxis()->SetLabelOffset(0.007);
   jet2_eta_fakes_TT_stack_2->GetYaxis()->SetLabelSize(0.05);
   jet2_eta_fakes_TT_stack_2->GetYaxis()->SetTitleSize(0.06);
   jet2_eta_fakes_TT_stack_2->GetYaxis()->SetTitleOffset(1.35);
   jet2_eta_fakes_TT_stack_2->GetYaxis()->SetTitleFont(42);
   jet2_eta_fakes_TT_stack_2->GetZaxis()->SetLabelFont(42);
   jet2_eta_fakes_TT_stack_2->GetZaxis()->SetLabelOffset(0.007);
   jet2_eta_fakes_TT_stack_2->GetZaxis()->SetLabelSize(0.05);
   jet2_eta_fakes_TT_stack_2->GetZaxis()->SetTitleSize(0.06);
   jet2_eta_fakes_TT_stack_2->GetZaxis()->SetTitleFont(42);
   jet2_eta_stack->Add(jet2_eta_fakes_TT_stack_2,"");
   
   TH1D *jet2_eta_fakes_DY_stack_3 = new TH1D("jet2_eta_fakes_DY_stack_3","dummy",20,-2.4,2.4);
   jet2_eta_fakes_DY_stack_3->SetBinContent(1,12.03665);
   jet2_eta_fakes_DY_stack_3->SetBinContent(3,1.719522);
   jet2_eta_fakes_DY_stack_3->SetBinContent(8,1.719522);
   jet2_eta_fakes_DY_stack_3->SetBinContent(9,1.719522);
   jet2_eta_fakes_DY_stack_3->SetBinContent(10,3.439044);
   jet2_eta_fakes_DY_stack_3->SetBinContent(11,1.719522);
   jet2_eta_fakes_DY_stack_3->SetBinContent(13,1.719522);
   jet2_eta_fakes_DY_stack_3->SetBinContent(14,1.719522);
   jet2_eta_fakes_DY_stack_3->SetBinContent(16,1.719522);
   jet2_eta_fakes_DY_stack_3->SetBinContent(18,1.719522);
   jet2_eta_fakes_DY_stack_3->SetBinContent(19,1.719522);
   jet2_eta_fakes_DY_stack_3->SetBinContent(20,8.597611);
   jet2_eta_fakes_DY_stack_3->SetBinError(1,4.549428);
   jet2_eta_fakes_DY_stack_3->SetBinError(3,1.719522);
   jet2_eta_fakes_DY_stack_3->SetBinError(8,1.719522);
   jet2_eta_fakes_DY_stack_3->SetBinError(9,1.719522);
   jet2_eta_fakes_DY_stack_3->SetBinError(10,2.431771);
   jet2_eta_fakes_DY_stack_3->SetBinError(11,1.719522);
   jet2_eta_fakes_DY_stack_3->SetBinError(13,1.719522);
   jet2_eta_fakes_DY_stack_3->SetBinError(14,1.719522);
   jet2_eta_fakes_DY_stack_3->SetBinError(16,1.719522);
   jet2_eta_fakes_DY_stack_3->SetBinError(18,1.719522);
   jet2_eta_fakes_DY_stack_3->SetBinError(19,1.719522);
   jet2_eta_fakes_DY_stack_3->SetBinError(20,3.844968);
   jet2_eta_fakes_DY_stack_3->SetEntries(27);

   ci = TColor::GetColor("#cccccc");
   jet2_eta_fakes_DY_stack_3->SetFillColor(ci);
   jet2_eta_fakes_DY_stack_3->SetMarkerStyle(0);
   jet2_eta_fakes_DY_stack_3->SetMarkerSize(1.1);
   jet2_eta_fakes_DY_stack_3->GetXaxis()->SetTitle("p_{T}(subleading jet) [GeV]");
   jet2_eta_fakes_DY_stack_3->GetXaxis()->SetMoreLogLabels();
   jet2_eta_fakes_DY_stack_3->GetXaxis()->SetLabelFont(42);
   jet2_eta_fakes_DY_stack_3->GetXaxis()->SetLabelOffset(0.007);
   jet2_eta_fakes_DY_stack_3->GetXaxis()->SetLabelSize(0.05);
   jet2_eta_fakes_DY_stack_3->GetXaxis()->SetTitleSize(0.06);
   jet2_eta_fakes_DY_stack_3->GetXaxis()->SetTitleOffset(0.9);
   jet2_eta_fakes_DY_stack_3->GetXaxis()->SetTitleFont(42);
   jet2_eta_fakes_DY_stack_3->GetYaxis()->SetTitle("Jets");
   jet2_eta_fakes_DY_stack_3->GetYaxis()->SetLabelFont(42);
   jet2_eta_fakes_DY_stack_3->GetYaxis()->SetLabelOffset(0.007);
   jet2_eta_fakes_DY_stack_3->GetYaxis()->SetLabelSize(0.05);
   jet2_eta_fakes_DY_stack_3->GetYaxis()->SetTitleSize(0.06);
   jet2_eta_fakes_DY_stack_3->GetYaxis()->SetTitleOffset(1.35);
   jet2_eta_fakes_DY_stack_3->GetYaxis()->SetTitleFont(42);
   jet2_eta_fakes_DY_stack_3->GetZaxis()->SetLabelFont(42);
   jet2_eta_fakes_DY_stack_3->GetZaxis()->SetLabelOffset(0.007);
   jet2_eta_fakes_DY_stack_3->GetZaxis()->SetLabelSize(0.05);
   jet2_eta_fakes_DY_stack_3->GetZaxis()->SetTitleSize(0.06);
   jet2_eta_fakes_DY_stack_3->GetZaxis()->SetTitleFont(42);
   jet2_eta_stack->Add(jet2_eta_fakes_DY_stack_3,"");
   
   TH1D *jet2_eta_prompt_ZZ_stack_4 = new TH1D("jet2_eta_prompt_ZZ_stack_4","dummy",20,-2.4,2.4);
   jet2_eta_prompt_ZZ_stack_4->SetBinContent(1,5.688048);
   jet2_eta_prompt_ZZ_stack_4->SetBinContent(2,0.3669708);
   jet2_eta_prompt_ZZ_stack_4->SetBinContent(3,0.5504562);
   jet2_eta_prompt_ZZ_stack_4->SetBinContent(4,0.917427);
   jet2_eta_prompt_ZZ_stack_4->SetBinContent(5,0.917427);
   jet2_eta_prompt_ZZ_stack_4->SetBinContent(6,0.3669708);
   jet2_eta_prompt_ZZ_stack_4->SetBinContent(7,1.100912);
   jet2_eta_prompt_ZZ_stack_4->SetBinContent(8,0.7339416);
   jet2_eta_prompt_ZZ_stack_4->SetBinContent(9,1.284398);
   jet2_eta_prompt_ZZ_stack_4->SetBinContent(10,0.917427);
   jet2_eta_prompt_ZZ_stack_4->SetBinContent(11,1.467883);
   jet2_eta_prompt_ZZ_stack_4->SetBinContent(12,0.7339416);
   jet2_eta_prompt_ZZ_stack_4->SetBinContent(13,0.5504562);
   jet2_eta_prompt_ZZ_stack_4->SetBinContent(14,1.467883);
   jet2_eta_prompt_ZZ_stack_4->SetBinContent(15,1.284398);
   jet2_eta_prompt_ZZ_stack_4->SetBinContent(16,1.467883);
   jet2_eta_prompt_ZZ_stack_4->SetBinContent(17,0.3669708);
   jet2_eta_prompt_ZZ_stack_4->SetBinContent(18,0.917427);
   jet2_eta_prompt_ZZ_stack_4->SetBinContent(19,1.100912);
   jet2_eta_prompt_ZZ_stack_4->SetBinContent(20,5.688048);
   jet2_eta_prompt_ZZ_stack_4->SetBinError(1,1.021604);
   jet2_eta_prompt_ZZ_stack_4->SetBinError(2,0.2594876);
   jet2_eta_prompt_ZZ_stack_4->SetBinError(3,0.3178061);
   jet2_eta_prompt_ZZ_stack_4->SetBinError(4,0.4102858);
   jet2_eta_prompt_ZZ_stack_4->SetBinError(5,0.4102858);
   jet2_eta_prompt_ZZ_stack_4->SetBinError(6,0.2594876);
   jet2_eta_prompt_ZZ_stack_4->SetBinError(7,0.4494456);
   jet2_eta_prompt_ZZ_stack_4->SetBinError(8,0.3669708);
   jet2_eta_prompt_ZZ_stack_4->SetBinError(9,0.4854568);
   jet2_eta_prompt_ZZ_stack_4->SetBinError(10,0.4102858);
   jet2_eta_prompt_ZZ_stack_4->SetBinError(11,0.5189751);
   jet2_eta_prompt_ZZ_stack_4->SetBinError(12,0.3669708);
   jet2_eta_prompt_ZZ_stack_4->SetBinError(13,0.3178061);
   jet2_eta_prompt_ZZ_stack_4->SetBinError(14,0.5189751);
   jet2_eta_prompt_ZZ_stack_4->SetBinError(15,0.4854568);
   jet2_eta_prompt_ZZ_stack_4->SetBinError(16,0.5189751);
   jet2_eta_prompt_ZZ_stack_4->SetBinError(17,0.2594876);
   jet2_eta_prompt_ZZ_stack_4->SetBinError(18,0.4102858);
   jet2_eta_prompt_ZZ_stack_4->SetBinError(19,0.4494456);
   jet2_eta_prompt_ZZ_stack_4->SetBinError(20,1.021604);
   jet2_eta_prompt_ZZ_stack_4->SetEntries(156);

   ci = TColor::GetColor("#00cc00");
   jet2_eta_prompt_ZZ_stack_4->SetFillColor(ci);
   jet2_eta_prompt_ZZ_stack_4->SetMarkerStyle(0);
   jet2_eta_prompt_ZZ_stack_4->SetMarkerSize(1.1);
   jet2_eta_prompt_ZZ_stack_4->GetXaxis()->SetTitle("p_{T}(subleading jet) [GeV]");
   jet2_eta_prompt_ZZ_stack_4->GetXaxis()->SetMoreLogLabels();
   jet2_eta_prompt_ZZ_stack_4->GetXaxis()->SetLabelFont(42);
   jet2_eta_prompt_ZZ_stack_4->GetXaxis()->SetLabelOffset(0.007);
   jet2_eta_prompt_ZZ_stack_4->GetXaxis()->SetLabelSize(0.05);
   jet2_eta_prompt_ZZ_stack_4->GetXaxis()->SetTitleSize(0.06);
   jet2_eta_prompt_ZZ_stack_4->GetXaxis()->SetTitleOffset(0.9);
   jet2_eta_prompt_ZZ_stack_4->GetXaxis()->SetTitleFont(42);
   jet2_eta_prompt_ZZ_stack_4->GetYaxis()->SetTitle("Jets");
   jet2_eta_prompt_ZZ_stack_4->GetYaxis()->SetLabelFont(42);
   jet2_eta_prompt_ZZ_stack_4->GetYaxis()->SetLabelOffset(0.007);
   jet2_eta_prompt_ZZ_stack_4->GetYaxis()->SetLabelSize(0.05);
   jet2_eta_prompt_ZZ_stack_4->GetYaxis()->SetTitleSize(0.06);
   jet2_eta_prompt_ZZ_stack_4->GetYaxis()->SetTitleOffset(1.35);
   jet2_eta_prompt_ZZ_stack_4->GetYaxis()->SetTitleFont(42);
   jet2_eta_prompt_ZZ_stack_4->GetZaxis()->SetLabelFont(42);
   jet2_eta_prompt_ZZ_stack_4->GetZaxis()->SetLabelOffset(0.007);
   jet2_eta_prompt_ZZ_stack_4->GetZaxis()->SetLabelSize(0.05);
   jet2_eta_prompt_ZZ_stack_4->GetZaxis()->SetTitleSize(0.06);
   jet2_eta_prompt_ZZ_stack_4->GetZaxis()->SetTitleFont(42);
   jet2_eta_stack->Add(jet2_eta_prompt_ZZ_stack_4,"");
   
   TH1D *jet2_eta_prompt_WZ_stack_5 = new TH1D("jet2_eta_prompt_WZ_stack_5","dummy",20,-2.4,2.4);
   jet2_eta_prompt_WZ_stack_5->SetBinContent(1,65.84614);
   jet2_eta_prompt_WZ_stack_5->SetBinContent(2,10.31107);
   jet2_eta_prompt_WZ_stack_5->SetBinContent(3,11.21555);
   jet2_eta_prompt_WZ_stack_5->SetBinContent(4,10.22062);
   jet2_eta_prompt_WZ_stack_5->SetBinContent(5,12.02958);
   jet2_eta_prompt_WZ_stack_5->SetBinContent(6,11.66779);
   jet2_eta_prompt_WZ_stack_5->SetBinContent(7,12.93406);
   jet2_eta_prompt_WZ_stack_5->SetBinContent(8,11.39645);
   jet2_eta_prompt_WZ_stack_5->SetBinContent(9,13.92899);
   jet2_eta_prompt_WZ_stack_5->SetBinContent(10,13.3863);
   jet2_eta_prompt_WZ_stack_5->SetBinContent(11,13.29585);
   jet2_eta_prompt_WZ_stack_5->SetBinContent(12,10.94421);
   jet2_eta_prompt_WZ_stack_5->SetBinContent(13,11.48689);
   jet2_eta_prompt_WZ_stack_5->SetBinContent(14,12.02958);
   jet2_eta_prompt_WZ_stack_5->SetBinContent(15,11.57734);
   jet2_eta_prompt_WZ_stack_5->SetBinContent(16,10.94421);
   jet2_eta_prompt_WZ_stack_5->SetBinContent(17,10.94421);
   jet2_eta_prompt_WZ_stack_5->SetBinContent(18,11.39645);
   jet2_eta_prompt_WZ_stack_5->SetBinContent(19,10.03973);
   jet2_eta_prompt_WZ_stack_5->SetBinContent(20,62.68046);
   jet2_eta_prompt_WZ_stack_5->SetBinError(1,2.44042);
   jet2_eta_prompt_WZ_stack_5->SetBinError(2,0.9657203);
   jet2_eta_prompt_WZ_stack_5->SetBinError(3,1.007186);
   jet2_eta_prompt_WZ_stack_5->SetBinError(4,0.9614753);
   jet2_eta_prompt_WZ_stack_5->SetBinError(5,1.043097);
   jet2_eta_prompt_WZ_stack_5->SetBinError(6,1.027292);
   jet2_eta_prompt_WZ_stack_5->SetBinError(7,1.081601);
   jet2_eta_prompt_WZ_stack_5->SetBinError(8,1.015276);
   jet2_eta_prompt_WZ_stack_5->SetBinError(9,1.12243);
   jet2_eta_prompt_WZ_stack_5->SetBinError(10,1.100347);
   jet2_eta_prompt_WZ_stack_5->SetBinError(11,1.096624);
   jet2_eta_prompt_WZ_stack_5->SetBinError(12,0.9949279);
   jet2_eta_prompt_WZ_stack_5->SetBinError(13,1.019297);
   jet2_eta_prompt_WZ_stack_5->SetBinError(14,1.043097);
   jet2_eta_prompt_WZ_stack_5->SetBinError(15,1.023302);
   jet2_eta_prompt_WZ_stack_5->SetBinError(16,0.9949279);
   jet2_eta_prompt_WZ_stack_5->SetBinError(17,0.9949279);
   jet2_eta_prompt_WZ_stack_5->SetBinError(18,1.015276);
   jet2_eta_prompt_WZ_stack_5->SetBinError(19,0.9529287);
   jet2_eta_prompt_WZ_stack_5->SetBinError(20,2.381034);
   jet2_eta_prompt_WZ_stack_5->SetEntries(3744);

   ci = TColor::GetColor("#ffcc00");
   jet2_eta_prompt_WZ_stack_5->SetFillColor(ci);
   jet2_eta_prompt_WZ_stack_5->SetMarkerStyle(0);
   jet2_eta_prompt_WZ_stack_5->SetMarkerSize(1.1);
   jet2_eta_prompt_WZ_stack_5->GetXaxis()->SetTitle("p_{T}(subleading jet) [GeV]");
   jet2_eta_prompt_WZ_stack_5->GetXaxis()->SetMoreLogLabels();
   jet2_eta_prompt_WZ_stack_5->GetXaxis()->SetLabelFont(42);
   jet2_eta_prompt_WZ_stack_5->GetXaxis()->SetLabelOffset(0.007);
   jet2_eta_prompt_WZ_stack_5->GetXaxis()->SetLabelSize(0.05);
   jet2_eta_prompt_WZ_stack_5->GetXaxis()->SetTitleSize(0.06);
   jet2_eta_prompt_WZ_stack_5->GetXaxis()->SetTitleOffset(0.9);
   jet2_eta_prompt_WZ_stack_5->GetXaxis()->SetTitleFont(42);
   jet2_eta_prompt_WZ_stack_5->GetYaxis()->SetTitle("Jets");
   jet2_eta_prompt_WZ_stack_5->GetYaxis()->SetLabelFont(42);
   jet2_eta_prompt_WZ_stack_5->GetYaxis()->SetLabelOffset(0.007);
   jet2_eta_prompt_WZ_stack_5->GetYaxis()->SetLabelSize(0.05);
   jet2_eta_prompt_WZ_stack_5->GetYaxis()->SetTitleSize(0.06);
   jet2_eta_prompt_WZ_stack_5->GetYaxis()->SetTitleOffset(1.35);
   jet2_eta_prompt_WZ_stack_5->GetYaxis()->SetTitleFont(42);
   jet2_eta_prompt_WZ_stack_5->GetZaxis()->SetLabelFont(42);
   jet2_eta_prompt_WZ_stack_5->GetZaxis()->SetLabelOffset(0.007);
   jet2_eta_prompt_WZ_stack_5->GetZaxis()->SetLabelSize(0.05);
   jet2_eta_prompt_WZ_stack_5->GetZaxis()->SetTitleSize(0.06);
   jet2_eta_prompt_WZ_stack_5->GetZaxis()->SetTitleFont(42);
   jet2_eta_stack->Add(jet2_eta_prompt_WZ_stack_5,"");
   jet2_eta_stack->Draw("same hist");
   
   TH1D *jet2_eta_total__162 = new TH1D("jet2_eta_total__162","dummy",20,-2.4,2.4);
   jet2_eta_total__162->SetBinContent(1,90.61923);
   jet2_eta_total__162->SetBinContent(2,11.67546);
   jet2_eta_total__162->SetBinContent(3,14.54944);
   jet2_eta_total__162->SetBinContent(4,12.80041);
   jet2_eta_total__162->SetBinContent(5,14.40988);
   jet2_eta_total__162->SetBinContent(6,13.83011);
   jet2_eta_total__162->SetBinContent(7,15.23187);
   jet2_eta_total__162->SetBinContent(8,15.01101);
   jet2_eta_total__162->SetBinContent(9,18.8404);
   jet2_eta_total__162->SetBinContent(10,19.53812);
   jet2_eta_total__162->SetBinContent(11,17.68016);
   jet2_eta_total__162->SetBinContent(12,13.407);
   jet2_eta_total__162->SetBinContent(13,15.59787);
   jet2_eta_total__162->SetBinContent(14,16.67986);
   jet2_eta_total__162->SetBinContent(15,13.99214);
   jet2_eta_total__162->SetBinContent(16,15.95766);
   jet2_eta_total__162->SetBinContent(17,12.70756);
   jet2_eta_total__162->SetBinContent(18,15.29679);
   jet2_eta_total__162->SetBinContent(19,13.96972);
   jet2_eta_total__162->SetBinContent(20,83.24139);
   jet2_eta_total__162->SetBinError(1,5.307932);
   jet2_eta_total__162->SetBinError(2,1.032604);
   jet2_eta_total__162->SetBinError(3,2.035418);
   jet2_eta_total__162->SetBinError(4,1.096953);
   jet2_eta_total__162->SetBinError(5,1.163468);
   jet2_eta_total__162->SetBinError(6,1.114469);
   jet2_eta_total__162->SetBinError(7,1.208425);
   jet2_eta_total__162->SetBinError(8,2.049976);
   jet2_eta_total__162->SetBinError(9,2.141082);
   jet2_eta_total__162->SetBinError(10,2.722497);
   jet2_eta_total__162->SetBinError(11,2.125348);
   jet2_eta_total__162->SetBinError(12,1.113332);
   jet2_eta_total__162->SetBinError(13,2.0553);
   jet2_eta_total__162->SetBinError(14,2.100337);
   jet2_eta_total__162->SetBinError(15,1.165324);
   jet2_eta_total__162->SetBinError(16,2.083357);
   jet2_eta_total__162->SetBinError(17,1.072411);
   jet2_eta_total__162->SetBinError(18,2.059098);
   jet2_eta_total__162->SetBinError(19,2.038277);
   jet2_eta_total__162->SetBinError(20,4.683282);
   jet2_eta_total__162->SetMinimum(0);
   jet2_eta_total__162->SetMaximum(126.441);
   jet2_eta_total__162->SetEntries(4536);
   jet2_eta_total__162->SetDirectory(0);

   ci = TColor::GetColor("#00cc00");
   jet2_eta_total__162->SetFillColor(ci);
   jet2_eta_total__162->SetMarkerStyle(20);
   jet2_eta_total__162->SetMarkerSize(1.1);
   jet2_eta_total__162->GetXaxis()->SetTitle("p_{T}(subleading jet) [GeV]");
   jet2_eta_total__162->GetXaxis()->SetMoreLogLabels();
   jet2_eta_total__162->GetXaxis()->SetLabelFont(42);
   jet2_eta_total__162->GetXaxis()->SetLabelOffset(999);
   jet2_eta_total__162->GetXaxis()->SetLabelSize(0.05);
   jet2_eta_total__162->GetXaxis()->SetTitleSize(0.05);
   jet2_eta_total__162->GetXaxis()->SetTitleOffset(999);
   jet2_eta_total__162->GetXaxis()->SetTitleFont(42);
   jet2_eta_total__162->GetYaxis()->SetTitle("Jets");
   jet2_eta_total__162->GetYaxis()->SetLabelFont(42);
   jet2_eta_total__162->GetYaxis()->SetLabelOffset(0.007);
   jet2_eta_total__162->GetYaxis()->SetLabelSize(0.05);
   jet2_eta_total__162->GetYaxis()->SetTitleSize(0.06);
   jet2_eta_total__162->GetYaxis()->SetTitleOffset(1.48);
   jet2_eta_total__162->GetYaxis()->SetTitleFont(42);
   jet2_eta_total__162->GetZaxis()->SetLabelFont(42);
   jet2_eta_total__162->GetZaxis()->SetLabelOffset(0.007);
   jet2_eta_total__162->GetZaxis()->SetLabelSize(0.05);
   jet2_eta_total__162->GetZaxis()->SetTitleSize(0.06);
   jet2_eta_total__162->GetZaxis()->SetTitleFont(42);
   jet2_eta_total__162->Draw("AXIS SAME");
   
   Double_t jet2_eta_total_errors_fx3201[20] = {
   -2.28,
   -2.04,
   -1.8,
   -1.56,
   -1.32,
   -1.08,
   -0.84,
   -0.6,
   -0.36,
   -0.12,
   0.12,
   0.36,
   0.6,
   0.84,
   1.08,
   1.32,
   1.56,
   1.8,
   2.04,
   2.28};
   Double_t jet2_eta_total_errors_fy3201[20] = {
   90.61923,
   11.67546,
   14.54944,
   12.80041,
   14.40988,
   13.83011,
   15.23187,
   15.01101,
   18.8404,
   19.53812,
   17.68016,
   13.407,
   15.59787,
   16.67986,
   13.99214,
   15.95766,
   12.70756,
   15.29679,
   13.96972,
   83.24139};
   Double_t jet2_eta_total_errors_felx3201[20] = {
   0.12,
   0.12,
   0.12,
   0.12,
   0.12,
   0.12,
   0.12,
   0.12,
   0.12,
   0.12,
   0.12,
   0.12,
   0.12,
   0.12,
   0.12,
   0.12,
   0.12,
   0.12,
   0.12,
   0.12};
   Double_t jet2_eta_total_errors_fely3201[20] = {
   5.307932,
   1.032604,
   2.035418,
   1.096953,
   1.163468,
   1.114469,
   1.208425,
   2.049976,
   2.141082,
   2.722497,
   2.125348,
   1.113332,
   2.0553,
   2.100337,
   1.165324,
   2.083357,
   1.072411,
   2.059098,
   2.038277,
   4.683282};
   Double_t jet2_eta_total_errors_fehx3201[20] = {
   0.12,
   0.12,
   0.12,
   0.12,
   0.12,
   0.12,
   0.12,
   0.12,
   0.12,
   0.12,
   0.12,
   0.12,
   0.12,
   0.12,
   0.12,
   0.12,
   0.12,
   0.12,
   0.12,
   0.12};
   Double_t jet2_eta_total_errors_fehy3201[20] = {
   5.307932,
   1.032604,
   2.035418,
   1.096953,
   1.163468,
   1.114469,
   1.208425,
   2.049976,
   2.141082,
   2.722497,
   2.125348,
   1.113332,
   2.0553,
   2.100337,
   1.165324,
   2.083357,
   1.072411,
   2.059098,
   2.038277,
   4.683282};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(20,jet2_eta_total_errors_fx3201,jet2_eta_total_errors_fy3201,jet2_eta_total_errors_felx3201,jet2_eta_total_errors_fehx3201,jet2_eta_total_errors_fely3201,jet2_eta_total_errors_fehy3201);
   grae->SetName("jet2_eta_total_errors");
   grae->SetTitle("Graph");
   grae->SetFillColor(1);
   grae->SetFillStyle(3013);
   grae->SetMarkerStyle(0);
   
   TH1F *Graph_jet2_eta_total_errors3201 = new TH1F("Graph_jet2_eta_total_errors3201","Graph",100,-2.88,2.88);
   Graph_jet2_eta_total_errors3201->SetMinimum(2.11442);
   Graph_jet2_eta_total_errors3201->SetMaximum(104.4556);
   Graph_jet2_eta_total_errors3201->SetDirectory(0);
   Graph_jet2_eta_total_errors3201->SetStats(0);
   Graph_jet2_eta_total_errors3201->SetLineStyle(0);
   Graph_jet2_eta_total_errors3201->SetMarkerStyle(20);
   Graph_jet2_eta_total_errors3201->GetXaxis()->SetLabelFont(42);
   Graph_jet2_eta_total_errors3201->GetXaxis()->SetLabelOffset(0.007);
   Graph_jet2_eta_total_errors3201->GetXaxis()->SetLabelSize(0.05);
   Graph_jet2_eta_total_errors3201->GetXaxis()->SetTitleSize(0.06);
   Graph_jet2_eta_total_errors3201->GetXaxis()->SetTitleOffset(0.9);
   Graph_jet2_eta_total_errors3201->GetXaxis()->SetTitleFont(42);
   Graph_jet2_eta_total_errors3201->GetYaxis()->SetLabelFont(42);
   Graph_jet2_eta_total_errors3201->GetYaxis()->SetLabelOffset(0.007);
   Graph_jet2_eta_total_errors3201->GetYaxis()->SetLabelSize(0.05);
   Graph_jet2_eta_total_errors3201->GetYaxis()->SetTitleSize(0.06);
   Graph_jet2_eta_total_errors3201->GetYaxis()->SetTitleOffset(1.35);
   Graph_jet2_eta_total_errors3201->GetYaxis()->SetTitleFont(42);
   Graph_jet2_eta_total_errors3201->GetZaxis()->SetLabelFont(42);
   Graph_jet2_eta_total_errors3201->GetZaxis()->SetLabelOffset(0.007);
   Graph_jet2_eta_total_errors3201->GetZaxis()->SetLabelSize(0.05);
   Graph_jet2_eta_total_errors3201->GetZaxis()->SetTitleSize(0.06);
   Graph_jet2_eta_total_errors3201->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_jet2_eta_total_errors3201);
   
   grae->Draw("pe2 ");
   
   Double_t jet2_eta_data_graph_fx3202[20] = {
   -2.28,
   -2.04,
   -1.8,
   -1.56,
   -1.32,
   -1.08,
   -0.84,
   -0.6,
   -0.36,
   -0.12,
   0.12,
   0.36,
   0.6,
   0.84,
   1.08,
   1.32,
   1.56,
   1.8,
   2.04,
   2.28};
   Double_t jet2_eta_data_graph_fy3202[20] = {
   84,
   21,
   19,
   25,
   22,
   30,
   27,
   28,
   32,
   35,
   28,
   23,
   32,
   37,
   37,
   12,
   28,
   17,
   22,
   66};
   Double_t jet2_eta_data_graph_felx3202[20] = {
   0.12,
   0.12,
   0.12,
   0.12,
   0.12,
   0.12,
   0.12,
   0.12,
   0.12,
   0.12,
   0.12,
   0.12,
   0.12,
   0.12,
   0.12,
   0.12,
   0.12,
   0.12,
   0.12,
   0.12};
   Double_t jet2_eta_data_graph_fely3202[20] = {
   9.147057,
   4.545892,
   4.320299,
   4.966428,
   4.654589,
   5.446626,
   5.163869,
   5.259811,
   5.627243,
   5.887788,
   5.259811,
   4.760806,
   5.627243,
   6.05526,
   6.05526,
   3.415326,
   5.259811,
   4.082258,
   4.654589,
   8.103564};
   Double_t jet2_eta_data_graph_fehx3202[20] = {
   0.12,
   0.12,
   0.12,
   0.12,
   0.12,
   0.12,
   0.12,
   0.12,
   0.12,
   0.12,
   0.12,
   0.12,
   0.12,
   0.12,
   0.12,
   0.12,
   0.12,
   0.12,
   0.12,
   0.12};
   Double_t jet2_eta_data_graph_fehy3202[20] = {
   10.20176,
   5.655298,
   5.435307,
   6.066714,
   5.761484,
   6.538181,
   6.260373,
   6.354577,
   6.715892,
   6.972554,
   6.354577,
   5.865355,
   6.715892,
   7.137703,
   7.137703,
   4.559911,
   6.354577,
   5.203825,
   5.761484,
   9.165286};
   grae = new TGraphAsymmErrors(20,jet2_eta_data_graph_fx3202,jet2_eta_data_graph_fy3202,jet2_eta_data_graph_felx3202,jet2_eta_data_graph_fehx3202,jet2_eta_data_graph_fely3202,jet2_eta_data_graph_fehy3202);
   grae->SetName("jet2_eta_data_graph");
   grae->SetTitle("Graph");
   grae->SetFillStyle(1000);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.1);
   
   TH1F *Graph_jet2_eta_data_graph3202 = new TH1F("Graph_jet2_eta_data_graph3202","Graph",100,-2.88,2.88);
   Graph_jet2_eta_data_graph3202->SetMinimum(0.02296496);
   Graph_jet2_eta_data_graph3202->SetMaximum(102.7635);
   Graph_jet2_eta_data_graph3202->SetDirectory(0);
   Graph_jet2_eta_data_graph3202->SetStats(0);
   Graph_jet2_eta_data_graph3202->SetLineStyle(0);
   Graph_jet2_eta_data_graph3202->SetMarkerStyle(20);
   Graph_jet2_eta_data_graph3202->GetXaxis()->SetLabelFont(42);
   Graph_jet2_eta_data_graph3202->GetXaxis()->SetLabelOffset(0.007);
   Graph_jet2_eta_data_graph3202->GetXaxis()->SetLabelSize(0.05);
   Graph_jet2_eta_data_graph3202->GetXaxis()->SetTitleSize(0.06);
   Graph_jet2_eta_data_graph3202->GetXaxis()->SetTitleOffset(0.9);
   Graph_jet2_eta_data_graph3202->GetXaxis()->SetTitleFont(42);
   Graph_jet2_eta_data_graph3202->GetYaxis()->SetLabelFont(42);
   Graph_jet2_eta_data_graph3202->GetYaxis()->SetLabelOffset(0.007);
   Graph_jet2_eta_data_graph3202->GetYaxis()->SetLabelSize(0.05);
   Graph_jet2_eta_data_graph3202->GetYaxis()->SetTitleSize(0.06);
   Graph_jet2_eta_data_graph3202->GetYaxis()->SetTitleOffset(1.35);
   Graph_jet2_eta_data_graph3202->GetYaxis()->SetTitleFont(42);
   Graph_jet2_eta_data_graph3202->GetZaxis()->SetLabelFont(42);
   Graph_jet2_eta_data_graph3202->GetZaxis()->SetLabelOffset(0.007);
   Graph_jet2_eta_data_graph3202->GetZaxis()->SetLabelSize(0.05);
   Graph_jet2_eta_data_graph3202->GetZaxis()->SetTitleSize(0.06);
   Graph_jet2_eta_data_graph3202->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_jet2_eta_data_graph3202);
   
   grae->Draw("pz ");
   
   TLegend *leg = new TLegend(0.62,0.628,0.9,0.91,NULL,"brNDC");
   leg->SetBorderSize(1);
   leg->SetTextSize(0.036);
   leg->SetLineColor(0);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("jet2_eta_data","Data","LPE");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1.1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("jet2_eta_prompt_WZ_stack_5","WZ","F");

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
   entry=leg->AddEntry("jet2_eta_prompt_ZZ_stack_4","qqZZ","F");

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
   entry=leg->AddEntry("jet2_eta_fakes_DY_stack_3","Fakes DY","F");

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
   entry=leg->AddEntry("jet2_eta_fakes_TT_stack_2","Fakes TT","F");

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
   entry=leg->AddEntry("jet2_eta_total_errors","Total unc.","F");
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
   jet2_eta_canvas->cd();
  
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
   
   TH1D *jet2_eta_total__163 = new TH1D("jet2_eta_total__163","dummy",20,-2.4,2.4);
   jet2_eta_total__163->SetBinContent(1,1);
   jet2_eta_total__163->SetBinContent(2,1);
   jet2_eta_total__163->SetBinContent(3,1);
   jet2_eta_total__163->SetBinContent(4,1);
   jet2_eta_total__163->SetBinContent(5,1);
   jet2_eta_total__163->SetBinContent(6,1);
   jet2_eta_total__163->SetBinContent(7,1);
   jet2_eta_total__163->SetBinContent(8,1);
   jet2_eta_total__163->SetBinContent(9,1);
   jet2_eta_total__163->SetBinContent(10,1);
   jet2_eta_total__163->SetBinContent(11,1);
   jet2_eta_total__163->SetBinContent(12,1);
   jet2_eta_total__163->SetBinContent(13,1);
   jet2_eta_total__163->SetBinContent(14,1);
   jet2_eta_total__163->SetBinContent(15,1);
   jet2_eta_total__163->SetBinContent(16,1);
   jet2_eta_total__163->SetBinContent(17,1);
   jet2_eta_total__163->SetBinContent(18,1);
   jet2_eta_total__163->SetBinContent(19,1);
   jet2_eta_total__163->SetBinContent(20,1);
   jet2_eta_total__163->SetMinimum(0.5);
   jet2_eta_total__163->SetMaximum(2);
   jet2_eta_total__163->SetEntries(4556);

   ci = TColor::GetColor("#00cc00");
   jet2_eta_total__163->SetFillColor(ci);

   ci = TColor::GetColor("#6666ff");
   jet2_eta_total__163->SetMarkerColor(ci);
   jet2_eta_total__163->SetMarkerSize(1.1);
   jet2_eta_total__163->GetXaxis()->SetTitle("p_{T}(subleading jet) [GeV]");
   jet2_eta_total__163->GetXaxis()->SetMoreLogLabels();
   jet2_eta_total__163->GetXaxis()->SetLabelFont(42);
   jet2_eta_total__163->GetXaxis()->SetLabelOffset(0.015);
   jet2_eta_total__163->GetXaxis()->SetLabelSize(0.1);
   jet2_eta_total__163->GetXaxis()->SetTitleSize(0.14);
   jet2_eta_total__163->GetXaxis()->SetTitleFont(42);
   jet2_eta_total__163->GetYaxis()->SetTitle("Data/pred.");
   jet2_eta_total__163->GetYaxis()->SetDecimals();
   jet2_eta_total__163->GetYaxis()->SetNdivisions(505);
   jet2_eta_total__163->GetYaxis()->SetLabelFont(42);
   jet2_eta_total__163->GetYaxis()->SetLabelOffset(0.01);
   jet2_eta_total__163->GetYaxis()->SetLabelSize(0.11);
   jet2_eta_total__163->GetYaxis()->SetTitleSize(0.14);
   jet2_eta_total__163->GetYaxis()->SetTitleOffset(0.62);
   jet2_eta_total__163->GetYaxis()->SetTitleFont(42);
   jet2_eta_total__163->GetZaxis()->SetLabelFont(42);
   jet2_eta_total__163->GetZaxis()->SetLabelOffset(0.007);
   jet2_eta_total__163->GetZaxis()->SetLabelSize(0.05);
   jet2_eta_total__163->GetZaxis()->SetTitleSize(0.06);
   jet2_eta_total__163->GetZaxis()->SetTitleFont(42);
   jet2_eta_total__163->Draw("AXIS");
   
   Double_t jet2_eta_total_errors_fx3203[20] = {
   -2.28,
   -2.04,
   -1.8,
   -1.56,
   -1.32,
   -1.08,
   -0.84,
   -0.6,
   -0.36,
   -0.12,
   0.12,
   0.36,
   0.6,
   0.84,
   1.08,
   1.32,
   1.56,
   1.8,
   2.04,
   2.28};
   Double_t jet2_eta_total_errors_fy3203[20] = {
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
   1,
   1};
   Double_t jet2_eta_total_errors_felx3203[20] = {
   0.12,
   0.12,
   0.12,
   0.12,
   0.12,
   0.12,
   0.12,
   0.12,
   0.12,
   0.12,
   0.12,
   0.12,
   0.12,
   0.12,
   0.12,
   0.12,
   0.12,
   0.12,
   0.12,
   0.12};
   Double_t jet2_eta_total_errors_fely3203[20] = {
   0.05857401,
   0.08844232,
   0.1398967,
   0.08569675,
   0.080741,
   0.08058285,
   0.0793353,
   0.1365648,
   0.1136431,
   0.1393429,
   0.1202109,
   0.08304109,
   0.131768,
   0.1259205,
   0.0832842,
   0.1305554,
   0.08439164,
   0.1346098,
   0.1459068,
   0.05626146};
   Double_t jet2_eta_total_errors_fehx3203[20] = {
   0.12,
   0.12,
   0.12,
   0.12,
   0.12,
   0.12,
   0.12,
   0.12,
   0.12,
   0.12,
   0.12,
   0.12,
   0.12,
   0.12,
   0.12,
   0.12,
   0.12,
   0.12,
   0.12,
   0.12};
   Double_t jet2_eta_total_errors_fehy3203[20] = {
   0.05857401,
   0.08844232,
   0.1398967,
   0.08569675,
   0.080741,
   0.08058285,
   0.0793353,
   0.1365648,
   0.1136431,
   0.1393429,
   0.1202109,
   0.08304109,
   0.131768,
   0.1259205,
   0.0832842,
   0.1305554,
   0.08439164,
   0.1346098,
   0.1459068,
   0.05626146};
   grae = new TGraphAsymmErrors(20,jet2_eta_total_errors_fx3203,jet2_eta_total_errors_fy3203,jet2_eta_total_errors_felx3203,jet2_eta_total_errors_fehx3203,jet2_eta_total_errors_fely3203,jet2_eta_total_errors_fehy3203);
   grae->SetName("jet2_eta_total_errors");
   grae->SetTitle("Graph");

   ci = TColor::GetColor("#00ffff");
   grae->SetFillColor(ci);

   ci = TColor::GetColor("#00ffff");
   grae->SetMarkerColor(ci);
   grae->Draw("e2");
   
   Double_t jet2_eta_total_errors_fx3204[20] = {
   -2.28,
   -2.04,
   -1.8,
   -1.56,
   -1.32,
   -1.08,
   -0.84,
   -0.6,
   -0.36,
   -0.12,
   0.12,
   0.36,
   0.6,
   0.84,
   1.08,
   1.32,
   1.56,
   1.8,
   2.04,
   2.28};
   Double_t jet2_eta_total_errors_fy3204[20] = {
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
   1,
   1};
   Double_t jet2_eta_total_errors_felx3204[20] = {
   0.12,
   0.12,
   0.12,
   0.12,
   0.12,
   0.12,
   0.12,
   0.12,
   0.12,
   0.12,
   0.12,
   0.12,
   0.12,
   0.12,
   0.12,
   0.12,
   0.12,
   0.12,
   0.12,
   0.12};
   Double_t jet2_eta_total_errors_fely3204[20] = {
   0.05857401,
   0.08844232,
   0.1398967,
   0.08569675,
   0.080741,
   0.08058285,
   0.0793353,
   0.1365648,
   0.1136431,
   0.1393429,
   0.1202109,
   0.08304109,
   0.131768,
   0.1259205,
   0.0832842,
   0.1305554,
   0.08439164,
   0.1346098,
   0.1459068,
   0.05626146};
   Double_t jet2_eta_total_errors_fehx3204[20] = {
   0.12,
   0.12,
   0.12,
   0.12,
   0.12,
   0.12,
   0.12,
   0.12,
   0.12,
   0.12,
   0.12,
   0.12,
   0.12,
   0.12,
   0.12,
   0.12,
   0.12,
   0.12,
   0.12,
   0.12};
   Double_t jet2_eta_total_errors_fehy3204[20] = {
   0.05857401,
   0.08844232,
   0.1398967,
   0.08569675,
   0.080741,
   0.08058285,
   0.0793353,
   0.1365648,
   0.1136431,
   0.1393429,
   0.1202109,
   0.08304109,
   0.131768,
   0.1259205,
   0.0832842,
   0.1305554,
   0.08439164,
   0.1346098,
   0.1459068,
   0.05626146};
   grae = new TGraphAsymmErrors(20,jet2_eta_total_errors_fx3204,jet2_eta_total_errors_fy3204,jet2_eta_total_errors_felx3204,jet2_eta_total_errors_fehx3204,jet2_eta_total_errors_fely3204,jet2_eta_total_errors_fehy3204);
   grae->SetName("jet2_eta_total_errors");
   grae->SetTitle("Graph");

   ci = TColor::GetColor("#6666ff");
   grae->SetFillColor(ci);

   ci = TColor::GetColor("#6666ff");
   grae->SetMarkerColor(ci);
   grae->Draw("e2 ");
   
   TH1D *jet2_eta_total__164 = new TH1D("jet2_eta_total__164","dummy",20,-2.4,2.4);
   jet2_eta_total__164->SetBinContent(1,1);
   jet2_eta_total__164->SetBinContent(2,1);
   jet2_eta_total__164->SetBinContent(3,1);
   jet2_eta_total__164->SetBinContent(4,1);
   jet2_eta_total__164->SetBinContent(5,1);
   jet2_eta_total__164->SetBinContent(6,1);
   jet2_eta_total__164->SetBinContent(7,1);
   jet2_eta_total__164->SetBinContent(8,1);
   jet2_eta_total__164->SetBinContent(9,1);
   jet2_eta_total__164->SetBinContent(10,1);
   jet2_eta_total__164->SetBinContent(11,1);
   jet2_eta_total__164->SetBinContent(12,1);
   jet2_eta_total__164->SetBinContent(13,1);
   jet2_eta_total__164->SetBinContent(14,1);
   jet2_eta_total__164->SetBinContent(15,1);
   jet2_eta_total__164->SetBinContent(16,1);
   jet2_eta_total__164->SetBinContent(17,1);
   jet2_eta_total__164->SetBinContent(18,1);
   jet2_eta_total__164->SetBinContent(19,1);
   jet2_eta_total__164->SetBinContent(20,1);
   jet2_eta_total__164->SetMinimum(0.5);
   jet2_eta_total__164->SetMaximum(2);
   jet2_eta_total__164->SetEntries(4556);

   ci = TColor::GetColor("#00cc00");
   jet2_eta_total__164->SetFillColor(ci);

   ci = TColor::GetColor("#6666ff");
   jet2_eta_total__164->SetMarkerColor(ci);
   jet2_eta_total__164->SetMarkerSize(1.1);
   jet2_eta_total__164->GetXaxis()->SetTitle("p_{T}(subleading jet) [GeV]");
   jet2_eta_total__164->GetXaxis()->SetMoreLogLabels();
   jet2_eta_total__164->GetXaxis()->SetLabelFont(42);
   jet2_eta_total__164->GetXaxis()->SetLabelOffset(0.015);
   jet2_eta_total__164->GetXaxis()->SetLabelSize(0.1);
   jet2_eta_total__164->GetXaxis()->SetTitleSize(0.14);
   jet2_eta_total__164->GetXaxis()->SetTitleFont(42);
   jet2_eta_total__164->GetYaxis()->SetTitle("Data/pred.");
   jet2_eta_total__164->GetYaxis()->SetDecimals();
   jet2_eta_total__164->GetYaxis()->SetNdivisions(505);
   jet2_eta_total__164->GetYaxis()->SetLabelFont(42);
   jet2_eta_total__164->GetYaxis()->SetLabelOffset(0.01);
   jet2_eta_total__164->GetYaxis()->SetLabelSize(0.11);
   jet2_eta_total__164->GetYaxis()->SetTitleSize(0.14);
   jet2_eta_total__164->GetYaxis()->SetTitleOffset(0.62);
   jet2_eta_total__164->GetYaxis()->SetTitleFont(42);
   jet2_eta_total__164->GetZaxis()->SetLabelFont(42);
   jet2_eta_total__164->GetZaxis()->SetLabelOffset(0.007);
   jet2_eta_total__164->GetZaxis()->SetLabelSize(0.05);
   jet2_eta_total__164->GetZaxis()->SetTitleSize(0.06);
   jet2_eta_total__164->GetZaxis()->SetTitleFont(42);
   jet2_eta_total__164->Draw("AXIS SAME");
   TLine *line = new TLine(-2.4,1,2.4,1);
   line->SetLineColor(58);
   line->SetLineWidth(2);
   line->Draw();
   
   Double_t data_div_fx3205[20] = {
   -2.28,
   -2.04,
   -1.8,
   -1.56,
   -1.32,
   -1.08,
   -0.84,
   -0.6,
   -0.36,
   -0.12,
   0.12,
   0.36,
   0.6,
   0.84,
   1.08,
   1.32,
   1.56,
   1.8,
   2.04,
   2.28};
   Double_t data_div_fy3205[20] = {
   0.9269556,
   1.798645,
   1.305892,
   1.953063,
   1.52673,
   2.169181,
   1.772599,
   1.865297,
   1.698477,
   1.79137,
   1.583696,
   1.715522,
   2.051562,
   2.218244,
   2.644341,
   0.7519902,
   2.203413,
   1.111345,
   1.574834,
   0.7928748};
   Double_t data_div_felx3205[20] = {
   0.12,
   0.12,
   0.12,
   0.12,
   0.12,
   0.12,
   0.12,
   0.12,
   0.12,
   0.12,
   0.12,
   0.12,
   0.12,
   0.12,
   0.12,
   0.12,
   0.12,
   0.12,
   0.12,
   0.12};
   Double_t data_div_fely3205[20] = {
   0.1009395,
   0.3893545,
   0.2969393,
   0.3879899,
   0.3230137,
   0.3938239,
   0.3390174,
   0.3503968,
   0.2986796,
   0.3013488,
   0.297498,
   0.3550986,
   0.3607699,
   0.3630282,
   0.4327615,
   0.2140243,
   0.4139121,
   0.2668703,
   0.3331912,
   0.09735018};
   Double_t data_div_fehx3205[20] = {
   0.12,
   0.12,
   0.12,
   0.12,
   0.12,
   0.12,
   0.12,
   0.12,
   0.12,
   0.12,
   0.12,
   0.12,
   0.12,
   0.12,
   0.12,
   0.12,
   0.12,
   0.12,
   0.12,
   0.12};
   Double_t data_div_fehy3205[20] = {
   0.1125784,
   0.4843749,
   0.3735751,
   0.473947,
   0.3998287,
   0.4727499,
   0.4110048,
   0.4233277,
   0.3564622,
   0.3568693,
   0.3594186,
   0.4374846,
   0.4305647,
   0.4279234,
   0.5101222,
   0.2857507,
   0.5000629,
   0.3401908,
   0.4124265,
   0.1101049};
   grae = new TGraphAsymmErrors(20,data_div_fx3205,data_div_fy3205,data_div_felx3205,data_div_fehx3205,data_div_fely3205,data_div_fehy3205);
   grae->SetName("data_div");
   grae->SetTitle("Graph");
   grae->SetFillStyle(1000);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.1);
   
   TH1F *Graph_jet2_eta_data_graph3205 = new TH1F("Graph_jet2_eta_data_graph3205","Graph",100,-2.88,2.88);
   Graph_jet2_eta_data_graph3205->SetMinimum(0.02296496);
   Graph_jet2_eta_data_graph3205->SetMaximum(102.7635);
   Graph_jet2_eta_data_graph3205->SetDirectory(0);
   Graph_jet2_eta_data_graph3205->SetStats(0);
   Graph_jet2_eta_data_graph3205->SetLineStyle(0);
   Graph_jet2_eta_data_graph3205->SetMarkerStyle(20);
   Graph_jet2_eta_data_graph3205->GetXaxis()->SetLabelFont(42);
   Graph_jet2_eta_data_graph3205->GetXaxis()->SetLabelOffset(0.007);
   Graph_jet2_eta_data_graph3205->GetXaxis()->SetLabelSize(0.05);
   Graph_jet2_eta_data_graph3205->GetXaxis()->SetTitleSize(0.06);
   Graph_jet2_eta_data_graph3205->GetXaxis()->SetTitleOffset(0.9);
   Graph_jet2_eta_data_graph3205->GetXaxis()->SetTitleFont(42);
   Graph_jet2_eta_data_graph3205->GetYaxis()->SetLabelFont(42);
   Graph_jet2_eta_data_graph3205->GetYaxis()->SetLabelOffset(0.007);
   Graph_jet2_eta_data_graph3205->GetYaxis()->SetLabelSize(0.05);
   Graph_jet2_eta_data_graph3205->GetYaxis()->SetTitleSize(0.06);
   Graph_jet2_eta_data_graph3205->GetYaxis()->SetTitleOffset(1.35);
   Graph_jet2_eta_data_graph3205->GetYaxis()->SetTitleFont(42);
   Graph_jet2_eta_data_graph3205->GetZaxis()->SetLabelFont(42);
   Graph_jet2_eta_data_graph3205->GetZaxis()->SetLabelOffset(0.007);
   Graph_jet2_eta_data_graph3205->GetZaxis()->SetLabelSize(0.05);
   Graph_jet2_eta_data_graph3205->GetZaxis()->SetTitleSize(0.06);
   Graph_jet2_eta_data_graph3205->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_jet2_eta_data_graph3205);
   
   grae->Draw("pz ");
   
   leg = new TLegend(0,0,0,0,NULL,"brNDC");
   leg->SetBorderSize(1);
   leg->SetTextSize(0.084);
   leg->SetLineColor(0);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   entry=leg->AddEntry("jet2_eta_total_errors","stat. unc.","F");
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
   entry=leg->AddEntry("jet2_eta_total_errors","total unc.","F");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   leg->Draw();
   pad2->Modified();
   jet2_eta_canvas->cd();
   jet2_eta_canvas->Modified();
   jet2_eta_canvas->cd();
   jet2_eta_canvas->SetSelected(jet2_eta_canvas);
}
