void lep2_pt()
{
//=========Macro generated from canvas: lep2_pt_canvas/lep2_pt
//=========  (Thu Dec 15 18:41:11 2022) by ROOT version 6.12/07
   TCanvas *lep2_pt_canvas = new TCanvas("lep2_pt_canvas", "lep2_pt",0,0,600,750);
   gStyle->SetOptFit(1);
   gStyle->SetOptStat(0);
   gStyle->SetOptTitle(0);
   lep2_pt_canvas->SetHighLightColor(2);
   lep2_pt_canvas->Range(0,0,1,1);
   lep2_pt_canvas->SetFillColor(0);
   lep2_pt_canvas->SetBorderMode(0);
   lep2_pt_canvas->SetBorderSize(2);
   lep2_pt_canvas->SetTickx(1);
   lep2_pt_canvas->SetTicky(1);
   lep2_pt_canvas->SetLeftMargin(0.18);
   lep2_pt_canvas->SetRightMargin(0.04);
   lep2_pt_canvas->SetBottomMargin(0.13);
   lep2_pt_canvas->SetFrameFillStyle(0);
   lep2_pt_canvas->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: pad1
   TPad *pad1 = new TPad("pad1", "pad1",0,0.3,1,1);
   pad1->Draw();
   pad1->cd();
   pad1->Range(-46.15385,-27.59605,210.2564,1076.246);
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
   
   TH1D *lep2_pt_total__189 = new TH1D("lep2_pt_total__189","dummy",20,0,200);
   lep2_pt_total__189->SetBinContent(3,108.5167);
   lep2_pt_total__189->SetBinContent(4,404.0062);
   lep2_pt_total__189->SetBinContent(5,402.5016);
   lep2_pt_total__189->SetBinContent(6,220.7801);
   lep2_pt_total__189->SetBinContent(7,124.7939);
   lep2_pt_total__189->SetBinContent(8,76.66794);
   lep2_pt_total__189->SetBinContent(9,46.25192);
   lep2_pt_total__189->SetBinContent(10,34.1157);
   lep2_pt_total__189->SetBinContent(11,18.83352);
   lep2_pt_total__189->SetBinContent(12,15.43413);
   lep2_pt_total__189->SetBinContent(13,11.64984);
   lep2_pt_total__189->SetBinContent(14,6.286041);
   lep2_pt_total__189->SetBinContent(15,5.631541);
   lep2_pt_total__189->SetBinContent(16,4.588894);
   lep2_pt_total__189->SetBinContent(17,3.261307);
   lep2_pt_total__189->SetBinContent(18,3.256128);
   lep2_pt_total__189->SetBinContent(19,1.513662);
   lep2_pt_total__189->SetBinContent(20,7.855379);
   lep2_pt_total__189->SetBinError(3,6.607144);
   lep2_pt_total__189->SetBinError(4,10.52375);
   lep2_pt_total__189->SetBinError(5,9.396406);
   lep2_pt_total__189->SetBinError(6,5.136637);
   lep2_pt_total__189->SetBinError(7,5.075909);
   lep2_pt_total__189->SetBinError(8,3.581369);
   lep2_pt_total__189->SetBinError(9,2.111044);
   lep2_pt_total__189->SetBinError(10,2.983566);
   lep2_pt_total__189->SetBinError(11,1.376795);
   lep2_pt_total__189->SetBinError(12,1.205929);
   lep2_pt_total__189->SetBinError(13,1.9787);
   lep2_pt_total__189->SetBinError(14,0.763181);
   lep2_pt_total__189->SetBinError(15,0.733979);
   lep2_pt_total__189->SetBinError(16,0.6430112);
   lep2_pt_total__189->SetBinError(17,0.5736904);
   lep2_pt_total__189->SetBinError(18,0.5426879);
   lep2_pt_total__189->SetBinError(19,0.3678517);
   lep2_pt_total__189->SetBinError(20,0.8815864);
   lep2_pt_total__189->SetMinimum(0);
   lep2_pt_total__189->SetMaximum(1010.016);
   lep2_pt_total__189->SetEntries(15152);
   lep2_pt_total__189->SetDirectory(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#00cc00");
   lep2_pt_total__189->SetFillColor(ci);
   lep2_pt_total__189->SetMarkerStyle(20);
   lep2_pt_total__189->SetMarkerSize(1.1);
   lep2_pt_total__189->GetXaxis()->SetTitle("p_{T}(l2) [GeV]");
   lep2_pt_total__189->GetXaxis()->SetMoreLogLabels();
   lep2_pt_total__189->GetXaxis()->SetLabelFont(42);
   lep2_pt_total__189->GetXaxis()->SetLabelOffset(999);
   lep2_pt_total__189->GetXaxis()->SetLabelSize(0.05);
   lep2_pt_total__189->GetXaxis()->SetTitleSize(0.05);
   lep2_pt_total__189->GetXaxis()->SetTitleOffset(999);
   lep2_pt_total__189->GetXaxis()->SetTitleFont(42);
   lep2_pt_total__189->GetYaxis()->SetTitle("Events");
   lep2_pt_total__189->GetYaxis()->SetLabelFont(42);
   lep2_pt_total__189->GetYaxis()->SetLabelOffset(0.007);
   lep2_pt_total__189->GetYaxis()->SetLabelSize(0.05);
   lep2_pt_total__189->GetYaxis()->SetTitleSize(0.06);
   lep2_pt_total__189->GetYaxis()->SetTitleOffset(1.48);
   lep2_pt_total__189->GetYaxis()->SetTitleFont(42);
   lep2_pt_total__189->GetZaxis()->SetLabelFont(42);
   lep2_pt_total__189->GetZaxis()->SetLabelOffset(0.007);
   lep2_pt_total__189->GetZaxis()->SetLabelSize(0.05);
   lep2_pt_total__189->GetZaxis()->SetTitleSize(0.06);
   lep2_pt_total__189->GetZaxis()->SetTitleFont(42);
   lep2_pt_total__189->Draw("HIST");
   
   THStack *lep2_pt_stack = new THStack();
   lep2_pt_stack->SetName("lep2_pt_stack");
   lep2_pt_stack->SetTitle("lep2_pt");
   
   TH1F *lep2_pt_stack_stack_48 = new TH1F("lep2_pt_stack_stack_48","lep2_pt",20,0,200);
   lep2_pt_stack_stack_48->SetMinimum(0);
   lep2_pt_stack_stack_48->SetMaximum(424.2065);
   lep2_pt_stack_stack_48->SetDirectory(0);
   lep2_pt_stack_stack_48->SetStats(0);
   lep2_pt_stack_stack_48->SetLineStyle(0);
   lep2_pt_stack_stack_48->SetMarkerStyle(20);
   lep2_pt_stack_stack_48->GetXaxis()->SetLabelFont(42);
   lep2_pt_stack_stack_48->GetXaxis()->SetLabelOffset(0.007);
   lep2_pt_stack_stack_48->GetXaxis()->SetLabelSize(0.05);
   lep2_pt_stack_stack_48->GetXaxis()->SetTitleSize(0.06);
   lep2_pt_stack_stack_48->GetXaxis()->SetTitleOffset(0.9);
   lep2_pt_stack_stack_48->GetXaxis()->SetTitleFont(42);
   lep2_pt_stack_stack_48->GetYaxis()->SetLabelFont(42);
   lep2_pt_stack_stack_48->GetYaxis()->SetLabelOffset(0.007);
   lep2_pt_stack_stack_48->GetYaxis()->SetLabelSize(0.05);
   lep2_pt_stack_stack_48->GetYaxis()->SetTitleSize(0.06);
   lep2_pt_stack_stack_48->GetYaxis()->SetTitleOffset(1.35);
   lep2_pt_stack_stack_48->GetYaxis()->SetTitleFont(42);
   lep2_pt_stack_stack_48->GetZaxis()->SetLabelFont(42);
   lep2_pt_stack_stack_48->GetZaxis()->SetLabelOffset(0.007);
   lep2_pt_stack_stack_48->GetZaxis()->SetLabelSize(0.05);
   lep2_pt_stack_stack_48->GetZaxis()->SetTitleSize(0.06);
   lep2_pt_stack_stack_48->GetZaxis()->SetTitleFont(42);
   lep2_pt_stack->SetHistogram(lep2_pt_stack_stack_48);
   
   
   TH1D *lep2_pt_fakes_VV_stack_1 = new TH1D("lep2_pt_fakes_VV_stack_1","dummy",20,0,200);
   lep2_pt_fakes_VV_stack_1->SetBinContent(4,0.1943867);
   lep2_pt_fakes_VV_stack_1->SetBinContent(5,0.2915801);
   lep2_pt_fakes_VV_stack_1->SetBinContent(6,0.1943867);
   lep2_pt_fakes_VV_stack_1->SetBinError(4,0.1374522);
   lep2_pt_fakes_VV_stack_1->SetBinError(5,0.1683439);
   lep2_pt_fakes_VV_stack_1->SetBinError(6,0.1374522);
   lep2_pt_fakes_VV_stack_1->SetEntries(11);

   ci = TColor::GetColor("#2e3294");
   lep2_pt_fakes_VV_stack_1->SetFillColor(ci);
   lep2_pt_fakes_VV_stack_1->SetMarkerStyle(0);
   lep2_pt_fakes_VV_stack_1->SetMarkerSize(1.1);
   lep2_pt_fakes_VV_stack_1->GetXaxis()->SetTitle("p_{T}(l2) [GeV]");
   lep2_pt_fakes_VV_stack_1->GetXaxis()->SetMoreLogLabels();
   lep2_pt_fakes_VV_stack_1->GetXaxis()->SetLabelFont(42);
   lep2_pt_fakes_VV_stack_1->GetXaxis()->SetLabelOffset(0.007);
   lep2_pt_fakes_VV_stack_1->GetXaxis()->SetLabelSize(0.05);
   lep2_pt_fakes_VV_stack_1->GetXaxis()->SetTitleSize(0.06);
   lep2_pt_fakes_VV_stack_1->GetXaxis()->SetTitleOffset(0.9);
   lep2_pt_fakes_VV_stack_1->GetXaxis()->SetTitleFont(42);
   lep2_pt_fakes_VV_stack_1->GetYaxis()->SetTitle("Events");
   lep2_pt_fakes_VV_stack_1->GetYaxis()->SetLabelFont(42);
   lep2_pt_fakes_VV_stack_1->GetYaxis()->SetLabelOffset(0.007);
   lep2_pt_fakes_VV_stack_1->GetYaxis()->SetLabelSize(0.05);
   lep2_pt_fakes_VV_stack_1->GetYaxis()->SetTitleSize(0.06);
   lep2_pt_fakes_VV_stack_1->GetYaxis()->SetTitleOffset(1.35);
   lep2_pt_fakes_VV_stack_1->GetYaxis()->SetTitleFont(42);
   lep2_pt_fakes_VV_stack_1->GetZaxis()->SetLabelFont(42);
   lep2_pt_fakes_VV_stack_1->GetZaxis()->SetLabelOffset(0.007);
   lep2_pt_fakes_VV_stack_1->GetZaxis()->SetLabelSize(0.05);
   lep2_pt_fakes_VV_stack_1->GetZaxis()->SetTitleSize(0.06);
   lep2_pt_fakes_VV_stack_1->GetZaxis()->SetTitleFont(42);
   lep2_pt_stack->Add(lep2_pt_fakes_VV_stack_1,"");
   
   TH1D *lep2_pt_fakes_TT_stack_2 = new TH1D("lep2_pt_fakes_TT_stack_2","dummy",20,0,200);
   lep2_pt_fakes_TT_stack_2->SetBinContent(3,5.522995);
   lep2_pt_fakes_TT_stack_2->SetBinContent(4,15.05251);
   lep2_pt_fakes_TT_stack_2->SetBinContent(5,12.54657);
   lep2_pt_fakes_TT_stack_2->SetBinContent(6,8.511261);
   lep2_pt_fakes_TT_stack_2->SetBinContent(7,4.766744);
   lep2_pt_fakes_TT_stack_2->SetBinContent(8,3.258217);
   lep2_pt_fakes_TT_stack_2->SetBinContent(9,1.795344);
   lep2_pt_fakes_TT_stack_2->SetBinContent(10,1.063908);
   lep2_pt_fakes_TT_stack_2->SetBinContent(11,0.5319538);
   lep2_pt_fakes_TT_stack_2->SetBinContent(12,1.130402);
   lep2_pt_fakes_TT_stack_2->SetBinContent(13,0.3324711);
   lep2_pt_fakes_TT_stack_2->SetBinContent(14,0.1329884);
   lep2_pt_fakes_TT_stack_2->SetBinContent(15,0.1994827);
   lep2_pt_fakes_TT_stack_2->SetBinContent(16,0.06649422);
   lep2_pt_fakes_TT_stack_2->SetBinContent(19,0.06649422);
   lep2_pt_fakes_TT_stack_2->SetBinContent(20,0.06649422);
   lep2_pt_fakes_TT_stack_2->SetBinError(3,0.6185527);
   lep2_pt_fakes_TT_stack_2->SetBinError(4,1.014313);
   lep2_pt_fakes_TT_stack_2->SetBinError(5,0.9161847);
   lep2_pt_fakes_TT_stack_2->SetBinError(6,0.7581508);
   lep2_pt_fakes_TT_stack_2->SetBinError(7,0.5675218);
   lep2_pt_fakes_TT_stack_2->SetBinError(8,0.4748637);
   lep2_pt_fakes_TT_stack_2->SetBinError(9,0.3580824);
   lep2_pt_fakes_TT_stack_2->SetBinError(10,0.2659769);
   lep2_pt_fakes_TT_stack_2->SetBinError(11,0.1880741);
   lep2_pt_fakes_TT_stack_2->SetBinError(12,0.2741627);
   lep2_pt_fakes_TT_stack_2->SetBinError(13,0.1486856);
   lep2_pt_fakes_TT_stack_2->SetBinError(14,0.09403703);
   lep2_pt_fakes_TT_stack_2->SetBinError(15,0.1151714);
   lep2_pt_fakes_TT_stack_2->SetBinError(16,0.06649422);
   lep2_pt_fakes_TT_stack_2->SetBinError(19,0.06649422);
   lep2_pt_fakes_TT_stack_2->SetBinError(20,0.06649422);
   lep2_pt_fakes_TT_stack_2->SetEntries(841);

   ci = TColor::GetColor("#666666");
   lep2_pt_fakes_TT_stack_2->SetFillColor(ci);
   lep2_pt_fakes_TT_stack_2->SetMarkerStyle(0);
   lep2_pt_fakes_TT_stack_2->SetMarkerSize(1.1);
   lep2_pt_fakes_TT_stack_2->GetXaxis()->SetTitle("p_{T}(l2) [GeV]");
   lep2_pt_fakes_TT_stack_2->GetXaxis()->SetMoreLogLabels();
   lep2_pt_fakes_TT_stack_2->GetXaxis()->SetLabelFont(42);
   lep2_pt_fakes_TT_stack_2->GetXaxis()->SetLabelOffset(0.007);
   lep2_pt_fakes_TT_stack_2->GetXaxis()->SetLabelSize(0.05);
   lep2_pt_fakes_TT_stack_2->GetXaxis()->SetTitleSize(0.06);
   lep2_pt_fakes_TT_stack_2->GetXaxis()->SetTitleOffset(0.9);
   lep2_pt_fakes_TT_stack_2->GetXaxis()->SetTitleFont(42);
   lep2_pt_fakes_TT_stack_2->GetYaxis()->SetTitle("Events");
   lep2_pt_fakes_TT_stack_2->GetYaxis()->SetLabelFont(42);
   lep2_pt_fakes_TT_stack_2->GetYaxis()->SetLabelOffset(0.007);
   lep2_pt_fakes_TT_stack_2->GetYaxis()->SetLabelSize(0.05);
   lep2_pt_fakes_TT_stack_2->GetYaxis()->SetTitleSize(0.06);
   lep2_pt_fakes_TT_stack_2->GetYaxis()->SetTitleOffset(1.35);
   lep2_pt_fakes_TT_stack_2->GetYaxis()->SetTitleFont(42);
   lep2_pt_fakes_TT_stack_2->GetZaxis()->SetLabelFont(42);
   lep2_pt_fakes_TT_stack_2->GetZaxis()->SetLabelOffset(0.007);
   lep2_pt_fakes_TT_stack_2->GetZaxis()->SetLabelSize(0.05);
   lep2_pt_fakes_TT_stack_2->GetZaxis()->SetTitleSize(0.06);
   lep2_pt_fakes_TT_stack_2->GetZaxis()->SetTitleFont(42);
   lep2_pt_stack->Add(lep2_pt_fakes_TT_stack_2,"");
   
   TH1D *lep2_pt_fakes_DY_stack_3 = new TH1D("lep2_pt_fakes_DY_stack_3","dummy",20,0,200);
   lep2_pt_fakes_DY_stack_3->SetBinContent(3,20.63427);
   lep2_pt_fakes_DY_stack_3->SetBinContent(4,44.70757);
   lep2_pt_fakes_DY_stack_3->SetBinContent(5,30.9514);
   lep2_pt_fakes_DY_stack_3->SetBinContent(6,3.439044);
   lep2_pt_fakes_DY_stack_3->SetBinContent(7,8.597611);
   lep2_pt_fakes_DY_stack_3->SetBinContent(8,3.439044);
   lep2_pt_fakes_DY_stack_3->SetBinContent(10,3.439044);
   lep2_pt_fakes_DY_stack_3->SetBinContent(13,1.719522);
   lep2_pt_fakes_DY_stack_3->SetBinError(3,5.956599);
   lep2_pt_fakes_DY_stack_3->SetBinError(4,8.767877);
   lep2_pt_fakes_DY_stack_3->SetBinError(5,7.295314);
   lep2_pt_fakes_DY_stack_3->SetBinError(6,2.431771);
   lep2_pt_fakes_DY_stack_3->SetBinError(7,3.844968);
   lep2_pt_fakes_DY_stack_3->SetBinError(8,2.431771);
   lep2_pt_fakes_DY_stack_3->SetBinError(10,2.431771);
   lep2_pt_fakes_DY_stack_3->SetBinError(13,1.719522);
   lep2_pt_fakes_DY_stack_3->SetEntries(72);

   ci = TColor::GetColor("#cccccc");
   lep2_pt_fakes_DY_stack_3->SetFillColor(ci);
   lep2_pt_fakes_DY_stack_3->SetMarkerStyle(0);
   lep2_pt_fakes_DY_stack_3->SetMarkerSize(1.1);
   lep2_pt_fakes_DY_stack_3->GetXaxis()->SetTitle("p_{T}(l2) [GeV]");
   lep2_pt_fakes_DY_stack_3->GetXaxis()->SetMoreLogLabels();
   lep2_pt_fakes_DY_stack_3->GetXaxis()->SetLabelFont(42);
   lep2_pt_fakes_DY_stack_3->GetXaxis()->SetLabelOffset(0.007);
   lep2_pt_fakes_DY_stack_3->GetXaxis()->SetLabelSize(0.05);
   lep2_pt_fakes_DY_stack_3->GetXaxis()->SetTitleSize(0.06);
   lep2_pt_fakes_DY_stack_3->GetXaxis()->SetTitleOffset(0.9);
   lep2_pt_fakes_DY_stack_3->GetXaxis()->SetTitleFont(42);
   lep2_pt_fakes_DY_stack_3->GetYaxis()->SetTitle("Events");
   lep2_pt_fakes_DY_stack_3->GetYaxis()->SetLabelFont(42);
   lep2_pt_fakes_DY_stack_3->GetYaxis()->SetLabelOffset(0.007);
   lep2_pt_fakes_DY_stack_3->GetYaxis()->SetLabelSize(0.05);
   lep2_pt_fakes_DY_stack_3->GetYaxis()->SetTitleSize(0.06);
   lep2_pt_fakes_DY_stack_3->GetYaxis()->SetTitleOffset(1.35);
   lep2_pt_fakes_DY_stack_3->GetYaxis()->SetTitleFont(42);
   lep2_pt_fakes_DY_stack_3->GetZaxis()->SetLabelFont(42);
   lep2_pt_fakes_DY_stack_3->GetZaxis()->SetLabelOffset(0.007);
   lep2_pt_fakes_DY_stack_3->GetZaxis()->SetLabelSize(0.05);
   lep2_pt_fakes_DY_stack_3->GetZaxis()->SetTitleSize(0.06);
   lep2_pt_fakes_DY_stack_3->GetZaxis()->SetTitleFont(42);
   lep2_pt_stack->Add(lep2_pt_fakes_DY_stack_3,"");
   
   TH1D *lep2_pt_prompt_ZZ_stack_4 = new TH1D("lep2_pt_prompt_ZZ_stack_4","dummy",20,0,200);
   lep2_pt_prompt_ZZ_stack_4->SetBinContent(3,3.669708);
   lep2_pt_prompt_ZZ_stack_4->SetBinContent(4,18.34854);
   lep2_pt_prompt_ZZ_stack_4->SetBinContent(5,18.899);
   lep2_pt_prompt_ZZ_stack_4->SetBinContent(6,10.82564);
   lep2_pt_prompt_ZZ_stack_4->SetBinContent(7,6.238504);
   lep2_pt_prompt_ZZ_stack_4->SetBinContent(8,3.853194);
   lep2_pt_prompt_ZZ_stack_4->SetBinContent(9,3.302737);
   lep2_pt_prompt_ZZ_stack_4->SetBinContent(10,2.568796);
   lep2_pt_prompt_ZZ_stack_4->SetBinContent(11,2.201825);
   lep2_pt_prompt_ZZ_stack_4->SetBinContent(12,0.917427);
   lep2_pt_prompt_ZZ_stack_4->SetBinContent(13,0.7339416);
   lep2_pt_prompt_ZZ_stack_4->SetBinContent(14,0.1834854);
   lep2_pt_prompt_ZZ_stack_4->SetBinContent(15,0.3669708);
   lep2_pt_prompt_ZZ_stack_4->SetBinContent(17,0.3669708);
   lep2_pt_prompt_ZZ_stack_4->SetBinContent(20,0.7339416);
   lep2_pt_prompt_ZZ_stack_4->SetBinError(3,0.8205717);
   lep2_pt_prompt_ZZ_stack_4->SetBinError(4,1.834854);
   lep2_pt_prompt_ZZ_stack_4->SetBinError(5,1.862174);
   lep2_pt_prompt_ZZ_stack_4->SetBinError(6,1.409378);
   lep2_pt_prompt_ZZ_stack_4->SetBinError(7,1.069895);
   lep2_pt_prompt_ZZ_stack_4->SetBinError(8,0.8408358);
   lep2_pt_prompt_ZZ_stack_4->SetBinError(9,0.7784627);
   lep2_pt_prompt_ZZ_stack_4->SetBinError(10,0.6865395);
   lep2_pt_prompt_ZZ_stack_4->SetBinError(11,0.6356121);
   lep2_pt_prompt_ZZ_stack_4->SetBinError(12,0.4102858);
   lep2_pt_prompt_ZZ_stack_4->SetBinError(13,0.3669708);
   lep2_pt_prompt_ZZ_stack_4->SetBinError(14,0.1834854);
   lep2_pt_prompt_ZZ_stack_4->SetBinError(15,0.2594876);
   lep2_pt_prompt_ZZ_stack_4->SetBinError(17,0.2594876);
   lep2_pt_prompt_ZZ_stack_4->SetBinError(20,0.3669708);
   lep2_pt_prompt_ZZ_stack_4->SetEntries(403);

   ci = TColor::GetColor("#00cc00");
   lep2_pt_prompt_ZZ_stack_4->SetFillColor(ci);
   lep2_pt_prompt_ZZ_stack_4->SetMarkerStyle(0);
   lep2_pt_prompt_ZZ_stack_4->SetMarkerSize(1.1);
   lep2_pt_prompt_ZZ_stack_4->GetXaxis()->SetTitle("p_{T}(l2) [GeV]");
   lep2_pt_prompt_ZZ_stack_4->GetXaxis()->SetMoreLogLabels();
   lep2_pt_prompt_ZZ_stack_4->GetXaxis()->SetLabelFont(42);
   lep2_pt_prompt_ZZ_stack_4->GetXaxis()->SetLabelOffset(0.007);
   lep2_pt_prompt_ZZ_stack_4->GetXaxis()->SetLabelSize(0.05);
   lep2_pt_prompt_ZZ_stack_4->GetXaxis()->SetTitleSize(0.06);
   lep2_pt_prompt_ZZ_stack_4->GetXaxis()->SetTitleOffset(0.9);
   lep2_pt_prompt_ZZ_stack_4->GetXaxis()->SetTitleFont(42);
   lep2_pt_prompt_ZZ_stack_4->GetYaxis()->SetTitle("Events");
   lep2_pt_prompt_ZZ_stack_4->GetYaxis()->SetLabelFont(42);
   lep2_pt_prompt_ZZ_stack_4->GetYaxis()->SetLabelOffset(0.007);
   lep2_pt_prompt_ZZ_stack_4->GetYaxis()->SetLabelSize(0.05);
   lep2_pt_prompt_ZZ_stack_4->GetYaxis()->SetTitleSize(0.06);
   lep2_pt_prompt_ZZ_stack_4->GetYaxis()->SetTitleOffset(1.35);
   lep2_pt_prompt_ZZ_stack_4->GetYaxis()->SetTitleFont(42);
   lep2_pt_prompt_ZZ_stack_4->GetZaxis()->SetLabelFont(42);
   lep2_pt_prompt_ZZ_stack_4->GetZaxis()->SetLabelOffset(0.007);
   lep2_pt_prompt_ZZ_stack_4->GetZaxis()->SetLabelSize(0.05);
   lep2_pt_prompt_ZZ_stack_4->GetZaxis()->SetTitleSize(0.06);
   lep2_pt_prompt_ZZ_stack_4->GetZaxis()->SetTitleFont(42);
   lep2_pt_stack->Add(lep2_pt_prompt_ZZ_stack_4,"");
   
   TH1D *lep2_pt_prompt_WZ_stack_5 = new TH1D("lep2_pt_prompt_WZ_stack_5","dummy",20,0,200);
   lep2_pt_prompt_WZ_stack_5->SetBinContent(3,78.68975);
   lep2_pt_prompt_WZ_stack_5->SetBinContent(4,325.7032);
   lep2_pt_prompt_WZ_stack_5->SetBinContent(5,339.8131);
   lep2_pt_prompt_WZ_stack_5->SetBinContent(6,197.8098);
   lep2_pt_prompt_WZ_stack_5->SetBinContent(7,105.191);
   lep2_pt_prompt_WZ_stack_5->SetBinContent(8,66.11748);
   lep2_pt_prompt_WZ_stack_5->SetBinContent(9,41.15384);
   lep2_pt_prompt_WZ_stack_5->SetBinContent(10,27.04395);
   lep2_pt_prompt_WZ_stack_5->SetBinContent(11,16.09974);
   lep2_pt_prompt_WZ_stack_5->SetBinContent(12,13.3863);
   lep2_pt_prompt_WZ_stack_5->SetBinContent(13,8.863903);
   lep2_pt_prompt_WZ_stack_5->SetBinContent(14,5.969567);
   lep2_pt_prompt_WZ_stack_5->SetBinContent(15,5.065087);
   lep2_pt_prompt_WZ_stack_5->SetBinContent(16,4.5224);
   lep2_pt_prompt_WZ_stack_5->SetBinContent(17,2.894336);
   lep2_pt_prompt_WZ_stack_5->SetBinContent(18,3.256128);
   lep2_pt_prompt_WZ_stack_5->SetBinContent(19,1.447168);
   lep2_pt_prompt_WZ_stack_5->SetBinContent(20,7.054943);
   lep2_pt_prompt_WZ_stack_5->SetBinError(3,2.667832);
   lep2_pt_prompt_WZ_stack_5->SetBinError(4,5.427633);
   lep2_pt_prompt_WZ_stack_5->SetBinError(5,5.543953);
   lep2_pt_prompt_WZ_stack_5->SetBinError(6,4.229834);
   lep2_pt_prompt_WZ_stack_5->SetBinError(7,3.084528);
   lep2_pt_prompt_WZ_stack_5->SetBinError(8,2.445443);
   lep2_pt_prompt_WZ_stack_5->SetBinError(9,1.929322);
   lep2_pt_prompt_WZ_stack_5->SetBinError(10,1.563992);
   lep2_pt_prompt_WZ_stack_5->SetBinError(11,1.206727);
   lep2_pt_prompt_WZ_stack_5->SetBinError(12,1.100347);
   lep2_pt_prompt_WZ_stack_5->SetBinError(13,0.8953894);
   lep2_pt_prompt_WZ_stack_5->SetBinError(14,0.7348029);
   lep2_pt_prompt_WZ_stack_5->SetBinError(15,0.6768508);
   lep2_pt_prompt_WZ_stack_5->SetBinError(16,0.6395639);
   lep2_pt_prompt_WZ_stack_5->SetBinError(17,0.5116511);
   lep2_pt_prompt_WZ_stack_5->SetBinError(18,0.5426879);
   lep2_pt_prompt_WZ_stack_5->SetBinError(19,0.361792);
   lep2_pt_prompt_WZ_stack_5->SetBinError(20,0.798815);
   lep2_pt_prompt_WZ_stack_5->SetEntries(13825);

   ci = TColor::GetColor("#ffcc00");
   lep2_pt_prompt_WZ_stack_5->SetFillColor(ci);
   lep2_pt_prompt_WZ_stack_5->SetMarkerStyle(0);
   lep2_pt_prompt_WZ_stack_5->SetMarkerSize(1.1);
   lep2_pt_prompt_WZ_stack_5->GetXaxis()->SetTitle("p_{T}(l2) [GeV]");
   lep2_pt_prompt_WZ_stack_5->GetXaxis()->SetMoreLogLabels();
   lep2_pt_prompt_WZ_stack_5->GetXaxis()->SetLabelFont(42);
   lep2_pt_prompt_WZ_stack_5->GetXaxis()->SetLabelOffset(0.007);
   lep2_pt_prompt_WZ_stack_5->GetXaxis()->SetLabelSize(0.05);
   lep2_pt_prompt_WZ_stack_5->GetXaxis()->SetTitleSize(0.06);
   lep2_pt_prompt_WZ_stack_5->GetXaxis()->SetTitleOffset(0.9);
   lep2_pt_prompt_WZ_stack_5->GetXaxis()->SetTitleFont(42);
   lep2_pt_prompt_WZ_stack_5->GetYaxis()->SetTitle("Events");
   lep2_pt_prompt_WZ_stack_5->GetYaxis()->SetLabelFont(42);
   lep2_pt_prompt_WZ_stack_5->GetYaxis()->SetLabelOffset(0.007);
   lep2_pt_prompt_WZ_stack_5->GetYaxis()->SetLabelSize(0.05);
   lep2_pt_prompt_WZ_stack_5->GetYaxis()->SetTitleSize(0.06);
   lep2_pt_prompt_WZ_stack_5->GetYaxis()->SetTitleOffset(1.35);
   lep2_pt_prompt_WZ_stack_5->GetYaxis()->SetTitleFont(42);
   lep2_pt_prompt_WZ_stack_5->GetZaxis()->SetLabelFont(42);
   lep2_pt_prompt_WZ_stack_5->GetZaxis()->SetLabelOffset(0.007);
   lep2_pt_prompt_WZ_stack_5->GetZaxis()->SetLabelSize(0.05);
   lep2_pt_prompt_WZ_stack_5->GetZaxis()->SetTitleSize(0.06);
   lep2_pt_prompt_WZ_stack_5->GetZaxis()->SetTitleFont(42);
   lep2_pt_stack->Add(lep2_pt_prompt_WZ_stack_5,"");
   lep2_pt_stack->Draw("same hist");
   
   TH1D *lep2_pt_total__190 = new TH1D("lep2_pt_total__190","dummy",20,0,200);
   lep2_pt_total__190->SetBinContent(3,108.5167);
   lep2_pt_total__190->SetBinContent(4,404.0062);
   lep2_pt_total__190->SetBinContent(5,402.5016);
   lep2_pt_total__190->SetBinContent(6,220.7801);
   lep2_pt_total__190->SetBinContent(7,124.7939);
   lep2_pt_total__190->SetBinContent(8,76.66794);
   lep2_pt_total__190->SetBinContent(9,46.25192);
   lep2_pt_total__190->SetBinContent(10,34.1157);
   lep2_pt_total__190->SetBinContent(11,18.83352);
   lep2_pt_total__190->SetBinContent(12,15.43413);
   lep2_pt_total__190->SetBinContent(13,11.64984);
   lep2_pt_total__190->SetBinContent(14,6.286041);
   lep2_pt_total__190->SetBinContent(15,5.631541);
   lep2_pt_total__190->SetBinContent(16,4.588894);
   lep2_pt_total__190->SetBinContent(17,3.261307);
   lep2_pt_total__190->SetBinContent(18,3.256128);
   lep2_pt_total__190->SetBinContent(19,1.513662);
   lep2_pt_total__190->SetBinContent(20,7.855379);
   lep2_pt_total__190->SetBinError(3,6.607144);
   lep2_pt_total__190->SetBinError(4,10.52375);
   lep2_pt_total__190->SetBinError(5,9.396406);
   lep2_pt_total__190->SetBinError(6,5.136637);
   lep2_pt_total__190->SetBinError(7,5.075909);
   lep2_pt_total__190->SetBinError(8,3.581369);
   lep2_pt_total__190->SetBinError(9,2.111044);
   lep2_pt_total__190->SetBinError(10,2.983566);
   lep2_pt_total__190->SetBinError(11,1.376795);
   lep2_pt_total__190->SetBinError(12,1.205929);
   lep2_pt_total__190->SetBinError(13,1.9787);
   lep2_pt_total__190->SetBinError(14,0.763181);
   lep2_pt_total__190->SetBinError(15,0.733979);
   lep2_pt_total__190->SetBinError(16,0.6430112);
   lep2_pt_total__190->SetBinError(17,0.5736904);
   lep2_pt_total__190->SetBinError(18,0.5426879);
   lep2_pt_total__190->SetBinError(19,0.3678517);
   lep2_pt_total__190->SetBinError(20,0.8815864);
   lep2_pt_total__190->SetMinimum(0);
   lep2_pt_total__190->SetMaximum(1010.016);
   lep2_pt_total__190->SetEntries(15152);
   lep2_pt_total__190->SetDirectory(0);

   ci = TColor::GetColor("#00cc00");
   lep2_pt_total__190->SetFillColor(ci);
   lep2_pt_total__190->SetMarkerStyle(20);
   lep2_pt_total__190->SetMarkerSize(1.1);
   lep2_pt_total__190->GetXaxis()->SetTitle("p_{T}(l2) [GeV]");
   lep2_pt_total__190->GetXaxis()->SetMoreLogLabels();
   lep2_pt_total__190->GetXaxis()->SetLabelFont(42);
   lep2_pt_total__190->GetXaxis()->SetLabelOffset(999);
   lep2_pt_total__190->GetXaxis()->SetLabelSize(0.05);
   lep2_pt_total__190->GetXaxis()->SetTitleSize(0.05);
   lep2_pt_total__190->GetXaxis()->SetTitleOffset(999);
   lep2_pt_total__190->GetXaxis()->SetTitleFont(42);
   lep2_pt_total__190->GetYaxis()->SetTitle("Events");
   lep2_pt_total__190->GetYaxis()->SetLabelFont(42);
   lep2_pt_total__190->GetYaxis()->SetLabelOffset(0.007);
   lep2_pt_total__190->GetYaxis()->SetLabelSize(0.05);
   lep2_pt_total__190->GetYaxis()->SetTitleSize(0.06);
   lep2_pt_total__190->GetYaxis()->SetTitleOffset(1.48);
   lep2_pt_total__190->GetYaxis()->SetTitleFont(42);
   lep2_pt_total__190->GetZaxis()->SetLabelFont(42);
   lep2_pt_total__190->GetZaxis()->SetLabelOffset(0.007);
   lep2_pt_total__190->GetZaxis()->SetLabelSize(0.05);
   lep2_pt_total__190->GetZaxis()->SetTitleSize(0.06);
   lep2_pt_total__190->GetZaxis()->SetTitleFont(42);
   lep2_pt_total__190->Draw("AXIS SAME");
   
   Double_t lep2_pt_total_errors_fx3236[18] = {
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
   Double_t lep2_pt_total_errors_fy3236[18] = {
   108.5167,
   404.0062,
   402.5016,
   220.7801,
   124.7939,
   76.66794,
   46.25192,
   34.1157,
   18.83352,
   15.43413,
   11.64984,
   6.286041,
   5.631541,
   4.588894,
   3.261307,
   3.256128,
   1.513662,
   7.855379};
   Double_t lep2_pt_total_errors_felx3236[18] = {
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
   Double_t lep2_pt_total_errors_fely3236[18] = {
   6.607144,
   10.52375,
   9.396406,
   5.136637,
   5.075909,
   3.581369,
   2.111044,
   2.983566,
   1.376795,
   1.205929,
   1.9787,
   0.763181,
   0.733979,
   0.6430112,
   0.5736904,
   0.5426879,
   0.3678517,
   0.8815864};
   Double_t lep2_pt_total_errors_fehx3236[18] = {
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
   Double_t lep2_pt_total_errors_fehy3236[18] = {
   6.607144,
   10.52375,
   9.396406,
   5.136637,
   5.075909,
   3.581369,
   2.111044,
   2.983566,
   1.376795,
   1.205929,
   1.9787,
   0.763181,
   0.733979,
   0.6430112,
   0.5736904,
   0.5426879,
   0.3678517,
   0.8815864};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(18,lep2_pt_total_errors_fx3236,lep2_pt_total_errors_fy3236,lep2_pt_total_errors_felx3236,lep2_pt_total_errors_fehx3236,lep2_pt_total_errors_fely3236,lep2_pt_total_errors_fehy3236);
   grae->SetName("lep2_pt_total_errors");
   grae->SetTitle("Graph");
   grae->SetFillColor(1);
   grae->SetFillStyle(3013);
   grae->SetMarkerStyle(0);
   
   TH1F *Graph_lep2_pt_total_errors3236 = new TH1F("Graph_lep2_pt_total_errors3236","Graph",100,2,218);
   Graph_lep2_pt_total_errors3236->SetMinimum(1.031229);
   Graph_lep2_pt_total_errors3236->SetMaximum(455.8684);
   Graph_lep2_pt_total_errors3236->SetDirectory(0);
   Graph_lep2_pt_total_errors3236->SetStats(0);
   Graph_lep2_pt_total_errors3236->SetLineStyle(0);
   Graph_lep2_pt_total_errors3236->SetMarkerStyle(20);
   Graph_lep2_pt_total_errors3236->GetXaxis()->SetLabelFont(42);
   Graph_lep2_pt_total_errors3236->GetXaxis()->SetLabelOffset(0.007);
   Graph_lep2_pt_total_errors3236->GetXaxis()->SetLabelSize(0.05);
   Graph_lep2_pt_total_errors3236->GetXaxis()->SetTitleSize(0.06);
   Graph_lep2_pt_total_errors3236->GetXaxis()->SetTitleOffset(0.9);
   Graph_lep2_pt_total_errors3236->GetXaxis()->SetTitleFont(42);
   Graph_lep2_pt_total_errors3236->GetYaxis()->SetLabelFont(42);
   Graph_lep2_pt_total_errors3236->GetYaxis()->SetLabelOffset(0.007);
   Graph_lep2_pt_total_errors3236->GetYaxis()->SetLabelSize(0.05);
   Graph_lep2_pt_total_errors3236->GetYaxis()->SetTitleSize(0.06);
   Graph_lep2_pt_total_errors3236->GetYaxis()->SetTitleOffset(1.35);
   Graph_lep2_pt_total_errors3236->GetYaxis()->SetTitleFont(42);
   Graph_lep2_pt_total_errors3236->GetZaxis()->SetLabelFont(42);
   Graph_lep2_pt_total_errors3236->GetZaxis()->SetLabelOffset(0.007);
   Graph_lep2_pt_total_errors3236->GetZaxis()->SetLabelSize(0.05);
   Graph_lep2_pt_total_errors3236->GetZaxis()->SetTitleSize(0.06);
   Graph_lep2_pt_total_errors3236->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_lep2_pt_total_errors3236);
   
   grae->Draw("pe2 ");
   
   Double_t lep2_pt_data_graph_fx3237[20] = {
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
   Double_t lep2_pt_data_graph_fy3237[20] = {
   0,
   0,
   99,
   353,
   426,
   226,
   140,
   71,
   63,
   45,
   28,
   19,
   10,
   11,
   4,
   5,
   0,
   3,
   4,
   6};
   Double_t lep2_pt_data_graph_felx3237[20] = {
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
   Double_t lep2_pt_data_graph_fely3237[20] = {
   0,
   0,
   9.933246,
   18.7798,
   20.63211,
   15.02249,
   11.81826,
   8.406427,
   7.916287,
   6.68331,
   5.259811,
   4.320299,
   3.108748,
   3.265636,
   1.914367,
   2.159724,
   0,
   1.632727,
   1.914367,
   2.379969};
   Double_t lep2_pt_data_graph_fehx3237[20] = {
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
   Double_t lep2_pt_data_graph_fehy3237[20] = {
   1.841055,
   1.841055,
   10.98363,
   19.80647,
   21.65639,
   16.05583,
   12.86063,
   9.465934,
   8.979462,
   7.758066,
   6.354577,
   5.435307,
   4.267035,
   4.416609,
   3.162815,
   3.382539,
   1.841055,
   2.918242,
   3.162815,
   3.583712};
   grae = new TGraphAsymmErrors(20,lep2_pt_data_graph_fx3237,lep2_pt_data_graph_fy3237,lep2_pt_data_graph_felx3237,lep2_pt_data_graph_fehx3237,lep2_pt_data_graph_fely3237,lep2_pt_data_graph_fehy3237);
   grae->SetName("lep2_pt_data_graph");
   grae->SetTitle("Graph");
   grae->SetFillStyle(1000);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.1);
   
   TH1F *Graph_lep2_pt_data_graph3237 = new TH1F("Graph_lep2_pt_data_graph3237","Graph",100,0,220);
   Graph_lep2_pt_data_graph3237->SetMinimum(0);
   Graph_lep2_pt_data_graph3237->SetMaximum(492.422);
   Graph_lep2_pt_data_graph3237->SetDirectory(0);
   Graph_lep2_pt_data_graph3237->SetStats(0);
   Graph_lep2_pt_data_graph3237->SetLineStyle(0);
   Graph_lep2_pt_data_graph3237->SetMarkerStyle(20);
   Graph_lep2_pt_data_graph3237->GetXaxis()->SetLabelFont(42);
   Graph_lep2_pt_data_graph3237->GetXaxis()->SetLabelOffset(0.007);
   Graph_lep2_pt_data_graph3237->GetXaxis()->SetLabelSize(0.05);
   Graph_lep2_pt_data_graph3237->GetXaxis()->SetTitleSize(0.06);
   Graph_lep2_pt_data_graph3237->GetXaxis()->SetTitleOffset(0.9);
   Graph_lep2_pt_data_graph3237->GetXaxis()->SetTitleFont(42);
   Graph_lep2_pt_data_graph3237->GetYaxis()->SetLabelFont(42);
   Graph_lep2_pt_data_graph3237->GetYaxis()->SetLabelOffset(0.007);
   Graph_lep2_pt_data_graph3237->GetYaxis()->SetLabelSize(0.05);
   Graph_lep2_pt_data_graph3237->GetYaxis()->SetTitleSize(0.06);
   Graph_lep2_pt_data_graph3237->GetYaxis()->SetTitleOffset(1.35);
   Graph_lep2_pt_data_graph3237->GetYaxis()->SetTitleFont(42);
   Graph_lep2_pt_data_graph3237->GetZaxis()->SetLabelFont(42);
   Graph_lep2_pt_data_graph3237->GetZaxis()->SetLabelOffset(0.007);
   Graph_lep2_pt_data_graph3237->GetZaxis()->SetLabelSize(0.05);
   Graph_lep2_pt_data_graph3237->GetZaxis()->SetTitleSize(0.06);
   Graph_lep2_pt_data_graph3237->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_lep2_pt_data_graph3237);
   
   grae->Draw("pz ");
   
   TLegend *leg = new TLegend(0.62,0.628,0.9,0.91,NULL,"brNDC");
   leg->SetBorderSize(1);
   leg->SetTextSize(0.036);
   leg->SetLineColor(0);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("lep2_pt_data","Data","LPE");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1.1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("lep2_pt_prompt_WZ_stack_5","WZ","F");

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
   entry=leg->AddEntry("lep2_pt_prompt_ZZ_stack_4","qqZZ","F");

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
   entry=leg->AddEntry("lep2_pt_fakes_DY_stack_3","Fakes DY","F");

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
   entry=leg->AddEntry("lep2_pt_fakes_TT_stack_2","Fakes TT","F");

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
   entry=leg->AddEntry("lep2_pt_total_errors","Total unc.","F");
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
   lep2_pt_canvas->cd();
  
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
   
   TH1D *lep2_pt_total__191 = new TH1D("lep2_pt_total__191","dummy",20,0,200);
   lep2_pt_total__191->SetBinContent(3,1);
   lep2_pt_total__191->SetBinContent(4,1);
   lep2_pt_total__191->SetBinContent(5,1);
   lep2_pt_total__191->SetBinContent(6,1);
   lep2_pt_total__191->SetBinContent(7,1);
   lep2_pt_total__191->SetBinContent(8,1);
   lep2_pt_total__191->SetBinContent(9,1);
   lep2_pt_total__191->SetBinContent(10,1);
   lep2_pt_total__191->SetBinContent(11,1);
   lep2_pt_total__191->SetBinContent(12,1);
   lep2_pt_total__191->SetBinContent(13,1);
   lep2_pt_total__191->SetBinContent(14,1);
   lep2_pt_total__191->SetBinContent(15,1);
   lep2_pt_total__191->SetBinContent(16,1);
   lep2_pt_total__191->SetBinContent(17,1);
   lep2_pt_total__191->SetBinContent(18,1);
   lep2_pt_total__191->SetBinContent(19,1);
   lep2_pt_total__191->SetBinContent(20,1);
   lep2_pt_total__191->SetMinimum(0.5);
   lep2_pt_total__191->SetMaximum(2);
   lep2_pt_total__191->SetEntries(15172);

   ci = TColor::GetColor("#00cc00");
   lep2_pt_total__191->SetFillColor(ci);

   ci = TColor::GetColor("#6666ff");
   lep2_pt_total__191->SetMarkerColor(ci);
   lep2_pt_total__191->SetMarkerSize(1.1);
   lep2_pt_total__191->GetXaxis()->SetTitle("p_{T}(l2) [GeV]");
   lep2_pt_total__191->GetXaxis()->SetMoreLogLabels();
   lep2_pt_total__191->GetXaxis()->SetLabelFont(42);
   lep2_pt_total__191->GetXaxis()->SetLabelOffset(0.015);
   lep2_pt_total__191->GetXaxis()->SetLabelSize(0.1);
   lep2_pt_total__191->GetXaxis()->SetTitleSize(0.14);
   lep2_pt_total__191->GetXaxis()->SetTitleFont(42);
   lep2_pt_total__191->GetYaxis()->SetTitle("Data/pred.");
   lep2_pt_total__191->GetYaxis()->SetDecimals();
   lep2_pt_total__191->GetYaxis()->SetNdivisions(505);
   lep2_pt_total__191->GetYaxis()->SetLabelFont(42);
   lep2_pt_total__191->GetYaxis()->SetLabelOffset(0.01);
   lep2_pt_total__191->GetYaxis()->SetLabelSize(0.11);
   lep2_pt_total__191->GetYaxis()->SetTitleSize(0.14);
   lep2_pt_total__191->GetYaxis()->SetTitleOffset(0.62);
   lep2_pt_total__191->GetYaxis()->SetTitleFont(42);
   lep2_pt_total__191->GetZaxis()->SetLabelFont(42);
   lep2_pt_total__191->GetZaxis()->SetLabelOffset(0.007);
   lep2_pt_total__191->GetZaxis()->SetLabelSize(0.05);
   lep2_pt_total__191->GetZaxis()->SetTitleSize(0.06);
   lep2_pt_total__191->GetZaxis()->SetTitleFont(42);
   lep2_pt_total__191->Draw("AXIS");
   
   Double_t lep2_pt_total_errors_fx3238[18] = {
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
   Double_t lep2_pt_total_errors_fy3238[18] = {
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
   Double_t lep2_pt_total_errors_felx3238[18] = {
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
   Double_t lep2_pt_total_errors_fely3238[18] = {
   0.06088595,
   0.02604848,
   0.02334501,
   0.02326585,
   0.04067435,
   0.04671274,
   0.04564231,
   0.08745434,
   0.07310342,
   0.07813388,
   0.1698479,
   0.1214088,
   0.1303336,
   0.1401234,
   0.1759081,
   0.1666667,
   0.243021,
   0.1122271};
   Double_t lep2_pt_total_errors_fehx3238[18] = {
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
   Double_t lep2_pt_total_errors_fehy3238[18] = {
   0.06088595,
   0.02604848,
   0.02334501,
   0.02326585,
   0.04067435,
   0.04671274,
   0.04564231,
   0.08745434,
   0.07310342,
   0.07813388,
   0.1698479,
   0.1214088,
   0.1303336,
   0.1401234,
   0.1759081,
   0.1666667,
   0.243021,
   0.1122271};
   grae = new TGraphAsymmErrors(18,lep2_pt_total_errors_fx3238,lep2_pt_total_errors_fy3238,lep2_pt_total_errors_felx3238,lep2_pt_total_errors_fehx3238,lep2_pt_total_errors_fely3238,lep2_pt_total_errors_fehy3238);
   grae->SetName("lep2_pt_total_errors");
   grae->SetTitle("Graph");

   ci = TColor::GetColor("#00ffff");
   grae->SetFillColor(ci);

   ci = TColor::GetColor("#00ffff");
   grae->SetMarkerColor(ci);
   grae->Draw("e2");
   
   Double_t lep2_pt_total_errors_fx3239[18] = {
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
   Double_t lep2_pt_total_errors_fy3239[18] = {
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
   Double_t lep2_pt_total_errors_felx3239[18] = {
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
   Double_t lep2_pt_total_errors_fely3239[18] = {
   0.06088595,
   0.02604848,
   0.02334501,
   0.02326585,
   0.04067435,
   0.04671274,
   0.04564231,
   0.08745434,
   0.07310342,
   0.07813388,
   0.1698479,
   0.1214088,
   0.1303336,
   0.1401234,
   0.1759081,
   0.1666667,
   0.243021,
   0.1122271};
   Double_t lep2_pt_total_errors_fehx3239[18] = {
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
   Double_t lep2_pt_total_errors_fehy3239[18] = {
   0.06088595,
   0.02604848,
   0.02334501,
   0.02326585,
   0.04067435,
   0.04671274,
   0.04564231,
   0.08745434,
   0.07310342,
   0.07813388,
   0.1698479,
   0.1214088,
   0.1303336,
   0.1401234,
   0.1759081,
   0.1666667,
   0.243021,
   0.1122271};
   grae = new TGraphAsymmErrors(18,lep2_pt_total_errors_fx3239,lep2_pt_total_errors_fy3239,lep2_pt_total_errors_felx3239,lep2_pt_total_errors_fehx3239,lep2_pt_total_errors_fely3239,lep2_pt_total_errors_fehy3239);
   grae->SetName("lep2_pt_total_errors");
   grae->SetTitle("Graph");

   ci = TColor::GetColor("#6666ff");
   grae->SetFillColor(ci);

   ci = TColor::GetColor("#6666ff");
   grae->SetMarkerColor(ci);
   grae->Draw("e2 ");
   
   TH1D *lep2_pt_total__192 = new TH1D("lep2_pt_total__192","dummy",20,0,200);
   lep2_pt_total__192->SetBinContent(3,1);
   lep2_pt_total__192->SetBinContent(4,1);
   lep2_pt_total__192->SetBinContent(5,1);
   lep2_pt_total__192->SetBinContent(6,1);
   lep2_pt_total__192->SetBinContent(7,1);
   lep2_pt_total__192->SetBinContent(8,1);
   lep2_pt_total__192->SetBinContent(9,1);
   lep2_pt_total__192->SetBinContent(10,1);
   lep2_pt_total__192->SetBinContent(11,1);
   lep2_pt_total__192->SetBinContent(12,1);
   lep2_pt_total__192->SetBinContent(13,1);
   lep2_pt_total__192->SetBinContent(14,1);
   lep2_pt_total__192->SetBinContent(15,1);
   lep2_pt_total__192->SetBinContent(16,1);
   lep2_pt_total__192->SetBinContent(17,1);
   lep2_pt_total__192->SetBinContent(18,1);
   lep2_pt_total__192->SetBinContent(19,1);
   lep2_pt_total__192->SetBinContent(20,1);
   lep2_pt_total__192->SetMinimum(0.5);
   lep2_pt_total__192->SetMaximum(2);
   lep2_pt_total__192->SetEntries(15172);

   ci = TColor::GetColor("#00cc00");
   lep2_pt_total__192->SetFillColor(ci);

   ci = TColor::GetColor("#6666ff");
   lep2_pt_total__192->SetMarkerColor(ci);
   lep2_pt_total__192->SetMarkerSize(1.1);
   lep2_pt_total__192->GetXaxis()->SetTitle("p_{T}(l2) [GeV]");
   lep2_pt_total__192->GetXaxis()->SetMoreLogLabels();
   lep2_pt_total__192->GetXaxis()->SetLabelFont(42);
   lep2_pt_total__192->GetXaxis()->SetLabelOffset(0.015);
   lep2_pt_total__192->GetXaxis()->SetLabelSize(0.1);
   lep2_pt_total__192->GetXaxis()->SetTitleSize(0.14);
   lep2_pt_total__192->GetXaxis()->SetTitleFont(42);
   lep2_pt_total__192->GetYaxis()->SetTitle("Data/pred.");
   lep2_pt_total__192->GetYaxis()->SetDecimals();
   lep2_pt_total__192->GetYaxis()->SetNdivisions(505);
   lep2_pt_total__192->GetYaxis()->SetLabelFont(42);
   lep2_pt_total__192->GetYaxis()->SetLabelOffset(0.01);
   lep2_pt_total__192->GetYaxis()->SetLabelSize(0.11);
   lep2_pt_total__192->GetYaxis()->SetTitleSize(0.14);
   lep2_pt_total__192->GetYaxis()->SetTitleOffset(0.62);
   lep2_pt_total__192->GetYaxis()->SetTitleFont(42);
   lep2_pt_total__192->GetZaxis()->SetLabelFont(42);
   lep2_pt_total__192->GetZaxis()->SetLabelOffset(0.007);
   lep2_pt_total__192->GetZaxis()->SetLabelSize(0.05);
   lep2_pt_total__192->GetZaxis()->SetTitleSize(0.06);
   lep2_pt_total__192->GetZaxis()->SetTitleFont(42);
   lep2_pt_total__192->Draw("AXIS SAME");
   TLine *line = new TLine(0,1,200,1);
   line->SetLineColor(58);
   line->SetLineWidth(2);
   line->Draw();
   
   Double_t data_div_fx3240[20] = {
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
   Double_t data_div_fy3240[20] = {
   0,
   0,
   0.9123018,
   0.8737489,
   1.058381,
   1.023643,
   1.12185,
   0.9260716,
   1.362106,
   1.319041,
   1.486711,
   1.231038,
   0.858381,
   1.749909,
   0.7102852,
   1.089587,
   0,
   0.9213398,
   2.642598,
   0.7638078};
   Double_t data_div_felx3240[20] = {
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
   Double_t data_div_fely3240[20] = {
   0,
   0,
   0.09153655,
   0.04648393,
   0.05125969,
   0.06804277,
   0.09470225,
   0.1096472,
   0.1711559,
   0.1959013,
   0.2792792,
   0.2799185,
   0.266849,
   0.519506,
   0.3399366,
   0.4706416,
   0,
   0.501432,
   1.264726,
   0.3029732};
   Double_t data_div_fehx3240[20] = {
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
   Double_t data_div_fehy3240[20] = {
   0,
   0,
   0.1012161,
   0.04902517,
   0.05380448,
   0.07272318,
   0.103055,
   0.1234667,
   0.1941425,
   0.2274046,
   0.3374078,
   0.3521615,
   0.3662742,
   0.7026059,
   0.5616251,
   0.7371143,
   0.5645145,
   0.8962309,
   2.089512,
   0.4562113};
   grae = new TGraphAsymmErrors(20,data_div_fx3240,data_div_fy3240,data_div_felx3240,data_div_fehx3240,data_div_fely3240,data_div_fehy3240);
   grae->SetName("data_div");
   grae->SetTitle("Graph");
   grae->SetFillStyle(1000);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.1);
   
   TH1F *Graph_lep2_pt_data_graph3240 = new TH1F("Graph_lep2_pt_data_graph3240","Graph",100,0,220);
   Graph_lep2_pt_data_graph3240->SetMinimum(0);
   Graph_lep2_pt_data_graph3240->SetMaximum(492.422);
   Graph_lep2_pt_data_graph3240->SetDirectory(0);
   Graph_lep2_pt_data_graph3240->SetStats(0);
   Graph_lep2_pt_data_graph3240->SetLineStyle(0);
   Graph_lep2_pt_data_graph3240->SetMarkerStyle(20);
   Graph_lep2_pt_data_graph3240->GetXaxis()->SetLabelFont(42);
   Graph_lep2_pt_data_graph3240->GetXaxis()->SetLabelOffset(0.007);
   Graph_lep2_pt_data_graph3240->GetXaxis()->SetLabelSize(0.05);
   Graph_lep2_pt_data_graph3240->GetXaxis()->SetTitleSize(0.06);
   Graph_lep2_pt_data_graph3240->GetXaxis()->SetTitleOffset(0.9);
   Graph_lep2_pt_data_graph3240->GetXaxis()->SetTitleFont(42);
   Graph_lep2_pt_data_graph3240->GetYaxis()->SetLabelFont(42);
   Graph_lep2_pt_data_graph3240->GetYaxis()->SetLabelOffset(0.007);
   Graph_lep2_pt_data_graph3240->GetYaxis()->SetLabelSize(0.05);
   Graph_lep2_pt_data_graph3240->GetYaxis()->SetTitleSize(0.06);
   Graph_lep2_pt_data_graph3240->GetYaxis()->SetTitleOffset(1.35);
   Graph_lep2_pt_data_graph3240->GetYaxis()->SetTitleFont(42);
   Graph_lep2_pt_data_graph3240->GetZaxis()->SetLabelFont(42);
   Graph_lep2_pt_data_graph3240->GetZaxis()->SetLabelOffset(0.007);
   Graph_lep2_pt_data_graph3240->GetZaxis()->SetLabelSize(0.05);
   Graph_lep2_pt_data_graph3240->GetZaxis()->SetTitleSize(0.06);
   Graph_lep2_pt_data_graph3240->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_lep2_pt_data_graph3240);
   
   grae->Draw("pz ");
   
   leg = new TLegend(0,0,0,0,NULL,"brNDC");
   leg->SetBorderSize(1);
   leg->SetTextSize(0.084);
   leg->SetLineColor(0);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   entry=leg->AddEntry("lep2_pt_total_errors","stat. unc.","F");
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
   entry=leg->AddEntry("lep2_pt_total_errors","total unc.","F");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   leg->Draw();
   pad2->Modified();
   lep2_pt_canvas->cd();
   lep2_pt_canvas->Modified();
   lep2_pt_canvas->cd();
   lep2_pt_canvas->SetSelected(lep2_pt_canvas);
}
