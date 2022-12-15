void lep1_pt()
{
//=========Macro generated from canvas: lep1_pt_canvas/lep1_pt
//=========  (Thu Dec 15 18:40:44 2022) by ROOT version 6.12/07
   TCanvas *lep1_pt_canvas = new TCanvas("lep1_pt_canvas", "lep1_pt",0,0,600,750);
   gStyle->SetOptFit(1);
   gStyle->SetOptStat(0);
   gStyle->SetOptTitle(0);
   lep1_pt_canvas->SetHighLightColor(2);
   lep1_pt_canvas->Range(0,0,1,1);
   lep1_pt_canvas->SetFillColor(0);
   lep1_pt_canvas->SetBorderMode(0);
   lep1_pt_canvas->SetBorderSize(2);
   lep1_pt_canvas->SetTickx(1);
   lep1_pt_canvas->SetTicky(1);
   lep1_pt_canvas->SetLeftMargin(0.18);
   lep1_pt_canvas->SetRightMargin(0.04);
   lep1_pt_canvas->SetBottomMargin(0.13);
   lep1_pt_canvas->SetFrameFillStyle(0);
   lep1_pt_canvas->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: pad1
   TPad *pad1 = new TPad("pad1", "pad1",0,0.3,1,1);
   pad1->Draw();
   pad1->cd();
   pad1->Range(-46.15385,-19.18276,210.2564,748.1275);
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
   
   TH1D *lep1_pt_total__185 = new TH1D("lep1_pt_total__185","dummy",20,0,200);
   lep1_pt_total__185->SetBinContent(3,4.451549);
   lep1_pt_total__185->SetBinContent(4,56.49194);
   lep1_pt_total__185->SetBinContent(5,214.991);
   lep1_pt_total__185->SetBinContent(6,280.8356);
   lep1_pt_total__185->SetBinContent(7,230.0037);
   lep1_pt_total__185->SetBinContent(8,180.7934);
   lep1_pt_total__185->SetBinContent(9,125.3486);
   lep1_pt_total__185->SetBinContent(10,97.78527);
   lep1_pt_total__185->SetBinContent(11,66.57651);
   lep1_pt_total__185->SetBinContent(12,52.7543);
   lep1_pt_total__185->SetBinContent(13,36.58036);
   lep1_pt_total__185->SetBinContent(14,28.26802);
   lep1_pt_total__185->SetBinContent(15,22.77596);
   lep1_pt_total__185->SetBinContent(16,18.05435);
   lep1_pt_total__185->SetBinContent(17,12.40413);
   lep1_pt_total__185->SetBinContent(18,11.63291);
   lep1_pt_total__185->SetBinContent(19,11.75628);
   lep1_pt_total__185->SetBinContent(20,44.44074);
   lep1_pt_total__185->SetBinError(3,1.788598);
   lep1_pt_total__185->SetBinError(4,4.9782);
   lep1_pt_total__185->SetBinError(5,8.404056);
   lep1_pt_total__185->SetBinError(6,7.188155);
   lep1_pt_total__185->SetBinError(7,6.207102);
   lep1_pt_total__185->SetBinError(8,6.488817);
   lep1_pt_total__185->SetBinError(9,4.792266);
   lep1_pt_total__185->SetBinError(10,5.373932);
   lep1_pt_total__185->SetBinError(11,3.018427);
   lep1_pt_total__185->SetBinError(12,3.654975);
   lep1_pt_total__185->SetBinError(13,2.525964);
   lep1_pt_total__185->SetBinError(14,2.324554);
   lep1_pt_total__185->SetBinError(15,1.490216);
   lep1_pt_total__185->SetBinError(16,1.307975);
   lep1_pt_total__185->SetBinError(17,1.11133);
   lep1_pt_total__185->SetBinError(18,1.032284);
   lep1_pt_total__185->SetBinError(19,1.977846);
   lep1_pt_total__185->SetBinError(20,2.05213);
   lep1_pt_total__185->SetMinimum(0);
   lep1_pt_total__185->SetMaximum(702.0889);
   lep1_pt_total__185->SetEntries(15152);
   lep1_pt_total__185->SetDirectory(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#00cc00");
   lep1_pt_total__185->SetFillColor(ci);
   lep1_pt_total__185->SetMarkerStyle(20);
   lep1_pt_total__185->SetMarkerSize(1.1);
   lep1_pt_total__185->GetXaxis()->SetTitle("p_{T}(l1) [GeV]");
   lep1_pt_total__185->GetXaxis()->SetMoreLogLabels();
   lep1_pt_total__185->GetXaxis()->SetLabelFont(42);
   lep1_pt_total__185->GetXaxis()->SetLabelOffset(999);
   lep1_pt_total__185->GetXaxis()->SetLabelSize(0.05);
   lep1_pt_total__185->GetXaxis()->SetTitleSize(0.05);
   lep1_pt_total__185->GetXaxis()->SetTitleOffset(999);
   lep1_pt_total__185->GetXaxis()->SetTitleFont(42);
   lep1_pt_total__185->GetYaxis()->SetTitle("Events");
   lep1_pt_total__185->GetYaxis()->SetLabelFont(42);
   lep1_pt_total__185->GetYaxis()->SetLabelOffset(0.007);
   lep1_pt_total__185->GetYaxis()->SetLabelSize(0.05);
   lep1_pt_total__185->GetYaxis()->SetTitleSize(0.06);
   lep1_pt_total__185->GetYaxis()->SetTitleOffset(1.48);
   lep1_pt_total__185->GetYaxis()->SetTitleFont(42);
   lep1_pt_total__185->GetZaxis()->SetLabelFont(42);
   lep1_pt_total__185->GetZaxis()->SetLabelOffset(0.007);
   lep1_pt_total__185->GetZaxis()->SetLabelSize(0.05);
   lep1_pt_total__185->GetZaxis()->SetTitleSize(0.06);
   lep1_pt_total__185->GetZaxis()->SetTitleFont(42);
   lep1_pt_total__185->Draw("HIST");
   
   THStack *lep1_pt_stack = new THStack();
   lep1_pt_stack->SetName("lep1_pt_stack");
   lep1_pt_stack->SetTitle("lep1_pt");
   
   TH1F *lep1_pt_stack_stack_47 = new TH1F("lep1_pt_stack_stack_47","lep1_pt",20,0,200);
   lep1_pt_stack_stack_47->SetMinimum(0);
   lep1_pt_stack_stack_47->SetMaximum(294.8773);
   lep1_pt_stack_stack_47->SetDirectory(0);
   lep1_pt_stack_stack_47->SetStats(0);
   lep1_pt_stack_stack_47->SetLineStyle(0);
   lep1_pt_stack_stack_47->SetMarkerStyle(20);
   lep1_pt_stack_stack_47->GetXaxis()->SetLabelFont(42);
   lep1_pt_stack_stack_47->GetXaxis()->SetLabelOffset(0.007);
   lep1_pt_stack_stack_47->GetXaxis()->SetLabelSize(0.05);
   lep1_pt_stack_stack_47->GetXaxis()->SetTitleSize(0.06);
   lep1_pt_stack_stack_47->GetXaxis()->SetTitleOffset(0.9);
   lep1_pt_stack_stack_47->GetXaxis()->SetTitleFont(42);
   lep1_pt_stack_stack_47->GetYaxis()->SetLabelFont(42);
   lep1_pt_stack_stack_47->GetYaxis()->SetLabelOffset(0.007);
   lep1_pt_stack_stack_47->GetYaxis()->SetLabelSize(0.05);
   lep1_pt_stack_stack_47->GetYaxis()->SetTitleSize(0.06);
   lep1_pt_stack_stack_47->GetYaxis()->SetTitleOffset(1.35);
   lep1_pt_stack_stack_47->GetYaxis()->SetTitleFont(42);
   lep1_pt_stack_stack_47->GetZaxis()->SetLabelFont(42);
   lep1_pt_stack_stack_47->GetZaxis()->SetLabelOffset(0.007);
   lep1_pt_stack_stack_47->GetZaxis()->SetLabelSize(0.05);
   lep1_pt_stack_stack_47->GetZaxis()->SetTitleSize(0.06);
   lep1_pt_stack_stack_47->GetZaxis()->SetTitleFont(42);
   lep1_pt_stack->SetHistogram(lep1_pt_stack_stack_47);
   
   
   TH1D *lep1_pt_fakes_VV_stack_1 = new TH1D("lep1_pt_fakes_VV_stack_1","dummy",20,0,200);
   lep1_pt_fakes_VV_stack_1->SetBinContent(5,0.1943867);
   lep1_pt_fakes_VV_stack_1->SetBinContent(6,0.1943867);
   lep1_pt_fakes_VV_stack_1->SetBinContent(7,0.09719337);
   lep1_pt_fakes_VV_stack_1->SetBinContent(8,0.09719337);
   lep1_pt_fakes_VV_stack_1->SetBinContent(10,0.09719337);
   lep1_pt_fakes_VV_stack_1->SetBinError(5,0.1374522);
   lep1_pt_fakes_VV_stack_1->SetBinError(6,0.1374522);
   lep1_pt_fakes_VV_stack_1->SetBinError(7,0.09719337);
   lep1_pt_fakes_VV_stack_1->SetBinError(8,0.09719337);
   lep1_pt_fakes_VV_stack_1->SetBinError(10,0.09719337);
   lep1_pt_fakes_VV_stack_1->SetEntries(11);

   ci = TColor::GetColor("#2e3294");
   lep1_pt_fakes_VV_stack_1->SetFillColor(ci);
   lep1_pt_fakes_VV_stack_1->SetMarkerStyle(0);
   lep1_pt_fakes_VV_stack_1->SetMarkerSize(1.1);
   lep1_pt_fakes_VV_stack_1->GetXaxis()->SetTitle("p_{T}(l1) [GeV]");
   lep1_pt_fakes_VV_stack_1->GetXaxis()->SetMoreLogLabels();
   lep1_pt_fakes_VV_stack_1->GetXaxis()->SetLabelFont(42);
   lep1_pt_fakes_VV_stack_1->GetXaxis()->SetLabelOffset(0.007);
   lep1_pt_fakes_VV_stack_1->GetXaxis()->SetLabelSize(0.05);
   lep1_pt_fakes_VV_stack_1->GetXaxis()->SetTitleSize(0.06);
   lep1_pt_fakes_VV_stack_1->GetXaxis()->SetTitleOffset(0.9);
   lep1_pt_fakes_VV_stack_1->GetXaxis()->SetTitleFont(42);
   lep1_pt_fakes_VV_stack_1->GetYaxis()->SetTitle("Events");
   lep1_pt_fakes_VV_stack_1->GetYaxis()->SetLabelFont(42);
   lep1_pt_fakes_VV_stack_1->GetYaxis()->SetLabelOffset(0.007);
   lep1_pt_fakes_VV_stack_1->GetYaxis()->SetLabelSize(0.05);
   lep1_pt_fakes_VV_stack_1->GetYaxis()->SetTitleSize(0.06);
   lep1_pt_fakes_VV_stack_1->GetYaxis()->SetTitleOffset(1.35);
   lep1_pt_fakes_VV_stack_1->GetYaxis()->SetTitleFont(42);
   lep1_pt_fakes_VV_stack_1->GetZaxis()->SetLabelFont(42);
   lep1_pt_fakes_VV_stack_1->GetZaxis()->SetLabelOffset(0.007);
   lep1_pt_fakes_VV_stack_1->GetZaxis()->SetLabelSize(0.05);
   lep1_pt_fakes_VV_stack_1->GetZaxis()->SetTitleSize(0.06);
   lep1_pt_fakes_VV_stack_1->GetZaxis()->SetTitleFont(42);
   lep1_pt_stack->Add(lep1_pt_fakes_VV_stack_1,"");
   
   TH1D *lep1_pt_fakes_TT_stack_2 = new TH1D("lep1_pt_fakes_TT_stack_2","dummy",20,0,200);
   lep1_pt_fakes_TT_stack_2->SetBinContent(3,0.1994827);
   lep1_pt_fakes_TT_stack_2->SetBinContent(4,2.019641);
   lep1_pt_fakes_TT_stack_2->SetBinContent(5,5.078375);
   lep1_pt_fakes_TT_stack_2->SetBinContent(6,8.644249);
   lep1_pt_fakes_TT_stack_2->SetBinContent(7,8.13711);
   lep1_pt_fakes_TT_stack_2->SetBinContent(8,6.649422);
   lep1_pt_fakes_TT_stack_2->SetBinContent(9,4.787584);
   lep1_pt_fakes_TT_stack_2->SetBinContent(10,3.989653);
   lep1_pt_fakes_TT_stack_2->SetBinContent(11,3.657182);
   lep1_pt_fakes_TT_stack_2->SetBinContent(12,3.237377);
   lep1_pt_fakes_TT_stack_2->SetBinContent(13,1.529367);
   lep1_pt_fakes_TT_stack_2->SetBinContent(14,1.662356);
   lep1_pt_fakes_TT_stack_2->SetBinContent(15,1.130402);
   lep1_pt_fakes_TT_stack_2->SetBinContent(16,1.396379);
   lep1_pt_fakes_TT_stack_2->SetBinContent(17,0.2659769);
   lep1_pt_fakes_TT_stack_2->SetBinContent(18,0.8644249);
   lep1_pt_fakes_TT_stack_2->SetBinContent(19,0.5319538);
   lep1_pt_fakes_TT_stack_2->SetBinContent(20,1.26339);
   lep1_pt_fakes_TT_stack_2->SetBinError(3,0.1151714);
   lep1_pt_fakes_TT_stack_2->SetBinError(4,0.380177);
   lep1_pt_fakes_TT_stack_2->SetBinError(5,0.5898497);
   lep1_pt_fakes_TT_stack_2->SetBinError(6,0.7581508);
   lep1_pt_fakes_TT_stack_2->SetBinError(7,0.7484343);
   lep1_pt_fakes_TT_stack_2->SetBinError(8,0.6649422);
   lep1_pt_fakes_TT_stack_2->SetBinError(9,0.5720049);
   lep1_pt_fakes_TT_stack_2->SetBinError(10,0.523576);
   lep1_pt_fakes_TT_stack_2->SetBinError(11,0.4931344);
   lep1_pt_fakes_TT_stack_2->SetBinError(12,0.4694539);
   lep1_pt_fakes_TT_stack_2->SetBinError(13,0.3188951);
   lep1_pt_fakes_TT_stack_2->SetBinError(14,0.3324711);
   lep1_pt_fakes_TT_stack_2->SetBinError(15,0.2741627);
   lep1_pt_fakes_TT_stack_2->SetBinError(16,0.3188951);
   lep1_pt_fakes_TT_stack_2->SetBinError(17,0.1329884);
   lep1_pt_fakes_TT_stack_2->SetBinError(18,0.2397483);
   lep1_pt_fakes_TT_stack_2->SetBinError(19,0.2102732);
   lep1_pt_fakes_TT_stack_2->SetBinError(20,0.2898416);
   lep1_pt_fakes_TT_stack_2->SetEntries(841);

   ci = TColor::GetColor("#666666");
   lep1_pt_fakes_TT_stack_2->SetFillColor(ci);
   lep1_pt_fakes_TT_stack_2->SetMarkerStyle(0);
   lep1_pt_fakes_TT_stack_2->SetMarkerSize(1.1);
   lep1_pt_fakes_TT_stack_2->GetXaxis()->SetTitle("p_{T}(l1) [GeV]");
   lep1_pt_fakes_TT_stack_2->GetXaxis()->SetMoreLogLabels();
   lep1_pt_fakes_TT_stack_2->GetXaxis()->SetLabelFont(42);
   lep1_pt_fakes_TT_stack_2->GetXaxis()->SetLabelOffset(0.007);
   lep1_pt_fakes_TT_stack_2->GetXaxis()->SetLabelSize(0.05);
   lep1_pt_fakes_TT_stack_2->GetXaxis()->SetTitleSize(0.06);
   lep1_pt_fakes_TT_stack_2->GetXaxis()->SetTitleOffset(0.9);
   lep1_pt_fakes_TT_stack_2->GetXaxis()->SetTitleFont(42);
   lep1_pt_fakes_TT_stack_2->GetYaxis()->SetTitle("Events");
   lep1_pt_fakes_TT_stack_2->GetYaxis()->SetLabelFont(42);
   lep1_pt_fakes_TT_stack_2->GetYaxis()->SetLabelOffset(0.007);
   lep1_pt_fakes_TT_stack_2->GetYaxis()->SetLabelSize(0.05);
   lep1_pt_fakes_TT_stack_2->GetYaxis()->SetTitleSize(0.06);
   lep1_pt_fakes_TT_stack_2->GetYaxis()->SetTitleOffset(1.35);
   lep1_pt_fakes_TT_stack_2->GetYaxis()->SetTitleFont(42);
   lep1_pt_fakes_TT_stack_2->GetZaxis()->SetLabelFont(42);
   lep1_pt_fakes_TT_stack_2->GetZaxis()->SetLabelOffset(0.007);
   lep1_pt_fakes_TT_stack_2->GetZaxis()->SetLabelSize(0.05);
   lep1_pt_fakes_TT_stack_2->GetZaxis()->SetTitleSize(0.06);
   lep1_pt_fakes_TT_stack_2->GetZaxis()->SetTitleFont(42);
   lep1_pt_stack->Add(lep1_pt_fakes_TT_stack_2,"");
   
   TH1D *lep1_pt_fakes_DY_stack_3 = new TH1D("lep1_pt_fakes_DY_stack_3","dummy",20,0,200);
   lep1_pt_fakes_DY_stack_3->SetBinContent(3,1.719522);
   lep1_pt_fakes_DY_stack_3->SetBinContent(4,12.03665);
   lep1_pt_fakes_DY_stack_3->SetBinContent(5,30.9514);
   lep1_pt_fakes_DY_stack_3->SetBinContent(6,15.4757);
   lep1_pt_fakes_DY_stack_3->SetBinContent(7,10.31713);
   lep1_pt_fakes_DY_stack_3->SetBinContent(8,15.4757);
   lep1_pt_fakes_DY_stack_3->SetBinContent(9,6.878088);
   lep1_pt_fakes_DY_stack_3->SetBinContent(10,12.03665);
   lep1_pt_fakes_DY_stack_3->SetBinContent(11,1.719522);
   lep1_pt_fakes_DY_stack_3->SetBinContent(12,5.158566);
   lep1_pt_fakes_DY_stack_3->SetBinContent(13,1.719522);
   lep1_pt_fakes_DY_stack_3->SetBinContent(14,1.719522);
   lep1_pt_fakes_DY_stack_3->SetBinContent(19,1.719522);
   lep1_pt_fakes_DY_stack_3->SetBinError(3,1.719522);
   lep1_pt_fakes_DY_stack_3->SetBinError(4,4.549428);
   lep1_pt_fakes_DY_stack_3->SetBinError(5,7.295314);
   lep1_pt_fakes_DY_stack_3->SetBinError(6,5.158566);
   lep1_pt_fakes_DY_stack_3->SetBinError(7,4.211952);
   lep1_pt_fakes_DY_stack_3->SetBinError(8,5.158566);
   lep1_pt_fakes_DY_stack_3->SetBinError(9,3.439044);
   lep1_pt_fakes_DY_stack_3->SetBinError(10,4.549428);
   lep1_pt_fakes_DY_stack_3->SetBinError(11,1.719522);
   lep1_pt_fakes_DY_stack_3->SetBinError(12,2.9783);
   lep1_pt_fakes_DY_stack_3->SetBinError(13,1.719522);
   lep1_pt_fakes_DY_stack_3->SetBinError(14,1.719522);
   lep1_pt_fakes_DY_stack_3->SetBinError(19,1.719522);
   lep1_pt_fakes_DY_stack_3->SetEntries(72);

   ci = TColor::GetColor("#cccccc");
   lep1_pt_fakes_DY_stack_3->SetFillColor(ci);
   lep1_pt_fakes_DY_stack_3->SetMarkerStyle(0);
   lep1_pt_fakes_DY_stack_3->SetMarkerSize(1.1);
   lep1_pt_fakes_DY_stack_3->GetXaxis()->SetTitle("p_{T}(l1) [GeV]");
   lep1_pt_fakes_DY_stack_3->GetXaxis()->SetMoreLogLabels();
   lep1_pt_fakes_DY_stack_3->GetXaxis()->SetLabelFont(42);
   lep1_pt_fakes_DY_stack_3->GetXaxis()->SetLabelOffset(0.007);
   lep1_pt_fakes_DY_stack_3->GetXaxis()->SetLabelSize(0.05);
   lep1_pt_fakes_DY_stack_3->GetXaxis()->SetTitleSize(0.06);
   lep1_pt_fakes_DY_stack_3->GetXaxis()->SetTitleOffset(0.9);
   lep1_pt_fakes_DY_stack_3->GetXaxis()->SetTitleFont(42);
   lep1_pt_fakes_DY_stack_3->GetYaxis()->SetTitle("Events");
   lep1_pt_fakes_DY_stack_3->GetYaxis()->SetLabelFont(42);
   lep1_pt_fakes_DY_stack_3->GetYaxis()->SetLabelOffset(0.007);
   lep1_pt_fakes_DY_stack_3->GetYaxis()->SetLabelSize(0.05);
   lep1_pt_fakes_DY_stack_3->GetYaxis()->SetTitleSize(0.06);
   lep1_pt_fakes_DY_stack_3->GetYaxis()->SetTitleOffset(1.35);
   lep1_pt_fakes_DY_stack_3->GetYaxis()->SetTitleFont(42);
   lep1_pt_fakes_DY_stack_3->GetZaxis()->SetLabelFont(42);
   lep1_pt_fakes_DY_stack_3->GetZaxis()->SetLabelOffset(0.007);
   lep1_pt_fakes_DY_stack_3->GetZaxis()->SetLabelSize(0.05);
   lep1_pt_fakes_DY_stack_3->GetZaxis()->SetTitleSize(0.06);
   lep1_pt_fakes_DY_stack_3->GetZaxis()->SetTitleFont(42);
   lep1_pt_stack->Add(lep1_pt_fakes_DY_stack_3,"");
   
   TH1D *lep1_pt_prompt_ZZ_stack_4 = new TH1D("lep1_pt_prompt_ZZ_stack_4","dummy",20,0,200);
   lep1_pt_prompt_ZZ_stack_4->SetBinContent(4,1.100912);
   lep1_pt_prompt_ZZ_stack_4->SetBinContent(5,9.357756);
   lep1_pt_prompt_ZZ_stack_4->SetBinContent(6,13.57792);
   lep1_pt_prompt_ZZ_stack_4->SetBinContent(7,11.74307);
   lep1_pt_prompt_ZZ_stack_4->SetBinContent(8,7.522902);
   lep1_pt_prompt_ZZ_stack_4->SetBinContent(9,5.688048);
   lep1_pt_prompt_ZZ_stack_4->SetBinContent(10,5.504562);
   lep1_pt_prompt_ZZ_stack_4->SetBinContent(11,4.036679);
   lep1_pt_prompt_ZZ_stack_4->SetBinContent(12,2.752281);
   lep1_pt_prompt_ZZ_stack_4->SetBinContent(13,3.302737);
   lep1_pt_prompt_ZZ_stack_4->SetBinContent(14,0.917427);
   lep1_pt_prompt_ZZ_stack_4->SetBinContent(15,2.01834);
   lep1_pt_prompt_ZZ_stack_4->SetBinContent(16,1.100912);
   lep1_pt_prompt_ZZ_stack_4->SetBinContent(17,1.284398);
   lep1_pt_prompt_ZZ_stack_4->SetBinContent(18,0.3669708);
   lep1_pt_prompt_ZZ_stack_4->SetBinContent(19,0.5504562);
   lep1_pt_prompt_ZZ_stack_4->SetBinContent(20,2.38531);
   lep1_pt_prompt_ZZ_stack_4->SetBinError(4,0.4494456);
   lep1_pt_prompt_ZZ_stack_4->SetBinError(5,1.310348);
   lep1_pt_prompt_ZZ_stack_4->SetBinError(6,1.578401);
   lep1_pt_prompt_ZZ_stack_4->SetBinError(7,1.467883);
   lep1_pt_prompt_ZZ_stack_4->SetBinError(8,1.17488);
   lep1_pt_prompt_ZZ_stack_4->SetBinError(9,1.021604);
   lep1_pt_prompt_ZZ_stack_4->SetBinError(10,1.004991);
   lep1_pt_prompt_ZZ_stack_4->SetBinError(11,0.8606229);
   lep1_pt_prompt_ZZ_stack_4->SetBinError(12,0.7106359);
   lep1_pt_prompt_ZZ_stack_4->SetBinError(13,0.7784627);
   lep1_pt_prompt_ZZ_stack_4->SetBinError(14,0.4102858);
   lep1_pt_prompt_ZZ_stack_4->SetBinError(15,0.6085523);
   lep1_pt_prompt_ZZ_stack_4->SetBinError(16,0.4494456);
   lep1_pt_prompt_ZZ_stack_4->SetBinError(17,0.4854568);
   lep1_pt_prompt_ZZ_stack_4->SetBinError(18,0.2594876);
   lep1_pt_prompt_ZZ_stack_4->SetBinError(19,0.3178061);
   lep1_pt_prompt_ZZ_stack_4->SetBinError(20,0.6615661);
   lep1_pt_prompt_ZZ_stack_4->SetEntries(403);

   ci = TColor::GetColor("#00cc00");
   lep1_pt_prompt_ZZ_stack_4->SetFillColor(ci);
   lep1_pt_prompt_ZZ_stack_4->SetMarkerStyle(0);
   lep1_pt_prompt_ZZ_stack_4->SetMarkerSize(1.1);
   lep1_pt_prompt_ZZ_stack_4->GetXaxis()->SetTitle("p_{T}(l1) [GeV]");
   lep1_pt_prompt_ZZ_stack_4->GetXaxis()->SetMoreLogLabels();
   lep1_pt_prompt_ZZ_stack_4->GetXaxis()->SetLabelFont(42);
   lep1_pt_prompt_ZZ_stack_4->GetXaxis()->SetLabelOffset(0.007);
   lep1_pt_prompt_ZZ_stack_4->GetXaxis()->SetLabelSize(0.05);
   lep1_pt_prompt_ZZ_stack_4->GetXaxis()->SetTitleSize(0.06);
   lep1_pt_prompt_ZZ_stack_4->GetXaxis()->SetTitleOffset(0.9);
   lep1_pt_prompt_ZZ_stack_4->GetXaxis()->SetTitleFont(42);
   lep1_pt_prompt_ZZ_stack_4->GetYaxis()->SetTitle("Events");
   lep1_pt_prompt_ZZ_stack_4->GetYaxis()->SetLabelFont(42);
   lep1_pt_prompt_ZZ_stack_4->GetYaxis()->SetLabelOffset(0.007);
   lep1_pt_prompt_ZZ_stack_4->GetYaxis()->SetLabelSize(0.05);
   lep1_pt_prompt_ZZ_stack_4->GetYaxis()->SetTitleSize(0.06);
   lep1_pt_prompt_ZZ_stack_4->GetYaxis()->SetTitleOffset(1.35);
   lep1_pt_prompt_ZZ_stack_4->GetYaxis()->SetTitleFont(42);
   lep1_pt_prompt_ZZ_stack_4->GetZaxis()->SetLabelFont(42);
   lep1_pt_prompt_ZZ_stack_4->GetZaxis()->SetLabelOffset(0.007);
   lep1_pt_prompt_ZZ_stack_4->GetZaxis()->SetLabelSize(0.05);
   lep1_pt_prompt_ZZ_stack_4->GetZaxis()->SetTitleSize(0.06);
   lep1_pt_prompt_ZZ_stack_4->GetZaxis()->SetTitleFont(42);
   lep1_pt_stack->Add(lep1_pt_prompt_ZZ_stack_4,"");
   
   TH1D *lep1_pt_prompt_WZ_stack_5 = new TH1D("lep1_pt_prompt_WZ_stack_5","dummy",20,0,200);
   lep1_pt_prompt_WZ_stack_5->SetBinContent(3,2.532544);
   lep1_pt_prompt_WZ_stack_5->SetBinContent(4,41.33473);
   lep1_pt_prompt_WZ_stack_5->SetBinContent(5,169.4091);
   lep1_pt_prompt_WZ_stack_5->SetBinContent(6,242.9433);
   lep1_pt_prompt_WZ_stack_5->SetBinContent(7,199.7092);
   lep1_pt_prompt_WZ_stack_5->SetBinContent(8,151.0481);
   lep1_pt_prompt_WZ_stack_5->SetBinContent(9,107.9949);
   lep1_pt_prompt_WZ_stack_5->SetBinContent(10,76.15721);
   lep1_pt_prompt_WZ_stack_5->SetBinContent(11,57.16313);
   lep1_pt_prompt_WZ_stack_5->SetBinContent(12,41.60608);
   lep1_pt_prompt_WZ_stack_5->SetBinContent(13,30.02873);
   lep1_pt_prompt_WZ_stack_5->SetBinContent(14,23.96872);
   lep1_pt_prompt_WZ_stack_5->SetBinContent(15,19.62721);
   lep1_pt_prompt_WZ_stack_5->SetBinContent(16,15.55705);
   lep1_pt_prompt_WZ_stack_5->SetBinContent(17,10.85376);
   lep1_pt_prompt_WZ_stack_5->SetBinContent(18,10.40152);
   lep1_pt_prompt_WZ_stack_5->SetBinContent(19,8.954351);
   lep1_pt_prompt_WZ_stack_5->SetBinContent(20,40.79204);
   lep1_pt_prompt_WZ_stack_5->SetBinError(3,0.4786058);
   lep1_pt_prompt_WZ_stack_5->SetBinError(4,1.933557);
   lep1_pt_prompt_WZ_stack_5->SetBinError(5,3.914423);
   lep1_pt_prompt_WZ_stack_5->SetBinError(6,4.687615);
   lep1_pt_prompt_WZ_stack_5->SetBinError(7,4.250093);
   lep1_pt_prompt_WZ_stack_5->SetBinError(8,3.696214);
   lep1_pt_prompt_WZ_stack_5->SetBinError(9,3.125367);
   lep1_pt_prompt_WZ_stack_5->SetBinError(10,2.624551);
   lep1_pt_prompt_WZ_stack_5->SetBinError(11,2.273827);
   lep1_pt_prompt_WZ_stack_5->SetBinError(12,1.939893);
   lep1_pt_prompt_WZ_stack_5->SetBinError(13,1.648041);
   lep1_pt_prompt_WZ_stack_5->SetBinError(14,1.472387);
   lep1_pt_prompt_WZ_stack_5->SetBinError(15,1.332382);
   lep1_pt_prompt_WZ_stack_5->SetBinError(16,1.186214);
   lep1_pt_prompt_WZ_stack_5->SetBinError(17,0.9908081);
   lep1_pt_prompt_WZ_stack_5->SetBinError(18,0.9699466);
   lep1_pt_prompt_WZ_stack_5->SetBinError(19,0.8999461);
   lep1_pt_prompt_WZ_stack_5->SetBinError(20,1.920822);
   lep1_pt_prompt_WZ_stack_5->SetEntries(13825);

   ci = TColor::GetColor("#ffcc00");
   lep1_pt_prompt_WZ_stack_5->SetFillColor(ci);
   lep1_pt_prompt_WZ_stack_5->SetMarkerStyle(0);
   lep1_pt_prompt_WZ_stack_5->SetMarkerSize(1.1);
   lep1_pt_prompt_WZ_stack_5->GetXaxis()->SetTitle("p_{T}(l1) [GeV]");
   lep1_pt_prompt_WZ_stack_5->GetXaxis()->SetMoreLogLabels();
   lep1_pt_prompt_WZ_stack_5->GetXaxis()->SetLabelFont(42);
   lep1_pt_prompt_WZ_stack_5->GetXaxis()->SetLabelOffset(0.007);
   lep1_pt_prompt_WZ_stack_5->GetXaxis()->SetLabelSize(0.05);
   lep1_pt_prompt_WZ_stack_5->GetXaxis()->SetTitleSize(0.06);
   lep1_pt_prompt_WZ_stack_5->GetXaxis()->SetTitleOffset(0.9);
   lep1_pt_prompt_WZ_stack_5->GetXaxis()->SetTitleFont(42);
   lep1_pt_prompt_WZ_stack_5->GetYaxis()->SetTitle("Events");
   lep1_pt_prompt_WZ_stack_5->GetYaxis()->SetLabelFont(42);
   lep1_pt_prompt_WZ_stack_5->GetYaxis()->SetLabelOffset(0.007);
   lep1_pt_prompt_WZ_stack_5->GetYaxis()->SetLabelSize(0.05);
   lep1_pt_prompt_WZ_stack_5->GetYaxis()->SetTitleSize(0.06);
   lep1_pt_prompt_WZ_stack_5->GetYaxis()->SetTitleOffset(1.35);
   lep1_pt_prompt_WZ_stack_5->GetYaxis()->SetTitleFont(42);
   lep1_pt_prompt_WZ_stack_5->GetZaxis()->SetLabelFont(42);
   lep1_pt_prompt_WZ_stack_5->GetZaxis()->SetLabelOffset(0.007);
   lep1_pt_prompt_WZ_stack_5->GetZaxis()->SetLabelSize(0.05);
   lep1_pt_prompt_WZ_stack_5->GetZaxis()->SetTitleSize(0.06);
   lep1_pt_prompt_WZ_stack_5->GetZaxis()->SetTitleFont(42);
   lep1_pt_stack->Add(lep1_pt_prompt_WZ_stack_5,"");
   lep1_pt_stack->Draw("same hist");
   
   TH1D *lep1_pt_total__186 = new TH1D("lep1_pt_total__186","dummy",20,0,200);
   lep1_pt_total__186->SetBinContent(3,4.451549);
   lep1_pt_total__186->SetBinContent(4,56.49194);
   lep1_pt_total__186->SetBinContent(5,214.991);
   lep1_pt_total__186->SetBinContent(6,280.8356);
   lep1_pt_total__186->SetBinContent(7,230.0037);
   lep1_pt_total__186->SetBinContent(8,180.7934);
   lep1_pt_total__186->SetBinContent(9,125.3486);
   lep1_pt_total__186->SetBinContent(10,97.78527);
   lep1_pt_total__186->SetBinContent(11,66.57651);
   lep1_pt_total__186->SetBinContent(12,52.7543);
   lep1_pt_total__186->SetBinContent(13,36.58036);
   lep1_pt_total__186->SetBinContent(14,28.26802);
   lep1_pt_total__186->SetBinContent(15,22.77596);
   lep1_pt_total__186->SetBinContent(16,18.05435);
   lep1_pt_total__186->SetBinContent(17,12.40413);
   lep1_pt_total__186->SetBinContent(18,11.63291);
   lep1_pt_total__186->SetBinContent(19,11.75628);
   lep1_pt_total__186->SetBinContent(20,44.44074);
   lep1_pt_total__186->SetBinError(3,1.788598);
   lep1_pt_total__186->SetBinError(4,4.9782);
   lep1_pt_total__186->SetBinError(5,8.404056);
   lep1_pt_total__186->SetBinError(6,7.188155);
   lep1_pt_total__186->SetBinError(7,6.207102);
   lep1_pt_total__186->SetBinError(8,6.488817);
   lep1_pt_total__186->SetBinError(9,4.792266);
   lep1_pt_total__186->SetBinError(10,5.373932);
   lep1_pt_total__186->SetBinError(11,3.018427);
   lep1_pt_total__186->SetBinError(12,3.654975);
   lep1_pt_total__186->SetBinError(13,2.525964);
   lep1_pt_total__186->SetBinError(14,2.324554);
   lep1_pt_total__186->SetBinError(15,1.490216);
   lep1_pt_total__186->SetBinError(16,1.307975);
   lep1_pt_total__186->SetBinError(17,1.11133);
   lep1_pt_total__186->SetBinError(18,1.032284);
   lep1_pt_total__186->SetBinError(19,1.977846);
   lep1_pt_total__186->SetBinError(20,2.05213);
   lep1_pt_total__186->SetMinimum(0);
   lep1_pt_total__186->SetMaximum(702.0889);
   lep1_pt_total__186->SetEntries(15152);
   lep1_pt_total__186->SetDirectory(0);

   ci = TColor::GetColor("#00cc00");
   lep1_pt_total__186->SetFillColor(ci);
   lep1_pt_total__186->SetMarkerStyle(20);
   lep1_pt_total__186->SetMarkerSize(1.1);
   lep1_pt_total__186->GetXaxis()->SetTitle("p_{T}(l1) [GeV]");
   lep1_pt_total__186->GetXaxis()->SetMoreLogLabels();
   lep1_pt_total__186->GetXaxis()->SetLabelFont(42);
   lep1_pt_total__186->GetXaxis()->SetLabelOffset(999);
   lep1_pt_total__186->GetXaxis()->SetLabelSize(0.05);
   lep1_pt_total__186->GetXaxis()->SetTitleSize(0.05);
   lep1_pt_total__186->GetXaxis()->SetTitleOffset(999);
   lep1_pt_total__186->GetXaxis()->SetTitleFont(42);
   lep1_pt_total__186->GetYaxis()->SetTitle("Events");
   lep1_pt_total__186->GetYaxis()->SetLabelFont(42);
   lep1_pt_total__186->GetYaxis()->SetLabelOffset(0.007);
   lep1_pt_total__186->GetYaxis()->SetLabelSize(0.05);
   lep1_pt_total__186->GetYaxis()->SetTitleSize(0.06);
   lep1_pt_total__186->GetYaxis()->SetTitleOffset(1.48);
   lep1_pt_total__186->GetYaxis()->SetTitleFont(42);
   lep1_pt_total__186->GetZaxis()->SetLabelFont(42);
   lep1_pt_total__186->GetZaxis()->SetLabelOffset(0.007);
   lep1_pt_total__186->GetZaxis()->SetLabelSize(0.05);
   lep1_pt_total__186->GetZaxis()->SetTitleSize(0.06);
   lep1_pt_total__186->GetZaxis()->SetTitleFont(42);
   lep1_pt_total__186->Draw("AXIS SAME");
   
   Double_t lep1_pt_total_errors_fx3231[18] = {
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
   Double_t lep1_pt_total_errors_fy3231[18] = {
   4.451549,
   56.49194,
   214.991,
   280.8356,
   230.0037,
   180.7934,
   125.3486,
   97.78527,
   66.57651,
   52.7543,
   36.58036,
   28.26802,
   22.77596,
   18.05435,
   12.40413,
   11.63291,
   11.75628,
   44.44074};
   Double_t lep1_pt_total_errors_felx3231[18] = {
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
   Double_t lep1_pt_total_errors_fely3231[18] = {
   1.788598,
   4.9782,
   8.404056,
   7.188155,
   6.207102,
   6.488817,
   4.792266,
   5.373932,
   3.018427,
   3.654975,
   2.525964,
   2.324554,
   1.490216,
   1.307975,
   1.11133,
   1.032284,
   1.977846,
   2.05213};
   Double_t lep1_pt_total_errors_fehx3231[18] = {
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
   Double_t lep1_pt_total_errors_fehy3231[18] = {
   1.788598,
   4.9782,
   8.404056,
   7.188155,
   6.207102,
   6.488817,
   4.792266,
   5.373932,
   3.018427,
   3.654975,
   2.525964,
   2.324554,
   1.490216,
   1.307975,
   1.11133,
   1.032284,
   1.977846,
   2.05213};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(18,lep1_pt_total_errors_fx3231,lep1_pt_total_errors_fy3231,lep1_pt_total_errors_felx3231,lep1_pt_total_errors_fehx3231,lep1_pt_total_errors_fely3231,lep1_pt_total_errors_fehy3231);
   grae->SetName("lep1_pt_total_errors");
   grae->SetTitle("Graph");
   grae->SetFillColor(1);
   grae->SetFillStyle(3013);
   grae->SetMarkerStyle(0);
   
   TH1F *Graph_lep1_pt_total_errors3231 = new TH1F("Graph_lep1_pt_total_errors3231","Graph",100,2,218);
   Graph_lep1_pt_total_errors3231->SetMinimum(2.396655);
   Graph_lep1_pt_total_errors3231->SetMaximum(316.5598);
   Graph_lep1_pt_total_errors3231->SetDirectory(0);
   Graph_lep1_pt_total_errors3231->SetStats(0);
   Graph_lep1_pt_total_errors3231->SetLineStyle(0);
   Graph_lep1_pt_total_errors3231->SetMarkerStyle(20);
   Graph_lep1_pt_total_errors3231->GetXaxis()->SetLabelFont(42);
   Graph_lep1_pt_total_errors3231->GetXaxis()->SetLabelOffset(0.007);
   Graph_lep1_pt_total_errors3231->GetXaxis()->SetLabelSize(0.05);
   Graph_lep1_pt_total_errors3231->GetXaxis()->SetTitleSize(0.06);
   Graph_lep1_pt_total_errors3231->GetXaxis()->SetTitleOffset(0.9);
   Graph_lep1_pt_total_errors3231->GetXaxis()->SetTitleFont(42);
   Graph_lep1_pt_total_errors3231->GetYaxis()->SetLabelFont(42);
   Graph_lep1_pt_total_errors3231->GetYaxis()->SetLabelOffset(0.007);
   Graph_lep1_pt_total_errors3231->GetYaxis()->SetLabelSize(0.05);
   Graph_lep1_pt_total_errors3231->GetYaxis()->SetTitleSize(0.06);
   Graph_lep1_pt_total_errors3231->GetYaxis()->SetTitleOffset(1.35);
   Graph_lep1_pt_total_errors3231->GetYaxis()->SetTitleFont(42);
   Graph_lep1_pt_total_errors3231->GetZaxis()->SetLabelFont(42);
   Graph_lep1_pt_total_errors3231->GetZaxis()->SetLabelOffset(0.007);
   Graph_lep1_pt_total_errors3231->GetZaxis()->SetLabelSize(0.05);
   Graph_lep1_pt_total_errors3231->GetZaxis()->SetTitleSize(0.06);
   Graph_lep1_pt_total_errors3231->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_lep1_pt_total_errors3231);
   
   grae->Draw("pe2 ");
   
   Double_t lep1_pt_data_graph_fx3232[20] = {
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
   Double_t lep1_pt_data_graph_fy3232[20] = {
   0,
   0,
   2,
   51,
   217,
   259,
   233,
   145,
   132,
   105,
   76,
   49,
   36,
   36,
   34,
   19,
   20,
   19,
   8,
   72};
   Double_t lep1_pt_data_graph_felx3232[20] = {
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
   Double_t lep1_pt_data_graph_fely3232[20] = {
   0,
   0,
   1.29183,
   7.118073,
   14.71988,
   16.08343,
   15.2537,
   12.02795,
   11.47479,
   10.23082,
   8.69875,
   6.976163,
   5.972111,
   5.972111,
   5.80224,
   4.320299,
   4.43453,
   4.320299,
   2.768432,
   8.465699};
   Double_t lep1_pt_data_graph_fehx3232[20] = {
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
   Double_t lep1_pt_data_graph_fehy3232[20] = {
   1.841055,
   1.841055,
   2.63791,
   8.188292,
   15.7539,
   17.11457,
   16.28654,
   13.06958,
   12.51843,
   11.27975,
   9.756266,
   8.047802,
   7.055691,
   7.055691,
   6.888243,
   5.435307,
   5.546633,
   5.435307,
   3.94522,
   9.524792};
   grae = new TGraphAsymmErrors(20,lep1_pt_data_graph_fx3232,lep1_pt_data_graph_fy3232,lep1_pt_data_graph_felx3232,lep1_pt_data_graph_fehx3232,lep1_pt_data_graph_fely3232,lep1_pt_data_graph_fehy3232);
   grae->SetName("lep1_pt_data_graph");
   grae->SetTitle("Graph");
   grae->SetFillStyle(1000);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.1);
   
   TH1F *Graph_lep1_pt_data_graph3232 = new TH1F("Graph_lep1_pt_data_graph3232","Graph",100,0,220);
   Graph_lep1_pt_data_graph3232->SetMinimum(0);
   Graph_lep1_pt_data_graph3232->SetMaximum(303.726);
   Graph_lep1_pt_data_graph3232->SetDirectory(0);
   Graph_lep1_pt_data_graph3232->SetStats(0);
   Graph_lep1_pt_data_graph3232->SetLineStyle(0);
   Graph_lep1_pt_data_graph3232->SetMarkerStyle(20);
   Graph_lep1_pt_data_graph3232->GetXaxis()->SetLabelFont(42);
   Graph_lep1_pt_data_graph3232->GetXaxis()->SetLabelOffset(0.007);
   Graph_lep1_pt_data_graph3232->GetXaxis()->SetLabelSize(0.05);
   Graph_lep1_pt_data_graph3232->GetXaxis()->SetTitleSize(0.06);
   Graph_lep1_pt_data_graph3232->GetXaxis()->SetTitleOffset(0.9);
   Graph_lep1_pt_data_graph3232->GetXaxis()->SetTitleFont(42);
   Graph_lep1_pt_data_graph3232->GetYaxis()->SetLabelFont(42);
   Graph_lep1_pt_data_graph3232->GetYaxis()->SetLabelOffset(0.007);
   Graph_lep1_pt_data_graph3232->GetYaxis()->SetLabelSize(0.05);
   Graph_lep1_pt_data_graph3232->GetYaxis()->SetTitleSize(0.06);
   Graph_lep1_pt_data_graph3232->GetYaxis()->SetTitleOffset(1.35);
   Graph_lep1_pt_data_graph3232->GetYaxis()->SetTitleFont(42);
   Graph_lep1_pt_data_graph3232->GetZaxis()->SetLabelFont(42);
   Graph_lep1_pt_data_graph3232->GetZaxis()->SetLabelOffset(0.007);
   Graph_lep1_pt_data_graph3232->GetZaxis()->SetLabelSize(0.05);
   Graph_lep1_pt_data_graph3232->GetZaxis()->SetTitleSize(0.06);
   Graph_lep1_pt_data_graph3232->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_lep1_pt_data_graph3232);
   
   grae->Draw("pz ");
   
   TLegend *leg = new TLegend(0.62,0.628,0.9,0.91,NULL,"brNDC");
   leg->SetBorderSize(1);
   leg->SetTextSize(0.036);
   leg->SetLineColor(0);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("lep1_pt_data","Data","LPE");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1.1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("lep1_pt_prompt_WZ_stack_5","WZ","F");

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
   entry=leg->AddEntry("lep1_pt_prompt_ZZ_stack_4","qqZZ","F");

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
   entry=leg->AddEntry("lep1_pt_fakes_DY_stack_3","Fakes DY","F");

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
   entry=leg->AddEntry("lep1_pt_fakes_TT_stack_2","Fakes TT","F");

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
   entry=leg->AddEntry("lep1_pt_total_errors","Total unc.","F");
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
   lep1_pt_canvas->cd();
  
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
   
   TH1D *lep1_pt_total__187 = new TH1D("lep1_pt_total__187","dummy",20,0,200);
   lep1_pt_total__187->SetBinContent(3,1);
   lep1_pt_total__187->SetBinContent(4,1);
   lep1_pt_total__187->SetBinContent(5,1);
   lep1_pt_total__187->SetBinContent(6,1);
   lep1_pt_total__187->SetBinContent(7,1);
   lep1_pt_total__187->SetBinContent(8,1);
   lep1_pt_total__187->SetBinContent(9,1);
   lep1_pt_total__187->SetBinContent(10,1);
   lep1_pt_total__187->SetBinContent(11,1);
   lep1_pt_total__187->SetBinContent(12,1);
   lep1_pt_total__187->SetBinContent(13,1);
   lep1_pt_total__187->SetBinContent(14,1);
   lep1_pt_total__187->SetBinContent(15,1);
   lep1_pt_total__187->SetBinContent(16,1);
   lep1_pt_total__187->SetBinContent(17,1);
   lep1_pt_total__187->SetBinContent(18,1);
   lep1_pt_total__187->SetBinContent(19,1);
   lep1_pt_total__187->SetBinContent(20,1);
   lep1_pt_total__187->SetMinimum(0.5);
   lep1_pt_total__187->SetMaximum(2);
   lep1_pt_total__187->SetEntries(15172);

   ci = TColor::GetColor("#00cc00");
   lep1_pt_total__187->SetFillColor(ci);

   ci = TColor::GetColor("#6666ff");
   lep1_pt_total__187->SetMarkerColor(ci);
   lep1_pt_total__187->SetMarkerSize(1.1);
   lep1_pt_total__187->GetXaxis()->SetTitle("p_{T}(l1) [GeV]");
   lep1_pt_total__187->GetXaxis()->SetMoreLogLabels();
   lep1_pt_total__187->GetXaxis()->SetLabelFont(42);
   lep1_pt_total__187->GetXaxis()->SetLabelOffset(0.015);
   lep1_pt_total__187->GetXaxis()->SetLabelSize(0.1);
   lep1_pt_total__187->GetXaxis()->SetTitleSize(0.14);
   lep1_pt_total__187->GetXaxis()->SetTitleFont(42);
   lep1_pt_total__187->GetYaxis()->SetTitle("Data/pred.");
   lep1_pt_total__187->GetYaxis()->SetDecimals();
   lep1_pt_total__187->GetYaxis()->SetNdivisions(505);
   lep1_pt_total__187->GetYaxis()->SetLabelFont(42);
   lep1_pt_total__187->GetYaxis()->SetLabelOffset(0.01);
   lep1_pt_total__187->GetYaxis()->SetLabelSize(0.11);
   lep1_pt_total__187->GetYaxis()->SetTitleSize(0.14);
   lep1_pt_total__187->GetYaxis()->SetTitleOffset(0.62);
   lep1_pt_total__187->GetYaxis()->SetTitleFont(42);
   lep1_pt_total__187->GetZaxis()->SetLabelFont(42);
   lep1_pt_total__187->GetZaxis()->SetLabelOffset(0.007);
   lep1_pt_total__187->GetZaxis()->SetLabelSize(0.05);
   lep1_pt_total__187->GetZaxis()->SetTitleSize(0.06);
   lep1_pt_total__187->GetZaxis()->SetTitleFont(42);
   lep1_pt_total__187->Draw("AXIS");
   
   Double_t lep1_pt_total_errors_fx3233[18] = {
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
   Double_t lep1_pt_total_errors_fy3233[18] = {
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
   Double_t lep1_pt_total_errors_felx3233[18] = {
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
   Double_t lep1_pt_total_errors_fely3233[18] = {
   0.4017924,
   0.0881223,
   0.03909027,
   0.0255956,
   0.02698697,
   0.03589079,
   0.0382315,
   0.05495646,
   0.04533771,
   0.06928299,
   0.06905246,
   0.08223263,
   0.06542934,
   0.07244657,
   0.08959354,
   0.08873818,
   0.1682374,
   0.04617676};
   Double_t lep1_pt_total_errors_fehx3233[18] = {
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
   Double_t lep1_pt_total_errors_fehy3233[18] = {
   0.4017924,
   0.0881223,
   0.03909027,
   0.0255956,
   0.02698697,
   0.03589079,
   0.0382315,
   0.05495646,
   0.04533771,
   0.06928299,
   0.06905246,
   0.08223263,
   0.06542934,
   0.07244657,
   0.08959354,
   0.08873818,
   0.1682374,
   0.04617676};
   grae = new TGraphAsymmErrors(18,lep1_pt_total_errors_fx3233,lep1_pt_total_errors_fy3233,lep1_pt_total_errors_felx3233,lep1_pt_total_errors_fehx3233,lep1_pt_total_errors_fely3233,lep1_pt_total_errors_fehy3233);
   grae->SetName("lep1_pt_total_errors");
   grae->SetTitle("Graph");

   ci = TColor::GetColor("#00ffff");
   grae->SetFillColor(ci);

   ci = TColor::GetColor("#00ffff");
   grae->SetMarkerColor(ci);
   grae->Draw("e2");
   
   Double_t lep1_pt_total_errors_fx3234[18] = {
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
   Double_t lep1_pt_total_errors_fy3234[18] = {
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
   Double_t lep1_pt_total_errors_felx3234[18] = {
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
   Double_t lep1_pt_total_errors_fely3234[18] = {
   0.4017924,
   0.0881223,
   0.03909027,
   0.0255956,
   0.02698697,
   0.03589079,
   0.0382315,
   0.05495646,
   0.04533771,
   0.06928299,
   0.06905246,
   0.08223263,
   0.06542934,
   0.07244657,
   0.08959354,
   0.08873818,
   0.1682374,
   0.04617676};
   Double_t lep1_pt_total_errors_fehx3234[18] = {
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
   Double_t lep1_pt_total_errors_fehy3234[18] = {
   0.4017924,
   0.0881223,
   0.03909027,
   0.0255956,
   0.02698697,
   0.03589079,
   0.0382315,
   0.05495646,
   0.04533771,
   0.06928299,
   0.06905246,
   0.08223263,
   0.06542934,
   0.07244657,
   0.08959354,
   0.08873818,
   0.1682374,
   0.04617676};
   grae = new TGraphAsymmErrors(18,lep1_pt_total_errors_fx3234,lep1_pt_total_errors_fy3234,lep1_pt_total_errors_felx3234,lep1_pt_total_errors_fehx3234,lep1_pt_total_errors_fely3234,lep1_pt_total_errors_fehy3234);
   grae->SetName("lep1_pt_total_errors");
   grae->SetTitle("Graph");

   ci = TColor::GetColor("#6666ff");
   grae->SetFillColor(ci);

   ci = TColor::GetColor("#6666ff");
   grae->SetMarkerColor(ci);
   grae->Draw("e2 ");
   
   TH1D *lep1_pt_total__188 = new TH1D("lep1_pt_total__188","dummy",20,0,200);
   lep1_pt_total__188->SetBinContent(3,1);
   lep1_pt_total__188->SetBinContent(4,1);
   lep1_pt_total__188->SetBinContent(5,1);
   lep1_pt_total__188->SetBinContent(6,1);
   lep1_pt_total__188->SetBinContent(7,1);
   lep1_pt_total__188->SetBinContent(8,1);
   lep1_pt_total__188->SetBinContent(9,1);
   lep1_pt_total__188->SetBinContent(10,1);
   lep1_pt_total__188->SetBinContent(11,1);
   lep1_pt_total__188->SetBinContent(12,1);
   lep1_pt_total__188->SetBinContent(13,1);
   lep1_pt_total__188->SetBinContent(14,1);
   lep1_pt_total__188->SetBinContent(15,1);
   lep1_pt_total__188->SetBinContent(16,1);
   lep1_pt_total__188->SetBinContent(17,1);
   lep1_pt_total__188->SetBinContent(18,1);
   lep1_pt_total__188->SetBinContent(19,1);
   lep1_pt_total__188->SetBinContent(20,1);
   lep1_pt_total__188->SetMinimum(0.5);
   lep1_pt_total__188->SetMaximum(2);
   lep1_pt_total__188->SetEntries(15172);

   ci = TColor::GetColor("#00cc00");
   lep1_pt_total__188->SetFillColor(ci);

   ci = TColor::GetColor("#6666ff");
   lep1_pt_total__188->SetMarkerColor(ci);
   lep1_pt_total__188->SetMarkerSize(1.1);
   lep1_pt_total__188->GetXaxis()->SetTitle("p_{T}(l1) [GeV]");
   lep1_pt_total__188->GetXaxis()->SetMoreLogLabels();
   lep1_pt_total__188->GetXaxis()->SetLabelFont(42);
   lep1_pt_total__188->GetXaxis()->SetLabelOffset(0.015);
   lep1_pt_total__188->GetXaxis()->SetLabelSize(0.1);
   lep1_pt_total__188->GetXaxis()->SetTitleSize(0.14);
   lep1_pt_total__188->GetXaxis()->SetTitleFont(42);
   lep1_pt_total__188->GetYaxis()->SetTitle("Data/pred.");
   lep1_pt_total__188->GetYaxis()->SetDecimals();
   lep1_pt_total__188->GetYaxis()->SetNdivisions(505);
   lep1_pt_total__188->GetYaxis()->SetLabelFont(42);
   lep1_pt_total__188->GetYaxis()->SetLabelOffset(0.01);
   lep1_pt_total__188->GetYaxis()->SetLabelSize(0.11);
   lep1_pt_total__188->GetYaxis()->SetTitleSize(0.14);
   lep1_pt_total__188->GetYaxis()->SetTitleOffset(0.62);
   lep1_pt_total__188->GetYaxis()->SetTitleFont(42);
   lep1_pt_total__188->GetZaxis()->SetLabelFont(42);
   lep1_pt_total__188->GetZaxis()->SetLabelOffset(0.007);
   lep1_pt_total__188->GetZaxis()->SetLabelSize(0.05);
   lep1_pt_total__188->GetZaxis()->SetTitleSize(0.06);
   lep1_pt_total__188->GetZaxis()->SetTitleFont(42);
   lep1_pt_total__188->Draw("AXIS SAME");
   TLine *line = new TLine(0,1,200,1);
   line->SetLineColor(58);
   line->SetLineWidth(2);
   line->Draw();
   
   Double_t data_div_fx3235[20] = {
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
   Double_t data_div_fy3235[20] = {
   0,
   0,
   0.4492819,
   0.9027837,
   1.009345,
   0.9222479,
   1.013027,
   0.8020206,
   1.053063,
   1.073781,
   1.141544,
   0.9288342,
   0.9841347,
   1.273524,
   1.492802,
   1.052378,
   1.612366,
   1.633297,
   0.6804872,
   1.620135};
   Double_t data_div_felx3235[20] = {
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
   Double_t data_div_fely3235[20] = {
   0,
   0,
   0.2901978,
   0.1260016,
   0.0684674,
   0.05726991,
   0.06631939,
   0.0665287,
   0.09154305,
   0.1046254,
   0.1306579,
   0.1322388,
   0.16326,
   0.2112674,
   0.2547529,
   0.2392941,
   0.3575042,
   0.3713858,
   0.2354853,
   0.1904941};
   Double_t data_div_fehx3235[20] = {
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
   Double_t data_div_fehy3235[20] = {
   0,
   0,
   0.5925826,
   0.1449462,
   0.07327703,
   0.06094161,
   0.07080992,
   0.07229014,
   0.0998689,
   0.1153522,
   0.1465422,
   0.1525525,
   0.192882,
   0.2495998,
   0.3024349,
   0.3010526,
   0.44716,
   0.4672352,
   0.335584,
   0.2143257};
   grae = new TGraphAsymmErrors(20,data_div_fx3235,data_div_fy3235,data_div_felx3235,data_div_fehx3235,data_div_fely3235,data_div_fehy3235);
   grae->SetName("data_div");
   grae->SetTitle("Graph");
   grae->SetFillStyle(1000);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.1);
   
   TH1F *Graph_lep1_pt_data_graph3235 = new TH1F("Graph_lep1_pt_data_graph3235","Graph",100,0,220);
   Graph_lep1_pt_data_graph3235->SetMinimum(0);
   Graph_lep1_pt_data_graph3235->SetMaximum(303.726);
   Graph_lep1_pt_data_graph3235->SetDirectory(0);
   Graph_lep1_pt_data_graph3235->SetStats(0);
   Graph_lep1_pt_data_graph3235->SetLineStyle(0);
   Graph_lep1_pt_data_graph3235->SetMarkerStyle(20);
   Graph_lep1_pt_data_graph3235->GetXaxis()->SetLabelFont(42);
   Graph_lep1_pt_data_graph3235->GetXaxis()->SetLabelOffset(0.007);
   Graph_lep1_pt_data_graph3235->GetXaxis()->SetLabelSize(0.05);
   Graph_lep1_pt_data_graph3235->GetXaxis()->SetTitleSize(0.06);
   Graph_lep1_pt_data_graph3235->GetXaxis()->SetTitleOffset(0.9);
   Graph_lep1_pt_data_graph3235->GetXaxis()->SetTitleFont(42);
   Graph_lep1_pt_data_graph3235->GetYaxis()->SetLabelFont(42);
   Graph_lep1_pt_data_graph3235->GetYaxis()->SetLabelOffset(0.007);
   Graph_lep1_pt_data_graph3235->GetYaxis()->SetLabelSize(0.05);
   Graph_lep1_pt_data_graph3235->GetYaxis()->SetTitleSize(0.06);
   Graph_lep1_pt_data_graph3235->GetYaxis()->SetTitleOffset(1.35);
   Graph_lep1_pt_data_graph3235->GetYaxis()->SetTitleFont(42);
   Graph_lep1_pt_data_graph3235->GetZaxis()->SetLabelFont(42);
   Graph_lep1_pt_data_graph3235->GetZaxis()->SetLabelOffset(0.007);
   Graph_lep1_pt_data_graph3235->GetZaxis()->SetLabelSize(0.05);
   Graph_lep1_pt_data_graph3235->GetZaxis()->SetTitleSize(0.06);
   Graph_lep1_pt_data_graph3235->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_lep1_pt_data_graph3235);
   
   grae->Draw("pz ");
   
   leg = new TLegend(0,0,0,0,NULL,"brNDC");
   leg->SetBorderSize(1);
   leg->SetTextSize(0.084);
   leg->SetLineColor(0);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   entry=leg->AddEntry("lep1_pt_total_errors","stat. unc.","F");
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
   entry=leg->AddEntry("lep1_pt_total_errors","total unc.","F");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   leg->Draw();
   pad2->Modified();
   lep1_pt_canvas->cd();
   lep1_pt_canvas->Modified();
   lep1_pt_canvas->cd();
   lep1_pt_canvas->SetSelected(lep1_pt_canvas);
}
