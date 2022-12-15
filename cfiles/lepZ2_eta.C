void lepZ2_eta()
{
//=========Macro generated from canvas: lepZ2_eta_canvas/lepZ2_eta
//=========  (Thu Dec 15 18:26:01 2022) by ROOT version 6.12/07
   TCanvas *lepZ2_eta_canvas = new TCanvas("lepZ2_eta_canvas", "lepZ2_eta",0,0,600,750);
   gStyle->SetOptFit(1);
   gStyle->SetOptStat(0);
   gStyle->SetOptTitle(0);
   lepZ2_eta_canvas->SetHighLightColor(2);
   lepZ2_eta_canvas->Range(0,0,1,1);
   lepZ2_eta_canvas->SetFillColor(0);
   lepZ2_eta_canvas->SetBorderMode(0);
   lepZ2_eta_canvas->SetBorderSize(2);
   lepZ2_eta_canvas->SetTickx(1);
   lepZ2_eta_canvas->SetTicky(1);
   lepZ2_eta_canvas->SetLeftMargin(0.18);
   lepZ2_eta_canvas->SetRightMargin(0.04);
   lepZ2_eta_canvas->SetBottomMargin(0.13);
   lepZ2_eta_canvas->SetFrameFillStyle(0);
   lepZ2_eta_canvas->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: pad1
   TPad *pad1 = new TPad("pad1", "pad1",0,0.3,1,1);
   pad1->Draw();
   pad1->cd();
   pad1->Range(-3.653846,-8.694586,2.75641,339.0889);
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
   
   TH1D *lepZ2_eta_total__69 = new TH1D("lepZ2_eta_total__69","dummy",10,-2.5,2.5);
   lepZ2_eta_total__69->SetBinContent(1,73.2134);
   lepZ2_eta_total__69->SetBinContent(2,121.7352);
   lepZ2_eta_total__69->SetBinContent(3,147.0097);
   lepZ2_eta_total__69->SetBinContent(4,186.6895);
   lepZ2_eta_total__69->SetBinContent(5,209.245);
   lepZ2_eta_total__69->SetBinContent(6,203.9472);
   lepZ2_eta_total__69->SetBinContent(7,204.7616);
   lepZ2_eta_total__69->SetBinContent(8,159.7994);
   lepZ2_eta_total__69->SetBinContent(9,124.7418);
   lepZ2_eta_total__69->SetBinContent(10,64.80194);
   lepZ2_eta_total__69->SetBinError(1,4.87462);
   lepZ2_eta_total__69->SetBinError(2,5.311187);
   lepZ2_eta_total__69->SetBinError(3,5.790731);
   lepZ2_eta_total__69->SetBinError(4,5.614534);
   lepZ2_eta_total__69->SetBinError(5,6.265396);
   lepZ2_eta_total__69->SetBinError(6,5.517106);
   lepZ2_eta_total__69->SetBinError(7,7.261067);
   lepZ2_eta_total__69->SetBinError(8,6.775766);
   lepZ2_eta_total__69->SetBinError(9,5.855969);
   lepZ2_eta_total__69->SetBinError(10,3.423433);
   lepZ2_eta_total__69->SetMinimum(0);
   lepZ2_eta_total__69->SetMaximum(318.2219);
   lepZ2_eta_total__69->SetEntries(15152);
   lepZ2_eta_total__69->SetDirectory(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#00cc00");
   lepZ2_eta_total__69->SetFillColor(ci);
   lepZ2_eta_total__69->SetMarkerStyle(20);
   lepZ2_eta_total__69->SetMarkerSize(1.1);
   lepZ2_eta_total__69->GetXaxis()->SetTitle("#eta(Z2 lep.)");
   lepZ2_eta_total__69->GetXaxis()->SetMoreLogLabels();
   lepZ2_eta_total__69->GetXaxis()->SetLabelFont(42);
   lepZ2_eta_total__69->GetXaxis()->SetLabelOffset(999);
   lepZ2_eta_total__69->GetXaxis()->SetLabelSize(0.05);
   lepZ2_eta_total__69->GetXaxis()->SetTitleSize(0.05);
   lepZ2_eta_total__69->GetXaxis()->SetTitleOffset(999);
   lepZ2_eta_total__69->GetXaxis()->SetTitleFont(42);
   lepZ2_eta_total__69->GetYaxis()->SetTitle("Leptons");
   lepZ2_eta_total__69->GetYaxis()->SetLabelFont(42);
   lepZ2_eta_total__69->GetYaxis()->SetLabelOffset(0.007);
   lepZ2_eta_total__69->GetYaxis()->SetLabelSize(0.05);
   lepZ2_eta_total__69->GetYaxis()->SetTitleSize(0.06);
   lepZ2_eta_total__69->GetYaxis()->SetTitleOffset(1.48);
   lepZ2_eta_total__69->GetYaxis()->SetTitleFont(42);
   lepZ2_eta_total__69->GetZaxis()->SetLabelFont(42);
   lepZ2_eta_total__69->GetZaxis()->SetLabelOffset(0.007);
   lepZ2_eta_total__69->GetZaxis()->SetLabelSize(0.05);
   lepZ2_eta_total__69->GetZaxis()->SetTitleSize(0.06);
   lepZ2_eta_total__69->GetZaxis()->SetTitleFont(42);
   lepZ2_eta_total__69->Draw("HIST");
   
   THStack *lepZ2_eta_stack = new THStack();
   lepZ2_eta_stack->SetName("lepZ2_eta_stack");
   lepZ2_eta_stack->SetTitle("lepZ2_eta");
   
   TH1F *lepZ2_eta_stack_stack_18 = new TH1F("lepZ2_eta_stack_stack_18","lepZ2_eta",10,-2.5,2.5);
   lepZ2_eta_stack_stack_18->SetMinimum(0);
   lepZ2_eta_stack_stack_18->SetMaximum(219.7072);
   lepZ2_eta_stack_stack_18->SetDirectory(0);
   lepZ2_eta_stack_stack_18->SetStats(0);
   lepZ2_eta_stack_stack_18->SetLineStyle(0);
   lepZ2_eta_stack_stack_18->SetMarkerStyle(20);
   lepZ2_eta_stack_stack_18->GetXaxis()->SetLabelFont(42);
   lepZ2_eta_stack_stack_18->GetXaxis()->SetLabelOffset(0.007);
   lepZ2_eta_stack_stack_18->GetXaxis()->SetLabelSize(0.05);
   lepZ2_eta_stack_stack_18->GetXaxis()->SetTitleSize(0.06);
   lepZ2_eta_stack_stack_18->GetXaxis()->SetTitleOffset(0.9);
   lepZ2_eta_stack_stack_18->GetXaxis()->SetTitleFont(42);
   lepZ2_eta_stack_stack_18->GetYaxis()->SetLabelFont(42);
   lepZ2_eta_stack_stack_18->GetYaxis()->SetLabelOffset(0.007);
   lepZ2_eta_stack_stack_18->GetYaxis()->SetLabelSize(0.05);
   lepZ2_eta_stack_stack_18->GetYaxis()->SetTitleSize(0.06);
   lepZ2_eta_stack_stack_18->GetYaxis()->SetTitleOffset(1.35);
   lepZ2_eta_stack_stack_18->GetYaxis()->SetTitleFont(42);
   lepZ2_eta_stack_stack_18->GetZaxis()->SetLabelFont(42);
   lepZ2_eta_stack_stack_18->GetZaxis()->SetLabelOffset(0.007);
   lepZ2_eta_stack_stack_18->GetZaxis()->SetLabelSize(0.05);
   lepZ2_eta_stack_stack_18->GetZaxis()->SetTitleSize(0.06);
   lepZ2_eta_stack_stack_18->GetZaxis()->SetTitleFont(42);
   lepZ2_eta_stack->SetHistogram(lepZ2_eta_stack_stack_18);
   
   
   TH1D *lepZ2_eta_fakes_VV_stack_1 = new TH1D("lepZ2_eta_fakes_VV_stack_1","dummy",10,-2.5,2.5);
   lepZ2_eta_fakes_VV_stack_1->SetBinContent(3,0.09719337);
   lepZ2_eta_fakes_VV_stack_1->SetBinContent(4,0.09719337);
   lepZ2_eta_fakes_VV_stack_1->SetBinContent(5,0.09719337);
   lepZ2_eta_fakes_VV_stack_1->SetBinContent(7,0.1943867);
   lepZ2_eta_fakes_VV_stack_1->SetBinContent(9,0.09719337);
   lepZ2_eta_fakes_VV_stack_1->SetBinContent(10,0.09719337);
   lepZ2_eta_fakes_VV_stack_1->SetBinError(3,0.09719337);
   lepZ2_eta_fakes_VV_stack_1->SetBinError(4,0.09719337);
   lepZ2_eta_fakes_VV_stack_1->SetBinError(5,0.09719337);
   lepZ2_eta_fakes_VV_stack_1->SetBinError(7,0.1374522);
   lepZ2_eta_fakes_VV_stack_1->SetBinError(9,0.09719337);
   lepZ2_eta_fakes_VV_stack_1->SetBinError(10,0.09719337);
   lepZ2_eta_fakes_VV_stack_1->SetEntries(11);

   ci = TColor::GetColor("#2e3294");
   lepZ2_eta_fakes_VV_stack_1->SetFillColor(ci);
   lepZ2_eta_fakes_VV_stack_1->SetMarkerStyle(0);
   lepZ2_eta_fakes_VV_stack_1->SetMarkerSize(1.1);
   lepZ2_eta_fakes_VV_stack_1->GetXaxis()->SetTitle("#eta(Z2 lep.)");
   lepZ2_eta_fakes_VV_stack_1->GetXaxis()->SetMoreLogLabels();
   lepZ2_eta_fakes_VV_stack_1->GetXaxis()->SetLabelFont(42);
   lepZ2_eta_fakes_VV_stack_1->GetXaxis()->SetLabelOffset(0.007);
   lepZ2_eta_fakes_VV_stack_1->GetXaxis()->SetLabelSize(0.05);
   lepZ2_eta_fakes_VV_stack_1->GetXaxis()->SetTitleSize(0.06);
   lepZ2_eta_fakes_VV_stack_1->GetXaxis()->SetTitleOffset(0.9);
   lepZ2_eta_fakes_VV_stack_1->GetXaxis()->SetTitleFont(42);
   lepZ2_eta_fakes_VV_stack_1->GetYaxis()->SetTitle("Leptons");
   lepZ2_eta_fakes_VV_stack_1->GetYaxis()->SetLabelFont(42);
   lepZ2_eta_fakes_VV_stack_1->GetYaxis()->SetLabelOffset(0.007);
   lepZ2_eta_fakes_VV_stack_1->GetYaxis()->SetLabelSize(0.05);
   lepZ2_eta_fakes_VV_stack_1->GetYaxis()->SetTitleSize(0.06);
   lepZ2_eta_fakes_VV_stack_1->GetYaxis()->SetTitleOffset(1.35);
   lepZ2_eta_fakes_VV_stack_1->GetYaxis()->SetTitleFont(42);
   lepZ2_eta_fakes_VV_stack_1->GetZaxis()->SetLabelFont(42);
   lepZ2_eta_fakes_VV_stack_1->GetZaxis()->SetLabelOffset(0.007);
   lepZ2_eta_fakes_VV_stack_1->GetZaxis()->SetLabelSize(0.05);
   lepZ2_eta_fakes_VV_stack_1->GetZaxis()->SetTitleSize(0.06);
   lepZ2_eta_fakes_VV_stack_1->GetZaxis()->SetTitleFont(42);
   lepZ2_eta_stack->Add(lepZ2_eta_fakes_VV_stack_1,"");
   
   TH1D *lepZ2_eta_fakes_TT_stack_2 = new TH1D("lepZ2_eta_fakes_TT_stack_2","dummy",10,-2.5,2.5);
   lepZ2_eta_fakes_TT_stack_2->SetBinContent(1,3.590688);
   lepZ2_eta_fakes_TT_stack_2->SetBinContent(2,5.784998);
   lepZ2_eta_fakes_TT_stack_2->SetBinContent(3,4.70025);
   lepZ2_eta_fakes_TT_stack_2->SetBinContent(4,6.117469);
   lepZ2_eta_fakes_TT_stack_2->SetBinContent(5,6.495594);
   lepZ2_eta_fakes_TT_stack_2->SetBinContent(6,6.985868);
   lepZ2_eta_fakes_TT_stack_2->SetBinContent(7,6.362606);
   lepZ2_eta_fakes_TT_stack_2->SetBinContent(8,5.18655);
   lepZ2_eta_fakes_TT_stack_2->SetBinContent(9,5.498181);
   lepZ2_eta_fakes_TT_stack_2->SetBinContent(10,4.322125);
   lepZ2_eta_fakes_TT_stack_2->SetBinError(1,0.4975972);
   lepZ2_eta_fakes_TT_stack_2->SetBinError(2,0.6202168);
   lepZ2_eta_fakes_TT_stack_2->SetBinError(3,0.5636129);
   lepZ2_eta_fakes_TT_stack_2->SetBinError(4,0.6446854);
   lepZ2_eta_fakes_TT_stack_2->SetBinError(5,0.6610897);
   lepZ2_eta_fakes_TT_stack_2->SetBinError(6,0.6927337);
   lepZ2_eta_fakes_TT_stack_2->SetBinError(7,0.6543673);
   lepZ2_eta_fakes_TT_stack_2->SetBinError(8,0.5872611);
   lepZ2_eta_fakes_TT_stack_2->SetBinError(9,0.6160846);
   lepZ2_eta_fakes_TT_stack_2->SetBinError(10,0.5523425);
   lepZ2_eta_fakes_TT_stack_2->SetEntries(841);

   ci = TColor::GetColor("#666666");
   lepZ2_eta_fakes_TT_stack_2->SetFillColor(ci);
   lepZ2_eta_fakes_TT_stack_2->SetMarkerStyle(0);
   lepZ2_eta_fakes_TT_stack_2->SetMarkerSize(1.1);
   lepZ2_eta_fakes_TT_stack_2->GetXaxis()->SetTitle("#eta(Z2 lep.)");
   lepZ2_eta_fakes_TT_stack_2->GetXaxis()->SetMoreLogLabels();
   lepZ2_eta_fakes_TT_stack_2->GetXaxis()->SetLabelFont(42);
   lepZ2_eta_fakes_TT_stack_2->GetXaxis()->SetLabelOffset(0.007);
   lepZ2_eta_fakes_TT_stack_2->GetXaxis()->SetLabelSize(0.05);
   lepZ2_eta_fakes_TT_stack_2->GetXaxis()->SetTitleSize(0.06);
   lepZ2_eta_fakes_TT_stack_2->GetXaxis()->SetTitleOffset(0.9);
   lepZ2_eta_fakes_TT_stack_2->GetXaxis()->SetTitleFont(42);
   lepZ2_eta_fakes_TT_stack_2->GetYaxis()->SetTitle("Leptons");
   lepZ2_eta_fakes_TT_stack_2->GetYaxis()->SetLabelFont(42);
   lepZ2_eta_fakes_TT_stack_2->GetYaxis()->SetLabelOffset(0.007);
   lepZ2_eta_fakes_TT_stack_2->GetYaxis()->SetLabelSize(0.05);
   lepZ2_eta_fakes_TT_stack_2->GetYaxis()->SetTitleSize(0.06);
   lepZ2_eta_fakes_TT_stack_2->GetYaxis()->SetTitleOffset(1.35);
   lepZ2_eta_fakes_TT_stack_2->GetYaxis()->SetTitleFont(42);
   lepZ2_eta_fakes_TT_stack_2->GetZaxis()->SetLabelFont(42);
   lepZ2_eta_fakes_TT_stack_2->GetZaxis()->SetLabelOffset(0.007);
   lepZ2_eta_fakes_TT_stack_2->GetZaxis()->SetLabelSize(0.05);
   lepZ2_eta_fakes_TT_stack_2->GetZaxis()->SetTitleSize(0.06);
   lepZ2_eta_fakes_TT_stack_2->GetZaxis()->SetTitleFont(42);
   lepZ2_eta_stack->Add(lepZ2_eta_fakes_TT_stack_2,"");
   
   TH1D *lepZ2_eta_fakes_DY_stack_3 = new TH1D("lepZ2_eta_fakes_DY_stack_3","dummy",10,-2.5,2.5);
   lepZ2_eta_fakes_DY_stack_3->SetBinContent(1,10.31713);
   lepZ2_eta_fakes_DY_stack_3->SetBinContent(2,10.31713);
   lepZ2_eta_fakes_DY_stack_3->SetBinContent(3,12.03665);
   lepZ2_eta_fakes_DY_stack_3->SetBinContent(4,8.597611);
   lepZ2_eta_fakes_DY_stack_3->SetBinContent(5,12.03665);
   lepZ2_eta_fakes_DY_stack_3->SetBinContent(6,6.878088);
   lepZ2_eta_fakes_DY_stack_3->SetBinContent(7,20.63427);
   lepZ2_eta_fakes_DY_stack_3->SetBinContent(8,18.91474);
   lepZ2_eta_fakes_DY_stack_3->SetBinContent(9,13.75618);
   lepZ2_eta_fakes_DY_stack_3->SetBinContent(10,3.439044);
   lepZ2_eta_fakes_DY_stack_3->SetBinError(1,4.211952);
   lepZ2_eta_fakes_DY_stack_3->SetBinError(2,4.211952);
   lepZ2_eta_fakes_DY_stack_3->SetBinError(3,4.549428);
   lepZ2_eta_fakes_DY_stack_3->SetBinError(4,3.844968);
   lepZ2_eta_fakes_DY_stack_3->SetBinError(5,4.549428);
   lepZ2_eta_fakes_DY_stack_3->SetBinError(6,3.439044);
   lepZ2_eta_fakes_DY_stack_3->SetBinError(7,5.956599);
   lepZ2_eta_fakes_DY_stack_3->SetBinError(8,5.70301);
   lepZ2_eta_fakes_DY_stack_3->SetBinError(9,4.863543);
   lepZ2_eta_fakes_DY_stack_3->SetBinError(10,2.431771);
   lepZ2_eta_fakes_DY_stack_3->SetEntries(72);

   ci = TColor::GetColor("#cccccc");
   lepZ2_eta_fakes_DY_stack_3->SetFillColor(ci);
   lepZ2_eta_fakes_DY_stack_3->SetMarkerStyle(0);
   lepZ2_eta_fakes_DY_stack_3->SetMarkerSize(1.1);
   lepZ2_eta_fakes_DY_stack_3->GetXaxis()->SetTitle("#eta(Z2 lep.)");
   lepZ2_eta_fakes_DY_stack_3->GetXaxis()->SetMoreLogLabels();
   lepZ2_eta_fakes_DY_stack_3->GetXaxis()->SetLabelFont(42);
   lepZ2_eta_fakes_DY_stack_3->GetXaxis()->SetLabelOffset(0.007);
   lepZ2_eta_fakes_DY_stack_3->GetXaxis()->SetLabelSize(0.05);
   lepZ2_eta_fakes_DY_stack_3->GetXaxis()->SetTitleSize(0.06);
   lepZ2_eta_fakes_DY_stack_3->GetXaxis()->SetTitleOffset(0.9);
   lepZ2_eta_fakes_DY_stack_3->GetXaxis()->SetTitleFont(42);
   lepZ2_eta_fakes_DY_stack_3->GetYaxis()->SetTitle("Leptons");
   lepZ2_eta_fakes_DY_stack_3->GetYaxis()->SetLabelFont(42);
   lepZ2_eta_fakes_DY_stack_3->GetYaxis()->SetLabelOffset(0.007);
   lepZ2_eta_fakes_DY_stack_3->GetYaxis()->SetLabelSize(0.05);
   lepZ2_eta_fakes_DY_stack_3->GetYaxis()->SetTitleSize(0.06);
   lepZ2_eta_fakes_DY_stack_3->GetYaxis()->SetTitleOffset(1.35);
   lepZ2_eta_fakes_DY_stack_3->GetYaxis()->SetTitleFont(42);
   lepZ2_eta_fakes_DY_stack_3->GetZaxis()->SetLabelFont(42);
   lepZ2_eta_fakes_DY_stack_3->GetZaxis()->SetLabelOffset(0.007);
   lepZ2_eta_fakes_DY_stack_3->GetZaxis()->SetLabelSize(0.05);
   lepZ2_eta_fakes_DY_stack_3->GetZaxis()->SetTitleSize(0.06);
   lepZ2_eta_fakes_DY_stack_3->GetZaxis()->SetTitleFont(42);
   lepZ2_eta_stack->Add(lepZ2_eta_fakes_DY_stack_3,"");
   
   TH1D *lepZ2_eta_prompt_ZZ_stack_4 = new TH1D("lepZ2_eta_prompt_ZZ_stack_4","dummy",10,-2.5,2.5);
   lepZ2_eta_prompt_ZZ_stack_4->SetBinContent(1,4.40365);
   lepZ2_eta_prompt_ZZ_stack_4->SetBinContent(2,5.688048);
   lepZ2_eta_prompt_ZZ_stack_4->SetBinContent(3,7.889873);
   lepZ2_eta_prompt_ZZ_stack_4->SetBinContent(4,8.256843);
   lepZ2_eta_prompt_ZZ_stack_4->SetBinContent(5,9.357756);
   lepZ2_eta_prompt_ZZ_stack_4->SetBinContent(6,10.0917);
   lepZ2_eta_prompt_ZZ_stack_4->SetBinContent(7,7.889873);
   lepZ2_eta_prompt_ZZ_stack_4->SetBinContent(8,8.256843);
   lepZ2_eta_prompt_ZZ_stack_4->SetBinContent(9,7.706387);
   lepZ2_eta_prompt_ZZ_stack_4->SetBinContent(10,3.669708);
   lepZ2_eta_prompt_ZZ_stack_4->SetBinError(1,0.8988913);
   lepZ2_eta_prompt_ZZ_stack_4->SetBinError(2,1.021604);
   lepZ2_eta_prompt_ZZ_stack_4->SetBinError(3,1.203194);
   lepZ2_eta_prompt_ZZ_stack_4->SetBinError(4,1.230858);
   lepZ2_eta_prompt_ZZ_stack_4->SetBinError(5,1.310348);
   lepZ2_eta_prompt_ZZ_stack_4->SetBinError(6,1.360764);
   lepZ2_eta_prompt_ZZ_stack_4->SetBinError(7,1.203194);
   lepZ2_eta_prompt_ZZ_stack_4->SetBinError(8,1.230858);
   lepZ2_eta_prompt_ZZ_stack_4->SetBinError(9,1.189121);
   lepZ2_eta_prompt_ZZ_stack_4->SetBinError(10,0.8205717);
   lepZ2_eta_prompt_ZZ_stack_4->SetEntries(403);

   ci = TColor::GetColor("#00cc00");
   lepZ2_eta_prompt_ZZ_stack_4->SetFillColor(ci);
   lepZ2_eta_prompt_ZZ_stack_4->SetMarkerStyle(0);
   lepZ2_eta_prompt_ZZ_stack_4->SetMarkerSize(1.1);
   lepZ2_eta_prompt_ZZ_stack_4->GetXaxis()->SetTitle("#eta(Z2 lep.)");
   lepZ2_eta_prompt_ZZ_stack_4->GetXaxis()->SetMoreLogLabels();
   lepZ2_eta_prompt_ZZ_stack_4->GetXaxis()->SetLabelFont(42);
   lepZ2_eta_prompt_ZZ_stack_4->GetXaxis()->SetLabelOffset(0.007);
   lepZ2_eta_prompt_ZZ_stack_4->GetXaxis()->SetLabelSize(0.05);
   lepZ2_eta_prompt_ZZ_stack_4->GetXaxis()->SetTitleSize(0.06);
   lepZ2_eta_prompt_ZZ_stack_4->GetXaxis()->SetTitleOffset(0.9);
   lepZ2_eta_prompt_ZZ_stack_4->GetXaxis()->SetTitleFont(42);
   lepZ2_eta_prompt_ZZ_stack_4->GetYaxis()->SetTitle("Leptons");
   lepZ2_eta_prompt_ZZ_stack_4->GetYaxis()->SetLabelFont(42);
   lepZ2_eta_prompt_ZZ_stack_4->GetYaxis()->SetLabelOffset(0.007);
   lepZ2_eta_prompt_ZZ_stack_4->GetYaxis()->SetLabelSize(0.05);
   lepZ2_eta_prompt_ZZ_stack_4->GetYaxis()->SetTitleSize(0.06);
   lepZ2_eta_prompt_ZZ_stack_4->GetYaxis()->SetTitleOffset(1.35);
   lepZ2_eta_prompt_ZZ_stack_4->GetYaxis()->SetTitleFont(42);
   lepZ2_eta_prompt_ZZ_stack_4->GetZaxis()->SetLabelFont(42);
   lepZ2_eta_prompt_ZZ_stack_4->GetZaxis()->SetLabelOffset(0.007);
   lepZ2_eta_prompt_ZZ_stack_4->GetZaxis()->SetLabelSize(0.05);
   lepZ2_eta_prompt_ZZ_stack_4->GetZaxis()->SetTitleSize(0.06);
   lepZ2_eta_prompt_ZZ_stack_4->GetZaxis()->SetTitleFont(42);
   lepZ2_eta_stack->Add(lepZ2_eta_prompt_ZZ_stack_4,"");
   
   TH1D *lepZ2_eta_prompt_WZ_stack_5 = new TH1D("lepZ2_eta_prompt_WZ_stack_5","dummy",10,-2.5,2.5);
   lepZ2_eta_prompt_WZ_stack_5->SetBinContent(1,54.90193);
   lepZ2_eta_prompt_WZ_stack_5->SetBinContent(2,99.94503);
   lepZ2_eta_prompt_WZ_stack_5->SetBinContent(3,122.2857);
   lepZ2_eta_prompt_WZ_stack_5->SetBinContent(4,163.6204);
   lepZ2_eta_prompt_WZ_stack_5->SetBinContent(5,181.2578);
   lepZ2_eta_prompt_WZ_stack_5->SetBinContent(6,179.9915);
   lepZ2_eta_prompt_WZ_stack_5->SetBinContent(7,169.6804);
   lepZ2_eta_prompt_WZ_stack_5->SetBinContent(8,127.4412);
   lepZ2_eta_prompt_WZ_stack_5->SetBinContent(9,97.68383);
   lepZ2_eta_prompt_WZ_stack_5->SetBinContent(10,53.27387);
   lepZ2_eta_prompt_WZ_stack_5->SetBinError(1,2.228401);
   lepZ2_eta_prompt_WZ_stack_5->SetBinError(2,3.006631);
   lepZ2_eta_prompt_WZ_stack_5->SetBinError(3,3.325732);
   lepZ2_eta_prompt_WZ_stack_5->SetBinError(4,3.846965);
   lepZ2_eta_prompt_WZ_stack_5->SetBinError(5,4.049);
   lepZ2_eta_prompt_WZ_stack_5->SetBinError(6,4.034832);
   lepZ2_eta_prompt_WZ_stack_5->SetBinError(7,3.917557);
   lepZ2_eta_prompt_WZ_stack_5->SetBinError(8,3.395114);
   lepZ2_eta_prompt_WZ_stack_5->SetBinError(9,2.972424);
   lepZ2_eta_prompt_WZ_stack_5->SetBinError(10,2.195111);
   lepZ2_eta_prompt_WZ_stack_5->SetEntries(13825);

   ci = TColor::GetColor("#ffcc00");
   lepZ2_eta_prompt_WZ_stack_5->SetFillColor(ci);
   lepZ2_eta_prompt_WZ_stack_5->SetMarkerStyle(0);
   lepZ2_eta_prompt_WZ_stack_5->SetMarkerSize(1.1);
   lepZ2_eta_prompt_WZ_stack_5->GetXaxis()->SetTitle("#eta(Z2 lep.)");
   lepZ2_eta_prompt_WZ_stack_5->GetXaxis()->SetMoreLogLabels();
   lepZ2_eta_prompt_WZ_stack_5->GetXaxis()->SetLabelFont(42);
   lepZ2_eta_prompt_WZ_stack_5->GetXaxis()->SetLabelOffset(0.007);
   lepZ2_eta_prompt_WZ_stack_5->GetXaxis()->SetLabelSize(0.05);
   lepZ2_eta_prompt_WZ_stack_5->GetXaxis()->SetTitleSize(0.06);
   lepZ2_eta_prompt_WZ_stack_5->GetXaxis()->SetTitleOffset(0.9);
   lepZ2_eta_prompt_WZ_stack_5->GetXaxis()->SetTitleFont(42);
   lepZ2_eta_prompt_WZ_stack_5->GetYaxis()->SetTitle("Leptons");
   lepZ2_eta_prompt_WZ_stack_5->GetYaxis()->SetLabelFont(42);
   lepZ2_eta_prompt_WZ_stack_5->GetYaxis()->SetLabelOffset(0.007);
   lepZ2_eta_prompt_WZ_stack_5->GetYaxis()->SetLabelSize(0.05);
   lepZ2_eta_prompt_WZ_stack_5->GetYaxis()->SetTitleSize(0.06);
   lepZ2_eta_prompt_WZ_stack_5->GetYaxis()->SetTitleOffset(1.35);
   lepZ2_eta_prompt_WZ_stack_5->GetYaxis()->SetTitleFont(42);
   lepZ2_eta_prompt_WZ_stack_5->GetZaxis()->SetLabelFont(42);
   lepZ2_eta_prompt_WZ_stack_5->GetZaxis()->SetLabelOffset(0.007);
   lepZ2_eta_prompt_WZ_stack_5->GetZaxis()->SetLabelSize(0.05);
   lepZ2_eta_prompt_WZ_stack_5->GetZaxis()->SetTitleSize(0.06);
   lepZ2_eta_prompt_WZ_stack_5->GetZaxis()->SetTitleFont(42);
   lepZ2_eta_stack->Add(lepZ2_eta_prompt_WZ_stack_5,"");
   lepZ2_eta_stack->Draw("same hist");
   
   TH1D *lepZ2_eta_total__70 = new TH1D("lepZ2_eta_total__70","dummy",10,-2.5,2.5);
   lepZ2_eta_total__70->SetBinContent(1,73.2134);
   lepZ2_eta_total__70->SetBinContent(2,121.7352);
   lepZ2_eta_total__70->SetBinContent(3,147.0097);
   lepZ2_eta_total__70->SetBinContent(4,186.6895);
   lepZ2_eta_total__70->SetBinContent(5,209.245);
   lepZ2_eta_total__70->SetBinContent(6,203.9472);
   lepZ2_eta_total__70->SetBinContent(7,204.7616);
   lepZ2_eta_total__70->SetBinContent(8,159.7994);
   lepZ2_eta_total__70->SetBinContent(9,124.7418);
   lepZ2_eta_total__70->SetBinContent(10,64.80194);
   lepZ2_eta_total__70->SetBinError(1,4.87462);
   lepZ2_eta_total__70->SetBinError(2,5.311187);
   lepZ2_eta_total__70->SetBinError(3,5.790731);
   lepZ2_eta_total__70->SetBinError(4,5.614534);
   lepZ2_eta_total__70->SetBinError(5,6.265396);
   lepZ2_eta_total__70->SetBinError(6,5.517106);
   lepZ2_eta_total__70->SetBinError(7,7.261067);
   lepZ2_eta_total__70->SetBinError(8,6.775766);
   lepZ2_eta_total__70->SetBinError(9,5.855969);
   lepZ2_eta_total__70->SetBinError(10,3.423433);
   lepZ2_eta_total__70->SetMinimum(0);
   lepZ2_eta_total__70->SetMaximum(318.2219);
   lepZ2_eta_total__70->SetEntries(15152);
   lepZ2_eta_total__70->SetDirectory(0);

   ci = TColor::GetColor("#00cc00");
   lepZ2_eta_total__70->SetFillColor(ci);
   lepZ2_eta_total__70->SetMarkerStyle(20);
   lepZ2_eta_total__70->SetMarkerSize(1.1);
   lepZ2_eta_total__70->GetXaxis()->SetTitle("#eta(Z2 lep.)");
   lepZ2_eta_total__70->GetXaxis()->SetMoreLogLabels();
   lepZ2_eta_total__70->GetXaxis()->SetLabelFont(42);
   lepZ2_eta_total__70->GetXaxis()->SetLabelOffset(999);
   lepZ2_eta_total__70->GetXaxis()->SetLabelSize(0.05);
   lepZ2_eta_total__70->GetXaxis()->SetTitleSize(0.05);
   lepZ2_eta_total__70->GetXaxis()->SetTitleOffset(999);
   lepZ2_eta_total__70->GetXaxis()->SetTitleFont(42);
   lepZ2_eta_total__70->GetYaxis()->SetTitle("Leptons");
   lepZ2_eta_total__70->GetYaxis()->SetLabelFont(42);
   lepZ2_eta_total__70->GetYaxis()->SetLabelOffset(0.007);
   lepZ2_eta_total__70->GetYaxis()->SetLabelSize(0.05);
   lepZ2_eta_total__70->GetYaxis()->SetTitleSize(0.06);
   lepZ2_eta_total__70->GetYaxis()->SetTitleOffset(1.48);
   lepZ2_eta_total__70->GetYaxis()->SetTitleFont(42);
   lepZ2_eta_total__70->GetZaxis()->SetLabelFont(42);
   lepZ2_eta_total__70->GetZaxis()->SetLabelOffset(0.007);
   lepZ2_eta_total__70->GetZaxis()->SetLabelSize(0.05);
   lepZ2_eta_total__70->GetZaxis()->SetTitleSize(0.06);
   lepZ2_eta_total__70->GetZaxis()->SetTitleFont(42);
   lepZ2_eta_total__70->Draw("AXIS SAME");
   
   Double_t lepZ2_eta_total_errors_fx3086[10] = {
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
   Double_t lepZ2_eta_total_errors_fy3086[10] = {
   73.2134,
   121.7352,
   147.0097,
   186.6895,
   209.245,
   203.9472,
   204.7616,
   159.7994,
   124.7418,
   64.80194};
   Double_t lepZ2_eta_total_errors_felx3086[10] = {
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
   Double_t lepZ2_eta_total_errors_fely3086[10] = {
   4.87462,
   5.311187,
   5.790731,
   5.614534,
   6.265396,
   5.517106,
   7.261067,
   6.775766,
   5.855969,
   3.423433};
   Double_t lepZ2_eta_total_errors_fehx3086[10] = {
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
   Double_t lepZ2_eta_total_errors_fehy3086[10] = {
   4.87462,
   5.311187,
   5.790731,
   5.614534,
   6.265396,
   5.517106,
   7.261067,
   6.775766,
   5.855969,
   3.423433};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(10,lepZ2_eta_total_errors_fx3086,lepZ2_eta_total_errors_fy3086,lepZ2_eta_total_errors_felx3086,lepZ2_eta_total_errors_fehx3086,lepZ2_eta_total_errors_fely3086,lepZ2_eta_total_errors_fehy3086);
   grae->SetName("lepZ2_eta_total_errors");
   grae->SetTitle("Graph");
   grae->SetFillColor(1);
   grae->SetFillStyle(3013);
   grae->SetMarkerStyle(0);
   
   TH1F *Graph_lepZ2_eta_total_errors3086 = new TH1F("Graph_lepZ2_eta_total_errors3086","Graph",100,-3,3);
   Graph_lepZ2_eta_total_errors3086->SetMinimum(45.96532);
   Graph_lepZ2_eta_total_errors3086->SetMaximum(230.9236);
   Graph_lepZ2_eta_total_errors3086->SetDirectory(0);
   Graph_lepZ2_eta_total_errors3086->SetStats(0);
   Graph_lepZ2_eta_total_errors3086->SetLineStyle(0);
   Graph_lepZ2_eta_total_errors3086->SetMarkerStyle(20);
   Graph_lepZ2_eta_total_errors3086->GetXaxis()->SetLabelFont(42);
   Graph_lepZ2_eta_total_errors3086->GetXaxis()->SetLabelOffset(0.007);
   Graph_lepZ2_eta_total_errors3086->GetXaxis()->SetLabelSize(0.05);
   Graph_lepZ2_eta_total_errors3086->GetXaxis()->SetTitleSize(0.06);
   Graph_lepZ2_eta_total_errors3086->GetXaxis()->SetTitleOffset(0.9);
   Graph_lepZ2_eta_total_errors3086->GetXaxis()->SetTitleFont(42);
   Graph_lepZ2_eta_total_errors3086->GetYaxis()->SetLabelFont(42);
   Graph_lepZ2_eta_total_errors3086->GetYaxis()->SetLabelOffset(0.007);
   Graph_lepZ2_eta_total_errors3086->GetYaxis()->SetLabelSize(0.05);
   Graph_lepZ2_eta_total_errors3086->GetYaxis()->SetTitleSize(0.06);
   Graph_lepZ2_eta_total_errors3086->GetYaxis()->SetTitleOffset(1.35);
   Graph_lepZ2_eta_total_errors3086->GetYaxis()->SetTitleFont(42);
   Graph_lepZ2_eta_total_errors3086->GetZaxis()->SetLabelFont(42);
   Graph_lepZ2_eta_total_errors3086->GetZaxis()->SetLabelOffset(0.007);
   Graph_lepZ2_eta_total_errors3086->GetZaxis()->SetLabelSize(0.05);
   Graph_lepZ2_eta_total_errors3086->GetZaxis()->SetTitleSize(0.06);
   Graph_lepZ2_eta_total_errors3086->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_lepZ2_eta_total_errors3086);
   
   grae->Draw("pe2 ");
   
   Double_t lepZ2_eta_data_graph_fx3087[10] = {
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
   Double_t lepZ2_eta_data_graph_fy3087[10] = {
   73,
   145,
   168,
   183,
   224,
   192,
   181,
   153,
   136,
   58};
   Double_t lepZ2_eta_data_graph_felx3087[10] = {
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
   Double_t lepZ2_eta_data_graph_fely3087[10] = {
   8.524559,
   12.02795,
   12.94884,
   13.51567,
   14.95577,
   13.84462,
   13.44147,
   12.35605,
   11.64779,
   7.593901};
   Double_t lepZ2_eta_data_graph_fehx3087[10] = {
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
   Double_t lepZ2_eta_data_graph_fehy3087[10] = {
   9.583245,
   13.06958,
   13.98752,
   14.55272,
   15.98926,
   14.8808,
   14.47873,
   13.39657,
   12.69078,
   8.659745};
   grae = new TGraphAsymmErrors(10,lepZ2_eta_data_graph_fx3087,lepZ2_eta_data_graph_fy3087,lepZ2_eta_data_graph_felx3087,lepZ2_eta_data_graph_fehx3087,lepZ2_eta_data_graph_fely3087,lepZ2_eta_data_graph_fehy3087);
   grae->SetName("lepZ2_eta_data_graph");
   grae->SetTitle("Graph");
   grae->SetFillStyle(1000);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.1);
   
   TH1F *Graph_lepZ2_eta_data_graph3087 = new TH1F("Graph_lepZ2_eta_data_graph3087","Graph",100,-3,3);
   Graph_lepZ2_eta_data_graph3087->SetMinimum(31.44778);
   Graph_lepZ2_eta_data_graph3087->SetMaximum(258.9476);
   Graph_lepZ2_eta_data_graph3087->SetDirectory(0);
   Graph_lepZ2_eta_data_graph3087->SetStats(0);
   Graph_lepZ2_eta_data_graph3087->SetLineStyle(0);
   Graph_lepZ2_eta_data_graph3087->SetMarkerStyle(20);
   Graph_lepZ2_eta_data_graph3087->GetXaxis()->SetLabelFont(42);
   Graph_lepZ2_eta_data_graph3087->GetXaxis()->SetLabelOffset(0.007);
   Graph_lepZ2_eta_data_graph3087->GetXaxis()->SetLabelSize(0.05);
   Graph_lepZ2_eta_data_graph3087->GetXaxis()->SetTitleSize(0.06);
   Graph_lepZ2_eta_data_graph3087->GetXaxis()->SetTitleOffset(0.9);
   Graph_lepZ2_eta_data_graph3087->GetXaxis()->SetTitleFont(42);
   Graph_lepZ2_eta_data_graph3087->GetYaxis()->SetLabelFont(42);
   Graph_lepZ2_eta_data_graph3087->GetYaxis()->SetLabelOffset(0.007);
   Graph_lepZ2_eta_data_graph3087->GetYaxis()->SetLabelSize(0.05);
   Graph_lepZ2_eta_data_graph3087->GetYaxis()->SetTitleSize(0.06);
   Graph_lepZ2_eta_data_graph3087->GetYaxis()->SetTitleOffset(1.35);
   Graph_lepZ2_eta_data_graph3087->GetYaxis()->SetTitleFont(42);
   Graph_lepZ2_eta_data_graph3087->GetZaxis()->SetLabelFont(42);
   Graph_lepZ2_eta_data_graph3087->GetZaxis()->SetLabelOffset(0.007);
   Graph_lepZ2_eta_data_graph3087->GetZaxis()->SetLabelSize(0.05);
   Graph_lepZ2_eta_data_graph3087->GetZaxis()->SetTitleSize(0.06);
   Graph_lepZ2_eta_data_graph3087->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_lepZ2_eta_data_graph3087);
   
   grae->Draw("pz ");
   
   TLegend *leg = new TLegend(0.62,0.628,0.9,0.91,NULL,"brNDC");
   leg->SetBorderSize(1);
   leg->SetTextSize(0.036);
   leg->SetLineColor(0);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("lepZ2_eta_data","Data","LPE");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1.1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("lepZ2_eta_prompt_WZ_stack_5","WZ","F");

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
   entry=leg->AddEntry("lepZ2_eta_prompt_ZZ_stack_4","qqZZ","F");

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
   entry=leg->AddEntry("lepZ2_eta_fakes_DY_stack_3","Fakes DY","F");

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
   entry=leg->AddEntry("lepZ2_eta_fakes_TT_stack_2","Fakes TT","F");

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
   entry=leg->AddEntry("lepZ2_eta_total_errors","Total unc.","F");
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
   lepZ2_eta_canvas->cd();
  
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
   
   TH1D *lepZ2_eta_total__71 = new TH1D("lepZ2_eta_total__71","dummy",10,-2.5,2.5);
   lepZ2_eta_total__71->SetBinContent(1,1);
   lepZ2_eta_total__71->SetBinContent(2,1);
   lepZ2_eta_total__71->SetBinContent(3,1);
   lepZ2_eta_total__71->SetBinContent(4,1);
   lepZ2_eta_total__71->SetBinContent(5,1);
   lepZ2_eta_total__71->SetBinContent(6,1);
   lepZ2_eta_total__71->SetBinContent(7,1);
   lepZ2_eta_total__71->SetBinContent(8,1);
   lepZ2_eta_total__71->SetBinContent(9,1);
   lepZ2_eta_total__71->SetBinContent(10,1);
   lepZ2_eta_total__71->SetMinimum(0.5);
   lepZ2_eta_total__71->SetMaximum(2);
   lepZ2_eta_total__71->SetEntries(15162);

   ci = TColor::GetColor("#00cc00");
   lepZ2_eta_total__71->SetFillColor(ci);

   ci = TColor::GetColor("#6666ff");
   lepZ2_eta_total__71->SetMarkerColor(ci);
   lepZ2_eta_total__71->SetMarkerSize(1.1);
   lepZ2_eta_total__71->GetXaxis()->SetTitle("#eta(Z2 lep.)");
   lepZ2_eta_total__71->GetXaxis()->SetMoreLogLabels();
   lepZ2_eta_total__71->GetXaxis()->SetLabelFont(42);
   lepZ2_eta_total__71->GetXaxis()->SetLabelOffset(0.015);
   lepZ2_eta_total__71->GetXaxis()->SetLabelSize(0.1);
   lepZ2_eta_total__71->GetXaxis()->SetTitleSize(0.14);
   lepZ2_eta_total__71->GetXaxis()->SetTitleFont(42);
   lepZ2_eta_total__71->GetYaxis()->SetTitle("Data/pred.");
   lepZ2_eta_total__71->GetYaxis()->SetDecimals();
   lepZ2_eta_total__71->GetYaxis()->SetNdivisions(505);
   lepZ2_eta_total__71->GetYaxis()->SetLabelFont(42);
   lepZ2_eta_total__71->GetYaxis()->SetLabelOffset(0.01);
   lepZ2_eta_total__71->GetYaxis()->SetLabelSize(0.11);
   lepZ2_eta_total__71->GetYaxis()->SetTitleSize(0.14);
   lepZ2_eta_total__71->GetYaxis()->SetTitleOffset(0.62);
   lepZ2_eta_total__71->GetYaxis()->SetTitleFont(42);
   lepZ2_eta_total__71->GetZaxis()->SetLabelFont(42);
   lepZ2_eta_total__71->GetZaxis()->SetLabelOffset(0.007);
   lepZ2_eta_total__71->GetZaxis()->SetLabelSize(0.05);
   lepZ2_eta_total__71->GetZaxis()->SetTitleSize(0.06);
   lepZ2_eta_total__71->GetZaxis()->SetTitleFont(42);
   lepZ2_eta_total__71->Draw("AXIS");
   
   Double_t lepZ2_eta_total_errors_fx3088[10] = {
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
   Double_t lepZ2_eta_total_errors_fy3088[10] = {
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
   Double_t lepZ2_eta_total_errors_felx3088[10] = {
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
   Double_t lepZ2_eta_total_errors_fely3088[10] = {
   0.06658097,
   0.04362901,
   0.03939014,
   0.03007418,
   0.02994288,
   0.02705164,
   0.03546109,
   0.04240171,
   0.04694473,
   0.05282918};
   Double_t lepZ2_eta_total_errors_fehx3088[10] = {
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
   Double_t lepZ2_eta_total_errors_fehy3088[10] = {
   0.06658097,
   0.04362901,
   0.03939014,
   0.03007418,
   0.02994288,
   0.02705164,
   0.03546109,
   0.04240171,
   0.04694473,
   0.05282918};
   grae = new TGraphAsymmErrors(10,lepZ2_eta_total_errors_fx3088,lepZ2_eta_total_errors_fy3088,lepZ2_eta_total_errors_felx3088,lepZ2_eta_total_errors_fehx3088,lepZ2_eta_total_errors_fely3088,lepZ2_eta_total_errors_fehy3088);
   grae->SetName("lepZ2_eta_total_errors");
   grae->SetTitle("Graph");

   ci = TColor::GetColor("#00ffff");
   grae->SetFillColor(ci);

   ci = TColor::GetColor("#00ffff");
   grae->SetMarkerColor(ci);
   grae->Draw("e2");
   
   Double_t lepZ2_eta_total_errors_fx3089[10] = {
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
   Double_t lepZ2_eta_total_errors_fy3089[10] = {
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
   Double_t lepZ2_eta_total_errors_felx3089[10] = {
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
   Double_t lepZ2_eta_total_errors_fely3089[10] = {
   0.06658097,
   0.04362901,
   0.03939014,
   0.03007418,
   0.02994288,
   0.02705164,
   0.03546109,
   0.04240171,
   0.04694473,
   0.05282918};
   Double_t lepZ2_eta_total_errors_fehx3089[10] = {
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
   Double_t lepZ2_eta_total_errors_fehy3089[10] = {
   0.06658097,
   0.04362901,
   0.03939014,
   0.03007418,
   0.02994288,
   0.02705164,
   0.03546109,
   0.04240171,
   0.04694473,
   0.05282918};
   grae = new TGraphAsymmErrors(10,lepZ2_eta_total_errors_fx3089,lepZ2_eta_total_errors_fy3089,lepZ2_eta_total_errors_felx3089,lepZ2_eta_total_errors_fehx3089,lepZ2_eta_total_errors_fely3089,lepZ2_eta_total_errors_fehy3089);
   grae->SetName("lepZ2_eta_total_errors");
   grae->SetTitle("Graph");

   ci = TColor::GetColor("#6666ff");
   grae->SetFillColor(ci);

   ci = TColor::GetColor("#6666ff");
   grae->SetMarkerColor(ci);
   grae->Draw("e2 ");
   
   TH1D *lepZ2_eta_total__72 = new TH1D("lepZ2_eta_total__72","dummy",10,-2.5,2.5);
   lepZ2_eta_total__72->SetBinContent(1,1);
   lepZ2_eta_total__72->SetBinContent(2,1);
   lepZ2_eta_total__72->SetBinContent(3,1);
   lepZ2_eta_total__72->SetBinContent(4,1);
   lepZ2_eta_total__72->SetBinContent(5,1);
   lepZ2_eta_total__72->SetBinContent(6,1);
   lepZ2_eta_total__72->SetBinContent(7,1);
   lepZ2_eta_total__72->SetBinContent(8,1);
   lepZ2_eta_total__72->SetBinContent(9,1);
   lepZ2_eta_total__72->SetBinContent(10,1);
   lepZ2_eta_total__72->SetMinimum(0.5);
   lepZ2_eta_total__72->SetMaximum(2);
   lepZ2_eta_total__72->SetEntries(15162);

   ci = TColor::GetColor("#00cc00");
   lepZ2_eta_total__72->SetFillColor(ci);

   ci = TColor::GetColor("#6666ff");
   lepZ2_eta_total__72->SetMarkerColor(ci);
   lepZ2_eta_total__72->SetMarkerSize(1.1);
   lepZ2_eta_total__72->GetXaxis()->SetTitle("#eta(Z2 lep.)");
   lepZ2_eta_total__72->GetXaxis()->SetMoreLogLabels();
   lepZ2_eta_total__72->GetXaxis()->SetLabelFont(42);
   lepZ2_eta_total__72->GetXaxis()->SetLabelOffset(0.015);
   lepZ2_eta_total__72->GetXaxis()->SetLabelSize(0.1);
   lepZ2_eta_total__72->GetXaxis()->SetTitleSize(0.14);
   lepZ2_eta_total__72->GetXaxis()->SetTitleFont(42);
   lepZ2_eta_total__72->GetYaxis()->SetTitle("Data/pred.");
   lepZ2_eta_total__72->GetYaxis()->SetDecimals();
   lepZ2_eta_total__72->GetYaxis()->SetNdivisions(505);
   lepZ2_eta_total__72->GetYaxis()->SetLabelFont(42);
   lepZ2_eta_total__72->GetYaxis()->SetLabelOffset(0.01);
   lepZ2_eta_total__72->GetYaxis()->SetLabelSize(0.11);
   lepZ2_eta_total__72->GetYaxis()->SetTitleSize(0.14);
   lepZ2_eta_total__72->GetYaxis()->SetTitleOffset(0.62);
   lepZ2_eta_total__72->GetYaxis()->SetTitleFont(42);
   lepZ2_eta_total__72->GetZaxis()->SetLabelFont(42);
   lepZ2_eta_total__72->GetZaxis()->SetLabelOffset(0.007);
   lepZ2_eta_total__72->GetZaxis()->SetLabelSize(0.05);
   lepZ2_eta_total__72->GetZaxis()->SetTitleSize(0.06);
   lepZ2_eta_total__72->GetZaxis()->SetTitleFont(42);
   lepZ2_eta_total__72->Draw("AXIS SAME");
   TLine *line = new TLine(-2.5,1,2.5,1);
   line->SetLineColor(58);
   line->SetLineWidth(2);
   line->Draw();
   
   Double_t data_div_fx3090[10] = {
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
   Double_t data_div_fy3090[10] = {
   0.9970852,
   1.19111,
   1.142782,
   0.9802371,
   1.070516,
   0.9414203,
   0.883955,
   0.9574507,
   1.090252,
   0.895035};
   Double_t data_div_felx3090[10] = {
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
   Double_t data_div_fely3090[10] = {
   0.1164344,
   0.09880418,
   0.08808159,
   0.07239648,
   0.07147493,
   0.06788339,
   0.0656445,
   0.07732225,
   0.09337525,
   0.1171863};
   Double_t data_div_fehx3090[10] = {
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
   Double_t data_div_fehy3090[10] = {
   0.1308947,
   0.1073607,
   0.09514694,
   0.07795146,
   0.07641407,
   0.072964,
   0.07071019,
   0.08383371,
   0.1017364,
   0.133634};
   grae = new TGraphAsymmErrors(10,data_div_fx3090,data_div_fy3090,data_div_felx3090,data_div_fehx3090,data_div_fely3090,data_div_fehy3090);
   grae->SetName("data_div");
   grae->SetTitle("Graph");
   grae->SetFillStyle(1000);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.1);
   
   TH1F *Graph_lepZ2_eta_data_graph3090 = new TH1F("Graph_lepZ2_eta_data_graph3090","Graph",100,-3,3);
   Graph_lepZ2_eta_data_graph3090->SetMinimum(31.44778);
   Graph_lepZ2_eta_data_graph3090->SetMaximum(258.9476);
   Graph_lepZ2_eta_data_graph3090->SetDirectory(0);
   Graph_lepZ2_eta_data_graph3090->SetStats(0);
   Graph_lepZ2_eta_data_graph3090->SetLineStyle(0);
   Graph_lepZ2_eta_data_graph3090->SetMarkerStyle(20);
   Graph_lepZ2_eta_data_graph3090->GetXaxis()->SetLabelFont(42);
   Graph_lepZ2_eta_data_graph3090->GetXaxis()->SetLabelOffset(0.007);
   Graph_lepZ2_eta_data_graph3090->GetXaxis()->SetLabelSize(0.05);
   Graph_lepZ2_eta_data_graph3090->GetXaxis()->SetTitleSize(0.06);
   Graph_lepZ2_eta_data_graph3090->GetXaxis()->SetTitleOffset(0.9);
   Graph_lepZ2_eta_data_graph3090->GetXaxis()->SetTitleFont(42);
   Graph_lepZ2_eta_data_graph3090->GetYaxis()->SetLabelFont(42);
   Graph_lepZ2_eta_data_graph3090->GetYaxis()->SetLabelOffset(0.007);
   Graph_lepZ2_eta_data_graph3090->GetYaxis()->SetLabelSize(0.05);
   Graph_lepZ2_eta_data_graph3090->GetYaxis()->SetTitleSize(0.06);
   Graph_lepZ2_eta_data_graph3090->GetYaxis()->SetTitleOffset(1.35);
   Graph_lepZ2_eta_data_graph3090->GetYaxis()->SetTitleFont(42);
   Graph_lepZ2_eta_data_graph3090->GetZaxis()->SetLabelFont(42);
   Graph_lepZ2_eta_data_graph3090->GetZaxis()->SetLabelOffset(0.007);
   Graph_lepZ2_eta_data_graph3090->GetZaxis()->SetLabelSize(0.05);
   Graph_lepZ2_eta_data_graph3090->GetZaxis()->SetTitleSize(0.06);
   Graph_lepZ2_eta_data_graph3090->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_lepZ2_eta_data_graph3090);
   
   grae->Draw("pz ");
   
   leg = new TLegend(0,0,0,0,NULL,"brNDC");
   leg->SetBorderSize(1);
   leg->SetTextSize(0.084);
   leg->SetLineColor(0);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   entry=leg->AddEntry("lepZ2_eta_total_errors","stat. unc.","F");
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
   entry=leg->AddEntry("lepZ2_eta_total_errors","total unc.","F");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   leg->Draw();
   pad2->Modified();
   lepZ2_eta_canvas->cd();
   lepZ2_eta_canvas->Modified();
   lepZ2_eta_canvas->cd();
   lepZ2_eta_canvas->SetSelected(lepZ2_eta_canvas);
}
