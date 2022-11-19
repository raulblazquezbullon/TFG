void mtW3l()
{
//=========Macro generated from canvas: mtW3l_canvas/mtW3l
//=========  (Fri Nov 18 13:00:41 2022) by ROOT version 6.12/07
   TCanvas *mtW3l_canvas = new TCanvas("mtW3l_canvas", "mtW3l",0,0,600,750);
   gStyle->SetOptFit(1);
   gStyle->SetOptStat(0);
   gStyle->SetOptTitle(0);
   mtW3l_canvas->SetHighLightColor(2);
   mtW3l_canvas->Range(0,0,1,1);
   mtW3l_canvas->SetFillColor(0);
   mtW3l_canvas->SetBorderMode(0);
   mtW3l_canvas->SetBorderSize(2);
   mtW3l_canvas->SetTickx(1);
   mtW3l_canvas->SetTicky(1);
   mtW3l_canvas->SetLeftMargin(0.18);
   mtW3l_canvas->SetRightMargin(0.04);
   mtW3l_canvas->SetBottomMargin(0.13);
   mtW3l_canvas->SetFrameFillStyle(0);
   mtW3l_canvas->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: pad1
   TPad *pad1 = new TPad("pad1", "pad1",0,0.3,1,1);
   pad1->Draw();
   pad1->cd();
   pad1->Range(-46.15385,-9.324119,210.2564,363.6407);
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
   
   TH1D *mtW3l_total__41 = new TH1D("mtW3l_total__41","dummy",20,0,200);
   mtW3l_total__41->SetBinContent(1,67.57592);
   mtW3l_total__41->SetBinContent(2,67.38025);
   mtW3l_total__41->SetBinContent(3,72.44139);
   mtW3l_total__41->SetBinContent(4,71.12998);
   mtW3l_total__41->SetBinContent(5,88.05039);
   mtW3l_total__41->SetBinContent(6,127.6949);
   mtW3l_total__41->SetBinContent(7,202.8487);
   mtW3l_total__41->SetBinContent(8,250.2482);
   mtW3l_total__41->SetBinContent(9,211.5584);
   mtW3l_total__41->SetBinContent(10,143.929);
   mtW3l_total__41->SetBinContent(11,78.03676);
   mtW3l_total__41->SetBinContent(12,41.29737);
   mtW3l_total__41->SetBinContent(13,25.23374);
   mtW3l_total__41->SetBinContent(14,14.2566);
   mtW3l_total__41->SetBinContent(15,9.749464);
   mtW3l_total__41->SetBinContent(16,4.984977);
   mtW3l_total__41->SetBinContent(17,5.653812);
   mtW3l_total__41->SetBinContent(18,2.298185);
   mtW3l_total__41->SetBinContent(19,2.31696);
   mtW3l_total__41->SetBinContent(20,9.259506);
   mtW3l_total__41->SetBinError(1,6.116651);
   mtW3l_total__41->SetBinError(2,5.11645);
   mtW3l_total__41->SetBinError(3,5.188575);
   mtW3l_total__41->SetBinError(4,4.553213);
   mtW3l_total__41->SetBinError(5,3.76195);
   mtW3l_total__41->SetBinError(6,5.37186);
   mtW3l_total__41->SetBinError(7,6.639501);
   mtW3l_total__41->SetBinError(8,5.874999);
   mtW3l_total__41->SetBinError(9,5.807984);
   mtW3l_total__41->SetBinError(10,4.962082);
   mtW3l_total__41->SetBinError(11,3.949525);
   mtW3l_total__41->SetBinError(12,3.070359);
   mtW3l_total__41->SetBinError(13,2.271272);
   mtW3l_total__41->SetBinError(14,2.02243);
   mtW3l_total__41->SetBinError(15,0.973067);
   mtW3l_total__41->SetBinError(16,0.6398974);
   mtW3l_total__41->SetBinError(17,1.812602);
   mtW3l_total__41->SetBinError(18,0.4754791);
   mtW3l_total__41->SetBinError(19,0.4418476);
   mtW3l_total__41->SetBinError(20,0.906149);
   mtW3l_total__41->SetMinimum(0);
   mtW3l_total__41->SetMaximum(341.2628);
   mtW3l_total__41->SetEntries(15152);
   mtW3l_total__41->SetDirectory(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#00cc00");
   mtW3l_total__41->SetFillColor(ci);
   mtW3l_total__41->SetMarkerStyle(20);
   mtW3l_total__41->SetMarkerSize(1.1);
   mtW3l_total__41->GetXaxis()->SetTitle("M_{T} (GeV)");
   mtW3l_total__41->GetXaxis()->SetMoreLogLabels();
   mtW3l_total__41->GetXaxis()->SetLabelFont(42);
   mtW3l_total__41->GetXaxis()->SetLabelOffset(999);
   mtW3l_total__41->GetXaxis()->SetLabelSize(0.05);
   mtW3l_total__41->GetXaxis()->SetTitleSize(0.05);
   mtW3l_total__41->GetXaxis()->SetTitleOffset(999);
   mtW3l_total__41->GetXaxis()->SetTitleFont(42);
   mtW3l_total__41->GetYaxis()->SetTitle("Events");
   mtW3l_total__41->GetYaxis()->SetLabelFont(42);
   mtW3l_total__41->GetYaxis()->SetLabelOffset(0.007);
   mtW3l_total__41->GetYaxis()->SetLabelSize(0.05);
   mtW3l_total__41->GetYaxis()->SetTitleSize(0.06);
   mtW3l_total__41->GetYaxis()->SetTitleOffset(1.48);
   mtW3l_total__41->GetYaxis()->SetTitleFont(42);
   mtW3l_total__41->GetZaxis()->SetLabelFont(42);
   mtW3l_total__41->GetZaxis()->SetLabelOffset(0.007);
   mtW3l_total__41->GetZaxis()->SetLabelSize(0.05);
   mtW3l_total__41->GetZaxis()->SetTitleSize(0.06);
   mtW3l_total__41->GetZaxis()->SetTitleFont(42);
   mtW3l_total__41->Draw("HIST");
   
   THStack *mtW3l_stack = new THStack();
   mtW3l_stack->SetName("mtW3l_stack");
   mtW3l_stack->SetTitle("mtW3l");
   
   TH1F *mtW3l_stack_stack_11 = new TH1F("mtW3l_stack_stack_11","mtW3l",20,0,200);
   mtW3l_stack_stack_11->SetMinimum(0);
   mtW3l_stack_stack_11->SetMaximum(262.7606);
   mtW3l_stack_stack_11->SetDirectory(0);
   mtW3l_stack_stack_11->SetStats(0);
   mtW3l_stack_stack_11->SetLineStyle(0);
   mtW3l_stack_stack_11->SetMarkerStyle(20);
   mtW3l_stack_stack_11->GetXaxis()->SetLabelFont(42);
   mtW3l_stack_stack_11->GetXaxis()->SetLabelOffset(0.007);
   mtW3l_stack_stack_11->GetXaxis()->SetLabelSize(0.05);
   mtW3l_stack_stack_11->GetXaxis()->SetTitleSize(0.06);
   mtW3l_stack_stack_11->GetXaxis()->SetTitleOffset(0.9);
   mtW3l_stack_stack_11->GetXaxis()->SetTitleFont(42);
   mtW3l_stack_stack_11->GetYaxis()->SetLabelFont(42);
   mtW3l_stack_stack_11->GetYaxis()->SetLabelOffset(0.007);
   mtW3l_stack_stack_11->GetYaxis()->SetLabelSize(0.05);
   mtW3l_stack_stack_11->GetYaxis()->SetTitleSize(0.06);
   mtW3l_stack_stack_11->GetYaxis()->SetTitleOffset(1.35);
   mtW3l_stack_stack_11->GetYaxis()->SetTitleFont(42);
   mtW3l_stack_stack_11->GetZaxis()->SetLabelFont(42);
   mtW3l_stack_stack_11->GetZaxis()->SetLabelOffset(0.007);
   mtW3l_stack_stack_11->GetZaxis()->SetLabelSize(0.05);
   mtW3l_stack_stack_11->GetZaxis()->SetTitleSize(0.06);
   mtW3l_stack_stack_11->GetZaxis()->SetTitleFont(42);
   mtW3l_stack->SetHistogram(mtW3l_stack_stack_11);
   
   
   TH1D *mtW3l_fakes_VV_stack_1 = new TH1D("mtW3l_fakes_VV_stack_1","dummy",20,0,200);
   mtW3l_fakes_VV_stack_1->SetBinContent(3,0.09719337);
   mtW3l_fakes_VV_stack_1->SetBinContent(9,0.09719337);
   mtW3l_fakes_VV_stack_1->SetBinContent(10,0.09719337);
   mtW3l_fakes_VV_stack_1->SetBinContent(12,0.09719337);
   mtW3l_fakes_VV_stack_1->SetBinContent(13,0.09719337);
   mtW3l_fakes_VV_stack_1->SetBinContent(14,0.1943867);
   mtW3l_fakes_VV_stack_1->SetBinError(3,0.09719337);
   mtW3l_fakes_VV_stack_1->SetBinError(9,0.09719337);
   mtW3l_fakes_VV_stack_1->SetBinError(10,0.09719337);
   mtW3l_fakes_VV_stack_1->SetBinError(12,0.09719337);
   mtW3l_fakes_VV_stack_1->SetBinError(13,0.09719337);
   mtW3l_fakes_VV_stack_1->SetBinError(14,0.1374522);
   mtW3l_fakes_VV_stack_1->SetEntries(11);

   ci = TColor::GetColor("#2e3294");
   mtW3l_fakes_VV_stack_1->SetFillColor(ci);
   mtW3l_fakes_VV_stack_1->SetMarkerStyle(0);
   mtW3l_fakes_VV_stack_1->SetMarkerSize(1.1);
   mtW3l_fakes_VV_stack_1->GetXaxis()->SetTitle("M_{T} (GeV)");
   mtW3l_fakes_VV_stack_1->GetXaxis()->SetMoreLogLabels();
   mtW3l_fakes_VV_stack_1->GetXaxis()->SetLabelFont(42);
   mtW3l_fakes_VV_stack_1->GetXaxis()->SetLabelOffset(0.007);
   mtW3l_fakes_VV_stack_1->GetXaxis()->SetLabelSize(0.05);
   mtW3l_fakes_VV_stack_1->GetXaxis()->SetTitleSize(0.06);
   mtW3l_fakes_VV_stack_1->GetXaxis()->SetTitleOffset(0.9);
   mtW3l_fakes_VV_stack_1->GetXaxis()->SetTitleFont(42);
   mtW3l_fakes_VV_stack_1->GetYaxis()->SetTitle("Events");
   mtW3l_fakes_VV_stack_1->GetYaxis()->SetLabelFont(42);
   mtW3l_fakes_VV_stack_1->GetYaxis()->SetLabelOffset(0.007);
   mtW3l_fakes_VV_stack_1->GetYaxis()->SetLabelSize(0.05);
   mtW3l_fakes_VV_stack_1->GetYaxis()->SetTitleSize(0.06);
   mtW3l_fakes_VV_stack_1->GetYaxis()->SetTitleOffset(1.35);
   mtW3l_fakes_VV_stack_1->GetYaxis()->SetTitleFont(42);
   mtW3l_fakes_VV_stack_1->GetZaxis()->SetLabelFont(42);
   mtW3l_fakes_VV_stack_1->GetZaxis()->SetLabelOffset(0.007);
   mtW3l_fakes_VV_stack_1->GetZaxis()->SetLabelSize(0.05);
   mtW3l_fakes_VV_stack_1->GetZaxis()->SetTitleSize(0.06);
   mtW3l_fakes_VV_stack_1->GetZaxis()->SetTitleFont(42);
   mtW3l_stack->Add(mtW3l_fakes_VV_stack_1,"");
   
   TH1D *mtW3l_fakes_TT_stack_2 = new TH1D("mtW3l_fakes_TT_stack_2","dummy",20,0,200);
   mtW3l_fakes_TT_stack_2->SetBinContent(1,1.72885);
   mtW3l_fakes_TT_stack_2->SetBinContent(2,2.260804);
   mtW3l_fakes_TT_stack_2->SetBinContent(3,1.487687);
   mtW3l_fakes_TT_stack_2->SetBinContent(4,2.061321);
   mtW3l_fakes_TT_stack_2->SetBinContent(5,2.838412);
   mtW3l_fakes_TT_stack_2->SetBinContent(6,3.237377);
   mtW3l_fakes_TT_stack_2->SetBinContent(7,4.122642);
   mtW3l_fakes_TT_stack_2->SetBinContent(8,4.920573);
   mtW3l_fakes_TT_stack_2->SetBinContent(9,4.766744);
   mtW3l_fakes_TT_stack_2->SetBinContent(10,5.452526);
   mtW3l_fakes_TT_stack_2->SetBinContent(11,3.923159);
   mtW3l_fakes_TT_stack_2->SetBinContent(12,3.636342);
   mtW3l_fakes_TT_stack_2->SetBinContent(13,2.593275);
   mtW3l_fakes_TT_stack_2->SetBinContent(14,2.925746);
   mtW3l_fakes_TT_stack_2->SetBinContent(15,1.774504);
   mtW3l_fakes_TT_stack_2->SetBinContent(16,1.72885);
   mtW3l_fakes_TT_stack_2->SetBinContent(17,1.130402);
   mtW3l_fakes_TT_stack_2->SetBinContent(18,0.6649422);
   mtW3l_fakes_TT_stack_2->SetBinContent(19,0.598448);
   mtW3l_fakes_TT_stack_2->SetBinContent(20,3.191723);
   mtW3l_fakes_TT_stack_2->SetBinError(1,0.3390553);
   mtW3l_fakes_TT_stack_2->SetBinError(2,0.3877246);
   mtW3l_fakes_TT_stack_2->SetBinError(3,0.3303978);
   mtW3l_fakes_TT_stack_2->SetBinError(4,0.3702242);
   mtW3l_fakes_TT_stack_2->SetBinError(5,0.4402931);
   mtW3l_fakes_TT_stack_2->SetBinError(6,0.4787796);
   mtW3l_fakes_TT_stack_2->SetBinError(7,0.5319538);
   mtW3l_fakes_TT_stack_2->SetBinError(8,0.5796832);
   mtW3l_fakes_TT_stack_2->SetBinError(9,0.5675218);
   mtW3l_fakes_TT_stack_2->SetBinError(10,0.6021308);
   mtW3l_fakes_TT_stack_2->SetBinError(11,0.5193365);
   mtW3l_fakes_TT_stack_2->SetBinError(12,0.4969062);
   mtW3l_fakes_TT_stack_2->SetBinError(13,0.4152563);
   mtW3l_fakes_TT_stack_2->SetBinError(14,0.4410728);
   mtW3l_fakes_TT_stack_2->SetBinError(15,0.3508765);
   mtW3l_fakes_TT_stack_2->SetBinError(16,0.3390553);
   mtW3l_fakes_TT_stack_2->SetBinError(17,0.2741627);
   mtW3l_fakes_TT_stack_2->SetBinError(18,0.2102732);
   mtW3l_fakes_TT_stack_2->SetBinError(19,0.1994827);
   mtW3l_fakes_TT_stack_2->SetBinError(20,0.4701852);
   mtW3l_fakes_TT_stack_2->SetEntries(841);

   ci = TColor::GetColor("#666666");
   mtW3l_fakes_TT_stack_2->SetFillColor(ci);
   mtW3l_fakes_TT_stack_2->SetMarkerStyle(0);
   mtW3l_fakes_TT_stack_2->SetMarkerSize(1.1);
   mtW3l_fakes_TT_stack_2->GetXaxis()->SetTitle("M_{T} (GeV)");
   mtW3l_fakes_TT_stack_2->GetXaxis()->SetMoreLogLabels();
   mtW3l_fakes_TT_stack_2->GetXaxis()->SetLabelFont(42);
   mtW3l_fakes_TT_stack_2->GetXaxis()->SetLabelOffset(0.007);
   mtW3l_fakes_TT_stack_2->GetXaxis()->SetLabelSize(0.05);
   mtW3l_fakes_TT_stack_2->GetXaxis()->SetTitleSize(0.06);
   mtW3l_fakes_TT_stack_2->GetXaxis()->SetTitleOffset(0.9);
   mtW3l_fakes_TT_stack_2->GetXaxis()->SetTitleFont(42);
   mtW3l_fakes_TT_stack_2->GetYaxis()->SetTitle("Events");
   mtW3l_fakes_TT_stack_2->GetYaxis()->SetLabelFont(42);
   mtW3l_fakes_TT_stack_2->GetYaxis()->SetLabelOffset(0.007);
   mtW3l_fakes_TT_stack_2->GetYaxis()->SetLabelSize(0.05);
   mtW3l_fakes_TT_stack_2->GetYaxis()->SetTitleSize(0.06);
   mtW3l_fakes_TT_stack_2->GetYaxis()->SetTitleOffset(1.35);
   mtW3l_fakes_TT_stack_2->GetYaxis()->SetTitleFont(42);
   mtW3l_fakes_TT_stack_2->GetZaxis()->SetLabelFont(42);
   mtW3l_fakes_TT_stack_2->GetZaxis()->SetLabelOffset(0.007);
   mtW3l_fakes_TT_stack_2->GetZaxis()->SetLabelSize(0.05);
   mtW3l_fakes_TT_stack_2->GetZaxis()->SetTitleSize(0.06);
   mtW3l_fakes_TT_stack_2->GetZaxis()->SetTitleFont(42);
   mtW3l_stack->Add(mtW3l_fakes_TT_stack_2,"");
   
   TH1D *mtW3l_fakes_DY_stack_3 = new TH1D("mtW3l_fakes_DY_stack_3","dummy",20,0,200);
   mtW3l_fakes_DY_stack_3->SetBinContent(1,18.91474);
   mtW3l_fakes_DY_stack_3->SetBinContent(2,12.03665);
   mtW3l_fakes_DY_stack_3->SetBinContent(3,12.03665);
   mtW3l_fakes_DY_stack_3->SetBinContent(4,8.597611);
   mtW3l_fakes_DY_stack_3->SetBinContent(5,3.439044);
   mtW3l_fakes_DY_stack_3->SetBinContent(6,10.31713);
   mtW3l_fakes_DY_stack_3->SetBinContent(7,15.4757);
   mtW3l_fakes_DY_stack_3->SetBinContent(8,6.878088);
   mtW3l_fakes_DY_stack_3->SetBinContent(9,8.597611);
   mtW3l_fakes_DY_stack_3->SetBinContent(10,6.878088);
   mtW3l_fakes_DY_stack_3->SetBinContent(11,5.158566);
   mtW3l_fakes_DY_stack_3->SetBinContent(12,3.439044);
   mtW3l_fakes_DY_stack_3->SetBinContent(13,1.719522);
   mtW3l_fakes_DY_stack_3->SetBinContent(14,1.719522);
   mtW3l_fakes_DY_stack_3->SetBinContent(17,1.719522);
   mtW3l_fakes_DY_stack_3->SetBinError(1,5.70301);
   mtW3l_fakes_DY_stack_3->SetBinError(2,4.549428);
   mtW3l_fakes_DY_stack_3->SetBinError(3,4.549428);
   mtW3l_fakes_DY_stack_3->SetBinError(4,3.844968);
   mtW3l_fakes_DY_stack_3->SetBinError(5,2.431771);
   mtW3l_fakes_DY_stack_3->SetBinError(6,4.211952);
   mtW3l_fakes_DY_stack_3->SetBinError(7,5.158566);
   mtW3l_fakes_DY_stack_3->SetBinError(8,3.439044);
   mtW3l_fakes_DY_stack_3->SetBinError(9,3.844968);
   mtW3l_fakes_DY_stack_3->SetBinError(10,3.439044);
   mtW3l_fakes_DY_stack_3->SetBinError(11,2.9783);
   mtW3l_fakes_DY_stack_3->SetBinError(12,2.431771);
   mtW3l_fakes_DY_stack_3->SetBinError(13,1.719522);
   mtW3l_fakes_DY_stack_3->SetBinError(14,1.719522);
   mtW3l_fakes_DY_stack_3->SetBinError(17,1.719522);
   mtW3l_fakes_DY_stack_3->SetEntries(72);

   ci = TColor::GetColor("#cccccc");
   mtW3l_fakes_DY_stack_3->SetFillColor(ci);
   mtW3l_fakes_DY_stack_3->SetMarkerStyle(0);
   mtW3l_fakes_DY_stack_3->SetMarkerSize(1.1);
   mtW3l_fakes_DY_stack_3->GetXaxis()->SetTitle("M_{T} (GeV)");
   mtW3l_fakes_DY_stack_3->GetXaxis()->SetMoreLogLabels();
   mtW3l_fakes_DY_stack_3->GetXaxis()->SetLabelFont(42);
   mtW3l_fakes_DY_stack_3->GetXaxis()->SetLabelOffset(0.007);
   mtW3l_fakes_DY_stack_3->GetXaxis()->SetLabelSize(0.05);
   mtW3l_fakes_DY_stack_3->GetXaxis()->SetTitleSize(0.06);
   mtW3l_fakes_DY_stack_3->GetXaxis()->SetTitleOffset(0.9);
   mtW3l_fakes_DY_stack_3->GetXaxis()->SetTitleFont(42);
   mtW3l_fakes_DY_stack_3->GetYaxis()->SetTitle("Events");
   mtW3l_fakes_DY_stack_3->GetYaxis()->SetLabelFont(42);
   mtW3l_fakes_DY_stack_3->GetYaxis()->SetLabelOffset(0.007);
   mtW3l_fakes_DY_stack_3->GetYaxis()->SetLabelSize(0.05);
   mtW3l_fakes_DY_stack_3->GetYaxis()->SetTitleSize(0.06);
   mtW3l_fakes_DY_stack_3->GetYaxis()->SetTitleOffset(1.35);
   mtW3l_fakes_DY_stack_3->GetYaxis()->SetTitleFont(42);
   mtW3l_fakes_DY_stack_3->GetZaxis()->SetLabelFont(42);
   mtW3l_fakes_DY_stack_3->GetZaxis()->SetLabelOffset(0.007);
   mtW3l_fakes_DY_stack_3->GetZaxis()->SetLabelSize(0.05);
   mtW3l_fakes_DY_stack_3->GetZaxis()->SetTitleSize(0.06);
   mtW3l_fakes_DY_stack_3->GetZaxis()->SetTitleFont(42);
   mtW3l_stack->Add(mtW3l_fakes_DY_stack_3,"");
   
   TH1D *mtW3l_prompt_ZZ_stack_4 = new TH1D("mtW3l_prompt_ZZ_stack_4","dummy",20,0,200);
   mtW3l_prompt_ZZ_stack_4->SetBinContent(1,5.688048);
   mtW3l_prompt_ZZ_stack_4->SetBinContent(2,5.688048);
   mtW3l_prompt_ZZ_stack_4->SetBinContent(3,8.440329);
   mtW3l_prompt_ZZ_stack_4->SetBinContent(4,3.669708);
   mtW3l_prompt_ZZ_stack_4->SetBinContent(5,6.972446);
   mtW3l_prompt_ZZ_stack_4->SetBinContent(6,6.055019);
   mtW3l_prompt_ZZ_stack_4->SetBinContent(7,6.605475);
   mtW3l_prompt_ZZ_stack_4->SetBinContent(8,8.440329);
   mtW3l_prompt_ZZ_stack_4->SetBinContent(9,7.522902);
   mtW3l_prompt_ZZ_stack_4->SetBinContent(10,5.688048);
   mtW3l_prompt_ZZ_stack_4->SetBinContent(11,2.38531);
   mtW3l_prompt_ZZ_stack_4->SetBinContent(12,1.834854);
   mtW3l_prompt_ZZ_stack_4->SetBinContent(13,1.467883);
   mtW3l_prompt_ZZ_stack_4->SetBinContent(14,0.7339416);
   mtW3l_prompt_ZZ_stack_4->SetBinContent(15,1.100912);
   mtW3l_prompt_ZZ_stack_4->SetBinContent(18,0.3669708);
   mtW3l_prompt_ZZ_stack_4->SetBinContent(20,0.5504562);
   mtW3l_prompt_ZZ_stack_4->SetBinError(1,1.021604);
   mtW3l_prompt_ZZ_stack_4->SetBinError(2,1.021604);
   mtW3l_prompt_ZZ_stack_4->SetBinError(3,1.244459);
   mtW3l_prompt_ZZ_stack_4->SetBinError(4,0.8205717);
   mtW3l_prompt_ZZ_stack_4->SetBinError(5,1.13108);
   mtW3l_prompt_ZZ_stack_4->SetBinError(6,1.054043);
   mtW3l_prompt_ZZ_stack_4->SetBinError(7,1.100912);
   mtW3l_prompt_ZZ_stack_4->SetBinError(8,1.244459);
   mtW3l_prompt_ZZ_stack_4->SetBinError(9,1.17488);
   mtW3l_prompt_ZZ_stack_4->SetBinError(10,1.021604);
   mtW3l_prompt_ZZ_stack_4->SetBinError(11,0.6615661);
   mtW3l_prompt_ZZ_stack_4->SetBinError(12,0.5802318);
   mtW3l_prompt_ZZ_stack_4->SetBinError(13,0.5189751);
   mtW3l_prompt_ZZ_stack_4->SetBinError(14,0.3669708);
   mtW3l_prompt_ZZ_stack_4->SetBinError(15,0.4494456);
   mtW3l_prompt_ZZ_stack_4->SetBinError(18,0.2594876);
   mtW3l_prompt_ZZ_stack_4->SetBinError(20,0.3178061);
   mtW3l_prompt_ZZ_stack_4->SetEntries(403);

   ci = TColor::GetColor("#00cc00");
   mtW3l_prompt_ZZ_stack_4->SetFillColor(ci);
   mtW3l_prompt_ZZ_stack_4->SetMarkerStyle(0);
   mtW3l_prompt_ZZ_stack_4->SetMarkerSize(1.1);
   mtW3l_prompt_ZZ_stack_4->GetXaxis()->SetTitle("M_{T} (GeV)");
   mtW3l_prompt_ZZ_stack_4->GetXaxis()->SetMoreLogLabels();
   mtW3l_prompt_ZZ_stack_4->GetXaxis()->SetLabelFont(42);
   mtW3l_prompt_ZZ_stack_4->GetXaxis()->SetLabelOffset(0.007);
   mtW3l_prompt_ZZ_stack_4->GetXaxis()->SetLabelSize(0.05);
   mtW3l_prompt_ZZ_stack_4->GetXaxis()->SetTitleSize(0.06);
   mtW3l_prompt_ZZ_stack_4->GetXaxis()->SetTitleOffset(0.9);
   mtW3l_prompt_ZZ_stack_4->GetXaxis()->SetTitleFont(42);
   mtW3l_prompt_ZZ_stack_4->GetYaxis()->SetTitle("Events");
   mtW3l_prompt_ZZ_stack_4->GetYaxis()->SetLabelFont(42);
   mtW3l_prompt_ZZ_stack_4->GetYaxis()->SetLabelOffset(0.007);
   mtW3l_prompt_ZZ_stack_4->GetYaxis()->SetLabelSize(0.05);
   mtW3l_prompt_ZZ_stack_4->GetYaxis()->SetTitleSize(0.06);
   mtW3l_prompt_ZZ_stack_4->GetYaxis()->SetTitleOffset(1.35);
   mtW3l_prompt_ZZ_stack_4->GetYaxis()->SetTitleFont(42);
   mtW3l_prompt_ZZ_stack_4->GetZaxis()->SetLabelFont(42);
   mtW3l_prompt_ZZ_stack_4->GetZaxis()->SetLabelOffset(0.007);
   mtW3l_prompt_ZZ_stack_4->GetZaxis()->SetLabelSize(0.05);
   mtW3l_prompt_ZZ_stack_4->GetZaxis()->SetTitleSize(0.06);
   mtW3l_prompt_ZZ_stack_4->GetZaxis()->SetTitleFont(42);
   mtW3l_stack->Add(mtW3l_prompt_ZZ_stack_4,"");
   
   TH1D *mtW3l_prompt_WZ_stack_5 = new TH1D("mtW3l_prompt_WZ_stack_5","dummy",20,0,200);
   mtW3l_prompt_WZ_stack_5->SetBinContent(1,41.24428);
   mtW3l_prompt_WZ_stack_5->SetBinContent(2,47.39475);
   mtW3l_prompt_WZ_stack_5->SetBinContent(3,50.37953);
   mtW3l_prompt_WZ_stack_5->SetBinContent(4,56.80134);
   mtW3l_prompt_WZ_stack_5->SetBinContent(5,74.80049);
   mtW3l_prompt_WZ_stack_5->SetBinContent(6,108.0853);
   mtW3l_prompt_WZ_stack_5->SetBinContent(7,176.6449);
   mtW3l_prompt_WZ_stack_5->SetBinContent(8,230.0092);
   mtW3l_prompt_WZ_stack_5->SetBinContent(9,190.5739);
   mtW3l_prompt_WZ_stack_5->SetBinContent(10,125.8132);
   mtW3l_prompt_WZ_stack_5->SetBinContent(11,66.56972);
   mtW3l_prompt_WZ_stack_5->SetBinContent(12,32.28993);
   mtW3l_prompt_WZ_stack_5->SetBinContent(13,19.35587);
   mtW3l_prompt_WZ_stack_5->SetBinContent(14,8.683007);
   mtW3l_prompt_WZ_stack_5->SetBinContent(15,6.874047);
   mtW3l_prompt_WZ_stack_5->SetBinContent(16,3.256128);
   mtW3l_prompt_WZ_stack_5->SetBinContent(17,2.803888);
   mtW3l_prompt_WZ_stack_5->SetBinContent(18,1.266272);
   mtW3l_prompt_WZ_stack_5->SetBinContent(19,1.718512);
   mtW3l_prompt_WZ_stack_5->SetBinContent(20,5.517327);
   mtW3l_prompt_WZ_stack_5->SetBinError(1,1.931441);
   mtW3l_prompt_WZ_stack_5->SetBinError(2,2.070449);
   mtW3l_prompt_WZ_stack_5->SetBinError(3,2.134649);
   mtW3l_prompt_WZ_stack_5->SetBinError(4,2.26662);
   mtW3l_prompt_WZ_stack_5->SetBinError(5,2.601068);
   mtW3l_prompt_WZ_stack_5->SetBinError(6,3.126676);
   mtW3l_prompt_WZ_stack_5->SetBinError(7,3.997146);
   mtW3l_prompt_WZ_stack_5->SetBinError(8,4.561126);
   mtW3l_prompt_WZ_stack_5->SetBinError(9,4.15175);
   mtW3l_prompt_WZ_stack_5->SetBinError(10,3.373358);
   mtW3l_prompt_WZ_stack_5->SetBinError(11,2.453792);
   mtW3l_prompt_WZ_stack_5->SetBinError(12,1.708964);
   mtW3l_prompt_WZ_stack_5->SetBinError(13,1.32314);
   mtW3l_prompt_WZ_stack_5->SetBinError(14,0.8862057);
   mtW3l_prompt_WZ_stack_5->SetBinError(15,0.7885073);
   mtW3l_prompt_WZ_stack_5->SetBinError(16,0.5426879);
   mtW3l_prompt_WZ_stack_5->SetBinError(17,0.5035931);
   mtW3l_prompt_WZ_stack_5->SetBinError(18,0.3384254);
   mtW3l_prompt_WZ_stack_5->SetBinError(19,0.3942536);
   mtW3l_prompt_WZ_stack_5->SetBinError(20,0.7064214);
   mtW3l_prompt_WZ_stack_5->SetEntries(13825);

   ci = TColor::GetColor("#ffcc00");
   mtW3l_prompt_WZ_stack_5->SetFillColor(ci);
   mtW3l_prompt_WZ_stack_5->SetMarkerStyle(0);
   mtW3l_prompt_WZ_stack_5->SetMarkerSize(1.1);
   mtW3l_prompt_WZ_stack_5->GetXaxis()->SetTitle("M_{T} (GeV)");
   mtW3l_prompt_WZ_stack_5->GetXaxis()->SetMoreLogLabels();
   mtW3l_prompt_WZ_stack_5->GetXaxis()->SetLabelFont(42);
   mtW3l_prompt_WZ_stack_5->GetXaxis()->SetLabelOffset(0.007);
   mtW3l_prompt_WZ_stack_5->GetXaxis()->SetLabelSize(0.05);
   mtW3l_prompt_WZ_stack_5->GetXaxis()->SetTitleSize(0.06);
   mtW3l_prompt_WZ_stack_5->GetXaxis()->SetTitleOffset(0.9);
   mtW3l_prompt_WZ_stack_5->GetXaxis()->SetTitleFont(42);
   mtW3l_prompt_WZ_stack_5->GetYaxis()->SetTitle("Events");
   mtW3l_prompt_WZ_stack_5->GetYaxis()->SetLabelFont(42);
   mtW3l_prompt_WZ_stack_5->GetYaxis()->SetLabelOffset(0.007);
   mtW3l_prompt_WZ_stack_5->GetYaxis()->SetLabelSize(0.05);
   mtW3l_prompt_WZ_stack_5->GetYaxis()->SetTitleSize(0.06);
   mtW3l_prompt_WZ_stack_5->GetYaxis()->SetTitleOffset(1.35);
   mtW3l_prompt_WZ_stack_5->GetYaxis()->SetTitleFont(42);
   mtW3l_prompt_WZ_stack_5->GetZaxis()->SetLabelFont(42);
   mtW3l_prompt_WZ_stack_5->GetZaxis()->SetLabelOffset(0.007);
   mtW3l_prompt_WZ_stack_5->GetZaxis()->SetLabelSize(0.05);
   mtW3l_prompt_WZ_stack_5->GetZaxis()->SetTitleSize(0.06);
   mtW3l_prompt_WZ_stack_5->GetZaxis()->SetTitleFont(42);
   mtW3l_stack->Add(mtW3l_prompt_WZ_stack_5,"");
   mtW3l_stack->Draw("same hist");
   
   TH1D *mtW3l_total__42 = new TH1D("mtW3l_total__42","dummy",20,0,200);
   mtW3l_total__42->SetBinContent(1,67.57592);
   mtW3l_total__42->SetBinContent(2,67.38025);
   mtW3l_total__42->SetBinContent(3,72.44139);
   mtW3l_total__42->SetBinContent(4,71.12998);
   mtW3l_total__42->SetBinContent(5,88.05039);
   mtW3l_total__42->SetBinContent(6,127.6949);
   mtW3l_total__42->SetBinContent(7,202.8487);
   mtW3l_total__42->SetBinContent(8,250.2482);
   mtW3l_total__42->SetBinContent(9,211.5584);
   mtW3l_total__42->SetBinContent(10,143.929);
   mtW3l_total__42->SetBinContent(11,78.03676);
   mtW3l_total__42->SetBinContent(12,41.29737);
   mtW3l_total__42->SetBinContent(13,25.23374);
   mtW3l_total__42->SetBinContent(14,14.2566);
   mtW3l_total__42->SetBinContent(15,9.749464);
   mtW3l_total__42->SetBinContent(16,4.984977);
   mtW3l_total__42->SetBinContent(17,5.653812);
   mtW3l_total__42->SetBinContent(18,2.298185);
   mtW3l_total__42->SetBinContent(19,2.31696);
   mtW3l_total__42->SetBinContent(20,9.259506);
   mtW3l_total__42->SetBinError(1,6.116651);
   mtW3l_total__42->SetBinError(2,5.11645);
   mtW3l_total__42->SetBinError(3,5.188575);
   mtW3l_total__42->SetBinError(4,4.553213);
   mtW3l_total__42->SetBinError(5,3.76195);
   mtW3l_total__42->SetBinError(6,5.37186);
   mtW3l_total__42->SetBinError(7,6.639501);
   mtW3l_total__42->SetBinError(8,5.874999);
   mtW3l_total__42->SetBinError(9,5.807984);
   mtW3l_total__42->SetBinError(10,4.962082);
   mtW3l_total__42->SetBinError(11,3.949525);
   mtW3l_total__42->SetBinError(12,3.070359);
   mtW3l_total__42->SetBinError(13,2.271272);
   mtW3l_total__42->SetBinError(14,2.02243);
   mtW3l_total__42->SetBinError(15,0.973067);
   mtW3l_total__42->SetBinError(16,0.6398974);
   mtW3l_total__42->SetBinError(17,1.812602);
   mtW3l_total__42->SetBinError(18,0.4754791);
   mtW3l_total__42->SetBinError(19,0.4418476);
   mtW3l_total__42->SetBinError(20,0.906149);
   mtW3l_total__42->SetMinimum(0);
   mtW3l_total__42->SetMaximum(341.2628);
   mtW3l_total__42->SetEntries(15152);
   mtW3l_total__42->SetDirectory(0);

   ci = TColor::GetColor("#00cc00");
   mtW3l_total__42->SetFillColor(ci);
   mtW3l_total__42->SetMarkerStyle(20);
   mtW3l_total__42->SetMarkerSize(1.1);
   mtW3l_total__42->GetXaxis()->SetTitle("M_{T} (GeV)");
   mtW3l_total__42->GetXaxis()->SetMoreLogLabels();
   mtW3l_total__42->GetXaxis()->SetLabelFont(42);
   mtW3l_total__42->GetXaxis()->SetLabelOffset(999);
   mtW3l_total__42->GetXaxis()->SetLabelSize(0.05);
   mtW3l_total__42->GetXaxis()->SetTitleSize(0.05);
   mtW3l_total__42->GetXaxis()->SetTitleOffset(999);
   mtW3l_total__42->GetXaxis()->SetTitleFont(42);
   mtW3l_total__42->GetYaxis()->SetTitle("Events");
   mtW3l_total__42->GetYaxis()->SetLabelFont(42);
   mtW3l_total__42->GetYaxis()->SetLabelOffset(0.007);
   mtW3l_total__42->GetYaxis()->SetLabelSize(0.05);
   mtW3l_total__42->GetYaxis()->SetTitleSize(0.06);
   mtW3l_total__42->GetYaxis()->SetTitleOffset(1.48);
   mtW3l_total__42->GetYaxis()->SetTitleFont(42);
   mtW3l_total__42->GetZaxis()->SetLabelFont(42);
   mtW3l_total__42->GetZaxis()->SetLabelOffset(0.007);
   mtW3l_total__42->GetZaxis()->SetLabelSize(0.05);
   mtW3l_total__42->GetZaxis()->SetTitleSize(0.06);
   mtW3l_total__42->GetZaxis()->SetTitleFont(42);
   mtW3l_total__42->Draw("AXIS SAME");
   
   Double_t mtW3l_total_errors_fx3051[20] = {
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
   Double_t mtW3l_total_errors_fy3051[20] = {
   67.57592,
   67.38025,
   72.44139,
   71.12998,
   88.05039,
   127.6949,
   202.8487,
   250.2482,
   211.5584,
   143.929,
   78.03676,
   41.29737,
   25.23374,
   14.2566,
   9.749464,
   4.984977,
   5.653812,
   2.298185,
   2.31696,
   9.259506};
   Double_t mtW3l_total_errors_felx3051[20] = {
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
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
   Double_t mtW3l_total_errors_fely3051[20] = {
   6.116651,
   5.11645,
   5.188575,
   4.553213,
   3.76195,
   5.37186,
   6.639501,
   5.874999,
   5.807984,
   4.962082,
   3.949525,
   3.070359,
   2.271272,
   2.02243,
   0.973067,
   0.6398974,
   1.812602,
   0.4754791,
   0.4418476,
   0.906149};
   Double_t mtW3l_total_errors_fehx3051[20] = {
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
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
   Double_t mtW3l_total_errors_fehy3051[20] = {
   6.116651,
   5.11645,
   5.188575,
   4.553213,
   3.76195,
   5.37186,
   6.639501,
   5.874999,
   5.807984,
   4.962082,
   3.949525,
   3.070359,
   2.271272,
   2.02243,
   0.973067,
   0.6398974,
   1.812602,
   0.4754791,
   0.4418476,
   0.906149};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(20,mtW3l_total_errors_fx3051,mtW3l_total_errors_fy3051,mtW3l_total_errors_felx3051,mtW3l_total_errors_fehx3051,mtW3l_total_errors_fely3051,mtW3l_total_errors_fehy3051);
   grae->SetName("mtW3l_total_errors");
   grae->SetTitle("Graph");
   grae->SetFillColor(1);
   grae->SetFillStyle(3013);
   grae->SetMarkerStyle(0);
   
   TH1F *Graph_mtW3l_total_errors3051 = new TH1F("Graph_mtW3l_total_errors3051","Graph",100,0,220);
   Graph_mtW3l_total_errors3051->SetMinimum(1.640435);
   Graph_mtW3l_total_errors3051->SetMaximum(281.5533);
   Graph_mtW3l_total_errors3051->SetDirectory(0);
   Graph_mtW3l_total_errors3051->SetStats(0);
   Graph_mtW3l_total_errors3051->SetLineStyle(0);
   Graph_mtW3l_total_errors3051->SetMarkerStyle(20);
   Graph_mtW3l_total_errors3051->GetXaxis()->SetLabelFont(42);
   Graph_mtW3l_total_errors3051->GetXaxis()->SetLabelOffset(0.007);
   Graph_mtW3l_total_errors3051->GetXaxis()->SetLabelSize(0.05);
   Graph_mtW3l_total_errors3051->GetXaxis()->SetTitleSize(0.06);
   Graph_mtW3l_total_errors3051->GetXaxis()->SetTitleOffset(0.9);
   Graph_mtW3l_total_errors3051->GetXaxis()->SetTitleFont(42);
   Graph_mtW3l_total_errors3051->GetYaxis()->SetLabelFont(42);
   Graph_mtW3l_total_errors3051->GetYaxis()->SetLabelOffset(0.007);
   Graph_mtW3l_total_errors3051->GetYaxis()->SetLabelSize(0.05);
   Graph_mtW3l_total_errors3051->GetYaxis()->SetTitleSize(0.06);
   Graph_mtW3l_total_errors3051->GetYaxis()->SetTitleOffset(1.35);
   Graph_mtW3l_total_errors3051->GetYaxis()->SetTitleFont(42);
   Graph_mtW3l_total_errors3051->GetZaxis()->SetLabelFont(42);
   Graph_mtW3l_total_errors3051->GetZaxis()->SetLabelOffset(0.007);
   Graph_mtW3l_total_errors3051->GetZaxis()->SetLabelSize(0.05);
   Graph_mtW3l_total_errors3051->GetZaxis()->SetTitleSize(0.06);
   Graph_mtW3l_total_errors3051->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_mtW3l_total_errors3051);
   
   grae->Draw("pe2 ");
   
   Double_t mtW3l_data_graph_fx3052[20] = {
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
   Double_t mtW3l_data_graph_fy3052[20] = {
   71,
   62,
   62,
   67,
   75,
   134,
   190,
   241,
   213,
   132,
   95,
   53,
   46,
   17,
   14,
   7,
   9,
   8,
   2,
   15};
   Double_t mtW3l_data_graph_felx3052[20] = {
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
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
   Double_t mtW3l_data_graph_fely3052[20] = {
   8.406427,
   7.852869,
   7.852869,
   8.165035,
   8.641077,
   11.56162,
   13.7722,
   15.51373,
   14.58337,
   11.47479,
   9.729809,
   7.257208,
   6.757713,
   4.082258,
   3.696566,
   2.581513,
   2.943511,
   2.768432,
   1.29183,
   3.829449};
   Double_t mtW3l_data_graph_fehx3052[20] = {
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
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
   Double_t mtW3l_data_graph_fehy3052[20] = {
   9.465934,
   8.916552,
   8.916552,
   9.226295,
   9.698975,
   12.60492,
   14.80857,
   16.54602,
   15.61771,
   12.51843,
   10.78125,
   8.326089,
   7.831652,
   5.203825,
   4.830479,
   3.770356,
   4.110286,
   3.94522,
   2.63791,
   4.958839};
   grae = new TGraphAsymmErrors(20,mtW3l_data_graph_fx3052,mtW3l_data_graph_fy3052,mtW3l_data_graph_felx3052,mtW3l_data_graph_fehx3052,mtW3l_data_graph_fely3052,mtW3l_data_graph_fehy3052);
   grae->SetName("mtW3l_data_graph");
   grae->SetTitle("Graph");
   grae->SetFillStyle(1000);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.1);
   
   TH1F *Graph_mtW3l_data_graph3052 = new TH1F("Graph_mtW3l_data_graph3052","Graph",100,0,220);
   Graph_mtW3l_data_graph3052->SetMinimum(0.6373533);
   Graph_mtW3l_data_graph3052->SetMaximum(283.2298);
   Graph_mtW3l_data_graph3052->SetDirectory(0);
   Graph_mtW3l_data_graph3052->SetStats(0);
   Graph_mtW3l_data_graph3052->SetLineStyle(0);
   Graph_mtW3l_data_graph3052->SetMarkerStyle(20);
   Graph_mtW3l_data_graph3052->GetXaxis()->SetLabelFont(42);
   Graph_mtW3l_data_graph3052->GetXaxis()->SetLabelOffset(0.007);
   Graph_mtW3l_data_graph3052->GetXaxis()->SetLabelSize(0.05);
   Graph_mtW3l_data_graph3052->GetXaxis()->SetTitleSize(0.06);
   Graph_mtW3l_data_graph3052->GetXaxis()->SetTitleOffset(0.9);
   Graph_mtW3l_data_graph3052->GetXaxis()->SetTitleFont(42);
   Graph_mtW3l_data_graph3052->GetYaxis()->SetLabelFont(42);
   Graph_mtW3l_data_graph3052->GetYaxis()->SetLabelOffset(0.007);
   Graph_mtW3l_data_graph3052->GetYaxis()->SetLabelSize(0.05);
   Graph_mtW3l_data_graph3052->GetYaxis()->SetTitleSize(0.06);
   Graph_mtW3l_data_graph3052->GetYaxis()->SetTitleOffset(1.35);
   Graph_mtW3l_data_graph3052->GetYaxis()->SetTitleFont(42);
   Graph_mtW3l_data_graph3052->GetZaxis()->SetLabelFont(42);
   Graph_mtW3l_data_graph3052->GetZaxis()->SetLabelOffset(0.007);
   Graph_mtW3l_data_graph3052->GetZaxis()->SetLabelSize(0.05);
   Graph_mtW3l_data_graph3052->GetZaxis()->SetTitleSize(0.06);
   Graph_mtW3l_data_graph3052->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_mtW3l_data_graph3052);
   
   grae->Draw("pz ");
   
   TLegend *leg = new TLegend(0.62,0.628,0.9,0.91,NULL,"brNDC");
   leg->SetBorderSize(1);
   leg->SetTextSize(0.036);
   leg->SetLineColor(0);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("mtW3l_data","Data","LPE");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1.1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("mtW3l_prompt_WZ_stack_5","WZ","F");

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
   entry=leg->AddEntry("mtW3l_prompt_ZZ_stack_4","qqZZ","F");

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
   entry=leg->AddEntry("mtW3l_fakes_DY_stack_3","Fakes DY","F");

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
   entry=leg->AddEntry("mtW3l_fakes_TT_stack_2","Fakes TT","F");

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
   entry=leg->AddEntry("mtW3l_total_errors","Total unc.","F");
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
   mtW3l_canvas->cd();
  
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
   
   TH1D *mtW3l_total__43 = new TH1D("mtW3l_total__43","dummy",20,0,200);
   mtW3l_total__43->SetBinContent(1,1);
   mtW3l_total__43->SetBinContent(2,1);
   mtW3l_total__43->SetBinContent(3,1);
   mtW3l_total__43->SetBinContent(4,1);
   mtW3l_total__43->SetBinContent(5,1);
   mtW3l_total__43->SetBinContent(6,1);
   mtW3l_total__43->SetBinContent(7,1);
   mtW3l_total__43->SetBinContent(8,1);
   mtW3l_total__43->SetBinContent(9,1);
   mtW3l_total__43->SetBinContent(10,1);
   mtW3l_total__43->SetBinContent(11,1);
   mtW3l_total__43->SetBinContent(12,1);
   mtW3l_total__43->SetBinContent(13,1);
   mtW3l_total__43->SetBinContent(14,1);
   mtW3l_total__43->SetBinContent(15,1);
   mtW3l_total__43->SetBinContent(16,1);
   mtW3l_total__43->SetBinContent(17,1);
   mtW3l_total__43->SetBinContent(18,1);
   mtW3l_total__43->SetBinContent(19,1);
   mtW3l_total__43->SetBinContent(20,1);
   mtW3l_total__43->SetMinimum(0.5);
   mtW3l_total__43->SetMaximum(2);
   mtW3l_total__43->SetEntries(15172);

   ci = TColor::GetColor("#00cc00");
   mtW3l_total__43->SetFillColor(ci);

   ci = TColor::GetColor("#6666ff");
   mtW3l_total__43->SetMarkerColor(ci);
   mtW3l_total__43->SetMarkerSize(1.1);
   mtW3l_total__43->GetXaxis()->SetTitle("M_{T} (GeV)");
   mtW3l_total__43->GetXaxis()->SetMoreLogLabels();
   mtW3l_total__43->GetXaxis()->SetLabelFont(42);
   mtW3l_total__43->GetXaxis()->SetLabelOffset(0.015);
   mtW3l_total__43->GetXaxis()->SetLabelSize(0.1);
   mtW3l_total__43->GetXaxis()->SetTitleSize(0.14);
   mtW3l_total__43->GetXaxis()->SetTitleFont(42);
   mtW3l_total__43->GetYaxis()->SetTitle("Data/pred.");
   mtW3l_total__43->GetYaxis()->SetDecimals();
   mtW3l_total__43->GetYaxis()->SetNdivisions(505);
   mtW3l_total__43->GetYaxis()->SetLabelFont(42);
   mtW3l_total__43->GetYaxis()->SetLabelOffset(0.01);
   mtW3l_total__43->GetYaxis()->SetLabelSize(0.11);
   mtW3l_total__43->GetYaxis()->SetTitleSize(0.14);
   mtW3l_total__43->GetYaxis()->SetTitleOffset(0.62);
   mtW3l_total__43->GetYaxis()->SetTitleFont(42);
   mtW3l_total__43->GetZaxis()->SetLabelFont(42);
   mtW3l_total__43->GetZaxis()->SetLabelOffset(0.007);
   mtW3l_total__43->GetZaxis()->SetLabelSize(0.05);
   mtW3l_total__43->GetZaxis()->SetTitleSize(0.06);
   mtW3l_total__43->GetZaxis()->SetTitleFont(42);
   mtW3l_total__43->Draw("AXIS");
   
   Double_t mtW3l_total_errors_fx3053[20] = {
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
   Double_t mtW3l_total_errors_fy3053[20] = {
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
   Double_t mtW3l_total_errors_felx3053[20] = {
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
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
   Double_t mtW3l_total_errors_fely3053[20] = {
   0.09051523,
   0.07593396,
   0.07162445,
   0.06401258,
   0.04272497,
   0.04206794,
   0.03273129,
   0.02347668,
   0.02745334,
   0.0344759,
   0.05061108,
   0.07434757,
   0.09000931,
   0.1418592,
   0.09980724,
   0.1283652,
   0.3205983,
   0.2068933,
   0.1907014,
   0.09786148};
   Double_t mtW3l_total_errors_fehx3053[20] = {
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
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
   Double_t mtW3l_total_errors_fehy3053[20] = {
   0.09051523,
   0.07593396,
   0.07162445,
   0.06401258,
   0.04272497,
   0.04206794,
   0.03273129,
   0.02347668,
   0.02745334,
   0.0344759,
   0.05061108,
   0.07434757,
   0.09000931,
   0.1418592,
   0.09980724,
   0.1283652,
   0.3205983,
   0.2068933,
   0.1907014,
   0.09786148};
   grae = new TGraphAsymmErrors(20,mtW3l_total_errors_fx3053,mtW3l_total_errors_fy3053,mtW3l_total_errors_felx3053,mtW3l_total_errors_fehx3053,mtW3l_total_errors_fely3053,mtW3l_total_errors_fehy3053);
   grae->SetName("mtW3l_total_errors");
   grae->SetTitle("Graph");

   ci = TColor::GetColor("#00ffff");
   grae->SetFillColor(ci);

   ci = TColor::GetColor("#00ffff");
   grae->SetMarkerColor(ci);
   grae->Draw("e2");
   
   Double_t mtW3l_total_errors_fx3054[20] = {
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
   Double_t mtW3l_total_errors_fy3054[20] = {
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
   Double_t mtW3l_total_errors_felx3054[20] = {
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
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
   Double_t mtW3l_total_errors_fely3054[20] = {
   0.09051523,
   0.07593396,
   0.07162445,
   0.06401258,
   0.04272497,
   0.04206794,
   0.03273129,
   0.02347668,
   0.02745334,
   0.0344759,
   0.05061108,
   0.07434757,
   0.09000931,
   0.1418592,
   0.09980724,
   0.1283652,
   0.3205983,
   0.2068933,
   0.1907014,
   0.09786148};
   Double_t mtW3l_total_errors_fehx3054[20] = {
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
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
   Double_t mtW3l_total_errors_fehy3054[20] = {
   0.09051523,
   0.07593396,
   0.07162445,
   0.06401258,
   0.04272497,
   0.04206794,
   0.03273129,
   0.02347668,
   0.02745334,
   0.0344759,
   0.05061108,
   0.07434757,
   0.09000931,
   0.1418592,
   0.09980724,
   0.1283652,
   0.3205983,
   0.2068933,
   0.1907014,
   0.09786148};
   grae = new TGraphAsymmErrors(20,mtW3l_total_errors_fx3054,mtW3l_total_errors_fy3054,mtW3l_total_errors_felx3054,mtW3l_total_errors_fehx3054,mtW3l_total_errors_fely3054,mtW3l_total_errors_fehy3054);
   grae->SetName("mtW3l_total_errors");
   grae->SetTitle("Graph");

   ci = TColor::GetColor("#6666ff");
   grae->SetFillColor(ci);

   ci = TColor::GetColor("#6666ff");
   grae->SetMarkerColor(ci);
   grae->Draw("e2 ");
   
   TH1D *mtW3l_total__44 = new TH1D("mtW3l_total__44","dummy",20,0,200);
   mtW3l_total__44->SetBinContent(1,1);
   mtW3l_total__44->SetBinContent(2,1);
   mtW3l_total__44->SetBinContent(3,1);
   mtW3l_total__44->SetBinContent(4,1);
   mtW3l_total__44->SetBinContent(5,1);
   mtW3l_total__44->SetBinContent(6,1);
   mtW3l_total__44->SetBinContent(7,1);
   mtW3l_total__44->SetBinContent(8,1);
   mtW3l_total__44->SetBinContent(9,1);
   mtW3l_total__44->SetBinContent(10,1);
   mtW3l_total__44->SetBinContent(11,1);
   mtW3l_total__44->SetBinContent(12,1);
   mtW3l_total__44->SetBinContent(13,1);
   mtW3l_total__44->SetBinContent(14,1);
   mtW3l_total__44->SetBinContent(15,1);
   mtW3l_total__44->SetBinContent(16,1);
   mtW3l_total__44->SetBinContent(17,1);
   mtW3l_total__44->SetBinContent(18,1);
   mtW3l_total__44->SetBinContent(19,1);
   mtW3l_total__44->SetBinContent(20,1);
   mtW3l_total__44->SetMinimum(0.5);
   mtW3l_total__44->SetMaximum(2);
   mtW3l_total__44->SetEntries(15172);

   ci = TColor::GetColor("#00cc00");
   mtW3l_total__44->SetFillColor(ci);

   ci = TColor::GetColor("#6666ff");
   mtW3l_total__44->SetMarkerColor(ci);
   mtW3l_total__44->SetMarkerSize(1.1);
   mtW3l_total__44->GetXaxis()->SetTitle("M_{T} (GeV)");
   mtW3l_total__44->GetXaxis()->SetMoreLogLabels();
   mtW3l_total__44->GetXaxis()->SetLabelFont(42);
   mtW3l_total__44->GetXaxis()->SetLabelOffset(0.015);
   mtW3l_total__44->GetXaxis()->SetLabelSize(0.1);
   mtW3l_total__44->GetXaxis()->SetTitleSize(0.14);
   mtW3l_total__44->GetXaxis()->SetTitleFont(42);
   mtW3l_total__44->GetYaxis()->SetTitle("Data/pred.");
   mtW3l_total__44->GetYaxis()->SetDecimals();
   mtW3l_total__44->GetYaxis()->SetNdivisions(505);
   mtW3l_total__44->GetYaxis()->SetLabelFont(42);
   mtW3l_total__44->GetYaxis()->SetLabelOffset(0.01);
   mtW3l_total__44->GetYaxis()->SetLabelSize(0.11);
   mtW3l_total__44->GetYaxis()->SetTitleSize(0.14);
   mtW3l_total__44->GetYaxis()->SetTitleOffset(0.62);
   mtW3l_total__44->GetYaxis()->SetTitleFont(42);
   mtW3l_total__44->GetZaxis()->SetLabelFont(42);
   mtW3l_total__44->GetZaxis()->SetLabelOffset(0.007);
   mtW3l_total__44->GetZaxis()->SetLabelSize(0.05);
   mtW3l_total__44->GetZaxis()->SetTitleSize(0.06);
   mtW3l_total__44->GetZaxis()->SetTitleFont(42);
   mtW3l_total__44->Draw("AXIS SAME");
   TLine *line = new TLine(0,1,200,1);
   line->SetLineColor(58);
   line->SetLineWidth(2);
   line->Draw();
   
   Double_t data_div_fx3055[20] = {
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
   Double_t data_div_fy3055[20] = {
   1.05067,
   0.9201509,
   0.8558643,
   0.9419376,
   0.851785,
   1.049376,
   0.9366585,
   0.9630438,
   1.006814,
   0.9171188,
   1.217375,
   1.283375,
   1.822956,
   1.19243,
   1.435976,
   1.404219,
   1.591846,
   3.481008,
   0.8632001,
   1.619957};
   Double_t data_div_felx3055[20] = {
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
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
   Double_t data_div_fely3055[20] = {
   0.1243997,
   0.1165456,
   0.1084031,
   0.1147904,
   0.09813786,
   0.09054097,
   0.06789395,
   0.06199336,
   0.06893306,
   0.07972538,
   0.1246824,
   0.1757305,
   0.2678046,
   0.2863416,
   0.3791559,
   0.5178584,
   0.5206242,
   1.204617,
   0.5575537,
   0.4135695};
   Double_t data_div_fehx3055[20] = {
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
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
   Double_t data_div_fehy3055[20] = {
   0.1400785,
   0.1323318,
   0.1230864,
   0.1297104,
   0.1101525,
   0.09871128,
   0.073003,
   0.06611842,
   0.07382223,
   0.08697641,
   0.138156,
   0.2016131,
   0.3103643,
   0.3650116,
   0.495461,
   0.7563436,
   0.7269939,
   1.716668,
   1.138522,
   0.5355403};
   grae = new TGraphAsymmErrors(20,data_div_fx3055,data_div_fy3055,data_div_felx3055,data_div_fehx3055,data_div_fely3055,data_div_fehy3055);
   grae->SetName("data_div");
   grae->SetTitle("Graph");
   grae->SetFillStyle(1000);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.1);
   
   TH1F *Graph_mtW3l_data_graph3055 = new TH1F("Graph_mtW3l_data_graph3055","Graph",100,0,220);
   Graph_mtW3l_data_graph3055->SetMinimum(0.6373533);
   Graph_mtW3l_data_graph3055->SetMaximum(283.2298);
   Graph_mtW3l_data_graph3055->SetDirectory(0);
   Graph_mtW3l_data_graph3055->SetStats(0);
   Graph_mtW3l_data_graph3055->SetLineStyle(0);
   Graph_mtW3l_data_graph3055->SetMarkerStyle(20);
   Graph_mtW3l_data_graph3055->GetXaxis()->SetLabelFont(42);
   Graph_mtW3l_data_graph3055->GetXaxis()->SetLabelOffset(0.007);
   Graph_mtW3l_data_graph3055->GetXaxis()->SetLabelSize(0.05);
   Graph_mtW3l_data_graph3055->GetXaxis()->SetTitleSize(0.06);
   Graph_mtW3l_data_graph3055->GetXaxis()->SetTitleOffset(0.9);
   Graph_mtW3l_data_graph3055->GetXaxis()->SetTitleFont(42);
   Graph_mtW3l_data_graph3055->GetYaxis()->SetLabelFont(42);
   Graph_mtW3l_data_graph3055->GetYaxis()->SetLabelOffset(0.007);
   Graph_mtW3l_data_graph3055->GetYaxis()->SetLabelSize(0.05);
   Graph_mtW3l_data_graph3055->GetYaxis()->SetTitleSize(0.06);
   Graph_mtW3l_data_graph3055->GetYaxis()->SetTitleOffset(1.35);
   Graph_mtW3l_data_graph3055->GetYaxis()->SetTitleFont(42);
   Graph_mtW3l_data_graph3055->GetZaxis()->SetLabelFont(42);
   Graph_mtW3l_data_graph3055->GetZaxis()->SetLabelOffset(0.007);
   Graph_mtW3l_data_graph3055->GetZaxis()->SetLabelSize(0.05);
   Graph_mtW3l_data_graph3055->GetZaxis()->SetTitleSize(0.06);
   Graph_mtW3l_data_graph3055->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_mtW3l_data_graph3055);
   
   grae->Draw("pz ");
   
   leg = new TLegend(0,0,0,0,NULL,"brNDC");
   leg->SetBorderSize(1);
   leg->SetTextSize(0.084);
   leg->SetLineColor(0);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   entry=leg->AddEntry("mtW3l_total_errors","stat. unc.","F");
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
   entry=leg->AddEntry("mtW3l_total_errors","total unc.","F");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   leg->Draw();
   pad2->Modified();
   mtW3l_canvas->cd();
   mtW3l_canvas->Modified();
   mtW3l_canvas->cd();
   mtW3l_canvas->SetSelected(mtW3l_canvas);
}
