void jet1_eta()
{
//=========Macro generated from canvas: jet1_eta_canvas/jet1_eta
//=========  (Thu Dec 15 18:37:14 2022) by ROOT version 6.12/07
   TCanvas *jet1_eta_canvas = new TCanvas("jet1_eta_canvas", "jet1_eta",0,0,600,750);
   gStyle->SetOptFit(1);
   gStyle->SetOptStat(0);
   gStyle->SetOptTitle(0);
   jet1_eta_canvas->SetHighLightColor(2);
   jet1_eta_canvas->Range(0,0,1,1);
   jet1_eta_canvas->SetFillColor(0);
   jet1_eta_canvas->SetBorderMode(0);
   jet1_eta_canvas->SetBorderSize(2);
   jet1_eta_canvas->SetTickx(1);
   jet1_eta_canvas->SetTicky(1);
   jet1_eta_canvas->SetLeftMargin(0.18);
   jet1_eta_canvas->SetRightMargin(0.04);
   jet1_eta_canvas->SetBottomMargin(0.13);
   jet1_eta_canvas->SetFrameFillStyle(0);
   jet1_eta_canvas->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: pad1
   TPad *pad1 = new TPad("pad1", "pad1",0,0.3,1,1);
   pad1->Draw();
   pad1->cd();
   pad1->Range(-3.507692,-4.476754,2.646154,174.5934);
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
   
   TH1D *jet1_eta_total__157 = new TH1D("jet1_eta_total__157","dummy",20,-2.4,2.4);
   jet1_eta_total__157->SetBinContent(1,153.7899);
   jet1_eta_total__157->SetBinContent(2,23.40936);
   jet1_eta_total__157->SetBinContent(3,24.21018);
   jet1_eta_total__157->SetBinContent(4,30.90775);
   jet1_eta_total__157->SetBinContent(5,30.46623);
   jet1_eta_total__157->SetBinContent(6,40.05376);
   jet1_eta_total__157->SetBinContent(7,39.26752);
   jet1_eta_total__157->SetBinContent(8,33.1682);
   jet1_eta_total__157->SetBinContent(9,43.45731);
   jet1_eta_total__157->SetBinContent(10,40.77204);
   jet1_eta_total__157->SetBinContent(11,44.28237);
   jet1_eta_total__157->SetBinContent(12,40.37611);
   jet1_eta_total__157->SetBinContent(13,38.15542);
   jet1_eta_total__157->SetBinContent(14,37.92723);
   jet1_eta_total__157->SetBinContent(15,35.36786);
   jet1_eta_total__157->SetBinContent(16,34.53682);
   jet1_eta_total__157->SetBinContent(17,29.93179);
   jet1_eta_total__157->SetBinContent(18,28.00718);
   jet1_eta_total__157->SetBinContent(19,26.43427);
   jet1_eta_total__157->SetBinContent(20,155.208);
   jet1_eta_total__157->SetBinError(1,6.325259);
   jet1_eta_total__157->SetBinError(2,1.477);
   jet1_eta_total__157->SetBinError(3,1.505028);
   jet1_eta_total__157->SetBinError(4,2.918594);
   jet1_eta_total__157->SetBinError(5,2.397591);
   jet1_eta_total__157->SetBinError(6,3.480455);
   jet1_eta_total__157->SetBinError(7,3.042868);
   jet1_eta_total__157->SetBinError(8,1.753143);
   jet1_eta_total__157->SetBinError(9,3.525601);
   jet1_eta_total__157->SetBinError(10,1.961112);
   jet1_eta_total__157->SetBinError(11,3.918684);
   jet1_eta_total__157->SetBinError(12,2.592551);
   jet1_eta_total__157->SetBinError(13,2.533159);
   jet1_eta_total__157->SetBinError(14,2.512862);
   jet1_eta_total__157->SetBinError(15,3.415099);
   jet1_eta_total__157->SetBinError(16,2.967887);
   jet1_eta_total__157->SetBinError(17,1.693377);
   jet1_eta_total__157->SetBinError(18,2.343912);
   jet1_eta_total__157->SetBinError(19,3.306913);
   jet1_eta_total__157->SetBinError(20,6.096464);
   jet1_eta_total__157->SetMinimum(0);
   jet1_eta_total__157->SetMaximum(163.8492);
   jet1_eta_total__157->SetEntries(9419);
   jet1_eta_total__157->SetDirectory(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#00cc00");
   jet1_eta_total__157->SetFillColor(ci);
   jet1_eta_total__157->SetMarkerStyle(20);
   jet1_eta_total__157->SetMarkerSize(1.1);
   jet1_eta_total__157->GetXaxis()->SetTitle("p_{T}(leading jet) [GeV]");
   jet1_eta_total__157->GetXaxis()->SetMoreLogLabels();
   jet1_eta_total__157->GetXaxis()->SetLabelFont(42);
   jet1_eta_total__157->GetXaxis()->SetLabelOffset(999);
   jet1_eta_total__157->GetXaxis()->SetLabelSize(0.05);
   jet1_eta_total__157->GetXaxis()->SetTitleSize(0.05);
   jet1_eta_total__157->GetXaxis()->SetTitleOffset(999);
   jet1_eta_total__157->GetXaxis()->SetTitleFont(42);
   jet1_eta_total__157->GetYaxis()->SetTitle("Jets");
   jet1_eta_total__157->GetYaxis()->SetLabelFont(42);
   jet1_eta_total__157->GetYaxis()->SetLabelOffset(0.007);
   jet1_eta_total__157->GetYaxis()->SetLabelSize(0.05);
   jet1_eta_total__157->GetYaxis()->SetTitleSize(0.06);
   jet1_eta_total__157->GetYaxis()->SetTitleOffset(1.48);
   jet1_eta_total__157->GetYaxis()->SetTitleFont(42);
   jet1_eta_total__157->GetZaxis()->SetLabelFont(42);
   jet1_eta_total__157->GetZaxis()->SetLabelOffset(0.007);
   jet1_eta_total__157->GetZaxis()->SetLabelSize(0.05);
   jet1_eta_total__157->GetZaxis()->SetTitleSize(0.06);
   jet1_eta_total__157->GetZaxis()->SetTitleFont(42);
   jet1_eta_total__157->Draw("HIST");
   
   THStack *jet1_eta_stack = new THStack();
   jet1_eta_stack->SetName("jet1_eta_stack");
   jet1_eta_stack->SetTitle("jet1_eta");
   
   TH1F *jet1_eta_stack_stack_40 = new TH1F("jet1_eta_stack_stack_40","jet1_eta",20,-2.4,2.4);
   jet1_eta_stack_stack_40->SetMinimum(0);
   jet1_eta_stack_stack_40->SetMaximum(162.9683);
   jet1_eta_stack_stack_40->SetDirectory(0);
   jet1_eta_stack_stack_40->SetStats(0);
   jet1_eta_stack_stack_40->SetLineStyle(0);
   jet1_eta_stack_stack_40->SetMarkerStyle(20);
   jet1_eta_stack_stack_40->GetXaxis()->SetLabelFont(42);
   jet1_eta_stack_stack_40->GetXaxis()->SetLabelOffset(0.007);
   jet1_eta_stack_stack_40->GetXaxis()->SetLabelSize(0.05);
   jet1_eta_stack_stack_40->GetXaxis()->SetTitleSize(0.06);
   jet1_eta_stack_stack_40->GetXaxis()->SetTitleOffset(0.9);
   jet1_eta_stack_stack_40->GetXaxis()->SetTitleFont(42);
   jet1_eta_stack_stack_40->GetYaxis()->SetLabelFont(42);
   jet1_eta_stack_stack_40->GetYaxis()->SetLabelOffset(0.007);
   jet1_eta_stack_stack_40->GetYaxis()->SetLabelSize(0.05);
   jet1_eta_stack_stack_40->GetYaxis()->SetTitleSize(0.06);
   jet1_eta_stack_stack_40->GetYaxis()->SetTitleOffset(1.35);
   jet1_eta_stack_stack_40->GetYaxis()->SetTitleFont(42);
   jet1_eta_stack_stack_40->GetZaxis()->SetLabelFont(42);
   jet1_eta_stack_stack_40->GetZaxis()->SetLabelOffset(0.007);
   jet1_eta_stack_stack_40->GetZaxis()->SetLabelSize(0.05);
   jet1_eta_stack_stack_40->GetZaxis()->SetTitleSize(0.06);
   jet1_eta_stack_stack_40->GetZaxis()->SetTitleFont(42);
   jet1_eta_stack->SetHistogram(jet1_eta_stack_stack_40);
   
   
   TH1D *jet1_eta_fakes_VV_stack_1 = new TH1D("jet1_eta_fakes_VV_stack_1","dummy",20,-2.4,2.4);
   jet1_eta_fakes_VV_stack_1->SetBinContent(5,0.09719337);
   jet1_eta_fakes_VV_stack_1->SetBinContent(6,0.09719337);
   jet1_eta_fakes_VV_stack_1->SetBinContent(7,0.09719337);
   jet1_eta_fakes_VV_stack_1->SetBinContent(8,0.09719337);
   jet1_eta_fakes_VV_stack_1->SetBinContent(20,0.09719337);
   jet1_eta_fakes_VV_stack_1->SetBinError(5,0.09719337);
   jet1_eta_fakes_VV_stack_1->SetBinError(6,0.09719337);
   jet1_eta_fakes_VV_stack_1->SetBinError(7,0.09719337);
   jet1_eta_fakes_VV_stack_1->SetBinError(8,0.09719337);
   jet1_eta_fakes_VV_stack_1->SetBinError(20,0.09719337);
   jet1_eta_fakes_VV_stack_1->SetEntries(9);

   ci = TColor::GetColor("#2e3294");
   jet1_eta_fakes_VV_stack_1->SetFillColor(ci);
   jet1_eta_fakes_VV_stack_1->SetMarkerStyle(0);
   jet1_eta_fakes_VV_stack_1->SetMarkerSize(1.1);
   jet1_eta_fakes_VV_stack_1->GetXaxis()->SetTitle("p_{T}(leading jet) [GeV]");
   jet1_eta_fakes_VV_stack_1->GetXaxis()->SetMoreLogLabels();
   jet1_eta_fakes_VV_stack_1->GetXaxis()->SetLabelFont(42);
   jet1_eta_fakes_VV_stack_1->GetXaxis()->SetLabelOffset(0.007);
   jet1_eta_fakes_VV_stack_1->GetXaxis()->SetLabelSize(0.05);
   jet1_eta_fakes_VV_stack_1->GetXaxis()->SetTitleSize(0.06);
   jet1_eta_fakes_VV_stack_1->GetXaxis()->SetTitleOffset(0.9);
   jet1_eta_fakes_VV_stack_1->GetXaxis()->SetTitleFont(42);
   jet1_eta_fakes_VV_stack_1->GetYaxis()->SetTitle("Jets");
   jet1_eta_fakes_VV_stack_1->GetYaxis()->SetLabelFont(42);
   jet1_eta_fakes_VV_stack_1->GetYaxis()->SetLabelOffset(0.007);
   jet1_eta_fakes_VV_stack_1->GetYaxis()->SetLabelSize(0.05);
   jet1_eta_fakes_VV_stack_1->GetYaxis()->SetTitleSize(0.06);
   jet1_eta_fakes_VV_stack_1->GetYaxis()->SetTitleOffset(1.35);
   jet1_eta_fakes_VV_stack_1->GetYaxis()->SetTitleFont(42);
   jet1_eta_fakes_VV_stack_1->GetZaxis()->SetLabelFont(42);
   jet1_eta_fakes_VV_stack_1->GetZaxis()->SetLabelOffset(0.007);
   jet1_eta_fakes_VV_stack_1->GetZaxis()->SetLabelSize(0.05);
   jet1_eta_fakes_VV_stack_1->GetZaxis()->SetTitleSize(0.06);
   jet1_eta_fakes_VV_stack_1->GetZaxis()->SetTitleFont(42);
   jet1_eta_stack->Add(jet1_eta_fakes_VV_stack_1,"");
   
   TH1D *jet1_eta_fakes_TT_stack_2 = new TH1D("jet1_eta_fakes_TT_stack_2","dummy",20,-2.4,2.4);
   jet1_eta_fakes_TT_stack_2->SetBinContent(1,5.564675);
   jet1_eta_fakes_TT_stack_2->SetBinContent(2,1.595861);
   jet1_eta_fakes_TT_stack_2->SetBinContent(3,1.130402);
   jet1_eta_fakes_TT_stack_2->SetBinContent(4,1.396379);
   jet1_eta_fakes_TT_stack_2->SetBinContent(5,1.662356);
   jet1_eta_fakes_TT_stack_2->SetBinContent(6,2.306458);
   jet1_eta_fakes_TT_stack_2->SetBinContent(7,2.061321);
   jet1_eta_fakes_TT_stack_2->SetBinContent(8,2.659769);
   jet1_eta_fakes_TT_stack_2->SetBinContent(9,2.638929);
   jet1_eta_fakes_TT_stack_2->SetBinContent(10,2.659769);
   jet1_eta_fakes_TT_stack_2->SetBinContent(11,2.460286);
   jet1_eta_fakes_TT_stack_2->SetBinContent(12,3.058734);
   jet1_eta_fakes_TT_stack_2->SetBinContent(13,2.393792);
   jet1_eta_fakes_TT_stack_2->SetBinContent(14,3.170883);
   jet1_eta_fakes_TT_stack_2->SetBinContent(15,1.973987);
   jet1_eta_fakes_TT_stack_2->SetBinContent(16,1.774504);
   jet1_eta_fakes_TT_stack_2->SetBinContent(17,1.861838);
   jet1_eta_fakes_TT_stack_2->SetBinContent(18,2.106975);
   jet1_eta_fakes_TT_stack_2->SetBinContent(19,1.26339);
   jet1_eta_fakes_TT_stack_2->SetBinContent(20,7.447353);
   jet1_eta_fakes_TT_stack_2->SetBinError(1,0.6196626);
   jet1_eta_fakes_TT_stack_2->SetBinError(2,0.3257538);
   jet1_eta_fakes_TT_stack_2->SetBinError(3,0.2741627);
   jet1_eta_fakes_TT_stack_2->SetBinError(4,0.3047148);
   jet1_eta_fakes_TT_stack_2->SetBinError(5,0.3455141);
   jet1_eta_fakes_TT_stack_2->SetBinError(6,0.3981032);
   jet1_eta_fakes_TT_stack_2->SetBinError(7,0.3702242);
   jet1_eta_fakes_TT_stack_2->SetBinError(8,0.4205464);
   jet1_eta_fakes_TT_stack_2->SetBinError(9,0.424963);
   jet1_eta_fakes_TT_stack_2->SetBinError(10,0.4205464);
   jet1_eta_fakes_TT_stack_2->SetBinError(11,0.4044686);
   jet1_eta_fakes_TT_stack_2->SetBinError(12,0.4509858);
   jet1_eta_fakes_TT_stack_2->SetBinError(13,0.3989653);
   jet1_eta_fakes_TT_stack_2->SetBinError(14,0.4647208);
   jet1_eta_fakes_TT_stack_2->SetBinError(15,0.369295);
   jet1_eta_fakes_TT_stack_2->SetBinError(16,0.3508765);
   jet1_eta_fakes_TT_stack_2->SetBinError(17,0.3518544);
   jet1_eta_fakes_TT_stack_2->SetBinError(18,0.3810797);
   jet1_eta_fakes_TT_stack_2->SetBinError(19,0.3188951);
   jet1_eta_fakes_TT_stack_2->SetBinError(20,0.709964);
   jet1_eta_fakes_TT_stack_2->SetEntries(783);

   ci = TColor::GetColor("#666666");
   jet1_eta_fakes_TT_stack_2->SetFillColor(ci);
   jet1_eta_fakes_TT_stack_2->SetMarkerStyle(0);
   jet1_eta_fakes_TT_stack_2->SetMarkerSize(1.1);
   jet1_eta_fakes_TT_stack_2->GetXaxis()->SetTitle("p_{T}(leading jet) [GeV]");
   jet1_eta_fakes_TT_stack_2->GetXaxis()->SetMoreLogLabels();
   jet1_eta_fakes_TT_stack_2->GetXaxis()->SetLabelFont(42);
   jet1_eta_fakes_TT_stack_2->GetXaxis()->SetLabelOffset(0.007);
   jet1_eta_fakes_TT_stack_2->GetXaxis()->SetLabelSize(0.05);
   jet1_eta_fakes_TT_stack_2->GetXaxis()->SetTitleSize(0.06);
   jet1_eta_fakes_TT_stack_2->GetXaxis()->SetTitleOffset(0.9);
   jet1_eta_fakes_TT_stack_2->GetXaxis()->SetTitleFont(42);
   jet1_eta_fakes_TT_stack_2->GetYaxis()->SetTitle("Jets");
   jet1_eta_fakes_TT_stack_2->GetYaxis()->SetLabelFont(42);
   jet1_eta_fakes_TT_stack_2->GetYaxis()->SetLabelOffset(0.007);
   jet1_eta_fakes_TT_stack_2->GetYaxis()->SetLabelSize(0.05);
   jet1_eta_fakes_TT_stack_2->GetYaxis()->SetTitleSize(0.06);
   jet1_eta_fakes_TT_stack_2->GetYaxis()->SetTitleOffset(1.35);
   jet1_eta_fakes_TT_stack_2->GetYaxis()->SetTitleFont(42);
   jet1_eta_fakes_TT_stack_2->GetZaxis()->SetLabelFont(42);
   jet1_eta_fakes_TT_stack_2->GetZaxis()->SetLabelOffset(0.007);
   jet1_eta_fakes_TT_stack_2->GetZaxis()->SetLabelSize(0.05);
   jet1_eta_fakes_TT_stack_2->GetZaxis()->SetTitleSize(0.06);
   jet1_eta_fakes_TT_stack_2->GetZaxis()->SetTitleFont(42);
   jet1_eta_stack->Add(jet1_eta_fakes_TT_stack_2,"");
   
   TH1D *jet1_eta_fakes_DY_stack_3 = new TH1D("jet1_eta_fakes_DY_stack_3","dummy",20,-2.4,2.4);
   jet1_eta_fakes_DY_stack_3->SetBinContent(1,15.4757);
   jet1_eta_fakes_DY_stack_3->SetBinContent(4,3.439044);
   jet1_eta_fakes_DY_stack_3->SetBinContent(5,1.719522);
   jet1_eta_fakes_DY_stack_3->SetBinContent(6,5.158566);
   jet1_eta_fakes_DY_stack_3->SetBinContent(7,3.439044);
   jet1_eta_fakes_DY_stack_3->SetBinContent(9,5.158566);
   jet1_eta_fakes_DY_stack_3->SetBinContent(11,6.878088);
   jet1_eta_fakes_DY_stack_3->SetBinContent(12,1.719522);
   jet1_eta_fakes_DY_stack_3->SetBinContent(13,1.719522);
   jet1_eta_fakes_DY_stack_3->SetBinContent(14,1.719522);
   jet1_eta_fakes_DY_stack_3->SetBinContent(15,5.158566);
   jet1_eta_fakes_DY_stack_3->SetBinContent(16,3.439044);
   jet1_eta_fakes_DY_stack_3->SetBinContent(18,1.719522);
   jet1_eta_fakes_DY_stack_3->SetBinContent(19,5.158566);
   jet1_eta_fakes_DY_stack_3->SetBinContent(20,13.75618);
   jet1_eta_fakes_DY_stack_3->SetBinError(1,5.158566);
   jet1_eta_fakes_DY_stack_3->SetBinError(4,2.431771);
   jet1_eta_fakes_DY_stack_3->SetBinError(5,1.719522);
   jet1_eta_fakes_DY_stack_3->SetBinError(6,2.9783);
   jet1_eta_fakes_DY_stack_3->SetBinError(7,2.431771);
   jet1_eta_fakes_DY_stack_3->SetBinError(9,2.9783);
   jet1_eta_fakes_DY_stack_3->SetBinError(11,3.439044);
   jet1_eta_fakes_DY_stack_3->SetBinError(12,1.719522);
   jet1_eta_fakes_DY_stack_3->SetBinError(13,1.719522);
   jet1_eta_fakes_DY_stack_3->SetBinError(14,1.719522);
   jet1_eta_fakes_DY_stack_3->SetBinError(15,2.9783);
   jet1_eta_fakes_DY_stack_3->SetBinError(16,2.431771);
   jet1_eta_fakes_DY_stack_3->SetBinError(18,1.719522);
   jet1_eta_fakes_DY_stack_3->SetBinError(19,2.9783);
   jet1_eta_fakes_DY_stack_3->SetBinError(20,4.863543);
   jet1_eta_fakes_DY_stack_3->SetEntries(48);

   ci = TColor::GetColor("#cccccc");
   jet1_eta_fakes_DY_stack_3->SetFillColor(ci);
   jet1_eta_fakes_DY_stack_3->SetMarkerStyle(0);
   jet1_eta_fakes_DY_stack_3->SetMarkerSize(1.1);
   jet1_eta_fakes_DY_stack_3->GetXaxis()->SetTitle("p_{T}(leading jet) [GeV]");
   jet1_eta_fakes_DY_stack_3->GetXaxis()->SetMoreLogLabels();
   jet1_eta_fakes_DY_stack_3->GetXaxis()->SetLabelFont(42);
   jet1_eta_fakes_DY_stack_3->GetXaxis()->SetLabelOffset(0.007);
   jet1_eta_fakes_DY_stack_3->GetXaxis()->SetLabelSize(0.05);
   jet1_eta_fakes_DY_stack_3->GetXaxis()->SetTitleSize(0.06);
   jet1_eta_fakes_DY_stack_3->GetXaxis()->SetTitleOffset(0.9);
   jet1_eta_fakes_DY_stack_3->GetXaxis()->SetTitleFont(42);
   jet1_eta_fakes_DY_stack_3->GetYaxis()->SetTitle("Jets");
   jet1_eta_fakes_DY_stack_3->GetYaxis()->SetLabelFont(42);
   jet1_eta_fakes_DY_stack_3->GetYaxis()->SetLabelOffset(0.007);
   jet1_eta_fakes_DY_stack_3->GetYaxis()->SetLabelSize(0.05);
   jet1_eta_fakes_DY_stack_3->GetYaxis()->SetTitleSize(0.06);
   jet1_eta_fakes_DY_stack_3->GetYaxis()->SetTitleOffset(1.35);
   jet1_eta_fakes_DY_stack_3->GetYaxis()->SetTitleFont(42);
   jet1_eta_fakes_DY_stack_3->GetZaxis()->SetLabelFont(42);
   jet1_eta_fakes_DY_stack_3->GetZaxis()->SetLabelOffset(0.007);
   jet1_eta_fakes_DY_stack_3->GetZaxis()->SetLabelSize(0.05);
   jet1_eta_fakes_DY_stack_3->GetZaxis()->SetTitleSize(0.06);
   jet1_eta_fakes_DY_stack_3->GetZaxis()->SetTitleFont(42);
   jet1_eta_stack->Add(jet1_eta_fakes_DY_stack_3,"");
   
   TH1D *jet1_eta_prompt_ZZ_stack_4 = new TH1D("jet1_eta_prompt_ZZ_stack_4","dummy",20,-2.4,2.4);
   jet1_eta_prompt_ZZ_stack_4->SetBinContent(1,10.82564);
   jet1_eta_prompt_ZZ_stack_4->SetBinContent(2,1.100912);
   jet1_eta_prompt_ZZ_stack_4->SetBinContent(3,1.100912);
   jet1_eta_prompt_ZZ_stack_4->SetBinContent(4,1.651369);
   jet1_eta_prompt_ZZ_stack_4->SetBinContent(5,2.38531);
   jet1_eta_prompt_ZZ_stack_4->SetBinContent(6,1.467883);
   jet1_eta_prompt_ZZ_stack_4->SetBinContent(7,1.651369);
   jet1_eta_prompt_ZZ_stack_4->SetBinContent(8,1.467883);
   jet1_eta_prompt_ZZ_stack_4->SetBinContent(9,1.651369);
   jet1_eta_prompt_ZZ_stack_4->SetBinContent(10,2.38531);
   jet1_eta_prompt_ZZ_stack_4->SetBinContent(11,2.201825);
   jet1_eta_prompt_ZZ_stack_4->SetBinContent(12,3.669708);
   jet1_eta_prompt_ZZ_stack_4->SetBinContent(13,2.38531);
   jet1_eta_prompt_ZZ_stack_4->SetBinContent(14,1.651369);
   jet1_eta_prompt_ZZ_stack_4->SetBinContent(15,1.100912);
   jet1_eta_prompt_ZZ_stack_4->SetBinContent(16,1.284398);
   jet1_eta_prompt_ZZ_stack_4->SetBinContent(17,2.201825);
   jet1_eta_prompt_ZZ_stack_4->SetBinContent(18,2.201825);
   jet1_eta_prompt_ZZ_stack_4->SetBinContent(19,1.651369);
   jet1_eta_prompt_ZZ_stack_4->SetBinContent(20,9.541241);
   jet1_eta_prompt_ZZ_stack_4->SetBinError(1,1.409378);
   jet1_eta_prompt_ZZ_stack_4->SetBinError(2,0.4494456);
   jet1_eta_prompt_ZZ_stack_4->SetBinError(3,0.4494456);
   jet1_eta_prompt_ZZ_stack_4->SetBinError(4,0.5504562);
   jet1_eta_prompt_ZZ_stack_4->SetBinError(5,0.6615661);
   jet1_eta_prompt_ZZ_stack_4->SetBinError(6,0.5189751);
   jet1_eta_prompt_ZZ_stack_4->SetBinError(7,0.5504562);
   jet1_eta_prompt_ZZ_stack_4->SetBinError(8,0.5189751);
   jet1_eta_prompt_ZZ_stack_4->SetBinError(9,0.5504562);
   jet1_eta_prompt_ZZ_stack_4->SetBinError(10,0.6615661);
   jet1_eta_prompt_ZZ_stack_4->SetBinError(11,0.6356121);
   jet1_eta_prompt_ZZ_stack_4->SetBinError(12,0.8205717);
   jet1_eta_prompt_ZZ_stack_4->SetBinError(13,0.6615661);
   jet1_eta_prompt_ZZ_stack_4->SetBinError(14,0.5504562);
   jet1_eta_prompt_ZZ_stack_4->SetBinError(15,0.4494456);
   jet1_eta_prompt_ZZ_stack_4->SetBinError(16,0.4854568);
   jet1_eta_prompt_ZZ_stack_4->SetBinError(17,0.6356121);
   jet1_eta_prompt_ZZ_stack_4->SetBinError(18,0.6356121);
   jet1_eta_prompt_ZZ_stack_4->SetBinError(19,0.5504562);
   jet1_eta_prompt_ZZ_stack_4->SetBinError(20,1.323132);
   jet1_eta_prompt_ZZ_stack_4->SetEntries(296);

   ci = TColor::GetColor("#00cc00");
   jet1_eta_prompt_ZZ_stack_4->SetFillColor(ci);
   jet1_eta_prompt_ZZ_stack_4->SetMarkerStyle(0);
   jet1_eta_prompt_ZZ_stack_4->SetMarkerSize(1.1);
   jet1_eta_prompt_ZZ_stack_4->GetXaxis()->SetTitle("p_{T}(leading jet) [GeV]");
   jet1_eta_prompt_ZZ_stack_4->GetXaxis()->SetMoreLogLabels();
   jet1_eta_prompt_ZZ_stack_4->GetXaxis()->SetLabelFont(42);
   jet1_eta_prompt_ZZ_stack_4->GetXaxis()->SetLabelOffset(0.007);
   jet1_eta_prompt_ZZ_stack_4->GetXaxis()->SetLabelSize(0.05);
   jet1_eta_prompt_ZZ_stack_4->GetXaxis()->SetTitleSize(0.06);
   jet1_eta_prompt_ZZ_stack_4->GetXaxis()->SetTitleOffset(0.9);
   jet1_eta_prompt_ZZ_stack_4->GetXaxis()->SetTitleFont(42);
   jet1_eta_prompt_ZZ_stack_4->GetYaxis()->SetTitle("Jets");
   jet1_eta_prompt_ZZ_stack_4->GetYaxis()->SetLabelFont(42);
   jet1_eta_prompt_ZZ_stack_4->GetYaxis()->SetLabelOffset(0.007);
   jet1_eta_prompt_ZZ_stack_4->GetYaxis()->SetLabelSize(0.05);
   jet1_eta_prompt_ZZ_stack_4->GetYaxis()->SetTitleSize(0.06);
   jet1_eta_prompt_ZZ_stack_4->GetYaxis()->SetTitleOffset(1.35);
   jet1_eta_prompt_ZZ_stack_4->GetYaxis()->SetTitleFont(42);
   jet1_eta_prompt_ZZ_stack_4->GetZaxis()->SetLabelFont(42);
   jet1_eta_prompt_ZZ_stack_4->GetZaxis()->SetLabelOffset(0.007);
   jet1_eta_prompt_ZZ_stack_4->GetZaxis()->SetLabelSize(0.05);
   jet1_eta_prompt_ZZ_stack_4->GetZaxis()->SetTitleSize(0.06);
   jet1_eta_prompt_ZZ_stack_4->GetZaxis()->SetTitleFont(42);
   jet1_eta_stack->Add(jet1_eta_prompt_ZZ_stack_4,"");
   
   TH1D *jet1_eta_prompt_WZ_stack_5 = new TH1D("jet1_eta_prompt_WZ_stack_5","dummy",20,-2.4,2.4);
   jet1_eta_prompt_WZ_stack_5->SetBinContent(1,121.9239);
   jet1_eta_prompt_WZ_stack_5->SetBinContent(2,20.71259);
   jet1_eta_prompt_WZ_stack_5->SetBinContent(3,21.97886);
   jet1_eta_prompt_WZ_stack_5->SetBinContent(4,24.42096);
   jet1_eta_prompt_WZ_stack_5->SetBinContent(5,24.60185);
   jet1_eta_prompt_WZ_stack_5->SetBinContent(6,31.02366);
   jet1_eta_prompt_WZ_stack_5->SetBinContent(7,32.01859);
   jet1_eta_prompt_WZ_stack_5->SetBinContent(8,28.94336);
   jet1_eta_prompt_WZ_stack_5->SetBinContent(9,34.00844);
   jet1_eta_prompt_WZ_stack_5->SetBinContent(10,35.72696);
   jet1_eta_prompt_WZ_stack_5->SetBinContent(11,32.74217);
   jet1_eta_prompt_WZ_stack_5->SetBinContent(12,31.92814);
   jet1_eta_prompt_WZ_stack_5->SetBinContent(13,31.6568);
   jet1_eta_prompt_WZ_stack_5->SetBinContent(14,31.38545);
   jet1_eta_prompt_WZ_stack_5->SetBinContent(15,27.1344);
   jet1_eta_prompt_WZ_stack_5->SetBinContent(16,28.03888);
   jet1_eta_prompt_WZ_stack_5->SetBinContent(17,25.86813);
   jet1_eta_prompt_WZ_stack_5->SetBinContent(18,21.97886);
   jet1_eta_prompt_WZ_stack_5->SetBinContent(19,18.36094);
   jet1_eta_prompt_WZ_stack_5->SetBinContent(20,124.366);
   jet1_eta_prompt_WZ_stack_5->SetBinError(1,3.320809);
   jet1_eta_prompt_WZ_stack_5->SetBinError(2,1.368726);
   jet1_eta_prompt_WZ_stack_5->SetBinError(3,1.409945);
   jet1_eta_prompt_WZ_stack_5->SetBinError(4,1.486212);
   jet1_eta_prompt_WZ_stack_5->SetBinError(5,1.491706);
   jet1_eta_prompt_WZ_stack_5->SetBinError(6,1.67512);
   jet1_eta_prompt_WZ_stack_5->SetBinError(7,1.701769);
   jet1_eta_prompt_WZ_stack_5->SetBinError(8,1.617983);
   jet1_eta_prompt_WZ_stack_5->SetBinError(9,1.753852);
   jet1_eta_prompt_WZ_stack_5->SetBinError(10,1.797618);
   jet1_eta_prompt_WZ_stack_5->SetBinError(11,1.72089);
   jet1_eta_prompt_WZ_stack_5->SetBinError(12,1.699363);
   jet1_eta_prompt_WZ_stack_5->SetBinError(13,1.692127);
   jet1_eta_prompt_WZ_stack_5->SetBinError(14,1.684859);
   jet1_eta_prompt_WZ_stack_5->SetBinError(15,1.566605);
   jet1_eta_prompt_WZ_stack_5->SetBinError(16,1.592501);
   jet1_eta_prompt_WZ_stack_5->SetBinError(17,1.529614);
   jet1_eta_prompt_WZ_stack_5->SetBinError(18,1.409945);
   jet1_eta_prompt_WZ_stack_5->SetBinError(19,1.288685);
   jet1_eta_prompt_WZ_stack_5->SetBinError(20,3.353901);
   jet1_eta_prompt_WZ_stack_5->SetEntries(8283);

   ci = TColor::GetColor("#ffcc00");
   jet1_eta_prompt_WZ_stack_5->SetFillColor(ci);
   jet1_eta_prompt_WZ_stack_5->SetMarkerStyle(0);
   jet1_eta_prompt_WZ_stack_5->SetMarkerSize(1.1);
   jet1_eta_prompt_WZ_stack_5->GetXaxis()->SetTitle("p_{T}(leading jet) [GeV]");
   jet1_eta_prompt_WZ_stack_5->GetXaxis()->SetMoreLogLabels();
   jet1_eta_prompt_WZ_stack_5->GetXaxis()->SetLabelFont(42);
   jet1_eta_prompt_WZ_stack_5->GetXaxis()->SetLabelOffset(0.007);
   jet1_eta_prompt_WZ_stack_5->GetXaxis()->SetLabelSize(0.05);
   jet1_eta_prompt_WZ_stack_5->GetXaxis()->SetTitleSize(0.06);
   jet1_eta_prompt_WZ_stack_5->GetXaxis()->SetTitleOffset(0.9);
   jet1_eta_prompt_WZ_stack_5->GetXaxis()->SetTitleFont(42);
   jet1_eta_prompt_WZ_stack_5->GetYaxis()->SetTitle("Jets");
   jet1_eta_prompt_WZ_stack_5->GetYaxis()->SetLabelFont(42);
   jet1_eta_prompt_WZ_stack_5->GetYaxis()->SetLabelOffset(0.007);
   jet1_eta_prompt_WZ_stack_5->GetYaxis()->SetLabelSize(0.05);
   jet1_eta_prompt_WZ_stack_5->GetYaxis()->SetTitleSize(0.06);
   jet1_eta_prompt_WZ_stack_5->GetYaxis()->SetTitleOffset(1.35);
   jet1_eta_prompt_WZ_stack_5->GetYaxis()->SetTitleFont(42);
   jet1_eta_prompt_WZ_stack_5->GetZaxis()->SetLabelFont(42);
   jet1_eta_prompt_WZ_stack_5->GetZaxis()->SetLabelOffset(0.007);
   jet1_eta_prompt_WZ_stack_5->GetZaxis()->SetLabelSize(0.05);
   jet1_eta_prompt_WZ_stack_5->GetZaxis()->SetTitleSize(0.06);
   jet1_eta_prompt_WZ_stack_5->GetZaxis()->SetTitleFont(42);
   jet1_eta_stack->Add(jet1_eta_prompt_WZ_stack_5,"");
   jet1_eta_stack->Draw("same hist");
   
   TH1D *jet1_eta_total__158 = new TH1D("jet1_eta_total__158","dummy",20,-2.4,2.4);
   jet1_eta_total__158->SetBinContent(1,153.7899);
   jet1_eta_total__158->SetBinContent(2,23.40936);
   jet1_eta_total__158->SetBinContent(3,24.21018);
   jet1_eta_total__158->SetBinContent(4,30.90775);
   jet1_eta_total__158->SetBinContent(5,30.46623);
   jet1_eta_total__158->SetBinContent(6,40.05376);
   jet1_eta_total__158->SetBinContent(7,39.26752);
   jet1_eta_total__158->SetBinContent(8,33.1682);
   jet1_eta_total__158->SetBinContent(9,43.45731);
   jet1_eta_total__158->SetBinContent(10,40.77204);
   jet1_eta_total__158->SetBinContent(11,44.28237);
   jet1_eta_total__158->SetBinContent(12,40.37611);
   jet1_eta_total__158->SetBinContent(13,38.15542);
   jet1_eta_total__158->SetBinContent(14,37.92723);
   jet1_eta_total__158->SetBinContent(15,35.36786);
   jet1_eta_total__158->SetBinContent(16,34.53682);
   jet1_eta_total__158->SetBinContent(17,29.93179);
   jet1_eta_total__158->SetBinContent(18,28.00718);
   jet1_eta_total__158->SetBinContent(19,26.43427);
   jet1_eta_total__158->SetBinContent(20,155.208);
   jet1_eta_total__158->SetBinError(1,6.325259);
   jet1_eta_total__158->SetBinError(2,1.477);
   jet1_eta_total__158->SetBinError(3,1.505028);
   jet1_eta_total__158->SetBinError(4,2.918594);
   jet1_eta_total__158->SetBinError(5,2.397591);
   jet1_eta_total__158->SetBinError(6,3.480455);
   jet1_eta_total__158->SetBinError(7,3.042868);
   jet1_eta_total__158->SetBinError(8,1.753143);
   jet1_eta_total__158->SetBinError(9,3.525601);
   jet1_eta_total__158->SetBinError(10,1.961112);
   jet1_eta_total__158->SetBinError(11,3.918684);
   jet1_eta_total__158->SetBinError(12,2.592551);
   jet1_eta_total__158->SetBinError(13,2.533159);
   jet1_eta_total__158->SetBinError(14,2.512862);
   jet1_eta_total__158->SetBinError(15,3.415099);
   jet1_eta_total__158->SetBinError(16,2.967887);
   jet1_eta_total__158->SetBinError(17,1.693377);
   jet1_eta_total__158->SetBinError(18,2.343912);
   jet1_eta_total__158->SetBinError(19,3.306913);
   jet1_eta_total__158->SetBinError(20,6.096464);
   jet1_eta_total__158->SetMinimum(0);
   jet1_eta_total__158->SetMaximum(163.8492);
   jet1_eta_total__158->SetEntries(9419);
   jet1_eta_total__158->SetDirectory(0);

   ci = TColor::GetColor("#00cc00");
   jet1_eta_total__158->SetFillColor(ci);
   jet1_eta_total__158->SetMarkerStyle(20);
   jet1_eta_total__158->SetMarkerSize(1.1);
   jet1_eta_total__158->GetXaxis()->SetTitle("p_{T}(leading jet) [GeV]");
   jet1_eta_total__158->GetXaxis()->SetMoreLogLabels();
   jet1_eta_total__158->GetXaxis()->SetLabelFont(42);
   jet1_eta_total__158->GetXaxis()->SetLabelOffset(999);
   jet1_eta_total__158->GetXaxis()->SetLabelSize(0.05);
   jet1_eta_total__158->GetXaxis()->SetTitleSize(0.05);
   jet1_eta_total__158->GetXaxis()->SetTitleOffset(999);
   jet1_eta_total__158->GetXaxis()->SetTitleFont(42);
   jet1_eta_total__158->GetYaxis()->SetTitle("Jets");
   jet1_eta_total__158->GetYaxis()->SetLabelFont(42);
   jet1_eta_total__158->GetYaxis()->SetLabelOffset(0.007);
   jet1_eta_total__158->GetYaxis()->SetLabelSize(0.05);
   jet1_eta_total__158->GetYaxis()->SetTitleSize(0.06);
   jet1_eta_total__158->GetYaxis()->SetTitleOffset(1.48);
   jet1_eta_total__158->GetYaxis()->SetTitleFont(42);
   jet1_eta_total__158->GetZaxis()->SetLabelFont(42);
   jet1_eta_total__158->GetZaxis()->SetLabelOffset(0.007);
   jet1_eta_total__158->GetZaxis()->SetLabelSize(0.05);
   jet1_eta_total__158->GetZaxis()->SetTitleSize(0.06);
   jet1_eta_total__158->GetZaxis()->SetTitleFont(42);
   jet1_eta_total__158->Draw("AXIS SAME");
   
   Double_t jet1_eta_total_errors_fx3196[20] = {
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
   Double_t jet1_eta_total_errors_fy3196[20] = {
   153.7899,
   23.40936,
   24.21018,
   30.90775,
   30.46623,
   40.05376,
   39.26752,
   33.1682,
   43.45731,
   40.77204,
   44.28237,
   40.37611,
   38.15542,
   37.92723,
   35.36786,
   34.53682,
   29.93179,
   28.00718,
   26.43427,
   155.208};
   Double_t jet1_eta_total_errors_felx3196[20] = {
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
   Double_t jet1_eta_total_errors_fely3196[20] = {
   6.325259,
   1.477,
   1.505028,
   2.918594,
   2.397591,
   3.480455,
   3.042868,
   1.753143,
   3.525601,
   1.961112,
   3.918684,
   2.592551,
   2.533159,
   2.512862,
   3.415099,
   2.967887,
   1.693377,
   2.343912,
   3.306913,
   6.096464};
   Double_t jet1_eta_total_errors_fehx3196[20] = {
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
   Double_t jet1_eta_total_errors_fehy3196[20] = {
   6.325259,
   1.477,
   1.505028,
   2.918594,
   2.397591,
   3.480455,
   3.042868,
   1.753143,
   3.525601,
   1.961112,
   3.918684,
   2.592551,
   2.533159,
   2.512862,
   3.415099,
   2.967887,
   1.693377,
   2.343912,
   3.306913,
   6.096464};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(20,jet1_eta_total_errors_fx3196,jet1_eta_total_errors_fy3196,jet1_eta_total_errors_felx3196,jet1_eta_total_errors_fehx3196,jet1_eta_total_errors_fely3196,jet1_eta_total_errors_fehy3196);
   grae->SetName("jet1_eta_total_errors");
   grae->SetTitle("Graph");
   grae->SetFillColor(1);
   grae->SetFillStyle(3013);
   grae->SetMarkerStyle(0);
   
   TH1F *Graph_jet1_eta_total_errors3196 = new TH1F("Graph_jet1_eta_total_errors3196","Graph",100,-2.88,2.88);
   Graph_jet1_eta_total_errors3196->SetMinimum(7.995158);
   Graph_jet1_eta_total_errors3196->SetMaximum(175.2416);
   Graph_jet1_eta_total_errors3196->SetDirectory(0);
   Graph_jet1_eta_total_errors3196->SetStats(0);
   Graph_jet1_eta_total_errors3196->SetLineStyle(0);
   Graph_jet1_eta_total_errors3196->SetMarkerStyle(20);
   Graph_jet1_eta_total_errors3196->GetXaxis()->SetLabelFont(42);
   Graph_jet1_eta_total_errors3196->GetXaxis()->SetLabelOffset(0.007);
   Graph_jet1_eta_total_errors3196->GetXaxis()->SetLabelSize(0.05);
   Graph_jet1_eta_total_errors3196->GetXaxis()->SetTitleSize(0.06);
   Graph_jet1_eta_total_errors3196->GetXaxis()->SetTitleOffset(0.9);
   Graph_jet1_eta_total_errors3196->GetXaxis()->SetTitleFont(42);
   Graph_jet1_eta_total_errors3196->GetYaxis()->SetLabelFont(42);
   Graph_jet1_eta_total_errors3196->GetYaxis()->SetLabelOffset(0.007);
   Graph_jet1_eta_total_errors3196->GetYaxis()->SetLabelSize(0.05);
   Graph_jet1_eta_total_errors3196->GetYaxis()->SetTitleSize(0.06);
   Graph_jet1_eta_total_errors3196->GetYaxis()->SetTitleOffset(1.35);
   Graph_jet1_eta_total_errors3196->GetYaxis()->SetTitleFont(42);
   Graph_jet1_eta_total_errors3196->GetZaxis()->SetLabelFont(42);
   Graph_jet1_eta_total_errors3196->GetZaxis()->SetLabelOffset(0.007);
   Graph_jet1_eta_total_errors3196->GetZaxis()->SetLabelSize(0.05);
   Graph_jet1_eta_total_errors3196->GetZaxis()->SetTitleSize(0.06);
   Graph_jet1_eta_total_errors3196->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_jet1_eta_total_errors3196);
   
   grae->Draw("pe2 ");
   
   Double_t jet1_eta_data_graph_fx3197[20] = {
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
   Double_t jet1_eta_data_graph_fy3197[20] = {
   106,
   28,
   42,
   38,
   49,
   53,
   51,
   50,
   55,
   64,
   59,
   46,
   44,
   51,
   53,
   58,
   34,
   35,
   29,
   111};
   Double_t jet1_eta_data_graph_felx3197[20] = {
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
   Double_t jet1_eta_data_graph_fely3197[20] = {
   10.27958,
   5.259811,
   6.454957,
   6.137282,
   6.976163,
   7.257208,
   7.118073,
   7.047476,
   7.393726,
   7.979201,
   7.659464,
   6.757713,
   6.608069,
   7.118073,
   7.257208,
   7.593901,
   5.80224,
   5.887788,
   5.354034,
   10.51998};
   Double_t jet1_eta_data_graph_fehx3197[20] = {
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
   Double_t jet1_eta_data_graph_fehy3197[20] = {
   11.32827,
   6.354577,
   7.532337,
   7.218633,
   8.047802,
   8.326089,
   8.188292,
   8.118394,
   8.461342,
   9.041881,
   8.724747,
   7.831652,
   7.68367,
   8.188292,
   8.326089,
   8.659745,
   6.888243,
   6.972554,
   6.447153,
   11.56756};
   grae = new TGraphAsymmErrors(20,jet1_eta_data_graph_fx3197,jet1_eta_data_graph_fy3197,jet1_eta_data_graph_felx3197,jet1_eta_data_graph_fehx3197,jet1_eta_data_graph_fely3197,jet1_eta_data_graph_fehy3197);
   grae->SetName("jet1_eta_data_graph");
   grae->SetTitle("Graph");
   grae->SetFillStyle(1000);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.1);
   
   TH1F *Graph_jet1_eta_data_graph3197 = new TH1F("Graph_jet1_eta_data_graph3197","Graph",100,-2.88,2.88);
   Graph_jet1_eta_data_graph3197->SetMinimum(12.75745);
   Graph_jet1_eta_data_graph3197->SetMaximum(132.5503);
   Graph_jet1_eta_data_graph3197->SetDirectory(0);
   Graph_jet1_eta_data_graph3197->SetStats(0);
   Graph_jet1_eta_data_graph3197->SetLineStyle(0);
   Graph_jet1_eta_data_graph3197->SetMarkerStyle(20);
   Graph_jet1_eta_data_graph3197->GetXaxis()->SetLabelFont(42);
   Graph_jet1_eta_data_graph3197->GetXaxis()->SetLabelOffset(0.007);
   Graph_jet1_eta_data_graph3197->GetXaxis()->SetLabelSize(0.05);
   Graph_jet1_eta_data_graph3197->GetXaxis()->SetTitleSize(0.06);
   Graph_jet1_eta_data_graph3197->GetXaxis()->SetTitleOffset(0.9);
   Graph_jet1_eta_data_graph3197->GetXaxis()->SetTitleFont(42);
   Graph_jet1_eta_data_graph3197->GetYaxis()->SetLabelFont(42);
   Graph_jet1_eta_data_graph3197->GetYaxis()->SetLabelOffset(0.007);
   Graph_jet1_eta_data_graph3197->GetYaxis()->SetLabelSize(0.05);
   Graph_jet1_eta_data_graph3197->GetYaxis()->SetTitleSize(0.06);
   Graph_jet1_eta_data_graph3197->GetYaxis()->SetTitleOffset(1.35);
   Graph_jet1_eta_data_graph3197->GetYaxis()->SetTitleFont(42);
   Graph_jet1_eta_data_graph3197->GetZaxis()->SetLabelFont(42);
   Graph_jet1_eta_data_graph3197->GetZaxis()->SetLabelOffset(0.007);
   Graph_jet1_eta_data_graph3197->GetZaxis()->SetLabelSize(0.05);
   Graph_jet1_eta_data_graph3197->GetZaxis()->SetTitleSize(0.06);
   Graph_jet1_eta_data_graph3197->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_jet1_eta_data_graph3197);
   
   grae->Draw("pz ");
   
   TLegend *leg = new TLegend(0.62,0.628,0.9,0.91,NULL,"brNDC");
   leg->SetBorderSize(1);
   leg->SetTextSize(0.036);
   leg->SetLineColor(0);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("jet1_eta_data","Data","LPE");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1.1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("jet1_eta_prompt_WZ_stack_5","WZ","F");

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
   entry=leg->AddEntry("jet1_eta_prompt_ZZ_stack_4","qqZZ","F");

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
   entry=leg->AddEntry("jet1_eta_fakes_DY_stack_3","Fakes DY","F");

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
   entry=leg->AddEntry("jet1_eta_fakes_TT_stack_2","Fakes TT","F");

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
   entry=leg->AddEntry("jet1_eta_total_errors","Total unc.","F");
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
   jet1_eta_canvas->cd();
  
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
   
   TH1D *jet1_eta_total__159 = new TH1D("jet1_eta_total__159","dummy",20,-2.4,2.4);
   jet1_eta_total__159->SetBinContent(1,1);
   jet1_eta_total__159->SetBinContent(2,1);
   jet1_eta_total__159->SetBinContent(3,1);
   jet1_eta_total__159->SetBinContent(4,1);
   jet1_eta_total__159->SetBinContent(5,1);
   jet1_eta_total__159->SetBinContent(6,1);
   jet1_eta_total__159->SetBinContent(7,1);
   jet1_eta_total__159->SetBinContent(8,1);
   jet1_eta_total__159->SetBinContent(9,1);
   jet1_eta_total__159->SetBinContent(10,1);
   jet1_eta_total__159->SetBinContent(11,1);
   jet1_eta_total__159->SetBinContent(12,1);
   jet1_eta_total__159->SetBinContent(13,1);
   jet1_eta_total__159->SetBinContent(14,1);
   jet1_eta_total__159->SetBinContent(15,1);
   jet1_eta_total__159->SetBinContent(16,1);
   jet1_eta_total__159->SetBinContent(17,1);
   jet1_eta_total__159->SetBinContent(18,1);
   jet1_eta_total__159->SetBinContent(19,1);
   jet1_eta_total__159->SetBinContent(20,1);
   jet1_eta_total__159->SetMinimum(0.5);
   jet1_eta_total__159->SetMaximum(2);
   jet1_eta_total__159->SetEntries(9439);

   ci = TColor::GetColor("#00cc00");
   jet1_eta_total__159->SetFillColor(ci);

   ci = TColor::GetColor("#6666ff");
   jet1_eta_total__159->SetMarkerColor(ci);
   jet1_eta_total__159->SetMarkerSize(1.1);
   jet1_eta_total__159->GetXaxis()->SetTitle("p_{T}(leading jet) [GeV]");
   jet1_eta_total__159->GetXaxis()->SetMoreLogLabels();
   jet1_eta_total__159->GetXaxis()->SetLabelFont(42);
   jet1_eta_total__159->GetXaxis()->SetLabelOffset(0.015);
   jet1_eta_total__159->GetXaxis()->SetLabelSize(0.1);
   jet1_eta_total__159->GetXaxis()->SetTitleSize(0.14);
   jet1_eta_total__159->GetXaxis()->SetTitleFont(42);
   jet1_eta_total__159->GetYaxis()->SetTitle("Data/pred.");
   jet1_eta_total__159->GetYaxis()->SetDecimals();
   jet1_eta_total__159->GetYaxis()->SetNdivisions(505);
   jet1_eta_total__159->GetYaxis()->SetLabelFont(42);
   jet1_eta_total__159->GetYaxis()->SetLabelOffset(0.01);
   jet1_eta_total__159->GetYaxis()->SetLabelSize(0.11);
   jet1_eta_total__159->GetYaxis()->SetTitleSize(0.14);
   jet1_eta_total__159->GetYaxis()->SetTitleOffset(0.62);
   jet1_eta_total__159->GetYaxis()->SetTitleFont(42);
   jet1_eta_total__159->GetZaxis()->SetLabelFont(42);
   jet1_eta_total__159->GetZaxis()->SetLabelOffset(0.007);
   jet1_eta_total__159->GetZaxis()->SetLabelSize(0.05);
   jet1_eta_total__159->GetZaxis()->SetTitleSize(0.06);
   jet1_eta_total__159->GetZaxis()->SetTitleFont(42);
   jet1_eta_total__159->Draw("AXIS");
   
   Double_t jet1_eta_total_errors_fx3198[20] = {
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
   Double_t jet1_eta_total_errors_fy3198[20] = {
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
   Double_t jet1_eta_total_errors_felx3198[20] = {
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
   Double_t jet1_eta_total_errors_fely3198[20] = {
   0.04112922,
   0.06309441,
   0.06216512,
   0.09442921,
   0.07869665,
   0.08689458,
   0.07749071,
   0.05285613,
   0.08112791,
   0.04809944,
   0.0884931,
   0.06421002,
   0.06639053,
   0.06625483,
   0.09655938,
   0.085934,
   0.05657452,
   0.08368968,
   0.1250995,
   0.03927933};
   Double_t jet1_eta_total_errors_fehx3198[20] = {
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
   Double_t jet1_eta_total_errors_fehy3198[20] = {
   0.04112922,
   0.06309441,
   0.06216512,
   0.09442921,
   0.07869665,
   0.08689458,
   0.07749071,
   0.05285613,
   0.08112791,
   0.04809944,
   0.0884931,
   0.06421002,
   0.06639053,
   0.06625483,
   0.09655938,
   0.085934,
   0.05657452,
   0.08368968,
   0.1250995,
   0.03927933};
   grae = new TGraphAsymmErrors(20,jet1_eta_total_errors_fx3198,jet1_eta_total_errors_fy3198,jet1_eta_total_errors_felx3198,jet1_eta_total_errors_fehx3198,jet1_eta_total_errors_fely3198,jet1_eta_total_errors_fehy3198);
   grae->SetName("jet1_eta_total_errors");
   grae->SetTitle("Graph");

   ci = TColor::GetColor("#00ffff");
   grae->SetFillColor(ci);

   ci = TColor::GetColor("#00ffff");
   grae->SetMarkerColor(ci);
   grae->Draw("e2");
   
   Double_t jet1_eta_total_errors_fx3199[20] = {
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
   Double_t jet1_eta_total_errors_fy3199[20] = {
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
   Double_t jet1_eta_total_errors_felx3199[20] = {
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
   Double_t jet1_eta_total_errors_fely3199[20] = {
   0.04112922,
   0.06309441,
   0.06216512,
   0.09442921,
   0.07869665,
   0.08689458,
   0.07749071,
   0.05285613,
   0.08112791,
   0.04809944,
   0.0884931,
   0.06421002,
   0.06639053,
   0.06625483,
   0.09655938,
   0.085934,
   0.05657452,
   0.08368968,
   0.1250995,
   0.03927933};
   Double_t jet1_eta_total_errors_fehx3199[20] = {
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
   Double_t jet1_eta_total_errors_fehy3199[20] = {
   0.04112922,
   0.06309441,
   0.06216512,
   0.09442921,
   0.07869665,
   0.08689458,
   0.07749071,
   0.05285613,
   0.08112791,
   0.04809944,
   0.0884931,
   0.06421002,
   0.06639053,
   0.06625483,
   0.09655938,
   0.085934,
   0.05657452,
   0.08368968,
   0.1250995,
   0.03927933};
   grae = new TGraphAsymmErrors(20,jet1_eta_total_errors_fx3199,jet1_eta_total_errors_fy3199,jet1_eta_total_errors_felx3199,jet1_eta_total_errors_fehx3199,jet1_eta_total_errors_fely3199,jet1_eta_total_errors_fehy3199);
   grae->SetName("jet1_eta_total_errors");
   grae->SetTitle("Graph");

   ci = TColor::GetColor("#6666ff");
   grae->SetFillColor(ci);

   ci = TColor::GetColor("#6666ff");
   grae->SetMarkerColor(ci);
   grae->Draw("e2 ");
   
   TH1D *jet1_eta_total__160 = new TH1D("jet1_eta_total__160","dummy",20,-2.4,2.4);
   jet1_eta_total__160->SetBinContent(1,1);
   jet1_eta_total__160->SetBinContent(2,1);
   jet1_eta_total__160->SetBinContent(3,1);
   jet1_eta_total__160->SetBinContent(4,1);
   jet1_eta_total__160->SetBinContent(5,1);
   jet1_eta_total__160->SetBinContent(6,1);
   jet1_eta_total__160->SetBinContent(7,1);
   jet1_eta_total__160->SetBinContent(8,1);
   jet1_eta_total__160->SetBinContent(9,1);
   jet1_eta_total__160->SetBinContent(10,1);
   jet1_eta_total__160->SetBinContent(11,1);
   jet1_eta_total__160->SetBinContent(12,1);
   jet1_eta_total__160->SetBinContent(13,1);
   jet1_eta_total__160->SetBinContent(14,1);
   jet1_eta_total__160->SetBinContent(15,1);
   jet1_eta_total__160->SetBinContent(16,1);
   jet1_eta_total__160->SetBinContent(17,1);
   jet1_eta_total__160->SetBinContent(18,1);
   jet1_eta_total__160->SetBinContent(19,1);
   jet1_eta_total__160->SetBinContent(20,1);
   jet1_eta_total__160->SetMinimum(0.5);
   jet1_eta_total__160->SetMaximum(2);
   jet1_eta_total__160->SetEntries(9439);

   ci = TColor::GetColor("#00cc00");
   jet1_eta_total__160->SetFillColor(ci);

   ci = TColor::GetColor("#6666ff");
   jet1_eta_total__160->SetMarkerColor(ci);
   jet1_eta_total__160->SetMarkerSize(1.1);
   jet1_eta_total__160->GetXaxis()->SetTitle("p_{T}(leading jet) [GeV]");
   jet1_eta_total__160->GetXaxis()->SetMoreLogLabels();
   jet1_eta_total__160->GetXaxis()->SetLabelFont(42);
   jet1_eta_total__160->GetXaxis()->SetLabelOffset(0.015);
   jet1_eta_total__160->GetXaxis()->SetLabelSize(0.1);
   jet1_eta_total__160->GetXaxis()->SetTitleSize(0.14);
   jet1_eta_total__160->GetXaxis()->SetTitleFont(42);
   jet1_eta_total__160->GetYaxis()->SetTitle("Data/pred.");
   jet1_eta_total__160->GetYaxis()->SetDecimals();
   jet1_eta_total__160->GetYaxis()->SetNdivisions(505);
   jet1_eta_total__160->GetYaxis()->SetLabelFont(42);
   jet1_eta_total__160->GetYaxis()->SetLabelOffset(0.01);
   jet1_eta_total__160->GetYaxis()->SetLabelSize(0.11);
   jet1_eta_total__160->GetYaxis()->SetTitleSize(0.14);
   jet1_eta_total__160->GetYaxis()->SetTitleOffset(0.62);
   jet1_eta_total__160->GetYaxis()->SetTitleFont(42);
   jet1_eta_total__160->GetZaxis()->SetLabelFont(42);
   jet1_eta_total__160->GetZaxis()->SetLabelOffset(0.007);
   jet1_eta_total__160->GetZaxis()->SetLabelSize(0.05);
   jet1_eta_total__160->GetZaxis()->SetTitleSize(0.06);
   jet1_eta_total__160->GetZaxis()->SetTitleFont(42);
   jet1_eta_total__160->Draw("AXIS SAME");
   TLine *line = new TLine(-2.4,1,2.4,1);
   line->SetLineColor(58);
   line->SetLineWidth(2);
   line->Draw();
   
   Double_t data_div_fx3200[20] = {
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
   Double_t data_div_fy3200[20] = {
   0.689252,
   1.196103,
   1.734808,
   1.229465,
   1.608338,
   1.323222,
   1.298783,
   1.507468,
   1.26561,
   1.569703,
   1.332359,
   1.139288,
   1.153178,
   1.34468,
   1.498536,
   1.679367,
   1.135916,
   1.249679,
   1.097061,
   0.7151695};
   Double_t data_div_felx3200[20] = {
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
   Double_t data_div_fely3200[20] = {
   0.06684169,
   0.2246883,
   0.2666216,
   0.1985677,
   0.2289802,
   0.1811867,
   0.1812713,
   0.2124769,
   0.1701377,
   0.1957028,
   0.1729687,
   0.1673691,
   0.1731882,
   0.1876771,
   0.2051922,
   0.2198784,
   0.1938488,
   0.2102242,
   0.2025414,
   0.06777989};
   Double_t data_div_fehx3200[20] = {
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
   Double_t data_div_fehy3200[20] = {
   0.0736607,
   0.2714545,
   0.3111228,
   0.2335542,
   0.2641548,
   0.2078728,
   0.2085259,
   0.2447644,
   0.1947047,
   0.2217667,
   0.1970253,
   0.1939675,
   0.2013782,
   0.2158948,
   0.235414,
   0.2507395,
   0.2301314,
   0.2489559,
   0.2438938,
   0.07452945};
   grae = new TGraphAsymmErrors(20,data_div_fx3200,data_div_fy3200,data_div_felx3200,data_div_fehx3200,data_div_fely3200,data_div_fehy3200);
   grae->SetName("data_div");
   grae->SetTitle("Graph");
   grae->SetFillStyle(1000);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.1);
   
   TH1F *Graph_jet1_eta_data_graph3200 = new TH1F("Graph_jet1_eta_data_graph3200","Graph",100,-2.88,2.88);
   Graph_jet1_eta_data_graph3200->SetMinimum(12.75745);
   Graph_jet1_eta_data_graph3200->SetMaximum(132.5503);
   Graph_jet1_eta_data_graph3200->SetDirectory(0);
   Graph_jet1_eta_data_graph3200->SetStats(0);
   Graph_jet1_eta_data_graph3200->SetLineStyle(0);
   Graph_jet1_eta_data_graph3200->SetMarkerStyle(20);
   Graph_jet1_eta_data_graph3200->GetXaxis()->SetLabelFont(42);
   Graph_jet1_eta_data_graph3200->GetXaxis()->SetLabelOffset(0.007);
   Graph_jet1_eta_data_graph3200->GetXaxis()->SetLabelSize(0.05);
   Graph_jet1_eta_data_graph3200->GetXaxis()->SetTitleSize(0.06);
   Graph_jet1_eta_data_graph3200->GetXaxis()->SetTitleOffset(0.9);
   Graph_jet1_eta_data_graph3200->GetXaxis()->SetTitleFont(42);
   Graph_jet1_eta_data_graph3200->GetYaxis()->SetLabelFont(42);
   Graph_jet1_eta_data_graph3200->GetYaxis()->SetLabelOffset(0.007);
   Graph_jet1_eta_data_graph3200->GetYaxis()->SetLabelSize(0.05);
   Graph_jet1_eta_data_graph3200->GetYaxis()->SetTitleSize(0.06);
   Graph_jet1_eta_data_graph3200->GetYaxis()->SetTitleOffset(1.35);
   Graph_jet1_eta_data_graph3200->GetYaxis()->SetTitleFont(42);
   Graph_jet1_eta_data_graph3200->GetZaxis()->SetLabelFont(42);
   Graph_jet1_eta_data_graph3200->GetZaxis()->SetLabelOffset(0.007);
   Graph_jet1_eta_data_graph3200->GetZaxis()->SetLabelSize(0.05);
   Graph_jet1_eta_data_graph3200->GetZaxis()->SetTitleSize(0.06);
   Graph_jet1_eta_data_graph3200->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_jet1_eta_data_graph3200);
   
   grae->Draw("pz ");
   
   leg = new TLegend(0,0,0,0,NULL,"brNDC");
   leg->SetBorderSize(1);
   leg->SetTextSize(0.084);
   leg->SetLineColor(0);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   entry=leg->AddEntry("jet1_eta_total_errors","stat. unc.","F");
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
   entry=leg->AddEntry("jet1_eta_total_errors","total unc.","F");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   leg->Draw();
   pad2->Modified();
   jet1_eta_canvas->cd();
   jet1_eta_canvas->Modified();
   jet1_eta_canvas->cd();
   jet1_eta_canvas->SetSelected(jet1_eta_canvas);
}
