void mll3l()
{
//=========Macro generated from canvas: mll3l_canvas/mll3l
//=========  (Fri Nov 18 13:00:11 2022) by ROOT version 6.12/07
   TCanvas *mll3l_canvas = new TCanvas("mll3l_canvas", "mll3l",0,0,600,750);
   gStyle->SetOptFit(1);
   gStyle->SetOptStat(0);
   gStyle->SetOptTitle(0);
   mll3l_canvas->SetHighLightColor(2);
   mll3l_canvas->Range(0,0,1,1);
   mll3l_canvas->SetFillColor(0);
   mll3l_canvas->SetBorderMode(0);
   mll3l_canvas->SetBorderSize(2);
   mll3l_canvas->SetTickx(1);
   mll3l_canvas->SetTicky(1);
   mll3l_canvas->SetLeftMargin(0.18);
   mll3l_canvas->SetRightMargin(0.04);
   mll3l_canvas->SetBottomMargin(0.13);
   mll3l_canvas->SetFrameFillStyle(0);
   mll3l_canvas->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: pad1
   TPad *pad1 = new TPad("pad1", "pad1",0,0.3,1,1);
   pad1->Draw();
   pad1->cd();
   pad1->Range(68.07692,-12.60716,106.5385,491.6793);
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
   
   TH1D *mll3l_total__37 = new TH1D("mll3l_total__37","dummy",15,75,105);
   mll3l_total__37->SetBinContent(1,6.317744);
   mll3l_total__37->SetBinContent(2,21.85506);
   mll3l_total__37->SetBinContent(3,34.97962);
   mll3l_total__37->SetBinContent(4,43.04078);
   mll3l_total__37->SetBinContent(5,73.9519);
   mll3l_total__37->SetBinContent(6,127.6832);
   mll3l_total__37->SetBinContent(7,188.7001);
   mll3l_total__37->SetBinContent(8,314.3388);
   mll3l_total__37->SetBinContent(9,302.166);
   mll3l_total__37->SetBinContent(10,163.0166);
   mll3l_total__37->SetBinContent(11,81.91929);
   mll3l_total__37->SetBinContent(12,51.47068);
   mll3l_total__37->SetBinContent(13,34.89602);
   mll3l_total__37->SetBinContent(14,23.93067);
   mll3l_total__37->SetBinContent(15,27.67804);
   mll3l_total__37->SetBinError(1,0.7329836);
   mll3l_total__37->SetBinError(2,2.73816);
   mll3l_total__37->SetBinError(3,3.790258);
   mll3l_total__37->SetBinError(4,2.602138);
   mll3l_total__37->SetBinError(5,3.131011);
   mll3l_total__37->SetBinError(6,5.865297);
   mll3l_total__37->SetBinError(7,6.126621);
   mll3l_total__37->SetBinError(8,8.308046);
   mll3l_total__37->SetBinError(9,7.149863);
   mll3l_total__37->SetBinError(10,7.386916);
   mll3l_total__37->SetBinError(11,4.344992);
   mll3l_total__37->SetBinError(12,3.231943);
   mll3l_total__37->SetBinError(13,2.464218);
   mll3l_total__37->SetBinError(14,1.500756);
   mll3l_total__37->SetBinError(15,2.845009);
   mll3l_total__37->SetMinimum(0);
   mll3l_total__37->SetMaximum(461.4221);
   mll3l_total__37->SetEntries(15152);
   mll3l_total__37->SetDirectory(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#00cc00");
   mll3l_total__37->SetFillColor(ci);
   mll3l_total__37->SetMarkerStyle(20);
   mll3l_total__37->SetMarkerSize(1.1);
   mll3l_total__37->GetXaxis()->SetTitle("M_{ll} (GeV)");
   mll3l_total__37->GetXaxis()->SetMoreLogLabels();
   mll3l_total__37->GetXaxis()->SetLabelFont(42);
   mll3l_total__37->GetXaxis()->SetLabelOffset(999);
   mll3l_total__37->GetXaxis()->SetLabelSize(0.05);
   mll3l_total__37->GetXaxis()->SetTitleSize(0.05);
   mll3l_total__37->GetXaxis()->SetTitleOffset(999);
   mll3l_total__37->GetXaxis()->SetTitleFont(42);
   mll3l_total__37->GetYaxis()->SetTitle("Events");
   mll3l_total__37->GetYaxis()->SetLabelFont(42);
   mll3l_total__37->GetYaxis()->SetLabelOffset(0.007);
   mll3l_total__37->GetYaxis()->SetLabelSize(0.05);
   mll3l_total__37->GetYaxis()->SetTitleSize(0.06);
   mll3l_total__37->GetYaxis()->SetTitleOffset(1.48);
   mll3l_total__37->GetYaxis()->SetTitleFont(42);
   mll3l_total__37->GetZaxis()->SetLabelFont(42);
   mll3l_total__37->GetZaxis()->SetLabelOffset(0.007);
   mll3l_total__37->GetZaxis()->SetLabelSize(0.05);
   mll3l_total__37->GetZaxis()->SetTitleSize(0.06);
   mll3l_total__37->GetZaxis()->SetTitleFont(42);
   mll3l_total__37->Draw("HIST");
   
   THStack *mll3l_stack = new THStack();
   mll3l_stack->SetName("mll3l_stack");
   mll3l_stack->SetTitle("mll3l");
   
   TH1F *mll3l_stack_stack_10 = new TH1F("mll3l_stack_stack_10","mll3l",15,75,105);
   mll3l_stack_stack_10->SetMinimum(0);
   mll3l_stack_stack_10->SetMaximum(330.0558);
   mll3l_stack_stack_10->SetDirectory(0);
   mll3l_stack_stack_10->SetStats(0);
   mll3l_stack_stack_10->SetLineStyle(0);
   mll3l_stack_stack_10->SetMarkerStyle(20);
   mll3l_stack_stack_10->GetXaxis()->SetLabelFont(42);
   mll3l_stack_stack_10->GetXaxis()->SetLabelOffset(0.007);
   mll3l_stack_stack_10->GetXaxis()->SetLabelSize(0.05);
   mll3l_stack_stack_10->GetXaxis()->SetTitleSize(0.06);
   mll3l_stack_stack_10->GetXaxis()->SetTitleOffset(0.9);
   mll3l_stack_stack_10->GetXaxis()->SetTitleFont(42);
   mll3l_stack_stack_10->GetYaxis()->SetLabelFont(42);
   mll3l_stack_stack_10->GetYaxis()->SetLabelOffset(0.007);
   mll3l_stack_stack_10->GetYaxis()->SetLabelSize(0.05);
   mll3l_stack_stack_10->GetYaxis()->SetTitleSize(0.06);
   mll3l_stack_stack_10->GetYaxis()->SetTitleOffset(1.35);
   mll3l_stack_stack_10->GetYaxis()->SetTitleFont(42);
   mll3l_stack_stack_10->GetZaxis()->SetLabelFont(42);
   mll3l_stack_stack_10->GetZaxis()->SetLabelOffset(0.007);
   mll3l_stack_stack_10->GetZaxis()->SetLabelSize(0.05);
   mll3l_stack_stack_10->GetZaxis()->SetTitleSize(0.06);
   mll3l_stack_stack_10->GetZaxis()->SetTitleFont(42);
   mll3l_stack->SetHistogram(mll3l_stack_stack_10);
   
   
   TH1D *mll3l_fakes_VV_stack_1 = new TH1D("mll3l_fakes_VV_stack_1","dummy",15,75,105);
   mll3l_fakes_VV_stack_1->SetBinContent(4,0.09719337);
   mll3l_fakes_VV_stack_1->SetBinContent(5,0.09719337);
   mll3l_fakes_VV_stack_1->SetBinContent(7,0.09719337);
   mll3l_fakes_VV_stack_1->SetBinContent(9,0.09719337);
   mll3l_fakes_VV_stack_1->SetBinContent(13,0.09719337);
   mll3l_fakes_VV_stack_1->SetBinContent(14,0.1943867);
   mll3l_fakes_VV_stack_1->SetBinError(4,0.09719337);
   mll3l_fakes_VV_stack_1->SetBinError(5,0.09719337);
   mll3l_fakes_VV_stack_1->SetBinError(7,0.09719337);
   mll3l_fakes_VV_stack_1->SetBinError(9,0.09719337);
   mll3l_fakes_VV_stack_1->SetBinError(13,0.09719337);
   mll3l_fakes_VV_stack_1->SetBinError(14,0.1374522);
   mll3l_fakes_VV_stack_1->SetEntries(11);

   ci = TColor::GetColor("#2e3294");
   mll3l_fakes_VV_stack_1->SetFillColor(ci);
   mll3l_fakes_VV_stack_1->SetMarkerStyle(0);
   mll3l_fakes_VV_stack_1->SetMarkerSize(1.1);
   mll3l_fakes_VV_stack_1->GetXaxis()->SetTitle("M_{ll} (GeV)");
   mll3l_fakes_VV_stack_1->GetXaxis()->SetMoreLogLabels();
   mll3l_fakes_VV_stack_1->GetXaxis()->SetLabelFont(42);
   mll3l_fakes_VV_stack_1->GetXaxis()->SetLabelOffset(0.007);
   mll3l_fakes_VV_stack_1->GetXaxis()->SetLabelSize(0.05);
   mll3l_fakes_VV_stack_1->GetXaxis()->SetTitleSize(0.06);
   mll3l_fakes_VV_stack_1->GetXaxis()->SetTitleOffset(0.9);
   mll3l_fakes_VV_stack_1->GetXaxis()->SetTitleFont(42);
   mll3l_fakes_VV_stack_1->GetYaxis()->SetTitle("Events");
   mll3l_fakes_VV_stack_1->GetYaxis()->SetLabelFont(42);
   mll3l_fakes_VV_stack_1->GetYaxis()->SetLabelOffset(0.007);
   mll3l_fakes_VV_stack_1->GetYaxis()->SetLabelSize(0.05);
   mll3l_fakes_VV_stack_1->GetYaxis()->SetTitleSize(0.06);
   mll3l_fakes_VV_stack_1->GetYaxis()->SetTitleOffset(1.35);
   mll3l_fakes_VV_stack_1->GetYaxis()->SetTitleFont(42);
   mll3l_fakes_VV_stack_1->GetZaxis()->SetLabelFont(42);
   mll3l_fakes_VV_stack_1->GetZaxis()->SetLabelOffset(0.007);
   mll3l_fakes_VV_stack_1->GetZaxis()->SetLabelSize(0.05);
   mll3l_fakes_VV_stack_1->GetZaxis()->SetTitleSize(0.06);
   mll3l_fakes_VV_stack_1->GetZaxis()->SetTitleFont(42);
   mll3l_stack->Add(mll3l_fakes_VV_stack_1,"");
   
   TH1D *mll3l_fakes_TT_stack_2 = new TH1D("mll3l_fakes_TT_stack_2","dummy",15,75,105);
   mll3l_fakes_TT_stack_2->SetBinContent(1,1.795344);
   mll3l_fakes_TT_stack_2->SetBinContent(2,4.122642);
   mll3l_fakes_TT_stack_2->SetBinContent(3,4.388619);
   mll3l_fakes_TT_stack_2->SetBinContent(4,4.654596);
   mll3l_fakes_TT_stack_2->SetBinContent(5,4.056148);
   mll3l_fakes_TT_stack_2->SetBinContent(6,3.590688);
   mll3l_fakes_TT_stack_2->SetBinContent(7,4.301285);
   mll3l_fakes_TT_stack_2->SetBinContent(8,4.67941);
   mll3l_fakes_TT_stack_2->SetBinContent(9,3.902319);
   mll3l_fakes_TT_stack_2->SetBinContent(10,3.258217);
   mll3l_fakes_TT_stack_2->SetBinContent(11,4.346939);
   mll3l_fakes_TT_stack_2->SetBinContent(12,2.859252);
   mll3l_fakes_TT_stack_2->SetBinContent(13,2.572435);
   mll3l_fakes_TT_stack_2->SetBinContent(14,2.460286);
   mll3l_fakes_TT_stack_2->SetBinContent(15,4.056148);
   mll3l_fakes_TT_stack_2->SetBinError(1,0.3580824);
   mll3l_fakes_TT_stack_2->SetBinError(2,0.523576);
   mll3l_fakes_TT_stack_2->SetBinError(3,0.5402016);
   mll3l_fakes_TT_stack_2->SetBinError(4,0.5563306);
   mll3l_fakes_TT_stack_2->SetBinError(5,0.5193365);
   mll3l_fakes_TT_stack_2->SetBinError(6,0.4886308);
   mll3l_fakes_TT_stack_2->SetBinError(7,0.5557127);
   mll3l_fakes_TT_stack_2->SetBinError(8,0.5746623);
   mll3l_fakes_TT_stack_2->SetBinError(9,0.5143945);
   mll3l_fakes_TT_stack_2->SetBinError(10,0.4654596);
   mll3l_fakes_TT_stack_2->SetBinError(11,0.5470708);
   mll3l_fakes_TT_stack_2->SetBinError(12,0.4360318);
   mll3l_fakes_TT_stack_2->SetBinError(13,0.4197286);
   mll3l_fakes_TT_stack_2->SetBinError(14,0.4152563);
   mll3l_fakes_TT_stack_2->SetBinError(15,0.5193365);
   mll3l_fakes_TT_stack_2->SetEntries(841);

   ci = TColor::GetColor("#666666");
   mll3l_fakes_TT_stack_2->SetFillColor(ci);
   mll3l_fakes_TT_stack_2->SetMarkerStyle(0);
   mll3l_fakes_TT_stack_2->SetMarkerSize(1.1);
   mll3l_fakes_TT_stack_2->GetXaxis()->SetTitle("M_{ll} (GeV)");
   mll3l_fakes_TT_stack_2->GetXaxis()->SetMoreLogLabels();
   mll3l_fakes_TT_stack_2->GetXaxis()->SetLabelFont(42);
   mll3l_fakes_TT_stack_2->GetXaxis()->SetLabelOffset(0.007);
   mll3l_fakes_TT_stack_2->GetXaxis()->SetLabelSize(0.05);
   mll3l_fakes_TT_stack_2->GetXaxis()->SetTitleSize(0.06);
   mll3l_fakes_TT_stack_2->GetXaxis()->SetTitleOffset(0.9);
   mll3l_fakes_TT_stack_2->GetXaxis()->SetTitleFont(42);
   mll3l_fakes_TT_stack_2->GetYaxis()->SetTitle("Events");
   mll3l_fakes_TT_stack_2->GetYaxis()->SetLabelFont(42);
   mll3l_fakes_TT_stack_2->GetYaxis()->SetLabelOffset(0.007);
   mll3l_fakes_TT_stack_2->GetYaxis()->SetLabelSize(0.05);
   mll3l_fakes_TT_stack_2->GetYaxis()->SetTitleSize(0.06);
   mll3l_fakes_TT_stack_2->GetYaxis()->SetTitleOffset(1.35);
   mll3l_fakes_TT_stack_2->GetYaxis()->SetTitleFont(42);
   mll3l_fakes_TT_stack_2->GetZaxis()->SetLabelFont(42);
   mll3l_fakes_TT_stack_2->GetZaxis()->SetLabelOffset(0.007);
   mll3l_fakes_TT_stack_2->GetZaxis()->SetLabelSize(0.05);
   mll3l_fakes_TT_stack_2->GetZaxis()->SetTitleSize(0.06);
   mll3l_fakes_TT_stack_2->GetZaxis()->SetTitleFont(42);
   mll3l_stack->Add(mll3l_fakes_TT_stack_2,"");
   
   TH1D *mll3l_fakes_DY_stack_3 = new TH1D("mll3l_fakes_DY_stack_3","dummy",15,75,105);
   mll3l_fakes_DY_stack_3->SetBinContent(2,3.439044);
   mll3l_fakes_DY_stack_3->SetBinContent(3,6.878088);
   mll3l_fakes_DY_stack_3->SetBinContent(4,1.719522);
   mll3l_fakes_DY_stack_3->SetBinContent(5,1.719522);
   mll3l_fakes_DY_stack_3->SetBinContent(6,13.75618);
   mll3l_fakes_DY_stack_3->SetBinContent(7,12.03665);
   mll3l_fakes_DY_stack_3->SetBinContent(8,24.07331);
   mll3l_fakes_DY_stack_3->SetBinContent(9,13.75618);
   mll3l_fakes_DY_stack_3->SetBinContent(10,24.07331);
   mll3l_fakes_DY_stack_3->SetBinContent(11,6.878088);
   mll3l_fakes_DY_stack_3->SetBinContent(12,3.439044);
   mll3l_fakes_DY_stack_3->SetBinContent(13,1.719522);
   mll3l_fakes_DY_stack_3->SetBinContent(15,3.439044);
   mll3l_fakes_DY_stack_3->SetBinError(2,2.431771);
   mll3l_fakes_DY_stack_3->SetBinError(3,3.439044);
   mll3l_fakes_DY_stack_3->SetBinError(4,1.719522);
   mll3l_fakes_DY_stack_3->SetBinError(5,1.719522);
   mll3l_fakes_DY_stack_3->SetBinError(6,4.863543);
   mll3l_fakes_DY_stack_3->SetBinError(7,4.549428);
   mll3l_fakes_DY_stack_3->SetBinError(8,6.433863);
   mll3l_fakes_DY_stack_3->SetBinError(9,4.863543);
   mll3l_fakes_DY_stack_3->SetBinError(10,6.433863);
   mll3l_fakes_DY_stack_3->SetBinError(11,3.439044);
   mll3l_fakes_DY_stack_3->SetBinError(12,2.431771);
   mll3l_fakes_DY_stack_3->SetBinError(13,1.719522);
   mll3l_fakes_DY_stack_3->SetBinError(15,2.431771);
   mll3l_fakes_DY_stack_3->SetEntries(72);

   ci = TColor::GetColor("#cccccc");
   mll3l_fakes_DY_stack_3->SetFillColor(ci);
   mll3l_fakes_DY_stack_3->SetMarkerStyle(0);
   mll3l_fakes_DY_stack_3->SetMarkerSize(1.1);
   mll3l_fakes_DY_stack_3->GetXaxis()->SetTitle("M_{ll} (GeV)");
   mll3l_fakes_DY_stack_3->GetXaxis()->SetMoreLogLabels();
   mll3l_fakes_DY_stack_3->GetXaxis()->SetLabelFont(42);
   mll3l_fakes_DY_stack_3->GetXaxis()->SetLabelOffset(0.007);
   mll3l_fakes_DY_stack_3->GetXaxis()->SetLabelSize(0.05);
   mll3l_fakes_DY_stack_3->GetXaxis()->SetTitleSize(0.06);
   mll3l_fakes_DY_stack_3->GetXaxis()->SetTitleOffset(0.9);
   mll3l_fakes_DY_stack_3->GetXaxis()->SetTitleFont(42);
   mll3l_fakes_DY_stack_3->GetYaxis()->SetTitle("Events");
   mll3l_fakes_DY_stack_3->GetYaxis()->SetLabelFont(42);
   mll3l_fakes_DY_stack_3->GetYaxis()->SetLabelOffset(0.007);
   mll3l_fakes_DY_stack_3->GetYaxis()->SetLabelSize(0.05);
   mll3l_fakes_DY_stack_3->GetYaxis()->SetTitleSize(0.06);
   mll3l_fakes_DY_stack_3->GetYaxis()->SetTitleOffset(1.35);
   mll3l_fakes_DY_stack_3->GetYaxis()->SetTitleFont(42);
   mll3l_fakes_DY_stack_3->GetZaxis()->SetLabelFont(42);
   mll3l_fakes_DY_stack_3->GetZaxis()->SetLabelOffset(0.007);
   mll3l_fakes_DY_stack_3->GetZaxis()->SetLabelSize(0.05);
   mll3l_fakes_DY_stack_3->GetZaxis()->SetTitleSize(0.06);
   mll3l_fakes_DY_stack_3->GetZaxis()->SetTitleFont(42);
   mll3l_stack->Add(mll3l_fakes_DY_stack_3,"");
   
   TH1D *mll3l_prompt_ZZ_stack_4 = new TH1D("mll3l_prompt_ZZ_stack_4","dummy",15,75,105);
   mll3l_prompt_ZZ_stack_4->SetBinContent(2,0.1834854);
   mll3l_prompt_ZZ_stack_4->SetBinContent(3,1.100912);
   mll3l_prompt_ZZ_stack_4->SetBinContent(4,2.01834);
   mll3l_prompt_ZZ_stack_4->SetBinContent(5,4.40365);
   mll3l_prompt_ZZ_stack_4->SetBinContent(6,5.688048);
   mll3l_prompt_ZZ_stack_4->SetBinContent(7,10.0917);
   mll3l_prompt_ZZ_stack_4->SetBinContent(8,15.77975);
   mll3l_prompt_ZZ_stack_4->SetBinContent(9,15.77975);
   mll3l_prompt_ZZ_stack_4->SetBinContent(10,7.339416);
   mll3l_prompt_ZZ_stack_4->SetBinContent(11,3.853194);
   mll3l_prompt_ZZ_stack_4->SetBinContent(12,2.752281);
   mll3l_prompt_ZZ_stack_4->SetBinContent(13,1.834854);
   mll3l_prompt_ZZ_stack_4->SetBinContent(14,1.467883);
   mll3l_prompt_ZZ_stack_4->SetBinContent(15,0.917427);
   mll3l_prompt_ZZ_stack_4->SetBinError(2,0.1834854);
   mll3l_prompt_ZZ_stack_4->SetBinError(3,0.4494456);
   mll3l_prompt_ZZ_stack_4->SetBinError(4,0.6085523);
   mll3l_prompt_ZZ_stack_4->SetBinError(5,0.8988913);
   mll3l_prompt_ZZ_stack_4->SetBinError(6,1.021604);
   mll3l_prompt_ZZ_stack_4->SetBinError(7,1.360764);
   mll3l_prompt_ZZ_stack_4->SetBinError(8,1.701574);
   mll3l_prompt_ZZ_stack_4->SetBinError(9,1.701574);
   mll3l_prompt_ZZ_stack_4->SetBinError(10,1.160464);
   mll3l_prompt_ZZ_stack_4->SetBinError(11,0.8408358);
   mll3l_prompt_ZZ_stack_4->SetBinError(12,0.7106359);
   mll3l_prompt_ZZ_stack_4->SetBinError(13,0.5802318);
   mll3l_prompt_ZZ_stack_4->SetBinError(14,0.5189751);
   mll3l_prompt_ZZ_stack_4->SetBinError(15,0.4102858);
   mll3l_prompt_ZZ_stack_4->SetEntries(403);

   ci = TColor::GetColor("#00cc00");
   mll3l_prompt_ZZ_stack_4->SetFillColor(ci);
   mll3l_prompt_ZZ_stack_4->SetMarkerStyle(0);
   mll3l_prompt_ZZ_stack_4->SetMarkerSize(1.1);
   mll3l_prompt_ZZ_stack_4->GetXaxis()->SetTitle("M_{ll} (GeV)");
   mll3l_prompt_ZZ_stack_4->GetXaxis()->SetMoreLogLabels();
   mll3l_prompt_ZZ_stack_4->GetXaxis()->SetLabelFont(42);
   mll3l_prompt_ZZ_stack_4->GetXaxis()->SetLabelOffset(0.007);
   mll3l_prompt_ZZ_stack_4->GetXaxis()->SetLabelSize(0.05);
   mll3l_prompt_ZZ_stack_4->GetXaxis()->SetTitleSize(0.06);
   mll3l_prompt_ZZ_stack_4->GetXaxis()->SetTitleOffset(0.9);
   mll3l_prompt_ZZ_stack_4->GetXaxis()->SetTitleFont(42);
   mll3l_prompt_ZZ_stack_4->GetYaxis()->SetTitle("Events");
   mll3l_prompt_ZZ_stack_4->GetYaxis()->SetLabelFont(42);
   mll3l_prompt_ZZ_stack_4->GetYaxis()->SetLabelOffset(0.007);
   mll3l_prompt_ZZ_stack_4->GetYaxis()->SetLabelSize(0.05);
   mll3l_prompt_ZZ_stack_4->GetYaxis()->SetTitleSize(0.06);
   mll3l_prompt_ZZ_stack_4->GetYaxis()->SetTitleOffset(1.35);
   mll3l_prompt_ZZ_stack_4->GetYaxis()->SetTitleFont(42);
   mll3l_prompt_ZZ_stack_4->GetZaxis()->SetLabelFont(42);
   mll3l_prompt_ZZ_stack_4->GetZaxis()->SetLabelOffset(0.007);
   mll3l_prompt_ZZ_stack_4->GetZaxis()->SetLabelSize(0.05);
   mll3l_prompt_ZZ_stack_4->GetZaxis()->SetTitleSize(0.06);
   mll3l_prompt_ZZ_stack_4->GetZaxis()->SetTitleFont(42);
   mll3l_stack->Add(mll3l_prompt_ZZ_stack_4,"");
   
   TH1D *mll3l_prompt_WZ_stack_5 = new TH1D("mll3l_prompt_WZ_stack_5","dummy",15,75,105);
   mll3l_prompt_WZ_stack_5->SetBinContent(1,4.5224);
   mll3l_prompt_WZ_stack_5->SetBinContent(2,14.10989);
   mll3l_prompt_WZ_stack_5->SetBinContent(3,22.612);
   mll3l_prompt_WZ_stack_5->SetBinContent(4,34.55113);
   mll3l_prompt_WZ_stack_5->SetBinContent(5,63.67539);
   mll3l_prompt_WZ_stack_5->SetBinContent(6,104.6483);
   mll3l_prompt_WZ_stack_5->SetBinContent(7,162.1732);
   mll3l_prompt_WZ_stack_5->SetBinContent(8,269.8064);
   mll3l_prompt_WZ_stack_5->SetBinContent(9,268.6305);
   mll3l_prompt_WZ_stack_5->SetBinContent(10,128.3457);
   mll3l_prompt_WZ_stack_5->SetBinContent(11,66.84106);
   mll3l_prompt_WZ_stack_5->SetBinContent(12,42.42011);
   mll3l_prompt_WZ_stack_5->SetBinContent(13,28.67201);
   mll3l_prompt_WZ_stack_5->SetBinContent(14,19.80811);
   mll3l_prompt_WZ_stack_5->SetBinContent(15,19.26542);
   mll3l_prompt_WZ_stack_5->SetBinError(1,0.6395639);
   mll3l_prompt_WZ_stack_5->SetBinError(2,1.129695);
   mll3l_prompt_WZ_stack_5->SetBinError(3,1.430108);
   mll3l_prompt_WZ_stack_5->SetBinError(4,1.76779);
   mll3l_prompt_WZ_stack_5->SetBinError(5,2.399856);
   mll3l_prompt_WZ_stack_5->SetBinError(6,3.076561);
   mll3l_prompt_WZ_stack_5->SetBinError(7,3.829914);
   mll3l_prompt_WZ_stack_5->SetBinError(8,4.939984);
   mll3l_prompt_WZ_stack_5->SetBinError(9,4.929208);
   mll3l_prompt_WZ_stack_5->SetBinError(10,3.407141);
   mll3l_prompt_WZ_stack_5->SetBinError(11,2.458788);
   mll3l_prompt_WZ_stack_5->SetBinError(12,1.958779);
   mll3l_prompt_WZ_stack_5->SetBinError(13,1.610381);
   mll3l_prompt_WZ_stack_5->SetBinError(14,1.338508);
   mll3l_prompt_WZ_stack_5->SetBinError(15,1.320045);
   mll3l_prompt_WZ_stack_5->SetEntries(13825);

   ci = TColor::GetColor("#ffcc00");
   mll3l_prompt_WZ_stack_5->SetFillColor(ci);
   mll3l_prompt_WZ_stack_5->SetMarkerStyle(0);
   mll3l_prompt_WZ_stack_5->SetMarkerSize(1.1);
   mll3l_prompt_WZ_stack_5->GetXaxis()->SetTitle("M_{ll} (GeV)");
   mll3l_prompt_WZ_stack_5->GetXaxis()->SetMoreLogLabels();
   mll3l_prompt_WZ_stack_5->GetXaxis()->SetLabelFont(42);
   mll3l_prompt_WZ_stack_5->GetXaxis()->SetLabelOffset(0.007);
   mll3l_prompt_WZ_stack_5->GetXaxis()->SetLabelSize(0.05);
   mll3l_prompt_WZ_stack_5->GetXaxis()->SetTitleSize(0.06);
   mll3l_prompt_WZ_stack_5->GetXaxis()->SetTitleOffset(0.9);
   mll3l_prompt_WZ_stack_5->GetXaxis()->SetTitleFont(42);
   mll3l_prompt_WZ_stack_5->GetYaxis()->SetTitle("Events");
   mll3l_prompt_WZ_stack_5->GetYaxis()->SetLabelFont(42);
   mll3l_prompt_WZ_stack_5->GetYaxis()->SetLabelOffset(0.007);
   mll3l_prompt_WZ_stack_5->GetYaxis()->SetLabelSize(0.05);
   mll3l_prompt_WZ_stack_5->GetYaxis()->SetTitleSize(0.06);
   mll3l_prompt_WZ_stack_5->GetYaxis()->SetTitleOffset(1.35);
   mll3l_prompt_WZ_stack_5->GetYaxis()->SetTitleFont(42);
   mll3l_prompt_WZ_stack_5->GetZaxis()->SetLabelFont(42);
   mll3l_prompt_WZ_stack_5->GetZaxis()->SetLabelOffset(0.007);
   mll3l_prompt_WZ_stack_5->GetZaxis()->SetLabelSize(0.05);
   mll3l_prompt_WZ_stack_5->GetZaxis()->SetTitleSize(0.06);
   mll3l_prompt_WZ_stack_5->GetZaxis()->SetTitleFont(42);
   mll3l_stack->Add(mll3l_prompt_WZ_stack_5,"");
   mll3l_stack->Draw("same hist");
   
   TH1D *mll3l_total__38 = new TH1D("mll3l_total__38","dummy",15,75,105);
   mll3l_total__38->SetBinContent(1,6.317744);
   mll3l_total__38->SetBinContent(2,21.85506);
   mll3l_total__38->SetBinContent(3,34.97962);
   mll3l_total__38->SetBinContent(4,43.04078);
   mll3l_total__38->SetBinContent(5,73.9519);
   mll3l_total__38->SetBinContent(6,127.6832);
   mll3l_total__38->SetBinContent(7,188.7001);
   mll3l_total__38->SetBinContent(8,314.3388);
   mll3l_total__38->SetBinContent(9,302.166);
   mll3l_total__38->SetBinContent(10,163.0166);
   mll3l_total__38->SetBinContent(11,81.91929);
   mll3l_total__38->SetBinContent(12,51.47068);
   mll3l_total__38->SetBinContent(13,34.89602);
   mll3l_total__38->SetBinContent(14,23.93067);
   mll3l_total__38->SetBinContent(15,27.67804);
   mll3l_total__38->SetBinError(1,0.7329836);
   mll3l_total__38->SetBinError(2,2.73816);
   mll3l_total__38->SetBinError(3,3.790258);
   mll3l_total__38->SetBinError(4,2.602138);
   mll3l_total__38->SetBinError(5,3.131011);
   mll3l_total__38->SetBinError(6,5.865297);
   mll3l_total__38->SetBinError(7,6.126621);
   mll3l_total__38->SetBinError(8,8.308046);
   mll3l_total__38->SetBinError(9,7.149863);
   mll3l_total__38->SetBinError(10,7.386916);
   mll3l_total__38->SetBinError(11,4.344992);
   mll3l_total__38->SetBinError(12,3.231943);
   mll3l_total__38->SetBinError(13,2.464218);
   mll3l_total__38->SetBinError(14,1.500756);
   mll3l_total__38->SetBinError(15,2.845009);
   mll3l_total__38->SetMinimum(0);
   mll3l_total__38->SetMaximum(461.4221);
   mll3l_total__38->SetEntries(15152);
   mll3l_total__38->SetDirectory(0);

   ci = TColor::GetColor("#00cc00");
   mll3l_total__38->SetFillColor(ci);
   mll3l_total__38->SetMarkerStyle(20);
   mll3l_total__38->SetMarkerSize(1.1);
   mll3l_total__38->GetXaxis()->SetTitle("M_{ll} (GeV)");
   mll3l_total__38->GetXaxis()->SetMoreLogLabels();
   mll3l_total__38->GetXaxis()->SetLabelFont(42);
   mll3l_total__38->GetXaxis()->SetLabelOffset(999);
   mll3l_total__38->GetXaxis()->SetLabelSize(0.05);
   mll3l_total__38->GetXaxis()->SetTitleSize(0.05);
   mll3l_total__38->GetXaxis()->SetTitleOffset(999);
   mll3l_total__38->GetXaxis()->SetTitleFont(42);
   mll3l_total__38->GetYaxis()->SetTitle("Events");
   mll3l_total__38->GetYaxis()->SetLabelFont(42);
   mll3l_total__38->GetYaxis()->SetLabelOffset(0.007);
   mll3l_total__38->GetYaxis()->SetLabelSize(0.05);
   mll3l_total__38->GetYaxis()->SetTitleSize(0.06);
   mll3l_total__38->GetYaxis()->SetTitleOffset(1.48);
   mll3l_total__38->GetYaxis()->SetTitleFont(42);
   mll3l_total__38->GetZaxis()->SetLabelFont(42);
   mll3l_total__38->GetZaxis()->SetLabelOffset(0.007);
   mll3l_total__38->GetZaxis()->SetLabelSize(0.05);
   mll3l_total__38->GetZaxis()->SetTitleSize(0.06);
   mll3l_total__38->GetZaxis()->SetTitleFont(42);
   mll3l_total__38->Draw("AXIS SAME");
   
   Double_t mll3l_total_errors_fx3046[15] = {
   76,
   78,
   80,
   82,
   84,
   86,
   88,
   90,
   92,
   94,
   96,
   98,
   100,
   102,
   104};
   Double_t mll3l_total_errors_fy3046[15] = {
   6.317744,
   21.85506,
   34.97962,
   43.04078,
   73.9519,
   127.6832,
   188.7001,
   314.3388,
   302.166,
   163.0166,
   81.91929,
   51.47068,
   34.89602,
   23.93067,
   27.67804};
   Double_t mll3l_total_errors_felx3046[15] = {
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
   Double_t mll3l_total_errors_fely3046[15] = {
   0.7329836,
   2.73816,
   3.790258,
   2.602138,
   3.131011,
   5.865297,
   6.126621,
   8.308046,
   7.149863,
   7.386916,
   4.344992,
   3.231943,
   2.464218,
   1.500756,
   2.845009};
   Double_t mll3l_total_errors_fehx3046[15] = {
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
   Double_t mll3l_total_errors_fehy3046[15] = {
   0.7329836,
   2.73816,
   3.790258,
   2.602138,
   3.131011,
   5.865297,
   6.126621,
   8.308046,
   7.149863,
   7.386916,
   4.344992,
   3.231943,
   2.464218,
   1.500756,
   2.845009};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(15,mll3l_total_errors_fx3046,mll3l_total_errors_fy3046,mll3l_total_errors_felx3046,mll3l_total_errors_fehx3046,mll3l_total_errors_fely3046,mll3l_total_errors_fehy3046);
   grae->SetName("mll3l_total_errors");
   grae->SetTitle("Graph");
   grae->SetFillColor(1);
   grae->SetFillStyle(3013);
   grae->SetMarkerStyle(0);
   
   TH1F *Graph_mll3l_total_errors3046 = new TH1F("Graph_mll3l_total_errors3046","Graph",100,72,108);
   Graph_mll3l_total_errors3046->SetMinimum(5.026284);
   Graph_mll3l_total_errors3046->SetMaximum(354.3531);
   Graph_mll3l_total_errors3046->SetDirectory(0);
   Graph_mll3l_total_errors3046->SetStats(0);
   Graph_mll3l_total_errors3046->SetLineStyle(0);
   Graph_mll3l_total_errors3046->SetMarkerStyle(20);
   Graph_mll3l_total_errors3046->GetXaxis()->SetLabelFont(42);
   Graph_mll3l_total_errors3046->GetXaxis()->SetLabelOffset(0.007);
   Graph_mll3l_total_errors3046->GetXaxis()->SetLabelSize(0.05);
   Graph_mll3l_total_errors3046->GetXaxis()->SetTitleSize(0.06);
   Graph_mll3l_total_errors3046->GetXaxis()->SetTitleOffset(0.9);
   Graph_mll3l_total_errors3046->GetXaxis()->SetTitleFont(42);
   Graph_mll3l_total_errors3046->GetYaxis()->SetLabelFont(42);
   Graph_mll3l_total_errors3046->GetYaxis()->SetLabelOffset(0.007);
   Graph_mll3l_total_errors3046->GetYaxis()->SetLabelSize(0.05);
   Graph_mll3l_total_errors3046->GetYaxis()->SetTitleSize(0.06);
   Graph_mll3l_total_errors3046->GetYaxis()->SetTitleOffset(1.35);
   Graph_mll3l_total_errors3046->GetYaxis()->SetTitleFont(42);
   Graph_mll3l_total_errors3046->GetZaxis()->SetLabelFont(42);
   Graph_mll3l_total_errors3046->GetZaxis()->SetLabelOffset(0.007);
   Graph_mll3l_total_errors3046->GetZaxis()->SetLabelSize(0.05);
   Graph_mll3l_total_errors3046->GetZaxis()->SetTitleSize(0.06);
   Graph_mll3l_total_errors3046->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_mll3l_total_errors3046);
   
   grae->Draw("pe2 ");
   
   Double_t mll3l_data_graph_fx3047[15] = {
   76,
   78,
   80,
   82,
   84,
   86,
   88,
   90,
   92,
   94,
   96,
   98,
   100,
   102,
   104};
   Double_t mll3l_data_graph_fy3047[15] = {
   11,
   17,
   21,
   37,
   60,
   111,
   183,
   330,
   306,
   155,
   107,
   74,
   37,
   31,
   33};
   Double_t mll3l_data_graph_felx3047[15] = {
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
   Double_t mll3l_data_graph_fely3047[15] = {
   3.265636,
   4.082258,
   4.545892,
   6.05526,
   7.72447,
   10.51998,
   13.51567,
   18.15708,
   17.48367,
   12.43672,
   10.3281,
   8.583016,
   6.05526,
   5.537671,
   5.715412};
   Double_t mll3l_data_graph_fehx3047[15] = {
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
   Double_t mll3l_data_graph_fehy3047[15] = {
   4.416609,
   5.203825,
   5.655298,
   7.137703,
   8.789207,
   11.56756,
   14.55272,
   19.18468,
   18.51232,
   13.47698,
   11.37657,
   9.641304,
   7.137703,
   6.627738,
   6.802707};
   grae = new TGraphAsymmErrors(15,mll3l_data_graph_fx3047,mll3l_data_graph_fy3047,mll3l_data_graph_felx3047,mll3l_data_graph_fehx3047,mll3l_data_graph_fely3047,mll3l_data_graph_fehy3047);
   grae->SetName("mll3l_data_graph");
   grae->SetTitle("Graph");
   grae->SetFillStyle(1000);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.1);
   
   TH1F *Graph_mll3l_data_graph3047 = new TH1F("Graph_mll3l_data_graph3047","Graph",100,72,108);
   Graph_mll3l_data_graph3047->SetMinimum(6.960927);
   Graph_mll3l_data_graph3047->SetMaximum(383.3297);
   Graph_mll3l_data_graph3047->SetDirectory(0);
   Graph_mll3l_data_graph3047->SetStats(0);
   Graph_mll3l_data_graph3047->SetLineStyle(0);
   Graph_mll3l_data_graph3047->SetMarkerStyle(20);
   Graph_mll3l_data_graph3047->GetXaxis()->SetLabelFont(42);
   Graph_mll3l_data_graph3047->GetXaxis()->SetLabelOffset(0.007);
   Graph_mll3l_data_graph3047->GetXaxis()->SetLabelSize(0.05);
   Graph_mll3l_data_graph3047->GetXaxis()->SetTitleSize(0.06);
   Graph_mll3l_data_graph3047->GetXaxis()->SetTitleOffset(0.9);
   Graph_mll3l_data_graph3047->GetXaxis()->SetTitleFont(42);
   Graph_mll3l_data_graph3047->GetYaxis()->SetLabelFont(42);
   Graph_mll3l_data_graph3047->GetYaxis()->SetLabelOffset(0.007);
   Graph_mll3l_data_graph3047->GetYaxis()->SetLabelSize(0.05);
   Graph_mll3l_data_graph3047->GetYaxis()->SetTitleSize(0.06);
   Graph_mll3l_data_graph3047->GetYaxis()->SetTitleOffset(1.35);
   Graph_mll3l_data_graph3047->GetYaxis()->SetTitleFont(42);
   Graph_mll3l_data_graph3047->GetZaxis()->SetLabelFont(42);
   Graph_mll3l_data_graph3047->GetZaxis()->SetLabelOffset(0.007);
   Graph_mll3l_data_graph3047->GetZaxis()->SetLabelSize(0.05);
   Graph_mll3l_data_graph3047->GetZaxis()->SetTitleSize(0.06);
   Graph_mll3l_data_graph3047->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_mll3l_data_graph3047);
   
   grae->Draw("pz ");
   
   TLegend *leg = new TLegend(0.62,0.628,0.9,0.91,NULL,"brNDC");
   leg->SetBorderSize(1);
   leg->SetTextSize(0.036);
   leg->SetLineColor(0);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("mll3l_data","Data","LPE");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1.1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("mll3l_prompt_WZ_stack_5","WZ","F");

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
   entry=leg->AddEntry("mll3l_prompt_ZZ_stack_4","qqZZ","F");

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
   entry=leg->AddEntry("mll3l_fakes_DY_stack_3","Fakes DY","F");

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
   entry=leg->AddEntry("mll3l_fakes_TT_stack_2","Fakes TT","F");

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
   entry=leg->AddEntry("mll3l_total_errors","Total unc.","F");
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
   mll3l_canvas->cd();
  
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
   
   TH1D *mll3l_total__39 = new TH1D("mll3l_total__39","dummy",15,75,105);
   mll3l_total__39->SetBinContent(1,1);
   mll3l_total__39->SetBinContent(2,1);
   mll3l_total__39->SetBinContent(3,1);
   mll3l_total__39->SetBinContent(4,1);
   mll3l_total__39->SetBinContent(5,1);
   mll3l_total__39->SetBinContent(6,1);
   mll3l_total__39->SetBinContent(7,1);
   mll3l_total__39->SetBinContent(8,1);
   mll3l_total__39->SetBinContent(9,1);
   mll3l_total__39->SetBinContent(10,1);
   mll3l_total__39->SetBinContent(11,1);
   mll3l_total__39->SetBinContent(12,1);
   mll3l_total__39->SetBinContent(13,1);
   mll3l_total__39->SetBinContent(14,1);
   mll3l_total__39->SetBinContent(15,1);
   mll3l_total__39->SetMinimum(0.5);
   mll3l_total__39->SetMaximum(2);
   mll3l_total__39->SetEntries(15167);

   ci = TColor::GetColor("#00cc00");
   mll3l_total__39->SetFillColor(ci);

   ci = TColor::GetColor("#6666ff");
   mll3l_total__39->SetMarkerColor(ci);
   mll3l_total__39->SetMarkerSize(1.1);
   mll3l_total__39->GetXaxis()->SetTitle("M_{ll} (GeV)");
   mll3l_total__39->GetXaxis()->SetMoreLogLabels();
   mll3l_total__39->GetXaxis()->SetLabelFont(42);
   mll3l_total__39->GetXaxis()->SetLabelOffset(0.015);
   mll3l_total__39->GetXaxis()->SetLabelSize(0.1);
   mll3l_total__39->GetXaxis()->SetTitleSize(0.14);
   mll3l_total__39->GetXaxis()->SetTitleFont(42);
   mll3l_total__39->GetYaxis()->SetTitle("Data/pred.");
   mll3l_total__39->GetYaxis()->SetDecimals();
   mll3l_total__39->GetYaxis()->SetNdivisions(505);
   mll3l_total__39->GetYaxis()->SetLabelFont(42);
   mll3l_total__39->GetYaxis()->SetLabelOffset(0.01);
   mll3l_total__39->GetYaxis()->SetLabelSize(0.11);
   mll3l_total__39->GetYaxis()->SetTitleSize(0.14);
   mll3l_total__39->GetYaxis()->SetTitleOffset(0.62);
   mll3l_total__39->GetYaxis()->SetTitleFont(42);
   mll3l_total__39->GetZaxis()->SetLabelFont(42);
   mll3l_total__39->GetZaxis()->SetLabelOffset(0.007);
   mll3l_total__39->GetZaxis()->SetLabelSize(0.05);
   mll3l_total__39->GetZaxis()->SetTitleSize(0.06);
   mll3l_total__39->GetZaxis()->SetTitleFont(42);
   mll3l_total__39->Draw("AXIS");
   
   Double_t mll3l_total_errors_fx3048[15] = {
   76,
   78,
   80,
   82,
   84,
   86,
   88,
   90,
   92,
   94,
   96,
   98,
   100,
   102,
   104};
   Double_t mll3l_total_errors_fy3048[15] = {
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
   Double_t mll3l_total_errors_felx3048[15] = {
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
   Double_t mll3l_total_errors_fely3048[15] = {
   0.1160198,
   0.1252873,
   0.1083562,
   0.0604575,
   0.04233848,
   0.04593632,
   0.0324675,
   0.02643022,
   0.02366204,
   0.04531388,
   0.05303992,
   0.06279191,
   0.07061602,
   0.06271269,
   0.1027894};
   Double_t mll3l_total_errors_fehx3048[15] = {
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
   Double_t mll3l_total_errors_fehy3048[15] = {
   0.1160198,
   0.1252873,
   0.1083562,
   0.0604575,
   0.04233848,
   0.04593632,
   0.0324675,
   0.02643022,
   0.02366204,
   0.04531388,
   0.05303992,
   0.06279191,
   0.07061602,
   0.06271269,
   0.1027894};
   grae = new TGraphAsymmErrors(15,mll3l_total_errors_fx3048,mll3l_total_errors_fy3048,mll3l_total_errors_felx3048,mll3l_total_errors_fehx3048,mll3l_total_errors_fely3048,mll3l_total_errors_fehy3048);
   grae->SetName("mll3l_total_errors");
   grae->SetTitle("Graph");

   ci = TColor::GetColor("#00ffff");
   grae->SetFillColor(ci);

   ci = TColor::GetColor("#00ffff");
   grae->SetMarkerColor(ci);
   grae->Draw("e2");
   
   Double_t mll3l_total_errors_fx3049[15] = {
   76,
   78,
   80,
   82,
   84,
   86,
   88,
   90,
   92,
   94,
   96,
   98,
   100,
   102,
   104};
   Double_t mll3l_total_errors_fy3049[15] = {
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
   Double_t mll3l_total_errors_felx3049[15] = {
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
   Double_t mll3l_total_errors_fely3049[15] = {
   0.1160198,
   0.1252873,
   0.1083562,
   0.0604575,
   0.04233848,
   0.04593632,
   0.0324675,
   0.02643022,
   0.02366204,
   0.04531388,
   0.05303992,
   0.06279191,
   0.07061602,
   0.06271269,
   0.1027894};
   Double_t mll3l_total_errors_fehx3049[15] = {
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
   Double_t mll3l_total_errors_fehy3049[15] = {
   0.1160198,
   0.1252873,
   0.1083562,
   0.0604575,
   0.04233848,
   0.04593632,
   0.0324675,
   0.02643022,
   0.02366204,
   0.04531388,
   0.05303992,
   0.06279191,
   0.07061602,
   0.06271269,
   0.1027894};
   grae = new TGraphAsymmErrors(15,mll3l_total_errors_fx3049,mll3l_total_errors_fy3049,mll3l_total_errors_felx3049,mll3l_total_errors_fehx3049,mll3l_total_errors_fely3049,mll3l_total_errors_fehy3049);
   grae->SetName("mll3l_total_errors");
   grae->SetTitle("Graph");

   ci = TColor::GetColor("#6666ff");
   grae->SetFillColor(ci);

   ci = TColor::GetColor("#6666ff");
   grae->SetMarkerColor(ci);
   grae->Draw("e2 ");
   
   TH1D *mll3l_total__40 = new TH1D("mll3l_total__40","dummy",15,75,105);
   mll3l_total__40->SetBinContent(1,1);
   mll3l_total__40->SetBinContent(2,1);
   mll3l_total__40->SetBinContent(3,1);
   mll3l_total__40->SetBinContent(4,1);
   mll3l_total__40->SetBinContent(5,1);
   mll3l_total__40->SetBinContent(6,1);
   mll3l_total__40->SetBinContent(7,1);
   mll3l_total__40->SetBinContent(8,1);
   mll3l_total__40->SetBinContent(9,1);
   mll3l_total__40->SetBinContent(10,1);
   mll3l_total__40->SetBinContent(11,1);
   mll3l_total__40->SetBinContent(12,1);
   mll3l_total__40->SetBinContent(13,1);
   mll3l_total__40->SetBinContent(14,1);
   mll3l_total__40->SetBinContent(15,1);
   mll3l_total__40->SetMinimum(0.5);
   mll3l_total__40->SetMaximum(2);
   mll3l_total__40->SetEntries(15167);

   ci = TColor::GetColor("#00cc00");
   mll3l_total__40->SetFillColor(ci);

   ci = TColor::GetColor("#6666ff");
   mll3l_total__40->SetMarkerColor(ci);
   mll3l_total__40->SetMarkerSize(1.1);
   mll3l_total__40->GetXaxis()->SetTitle("M_{ll} (GeV)");
   mll3l_total__40->GetXaxis()->SetMoreLogLabels();
   mll3l_total__40->GetXaxis()->SetLabelFont(42);
   mll3l_total__40->GetXaxis()->SetLabelOffset(0.015);
   mll3l_total__40->GetXaxis()->SetLabelSize(0.1);
   mll3l_total__40->GetXaxis()->SetTitleSize(0.14);
   mll3l_total__40->GetXaxis()->SetTitleFont(42);
   mll3l_total__40->GetYaxis()->SetTitle("Data/pred.");
   mll3l_total__40->GetYaxis()->SetDecimals();
   mll3l_total__40->GetYaxis()->SetNdivisions(505);
   mll3l_total__40->GetYaxis()->SetLabelFont(42);
   mll3l_total__40->GetYaxis()->SetLabelOffset(0.01);
   mll3l_total__40->GetYaxis()->SetLabelSize(0.11);
   mll3l_total__40->GetYaxis()->SetTitleSize(0.14);
   mll3l_total__40->GetYaxis()->SetTitleOffset(0.62);
   mll3l_total__40->GetYaxis()->SetTitleFont(42);
   mll3l_total__40->GetZaxis()->SetLabelFont(42);
   mll3l_total__40->GetZaxis()->SetLabelOffset(0.007);
   mll3l_total__40->GetZaxis()->SetLabelSize(0.05);
   mll3l_total__40->GetZaxis()->SetTitleSize(0.06);
   mll3l_total__40->GetZaxis()->SetTitleFont(42);
   mll3l_total__40->Draw("AXIS SAME");
   TLine *line = new TLine(75,1,105,1);
   line->SetLineColor(58);
   line->SetLineWidth(2);
   line->Draw();
   
   Double_t data_div_fx3050[15] = {
   76,
   78,
   80,
   82,
   84,
   86,
   88,
   90,
   92,
   94,
   96,
   98,
   100,
   102,
   104};
   Double_t data_div_fy3050[15] = {
   1.741128,
   0.777852,
   0.6003496,
   0.8596498,
   0.8113382,
   0.8693389,
   0.9697929,
   1.049823,
   1.012689,
   0.9508232,
   1.306164,
   1.437712,
   1.060293,
   1.295409,
   1.192281};
   Double_t data_div_felx3050[15] = {
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
   Double_t data_div_fely3050[15] = {
   0.5168992,
   0.1867878,
   0.1299583,
   0.1406866,
   0.1044526,
   0.08239122,
   0.07162512,
   0.05776278,
   0.05786114,
   0.0762911,
   0.1260766,
   0.1667554,
   0.173523,
   0.2314048,
   0.2064962};
   Double_t data_div_fehx3050[15] = {
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
   Double_t data_div_fehy3050[15] = {
   0.6990802,
   0.2381062,
   0.1616741,
   0.1658358,
   0.1188503,
   0.09059579,
   0.0771209,
   0.06103184,
   0.06126541,
   0.08267244,
   0.1388754,
   0.1873164,
   0.2045421,
   0.2769559,
   0.2457799};
   grae = new TGraphAsymmErrors(15,data_div_fx3050,data_div_fy3050,data_div_felx3050,data_div_fehx3050,data_div_fely3050,data_div_fehy3050);
   grae->SetName("data_div");
   grae->SetTitle("Graph");
   grae->SetFillStyle(1000);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.1);
   
   TH1F *Graph_mll3l_data_graph3050 = new TH1F("Graph_mll3l_data_graph3050","Graph",100,72,108);
   Graph_mll3l_data_graph3050->SetMinimum(6.960927);
   Graph_mll3l_data_graph3050->SetMaximum(383.3297);
   Graph_mll3l_data_graph3050->SetDirectory(0);
   Graph_mll3l_data_graph3050->SetStats(0);
   Graph_mll3l_data_graph3050->SetLineStyle(0);
   Graph_mll3l_data_graph3050->SetMarkerStyle(20);
   Graph_mll3l_data_graph3050->GetXaxis()->SetLabelFont(42);
   Graph_mll3l_data_graph3050->GetXaxis()->SetLabelOffset(0.007);
   Graph_mll3l_data_graph3050->GetXaxis()->SetLabelSize(0.05);
   Graph_mll3l_data_graph3050->GetXaxis()->SetTitleSize(0.06);
   Graph_mll3l_data_graph3050->GetXaxis()->SetTitleOffset(0.9);
   Graph_mll3l_data_graph3050->GetXaxis()->SetTitleFont(42);
   Graph_mll3l_data_graph3050->GetYaxis()->SetLabelFont(42);
   Graph_mll3l_data_graph3050->GetYaxis()->SetLabelOffset(0.007);
   Graph_mll3l_data_graph3050->GetYaxis()->SetLabelSize(0.05);
   Graph_mll3l_data_graph3050->GetYaxis()->SetTitleSize(0.06);
   Graph_mll3l_data_graph3050->GetYaxis()->SetTitleOffset(1.35);
   Graph_mll3l_data_graph3050->GetYaxis()->SetTitleFont(42);
   Graph_mll3l_data_graph3050->GetZaxis()->SetLabelFont(42);
   Graph_mll3l_data_graph3050->GetZaxis()->SetLabelOffset(0.007);
   Graph_mll3l_data_graph3050->GetZaxis()->SetLabelSize(0.05);
   Graph_mll3l_data_graph3050->GetZaxis()->SetTitleSize(0.06);
   Graph_mll3l_data_graph3050->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_mll3l_data_graph3050);
   
   grae->Draw("pz ");
   
   leg = new TLegend(0,0,0,0,NULL,"brNDC");
   leg->SetBorderSize(1);
   leg->SetTextSize(0.084);
   leg->SetLineColor(0);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   entry=leg->AddEntry("mll3l_total_errors","stat. unc.","F");
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
   entry=leg->AddEntry("mll3l_total_errors","total unc.","F");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   leg->Draw();
   pad2->Modified();
   mll3l_canvas->cd();
   mll3l_canvas->Modified();
   mll3l_canvas->cd();
   mll3l_canvas->SetSelected(mll3l_canvas);
}
