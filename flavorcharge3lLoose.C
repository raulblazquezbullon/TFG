void flavorcharge3lLoose()
{
//=========Macro generated from canvas: flavorcharge3lLoose_canvas/flavorcharge3lLoose
//=========  (Fri Nov 18 13:10:19 2022) by ROOT version 6.12/07
   TCanvas *flavorcharge3lLoose_canvas = new TCanvas("flavorcharge3lLoose_canvas", "flavorcharge3lLoose",0,0,600,750);
   gStyle->SetOptFit(1);
   gStyle->SetOptStat(0);
   gStyle->SetOptTitle(0);
   flavorcharge3lLoose_canvas->SetHighLightColor(2);
   flavorcharge3lLoose_canvas->Range(0,0,1,1);
   flavorcharge3lLoose_canvas->SetFillColor(0);
   flavorcharge3lLoose_canvas->SetBorderMode(0);
   flavorcharge3lLoose_canvas->SetBorderSize(2);
   flavorcharge3lLoose_canvas->SetTickx(1);
   flavorcharge3lLoose_canvas->SetTicky(1);
   flavorcharge3lLoose_canvas->SetLeftMargin(0.18);
   flavorcharge3lLoose_canvas->SetRightMargin(0.04);
   flavorcharge3lLoose_canvas->SetBottomMargin(0.13);
   flavorcharge3lLoose_canvas->SetFrameFillStyle(0);
   flavorcharge3lLoose_canvas->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: pad1
   TPad *pad1 = new TPad("pad1", "pad1",0,0.3,1,1);
   pad1->Draw();
   pad1->cd();
   pad1->Range(-2.346154,-26.58145,7.910256,1036.676);
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
   
   TH1D *flavorcharge3lLoose_total__117 = new TH1D("flavorcharge3lLoose_total__117","dummy",8,-0.5,7.5);
   flavorcharge3lLoose_total__117->SetBinContent(1,101.0697);
   flavorcharge3lLoose_total__117->SetBinContent(2,117.8597);
   flavorcharge3lLoose_total__117->SetBinContent(3,193.1309);
   flavorcharge3lLoose_total__117->SetBinContent(4,223.6091);
   flavorcharge3lLoose_total__117->SetBinContent(5,131.0733);
   flavorcharge3lLoose_total__117->SetBinContent(6,161.3039);
   flavorcharge3lLoose_total__117->SetBinContent(7,243.6043);
   flavorcharge3lLoose_total__117->SetBinContent(8,324.2936);
   flavorcharge3lLoose_total__117->SetBinError(1,5.406892);
   flavorcharge3lLoose_total__117->SetBinError(2,4.42944);
   flavorcharge3lLoose_total__117->SetBinError(3,8.601379);
   flavorcharge3lLoose_total__117->SetBinError(4,6.405644);
   flavorcharge3lLoose_total__117->SetBinError(5,5.11164);
   flavorcharge3lLoose_total__117->SetBinError(6,4.564476);
   flavorcharge3lLoose_total__117->SetBinError(7,7.871928);
   flavorcharge3lLoose_total__117->SetBinError(8,7.652794);
   flavorcharge3lLoose_total__117->SetMinimum(0);
   flavorcharge3lLoose_total__117->SetMaximum(972.8809);
   flavorcharge3lLoose_total__117->SetEntries(15152);
   flavorcharge3lLoose_total__117->SetDirectory(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#00cc00");
   flavorcharge3lLoose_total__117->SetFillColor(ci);
   flavorcharge3lLoose_total__117->SetMarkerStyle(20);
   flavorcharge3lLoose_total__117->SetMarkerSize(1.1);
   flavorcharge3lLoose_total__117->GetXaxis()->SetTitle("flavor");
   flavorcharge3lLoose_total__117->GetXaxis()->SetBinLabel(1,"eee^{-}");
   flavorcharge3lLoose_total__117->GetXaxis()->SetBinLabel(2,"ee#mu^{-}");
   flavorcharge3lLoose_total__117->GetXaxis()->SetBinLabel(3,"e#mu#mu^{-}");
   flavorcharge3lLoose_total__117->GetXaxis()->SetBinLabel(4,"#mu#mu#mu^{-}");
   flavorcharge3lLoose_total__117->GetXaxis()->SetBinLabel(5,"eee^{+}");
   flavorcharge3lLoose_total__117->GetXaxis()->SetBinLabel(6,"ee#mu^{+}");
   flavorcharge3lLoose_total__117->GetXaxis()->SetBinLabel(7,"e#mu#mu^{+}");
   flavorcharge3lLoose_total__117->GetXaxis()->SetBinLabel(8,"#mu#mu#mu^{+}");
   flavorcharge3lLoose_total__117->GetXaxis()->SetMoreLogLabels();
   flavorcharge3lLoose_total__117->GetXaxis()->SetLabelFont(42);
   flavorcharge3lLoose_total__117->GetXaxis()->SetLabelOffset(999);
   flavorcharge3lLoose_total__117->GetXaxis()->SetLabelSize(0.05);
   flavorcharge3lLoose_total__117->GetXaxis()->SetTitleSize(0.05);
   flavorcharge3lLoose_total__117->GetXaxis()->SetTitleOffset(999);
   flavorcharge3lLoose_total__117->GetXaxis()->SetTitleFont(42);
   flavorcharge3lLoose_total__117->GetYaxis()->SetTitle("Events");
   flavorcharge3lLoose_total__117->GetYaxis()->SetLabelFont(42);
   flavorcharge3lLoose_total__117->GetYaxis()->SetLabelOffset(0.007);
   flavorcharge3lLoose_total__117->GetYaxis()->SetLabelSize(0.05);
   flavorcharge3lLoose_total__117->GetYaxis()->SetTitleSize(0.06);
   flavorcharge3lLoose_total__117->GetYaxis()->SetTitleOffset(1.48);
   flavorcharge3lLoose_total__117->GetYaxis()->SetTitleFont(42);
   flavorcharge3lLoose_total__117->GetZaxis()->SetLabelFont(42);
   flavorcharge3lLoose_total__117->GetZaxis()->SetLabelOffset(0.007);
   flavorcharge3lLoose_total__117->GetZaxis()->SetLabelSize(0.05);
   flavorcharge3lLoose_total__117->GetZaxis()->SetTitleSize(0.06);
   flavorcharge3lLoose_total__117->GetZaxis()->SetTitleFont(42);
   flavorcharge3lLoose_total__117->Draw("HIST");
   
   THStack *flavorcharge3lLoose_stack = new THStack();
   flavorcharge3lLoose_stack->SetName("flavorcharge3lLoose_stack");
   flavorcharge3lLoose_stack->SetTitle("flavorcharge3lLoose");
   
   TH1F *flavorcharge3lLoose_stack_stack_30 = new TH1F("flavorcharge3lLoose_stack_stack_30","flavorcharge3lLoose",8,-0.5,7.5);
   flavorcharge3lLoose_stack_stack_30->SetMinimum(0);
   flavorcharge3lLoose_stack_stack_30->SetMaximum(340.5083);
   flavorcharge3lLoose_stack_stack_30->SetDirectory(0);
   flavorcharge3lLoose_stack_stack_30->SetStats(0);
   flavorcharge3lLoose_stack_stack_30->SetLineStyle(0);
   flavorcharge3lLoose_stack_stack_30->SetMarkerStyle(20);
   flavorcharge3lLoose_stack_stack_30->GetXaxis()->SetLabelFont(42);
   flavorcharge3lLoose_stack_stack_30->GetXaxis()->SetLabelOffset(0.007);
   flavorcharge3lLoose_stack_stack_30->GetXaxis()->SetLabelSize(0.05);
   flavorcharge3lLoose_stack_stack_30->GetXaxis()->SetTitleSize(0.06);
   flavorcharge3lLoose_stack_stack_30->GetXaxis()->SetTitleOffset(0.9);
   flavorcharge3lLoose_stack_stack_30->GetXaxis()->SetTitleFont(42);
   flavorcharge3lLoose_stack_stack_30->GetYaxis()->SetLabelFont(42);
   flavorcharge3lLoose_stack_stack_30->GetYaxis()->SetLabelOffset(0.007);
   flavorcharge3lLoose_stack_stack_30->GetYaxis()->SetLabelSize(0.05);
   flavorcharge3lLoose_stack_stack_30->GetYaxis()->SetTitleSize(0.06);
   flavorcharge3lLoose_stack_stack_30->GetYaxis()->SetTitleOffset(1.35);
   flavorcharge3lLoose_stack_stack_30->GetYaxis()->SetTitleFont(42);
   flavorcharge3lLoose_stack_stack_30->GetZaxis()->SetLabelFont(42);
   flavorcharge3lLoose_stack_stack_30->GetZaxis()->SetLabelOffset(0.007);
   flavorcharge3lLoose_stack_stack_30->GetZaxis()->SetLabelSize(0.05);
   flavorcharge3lLoose_stack_stack_30->GetZaxis()->SetTitleSize(0.06);
   flavorcharge3lLoose_stack_stack_30->GetZaxis()->SetTitleFont(42);
   flavorcharge3lLoose_stack->SetHistogram(flavorcharge3lLoose_stack_stack_30);
   
   
   TH1D *flavorcharge3lLoose_fakes_VV_stack_1 = new TH1D("flavorcharge3lLoose_fakes_VV_stack_1","dummy",8,-0.5,7.5);
   flavorcharge3lLoose_fakes_VV_stack_1->SetBinContent(1,0.1943867);
   flavorcharge3lLoose_fakes_VV_stack_1->SetBinContent(2,0.09719337);
   flavorcharge3lLoose_fakes_VV_stack_1->SetBinContent(3,0.1943867);
   flavorcharge3lLoose_fakes_VV_stack_1->SetBinContent(7,0.1943867);
   flavorcharge3lLoose_fakes_VV_stack_1->SetBinError(1,0.1374522);
   flavorcharge3lLoose_fakes_VV_stack_1->SetBinError(2,0.09719337);
   flavorcharge3lLoose_fakes_VV_stack_1->SetBinError(3,0.1374522);
   flavorcharge3lLoose_fakes_VV_stack_1->SetBinError(7,0.1374522);
   flavorcharge3lLoose_fakes_VV_stack_1->SetEntries(11);

   ci = TColor::GetColor("#2e3294");
   flavorcharge3lLoose_fakes_VV_stack_1->SetFillColor(ci);
   flavorcharge3lLoose_fakes_VV_stack_1->SetMarkerStyle(0);
   flavorcharge3lLoose_fakes_VV_stack_1->SetMarkerSize(1.1);
   flavorcharge3lLoose_fakes_VV_stack_1->GetXaxis()->SetTitle("flavor");
   flavorcharge3lLoose_fakes_VV_stack_1->GetXaxis()->SetMoreLogLabels();
   flavorcharge3lLoose_fakes_VV_stack_1->GetXaxis()->SetLabelFont(42);
   flavorcharge3lLoose_fakes_VV_stack_1->GetXaxis()->SetLabelOffset(0.007);
   flavorcharge3lLoose_fakes_VV_stack_1->GetXaxis()->SetLabelSize(0.05);
   flavorcharge3lLoose_fakes_VV_stack_1->GetXaxis()->SetTitleSize(0.06);
   flavorcharge3lLoose_fakes_VV_stack_1->GetXaxis()->SetTitleOffset(0.9);
   flavorcharge3lLoose_fakes_VV_stack_1->GetXaxis()->SetTitleFont(42);
   flavorcharge3lLoose_fakes_VV_stack_1->GetYaxis()->SetTitle("Events");
   flavorcharge3lLoose_fakes_VV_stack_1->GetYaxis()->SetLabelFont(42);
   flavorcharge3lLoose_fakes_VV_stack_1->GetYaxis()->SetLabelOffset(0.007);
   flavorcharge3lLoose_fakes_VV_stack_1->GetYaxis()->SetLabelSize(0.05);
   flavorcharge3lLoose_fakes_VV_stack_1->GetYaxis()->SetTitleSize(0.06);
   flavorcharge3lLoose_fakes_VV_stack_1->GetYaxis()->SetTitleOffset(1.35);
   flavorcharge3lLoose_fakes_VV_stack_1->GetYaxis()->SetTitleFont(42);
   flavorcharge3lLoose_fakes_VV_stack_1->GetZaxis()->SetLabelFont(42);
   flavorcharge3lLoose_fakes_VV_stack_1->GetZaxis()->SetLabelOffset(0.007);
   flavorcharge3lLoose_fakes_VV_stack_1->GetZaxis()->SetLabelSize(0.05);
   flavorcharge3lLoose_fakes_VV_stack_1->GetZaxis()->SetTitleSize(0.06);
   flavorcharge3lLoose_fakes_VV_stack_1->GetZaxis()->SetTitleFont(42);
   flavorcharge3lLoose_stack->Add(flavorcharge3lLoose_fakes_VV_stack_1,"");
   
   TH1D *flavorcharge3lLoose_fakes_TT_stack_2 = new TH1D("flavorcharge3lLoose_fakes_TT_stack_2","dummy",8,-0.5,7.5);
   flavorcharge3lLoose_fakes_TT_stack_2->SetBinContent(1,1.928333);
   flavorcharge3lLoose_fakes_TT_stack_2->SetBinContent(2,5.319538);
   flavorcharge3lLoose_fakes_TT_stack_2->SetBinContent(3,9.022375);
   flavorcharge3lLoose_fakes_TT_stack_2->SetBinContent(4,9.932454);
   flavorcharge3lLoose_fakes_TT_stack_2->SetBinContent(5,3.303871);
   flavorcharge3lLoose_fakes_TT_stack_2->SetBinContent(6,5.253044);
   flavorcharge3lLoose_fakes_TT_stack_2->SetBinContent(7,7.912813);
   flavorcharge3lLoose_fakes_TT_stack_2->SetBinContent(8,12.3719);
   flavorcharge3lLoose_fakes_TT_stack_2->SetBinError(1,0.3580824);
   flavorcharge3lLoose_fakes_TT_stack_2->SetBinError(2,0.5947424);
   flavorcharge3lLoose_fakes_TT_stack_2->SetBinError(3,0.7891399);
   flavorcharge3lLoose_fakes_TT_stack_2->SetBinError(4,0.8349969);
   flavorcharge3lLoose_fakes_TT_stack_2->SetBinError(5,0.4741396);
   flavorcharge3lLoose_fakes_TT_stack_2->SetBinError(6,0.5910136);
   flavorcharge3lLoose_fakes_TT_stack_2->SetBinError(7,0.7253664);
   flavorcharge3lLoose_fakes_TT_stack_2->SetBinError(8,0.9154343);
   flavorcharge3lLoose_fakes_TT_stack_2->SetEntries(841);

   ci = TColor::GetColor("#666666");
   flavorcharge3lLoose_fakes_TT_stack_2->SetFillColor(ci);
   flavorcharge3lLoose_fakes_TT_stack_2->SetMarkerStyle(0);
   flavorcharge3lLoose_fakes_TT_stack_2->SetMarkerSize(1.1);
   flavorcharge3lLoose_fakes_TT_stack_2->GetXaxis()->SetTitle("flavor");
   flavorcharge3lLoose_fakes_TT_stack_2->GetXaxis()->SetMoreLogLabels();
   flavorcharge3lLoose_fakes_TT_stack_2->GetXaxis()->SetLabelFont(42);
   flavorcharge3lLoose_fakes_TT_stack_2->GetXaxis()->SetLabelOffset(0.007);
   flavorcharge3lLoose_fakes_TT_stack_2->GetXaxis()->SetLabelSize(0.05);
   flavorcharge3lLoose_fakes_TT_stack_2->GetXaxis()->SetTitleSize(0.06);
   flavorcharge3lLoose_fakes_TT_stack_2->GetXaxis()->SetTitleOffset(0.9);
   flavorcharge3lLoose_fakes_TT_stack_2->GetXaxis()->SetTitleFont(42);
   flavorcharge3lLoose_fakes_TT_stack_2->GetYaxis()->SetTitle("Events");
   flavorcharge3lLoose_fakes_TT_stack_2->GetYaxis()->SetLabelFont(42);
   flavorcharge3lLoose_fakes_TT_stack_2->GetYaxis()->SetLabelOffset(0.007);
   flavorcharge3lLoose_fakes_TT_stack_2->GetYaxis()->SetLabelSize(0.05);
   flavorcharge3lLoose_fakes_TT_stack_2->GetYaxis()->SetTitleSize(0.06);
   flavorcharge3lLoose_fakes_TT_stack_2->GetYaxis()->SetTitleOffset(1.35);
   flavorcharge3lLoose_fakes_TT_stack_2->GetYaxis()->SetTitleFont(42);
   flavorcharge3lLoose_fakes_TT_stack_2->GetZaxis()->SetLabelFont(42);
   flavorcharge3lLoose_fakes_TT_stack_2->GetZaxis()->SetLabelOffset(0.007);
   flavorcharge3lLoose_fakes_TT_stack_2->GetZaxis()->SetLabelSize(0.05);
   flavorcharge3lLoose_fakes_TT_stack_2->GetZaxis()->SetTitleSize(0.06);
   flavorcharge3lLoose_fakes_TT_stack_2->GetZaxis()->SetTitleFont(42);
   flavorcharge3lLoose_stack->Add(flavorcharge3lLoose_fakes_TT_stack_2,"");
   
   TH1D *flavorcharge3lLoose_fakes_DY_stack_3 = new TH1D("flavorcharge3lLoose_fakes_DY_stack_3","dummy",8,-0.5,7.5);
   flavorcharge3lLoose_fakes_DY_stack_3->SetBinContent(1,12.03665);
   flavorcharge3lLoose_fakes_DY_stack_3->SetBinContent(2,5.158566);
   flavorcharge3lLoose_fakes_DY_stack_3->SetBinContent(3,34.39044);
   flavorcharge3lLoose_fakes_DY_stack_3->SetBinContent(4,12.03665);
   flavorcharge3lLoose_fakes_DY_stack_3->SetBinContent(5,8.597611);
   flavorcharge3lLoose_fakes_DY_stack_3->SetBinContent(6,3.439044);
   flavorcharge3lLoose_fakes_DY_stack_3->SetBinContent(7,24.07331);
   flavorcharge3lLoose_fakes_DY_stack_3->SetBinContent(8,17.19522);
   flavorcharge3lLoose_fakes_DY_stack_3->SetBinError(1,4.549428);
   flavorcharge3lLoose_fakes_DY_stack_3->SetBinError(2,2.9783);
   flavorcharge3lLoose_fakes_DY_stack_3->SetBinError(3,7.689937);
   flavorcharge3lLoose_fakes_DY_stack_3->SetBinError(4,4.549428);
   flavorcharge3lLoose_fakes_DY_stack_3->SetBinError(5,3.844968);
   flavorcharge3lLoose_fakes_DY_stack_3->SetBinError(6,2.431771);
   flavorcharge3lLoose_fakes_DY_stack_3->SetBinError(7,6.433863);
   flavorcharge3lLoose_fakes_DY_stack_3->SetBinError(8,5.437606);
   flavorcharge3lLoose_fakes_DY_stack_3->SetEntries(72);

   ci = TColor::GetColor("#cccccc");
   flavorcharge3lLoose_fakes_DY_stack_3->SetFillColor(ci);
   flavorcharge3lLoose_fakes_DY_stack_3->SetMarkerStyle(0);
   flavorcharge3lLoose_fakes_DY_stack_3->SetMarkerSize(1.1);
   flavorcharge3lLoose_fakes_DY_stack_3->GetXaxis()->SetTitle("flavor");
   flavorcharge3lLoose_fakes_DY_stack_3->GetXaxis()->SetMoreLogLabels();
   flavorcharge3lLoose_fakes_DY_stack_3->GetXaxis()->SetLabelFont(42);
   flavorcharge3lLoose_fakes_DY_stack_3->GetXaxis()->SetLabelOffset(0.007);
   flavorcharge3lLoose_fakes_DY_stack_3->GetXaxis()->SetLabelSize(0.05);
   flavorcharge3lLoose_fakes_DY_stack_3->GetXaxis()->SetTitleSize(0.06);
   flavorcharge3lLoose_fakes_DY_stack_3->GetXaxis()->SetTitleOffset(0.9);
   flavorcharge3lLoose_fakes_DY_stack_3->GetXaxis()->SetTitleFont(42);
   flavorcharge3lLoose_fakes_DY_stack_3->GetYaxis()->SetTitle("Events");
   flavorcharge3lLoose_fakes_DY_stack_3->GetYaxis()->SetLabelFont(42);
   flavorcharge3lLoose_fakes_DY_stack_3->GetYaxis()->SetLabelOffset(0.007);
   flavorcharge3lLoose_fakes_DY_stack_3->GetYaxis()->SetLabelSize(0.05);
   flavorcharge3lLoose_fakes_DY_stack_3->GetYaxis()->SetTitleSize(0.06);
   flavorcharge3lLoose_fakes_DY_stack_3->GetYaxis()->SetTitleOffset(1.35);
   flavorcharge3lLoose_fakes_DY_stack_3->GetYaxis()->SetTitleFont(42);
   flavorcharge3lLoose_fakes_DY_stack_3->GetZaxis()->SetLabelFont(42);
   flavorcharge3lLoose_fakes_DY_stack_3->GetZaxis()->SetLabelOffset(0.007);
   flavorcharge3lLoose_fakes_DY_stack_3->GetZaxis()->SetLabelSize(0.05);
   flavorcharge3lLoose_fakes_DY_stack_3->GetZaxis()->SetTitleSize(0.06);
   flavorcharge3lLoose_fakes_DY_stack_3->GetZaxis()->SetTitleFont(42);
   flavorcharge3lLoose_stack->Add(flavorcharge3lLoose_fakes_DY_stack_3,"");
   
   TH1D *flavorcharge3lLoose_prompt_ZZ_stack_4 = new TH1D("flavorcharge3lLoose_prompt_ZZ_stack_4","dummy",8,-0.5,7.5);
   flavorcharge3lLoose_prompt_ZZ_stack_4->SetBinContent(1,5.688048);
   flavorcharge3lLoose_prompt_ZZ_stack_4->SetBinContent(2,7.339416);
   flavorcharge3lLoose_prompt_ZZ_stack_4->SetBinContent(3,7.339416);
   flavorcharge3lLoose_prompt_ZZ_stack_4->SetBinContent(4,15.0458);
   flavorcharge3lLoose_prompt_ZZ_stack_4->SetBinContent(5,3.669708);
   flavorcharge3lLoose_prompt_ZZ_stack_4->SetBinContent(6,8.256843);
   flavorcharge3lLoose_prompt_ZZ_stack_4->SetBinContent(7,9.724727);
   flavorcharge3lLoose_prompt_ZZ_stack_4->SetBinContent(8,16.14672);
   flavorcharge3lLoose_prompt_ZZ_stack_4->SetBinError(1,1.021604);
   flavorcharge3lLoose_prompt_ZZ_stack_4->SetBinError(2,1.160464);
   flavorcharge3lLoose_prompt_ZZ_stack_4->SetBinError(3,1.160464);
   flavorcharge3lLoose_prompt_ZZ_stack_4->SetBinError(4,1.661531);
   flavorcharge3lLoose_prompt_ZZ_stack_4->SetBinError(5,0.8205717);
   flavorcharge3lLoose_prompt_ZZ_stack_4->SetBinError(6,1.230858);
   flavorcharge3lLoose_prompt_ZZ_stack_4->SetBinError(7,1.335794);
   flavorcharge3lLoose_prompt_ZZ_stack_4->SetBinError(8,1.721246);
   flavorcharge3lLoose_prompt_ZZ_stack_4->SetEntries(403);

   ci = TColor::GetColor("#00cc00");
   flavorcharge3lLoose_prompt_ZZ_stack_4->SetFillColor(ci);
   flavorcharge3lLoose_prompt_ZZ_stack_4->SetMarkerStyle(0);
   flavorcharge3lLoose_prompt_ZZ_stack_4->SetMarkerSize(1.1);
   flavorcharge3lLoose_prompt_ZZ_stack_4->GetXaxis()->SetTitle("flavor");
   flavorcharge3lLoose_prompt_ZZ_stack_4->GetXaxis()->SetMoreLogLabels();
   flavorcharge3lLoose_prompt_ZZ_stack_4->GetXaxis()->SetLabelFont(42);
   flavorcharge3lLoose_prompt_ZZ_stack_4->GetXaxis()->SetLabelOffset(0.007);
   flavorcharge3lLoose_prompt_ZZ_stack_4->GetXaxis()->SetLabelSize(0.05);
   flavorcharge3lLoose_prompt_ZZ_stack_4->GetXaxis()->SetTitleSize(0.06);
   flavorcharge3lLoose_prompt_ZZ_stack_4->GetXaxis()->SetTitleOffset(0.9);
   flavorcharge3lLoose_prompt_ZZ_stack_4->GetXaxis()->SetTitleFont(42);
   flavorcharge3lLoose_prompt_ZZ_stack_4->GetYaxis()->SetTitle("Events");
   flavorcharge3lLoose_prompt_ZZ_stack_4->GetYaxis()->SetLabelFont(42);
   flavorcharge3lLoose_prompt_ZZ_stack_4->GetYaxis()->SetLabelOffset(0.007);
   flavorcharge3lLoose_prompt_ZZ_stack_4->GetYaxis()->SetLabelSize(0.05);
   flavorcharge3lLoose_prompt_ZZ_stack_4->GetYaxis()->SetTitleSize(0.06);
   flavorcharge3lLoose_prompt_ZZ_stack_4->GetYaxis()->SetTitleOffset(1.35);
   flavorcharge3lLoose_prompt_ZZ_stack_4->GetYaxis()->SetTitleFont(42);
   flavorcharge3lLoose_prompt_ZZ_stack_4->GetZaxis()->SetLabelFont(42);
   flavorcharge3lLoose_prompt_ZZ_stack_4->GetZaxis()->SetLabelOffset(0.007);
   flavorcharge3lLoose_prompt_ZZ_stack_4->GetZaxis()->SetLabelSize(0.05);
   flavorcharge3lLoose_prompt_ZZ_stack_4->GetZaxis()->SetTitleSize(0.06);
   flavorcharge3lLoose_prompt_ZZ_stack_4->GetZaxis()->SetTitleFont(42);
   flavorcharge3lLoose_stack->Add(flavorcharge3lLoose_prompt_ZZ_stack_4,"");
   
   TH1D *flavorcharge3lLoose_prompt_WZ_stack_5 = new TH1D("flavorcharge3lLoose_prompt_WZ_stack_5","dummy",8,-0.5,7.5);
   flavorcharge3lLoose_prompt_WZ_stack_5->SetBinContent(1,81.2223);
   flavorcharge3lLoose_prompt_WZ_stack_5->SetBinContent(2,99.94503);
   flavorcharge3lLoose_prompt_WZ_stack_5->SetBinContent(3,142.1842);
   flavorcharge3lLoose_prompt_WZ_stack_5->SetBinContent(4,186.5942);
   flavorcharge3lLoose_prompt_WZ_stack_5->SetBinContent(5,115.5021);
   flavorcharge3lLoose_prompt_WZ_stack_5->SetBinContent(6,144.355);
   flavorcharge3lLoose_prompt_WZ_stack_5->SetBinContent(7,201.699);
   flavorcharge3lLoose_prompt_WZ_stack_5->SetBinContent(8,278.5798);
   flavorcharge3lLoose_prompt_WZ_stack_5->SetBinError(1,2.710423);
   flavorcharge3lLoose_prompt_WZ_stack_5->SetBinError(2,3.006631);
   flavorcharge3lLoose_prompt_WZ_stack_5->SetBinError(3,3.586123);
   flavorcharge3lLoose_prompt_WZ_stack_5->SetBinError(4,4.108171);
   flavorcharge3lLoose_prompt_WZ_stack_5->SetBinError(5,3.232171);
   flavorcharge3lLoose_prompt_WZ_stack_5->SetBinError(6,3.613394);
   flavorcharge3lLoose_prompt_WZ_stack_5->SetBinError(7,4.271214);
   flavorcharge3lLoose_prompt_WZ_stack_5->SetBinError(8,5.01966);
   flavorcharge3lLoose_prompt_WZ_stack_5->SetEntries(13825);

   ci = TColor::GetColor("#ffcc00");
   flavorcharge3lLoose_prompt_WZ_stack_5->SetFillColor(ci);
   flavorcharge3lLoose_prompt_WZ_stack_5->SetMarkerStyle(0);
   flavorcharge3lLoose_prompt_WZ_stack_5->SetMarkerSize(1.1);
   flavorcharge3lLoose_prompt_WZ_stack_5->GetXaxis()->SetTitle("flavor");
   flavorcharge3lLoose_prompt_WZ_stack_5->GetXaxis()->SetMoreLogLabels();
   flavorcharge3lLoose_prompt_WZ_stack_5->GetXaxis()->SetLabelFont(42);
   flavorcharge3lLoose_prompt_WZ_stack_5->GetXaxis()->SetLabelOffset(0.007);
   flavorcharge3lLoose_prompt_WZ_stack_5->GetXaxis()->SetLabelSize(0.05);
   flavorcharge3lLoose_prompt_WZ_stack_5->GetXaxis()->SetTitleSize(0.06);
   flavorcharge3lLoose_prompt_WZ_stack_5->GetXaxis()->SetTitleOffset(0.9);
   flavorcharge3lLoose_prompt_WZ_stack_5->GetXaxis()->SetTitleFont(42);
   flavorcharge3lLoose_prompt_WZ_stack_5->GetYaxis()->SetTitle("Events");
   flavorcharge3lLoose_prompt_WZ_stack_5->GetYaxis()->SetLabelFont(42);
   flavorcharge3lLoose_prompt_WZ_stack_5->GetYaxis()->SetLabelOffset(0.007);
   flavorcharge3lLoose_prompt_WZ_stack_5->GetYaxis()->SetLabelSize(0.05);
   flavorcharge3lLoose_prompt_WZ_stack_5->GetYaxis()->SetTitleSize(0.06);
   flavorcharge3lLoose_prompt_WZ_stack_5->GetYaxis()->SetTitleOffset(1.35);
   flavorcharge3lLoose_prompt_WZ_stack_5->GetYaxis()->SetTitleFont(42);
   flavorcharge3lLoose_prompt_WZ_stack_5->GetZaxis()->SetLabelFont(42);
   flavorcharge3lLoose_prompt_WZ_stack_5->GetZaxis()->SetLabelOffset(0.007);
   flavorcharge3lLoose_prompt_WZ_stack_5->GetZaxis()->SetLabelSize(0.05);
   flavorcharge3lLoose_prompt_WZ_stack_5->GetZaxis()->SetTitleSize(0.06);
   flavorcharge3lLoose_prompt_WZ_stack_5->GetZaxis()->SetTitleFont(42);
   flavorcharge3lLoose_stack->Add(flavorcharge3lLoose_prompt_WZ_stack_5,"");
   flavorcharge3lLoose_stack->Draw("same hist");
   
   TH1D *flavorcharge3lLoose_total__118 = new TH1D("flavorcharge3lLoose_total__118","dummy",8,-0.5,7.5);
   flavorcharge3lLoose_total__118->SetBinContent(1,101.0697);
   flavorcharge3lLoose_total__118->SetBinContent(2,117.8597);
   flavorcharge3lLoose_total__118->SetBinContent(3,193.1309);
   flavorcharge3lLoose_total__118->SetBinContent(4,223.6091);
   flavorcharge3lLoose_total__118->SetBinContent(5,131.0733);
   flavorcharge3lLoose_total__118->SetBinContent(6,161.3039);
   flavorcharge3lLoose_total__118->SetBinContent(7,243.6043);
   flavorcharge3lLoose_total__118->SetBinContent(8,324.2936);
   flavorcharge3lLoose_total__118->SetBinError(1,5.406892);
   flavorcharge3lLoose_total__118->SetBinError(2,4.42944);
   flavorcharge3lLoose_total__118->SetBinError(3,8.601379);
   flavorcharge3lLoose_total__118->SetBinError(4,6.405644);
   flavorcharge3lLoose_total__118->SetBinError(5,5.11164);
   flavorcharge3lLoose_total__118->SetBinError(6,4.564476);
   flavorcharge3lLoose_total__118->SetBinError(7,7.871928);
   flavorcharge3lLoose_total__118->SetBinError(8,7.652794);
   flavorcharge3lLoose_total__118->SetMinimum(0);
   flavorcharge3lLoose_total__118->SetMaximum(972.8809);
   flavorcharge3lLoose_total__118->SetEntries(15152);
   flavorcharge3lLoose_total__118->SetDirectory(0);

   ci = TColor::GetColor("#00cc00");
   flavorcharge3lLoose_total__118->SetFillColor(ci);
   flavorcharge3lLoose_total__118->SetMarkerStyle(20);
   flavorcharge3lLoose_total__118->SetMarkerSize(1.1);
   flavorcharge3lLoose_total__118->GetXaxis()->SetTitle("flavor");
   flavorcharge3lLoose_total__118->GetXaxis()->SetBinLabel(1,"eee^{-}");
   flavorcharge3lLoose_total__118->GetXaxis()->SetBinLabel(2,"ee#mu^{-}");
   flavorcharge3lLoose_total__118->GetXaxis()->SetBinLabel(3,"e#mu#mu^{-}");
   flavorcharge3lLoose_total__118->GetXaxis()->SetBinLabel(4,"#mu#mu#mu^{-}");
   flavorcharge3lLoose_total__118->GetXaxis()->SetBinLabel(5,"eee^{+}");
   flavorcharge3lLoose_total__118->GetXaxis()->SetBinLabel(6,"ee#mu^{+}");
   flavorcharge3lLoose_total__118->GetXaxis()->SetBinLabel(7,"e#mu#mu^{+}");
   flavorcharge3lLoose_total__118->GetXaxis()->SetBinLabel(8,"#mu#mu#mu^{+}");
   flavorcharge3lLoose_total__118->GetXaxis()->SetMoreLogLabels();
   flavorcharge3lLoose_total__118->GetXaxis()->SetLabelFont(42);
   flavorcharge3lLoose_total__118->GetXaxis()->SetLabelOffset(999);
   flavorcharge3lLoose_total__118->GetXaxis()->SetLabelSize(0.05);
   flavorcharge3lLoose_total__118->GetXaxis()->SetTitleSize(0.05);
   flavorcharge3lLoose_total__118->GetXaxis()->SetTitleOffset(999);
   flavorcharge3lLoose_total__118->GetXaxis()->SetTitleFont(42);
   flavorcharge3lLoose_total__118->GetYaxis()->SetTitle("Events");
   flavorcharge3lLoose_total__118->GetYaxis()->SetLabelFont(42);
   flavorcharge3lLoose_total__118->GetYaxis()->SetLabelOffset(0.007);
   flavorcharge3lLoose_total__118->GetYaxis()->SetLabelSize(0.05);
   flavorcharge3lLoose_total__118->GetYaxis()->SetTitleSize(0.06);
   flavorcharge3lLoose_total__118->GetYaxis()->SetTitleOffset(1.48);
   flavorcharge3lLoose_total__118->GetYaxis()->SetTitleFont(42);
   flavorcharge3lLoose_total__118->GetZaxis()->SetLabelFont(42);
   flavorcharge3lLoose_total__118->GetZaxis()->SetLabelOffset(0.007);
   flavorcharge3lLoose_total__118->GetZaxis()->SetLabelSize(0.05);
   flavorcharge3lLoose_total__118->GetZaxis()->SetTitleSize(0.06);
   flavorcharge3lLoose_total__118->GetZaxis()->SetTitleFont(42);
   flavorcharge3lLoose_total__118->Draw("AXIS SAME");
   
   Double_t flavorcharge3lLoose_total_errors_fx3146[8] = {
   0,
   1,
   2,
   3,
   4,
   5,
   6,
   7};
   Double_t flavorcharge3lLoose_total_errors_fy3146[8] = {
   101.0697,
   117.8597,
   193.1309,
   223.6091,
   131.0733,
   161.3039,
   243.6043,
   324.2936};
   Double_t flavorcharge3lLoose_total_errors_felx3146[8] = {
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5};
   Double_t flavorcharge3lLoose_total_errors_fely3146[8] = {
   5.406892,
   4.42944,
   8.601379,
   6.405644,
   5.11164,
   4.564476,
   7.871928,
   7.652794};
   Double_t flavorcharge3lLoose_total_errors_fehx3146[8] = {
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5};
   Double_t flavorcharge3lLoose_total_errors_fehy3146[8] = {
   5.406892,
   4.42944,
   8.601379,
   6.405644,
   5.11164,
   4.564476,
   7.871928,
   7.652794};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(8,flavorcharge3lLoose_total_errors_fx3146,flavorcharge3lLoose_total_errors_fy3146,flavorcharge3lLoose_total_errors_felx3146,flavorcharge3lLoose_total_errors_fehx3146,flavorcharge3lLoose_total_errors_fely3146,flavorcharge3lLoose_total_errors_fehy3146);
   grae->SetName("flavorcharge3lLoose_total_errors");
   grae->SetTitle("Graph");
   grae->SetFillColor(1);
   grae->SetFillStyle(3013);
   grae->SetMarkerStyle(0);
   
   TH1F *Graph_flavorcharge3lLoose_total_errors3146 = new TH1F("Graph_flavorcharge3lLoose_total_errors3146","Graph",100,-1.3,8.3);
   Graph_flavorcharge3lLoose_total_errors3146->SetMinimum(72.03446);
   Graph_flavorcharge3lLoose_total_errors3146->SetMaximum(355.5748);
   Graph_flavorcharge3lLoose_total_errors3146->SetDirectory(0);
   Graph_flavorcharge3lLoose_total_errors3146->SetStats(0);
   Graph_flavorcharge3lLoose_total_errors3146->SetLineStyle(0);
   Graph_flavorcharge3lLoose_total_errors3146->SetMarkerStyle(20);
   Graph_flavorcharge3lLoose_total_errors3146->GetXaxis()->SetLabelFont(42);
   Graph_flavorcharge3lLoose_total_errors3146->GetXaxis()->SetLabelOffset(0.007);
   Graph_flavorcharge3lLoose_total_errors3146->GetXaxis()->SetLabelSize(0.05);
   Graph_flavorcharge3lLoose_total_errors3146->GetXaxis()->SetTitleSize(0.06);
   Graph_flavorcharge3lLoose_total_errors3146->GetXaxis()->SetTitleOffset(0.9);
   Graph_flavorcharge3lLoose_total_errors3146->GetXaxis()->SetTitleFont(42);
   Graph_flavorcharge3lLoose_total_errors3146->GetYaxis()->SetLabelFont(42);
   Graph_flavorcharge3lLoose_total_errors3146->GetYaxis()->SetLabelOffset(0.007);
   Graph_flavorcharge3lLoose_total_errors3146->GetYaxis()->SetLabelSize(0.05);
   Graph_flavorcharge3lLoose_total_errors3146->GetYaxis()->SetTitleSize(0.06);
   Graph_flavorcharge3lLoose_total_errors3146->GetYaxis()->SetTitleOffset(1.35);
   Graph_flavorcharge3lLoose_total_errors3146->GetYaxis()->SetTitleFont(42);
   Graph_flavorcharge3lLoose_total_errors3146->GetZaxis()->SetLabelFont(42);
   Graph_flavorcharge3lLoose_total_errors3146->GetZaxis()->SetLabelOffset(0.007);
   Graph_flavorcharge3lLoose_total_errors3146->GetZaxis()->SetLabelSize(0.05);
   Graph_flavorcharge3lLoose_total_errors3146->GetZaxis()->SetTitleSize(0.06);
   Graph_flavorcharge3lLoose_total_errors3146->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_flavorcharge3lLoose_total_errors3146);
   
   grae->Draw("pe2 ");
   
   Double_t flavorcharge3lLoose_data_graph_fx3147[8] = {
   0,
   1,
   2,
   3,
   4,
   5,
   6,
   7};
   Double_t flavorcharge3lLoose_data_graph_fy3147[8] = {
   103,
   121,
   180,
   243,
   132,
   176,
   246,
   312};
   Double_t flavorcharge3lLoose_data_graph_felx3147[8] = {
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5};
   Double_t flavorcharge3lLoose_data_graph_fely3147[8] = {
   10.1326,
   10.98501,
   13.40422,
   15.57806,
   11.47479,
   13.25417,
   15.67406,
   17.65443};
   Double_t flavorcharge3lLoose_data_graph_fehx3147[8] = {
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5};
   Double_t flavorcharge3lLoose_data_graph_fehy3147[8] = {
   11.182,
   12.03058,
   14.44158,
   16.61021,
   12.51843,
   14.29195,
   16.70601,
   18.68281};
   grae = new TGraphAsymmErrors(8,flavorcharge3lLoose_data_graph_fx3147,flavorcharge3lLoose_data_graph_fy3147,flavorcharge3lLoose_data_graph_felx3147,flavorcharge3lLoose_data_graph_fehx3147,flavorcharge3lLoose_data_graph_fely3147,flavorcharge3lLoose_data_graph_fehy3147);
   grae->SetName("flavorcharge3lLoose_data_graph");
   grae->SetTitle("Graph");
   grae->SetFillStyle(1000);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.1);
   
   TH1F *Graph_flavorcharge3lLoose_data_graph3147 = new TH1F("Graph_flavorcharge3lLoose_data_graph3147","Graph",100,-1.3,8.3);
   Graph_flavorcharge3lLoose_data_graph3147->SetMinimum(69.08586);
   Graph_flavorcharge3lLoose_data_graph3147->SetMaximum(354.4643);
   Graph_flavorcharge3lLoose_data_graph3147->SetDirectory(0);
   Graph_flavorcharge3lLoose_data_graph3147->SetStats(0);
   Graph_flavorcharge3lLoose_data_graph3147->SetLineStyle(0);
   Graph_flavorcharge3lLoose_data_graph3147->SetMarkerStyle(20);
   Graph_flavorcharge3lLoose_data_graph3147->GetXaxis()->SetLabelFont(42);
   Graph_flavorcharge3lLoose_data_graph3147->GetXaxis()->SetLabelOffset(0.007);
   Graph_flavorcharge3lLoose_data_graph3147->GetXaxis()->SetLabelSize(0.05);
   Graph_flavorcharge3lLoose_data_graph3147->GetXaxis()->SetTitleSize(0.06);
   Graph_flavorcharge3lLoose_data_graph3147->GetXaxis()->SetTitleOffset(0.9);
   Graph_flavorcharge3lLoose_data_graph3147->GetXaxis()->SetTitleFont(42);
   Graph_flavorcharge3lLoose_data_graph3147->GetYaxis()->SetLabelFont(42);
   Graph_flavorcharge3lLoose_data_graph3147->GetYaxis()->SetLabelOffset(0.007);
   Graph_flavorcharge3lLoose_data_graph3147->GetYaxis()->SetLabelSize(0.05);
   Graph_flavorcharge3lLoose_data_graph3147->GetYaxis()->SetTitleSize(0.06);
   Graph_flavorcharge3lLoose_data_graph3147->GetYaxis()->SetTitleOffset(1.35);
   Graph_flavorcharge3lLoose_data_graph3147->GetYaxis()->SetTitleFont(42);
   Graph_flavorcharge3lLoose_data_graph3147->GetZaxis()->SetLabelFont(42);
   Graph_flavorcharge3lLoose_data_graph3147->GetZaxis()->SetLabelOffset(0.007);
   Graph_flavorcharge3lLoose_data_graph3147->GetZaxis()->SetLabelSize(0.05);
   Graph_flavorcharge3lLoose_data_graph3147->GetZaxis()->SetTitleSize(0.06);
   Graph_flavorcharge3lLoose_data_graph3147->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_flavorcharge3lLoose_data_graph3147);
   
   grae->Draw("pz ");
   
   TLegend *leg = new TLegend(0.2,0.628,0.48,0.91,NULL,"brNDC");
   leg->SetBorderSize(1);
   leg->SetTextSize(0.036);
   leg->SetLineColor(0);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("flavorcharge3lLoose_data","Data","LPE");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1.1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("flavorcharge3lLoose_prompt_WZ_stack_5","WZ","F");

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
   entry=leg->AddEntry("flavorcharge3lLoose_prompt_ZZ_stack_4","qqZZ","F");

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
   entry=leg->AddEntry("flavorcharge3lLoose_fakes_DY_stack_3","Fakes DY","F");

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
   entry=leg->AddEntry("flavorcharge3lLoose_fakes_TT_stack_2","Fakes TT","F");

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
   entry=leg->AddEntry("flavorcharge3lLoose_total_errors","Total unc.","F");
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
   flavorcharge3lLoose_canvas->cd();
  
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
   
   TH1D *flavorcharge3lLoose_total__119 = new TH1D("flavorcharge3lLoose_total__119","dummy",8,-0.5,7.5);
   flavorcharge3lLoose_total__119->SetBinContent(1,1);
   flavorcharge3lLoose_total__119->SetBinContent(2,1);
   flavorcharge3lLoose_total__119->SetBinContent(3,1);
   flavorcharge3lLoose_total__119->SetBinContent(4,1);
   flavorcharge3lLoose_total__119->SetBinContent(5,1);
   flavorcharge3lLoose_total__119->SetBinContent(6,1);
   flavorcharge3lLoose_total__119->SetBinContent(7,1);
   flavorcharge3lLoose_total__119->SetBinContent(8,1);
   flavorcharge3lLoose_total__119->SetMinimum(0.5);
   flavorcharge3lLoose_total__119->SetMaximum(2);
   flavorcharge3lLoose_total__119->SetEntries(15160);

   ci = TColor::GetColor("#00cc00");
   flavorcharge3lLoose_total__119->SetFillColor(ci);

   ci = TColor::GetColor("#6666ff");
   flavorcharge3lLoose_total__119->SetMarkerColor(ci);
   flavorcharge3lLoose_total__119->SetMarkerSize(1.1);
   flavorcharge3lLoose_total__119->GetXaxis()->SetTitle("flavor");
   flavorcharge3lLoose_total__119->GetXaxis()->SetBinLabel(1,"eee^{-}");
   flavorcharge3lLoose_total__119->GetXaxis()->SetBinLabel(2,"ee#mu^{-}");
   flavorcharge3lLoose_total__119->GetXaxis()->SetBinLabel(3,"e#mu#mu^{-}");
   flavorcharge3lLoose_total__119->GetXaxis()->SetBinLabel(4,"#mu#mu#mu^{-}");
   flavorcharge3lLoose_total__119->GetXaxis()->SetBinLabel(5,"eee^{+}");
   flavorcharge3lLoose_total__119->GetXaxis()->SetBinLabel(6,"ee#mu^{+}");
   flavorcharge3lLoose_total__119->GetXaxis()->SetBinLabel(7,"e#mu#mu^{+}");
   flavorcharge3lLoose_total__119->GetXaxis()->SetBinLabel(8,"#mu#mu#mu^{+}");
   flavorcharge3lLoose_total__119->GetXaxis()->SetMoreLogLabels();
   flavorcharge3lLoose_total__119->GetXaxis()->SetLabelFont(42);
   flavorcharge3lLoose_total__119->GetXaxis()->SetLabelOffset(0.015);
   flavorcharge3lLoose_total__119->GetXaxis()->SetLabelSize(0.1542857);
   flavorcharge3lLoose_total__119->GetXaxis()->SetTitleSize(0.14);
   flavorcharge3lLoose_total__119->GetXaxis()->SetTitleFont(42);
   flavorcharge3lLoose_total__119->GetYaxis()->SetTitle("Data/pred.");
   flavorcharge3lLoose_total__119->GetYaxis()->SetDecimals();
   flavorcharge3lLoose_total__119->GetYaxis()->SetNdivisions(505);
   flavorcharge3lLoose_total__119->GetYaxis()->SetLabelFont(42);
   flavorcharge3lLoose_total__119->GetYaxis()->SetLabelOffset(0.01);
   flavorcharge3lLoose_total__119->GetYaxis()->SetLabelSize(0.11);
   flavorcharge3lLoose_total__119->GetYaxis()->SetTitleSize(0.14);
   flavorcharge3lLoose_total__119->GetYaxis()->SetTitleOffset(0.62);
   flavorcharge3lLoose_total__119->GetYaxis()->SetTitleFont(42);
   flavorcharge3lLoose_total__119->GetZaxis()->SetLabelFont(42);
   flavorcharge3lLoose_total__119->GetZaxis()->SetLabelOffset(0.007);
   flavorcharge3lLoose_total__119->GetZaxis()->SetLabelSize(0.05);
   flavorcharge3lLoose_total__119->GetZaxis()->SetTitleSize(0.06);
   flavorcharge3lLoose_total__119->GetZaxis()->SetTitleFont(42);
   flavorcharge3lLoose_total__119->Draw("AXIS");
   
   Double_t flavorcharge3lLoose_total_errors_fx3148[8] = {
   0,
   1,
   2,
   3,
   4,
   5,
   6,
   7};
   Double_t flavorcharge3lLoose_total_errors_fy3148[8] = {
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1};
   Double_t flavorcharge3lLoose_total_errors_felx3148[8] = {
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5};
   Double_t flavorcharge3lLoose_total_errors_fely3148[8] = {
   0.05349665,
   0.0375823,
   0.04453653,
   0.02864661,
   0.03899834,
   0.02829736,
   0.03231441,
   0.02359835};
   Double_t flavorcharge3lLoose_total_errors_fehx3148[8] = {
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5};
   Double_t flavorcharge3lLoose_total_errors_fehy3148[8] = {
   0.05349665,
   0.0375823,
   0.04453653,
   0.02864661,
   0.03899834,
   0.02829736,
   0.03231441,
   0.02359835};
   grae = new TGraphAsymmErrors(8,flavorcharge3lLoose_total_errors_fx3148,flavorcharge3lLoose_total_errors_fy3148,flavorcharge3lLoose_total_errors_felx3148,flavorcharge3lLoose_total_errors_fehx3148,flavorcharge3lLoose_total_errors_fely3148,flavorcharge3lLoose_total_errors_fehy3148);
   grae->SetName("flavorcharge3lLoose_total_errors");
   grae->SetTitle("Graph");

   ci = TColor::GetColor("#00ffff");
   grae->SetFillColor(ci);

   ci = TColor::GetColor("#00ffff");
   grae->SetMarkerColor(ci);
   grae->Draw("e2");
   
   Double_t flavorcharge3lLoose_total_errors_fx3149[8] = {
   0,
   1,
   2,
   3,
   4,
   5,
   6,
   7};
   Double_t flavorcharge3lLoose_total_errors_fy3149[8] = {
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1};
   Double_t flavorcharge3lLoose_total_errors_felx3149[8] = {
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5};
   Double_t flavorcharge3lLoose_total_errors_fely3149[8] = {
   0.05349665,
   0.0375823,
   0.04453653,
   0.02864661,
   0.03899834,
   0.02829736,
   0.03231441,
   0.02359835};
   Double_t flavorcharge3lLoose_total_errors_fehx3149[8] = {
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5};
   Double_t flavorcharge3lLoose_total_errors_fehy3149[8] = {
   0.05349665,
   0.0375823,
   0.04453653,
   0.02864661,
   0.03899834,
   0.02829736,
   0.03231441,
   0.02359835};
   grae = new TGraphAsymmErrors(8,flavorcharge3lLoose_total_errors_fx3149,flavorcharge3lLoose_total_errors_fy3149,flavorcharge3lLoose_total_errors_felx3149,flavorcharge3lLoose_total_errors_fehx3149,flavorcharge3lLoose_total_errors_fely3149,flavorcharge3lLoose_total_errors_fehy3149);
   grae->SetName("flavorcharge3lLoose_total_errors");
   grae->SetTitle("Graph");

   ci = TColor::GetColor("#6666ff");
   grae->SetFillColor(ci);

   ci = TColor::GetColor("#6666ff");
   grae->SetMarkerColor(ci);
   grae->Draw("e2 ");
   
   TH1D *flavorcharge3lLoose_total__120 = new TH1D("flavorcharge3lLoose_total__120","dummy",8,-0.5,7.5);
   flavorcharge3lLoose_total__120->SetBinContent(1,1);
   flavorcharge3lLoose_total__120->SetBinContent(2,1);
   flavorcharge3lLoose_total__120->SetBinContent(3,1);
   flavorcharge3lLoose_total__120->SetBinContent(4,1);
   flavorcharge3lLoose_total__120->SetBinContent(5,1);
   flavorcharge3lLoose_total__120->SetBinContent(6,1);
   flavorcharge3lLoose_total__120->SetBinContent(7,1);
   flavorcharge3lLoose_total__120->SetBinContent(8,1);
   flavorcharge3lLoose_total__120->SetMinimum(0.5);
   flavorcharge3lLoose_total__120->SetMaximum(2);
   flavorcharge3lLoose_total__120->SetEntries(15160);

   ci = TColor::GetColor("#00cc00");
   flavorcharge3lLoose_total__120->SetFillColor(ci);

   ci = TColor::GetColor("#6666ff");
   flavorcharge3lLoose_total__120->SetMarkerColor(ci);
   flavorcharge3lLoose_total__120->SetMarkerSize(1.1);
   flavorcharge3lLoose_total__120->GetXaxis()->SetTitle("flavor");
   flavorcharge3lLoose_total__120->GetXaxis()->SetBinLabel(1,"eee^{-}");
   flavorcharge3lLoose_total__120->GetXaxis()->SetBinLabel(2,"ee#mu^{-}");
   flavorcharge3lLoose_total__120->GetXaxis()->SetBinLabel(3,"e#mu#mu^{-}");
   flavorcharge3lLoose_total__120->GetXaxis()->SetBinLabel(4,"#mu#mu#mu^{-}");
   flavorcharge3lLoose_total__120->GetXaxis()->SetBinLabel(5,"eee^{+}");
   flavorcharge3lLoose_total__120->GetXaxis()->SetBinLabel(6,"ee#mu^{+}");
   flavorcharge3lLoose_total__120->GetXaxis()->SetBinLabel(7,"e#mu#mu^{+}");
   flavorcharge3lLoose_total__120->GetXaxis()->SetBinLabel(8,"#mu#mu#mu^{+}");
   flavorcharge3lLoose_total__120->GetXaxis()->SetMoreLogLabels();
   flavorcharge3lLoose_total__120->GetXaxis()->SetLabelFont(42);
   flavorcharge3lLoose_total__120->GetXaxis()->SetLabelOffset(0.015);
   flavorcharge3lLoose_total__120->GetXaxis()->SetLabelSize(0.1542857);
   flavorcharge3lLoose_total__120->GetXaxis()->SetTitleSize(0.14);
   flavorcharge3lLoose_total__120->GetXaxis()->SetTitleFont(42);
   flavorcharge3lLoose_total__120->GetYaxis()->SetTitle("Data/pred.");
   flavorcharge3lLoose_total__120->GetYaxis()->SetDecimals();
   flavorcharge3lLoose_total__120->GetYaxis()->SetNdivisions(505);
   flavorcharge3lLoose_total__120->GetYaxis()->SetLabelFont(42);
   flavorcharge3lLoose_total__120->GetYaxis()->SetLabelOffset(0.01);
   flavorcharge3lLoose_total__120->GetYaxis()->SetLabelSize(0.11);
   flavorcharge3lLoose_total__120->GetYaxis()->SetTitleSize(0.14);
   flavorcharge3lLoose_total__120->GetYaxis()->SetTitleOffset(0.62);
   flavorcharge3lLoose_total__120->GetYaxis()->SetTitleFont(42);
   flavorcharge3lLoose_total__120->GetZaxis()->SetLabelFont(42);
   flavorcharge3lLoose_total__120->GetZaxis()->SetLabelOffset(0.007);
   flavorcharge3lLoose_total__120->GetZaxis()->SetLabelSize(0.05);
   flavorcharge3lLoose_total__120->GetZaxis()->SetTitleSize(0.06);
   flavorcharge3lLoose_total__120->GetZaxis()->SetTitleFont(42);
   flavorcharge3lLoose_total__120->Draw("AXIS SAME");
   TLine *line = new TLine(-0.5,1,7.5,1);
   line->SetLineColor(58);
   line->SetLineWidth(2);
   line->Draw();
   
   Double_t data_div_fx3150[8] = {
   0,
   1,
   2,
   3,
   4,
   5,
   6,
   7};
   Double_t data_div_fy3150[8] = {
   1.019099,
   1.026644,
   0.9320106,
   1.086718,
   1.00707,
   1.091108,
   1.009835,
   0.962091};
   Double_t data_div_felx3150[8] = {
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5};
   Double_t data_div_fely3150[8] = {
   0.1002536,
   0.09320407,
   0.06940485,
   0.06966647,
   0.08754488,
   0.0821689,
   0.06434229,
   0.05443964};
   Double_t data_div_fehx3150[8] = {
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5};
   Double_t data_div_fehy3150[8] = {
   0.1106365,
   0.1020754,
   0.07477615,
   0.07428236,
   0.0955071,
   0.08860262,
   0.0685785,
   0.05761077};
   grae = new TGraphAsymmErrors(8,data_div_fx3150,data_div_fy3150,data_div_felx3150,data_div_fehx3150,data_div_fely3150,data_div_fehy3150);
   grae->SetName("data_div");
   grae->SetTitle("Graph");
   grae->SetFillStyle(1000);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.1);
   
   TH1F *Graph_flavorcharge3lLoose_data_graph3150 = new TH1F("Graph_flavorcharge3lLoose_data_graph3150","Graph",100,-1.3,8.3);
   Graph_flavorcharge3lLoose_data_graph3150->SetMinimum(69.08586);
   Graph_flavorcharge3lLoose_data_graph3150->SetMaximum(354.4643);
   Graph_flavorcharge3lLoose_data_graph3150->SetDirectory(0);
   Graph_flavorcharge3lLoose_data_graph3150->SetStats(0);
   Graph_flavorcharge3lLoose_data_graph3150->SetLineStyle(0);
   Graph_flavorcharge3lLoose_data_graph3150->SetMarkerStyle(20);
   Graph_flavorcharge3lLoose_data_graph3150->GetXaxis()->SetLabelFont(42);
   Graph_flavorcharge3lLoose_data_graph3150->GetXaxis()->SetLabelOffset(0.007);
   Graph_flavorcharge3lLoose_data_graph3150->GetXaxis()->SetLabelSize(0.05);
   Graph_flavorcharge3lLoose_data_graph3150->GetXaxis()->SetTitleSize(0.06);
   Graph_flavorcharge3lLoose_data_graph3150->GetXaxis()->SetTitleOffset(0.9);
   Graph_flavorcharge3lLoose_data_graph3150->GetXaxis()->SetTitleFont(42);
   Graph_flavorcharge3lLoose_data_graph3150->GetYaxis()->SetLabelFont(42);
   Graph_flavorcharge3lLoose_data_graph3150->GetYaxis()->SetLabelOffset(0.007);
   Graph_flavorcharge3lLoose_data_graph3150->GetYaxis()->SetLabelSize(0.05);
   Graph_flavorcharge3lLoose_data_graph3150->GetYaxis()->SetTitleSize(0.06);
   Graph_flavorcharge3lLoose_data_graph3150->GetYaxis()->SetTitleOffset(1.35);
   Graph_flavorcharge3lLoose_data_graph3150->GetYaxis()->SetTitleFont(42);
   Graph_flavorcharge3lLoose_data_graph3150->GetZaxis()->SetLabelFont(42);
   Graph_flavorcharge3lLoose_data_graph3150->GetZaxis()->SetLabelOffset(0.007);
   Graph_flavorcharge3lLoose_data_graph3150->GetZaxis()->SetLabelSize(0.05);
   Graph_flavorcharge3lLoose_data_graph3150->GetZaxis()->SetTitleSize(0.06);
   Graph_flavorcharge3lLoose_data_graph3150->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_flavorcharge3lLoose_data_graph3150);
   
   grae->Draw("pz ");
   
   leg = new TLegend(0,0,0,0,NULL,"brNDC");
   leg->SetBorderSize(1);
   leg->SetTextSize(0.084);
   leg->SetLineColor(0);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   entry=leg->AddEntry("flavorcharge3lLoose_total_errors","stat. unc.","F");
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
   entry=leg->AddEntry("flavorcharge3lLoose_total_errors","total unc.","F");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   leg->Draw();
   pad2->Modified();
   flavorcharge3lLoose_canvas->cd();
   flavorcharge3lLoose_canvas->Modified();
   flavorcharge3lLoose_canvas->cd();
   flavorcharge3lLoose_canvas->SetSelected(flavorcharge3lLoose_canvas);
}
