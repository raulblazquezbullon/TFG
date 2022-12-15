void nLepTight()
{
//=========Macro generated from canvas: nLepTight_canvas/nLepTight
//=========  (Thu Dec 15 18:18:05 2022) by ROOT version 6.12/07
   TCanvas *nLepTight_canvas = new TCanvas("nLepTight_canvas", "nLepTight",0,0,600,750);
   gStyle->SetOptFit(1);
   gStyle->SetOptStat(0);
   gStyle->SetOptTitle(0);
   nLepTight_canvas->SetHighLightColor(2);
   nLepTight_canvas->Range(0,0,1,1);
   nLepTight_canvas->SetFillColor(0);
   nLepTight_canvas->SetBorderMode(0);
   nLepTight_canvas->SetBorderSize(2);
   nLepTight_canvas->SetTickx(1);
   nLepTight_canvas->SetTicky(1);
   nLepTight_canvas->SetLeftMargin(0.18);
   nLepTight_canvas->SetRightMargin(0.04);
   nLepTight_canvas->SetBottomMargin(0.13);
   nLepTight_canvas->SetFrameFillStyle(0);
   nLepTight_canvas->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: pad1
   TPad *pad1 = new TPad("pad1", "pad1",0,0.3,1,1);
   pad1->Draw();
   pad1->cd();
   pad1->Range(-4.192308,-20.84778,16.32051,813.0632);
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
   
   TH1D *nLepTight_total__5 = new TH1D("nLepTight_total__5","dummy",16,-0.5,15.5);
   nLepTight_total__5->SetBinContent(4,232.143);
   nLepTight_total__5->SetBinContent(8,279.1637);
   nLepTight_total__5->SetBinContent(12,436.7351);
   nLepTight_total__5->SetBinContent(16,547.9028);
   nLepTight_total__5->SetBinError(4,7.440654);
   nLepTight_total__5->SetBinError(8,6.360375);
   nLepTight_total__5->SetBinError(12,11.6598);
   nLepTight_total__5->SetBinError(16,9.979856);
   nLepTight_total__5->SetMinimum(0);
   nLepTight_total__5->SetMaximum(763.0286);
   nLepTight_total__5->SetEntries(15164);
   nLepTight_total__5->SetDirectory(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#00cc00");
   nLepTight_total__5->SetFillColor(ci);
   nLepTight_total__5->SetMarkerStyle(20);
   nLepTight_total__5->SetMarkerSize(1.1);
   nLepTight_total__5->GetXaxis()->SetTitle("nMuon*4+nTight");
   nLepTight_total__5->GetXaxis()->SetMoreLogLabels();
   nLepTight_total__5->GetXaxis()->SetLabelFont(42);
   nLepTight_total__5->GetXaxis()->SetLabelOffset(999);
   nLepTight_total__5->GetXaxis()->SetLabelSize(0.05);
   nLepTight_total__5->GetXaxis()->SetTitleSize(0.05);
   nLepTight_total__5->GetXaxis()->SetTitleOffset(999);
   nLepTight_total__5->GetXaxis()->SetTitleFont(42);
   nLepTight_total__5->GetYaxis()->SetTitle("Events");
   nLepTight_total__5->GetYaxis()->SetLabelFont(42);
   nLepTight_total__5->GetYaxis()->SetLabelOffset(0.007);
   nLepTight_total__5->GetYaxis()->SetLabelSize(0.05);
   nLepTight_total__5->GetYaxis()->SetTitleSize(0.06);
   nLepTight_total__5->GetYaxis()->SetTitleOffset(1.48);
   nLepTight_total__5->GetYaxis()->SetTitleFont(42);
   nLepTight_total__5->GetZaxis()->SetLabelFont(42);
   nLepTight_total__5->GetZaxis()->SetLabelOffset(0.007);
   nLepTight_total__5->GetZaxis()->SetLabelSize(0.05);
   nLepTight_total__5->GetZaxis()->SetTitleSize(0.06);
   nLepTight_total__5->GetZaxis()->SetTitleFont(42);
   nLepTight_total__5->Draw("HIST");
   
   THStack *nLepTight_stack = new THStack();
   nLepTight_stack->SetName("nLepTight_stack");
   nLepTight_stack->SetTitle("nLepTight");
   
   TH1F *nLepTight_stack_stack_2 = new TH1F("nLepTight_stack_stack_2","nLepTight",16,-0.5,15.5);
   nLepTight_stack_stack_2->SetMinimum(0);
   nLepTight_stack_stack_2->SetMaximum(575.2979);
   nLepTight_stack_stack_2->SetDirectory(0);
   nLepTight_stack_stack_2->SetStats(0);
   nLepTight_stack_stack_2->SetLineStyle(0);
   nLepTight_stack_stack_2->SetMarkerStyle(20);
   nLepTight_stack_stack_2->GetXaxis()->SetLabelFont(42);
   nLepTight_stack_stack_2->GetXaxis()->SetLabelOffset(0.007);
   nLepTight_stack_stack_2->GetXaxis()->SetLabelSize(0.05);
   nLepTight_stack_stack_2->GetXaxis()->SetTitleSize(0.06);
   nLepTight_stack_stack_2->GetXaxis()->SetTitleOffset(0.9);
   nLepTight_stack_stack_2->GetXaxis()->SetTitleFont(42);
   nLepTight_stack_stack_2->GetYaxis()->SetLabelFont(42);
   nLepTight_stack_stack_2->GetYaxis()->SetLabelOffset(0.007);
   nLepTight_stack_stack_2->GetYaxis()->SetLabelSize(0.05);
   nLepTight_stack_stack_2->GetYaxis()->SetTitleSize(0.06);
   nLepTight_stack_stack_2->GetYaxis()->SetTitleOffset(1.35);
   nLepTight_stack_stack_2->GetYaxis()->SetTitleFont(42);
   nLepTight_stack_stack_2->GetZaxis()->SetLabelFont(42);
   nLepTight_stack_stack_2->GetZaxis()->SetLabelOffset(0.007);
   nLepTight_stack_stack_2->GetZaxis()->SetLabelSize(0.05);
   nLepTight_stack_stack_2->GetZaxis()->SetTitleSize(0.06);
   nLepTight_stack_stack_2->GetZaxis()->SetTitleFont(42);
   nLepTight_stack->SetHistogram(nLepTight_stack_stack_2);
   
   
   TH1D *nLepTight_fakes_VV_stack_1 = new TH1D("nLepTight_fakes_VV_stack_1","dummy",16,-0.5,15.5);
   nLepTight_fakes_VV_stack_1->SetBinContent(4,0.1943867);
   nLepTight_fakes_VV_stack_1->SetBinContent(8,0.09719337);
   nLepTight_fakes_VV_stack_1->SetBinContent(12,0.3887735);
   nLepTight_fakes_VV_stack_1->SetBinError(4,0.1374522);
   nLepTight_fakes_VV_stack_1->SetBinError(8,0.09719337);
   nLepTight_fakes_VV_stack_1->SetBinError(12,0.1943867);
   nLepTight_fakes_VV_stack_1->SetEntries(13);

   ci = TColor::GetColor("#2e3294");
   nLepTight_fakes_VV_stack_1->SetFillColor(ci);
   nLepTight_fakes_VV_stack_1->SetMarkerStyle(0);
   nLepTight_fakes_VV_stack_1->SetMarkerSize(1.1);
   nLepTight_fakes_VV_stack_1->GetXaxis()->SetTitle("nMuon*4+nTight");
   nLepTight_fakes_VV_stack_1->GetXaxis()->SetMoreLogLabels();
   nLepTight_fakes_VV_stack_1->GetXaxis()->SetLabelFont(42);
   nLepTight_fakes_VV_stack_1->GetXaxis()->SetLabelOffset(0.007);
   nLepTight_fakes_VV_stack_1->GetXaxis()->SetLabelSize(0.05);
   nLepTight_fakes_VV_stack_1->GetXaxis()->SetTitleSize(0.06);
   nLepTight_fakes_VV_stack_1->GetXaxis()->SetTitleOffset(0.9);
   nLepTight_fakes_VV_stack_1->GetXaxis()->SetTitleFont(42);
   nLepTight_fakes_VV_stack_1->GetYaxis()->SetTitle("Events");
   nLepTight_fakes_VV_stack_1->GetYaxis()->SetLabelFont(42);
   nLepTight_fakes_VV_stack_1->GetYaxis()->SetLabelOffset(0.007);
   nLepTight_fakes_VV_stack_1->GetYaxis()->SetLabelSize(0.05);
   nLepTight_fakes_VV_stack_1->GetYaxis()->SetTitleSize(0.06);
   nLepTight_fakes_VV_stack_1->GetYaxis()->SetTitleOffset(1.35);
   nLepTight_fakes_VV_stack_1->GetYaxis()->SetTitleFont(42);
   nLepTight_fakes_VV_stack_1->GetZaxis()->SetLabelFont(42);
   nLepTight_fakes_VV_stack_1->GetZaxis()->SetLabelOffset(0.007);
   nLepTight_fakes_VV_stack_1->GetZaxis()->SetLabelSize(0.05);
   nLepTight_fakes_VV_stack_1->GetZaxis()->SetTitleSize(0.06);
   nLepTight_fakes_VV_stack_1->GetZaxis()->SetTitleFont(42);
   nLepTight_stack->Add(nLepTight_fakes_VV_stack_1,"");
   
   TH1D *nLepTight_fakes_TT_stack_2 = new TH1D("nLepTight_fakes_TT_stack_2","dummy",16,-0.5,15.5);
   nLepTight_fakes_TT_stack_2->SetBinContent(4,5.232204);
   nLepTight_fakes_TT_stack_2->SetBinContent(8,10.57258);
   nLepTight_fakes_TT_stack_2->SetBinContent(12,16.93519);
   nLepTight_fakes_TT_stack_2->SetBinContent(16,22.30435);
   nLepTight_fakes_TT_stack_2->SetBinError(4,0.5941644);
   nLepTight_fakes_TT_stack_2->SetBinError(8,0.8384603);
   nLepTight_fakes_TT_stack_2->SetBinError(12,1.071867);
   nLepTight_fakes_TT_stack_2->SetBinError(16,1.239048);
   nLepTight_fakes_TT_stack_2->SetEntries(845);

   ci = TColor::GetColor("#666666");
   nLepTight_fakes_TT_stack_2->SetFillColor(ci);
   nLepTight_fakes_TT_stack_2->SetMarkerStyle(0);
   nLepTight_fakes_TT_stack_2->SetMarkerSize(1.1);
   nLepTight_fakes_TT_stack_2->GetXaxis()->SetTitle("nMuon*4+nTight");
   nLepTight_fakes_TT_stack_2->GetXaxis()->SetMoreLogLabels();
   nLepTight_fakes_TT_stack_2->GetXaxis()->SetLabelFont(42);
   nLepTight_fakes_TT_stack_2->GetXaxis()->SetLabelOffset(0.007);
   nLepTight_fakes_TT_stack_2->GetXaxis()->SetLabelSize(0.05);
   nLepTight_fakes_TT_stack_2->GetXaxis()->SetTitleSize(0.06);
   nLepTight_fakes_TT_stack_2->GetXaxis()->SetTitleOffset(0.9);
   nLepTight_fakes_TT_stack_2->GetXaxis()->SetTitleFont(42);
   nLepTight_fakes_TT_stack_2->GetYaxis()->SetTitle("Events");
   nLepTight_fakes_TT_stack_2->GetYaxis()->SetLabelFont(42);
   nLepTight_fakes_TT_stack_2->GetYaxis()->SetLabelOffset(0.007);
   nLepTight_fakes_TT_stack_2->GetYaxis()->SetLabelSize(0.05);
   nLepTight_fakes_TT_stack_2->GetYaxis()->SetTitleSize(0.06);
   nLepTight_fakes_TT_stack_2->GetYaxis()->SetTitleOffset(1.35);
   nLepTight_fakes_TT_stack_2->GetYaxis()->SetTitleFont(42);
   nLepTight_fakes_TT_stack_2->GetZaxis()->SetLabelFont(42);
   nLepTight_fakes_TT_stack_2->GetZaxis()->SetLabelOffset(0.007);
   nLepTight_fakes_TT_stack_2->GetZaxis()->SetLabelSize(0.05);
   nLepTight_fakes_TT_stack_2->GetZaxis()->SetTitleSize(0.06);
   nLepTight_fakes_TT_stack_2->GetZaxis()->SetTitleFont(42);
   nLepTight_stack->Add(nLepTight_fakes_TT_stack_2,"");
   
   TH1D *nLepTight_fakes_DY_stack_3 = new TH1D("nLepTight_fakes_DY_stack_3","dummy",16,-0.5,15.5);
   nLepTight_fakes_DY_stack_3->SetBinContent(4,20.63427);
   nLepTight_fakes_DY_stack_3->SetBinContent(8,8.597611);
   nLepTight_fakes_DY_stack_3->SetBinContent(12,58.46375);
   nLepTight_fakes_DY_stack_3->SetBinContent(16,29.23188);
   nLepTight_fakes_DY_stack_3->SetBinError(4,5.956599);
   nLepTight_fakes_DY_stack_3->SetBinError(8,3.844968);
   nLepTight_fakes_DY_stack_3->SetBinError(12,10.02645);
   nLepTight_fakes_DY_stack_3->SetBinError(16,7.089771);
   nLepTight_fakes_DY_stack_3->SetEntries(74);

   ci = TColor::GetColor("#cccccc");
   nLepTight_fakes_DY_stack_3->SetFillColor(ci);
   nLepTight_fakes_DY_stack_3->SetMarkerStyle(0);
   nLepTight_fakes_DY_stack_3->SetMarkerSize(1.1);
   nLepTight_fakes_DY_stack_3->GetXaxis()->SetTitle("nMuon*4+nTight");
   nLepTight_fakes_DY_stack_3->GetXaxis()->SetMoreLogLabels();
   nLepTight_fakes_DY_stack_3->GetXaxis()->SetLabelFont(42);
   nLepTight_fakes_DY_stack_3->GetXaxis()->SetLabelOffset(0.007);
   nLepTight_fakes_DY_stack_3->GetXaxis()->SetLabelSize(0.05);
   nLepTight_fakes_DY_stack_3->GetXaxis()->SetTitleSize(0.06);
   nLepTight_fakes_DY_stack_3->GetXaxis()->SetTitleOffset(0.9);
   nLepTight_fakes_DY_stack_3->GetXaxis()->SetTitleFont(42);
   nLepTight_fakes_DY_stack_3->GetYaxis()->SetTitle("Events");
   nLepTight_fakes_DY_stack_3->GetYaxis()->SetLabelFont(42);
   nLepTight_fakes_DY_stack_3->GetYaxis()->SetLabelOffset(0.007);
   nLepTight_fakes_DY_stack_3->GetYaxis()->SetLabelSize(0.05);
   nLepTight_fakes_DY_stack_3->GetYaxis()->SetTitleSize(0.06);
   nLepTight_fakes_DY_stack_3->GetYaxis()->SetTitleOffset(1.35);
   nLepTight_fakes_DY_stack_3->GetYaxis()->SetTitleFont(42);
   nLepTight_fakes_DY_stack_3->GetZaxis()->SetLabelFont(42);
   nLepTight_fakes_DY_stack_3->GetZaxis()->SetLabelOffset(0.007);
   nLepTight_fakes_DY_stack_3->GetZaxis()->SetLabelSize(0.05);
   nLepTight_fakes_DY_stack_3->GetZaxis()->SetTitleSize(0.06);
   nLepTight_fakes_DY_stack_3->GetZaxis()->SetTitleFont(42);
   nLepTight_stack->Add(nLepTight_fakes_DY_stack_3,"");
   
   TH1D *nLepTight_prompt_ZZ_stack_4 = new TH1D("nLepTight_prompt_ZZ_stack_4","dummy",16,-0.5,15.5);
   nLepTight_prompt_ZZ_stack_4->SetBinContent(4,9.357756);
   nLepTight_prompt_ZZ_stack_4->SetBinContent(8,15.59626);
   nLepTight_prompt_ZZ_stack_4->SetBinContent(12,17.06414);
   nLepTight_prompt_ZZ_stack_4->SetBinContent(16,31.19252);
   nLepTight_prompt_ZZ_stack_4->SetBinError(4,1.310348);
   nLepTight_prompt_ZZ_stack_4->SetBinError(8,1.691652);
   nLepTight_prompt_ZZ_stack_4->SetBinError(12,1.769469);
   nLepTight_prompt_ZZ_stack_4->SetBinError(16,2.392357);
   nLepTight_prompt_ZZ_stack_4->SetEntries(405);

   ci = TColor::GetColor("#00cc00");
   nLepTight_prompt_ZZ_stack_4->SetFillColor(ci);
   nLepTight_prompt_ZZ_stack_4->SetMarkerStyle(0);
   nLepTight_prompt_ZZ_stack_4->SetMarkerSize(1.1);
   nLepTight_prompt_ZZ_stack_4->GetXaxis()->SetTitle("nMuon*4+nTight");
   nLepTight_prompt_ZZ_stack_4->GetXaxis()->SetMoreLogLabels();
   nLepTight_prompt_ZZ_stack_4->GetXaxis()->SetLabelFont(42);
   nLepTight_prompt_ZZ_stack_4->GetXaxis()->SetLabelOffset(0.007);
   nLepTight_prompt_ZZ_stack_4->GetXaxis()->SetLabelSize(0.05);
   nLepTight_prompt_ZZ_stack_4->GetXaxis()->SetTitleSize(0.06);
   nLepTight_prompt_ZZ_stack_4->GetXaxis()->SetTitleOffset(0.9);
   nLepTight_prompt_ZZ_stack_4->GetXaxis()->SetTitleFont(42);
   nLepTight_prompt_ZZ_stack_4->GetYaxis()->SetTitle("Events");
   nLepTight_prompt_ZZ_stack_4->GetYaxis()->SetLabelFont(42);
   nLepTight_prompt_ZZ_stack_4->GetYaxis()->SetLabelOffset(0.007);
   nLepTight_prompt_ZZ_stack_4->GetYaxis()->SetLabelSize(0.05);
   nLepTight_prompt_ZZ_stack_4->GetYaxis()->SetTitleSize(0.06);
   nLepTight_prompt_ZZ_stack_4->GetYaxis()->SetTitleOffset(1.35);
   nLepTight_prompt_ZZ_stack_4->GetYaxis()->SetTitleFont(42);
   nLepTight_prompt_ZZ_stack_4->GetZaxis()->SetLabelFont(42);
   nLepTight_prompt_ZZ_stack_4->GetZaxis()->SetLabelOffset(0.007);
   nLepTight_prompt_ZZ_stack_4->GetZaxis()->SetLabelSize(0.05);
   nLepTight_prompt_ZZ_stack_4->GetZaxis()->SetTitleSize(0.06);
   nLepTight_prompt_ZZ_stack_4->GetZaxis()->SetTitleFont(42);
   nLepTight_stack->Add(nLepTight_prompt_ZZ_stack_4,"");
   
   TH1D *nLepTight_prompt_WZ_stack_5 = new TH1D("nLepTight_prompt_WZ_stack_5","dummy",16,-0.5,15.5);
   nLepTight_prompt_WZ_stack_5->SetBinContent(4,196.7244);
   nLepTight_prompt_WZ_stack_5->SetBinContent(8,244.3);
   nLepTight_prompt_WZ_stack_5->SetBinContent(12,343.8833);
   nLepTight_prompt_WZ_stack_5->SetBinContent(16,465.174);
   nLepTight_prompt_WZ_stack_5->SetBinError(4,4.218213);
   nLepTight_prompt_WZ_stack_5->SetBinError(8,4.700686);
   nLepTight_prompt_WZ_stack_5->SetBinError(12,5.577056);
   nLepTight_prompt_WZ_stack_5->SetBinError(16,6.486452);
   nLepTight_prompt_WZ_stack_5->SetEntries(13827);

   ci = TColor::GetColor("#ffcc00");
   nLepTight_prompt_WZ_stack_5->SetFillColor(ci);
   nLepTight_prompt_WZ_stack_5->SetMarkerStyle(0);
   nLepTight_prompt_WZ_stack_5->SetMarkerSize(1.1);
   nLepTight_prompt_WZ_stack_5->GetXaxis()->SetTitle("nMuon*4+nTight");
   nLepTight_prompt_WZ_stack_5->GetXaxis()->SetMoreLogLabels();
   nLepTight_prompt_WZ_stack_5->GetXaxis()->SetLabelFont(42);
   nLepTight_prompt_WZ_stack_5->GetXaxis()->SetLabelOffset(0.007);
   nLepTight_prompt_WZ_stack_5->GetXaxis()->SetLabelSize(0.05);
   nLepTight_prompt_WZ_stack_5->GetXaxis()->SetTitleSize(0.06);
   nLepTight_prompt_WZ_stack_5->GetXaxis()->SetTitleOffset(0.9);
   nLepTight_prompt_WZ_stack_5->GetXaxis()->SetTitleFont(42);
   nLepTight_prompt_WZ_stack_5->GetYaxis()->SetTitle("Events");
   nLepTight_prompt_WZ_stack_5->GetYaxis()->SetLabelFont(42);
   nLepTight_prompt_WZ_stack_5->GetYaxis()->SetLabelOffset(0.007);
   nLepTight_prompt_WZ_stack_5->GetYaxis()->SetLabelSize(0.05);
   nLepTight_prompt_WZ_stack_5->GetYaxis()->SetTitleSize(0.06);
   nLepTight_prompt_WZ_stack_5->GetYaxis()->SetTitleOffset(1.35);
   nLepTight_prompt_WZ_stack_5->GetYaxis()->SetTitleFont(42);
   nLepTight_prompt_WZ_stack_5->GetZaxis()->SetLabelFont(42);
   nLepTight_prompt_WZ_stack_5->GetZaxis()->SetLabelOffset(0.007);
   nLepTight_prompt_WZ_stack_5->GetZaxis()->SetLabelSize(0.05);
   nLepTight_prompt_WZ_stack_5->GetZaxis()->SetTitleSize(0.06);
   nLepTight_prompt_WZ_stack_5->GetZaxis()->SetTitleFont(42);
   nLepTight_stack->Add(nLepTight_prompt_WZ_stack_5,"");
   nLepTight_stack->Draw("same hist");
   
   TH1D *nLepTight_total__6 = new TH1D("nLepTight_total__6","dummy",16,-0.5,15.5);
   nLepTight_total__6->SetBinContent(4,232.143);
   nLepTight_total__6->SetBinContent(8,279.1637);
   nLepTight_total__6->SetBinContent(12,436.7351);
   nLepTight_total__6->SetBinContent(16,547.9028);
   nLepTight_total__6->SetBinError(4,7.440654);
   nLepTight_total__6->SetBinError(8,6.360375);
   nLepTight_total__6->SetBinError(12,11.6598);
   nLepTight_total__6->SetBinError(16,9.979856);
   nLepTight_total__6->SetMinimum(0);
   nLepTight_total__6->SetMaximum(763.0286);
   nLepTight_total__6->SetEntries(15164);
   nLepTight_total__6->SetDirectory(0);

   ci = TColor::GetColor("#00cc00");
   nLepTight_total__6->SetFillColor(ci);
   nLepTight_total__6->SetMarkerStyle(20);
   nLepTight_total__6->SetMarkerSize(1.1);
   nLepTight_total__6->GetXaxis()->SetTitle("nMuon*4+nTight");
   nLepTight_total__6->GetXaxis()->SetMoreLogLabels();
   nLepTight_total__6->GetXaxis()->SetLabelFont(42);
   nLepTight_total__6->GetXaxis()->SetLabelOffset(999);
   nLepTight_total__6->GetXaxis()->SetLabelSize(0.05);
   nLepTight_total__6->GetXaxis()->SetTitleSize(0.05);
   nLepTight_total__6->GetXaxis()->SetTitleOffset(999);
   nLepTight_total__6->GetXaxis()->SetTitleFont(42);
   nLepTight_total__6->GetYaxis()->SetTitle("Events");
   nLepTight_total__6->GetYaxis()->SetLabelFont(42);
   nLepTight_total__6->GetYaxis()->SetLabelOffset(0.007);
   nLepTight_total__6->GetYaxis()->SetLabelSize(0.05);
   nLepTight_total__6->GetYaxis()->SetTitleSize(0.06);
   nLepTight_total__6->GetYaxis()->SetTitleOffset(1.48);
   nLepTight_total__6->GetYaxis()->SetTitleFont(42);
   nLepTight_total__6->GetZaxis()->SetLabelFont(42);
   nLepTight_total__6->GetZaxis()->SetLabelOffset(0.007);
   nLepTight_total__6->GetZaxis()->SetLabelSize(0.05);
   nLepTight_total__6->GetZaxis()->SetTitleSize(0.06);
   nLepTight_total__6->GetZaxis()->SetTitleFont(42);
   nLepTight_total__6->Draw("AXIS SAME");
   
   Double_t nLepTight_total_errors_fx3006[4] = {
   3,
   7,
   11,
   15};
   Double_t nLepTight_total_errors_fy3006[4] = {
   232.143,
   279.1637,
   436.7351,
   547.9028};
   Double_t nLepTight_total_errors_felx3006[4] = {
   0.5,
   0.5,
   0.5,
   0.5};
   Double_t nLepTight_total_errors_fely3006[4] = {
   7.440654,
   6.360375,
   11.6598,
   9.979856};
   Double_t nLepTight_total_errors_fehx3006[4] = {
   0.5,
   0.5,
   0.5,
   0.5};
   Double_t nLepTight_total_errors_fehy3006[4] = {
   7.440654,
   6.360375,
   11.6598,
   9.979856};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(4,nLepTight_total_errors_fx3006,nLepTight_total_errors_fy3006,nLepTight_total_errors_felx3006,nLepTight_total_errors_fehx3006,nLepTight_total_errors_fely3006,nLepTight_total_errors_fehy3006);
   grae->SetName("nLepTight_total_errors");
   grae->SetTitle("Graph");
   grae->SetFillColor(1);
   grae->SetFillStyle(3013);
   grae->SetMarkerStyle(0);
   
   TH1F *Graph_nLepTight_total_errors3006 = new TH1F("Graph_nLepTight_total_errors3006","Graph",100,1.2,16.8);
   Graph_nLepTight_total_errors3006->SetMinimum(191.3843);
   Graph_nLepTight_total_errors3006->SetMaximum(591.2006);
   Graph_nLepTight_total_errors3006->SetDirectory(0);
   Graph_nLepTight_total_errors3006->SetStats(0);
   Graph_nLepTight_total_errors3006->SetLineStyle(0);
   Graph_nLepTight_total_errors3006->SetMarkerStyle(20);
   Graph_nLepTight_total_errors3006->GetXaxis()->SetLabelFont(42);
   Graph_nLepTight_total_errors3006->GetXaxis()->SetLabelOffset(0.007);
   Graph_nLepTight_total_errors3006->GetXaxis()->SetLabelSize(0.05);
   Graph_nLepTight_total_errors3006->GetXaxis()->SetTitleSize(0.06);
   Graph_nLepTight_total_errors3006->GetXaxis()->SetTitleOffset(0.9);
   Graph_nLepTight_total_errors3006->GetXaxis()->SetTitleFont(42);
   Graph_nLepTight_total_errors3006->GetYaxis()->SetLabelFont(42);
   Graph_nLepTight_total_errors3006->GetYaxis()->SetLabelOffset(0.007);
   Graph_nLepTight_total_errors3006->GetYaxis()->SetLabelSize(0.05);
   Graph_nLepTight_total_errors3006->GetYaxis()->SetTitleSize(0.06);
   Graph_nLepTight_total_errors3006->GetYaxis()->SetTitleOffset(1.35);
   Graph_nLepTight_total_errors3006->GetYaxis()->SetTitleFont(42);
   Graph_nLepTight_total_errors3006->GetZaxis()->SetLabelFont(42);
   Graph_nLepTight_total_errors3006->GetZaxis()->SetLabelOffset(0.007);
   Graph_nLepTight_total_errors3006->GetZaxis()->SetLabelSize(0.05);
   Graph_nLepTight_total_errors3006->GetZaxis()->SetTitleSize(0.06);
   Graph_nLepTight_total_errors3006->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_nLepTight_total_errors3006);
   
   grae->Draw("pe2 ");
   
   Double_t nLepTight_data_graph_fx3007[16] = {
   0,
   1,
   2,
   3,
   4,
   5,
   6,
   7,
   8,
   9,
   10,
   11,
   12,
   13,
   14,
   15};
   Double_t nLepTight_data_graph_fy3007[16] = {
   0,
   0,
   0,
   235,
   0,
   0,
   0,
   297,
   0,
   0,
   0,
   426,
   0,
   0,
   0,
   555};
   Double_t nLepTight_data_graph_felx3007[16] = {
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5};
   Double_t nLepTight_data_graph_fely3007[16] = {
   0,
   0,
   0,
   15.31912,
   0,
   0,
   0,
   17.22435,
   0,
   0,
   0,
   20.63211,
   0,
   0,
   0,
   23.55185};
   Double_t nLepTight_data_graph_fehx3007[16] = {
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5};
   Double_t nLepTight_data_graph_fehy3007[16] = {
   1.841055,
   1.841055,
   1.841055,
   16.35182,
   1.841055,
   1.841055,
   1.841055,
   18.25343,
   1.841055,
   1.841055,
   1.841055,
   21.65639,
   1.841055,
   1.841055,
   1.841055,
   24.57312};
   grae = new TGraphAsymmErrors(16,nLepTight_data_graph_fx3007,nLepTight_data_graph_fy3007,nLepTight_data_graph_felx3007,nLepTight_data_graph_fehx3007,nLepTight_data_graph_fely3007,nLepTight_data_graph_fehy3007);
   grae->SetName("nLepTight_data_graph");
   grae->SetTitle("Graph");
   grae->SetFillStyle(1000);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.1);
   
   TH1F *Graph_nLepTight_data_graph3007 = new TH1F("Graph_nLepTight_data_graph3007","Graph",100,-2.1,17.1);
   Graph_nLepTight_data_graph3007->SetMinimum(0);
   Graph_nLepTight_data_graph3007->SetMaximum(637.5304);
   Graph_nLepTight_data_graph3007->SetDirectory(0);
   Graph_nLepTight_data_graph3007->SetStats(0);
   Graph_nLepTight_data_graph3007->SetLineStyle(0);
   Graph_nLepTight_data_graph3007->SetMarkerStyle(20);
   Graph_nLepTight_data_graph3007->GetXaxis()->SetLabelFont(42);
   Graph_nLepTight_data_graph3007->GetXaxis()->SetLabelOffset(0.007);
   Graph_nLepTight_data_graph3007->GetXaxis()->SetLabelSize(0.05);
   Graph_nLepTight_data_graph3007->GetXaxis()->SetTitleSize(0.06);
   Graph_nLepTight_data_graph3007->GetXaxis()->SetTitleOffset(0.9);
   Graph_nLepTight_data_graph3007->GetXaxis()->SetTitleFont(42);
   Graph_nLepTight_data_graph3007->GetYaxis()->SetLabelFont(42);
   Graph_nLepTight_data_graph3007->GetYaxis()->SetLabelOffset(0.007);
   Graph_nLepTight_data_graph3007->GetYaxis()->SetLabelSize(0.05);
   Graph_nLepTight_data_graph3007->GetYaxis()->SetTitleSize(0.06);
   Graph_nLepTight_data_graph3007->GetYaxis()->SetTitleOffset(1.35);
   Graph_nLepTight_data_graph3007->GetYaxis()->SetTitleFont(42);
   Graph_nLepTight_data_graph3007->GetZaxis()->SetLabelFont(42);
   Graph_nLepTight_data_graph3007->GetZaxis()->SetLabelOffset(0.007);
   Graph_nLepTight_data_graph3007->GetZaxis()->SetLabelSize(0.05);
   Graph_nLepTight_data_graph3007->GetZaxis()->SetTitleSize(0.06);
   Graph_nLepTight_data_graph3007->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_nLepTight_data_graph3007);
   
   grae->Draw("pz ");
   
   TLegend *leg = new TLegend(0.62,0.628,0.9,0.91,NULL,"brNDC");
   leg->SetBorderSize(1);
   leg->SetTextSize(0.036);
   leg->SetLineColor(0);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("nLepTight_data","Data","LPE");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1.1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("nLepTight_prompt_WZ_stack_5","WZ","F");

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
   entry=leg->AddEntry("nLepTight_prompt_ZZ_stack_4","qqZZ","F");

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
   entry=leg->AddEntry("nLepTight_fakes_DY_stack_3","Fakes DY","F");

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
   entry=leg->AddEntry("nLepTight_fakes_TT_stack_2","Fakes TT","F");

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
   entry=leg->AddEntry("nLepTight_total_errors","Total unc.","F");
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
   nLepTight_canvas->cd();
  
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
   
   TH1D *nLepTight_total__7 = new TH1D("nLepTight_total__7","dummy",16,-0.5,15.5);
   nLepTight_total__7->SetBinContent(4,1);
   nLepTight_total__7->SetBinContent(8,1);
   nLepTight_total__7->SetBinContent(12,1);
   nLepTight_total__7->SetBinContent(16,1);
   nLepTight_total__7->SetMinimum(0.5);
   nLepTight_total__7->SetMaximum(2);
   nLepTight_total__7->SetEntries(15180);

   ci = TColor::GetColor("#00cc00");
   nLepTight_total__7->SetFillColor(ci);

   ci = TColor::GetColor("#6666ff");
   nLepTight_total__7->SetMarkerColor(ci);
   nLepTight_total__7->SetMarkerSize(1.1);
   nLepTight_total__7->GetXaxis()->SetTitle("nMuon*4+nTight");
   nLepTight_total__7->GetXaxis()->SetMoreLogLabels();
   nLepTight_total__7->GetXaxis()->SetLabelFont(42);
   nLepTight_total__7->GetXaxis()->SetLabelOffset(0.015);
   nLepTight_total__7->GetXaxis()->SetLabelSize(0.1);
   nLepTight_total__7->GetXaxis()->SetTitleSize(0.14);
   nLepTight_total__7->GetXaxis()->SetTitleFont(42);
   nLepTight_total__7->GetYaxis()->SetTitle("Data/pred.");
   nLepTight_total__7->GetYaxis()->SetDecimals();
   nLepTight_total__7->GetYaxis()->SetNdivisions(505);
   nLepTight_total__7->GetYaxis()->SetLabelFont(42);
   nLepTight_total__7->GetYaxis()->SetLabelOffset(0.01);
   nLepTight_total__7->GetYaxis()->SetLabelSize(0.11);
   nLepTight_total__7->GetYaxis()->SetTitleSize(0.14);
   nLepTight_total__7->GetYaxis()->SetTitleOffset(0.62);
   nLepTight_total__7->GetYaxis()->SetTitleFont(42);
   nLepTight_total__7->GetZaxis()->SetLabelFont(42);
   nLepTight_total__7->GetZaxis()->SetLabelOffset(0.007);
   nLepTight_total__7->GetZaxis()->SetLabelSize(0.05);
   nLepTight_total__7->GetZaxis()->SetTitleSize(0.06);
   nLepTight_total__7->GetZaxis()->SetTitleFont(42);
   nLepTight_total__7->Draw("AXIS");
   
   Double_t nLepTight_total_errors_fx3008[4] = {
   3,
   7,
   11,
   15};
   Double_t nLepTight_total_errors_fy3008[4] = {
   1,
   1,
   1,
   1};
   Double_t nLepTight_total_errors_felx3008[4] = {
   0.5,
   0.5,
   0.5,
   0.5};
   Double_t nLepTight_total_errors_fely3008[4] = {
   0.03205203,
   0.02278368,
   0.02669765,
   0.01821465};
   Double_t nLepTight_total_errors_fehx3008[4] = {
   0.5,
   0.5,
   0.5,
   0.5};
   Double_t nLepTight_total_errors_fehy3008[4] = {
   0.03205203,
   0.02278368,
   0.02669765,
   0.01821465};
   grae = new TGraphAsymmErrors(4,nLepTight_total_errors_fx3008,nLepTight_total_errors_fy3008,nLepTight_total_errors_felx3008,nLepTight_total_errors_fehx3008,nLepTight_total_errors_fely3008,nLepTight_total_errors_fehy3008);
   grae->SetName("nLepTight_total_errors");
   grae->SetTitle("Graph");

   ci = TColor::GetColor("#00ffff");
   grae->SetFillColor(ci);

   ci = TColor::GetColor("#00ffff");
   grae->SetMarkerColor(ci);
   grae->Draw("e2");
   
   Double_t nLepTight_total_errors_fx3009[4] = {
   3,
   7,
   11,
   15};
   Double_t nLepTight_total_errors_fy3009[4] = {
   1,
   1,
   1,
   1};
   Double_t nLepTight_total_errors_felx3009[4] = {
   0.5,
   0.5,
   0.5,
   0.5};
   Double_t nLepTight_total_errors_fely3009[4] = {
   0.03205203,
   0.02278368,
   0.02669765,
   0.01821465};
   Double_t nLepTight_total_errors_fehx3009[4] = {
   0.5,
   0.5,
   0.5,
   0.5};
   Double_t nLepTight_total_errors_fehy3009[4] = {
   0.03205203,
   0.02278368,
   0.02669765,
   0.01821465};
   grae = new TGraphAsymmErrors(4,nLepTight_total_errors_fx3009,nLepTight_total_errors_fy3009,nLepTight_total_errors_felx3009,nLepTight_total_errors_fehx3009,nLepTight_total_errors_fely3009,nLepTight_total_errors_fehy3009);
   grae->SetName("nLepTight_total_errors");
   grae->SetTitle("Graph");

   ci = TColor::GetColor("#6666ff");
   grae->SetFillColor(ci);

   ci = TColor::GetColor("#6666ff");
   grae->SetMarkerColor(ci);
   grae->Draw("e2 ");
   
   TH1D *nLepTight_total__8 = new TH1D("nLepTight_total__8","dummy",16,-0.5,15.5);
   nLepTight_total__8->SetBinContent(4,1);
   nLepTight_total__8->SetBinContent(8,1);
   nLepTight_total__8->SetBinContent(12,1);
   nLepTight_total__8->SetBinContent(16,1);
   nLepTight_total__8->SetMinimum(0.5);
   nLepTight_total__8->SetMaximum(2);
   nLepTight_total__8->SetEntries(15180);

   ci = TColor::GetColor("#00cc00");
   nLepTight_total__8->SetFillColor(ci);

   ci = TColor::GetColor("#6666ff");
   nLepTight_total__8->SetMarkerColor(ci);
   nLepTight_total__8->SetMarkerSize(1.1);
   nLepTight_total__8->GetXaxis()->SetTitle("nMuon*4+nTight");
   nLepTight_total__8->GetXaxis()->SetMoreLogLabels();
   nLepTight_total__8->GetXaxis()->SetLabelFont(42);
   nLepTight_total__8->GetXaxis()->SetLabelOffset(0.015);
   nLepTight_total__8->GetXaxis()->SetLabelSize(0.1);
   nLepTight_total__8->GetXaxis()->SetTitleSize(0.14);
   nLepTight_total__8->GetXaxis()->SetTitleFont(42);
   nLepTight_total__8->GetYaxis()->SetTitle("Data/pred.");
   nLepTight_total__8->GetYaxis()->SetDecimals();
   nLepTight_total__8->GetYaxis()->SetNdivisions(505);
   nLepTight_total__8->GetYaxis()->SetLabelFont(42);
   nLepTight_total__8->GetYaxis()->SetLabelOffset(0.01);
   nLepTight_total__8->GetYaxis()->SetLabelSize(0.11);
   nLepTight_total__8->GetYaxis()->SetTitleSize(0.14);
   nLepTight_total__8->GetYaxis()->SetTitleOffset(0.62);
   nLepTight_total__8->GetYaxis()->SetTitleFont(42);
   nLepTight_total__8->GetZaxis()->SetLabelFont(42);
   nLepTight_total__8->GetZaxis()->SetLabelOffset(0.007);
   nLepTight_total__8->GetZaxis()->SetLabelSize(0.05);
   nLepTight_total__8->GetZaxis()->SetTitleSize(0.06);
   nLepTight_total__8->GetZaxis()->SetTitleFont(42);
   nLepTight_total__8->Draw("AXIS SAME");
   TLine *line = new TLine(-0.5,1,15.5,1);
   line->SetLineColor(58);
   line->SetLineWidth(2);
   line->Draw();
   
   Double_t data_div_fx3010[16] = {
   0,
   1,
   2,
   3,
   4,
   5,
   6,
   7,
   8,
   9,
   10,
   11,
   12,
   13,
   14,
   15};
   Double_t data_div_fy3010[16] = {
   0,
   0,
   0,
   1.012307,
   0,
   0,
   0,
   1.063892,
   0,
   0,
   0,
   0.9754196,
   0,
   0,
   0,
   1.012953};
   Double_t data_div_felx3010[16] = {
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5};
   Double_t data_div_fely3010[16] = {
   0,
   0,
   0,
   0.06599003,
   0,
   0,
   0,
   0.06169983,
   0,
   0,
   0,
   0.0472417,
   0,
   0,
   0,
   0.04298545};
   Double_t data_div_fehx3010[16] = {
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5};
   Double_t data_div_fehy3010[16] = {
   0,
   0,
   0,
   0.07043857,
   0,
   0,
   0,
   0.06538614,
   0,
   0,
   0,
   0.04958702,
   0,
   0,
   0,
   0.04484942};
   grae = new TGraphAsymmErrors(16,data_div_fx3010,data_div_fy3010,data_div_felx3010,data_div_fehx3010,data_div_fely3010,data_div_fehy3010);
   grae->SetName("data_div");
   grae->SetTitle("Graph");
   grae->SetFillStyle(1000);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.1);
   
   TH1F *Graph_nLepTight_data_graph3010 = new TH1F("Graph_nLepTight_data_graph3010","Graph",100,-2.1,17.1);
   Graph_nLepTight_data_graph3010->SetMinimum(0);
   Graph_nLepTight_data_graph3010->SetMaximum(637.5304);
   Graph_nLepTight_data_graph3010->SetDirectory(0);
   Graph_nLepTight_data_graph3010->SetStats(0);
   Graph_nLepTight_data_graph3010->SetLineStyle(0);
   Graph_nLepTight_data_graph3010->SetMarkerStyle(20);
   Graph_nLepTight_data_graph3010->GetXaxis()->SetLabelFont(42);
   Graph_nLepTight_data_graph3010->GetXaxis()->SetLabelOffset(0.007);
   Graph_nLepTight_data_graph3010->GetXaxis()->SetLabelSize(0.05);
   Graph_nLepTight_data_graph3010->GetXaxis()->SetTitleSize(0.06);
   Graph_nLepTight_data_graph3010->GetXaxis()->SetTitleOffset(0.9);
   Graph_nLepTight_data_graph3010->GetXaxis()->SetTitleFont(42);
   Graph_nLepTight_data_graph3010->GetYaxis()->SetLabelFont(42);
   Graph_nLepTight_data_graph3010->GetYaxis()->SetLabelOffset(0.007);
   Graph_nLepTight_data_graph3010->GetYaxis()->SetLabelSize(0.05);
   Graph_nLepTight_data_graph3010->GetYaxis()->SetTitleSize(0.06);
   Graph_nLepTight_data_graph3010->GetYaxis()->SetTitleOffset(1.35);
   Graph_nLepTight_data_graph3010->GetYaxis()->SetTitleFont(42);
   Graph_nLepTight_data_graph3010->GetZaxis()->SetLabelFont(42);
   Graph_nLepTight_data_graph3010->GetZaxis()->SetLabelOffset(0.007);
   Graph_nLepTight_data_graph3010->GetZaxis()->SetLabelSize(0.05);
   Graph_nLepTight_data_graph3010->GetZaxis()->SetTitleSize(0.06);
   Graph_nLepTight_data_graph3010->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_nLepTight_data_graph3010);
   
   grae->Draw("pz ");
   
   leg = new TLegend(0,0,0,0,NULL,"brNDC");
   leg->SetBorderSize(1);
   leg->SetTextSize(0.084);
   leg->SetLineColor(0);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   entry=leg->AddEntry("nLepTight_total_errors","stat. unc.","F");
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
   entry=leg->AddEntry("nLepTight_total_errors","total unc.","F");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   leg->Draw();
   pad2->Modified();
   nLepTight_canvas->cd();
   nLepTight_canvas->Modified();
   nLepTight_canvas->cd();
   nLepTight_canvas->SetSelected(nLepTight_canvas);
}
