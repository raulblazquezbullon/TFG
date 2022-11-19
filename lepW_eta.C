void lepW_eta()
{
//=========Macro generated from canvas: lepW_eta_canvas/lepW_eta
//=========  (Fri Nov 18 13:04:35 2022) by ROOT version 6.12/07
   TCanvas *lepW_eta_canvas = new TCanvas("lepW_eta_canvas", "lepW_eta",0,0,600,750);
   gStyle->SetOptFit(1);
   gStyle->SetOptStat(0);
   gStyle->SetOptTitle(0);
   lepW_eta_canvas->SetHighLightColor(2);
   lepW_eta_canvas->Range(0,0,1,1);
   lepW_eta_canvas->SetFillColor(0);
   lepW_eta_canvas->SetBorderMode(0);
   lepW_eta_canvas->SetBorderSize(2);
   lepW_eta_canvas->SetTickx(1);
   lepW_eta_canvas->SetTicky(1);
   lepW_eta_canvas->SetLeftMargin(0.18);
   lepW_eta_canvas->SetRightMargin(0.04);
   lepW_eta_canvas->SetBottomMargin(0.13);
   lepW_eta_canvas->SetFrameFillStyle(0);
   lepW_eta_canvas->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: pad1
   TPad *pad1 = new TPad("pad1", "pad1",0,0.3,1,1);
   pad1->Draw();
   pad1->cd();
   pad1->Range(-3.653846,-7.69265,2.75641,300.0134);
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
   
   TH1D *lepW_eta_total__73 = new TH1D("lepW_eta_total__73","dummy",10,-2.5,2.5);
   lepW_eta_total__73->SetBinContent(1,108.0072);
   lepW_eta_total__73->SetBinContent(2,139.3665);
   lepW_eta_total__73->SetBinContent(3,155.7223);
   lepW_eta_total__73->SetBinContent(4,172.1377);
   lepW_eta_total__73->SetBinContent(5,177.4202);
   lepW_eta_total__73->SetBinContent(6,171.3612);
   lepW_eta_total__73->SetBinContent(7,167.9616);
   lepW_eta_total__73->SetBinContent(8,160.1421);
   lepW_eta_total__73->SetBinContent(9,138.3086);
   lepW_eta_total__73->SetBinContent(10,105.5172);
   lepW_eta_total__73->SetBinError(1,6.195025);
   lepW_eta_total__73->SetBinError(2,5.488788);
   lepW_eta_total__73->SetBinError(3,6.309448);
   lepW_eta_total__73->SetBinError(4,5.978303);
   lepW_eta_total__73->SetBinError(5,4.990129);
   lepW_eta_total__73->SetBinError(6,4.646787);
   lepW_eta_total__73->SetBinError(7,5.182623);
   lepW_eta_total__73->SetBinError(8,6.35015);
   lepW_eta_total__73->SetBinError(9,5.957576);
   lepW_eta_total__73->SetBinError(10,6.175848);
   lepW_eta_total__73->SetMinimum(0);
   lepW_eta_total__73->SetMaximum(281.551);
   lepW_eta_total__73->SetEntries(15152);
   lepW_eta_total__73->SetDirectory(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#00cc00");
   lepW_eta_total__73->SetFillColor(ci);
   lepW_eta_total__73->SetMarkerStyle(20);
   lepW_eta_total__73->SetMarkerSize(1.1);
   lepW_eta_total__73->GetXaxis()->SetTitle("#eta(W lep.)");
   lepW_eta_total__73->GetXaxis()->SetMoreLogLabels();
   lepW_eta_total__73->GetXaxis()->SetLabelFont(42);
   lepW_eta_total__73->GetXaxis()->SetLabelOffset(999);
   lepW_eta_total__73->GetXaxis()->SetLabelSize(0.05);
   lepW_eta_total__73->GetXaxis()->SetTitleSize(0.05);
   lepW_eta_total__73->GetXaxis()->SetTitleOffset(999);
   lepW_eta_total__73->GetXaxis()->SetTitleFont(42);
   lepW_eta_total__73->GetYaxis()->SetTitle("Leptons");
   lepW_eta_total__73->GetYaxis()->SetLabelFont(42);
   lepW_eta_total__73->GetYaxis()->SetLabelOffset(0.007);
   lepW_eta_total__73->GetYaxis()->SetLabelSize(0.05);
   lepW_eta_total__73->GetYaxis()->SetTitleSize(0.06);
   lepW_eta_total__73->GetYaxis()->SetTitleOffset(1.48);
   lepW_eta_total__73->GetYaxis()->SetTitleFont(42);
   lepW_eta_total__73->GetZaxis()->SetLabelFont(42);
   lepW_eta_total__73->GetZaxis()->SetLabelOffset(0.007);
   lepW_eta_total__73->GetZaxis()->SetLabelSize(0.05);
   lepW_eta_total__73->GetZaxis()->SetTitleSize(0.06);
   lepW_eta_total__73->GetZaxis()->SetTitleFont(42);
   lepW_eta_total__73->Draw("HIST");
   
   THStack *lepW_eta_stack = new THStack();
   lepW_eta_stack->SetName("lepW_eta_stack");
   lepW_eta_stack->SetTitle("lepW_eta");
   
   TH1F *lepW_eta_stack_stack_19 = new TH1F("lepW_eta_stack_stack_19","lepW_eta",10,-2.5,2.5);
   lepW_eta_stack_stack_19->SetMinimum(0);
   lepW_eta_stack_stack_19->SetMaximum(186.2912);
   lepW_eta_stack_stack_19->SetDirectory(0);
   lepW_eta_stack_stack_19->SetStats(0);
   lepW_eta_stack_stack_19->SetLineStyle(0);
   lepW_eta_stack_stack_19->SetMarkerStyle(20);
   lepW_eta_stack_stack_19->GetXaxis()->SetLabelFont(42);
   lepW_eta_stack_stack_19->GetXaxis()->SetLabelOffset(0.007);
   lepW_eta_stack_stack_19->GetXaxis()->SetLabelSize(0.05);
   lepW_eta_stack_stack_19->GetXaxis()->SetTitleSize(0.06);
   lepW_eta_stack_stack_19->GetXaxis()->SetTitleOffset(0.9);
   lepW_eta_stack_stack_19->GetXaxis()->SetTitleFont(42);
   lepW_eta_stack_stack_19->GetYaxis()->SetLabelFont(42);
   lepW_eta_stack_stack_19->GetYaxis()->SetLabelOffset(0.007);
   lepW_eta_stack_stack_19->GetYaxis()->SetLabelSize(0.05);
   lepW_eta_stack_stack_19->GetYaxis()->SetTitleSize(0.06);
   lepW_eta_stack_stack_19->GetYaxis()->SetTitleOffset(1.35);
   lepW_eta_stack_stack_19->GetYaxis()->SetTitleFont(42);
   lepW_eta_stack_stack_19->GetZaxis()->SetLabelFont(42);
   lepW_eta_stack_stack_19->GetZaxis()->SetLabelOffset(0.007);
   lepW_eta_stack_stack_19->GetZaxis()->SetLabelSize(0.05);
   lepW_eta_stack_stack_19->GetZaxis()->SetTitleSize(0.06);
   lepW_eta_stack_stack_19->GetZaxis()->SetTitleFont(42);
   lepW_eta_stack->SetHistogram(lepW_eta_stack_stack_19);
   
   
   TH1D *lepW_eta_fakes_VV_stack_1 = new TH1D("lepW_eta_fakes_VV_stack_1","dummy",10,-2.5,2.5);
   lepW_eta_fakes_VV_stack_1->SetBinContent(2,0.1943867);
   lepW_eta_fakes_VV_stack_1->SetBinContent(5,0.09719337);
   lepW_eta_fakes_VV_stack_1->SetBinContent(6,0.09719337);
   lepW_eta_fakes_VV_stack_1->SetBinContent(7,0.09719337);
   lepW_eta_fakes_VV_stack_1->SetBinContent(8,0.09719337);
   lepW_eta_fakes_VV_stack_1->SetBinContent(9,0.09719337);
   lepW_eta_fakes_VV_stack_1->SetBinError(2,0.1374522);
   lepW_eta_fakes_VV_stack_1->SetBinError(5,0.09719337);
   lepW_eta_fakes_VV_stack_1->SetBinError(6,0.09719337);
   lepW_eta_fakes_VV_stack_1->SetBinError(7,0.09719337);
   lepW_eta_fakes_VV_stack_1->SetBinError(8,0.09719337);
   lepW_eta_fakes_VV_stack_1->SetBinError(9,0.09719337);
   lepW_eta_fakes_VV_stack_1->SetEntries(11);

   ci = TColor::GetColor("#2e3294");
   lepW_eta_fakes_VV_stack_1->SetFillColor(ci);
   lepW_eta_fakes_VV_stack_1->SetMarkerStyle(0);
   lepW_eta_fakes_VV_stack_1->SetMarkerSize(1.1);
   lepW_eta_fakes_VV_stack_1->GetXaxis()->SetTitle("#eta(W lep.)");
   lepW_eta_fakes_VV_stack_1->GetXaxis()->SetMoreLogLabels();
   lepW_eta_fakes_VV_stack_1->GetXaxis()->SetLabelFont(42);
   lepW_eta_fakes_VV_stack_1->GetXaxis()->SetLabelOffset(0.007);
   lepW_eta_fakes_VV_stack_1->GetXaxis()->SetLabelSize(0.05);
   lepW_eta_fakes_VV_stack_1->GetXaxis()->SetTitleSize(0.06);
   lepW_eta_fakes_VV_stack_1->GetXaxis()->SetTitleOffset(0.9);
   lepW_eta_fakes_VV_stack_1->GetXaxis()->SetTitleFont(42);
   lepW_eta_fakes_VV_stack_1->GetYaxis()->SetTitle("Leptons");
   lepW_eta_fakes_VV_stack_1->GetYaxis()->SetLabelFont(42);
   lepW_eta_fakes_VV_stack_1->GetYaxis()->SetLabelOffset(0.007);
   lepW_eta_fakes_VV_stack_1->GetYaxis()->SetLabelSize(0.05);
   lepW_eta_fakes_VV_stack_1->GetYaxis()->SetTitleSize(0.06);
   lepW_eta_fakes_VV_stack_1->GetYaxis()->SetTitleOffset(1.35);
   lepW_eta_fakes_VV_stack_1->GetYaxis()->SetTitleFont(42);
   lepW_eta_fakes_VV_stack_1->GetZaxis()->SetLabelFont(42);
   lepW_eta_fakes_VV_stack_1->GetZaxis()->SetLabelOffset(0.007);
   lepW_eta_fakes_VV_stack_1->GetZaxis()->SetLabelSize(0.05);
   lepW_eta_fakes_VV_stack_1->GetZaxis()->SetTitleSize(0.06);
   lepW_eta_fakes_VV_stack_1->GetZaxis()->SetTitleFont(42);
   lepW_eta_stack->Add(lepW_eta_fakes_VV_stack_1,"");
   
   TH1D *lepW_eta_fakes_TT_stack_2 = new TH1D("lepW_eta_fakes_TT_stack_2","dummy",10,-2.5,2.5);
   lepW_eta_fakes_TT_stack_2->SetBinContent(1,2.526781);
   lepW_eta_fakes_TT_stack_2->SetBinContent(2,4.455113);
   lepW_eta_fakes_TT_stack_2->SetBinContent(3,5.652009);
   lepW_eta_fakes_TT_stack_2->SetBinContent(4,6.054949);
   lepW_eta_fakes_TT_stack_2->SetBinContent(5,7.094042);
   lepW_eta_fakes_TT_stack_2->SetBinContent(6,8.623409);
   lepW_eta_fakes_TT_stack_2->SetBinContent(7,6.229617);
   lepW_eta_fakes_TT_stack_2->SetBinContent(8,6.4291);
   lepW_eta_fakes_TT_stack_2->SetBinContent(9,5.319538);
   lepW_eta_fakes_TT_stack_2->SetBinContent(10,2.659769);
   lepW_eta_fakes_TT_stack_2->SetBinError(1,0.4205464);
   lepW_eta_fakes_TT_stack_2->SetBinError(2,0.5442787);
   lepW_eta_fakes_TT_stack_2->SetBinError(3,0.6130465);
   lepW_eta_fakes_TT_stack_2->SetBinError(4,0.6533163);
   lepW_eta_fakes_TT_stack_2->SetBinError(5,0.6905309);
   lepW_eta_fakes_TT_stack_2->SetBinError(6,0.7664006);
   lepW_eta_fakes_TT_stack_2->SetBinError(7,0.6543673);
   lepW_eta_fakes_TT_stack_2->SetBinError(8,0.6644253);
   lepW_eta_fakes_TT_stack_2->SetBinError(9,0.5947424);
   lepW_eta_fakes_TT_stack_2->SetBinError(10,0.4205464);
   lepW_eta_fakes_TT_stack_2->SetEntries(841);

   ci = TColor::GetColor("#666666");
   lepW_eta_fakes_TT_stack_2->SetFillColor(ci);
   lepW_eta_fakes_TT_stack_2->SetMarkerStyle(0);
   lepW_eta_fakes_TT_stack_2->SetMarkerSize(1.1);
   lepW_eta_fakes_TT_stack_2->GetXaxis()->SetTitle("#eta(W lep.)");
   lepW_eta_fakes_TT_stack_2->GetXaxis()->SetMoreLogLabels();
   lepW_eta_fakes_TT_stack_2->GetXaxis()->SetLabelFont(42);
   lepW_eta_fakes_TT_stack_2->GetXaxis()->SetLabelOffset(0.007);
   lepW_eta_fakes_TT_stack_2->GetXaxis()->SetLabelSize(0.05);
   lepW_eta_fakes_TT_stack_2->GetXaxis()->SetTitleSize(0.06);
   lepW_eta_fakes_TT_stack_2->GetXaxis()->SetTitleOffset(0.9);
   lepW_eta_fakes_TT_stack_2->GetXaxis()->SetTitleFont(42);
   lepW_eta_fakes_TT_stack_2->GetYaxis()->SetTitle("Leptons");
   lepW_eta_fakes_TT_stack_2->GetYaxis()->SetLabelFont(42);
   lepW_eta_fakes_TT_stack_2->GetYaxis()->SetLabelOffset(0.007);
   lepW_eta_fakes_TT_stack_2->GetYaxis()->SetLabelSize(0.05);
   lepW_eta_fakes_TT_stack_2->GetYaxis()->SetTitleSize(0.06);
   lepW_eta_fakes_TT_stack_2->GetYaxis()->SetTitleOffset(1.35);
   lepW_eta_fakes_TT_stack_2->GetYaxis()->SetTitleFont(42);
   lepW_eta_fakes_TT_stack_2->GetZaxis()->SetLabelFont(42);
   lepW_eta_fakes_TT_stack_2->GetZaxis()->SetLabelOffset(0.007);
   lepW_eta_fakes_TT_stack_2->GetZaxis()->SetLabelSize(0.05);
   lepW_eta_fakes_TT_stack_2->GetZaxis()->SetTitleSize(0.06);
   lepW_eta_fakes_TT_stack_2->GetZaxis()->SetTitleFont(42);
   lepW_eta_stack->Add(lepW_eta_fakes_TT_stack_2,"");
   
   TH1D *lepW_eta_fakes_DY_stack_3 = new TH1D("lepW_eta_fakes_DY_stack_3","dummy",10,-2.5,2.5);
   lepW_eta_fakes_DY_stack_3->SetBinContent(1,17.19522);
   lepW_eta_fakes_DY_stack_3->SetBinContent(2,10.31713);
   lepW_eta_fakes_DY_stack_3->SetBinContent(3,15.4757);
   lepW_eta_fakes_DY_stack_3->SetBinContent(4,12.03665);
   lepW_eta_fakes_DY_stack_3->SetBinContent(5,5.158566);
   lepW_eta_fakes_DY_stack_3->SetBinContent(6,3.439044);
   lepW_eta_fakes_DY_stack_3->SetBinContent(7,6.878088);
   lepW_eta_fakes_DY_stack_3->SetBinContent(8,15.4757);
   lepW_eta_fakes_DY_stack_3->SetBinContent(9,13.75618);
   lepW_eta_fakes_DY_stack_3->SetBinContent(10,17.19522);
   lepW_eta_fakes_DY_stack_3->SetBinError(1,5.437606);
   lepW_eta_fakes_DY_stack_3->SetBinError(2,4.211952);
   lepW_eta_fakes_DY_stack_3->SetBinError(3,5.158566);
   lepW_eta_fakes_DY_stack_3->SetBinError(4,4.549428);
   lepW_eta_fakes_DY_stack_3->SetBinError(5,2.9783);
   lepW_eta_fakes_DY_stack_3->SetBinError(6,2.431771);
   lepW_eta_fakes_DY_stack_3->SetBinError(7,3.439044);
   lepW_eta_fakes_DY_stack_3->SetBinError(8,5.158566);
   lepW_eta_fakes_DY_stack_3->SetBinError(9,4.863543);
   lepW_eta_fakes_DY_stack_3->SetBinError(10,5.437606);
   lepW_eta_fakes_DY_stack_3->SetEntries(72);

   ci = TColor::GetColor("#cccccc");
   lepW_eta_fakes_DY_stack_3->SetFillColor(ci);
   lepW_eta_fakes_DY_stack_3->SetMarkerStyle(0);
   lepW_eta_fakes_DY_stack_3->SetMarkerSize(1.1);
   lepW_eta_fakes_DY_stack_3->GetXaxis()->SetTitle("#eta(W lep.)");
   lepW_eta_fakes_DY_stack_3->GetXaxis()->SetMoreLogLabels();
   lepW_eta_fakes_DY_stack_3->GetXaxis()->SetLabelFont(42);
   lepW_eta_fakes_DY_stack_3->GetXaxis()->SetLabelOffset(0.007);
   lepW_eta_fakes_DY_stack_3->GetXaxis()->SetLabelSize(0.05);
   lepW_eta_fakes_DY_stack_3->GetXaxis()->SetTitleSize(0.06);
   lepW_eta_fakes_DY_stack_3->GetXaxis()->SetTitleOffset(0.9);
   lepW_eta_fakes_DY_stack_3->GetXaxis()->SetTitleFont(42);
   lepW_eta_fakes_DY_stack_3->GetYaxis()->SetTitle("Leptons");
   lepW_eta_fakes_DY_stack_3->GetYaxis()->SetLabelFont(42);
   lepW_eta_fakes_DY_stack_3->GetYaxis()->SetLabelOffset(0.007);
   lepW_eta_fakes_DY_stack_3->GetYaxis()->SetLabelSize(0.05);
   lepW_eta_fakes_DY_stack_3->GetYaxis()->SetTitleSize(0.06);
   lepW_eta_fakes_DY_stack_3->GetYaxis()->SetTitleOffset(1.35);
   lepW_eta_fakes_DY_stack_3->GetYaxis()->SetTitleFont(42);
   lepW_eta_fakes_DY_stack_3->GetZaxis()->SetLabelFont(42);
   lepW_eta_fakes_DY_stack_3->GetZaxis()->SetLabelOffset(0.007);
   lepW_eta_fakes_DY_stack_3->GetZaxis()->SetLabelSize(0.05);
   lepW_eta_fakes_DY_stack_3->GetZaxis()->SetTitleSize(0.06);
   lepW_eta_fakes_DY_stack_3->GetZaxis()->SetTitleFont(42);
   lepW_eta_stack->Add(lepW_eta_fakes_DY_stack_3,"");
   
   TH1D *lepW_eta_prompt_ZZ_stack_4 = new TH1D("lepW_eta_prompt_ZZ_stack_4","dummy",10,-2.5,2.5);
   lepW_eta_prompt_ZZ_stack_4->SetBinContent(1,6.972446);
   lepW_eta_prompt_ZZ_stack_4->SetBinContent(2,8.8073);
   lepW_eta_prompt_ZZ_stack_4->SetBinContent(3,6.972446);
   lepW_eta_prompt_ZZ_stack_4->SetBinContent(4,7.339416);
   lepW_eta_prompt_ZZ_stack_4->SetBinContent(5,6.605475);
   lepW_eta_prompt_ZZ_stack_4->SetBinContent(6,7.339416);
   lepW_eta_prompt_ZZ_stack_4->SetBinContent(7,6.421989);
   lepW_eta_prompt_ZZ_stack_4->SetBinContent(8,8.256843);
   lepW_eta_prompt_ZZ_stack_4->SetBinContent(9,7.522902);
   lepW_eta_prompt_ZZ_stack_4->SetBinContent(10,6.972446);
   lepW_eta_prompt_ZZ_stack_4->SetBinError(1,1.13108);
   lepW_eta_prompt_ZZ_stack_4->SetBinError(2,1.271224);
   lepW_eta_prompt_ZZ_stack_4->SetBinError(3,1.13108);
   lepW_eta_prompt_ZZ_stack_4->SetBinError(4,1.160464);
   lepW_eta_prompt_ZZ_stack_4->SetBinError(5,1.100912);
   lepW_eta_prompt_ZZ_stack_4->SetBinError(6,1.160464);
   lepW_eta_prompt_ZZ_stack_4->SetBinError(7,1.085514);
   lepW_eta_prompt_ZZ_stack_4->SetBinError(8,1.230858);
   lepW_eta_prompt_ZZ_stack_4->SetBinError(9,1.17488);
   lepW_eta_prompt_ZZ_stack_4->SetBinError(10,1.13108);
   lepW_eta_prompt_ZZ_stack_4->SetEntries(403);

   ci = TColor::GetColor("#00cc00");
   lepW_eta_prompt_ZZ_stack_4->SetFillColor(ci);
   lepW_eta_prompt_ZZ_stack_4->SetMarkerStyle(0);
   lepW_eta_prompt_ZZ_stack_4->SetMarkerSize(1.1);
   lepW_eta_prompt_ZZ_stack_4->GetXaxis()->SetTitle("#eta(W lep.)");
   lepW_eta_prompt_ZZ_stack_4->GetXaxis()->SetMoreLogLabels();
   lepW_eta_prompt_ZZ_stack_4->GetXaxis()->SetLabelFont(42);
   lepW_eta_prompt_ZZ_stack_4->GetXaxis()->SetLabelOffset(0.007);
   lepW_eta_prompt_ZZ_stack_4->GetXaxis()->SetLabelSize(0.05);
   lepW_eta_prompt_ZZ_stack_4->GetXaxis()->SetTitleSize(0.06);
   lepW_eta_prompt_ZZ_stack_4->GetXaxis()->SetTitleOffset(0.9);
   lepW_eta_prompt_ZZ_stack_4->GetXaxis()->SetTitleFont(42);
   lepW_eta_prompt_ZZ_stack_4->GetYaxis()->SetTitle("Leptons");
   lepW_eta_prompt_ZZ_stack_4->GetYaxis()->SetLabelFont(42);
   lepW_eta_prompt_ZZ_stack_4->GetYaxis()->SetLabelOffset(0.007);
   lepW_eta_prompt_ZZ_stack_4->GetYaxis()->SetLabelSize(0.05);
   lepW_eta_prompt_ZZ_stack_4->GetYaxis()->SetTitleSize(0.06);
   lepW_eta_prompt_ZZ_stack_4->GetYaxis()->SetTitleOffset(1.35);
   lepW_eta_prompt_ZZ_stack_4->GetYaxis()->SetTitleFont(42);
   lepW_eta_prompt_ZZ_stack_4->GetZaxis()->SetLabelFont(42);
   lepW_eta_prompt_ZZ_stack_4->GetZaxis()->SetLabelOffset(0.007);
   lepW_eta_prompt_ZZ_stack_4->GetZaxis()->SetLabelSize(0.05);
   lepW_eta_prompt_ZZ_stack_4->GetZaxis()->SetTitleSize(0.06);
   lepW_eta_prompt_ZZ_stack_4->GetZaxis()->SetTitleFont(42);
   lepW_eta_stack->Add(lepW_eta_prompt_ZZ_stack_4,"");
   
   TH1D *lepW_eta_prompt_WZ_stack_5 = new TH1D("lepW_eta_prompt_WZ_stack_5","dummy",10,-2.5,2.5);
   lepW_eta_prompt_WZ_stack_5->SetBinContent(1,81.31274);
   lepW_eta_prompt_WZ_stack_5->SetBinContent(2,115.5925);
   lepW_eta_prompt_WZ_stack_5->SetBinContent(3,127.6221);
   lepW_eta_prompt_WZ_stack_5->SetBinContent(4,146.7066);
   lepW_eta_prompt_WZ_stack_5->SetBinContent(5,158.4649);
   lepW_eta_prompt_WZ_stack_5->SetBinContent(6,151.8622);
   lepW_eta_prompt_WZ_stack_5->SetBinContent(7,148.3347);
   lepW_eta_prompt_WZ_stack_5->SetBinContent(8,129.8833);
   lepW_eta_prompt_WZ_stack_5->SetBinContent(9,111.6128);
   lepW_eta_prompt_WZ_stack_5->SetBinContent(10,78.68975);
   lepW_eta_prompt_WZ_stack_5->SetBinError(1,2.711932);
   lepW_eta_prompt_WZ_stack_5->SetBinError(2,3.233437);
   lepW_eta_prompt_WZ_stack_5->SetBinError(3,3.397523);
   lepW_eta_prompt_WZ_stack_5->SetBinError(4,3.642708);
   lepW_eta_prompt_WZ_stack_5->SetBinError(5,3.785872);
   lepW_eta_prompt_WZ_stack_5->SetBinError(6,3.706161);
   lepW_eta_prompt_WZ_stack_5->SetBinError(7,3.662864);
   lepW_eta_prompt_WZ_stack_5->SetBinError(8,3.42749);
   lepW_eta_prompt_WZ_stack_5->SetBinError(9,3.177287);
   lepW_eta_prompt_WZ_stack_5->SetBinError(10,2.667832);
   lepW_eta_prompt_WZ_stack_5->SetEntries(13825);

   ci = TColor::GetColor("#ffcc00");
   lepW_eta_prompt_WZ_stack_5->SetFillColor(ci);
   lepW_eta_prompt_WZ_stack_5->SetMarkerStyle(0);
   lepW_eta_prompt_WZ_stack_5->SetMarkerSize(1.1);
   lepW_eta_prompt_WZ_stack_5->GetXaxis()->SetTitle("#eta(W lep.)");
   lepW_eta_prompt_WZ_stack_5->GetXaxis()->SetMoreLogLabels();
   lepW_eta_prompt_WZ_stack_5->GetXaxis()->SetLabelFont(42);
   lepW_eta_prompt_WZ_stack_5->GetXaxis()->SetLabelOffset(0.007);
   lepW_eta_prompt_WZ_stack_5->GetXaxis()->SetLabelSize(0.05);
   lepW_eta_prompt_WZ_stack_5->GetXaxis()->SetTitleSize(0.06);
   lepW_eta_prompt_WZ_stack_5->GetXaxis()->SetTitleOffset(0.9);
   lepW_eta_prompt_WZ_stack_5->GetXaxis()->SetTitleFont(42);
   lepW_eta_prompt_WZ_stack_5->GetYaxis()->SetTitle("Leptons");
   lepW_eta_prompt_WZ_stack_5->GetYaxis()->SetLabelFont(42);
   lepW_eta_prompt_WZ_stack_5->GetYaxis()->SetLabelOffset(0.007);
   lepW_eta_prompt_WZ_stack_5->GetYaxis()->SetLabelSize(0.05);
   lepW_eta_prompt_WZ_stack_5->GetYaxis()->SetTitleSize(0.06);
   lepW_eta_prompt_WZ_stack_5->GetYaxis()->SetTitleOffset(1.35);
   lepW_eta_prompt_WZ_stack_5->GetYaxis()->SetTitleFont(42);
   lepW_eta_prompt_WZ_stack_5->GetZaxis()->SetLabelFont(42);
   lepW_eta_prompt_WZ_stack_5->GetZaxis()->SetLabelOffset(0.007);
   lepW_eta_prompt_WZ_stack_5->GetZaxis()->SetLabelSize(0.05);
   lepW_eta_prompt_WZ_stack_5->GetZaxis()->SetTitleSize(0.06);
   lepW_eta_prompt_WZ_stack_5->GetZaxis()->SetTitleFont(42);
   lepW_eta_stack->Add(lepW_eta_prompt_WZ_stack_5,"");
   lepW_eta_stack->Draw("same hist");
   
   TH1D *lepW_eta_total__74 = new TH1D("lepW_eta_total__74","dummy",10,-2.5,2.5);
   lepW_eta_total__74->SetBinContent(1,108.0072);
   lepW_eta_total__74->SetBinContent(2,139.3665);
   lepW_eta_total__74->SetBinContent(3,155.7223);
   lepW_eta_total__74->SetBinContent(4,172.1377);
   lepW_eta_total__74->SetBinContent(5,177.4202);
   lepW_eta_total__74->SetBinContent(6,171.3612);
   lepW_eta_total__74->SetBinContent(7,167.9616);
   lepW_eta_total__74->SetBinContent(8,160.1421);
   lepW_eta_total__74->SetBinContent(9,138.3086);
   lepW_eta_total__74->SetBinContent(10,105.5172);
   lepW_eta_total__74->SetBinError(1,6.195025);
   lepW_eta_total__74->SetBinError(2,5.488788);
   lepW_eta_total__74->SetBinError(3,6.309448);
   lepW_eta_total__74->SetBinError(4,5.978303);
   lepW_eta_total__74->SetBinError(5,4.990129);
   lepW_eta_total__74->SetBinError(6,4.646787);
   lepW_eta_total__74->SetBinError(7,5.182623);
   lepW_eta_total__74->SetBinError(8,6.35015);
   lepW_eta_total__74->SetBinError(9,5.957576);
   lepW_eta_total__74->SetBinError(10,6.175848);
   lepW_eta_total__74->SetMinimum(0);
   lepW_eta_total__74->SetMaximum(281.551);
   lepW_eta_total__74->SetEntries(15152);
   lepW_eta_total__74->SetDirectory(0);

   ci = TColor::GetColor("#00cc00");
   lepW_eta_total__74->SetFillColor(ci);
   lepW_eta_total__74->SetMarkerStyle(20);
   lepW_eta_total__74->SetMarkerSize(1.1);
   lepW_eta_total__74->GetXaxis()->SetTitle("#eta(W lep.)");
   lepW_eta_total__74->GetXaxis()->SetMoreLogLabels();
   lepW_eta_total__74->GetXaxis()->SetLabelFont(42);
   lepW_eta_total__74->GetXaxis()->SetLabelOffset(999);
   lepW_eta_total__74->GetXaxis()->SetLabelSize(0.05);
   lepW_eta_total__74->GetXaxis()->SetTitleSize(0.05);
   lepW_eta_total__74->GetXaxis()->SetTitleOffset(999);
   lepW_eta_total__74->GetXaxis()->SetTitleFont(42);
   lepW_eta_total__74->GetYaxis()->SetTitle("Leptons");
   lepW_eta_total__74->GetYaxis()->SetLabelFont(42);
   lepW_eta_total__74->GetYaxis()->SetLabelOffset(0.007);
   lepW_eta_total__74->GetYaxis()->SetLabelSize(0.05);
   lepW_eta_total__74->GetYaxis()->SetTitleSize(0.06);
   lepW_eta_total__74->GetYaxis()->SetTitleOffset(1.48);
   lepW_eta_total__74->GetYaxis()->SetTitleFont(42);
   lepW_eta_total__74->GetZaxis()->SetLabelFont(42);
   lepW_eta_total__74->GetZaxis()->SetLabelOffset(0.007);
   lepW_eta_total__74->GetZaxis()->SetLabelSize(0.05);
   lepW_eta_total__74->GetZaxis()->SetTitleSize(0.06);
   lepW_eta_total__74->GetZaxis()->SetTitleFont(42);
   lepW_eta_total__74->Draw("AXIS SAME");
   
   Double_t lepW_eta_total_errors_fx3091[10] = {
   -2.25,
   -1.75,
   -1.25,
   -0.75,
   -0.25,
   0.25,
   0.75,
   1.25,
   1.75,
   2.25};
   Double_t lepW_eta_total_errors_fy3091[10] = {
   108.0072,
   139.3665,
   155.7223,
   172.1377,
   177.4202,
   171.3612,
   167.9616,
   160.1421,
   138.3086,
   105.5172};
   Double_t lepW_eta_total_errors_felx3091[10] = {
   0.25,
   0.25,
   0.25,
   0.25,
   0.25,
   0.25,
   0.25,
   0.25,
   0.25,
   0.25};
   Double_t lepW_eta_total_errors_fely3091[10] = {
   6.195025,
   5.488788,
   6.309448,
   5.978303,
   4.990129,
   4.646787,
   5.182623,
   6.35015,
   5.957576,
   6.175848};
   Double_t lepW_eta_total_errors_fehx3091[10] = {
   0.25,
   0.25,
   0.25,
   0.25,
   0.25,
   0.25,
   0.25,
   0.25,
   0.25,
   0.25};
   Double_t lepW_eta_total_errors_fehy3091[10] = {
   6.195025,
   5.488788,
   6.309448,
   5.978303,
   4.990129,
   4.646787,
   5.182623,
   6.35015,
   5.957576,
   6.175848};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(10,lepW_eta_total_errors_fx3091,lepW_eta_total_errors_fy3091,lepW_eta_total_errors_felx3091,lepW_eta_total_errors_fehx3091,lepW_eta_total_errors_fely3091,lepW_eta_total_errors_fehy3091);
   grae->SetName("lepW_eta_total_errors");
   grae->SetTitle("Graph");
   grae->SetFillColor(1);
   grae->SetFillStyle(3013);
   grae->SetMarkerStyle(0);
   
   TH1F *Graph_lepW_eta_total_errors3091 = new TH1F("Graph_lepW_eta_total_errors3091","Graph",100,-3,3);
   Graph_lepW_eta_total_errors3091->SetMinimum(91.03444);
   Graph_lepW_eta_total_errors3091->SetMaximum(190.7172);
   Graph_lepW_eta_total_errors3091->SetDirectory(0);
   Graph_lepW_eta_total_errors3091->SetStats(0);
   Graph_lepW_eta_total_errors3091->SetLineStyle(0);
   Graph_lepW_eta_total_errors3091->SetMarkerStyle(20);
   Graph_lepW_eta_total_errors3091->GetXaxis()->SetLabelFont(42);
   Graph_lepW_eta_total_errors3091->GetXaxis()->SetLabelOffset(0.007);
   Graph_lepW_eta_total_errors3091->GetXaxis()->SetLabelSize(0.05);
   Graph_lepW_eta_total_errors3091->GetXaxis()->SetTitleSize(0.06);
   Graph_lepW_eta_total_errors3091->GetXaxis()->SetTitleOffset(0.9);
   Graph_lepW_eta_total_errors3091->GetXaxis()->SetTitleFont(42);
   Graph_lepW_eta_total_errors3091->GetYaxis()->SetLabelFont(42);
   Graph_lepW_eta_total_errors3091->GetYaxis()->SetLabelOffset(0.007);
   Graph_lepW_eta_total_errors3091->GetYaxis()->SetLabelSize(0.05);
   Graph_lepW_eta_total_errors3091->GetYaxis()->SetTitleSize(0.06);
   Graph_lepW_eta_total_errors3091->GetYaxis()->SetTitleOffset(1.35);
   Graph_lepW_eta_total_errors3091->GetYaxis()->SetTitleFont(42);
   Graph_lepW_eta_total_errors3091->GetZaxis()->SetLabelFont(42);
   Graph_lepW_eta_total_errors3091->GetZaxis()->SetLabelOffset(0.007);
   Graph_lepW_eta_total_errors3091->GetZaxis()->SetLabelSize(0.05);
   Graph_lepW_eta_total_errors3091->GetZaxis()->SetTitleSize(0.06);
   Graph_lepW_eta_total_errors3091->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_lepW_eta_total_errors3091);
   
   grae->Draw("pe2 ");
   
   Double_t lepW_eta_data_graph_fx3092[10] = {
   -2.25,
   -1.75,
   -1.25,
   -0.75,
   -0.25,
   0.25,
   0.75,
   1.25,
   1.75,
   2.25};
   Double_t lepW_eta_data_graph_fy3092[10] = {
   108,
   136,
   158,
   197,
   160,
   164,
   169,
   157,
   156,
   108};
   Double_t lepW_eta_data_graph_felx3092[10] = {
   0.25,
   0.25,
   0.25,
   0.25,
   0.25,
   0.25,
   0.25,
   0.25,
   0.25,
   0.25};
   Double_t lepW_eta_data_graph_fely3092[10] = {
   10.37641,
   11.64779,
   12.55675,
   14.02405,
   12.63615,
   12.79345,
   12.9874,
   12.51687,
   12.47686,
   10.37641};
   Double_t lepW_eta_data_graph_fehx3092[10] = {
   0.25,
   0.25,
   0.25,
   0.25,
   0.25,
   0.25,
   0.25,
   0.25,
   0.25,
   0.25};
   Double_t lepW_eta_data_graph_fehy3092[10] = {
   11.42465,
   12.69078,
   13.59664,
   15.05976,
   13.67578,
   13.83259,
   14.02596,
   13.55688,
   13.51699,
   11.42465};
   grae = new TGraphAsymmErrors(10,lepW_eta_data_graph_fx3092,lepW_eta_data_graph_fy3092,lepW_eta_data_graph_felx3092,lepW_eta_data_graph_fehx3092,lepW_eta_data_graph_fely3092,lepW_eta_data_graph_fehy3092);
   grae->SetName("lepW_eta_data_graph");
   grae->SetTitle("Graph");
   grae->SetFillStyle(1000);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.1);
   
   TH1F *Graph_lepW_eta_data_graph3092 = new TH1F("Graph_lepW_eta_data_graph3092","Graph",100,-3,3);
   Graph_lepW_eta_data_graph3092->SetMinimum(86.17998);
   Graph_lepW_eta_data_graph3092->SetMaximum(223.5034);
   Graph_lepW_eta_data_graph3092->SetDirectory(0);
   Graph_lepW_eta_data_graph3092->SetStats(0);
   Graph_lepW_eta_data_graph3092->SetLineStyle(0);
   Graph_lepW_eta_data_graph3092->SetMarkerStyle(20);
   Graph_lepW_eta_data_graph3092->GetXaxis()->SetLabelFont(42);
   Graph_lepW_eta_data_graph3092->GetXaxis()->SetLabelOffset(0.007);
   Graph_lepW_eta_data_graph3092->GetXaxis()->SetLabelSize(0.05);
   Graph_lepW_eta_data_graph3092->GetXaxis()->SetTitleSize(0.06);
   Graph_lepW_eta_data_graph3092->GetXaxis()->SetTitleOffset(0.9);
   Graph_lepW_eta_data_graph3092->GetXaxis()->SetTitleFont(42);
   Graph_lepW_eta_data_graph3092->GetYaxis()->SetLabelFont(42);
   Graph_lepW_eta_data_graph3092->GetYaxis()->SetLabelOffset(0.007);
   Graph_lepW_eta_data_graph3092->GetYaxis()->SetLabelSize(0.05);
   Graph_lepW_eta_data_graph3092->GetYaxis()->SetTitleSize(0.06);
   Graph_lepW_eta_data_graph3092->GetYaxis()->SetTitleOffset(1.35);
   Graph_lepW_eta_data_graph3092->GetYaxis()->SetTitleFont(42);
   Graph_lepW_eta_data_graph3092->GetZaxis()->SetLabelFont(42);
   Graph_lepW_eta_data_graph3092->GetZaxis()->SetLabelOffset(0.007);
   Graph_lepW_eta_data_graph3092->GetZaxis()->SetLabelSize(0.05);
   Graph_lepW_eta_data_graph3092->GetZaxis()->SetTitleSize(0.06);
   Graph_lepW_eta_data_graph3092->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_lepW_eta_data_graph3092);
   
   grae->Draw("pz ");
   
   TLegend *leg = new TLegend(0.62,0.628,0.9,0.91,NULL,"brNDC");
   leg->SetBorderSize(1);
   leg->SetTextSize(0.036);
   leg->SetLineColor(0);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("lepW_eta_data","Data","LPE");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1.1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("lepW_eta_prompt_WZ_stack_5","WZ","F");

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
   entry=leg->AddEntry("lepW_eta_prompt_ZZ_stack_4","qqZZ","F");

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
   entry=leg->AddEntry("lepW_eta_fakes_DY_stack_3","Fakes DY","F");

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
   entry=leg->AddEntry("lepW_eta_fakes_TT_stack_2","Fakes TT","F");

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
   entry=leg->AddEntry("lepW_eta_total_errors","Total unc.","F");
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
   lepW_eta_canvas->cd();
  
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
   
   TH1D *lepW_eta_total__75 = new TH1D("lepW_eta_total__75","dummy",10,-2.5,2.5);
   lepW_eta_total__75->SetBinContent(1,1);
   lepW_eta_total__75->SetBinContent(2,1);
   lepW_eta_total__75->SetBinContent(3,1);
   lepW_eta_total__75->SetBinContent(4,1);
   lepW_eta_total__75->SetBinContent(5,1);
   lepW_eta_total__75->SetBinContent(6,1);
   lepW_eta_total__75->SetBinContent(7,1);
   lepW_eta_total__75->SetBinContent(8,1);
   lepW_eta_total__75->SetBinContent(9,1);
   lepW_eta_total__75->SetBinContent(10,1);
   lepW_eta_total__75->SetMinimum(0.5);
   lepW_eta_total__75->SetMaximum(2);
   lepW_eta_total__75->SetEntries(15162);

   ci = TColor::GetColor("#00cc00");
   lepW_eta_total__75->SetFillColor(ci);

   ci = TColor::GetColor("#6666ff");
   lepW_eta_total__75->SetMarkerColor(ci);
   lepW_eta_total__75->SetMarkerSize(1.1);
   lepW_eta_total__75->GetXaxis()->SetTitle("#eta(W lep.)");
   lepW_eta_total__75->GetXaxis()->SetMoreLogLabels();
   lepW_eta_total__75->GetXaxis()->SetLabelFont(42);
   lepW_eta_total__75->GetXaxis()->SetLabelOffset(0.015);
   lepW_eta_total__75->GetXaxis()->SetLabelSize(0.1);
   lepW_eta_total__75->GetXaxis()->SetTitleSize(0.14);
   lepW_eta_total__75->GetXaxis()->SetTitleFont(42);
   lepW_eta_total__75->GetYaxis()->SetTitle("Data/pred.");
   lepW_eta_total__75->GetYaxis()->SetDecimals();
   lepW_eta_total__75->GetYaxis()->SetNdivisions(505);
   lepW_eta_total__75->GetYaxis()->SetLabelFont(42);
   lepW_eta_total__75->GetYaxis()->SetLabelOffset(0.01);
   lepW_eta_total__75->GetYaxis()->SetLabelSize(0.11);
   lepW_eta_total__75->GetYaxis()->SetTitleSize(0.14);
   lepW_eta_total__75->GetYaxis()->SetTitleOffset(0.62);
   lepW_eta_total__75->GetYaxis()->SetTitleFont(42);
   lepW_eta_total__75->GetZaxis()->SetLabelFont(42);
   lepW_eta_total__75->GetZaxis()->SetLabelOffset(0.007);
   lepW_eta_total__75->GetZaxis()->SetLabelSize(0.05);
   lepW_eta_total__75->GetZaxis()->SetTitleSize(0.06);
   lepW_eta_total__75->GetZaxis()->SetTitleFont(42);
   lepW_eta_total__75->Draw("AXIS");
   
   Double_t lepW_eta_total_errors_fx3093[10] = {
   -2.25,
   -1.75,
   -1.25,
   -0.75,
   -0.25,
   0.25,
   0.75,
   1.25,
   1.75,
   2.25};
   Double_t lepW_eta_total_errors_fy3093[10] = {
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
   Double_t lepW_eta_total_errors_felx3093[10] = {
   0.25,
   0.25,
   0.25,
   0.25,
   0.25,
   0.25,
   0.25,
   0.25,
   0.25,
   0.25};
   Double_t lepW_eta_total_errors_fely3093[10] = {
   0.05735753,
   0.03938385,
   0.04051732,
   0.03472978,
   0.02812605,
   0.02711691,
   0.030856,
   0.03965321,
   0.04307451,
   0.0585293};
   Double_t lepW_eta_total_errors_fehx3093[10] = {
   0.25,
   0.25,
   0.25,
   0.25,
   0.25,
   0.25,
   0.25,
   0.25,
   0.25,
   0.25};
   Double_t lepW_eta_total_errors_fehy3093[10] = {
   0.05735753,
   0.03938385,
   0.04051732,
   0.03472978,
   0.02812605,
   0.02711691,
   0.030856,
   0.03965321,
   0.04307451,
   0.0585293};
   grae = new TGraphAsymmErrors(10,lepW_eta_total_errors_fx3093,lepW_eta_total_errors_fy3093,lepW_eta_total_errors_felx3093,lepW_eta_total_errors_fehx3093,lepW_eta_total_errors_fely3093,lepW_eta_total_errors_fehy3093);
   grae->SetName("lepW_eta_total_errors");
   grae->SetTitle("Graph");

   ci = TColor::GetColor("#00ffff");
   grae->SetFillColor(ci);

   ci = TColor::GetColor("#00ffff");
   grae->SetMarkerColor(ci);
   grae->Draw("e2");
   
   Double_t lepW_eta_total_errors_fx3094[10] = {
   -2.25,
   -1.75,
   -1.25,
   -0.75,
   -0.25,
   0.25,
   0.75,
   1.25,
   1.75,
   2.25};
   Double_t lepW_eta_total_errors_fy3094[10] = {
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
   Double_t lepW_eta_total_errors_felx3094[10] = {
   0.25,
   0.25,
   0.25,
   0.25,
   0.25,
   0.25,
   0.25,
   0.25,
   0.25,
   0.25};
   Double_t lepW_eta_total_errors_fely3094[10] = {
   0.05735753,
   0.03938385,
   0.04051732,
   0.03472978,
   0.02812605,
   0.02711691,
   0.030856,
   0.03965321,
   0.04307451,
   0.0585293};
   Double_t lepW_eta_total_errors_fehx3094[10] = {
   0.25,
   0.25,
   0.25,
   0.25,
   0.25,
   0.25,
   0.25,
   0.25,
   0.25,
   0.25};
   Double_t lepW_eta_total_errors_fehy3094[10] = {
   0.05735753,
   0.03938385,
   0.04051732,
   0.03472978,
   0.02812605,
   0.02711691,
   0.030856,
   0.03965321,
   0.04307451,
   0.0585293};
   grae = new TGraphAsymmErrors(10,lepW_eta_total_errors_fx3094,lepW_eta_total_errors_fy3094,lepW_eta_total_errors_felx3094,lepW_eta_total_errors_fehx3094,lepW_eta_total_errors_fely3094,lepW_eta_total_errors_fehy3094);
   grae->SetName("lepW_eta_total_errors");
   grae->SetTitle("Graph");

   ci = TColor::GetColor("#6666ff");
   grae->SetFillColor(ci);

   ci = TColor::GetColor("#6666ff");
   grae->SetMarkerColor(ci);
   grae->Draw("e2 ");
   
   TH1D *lepW_eta_total__76 = new TH1D("lepW_eta_total__76","dummy",10,-2.5,2.5);
   lepW_eta_total__76->SetBinContent(1,1);
   lepW_eta_total__76->SetBinContent(2,1);
   lepW_eta_total__76->SetBinContent(3,1);
   lepW_eta_total__76->SetBinContent(4,1);
   lepW_eta_total__76->SetBinContent(5,1);
   lepW_eta_total__76->SetBinContent(6,1);
   lepW_eta_total__76->SetBinContent(7,1);
   lepW_eta_total__76->SetBinContent(8,1);
   lepW_eta_total__76->SetBinContent(9,1);
   lepW_eta_total__76->SetBinContent(10,1);
   lepW_eta_total__76->SetMinimum(0.5);
   lepW_eta_total__76->SetMaximum(2);
   lepW_eta_total__76->SetEntries(15162);

   ci = TColor::GetColor("#00cc00");
   lepW_eta_total__76->SetFillColor(ci);

   ci = TColor::GetColor("#6666ff");
   lepW_eta_total__76->SetMarkerColor(ci);
   lepW_eta_total__76->SetMarkerSize(1.1);
   lepW_eta_total__76->GetXaxis()->SetTitle("#eta(W lep.)");
   lepW_eta_total__76->GetXaxis()->SetMoreLogLabels();
   lepW_eta_total__76->GetXaxis()->SetLabelFont(42);
   lepW_eta_total__76->GetXaxis()->SetLabelOffset(0.015);
   lepW_eta_total__76->GetXaxis()->SetLabelSize(0.1);
   lepW_eta_total__76->GetXaxis()->SetTitleSize(0.14);
   lepW_eta_total__76->GetXaxis()->SetTitleFont(42);
   lepW_eta_total__76->GetYaxis()->SetTitle("Data/pred.");
   lepW_eta_total__76->GetYaxis()->SetDecimals();
   lepW_eta_total__76->GetYaxis()->SetNdivisions(505);
   lepW_eta_total__76->GetYaxis()->SetLabelFont(42);
   lepW_eta_total__76->GetYaxis()->SetLabelOffset(0.01);
   lepW_eta_total__76->GetYaxis()->SetLabelSize(0.11);
   lepW_eta_total__76->GetYaxis()->SetTitleSize(0.14);
   lepW_eta_total__76->GetYaxis()->SetTitleOffset(0.62);
   lepW_eta_total__76->GetYaxis()->SetTitleFont(42);
   lepW_eta_total__76->GetZaxis()->SetLabelFont(42);
   lepW_eta_total__76->GetZaxis()->SetLabelOffset(0.007);
   lepW_eta_total__76->GetZaxis()->SetLabelSize(0.05);
   lepW_eta_total__76->GetZaxis()->SetTitleSize(0.06);
   lepW_eta_total__76->GetZaxis()->SetTitleFont(42);
   lepW_eta_total__76->Draw("AXIS SAME");
   TLine *line = new TLine(-2.5,1,2.5,1);
   line->SetLineColor(58);
   line->SetLineWidth(2);
   line->Draw();
   
   Double_t data_div_fx3095[10] = {
   -2.25,
   -1.75,
   -1.25,
   -0.75,
   -0.25,
   0.25,
   0.75,
   1.25,
   1.75,
   2.25};
   Double_t data_div_fy3095[10] = {
   0.9999334,
   0.9758445,
   1.014627,
   1.144433,
   0.9018141,
   0.9570426,
   1.006182,
   0.980379,
   1.127912,
   1.02353};
   Double_t data_div_felx3095[10] = {
   0.25,
   0.25,
   0.25,
   0.25,
   0.25,
   0.25,
   0.25,
   0.25,
   0.25,
   0.25};
   Double_t data_div_fely3095[10] = {
   0.09607143,
   0.08357673,
   0.08063558,
   0.08146994,
   0.07122159,
   0.07465778,
   0.07732364,
   0.078161,
   0.09021027,
   0.09833854};
   Double_t data_div_fehx3095[10] = {
   0.25,
   0.25,
   0.25,
   0.25,
   0.25,
   0.25,
   0.25,
   0.25,
   0.25,
   0.25};
   Double_t data_div_fehy3095[10] = {
   0.1057767,
   0.0910605,
   0.08731337,
   0.08748672,
   0.0770813,
   0.08072184,
   0.08350696,
   0.08465528,
   0.09773066,
   0.1082729};
   grae = new TGraphAsymmErrors(10,data_div_fx3095,data_div_fy3095,data_div_felx3095,data_div_fehx3095,data_div_fely3095,data_div_fehy3095);
   grae->SetName("data_div");
   grae->SetTitle("Graph");
   grae->SetFillStyle(1000);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.1);
   
   TH1F *Graph_lepW_eta_data_graph3095 = new TH1F("Graph_lepW_eta_data_graph3095","Graph",100,-3,3);
   Graph_lepW_eta_data_graph3095->SetMinimum(86.17998);
   Graph_lepW_eta_data_graph3095->SetMaximum(223.5034);
   Graph_lepW_eta_data_graph3095->SetDirectory(0);
   Graph_lepW_eta_data_graph3095->SetStats(0);
   Graph_lepW_eta_data_graph3095->SetLineStyle(0);
   Graph_lepW_eta_data_graph3095->SetMarkerStyle(20);
   Graph_lepW_eta_data_graph3095->GetXaxis()->SetLabelFont(42);
   Graph_lepW_eta_data_graph3095->GetXaxis()->SetLabelOffset(0.007);
   Graph_lepW_eta_data_graph3095->GetXaxis()->SetLabelSize(0.05);
   Graph_lepW_eta_data_graph3095->GetXaxis()->SetTitleSize(0.06);
   Graph_lepW_eta_data_graph3095->GetXaxis()->SetTitleOffset(0.9);
   Graph_lepW_eta_data_graph3095->GetXaxis()->SetTitleFont(42);
   Graph_lepW_eta_data_graph3095->GetYaxis()->SetLabelFont(42);
   Graph_lepW_eta_data_graph3095->GetYaxis()->SetLabelOffset(0.007);
   Graph_lepW_eta_data_graph3095->GetYaxis()->SetLabelSize(0.05);
   Graph_lepW_eta_data_graph3095->GetYaxis()->SetTitleSize(0.06);
   Graph_lepW_eta_data_graph3095->GetYaxis()->SetTitleOffset(1.35);
   Graph_lepW_eta_data_graph3095->GetYaxis()->SetTitleFont(42);
   Graph_lepW_eta_data_graph3095->GetZaxis()->SetLabelFont(42);
   Graph_lepW_eta_data_graph3095->GetZaxis()->SetLabelOffset(0.007);
   Graph_lepW_eta_data_graph3095->GetZaxis()->SetLabelSize(0.05);
   Graph_lepW_eta_data_graph3095->GetZaxis()->SetTitleSize(0.06);
   Graph_lepW_eta_data_graph3095->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_lepW_eta_data_graph3095);
   
   grae->Draw("pz ");
   
   leg = new TLegend(0,0,0,0,NULL,"brNDC");
   leg->SetBorderSize(1);
   leg->SetTextSize(0.084);
   leg->SetLineColor(0);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   entry=leg->AddEntry("lepW_eta_total_errors","stat. unc.","F");
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
   entry=leg->AddEntry("lepW_eta_total_errors","total unc.","F");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   leg->Draw();
   pad2->Modified();
   lepW_eta_canvas->cd();
   lepW_eta_canvas->Modified();
   lepW_eta_canvas->cd();
   lepW_eta_canvas->SetSelected(lepW_eta_canvas);
}
