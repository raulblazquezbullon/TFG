void lepZ2_phi()
{
//=========Macro generated from canvas: lepZ2_phi_canvas/lepZ2_phi
//=========  (Thu Dec 15 18:27:26 2022) by ROOT version 6.12/07
   TCanvas *lepZ2_phi_canvas = new TCanvas("lepZ2_phi_canvas", "lepZ2_phi",0,0,600,750);
   gStyle->SetOptFit(1);
   gStyle->SetOptStat(0);
   gStyle->SetOptTitle(0);
   lepZ2_phi_canvas->SetHighLightColor(2);
   lepZ2_phi_canvas->Range(0,0,1,1);
   lepZ2_phi_canvas->SetFillColor(0);
   lepZ2_phi_canvas->SetBorderMode(0);
   lepZ2_phi_canvas->SetBorderSize(2);
   lepZ2_phi_canvas->SetTickx(1);
   lepZ2_phi_canvas->SetTicky(1);
   lepZ2_phi_canvas->SetLeftMargin(0.18);
   lepZ2_phi_canvas->SetRightMargin(0.04);
   lepZ2_phi_canvas->SetBottomMargin(0.13);
   lepZ2_phi_canvas->SetFrameFillStyle(0);
   lepZ2_phi_canvas->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: pad1
   TPad *pad1 = new TPad("pad1", "pad1",0,0.3,1,1);
   pad1->Draw();
   pad1->cd();
   pad1->Range(-4.603846,-6.911295,3.473077,269.5405);
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
   
   TH1D *lepZ2_phi_total__81 = new TH1D("lepZ2_phi_total__81","dummy",10,-3.15,3.15);
   lepZ2_phi_total__81->SetBinContent(1,151.7665);
   lepZ2_phi_total__81->SetBinContent(2,155.0842);
   lepZ2_phi_total__81->SetBinContent(3,147.3877);
   lepZ2_phi_total__81->SetBinContent(4,149.495);
   lepZ2_phi_total__81->SetBinContent(5,150.2813);
   lepZ2_phi_total__81->SetBinContent(6,152.7575);
   lepZ2_phi_total__81->SetBinContent(7,152.8937);
   lepZ2_phi_total__81->SetBinContent(8,152.2759);
   lepZ2_phi_total__81->SetBinContent(9,141.2268);
   lepZ2_phi_total__81->SetBinContent(10,142.7758);
   lepZ2_phi_total__81->SetBinError(1,5.309855);
   lepZ2_phi_total__81->SetBinError(2,6.081769);
   lepZ2_phi_total__81->SetBinError(3,5.533856);
   lepZ2_phi_total__81->SetBinError(4,6.262542);
   lepZ2_phi_total__81->SetBinError(5,5.573672);
   lepZ2_phi_total__81->SetBinError(6,5.60366);
   lepZ2_phi_total__81->SetBinError(7,6.070816);
   lepZ2_phi_total__81->SetBinError(8,5.816222);
   lepZ2_phi_total__81->SetBinError(9,4.964647);
   lepZ2_phi_total__81->SetBinError(10,6.208296);
   lepZ2_phi_total__81->SetMinimum(0);
   lepZ2_phi_total__81->SetMaximum(252.9534);
   lepZ2_phi_total__81->SetEntries(15152);
   lepZ2_phi_total__81->SetDirectory(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#00cc00");
   lepZ2_phi_total__81->SetFillColor(ci);
   lepZ2_phi_total__81->SetMarkerStyle(20);
   lepZ2_phi_total__81->SetMarkerSize(1.1);
   lepZ2_phi_total__81->GetXaxis()->SetTitle("#phi(Z2 lep.)");
   lepZ2_phi_total__81->GetXaxis()->SetMoreLogLabels();
   lepZ2_phi_total__81->GetXaxis()->SetLabelFont(42);
   lepZ2_phi_total__81->GetXaxis()->SetLabelOffset(999);
   lepZ2_phi_total__81->GetXaxis()->SetLabelSize(0.05);
   lepZ2_phi_total__81->GetXaxis()->SetTitleSize(0.05);
   lepZ2_phi_total__81->GetXaxis()->SetTitleOffset(999);
   lepZ2_phi_total__81->GetXaxis()->SetTitleFont(42);
   lepZ2_phi_total__81->GetYaxis()->SetTitle("Leptons");
   lepZ2_phi_total__81->GetYaxis()->SetLabelFont(42);
   lepZ2_phi_total__81->GetYaxis()->SetLabelOffset(0.007);
   lepZ2_phi_total__81->GetYaxis()->SetLabelSize(0.05);
   lepZ2_phi_total__81->GetYaxis()->SetTitleSize(0.06);
   lepZ2_phi_total__81->GetYaxis()->SetTitleOffset(1.48);
   lepZ2_phi_total__81->GetYaxis()->SetTitleFont(42);
   lepZ2_phi_total__81->GetZaxis()->SetLabelFont(42);
   lepZ2_phi_total__81->GetZaxis()->SetLabelOffset(0.007);
   lepZ2_phi_total__81->GetZaxis()->SetLabelSize(0.05);
   lepZ2_phi_total__81->GetZaxis()->SetTitleSize(0.06);
   lepZ2_phi_total__81->GetZaxis()->SetTitleFont(42);
   lepZ2_phi_total__81->Draw("HIST");
   
   THStack *lepZ2_phi_stack = new THStack();
   lepZ2_phi_stack->SetName("lepZ2_phi_stack");
   lepZ2_phi_stack->SetTitle("lepZ2_phi");
   
   TH1F *lepZ2_phi_stack_stack_21 = new TH1F("lepZ2_phi_stack_stack_21","lepZ2_phi",10,-3.15,3.15);
   lepZ2_phi_stack_stack_21->SetMinimum(0);
   lepZ2_phi_stack_stack_21->SetMaximum(162.8384);
   lepZ2_phi_stack_stack_21->SetDirectory(0);
   lepZ2_phi_stack_stack_21->SetStats(0);
   lepZ2_phi_stack_stack_21->SetLineStyle(0);
   lepZ2_phi_stack_stack_21->SetMarkerStyle(20);
   lepZ2_phi_stack_stack_21->GetXaxis()->SetLabelFont(42);
   lepZ2_phi_stack_stack_21->GetXaxis()->SetLabelOffset(0.007);
   lepZ2_phi_stack_stack_21->GetXaxis()->SetLabelSize(0.05);
   lepZ2_phi_stack_stack_21->GetXaxis()->SetTitleSize(0.06);
   lepZ2_phi_stack_stack_21->GetXaxis()->SetTitleOffset(0.9);
   lepZ2_phi_stack_stack_21->GetXaxis()->SetTitleFont(42);
   lepZ2_phi_stack_stack_21->GetYaxis()->SetLabelFont(42);
   lepZ2_phi_stack_stack_21->GetYaxis()->SetLabelOffset(0.007);
   lepZ2_phi_stack_stack_21->GetYaxis()->SetLabelSize(0.05);
   lepZ2_phi_stack_stack_21->GetYaxis()->SetTitleSize(0.06);
   lepZ2_phi_stack_stack_21->GetYaxis()->SetTitleOffset(1.35);
   lepZ2_phi_stack_stack_21->GetYaxis()->SetTitleFont(42);
   lepZ2_phi_stack_stack_21->GetZaxis()->SetLabelFont(42);
   lepZ2_phi_stack_stack_21->GetZaxis()->SetLabelOffset(0.007);
   lepZ2_phi_stack_stack_21->GetZaxis()->SetLabelSize(0.05);
   lepZ2_phi_stack_stack_21->GetZaxis()->SetTitleSize(0.06);
   lepZ2_phi_stack_stack_21->GetZaxis()->SetTitleFont(42);
   lepZ2_phi_stack->SetHistogram(lepZ2_phi_stack_stack_21);
   
   
   TH1D *lepZ2_phi_fakes_VV_stack_1 = new TH1D("lepZ2_phi_fakes_VV_stack_1","dummy",10,-3.15,3.15);
   lepZ2_phi_fakes_VV_stack_1->SetBinContent(2,0.09719337);
   lepZ2_phi_fakes_VV_stack_1->SetBinContent(3,0.1943867);
   lepZ2_phi_fakes_VV_stack_1->SetBinContent(4,0.1943867);
   lepZ2_phi_fakes_VV_stack_1->SetBinContent(8,0.1943867);
   lepZ2_phi_fakes_VV_stack_1->SetBinError(2,0.09719337);
   lepZ2_phi_fakes_VV_stack_1->SetBinError(3,0.1374522);
   lepZ2_phi_fakes_VV_stack_1->SetBinError(4,0.1374522);
   lepZ2_phi_fakes_VV_stack_1->SetBinError(8,0.1374522);
   lepZ2_phi_fakes_VV_stack_1->SetEntries(11);

   ci = TColor::GetColor("#2e3294");
   lepZ2_phi_fakes_VV_stack_1->SetFillColor(ci);
   lepZ2_phi_fakes_VV_stack_1->SetMarkerStyle(0);
   lepZ2_phi_fakes_VV_stack_1->SetMarkerSize(1.1);
   lepZ2_phi_fakes_VV_stack_1->GetXaxis()->SetTitle("#phi(Z2 lep.)");
   lepZ2_phi_fakes_VV_stack_1->GetXaxis()->SetMoreLogLabels();
   lepZ2_phi_fakes_VV_stack_1->GetXaxis()->SetLabelFont(42);
   lepZ2_phi_fakes_VV_stack_1->GetXaxis()->SetLabelOffset(0.007);
   lepZ2_phi_fakes_VV_stack_1->GetXaxis()->SetLabelSize(0.05);
   lepZ2_phi_fakes_VV_stack_1->GetXaxis()->SetTitleSize(0.06);
   lepZ2_phi_fakes_VV_stack_1->GetXaxis()->SetTitleOffset(0.9);
   lepZ2_phi_fakes_VV_stack_1->GetXaxis()->SetTitleFont(42);
   lepZ2_phi_fakes_VV_stack_1->GetYaxis()->SetTitle("Leptons");
   lepZ2_phi_fakes_VV_stack_1->GetYaxis()->SetLabelFont(42);
   lepZ2_phi_fakes_VV_stack_1->GetYaxis()->SetLabelOffset(0.007);
   lepZ2_phi_fakes_VV_stack_1->GetYaxis()->SetLabelSize(0.05);
   lepZ2_phi_fakes_VV_stack_1->GetYaxis()->SetTitleSize(0.06);
   lepZ2_phi_fakes_VV_stack_1->GetYaxis()->SetTitleOffset(1.35);
   lepZ2_phi_fakes_VV_stack_1->GetYaxis()->SetTitleFont(42);
   lepZ2_phi_fakes_VV_stack_1->GetZaxis()->SetLabelFont(42);
   lepZ2_phi_fakes_VV_stack_1->GetZaxis()->SetLabelOffset(0.007);
   lepZ2_phi_fakes_VV_stack_1->GetZaxis()->SetLabelSize(0.05);
   lepZ2_phi_fakes_VV_stack_1->GetZaxis()->SetTitleSize(0.06);
   lepZ2_phi_fakes_VV_stack_1->GetZaxis()->SetTitleFont(42);
   lepZ2_phi_stack->Add(lepZ2_phi_fakes_VV_stack_1,"");
   
   TH1D *lepZ2_phi_fakes_TT_stack_2 = new TH1D("lepZ2_phi_fakes_TT_stack_2","dummy",10,-3.15,3.15);
   lepZ2_phi_fakes_TT_stack_2->SetBinContent(1,6.320925);
   lepZ2_phi_fakes_TT_stack_2->SetBinContent(2,5.18655);
   lepZ2_phi_fakes_TT_stack_2->SetBinContent(3,5.452526);
   lepZ2_phi_fakes_TT_stack_2->SetBinContent(4,5.386032);
   lepZ2_phi_fakes_TT_stack_2->SetBinContent(5,4.987067);
   lepZ2_phi_fakes_TT_stack_2->SetBinContent(6,6.628582);
   lepZ2_phi_fakes_TT_stack_2->SetBinContent(7,5.16571);
   lepZ2_phi_fakes_TT_stack_2->SetBinContent(8,4.920573);
   lepZ2_phi_fakes_TT_stack_2->SetBinContent(9,5.431686);
   lepZ2_phi_fakes_TT_stack_2->SetBinContent(10,5.564675);
   lepZ2_phi_fakes_TT_stack_2->SetBinError(1,0.6600494);
   lepZ2_phi_fakes_TT_stack_2->SetBinError(2,0.5947424);
   lepZ2_phi_fakes_TT_stack_2->SetBinError(3,0.6021308);
   lepZ2_phi_fakes_TT_stack_2->SetBinError(4,0.598448);
   lepZ2_phi_fakes_TT_stack_2->SetBinError(5,0.5758569);
   lepZ2_phi_fakes_TT_stack_2->SetBinError(6,0.6743333);
   lepZ2_phi_fakes_TT_stack_2->SetBinError(7,0.6052238);
   lepZ2_phi_fakes_TT_stack_2->SetBinError(8,0.5720049);
   lepZ2_phi_fakes_TT_stack_2->SetBinError(9,0.6124857);
   lepZ2_phi_fakes_TT_stack_2->SetBinError(10,0.6124857);
   lepZ2_phi_fakes_TT_stack_2->SetEntries(841);

   ci = TColor::GetColor("#666666");
   lepZ2_phi_fakes_TT_stack_2->SetFillColor(ci);
   lepZ2_phi_fakes_TT_stack_2->SetMarkerStyle(0);
   lepZ2_phi_fakes_TT_stack_2->SetMarkerSize(1.1);
   lepZ2_phi_fakes_TT_stack_2->GetXaxis()->SetTitle("#phi(Z2 lep.)");
   lepZ2_phi_fakes_TT_stack_2->GetXaxis()->SetMoreLogLabels();
   lepZ2_phi_fakes_TT_stack_2->GetXaxis()->SetLabelFont(42);
   lepZ2_phi_fakes_TT_stack_2->GetXaxis()->SetLabelOffset(0.007);
   lepZ2_phi_fakes_TT_stack_2->GetXaxis()->SetLabelSize(0.05);
   lepZ2_phi_fakes_TT_stack_2->GetXaxis()->SetTitleSize(0.06);
   lepZ2_phi_fakes_TT_stack_2->GetXaxis()->SetTitleOffset(0.9);
   lepZ2_phi_fakes_TT_stack_2->GetXaxis()->SetTitleFont(42);
   lepZ2_phi_fakes_TT_stack_2->GetYaxis()->SetTitle("Leptons");
   lepZ2_phi_fakes_TT_stack_2->GetYaxis()->SetLabelFont(42);
   lepZ2_phi_fakes_TT_stack_2->GetYaxis()->SetLabelOffset(0.007);
   lepZ2_phi_fakes_TT_stack_2->GetYaxis()->SetLabelSize(0.05);
   lepZ2_phi_fakes_TT_stack_2->GetYaxis()->SetTitleSize(0.06);
   lepZ2_phi_fakes_TT_stack_2->GetYaxis()->SetTitleOffset(1.35);
   lepZ2_phi_fakes_TT_stack_2->GetYaxis()->SetTitleFont(42);
   lepZ2_phi_fakes_TT_stack_2->GetZaxis()->SetLabelFont(42);
   lepZ2_phi_fakes_TT_stack_2->GetZaxis()->SetLabelOffset(0.007);
   lepZ2_phi_fakes_TT_stack_2->GetZaxis()->SetLabelSize(0.05);
   lepZ2_phi_fakes_TT_stack_2->GetZaxis()->SetTitleSize(0.06);
   lepZ2_phi_fakes_TT_stack_2->GetZaxis()->SetTitleFont(42);
   lepZ2_phi_stack->Add(lepZ2_phi_fakes_TT_stack_2,"");
   
   TH1D *lepZ2_phi_fakes_DY_stack_3 = new TH1D("lepZ2_phi_fakes_DY_stack_3","dummy",10,-3.15,3.15);
   lepZ2_phi_fakes_DY_stack_3->SetBinContent(1,8.597611);
   lepZ2_phi_fakes_DY_stack_3->SetBinContent(2,13.75618);
   lepZ2_phi_fakes_DY_stack_3->SetBinContent(3,10.31713);
   lepZ2_phi_fakes_DY_stack_3->SetBinContent(4,15.4757);
   lepZ2_phi_fakes_DY_stack_3->SetBinContent(5,10.31713);
   lepZ2_phi_fakes_DY_stack_3->SetBinContent(6,10.31713);
   lepZ2_phi_fakes_DY_stack_3->SetBinContent(7,13.75618);
   lepZ2_phi_fakes_DY_stack_3->SetBinContent(8,12.03665);
   lepZ2_phi_fakes_DY_stack_3->SetBinContent(9,6.878088);
   lepZ2_phi_fakes_DY_stack_3->SetBinContent(10,15.4757);
   lepZ2_phi_fakes_DY_stack_3->SetBinError(1,3.844968);
   lepZ2_phi_fakes_DY_stack_3->SetBinError(2,4.863543);
   lepZ2_phi_fakes_DY_stack_3->SetBinError(3,4.211952);
   lepZ2_phi_fakes_DY_stack_3->SetBinError(4,5.158566);
   lepZ2_phi_fakes_DY_stack_3->SetBinError(5,4.211952);
   lepZ2_phi_fakes_DY_stack_3->SetBinError(6,4.211952);
   lepZ2_phi_fakes_DY_stack_3->SetBinError(7,4.863543);
   lepZ2_phi_fakes_DY_stack_3->SetBinError(8,4.549428);
   lepZ2_phi_fakes_DY_stack_3->SetBinError(9,3.439044);
   lepZ2_phi_fakes_DY_stack_3->SetBinError(10,5.158566);
   lepZ2_phi_fakes_DY_stack_3->SetEntries(72);

   ci = TColor::GetColor("#cccccc");
   lepZ2_phi_fakes_DY_stack_3->SetFillColor(ci);
   lepZ2_phi_fakes_DY_stack_3->SetMarkerStyle(0);
   lepZ2_phi_fakes_DY_stack_3->SetMarkerSize(1.1);
   lepZ2_phi_fakes_DY_stack_3->GetXaxis()->SetTitle("#phi(Z2 lep.)");
   lepZ2_phi_fakes_DY_stack_3->GetXaxis()->SetMoreLogLabels();
   lepZ2_phi_fakes_DY_stack_3->GetXaxis()->SetLabelFont(42);
   lepZ2_phi_fakes_DY_stack_3->GetXaxis()->SetLabelOffset(0.007);
   lepZ2_phi_fakes_DY_stack_3->GetXaxis()->SetLabelSize(0.05);
   lepZ2_phi_fakes_DY_stack_3->GetXaxis()->SetTitleSize(0.06);
   lepZ2_phi_fakes_DY_stack_3->GetXaxis()->SetTitleOffset(0.9);
   lepZ2_phi_fakes_DY_stack_3->GetXaxis()->SetTitleFont(42);
   lepZ2_phi_fakes_DY_stack_3->GetYaxis()->SetTitle("Leptons");
   lepZ2_phi_fakes_DY_stack_3->GetYaxis()->SetLabelFont(42);
   lepZ2_phi_fakes_DY_stack_3->GetYaxis()->SetLabelOffset(0.007);
   lepZ2_phi_fakes_DY_stack_3->GetYaxis()->SetLabelSize(0.05);
   lepZ2_phi_fakes_DY_stack_3->GetYaxis()->SetTitleSize(0.06);
   lepZ2_phi_fakes_DY_stack_3->GetYaxis()->SetTitleOffset(1.35);
   lepZ2_phi_fakes_DY_stack_3->GetYaxis()->SetTitleFont(42);
   lepZ2_phi_fakes_DY_stack_3->GetZaxis()->SetLabelFont(42);
   lepZ2_phi_fakes_DY_stack_3->GetZaxis()->SetLabelOffset(0.007);
   lepZ2_phi_fakes_DY_stack_3->GetZaxis()->SetLabelSize(0.05);
   lepZ2_phi_fakes_DY_stack_3->GetZaxis()->SetTitleSize(0.06);
   lepZ2_phi_fakes_DY_stack_3->GetZaxis()->SetTitleFont(42);
   lepZ2_phi_stack->Add(lepZ2_phi_fakes_DY_stack_3,"");
   
   TH1D *lepZ2_phi_prompt_ZZ_stack_4 = new TH1D("lepZ2_phi_prompt_ZZ_stack_4","dummy",10,-3.15,3.15);
   lepZ2_phi_prompt_ZZ_stack_4->SetBinContent(1,6.421989);
   lepZ2_phi_prompt_ZZ_stack_4->SetBinContent(2,7.155931);
   lepZ2_phi_prompt_ZZ_stack_4->SetBinContent(3,6.605475);
   lepZ2_phi_prompt_ZZ_stack_4->SetBinContent(4,6.605475);
   lepZ2_phi_prompt_ZZ_stack_4->SetBinContent(5,8.440329);
   lepZ2_phi_prompt_ZZ_stack_4->SetBinContent(6,9.908212);
   lepZ2_phi_prompt_ZZ_stack_4->SetBinContent(7,7.706387);
   lepZ2_phi_prompt_ZZ_stack_4->SetBinContent(8,6.055019);
   lepZ2_phi_prompt_ZZ_stack_4->SetBinContent(9,8.440329);
   lepZ2_phi_prompt_ZZ_stack_4->SetBinContent(10,5.871533);
   lepZ2_phi_prompt_ZZ_stack_4->SetBinError(1,1.085514);
   lepZ2_phi_prompt_ZZ_stack_4->SetBinError(2,1.145866);
   lepZ2_phi_prompt_ZZ_stack_4->SetBinError(3,1.100912);
   lepZ2_phi_prompt_ZZ_stack_4->SetBinError(4,1.100912);
   lepZ2_phi_prompt_ZZ_stack_4->SetBinError(5,1.244459);
   lepZ2_phi_prompt_ZZ_stack_4->SetBinError(6,1.348337);
   lepZ2_phi_prompt_ZZ_stack_4->SetBinError(7,1.189121);
   lepZ2_phi_prompt_ZZ_stack_4->SetBinError(8,1.054043);
   lepZ2_phi_prompt_ZZ_stack_4->SetBinError(9,1.244459);
   lepZ2_phi_prompt_ZZ_stack_4->SetBinError(10,1.03795);
   lepZ2_phi_prompt_ZZ_stack_4->SetEntries(403);

   ci = TColor::GetColor("#00cc00");
   lepZ2_phi_prompt_ZZ_stack_4->SetFillColor(ci);
   lepZ2_phi_prompt_ZZ_stack_4->SetMarkerStyle(0);
   lepZ2_phi_prompt_ZZ_stack_4->SetMarkerSize(1.1);
   lepZ2_phi_prompt_ZZ_stack_4->GetXaxis()->SetTitle("#phi(Z2 lep.)");
   lepZ2_phi_prompt_ZZ_stack_4->GetXaxis()->SetMoreLogLabels();
   lepZ2_phi_prompt_ZZ_stack_4->GetXaxis()->SetLabelFont(42);
   lepZ2_phi_prompt_ZZ_stack_4->GetXaxis()->SetLabelOffset(0.007);
   lepZ2_phi_prompt_ZZ_stack_4->GetXaxis()->SetLabelSize(0.05);
   lepZ2_phi_prompt_ZZ_stack_4->GetXaxis()->SetTitleSize(0.06);
   lepZ2_phi_prompt_ZZ_stack_4->GetXaxis()->SetTitleOffset(0.9);
   lepZ2_phi_prompt_ZZ_stack_4->GetXaxis()->SetTitleFont(42);
   lepZ2_phi_prompt_ZZ_stack_4->GetYaxis()->SetTitle("Leptons");
   lepZ2_phi_prompt_ZZ_stack_4->GetYaxis()->SetLabelFont(42);
   lepZ2_phi_prompt_ZZ_stack_4->GetYaxis()->SetLabelOffset(0.007);
   lepZ2_phi_prompt_ZZ_stack_4->GetYaxis()->SetLabelSize(0.05);
   lepZ2_phi_prompt_ZZ_stack_4->GetYaxis()->SetTitleSize(0.06);
   lepZ2_phi_prompt_ZZ_stack_4->GetYaxis()->SetTitleOffset(1.35);
   lepZ2_phi_prompt_ZZ_stack_4->GetYaxis()->SetTitleFont(42);
   lepZ2_phi_prompt_ZZ_stack_4->GetZaxis()->SetLabelFont(42);
   lepZ2_phi_prompt_ZZ_stack_4->GetZaxis()->SetLabelOffset(0.007);
   lepZ2_phi_prompt_ZZ_stack_4->GetZaxis()->SetLabelSize(0.05);
   lepZ2_phi_prompt_ZZ_stack_4->GetZaxis()->SetTitleSize(0.06);
   lepZ2_phi_prompt_ZZ_stack_4->GetZaxis()->SetTitleFont(42);
   lepZ2_phi_stack->Add(lepZ2_phi_prompt_ZZ_stack_4,"");
   
   TH1D *lepZ2_phi_prompt_WZ_stack_5 = new TH1D("lepZ2_phi_prompt_WZ_stack_5","dummy",10,-3.15,3.15);
   lepZ2_phi_prompt_WZ_stack_5->SetBinContent(1,130.426);
   lepZ2_phi_prompt_WZ_stack_5->SetBinContent(2,128.8884);
   lepZ2_phi_prompt_WZ_stack_5->SetBinContent(3,124.8182);
   lepZ2_phi_prompt_WZ_stack_5->SetBinContent(4,121.8334);
   lepZ2_phi_prompt_WZ_stack_5->SetBinContent(5,126.5367);
   lepZ2_phi_prompt_WZ_stack_5->SetBinContent(6,125.9036);
   lepZ2_phi_prompt_WZ_stack_5->SetBinContent(7,126.2654);
   lepZ2_phi_prompt_WZ_stack_5->SetBinContent(8,129.0693);
   lepZ2_phi_prompt_WZ_stack_5->SetBinContent(9,120.4767);
   lepZ2_phi_prompt_WZ_stack_5->SetBinContent(10,115.8639);
   lepZ2_phi_prompt_WZ_stack_5->SetBinError(1,3.434643);
   lepZ2_phi_prompt_WZ_stack_5->SetBinError(2,3.414337);
   lepZ2_phi_prompt_WZ_stack_5->SetBinError(3,3.359994);
   lepZ2_phi_prompt_WZ_stack_5->SetBinError(4,3.319577);
   lepZ2_phi_prompt_WZ_stack_5->SetBinError(5,3.383045);
   lepZ2_phi_prompt_WZ_stack_5->SetBinError(6,3.374571);
   lepZ2_phi_prompt_WZ_stack_5->SetBinError(7,3.379416);
   lepZ2_phi_prompt_WZ_stack_5->SetBinError(8,3.416732);
   lepZ2_phi_prompt_WZ_stack_5->SetBinError(9,3.301042);
   lepZ2_phi_prompt_WZ_stack_5->SetBinError(10,3.237229);
   lepZ2_phi_prompt_WZ_stack_5->SetEntries(13825);

   ci = TColor::GetColor("#ffcc00");
   lepZ2_phi_prompt_WZ_stack_5->SetFillColor(ci);
   lepZ2_phi_prompt_WZ_stack_5->SetMarkerStyle(0);
   lepZ2_phi_prompt_WZ_stack_5->SetMarkerSize(1.1);
   lepZ2_phi_prompt_WZ_stack_5->GetXaxis()->SetTitle("#phi(Z2 lep.)");
   lepZ2_phi_prompt_WZ_stack_5->GetXaxis()->SetMoreLogLabels();
   lepZ2_phi_prompt_WZ_stack_5->GetXaxis()->SetLabelFont(42);
   lepZ2_phi_prompt_WZ_stack_5->GetXaxis()->SetLabelOffset(0.007);
   lepZ2_phi_prompt_WZ_stack_5->GetXaxis()->SetLabelSize(0.05);
   lepZ2_phi_prompt_WZ_stack_5->GetXaxis()->SetTitleSize(0.06);
   lepZ2_phi_prompt_WZ_stack_5->GetXaxis()->SetTitleOffset(0.9);
   lepZ2_phi_prompt_WZ_stack_5->GetXaxis()->SetTitleFont(42);
   lepZ2_phi_prompt_WZ_stack_5->GetYaxis()->SetTitle("Leptons");
   lepZ2_phi_prompt_WZ_stack_5->GetYaxis()->SetLabelFont(42);
   lepZ2_phi_prompt_WZ_stack_5->GetYaxis()->SetLabelOffset(0.007);
   lepZ2_phi_prompt_WZ_stack_5->GetYaxis()->SetLabelSize(0.05);
   lepZ2_phi_prompt_WZ_stack_5->GetYaxis()->SetTitleSize(0.06);
   lepZ2_phi_prompt_WZ_stack_5->GetYaxis()->SetTitleOffset(1.35);
   lepZ2_phi_prompt_WZ_stack_5->GetYaxis()->SetTitleFont(42);
   lepZ2_phi_prompt_WZ_stack_5->GetZaxis()->SetLabelFont(42);
   lepZ2_phi_prompt_WZ_stack_5->GetZaxis()->SetLabelOffset(0.007);
   lepZ2_phi_prompt_WZ_stack_5->GetZaxis()->SetLabelSize(0.05);
   lepZ2_phi_prompt_WZ_stack_5->GetZaxis()->SetTitleSize(0.06);
   lepZ2_phi_prompt_WZ_stack_5->GetZaxis()->SetTitleFont(42);
   lepZ2_phi_stack->Add(lepZ2_phi_prompt_WZ_stack_5,"");
   lepZ2_phi_stack->Draw("same hist");
   
   TH1D *lepZ2_phi_total__82 = new TH1D("lepZ2_phi_total__82","dummy",10,-3.15,3.15);
   lepZ2_phi_total__82->SetBinContent(1,151.7665);
   lepZ2_phi_total__82->SetBinContent(2,155.0842);
   lepZ2_phi_total__82->SetBinContent(3,147.3877);
   lepZ2_phi_total__82->SetBinContent(4,149.495);
   lepZ2_phi_total__82->SetBinContent(5,150.2813);
   lepZ2_phi_total__82->SetBinContent(6,152.7575);
   lepZ2_phi_total__82->SetBinContent(7,152.8937);
   lepZ2_phi_total__82->SetBinContent(8,152.2759);
   lepZ2_phi_total__82->SetBinContent(9,141.2268);
   lepZ2_phi_total__82->SetBinContent(10,142.7758);
   lepZ2_phi_total__82->SetBinError(1,5.309855);
   lepZ2_phi_total__82->SetBinError(2,6.081769);
   lepZ2_phi_total__82->SetBinError(3,5.533856);
   lepZ2_phi_total__82->SetBinError(4,6.262542);
   lepZ2_phi_total__82->SetBinError(5,5.573672);
   lepZ2_phi_total__82->SetBinError(6,5.60366);
   lepZ2_phi_total__82->SetBinError(7,6.070816);
   lepZ2_phi_total__82->SetBinError(8,5.816222);
   lepZ2_phi_total__82->SetBinError(9,4.964647);
   lepZ2_phi_total__82->SetBinError(10,6.208296);
   lepZ2_phi_total__82->SetMinimum(0);
   lepZ2_phi_total__82->SetMaximum(252.9534);
   lepZ2_phi_total__82->SetEntries(15152);
   lepZ2_phi_total__82->SetDirectory(0);

   ci = TColor::GetColor("#00cc00");
   lepZ2_phi_total__82->SetFillColor(ci);
   lepZ2_phi_total__82->SetMarkerStyle(20);
   lepZ2_phi_total__82->SetMarkerSize(1.1);
   lepZ2_phi_total__82->GetXaxis()->SetTitle("#phi(Z2 lep.)");
   lepZ2_phi_total__82->GetXaxis()->SetMoreLogLabels();
   lepZ2_phi_total__82->GetXaxis()->SetLabelFont(42);
   lepZ2_phi_total__82->GetXaxis()->SetLabelOffset(999);
   lepZ2_phi_total__82->GetXaxis()->SetLabelSize(0.05);
   lepZ2_phi_total__82->GetXaxis()->SetTitleSize(0.05);
   lepZ2_phi_total__82->GetXaxis()->SetTitleOffset(999);
   lepZ2_phi_total__82->GetXaxis()->SetTitleFont(42);
   lepZ2_phi_total__82->GetYaxis()->SetTitle("Leptons");
   lepZ2_phi_total__82->GetYaxis()->SetLabelFont(42);
   lepZ2_phi_total__82->GetYaxis()->SetLabelOffset(0.007);
   lepZ2_phi_total__82->GetYaxis()->SetLabelSize(0.05);
   lepZ2_phi_total__82->GetYaxis()->SetTitleSize(0.06);
   lepZ2_phi_total__82->GetYaxis()->SetTitleOffset(1.48);
   lepZ2_phi_total__82->GetYaxis()->SetTitleFont(42);
   lepZ2_phi_total__82->GetZaxis()->SetLabelFont(42);
   lepZ2_phi_total__82->GetZaxis()->SetLabelOffset(0.007);
   lepZ2_phi_total__82->GetZaxis()->SetLabelSize(0.05);
   lepZ2_phi_total__82->GetZaxis()->SetTitleSize(0.06);
   lepZ2_phi_total__82->GetZaxis()->SetTitleFont(42);
   lepZ2_phi_total__82->Draw("AXIS SAME");
   
   Double_t lepZ2_phi_total_errors_fx3101[10] = {
   -2.835,
   -2.205,
   -1.575,
   -0.945,
   -0.315,
   0.315,
   0.945,
   1.575,
   2.205,
   2.835};
   Double_t lepZ2_phi_total_errors_fy3101[10] = {
   151.7665,
   155.0842,
   147.3877,
   149.495,
   150.2813,
   152.7575,
   152.8937,
   152.2759,
   141.2268,
   142.7758};
   Double_t lepZ2_phi_total_errors_felx3101[10] = {
   0.315,
   0.315,
   0.315,
   0.315,
   0.315,
   0.315,
   0.315,
   0.315,
   0.315,
   0.315};
   Double_t lepZ2_phi_total_errors_fely3101[10] = {
   5.309855,
   6.081769,
   5.533856,
   6.262542,
   5.573672,
   5.60366,
   6.070816,
   5.816222,
   4.964647,
   6.208296};
   Double_t lepZ2_phi_total_errors_fehx3101[10] = {
   0.315,
   0.315,
   0.315,
   0.315,
   0.315,
   0.315,
   0.315,
   0.315,
   0.315,
   0.315};
   Double_t lepZ2_phi_total_errors_fehy3101[10] = {
   5.309855,
   6.081769,
   5.533856,
   6.262542,
   5.573672,
   5.60366,
   6.070816,
   5.816222,
   4.964647,
   6.208296};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(10,lepZ2_phi_total_errors_fx3101,lepZ2_phi_total_errors_fy3101,lepZ2_phi_total_errors_felx3101,lepZ2_phi_total_errors_fehx3101,lepZ2_phi_total_errors_fely3101,lepZ2_phi_total_errors_fehy3101);
   grae->SetName("lepZ2_phi_total_errors");
   grae->SetTitle("Graph");
   grae->SetFillColor(1);
   grae->SetFillStyle(3013);
   grae->SetMarkerStyle(0);
   
   TH1F *Graph_lepZ2_phi_total_errors3101 = new TH1F("Graph_lepZ2_phi_total_errors3101","Graph",100,-3.78,3.78);
   Graph_lepZ2_phi_total_errors3101->SetMinimum(133.7718);
   Graph_lepZ2_phi_total_errors3101->SetMaximum(163.6564);
   Graph_lepZ2_phi_total_errors3101->SetDirectory(0);
   Graph_lepZ2_phi_total_errors3101->SetStats(0);
   Graph_lepZ2_phi_total_errors3101->SetLineStyle(0);
   Graph_lepZ2_phi_total_errors3101->SetMarkerStyle(20);
   Graph_lepZ2_phi_total_errors3101->GetXaxis()->SetLabelFont(42);
   Graph_lepZ2_phi_total_errors3101->GetXaxis()->SetLabelOffset(0.007);
   Graph_lepZ2_phi_total_errors3101->GetXaxis()->SetLabelSize(0.05);
   Graph_lepZ2_phi_total_errors3101->GetXaxis()->SetTitleSize(0.06);
   Graph_lepZ2_phi_total_errors3101->GetXaxis()->SetTitleOffset(0.9);
   Graph_lepZ2_phi_total_errors3101->GetXaxis()->SetTitleFont(42);
   Graph_lepZ2_phi_total_errors3101->GetYaxis()->SetLabelFont(42);
   Graph_lepZ2_phi_total_errors3101->GetYaxis()->SetLabelOffset(0.007);
   Graph_lepZ2_phi_total_errors3101->GetYaxis()->SetLabelSize(0.05);
   Graph_lepZ2_phi_total_errors3101->GetYaxis()->SetTitleSize(0.06);
   Graph_lepZ2_phi_total_errors3101->GetYaxis()->SetTitleOffset(1.35);
   Graph_lepZ2_phi_total_errors3101->GetYaxis()->SetTitleFont(42);
   Graph_lepZ2_phi_total_errors3101->GetZaxis()->SetLabelFont(42);
   Graph_lepZ2_phi_total_errors3101->GetZaxis()->SetLabelOffset(0.007);
   Graph_lepZ2_phi_total_errors3101->GetZaxis()->SetLabelSize(0.05);
   Graph_lepZ2_phi_total_errors3101->GetZaxis()->SetTitleSize(0.06);
   Graph_lepZ2_phi_total_errors3101->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_lepZ2_phi_total_errors3101);
   
   grae->Draw("pe2 ");
   
   Double_t lepZ2_phi_data_graph_fx3102[10] = {
   -2.835,
   -2.205,
   -1.575,
   -0.945,
   -0.315,
   0.315,
   0.945,
   1.575,
   2.205,
   2.835};
   Double_t lepZ2_phi_data_graph_fy3102[10] = {
   148,
   151,
   153,
   176,
   139,
   147,
   154,
   143,
   140,
   162};
   Double_t lepZ2_phi_data_graph_felx3102[10] = {
   0.315,
   0.315,
   0.315,
   0.315,
   0.315,
   0.315,
   0.315,
   0.315,
   0.315,
   0.315};
   Double_t lepZ2_phi_data_graph_fely3102[10] = {
   12.15202,
   12.27484,
   12.35605,
   13.25417,
   11.77587,
   12.1108,
   12.39645,
   11.94451,
   11.81826,
   12.71504};
   Double_t lepZ2_phi_data_graph_fehx3102[10] = {
   0.315,
   0.315,
   0.315,
   0.315,
   0.315,
   0.315,
   0.315,
   0.315,
   0.315,
   0.315};
   Double_t lepZ2_phi_data_graph_fehy3102[10] = {
   13.19323,
   13.31564,
   13.39657,
   14.29195,
   12.8184,
   13.15215,
   13.43684,
   12.98643,
   12.86063,
   13.75443};
   grae = new TGraphAsymmErrors(10,lepZ2_phi_data_graph_fx3102,lepZ2_phi_data_graph_fy3102,lepZ2_phi_data_graph_felx3102,lepZ2_phi_data_graph_fehx3102,lepZ2_phi_data_graph_fely3102,lepZ2_phi_data_graph_fehy3102);
   grae->SetName("lepZ2_phi_data_graph");
   grae->SetTitle("Graph");
   grae->SetFillStyle(1000);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.1);
   
   TH1F *Graph_lepZ2_phi_data_graph3102 = new TH1F("Graph_lepZ2_phi_data_graph3102","Graph",100,-3.78,3.78);
   Graph_lepZ2_phi_data_graph3102->SetMinimum(120.9173);
   Graph_lepZ2_phi_data_graph3102->SetMaximum(196.5987);
   Graph_lepZ2_phi_data_graph3102->SetDirectory(0);
   Graph_lepZ2_phi_data_graph3102->SetStats(0);
   Graph_lepZ2_phi_data_graph3102->SetLineStyle(0);
   Graph_lepZ2_phi_data_graph3102->SetMarkerStyle(20);
   Graph_lepZ2_phi_data_graph3102->GetXaxis()->SetLabelFont(42);
   Graph_lepZ2_phi_data_graph3102->GetXaxis()->SetLabelOffset(0.007);
   Graph_lepZ2_phi_data_graph3102->GetXaxis()->SetLabelSize(0.05);
   Graph_lepZ2_phi_data_graph3102->GetXaxis()->SetTitleSize(0.06);
   Graph_lepZ2_phi_data_graph3102->GetXaxis()->SetTitleOffset(0.9);
   Graph_lepZ2_phi_data_graph3102->GetXaxis()->SetTitleFont(42);
   Graph_lepZ2_phi_data_graph3102->GetYaxis()->SetLabelFont(42);
   Graph_lepZ2_phi_data_graph3102->GetYaxis()->SetLabelOffset(0.007);
   Graph_lepZ2_phi_data_graph3102->GetYaxis()->SetLabelSize(0.05);
   Graph_lepZ2_phi_data_graph3102->GetYaxis()->SetTitleSize(0.06);
   Graph_lepZ2_phi_data_graph3102->GetYaxis()->SetTitleOffset(1.35);
   Graph_lepZ2_phi_data_graph3102->GetYaxis()->SetTitleFont(42);
   Graph_lepZ2_phi_data_graph3102->GetZaxis()->SetLabelFont(42);
   Graph_lepZ2_phi_data_graph3102->GetZaxis()->SetLabelOffset(0.007);
   Graph_lepZ2_phi_data_graph3102->GetZaxis()->SetLabelSize(0.05);
   Graph_lepZ2_phi_data_graph3102->GetZaxis()->SetTitleSize(0.06);
   Graph_lepZ2_phi_data_graph3102->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_lepZ2_phi_data_graph3102);
   
   grae->Draw("pz ");
   
   TLegend *leg = new TLegend(0.62,0.628,0.9,0.91,NULL,"brNDC");
   leg->SetBorderSize(1);
   leg->SetTextSize(0.036);
   leg->SetLineColor(0);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("lepZ2_phi_data","Data","LPE");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1.1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("lepZ2_phi_prompt_WZ_stack_5","WZ","F");

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
   entry=leg->AddEntry("lepZ2_phi_prompt_ZZ_stack_4","qqZZ","F");

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
   entry=leg->AddEntry("lepZ2_phi_fakes_DY_stack_3","Fakes DY","F");

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
   entry=leg->AddEntry("lepZ2_phi_fakes_TT_stack_2","Fakes TT","F");

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
   entry=leg->AddEntry("lepZ2_phi_total_errors","Total unc.","F");
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
   lepZ2_phi_canvas->cd();
  
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
   
   TH1D *lepZ2_phi_total__83 = new TH1D("lepZ2_phi_total__83","dummy",10,-3.15,3.15);
   lepZ2_phi_total__83->SetBinContent(1,1);
   lepZ2_phi_total__83->SetBinContent(2,1);
   lepZ2_phi_total__83->SetBinContent(3,1);
   lepZ2_phi_total__83->SetBinContent(4,1);
   lepZ2_phi_total__83->SetBinContent(5,1);
   lepZ2_phi_total__83->SetBinContent(6,1);
   lepZ2_phi_total__83->SetBinContent(7,1);
   lepZ2_phi_total__83->SetBinContent(8,1);
   lepZ2_phi_total__83->SetBinContent(9,1);
   lepZ2_phi_total__83->SetBinContent(10,1);
   lepZ2_phi_total__83->SetMinimum(0.5);
   lepZ2_phi_total__83->SetMaximum(2);
   lepZ2_phi_total__83->SetEntries(15162);

   ci = TColor::GetColor("#00cc00");
   lepZ2_phi_total__83->SetFillColor(ci);

   ci = TColor::GetColor("#6666ff");
   lepZ2_phi_total__83->SetMarkerColor(ci);
   lepZ2_phi_total__83->SetMarkerSize(1.1);
   lepZ2_phi_total__83->GetXaxis()->SetTitle("#phi(Z2 lep.)");
   lepZ2_phi_total__83->GetXaxis()->SetMoreLogLabels();
   lepZ2_phi_total__83->GetXaxis()->SetLabelFont(42);
   lepZ2_phi_total__83->GetXaxis()->SetLabelOffset(0.015);
   lepZ2_phi_total__83->GetXaxis()->SetLabelSize(0.1);
   lepZ2_phi_total__83->GetXaxis()->SetTitleSize(0.14);
   lepZ2_phi_total__83->GetXaxis()->SetTitleFont(42);
   lepZ2_phi_total__83->GetYaxis()->SetTitle("Data/pred.");
   lepZ2_phi_total__83->GetYaxis()->SetDecimals();
   lepZ2_phi_total__83->GetYaxis()->SetNdivisions(505);
   lepZ2_phi_total__83->GetYaxis()->SetLabelFont(42);
   lepZ2_phi_total__83->GetYaxis()->SetLabelOffset(0.01);
   lepZ2_phi_total__83->GetYaxis()->SetLabelSize(0.11);
   lepZ2_phi_total__83->GetYaxis()->SetTitleSize(0.14);
   lepZ2_phi_total__83->GetYaxis()->SetTitleOffset(0.62);
   lepZ2_phi_total__83->GetYaxis()->SetTitleFont(42);
   lepZ2_phi_total__83->GetZaxis()->SetLabelFont(42);
   lepZ2_phi_total__83->GetZaxis()->SetLabelOffset(0.007);
   lepZ2_phi_total__83->GetZaxis()->SetLabelSize(0.05);
   lepZ2_phi_total__83->GetZaxis()->SetTitleSize(0.06);
   lepZ2_phi_total__83->GetZaxis()->SetTitleFont(42);
   lepZ2_phi_total__83->Draw("AXIS");
   
   Double_t lepZ2_phi_total_errors_fx3103[10] = {
   -2.835,
   -2.205,
   -1.575,
   -0.945,
   -0.315,
   0.315,
   0.945,
   1.575,
   2.205,
   2.835};
   Double_t lepZ2_phi_total_errors_fy3103[10] = {
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
   Double_t lepZ2_phi_total_errors_felx3103[10] = {
   0.315,
   0.315,
   0.315,
   0.315,
   0.315,
   0.315,
   0.315,
   0.315,
   0.315,
   0.315};
   Double_t lepZ2_phi_total_errors_fely3103[10] = {
   0.034987,
   0.03921591,
   0.03754624,
   0.04189131,
   0.03708827,
   0.03668336,
   0.03970613,
   0.03819529,
   0.03515371,
   0.04348284};
   Double_t lepZ2_phi_total_errors_fehx3103[10] = {
   0.315,
   0.315,
   0.315,
   0.315,
   0.315,
   0.315,
   0.315,
   0.315,
   0.315,
   0.315};
   Double_t lepZ2_phi_total_errors_fehy3103[10] = {
   0.034987,
   0.03921591,
   0.03754624,
   0.04189131,
   0.03708827,
   0.03668336,
   0.03970613,
   0.03819529,
   0.03515371,
   0.04348284};
   grae = new TGraphAsymmErrors(10,lepZ2_phi_total_errors_fx3103,lepZ2_phi_total_errors_fy3103,lepZ2_phi_total_errors_felx3103,lepZ2_phi_total_errors_fehx3103,lepZ2_phi_total_errors_fely3103,lepZ2_phi_total_errors_fehy3103);
   grae->SetName("lepZ2_phi_total_errors");
   grae->SetTitle("Graph");

   ci = TColor::GetColor("#00ffff");
   grae->SetFillColor(ci);

   ci = TColor::GetColor("#00ffff");
   grae->SetMarkerColor(ci);
   grae->Draw("e2");
   
   Double_t lepZ2_phi_total_errors_fx3104[10] = {
   -2.835,
   -2.205,
   -1.575,
   -0.945,
   -0.315,
   0.315,
   0.945,
   1.575,
   2.205,
   2.835};
   Double_t lepZ2_phi_total_errors_fy3104[10] = {
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
   Double_t lepZ2_phi_total_errors_felx3104[10] = {
   0.315,
   0.315,
   0.315,
   0.315,
   0.315,
   0.315,
   0.315,
   0.315,
   0.315,
   0.315};
   Double_t lepZ2_phi_total_errors_fely3104[10] = {
   0.034987,
   0.03921591,
   0.03754624,
   0.04189131,
   0.03708827,
   0.03668336,
   0.03970613,
   0.03819529,
   0.03515371,
   0.04348284};
   Double_t lepZ2_phi_total_errors_fehx3104[10] = {
   0.315,
   0.315,
   0.315,
   0.315,
   0.315,
   0.315,
   0.315,
   0.315,
   0.315,
   0.315};
   Double_t lepZ2_phi_total_errors_fehy3104[10] = {
   0.034987,
   0.03921591,
   0.03754624,
   0.04189131,
   0.03708827,
   0.03668336,
   0.03970613,
   0.03819529,
   0.03515371,
   0.04348284};
   grae = new TGraphAsymmErrors(10,lepZ2_phi_total_errors_fx3104,lepZ2_phi_total_errors_fy3104,lepZ2_phi_total_errors_felx3104,lepZ2_phi_total_errors_fehx3104,lepZ2_phi_total_errors_fely3104,lepZ2_phi_total_errors_fehy3104);
   grae->SetName("lepZ2_phi_total_errors");
   grae->SetTitle("Graph");

   ci = TColor::GetColor("#6666ff");
   grae->SetFillColor(ci);

   ci = TColor::GetColor("#6666ff");
   grae->SetMarkerColor(ci);
   grae->Draw("e2 ");
   
   TH1D *lepZ2_phi_total__84 = new TH1D("lepZ2_phi_total__84","dummy",10,-3.15,3.15);
   lepZ2_phi_total__84->SetBinContent(1,1);
   lepZ2_phi_total__84->SetBinContent(2,1);
   lepZ2_phi_total__84->SetBinContent(3,1);
   lepZ2_phi_total__84->SetBinContent(4,1);
   lepZ2_phi_total__84->SetBinContent(5,1);
   lepZ2_phi_total__84->SetBinContent(6,1);
   lepZ2_phi_total__84->SetBinContent(7,1);
   lepZ2_phi_total__84->SetBinContent(8,1);
   lepZ2_phi_total__84->SetBinContent(9,1);
   lepZ2_phi_total__84->SetBinContent(10,1);
   lepZ2_phi_total__84->SetMinimum(0.5);
   lepZ2_phi_total__84->SetMaximum(2);
   lepZ2_phi_total__84->SetEntries(15162);

   ci = TColor::GetColor("#00cc00");
   lepZ2_phi_total__84->SetFillColor(ci);

   ci = TColor::GetColor("#6666ff");
   lepZ2_phi_total__84->SetMarkerColor(ci);
   lepZ2_phi_total__84->SetMarkerSize(1.1);
   lepZ2_phi_total__84->GetXaxis()->SetTitle("#phi(Z2 lep.)");
   lepZ2_phi_total__84->GetXaxis()->SetMoreLogLabels();
   lepZ2_phi_total__84->GetXaxis()->SetLabelFont(42);
   lepZ2_phi_total__84->GetXaxis()->SetLabelOffset(0.015);
   lepZ2_phi_total__84->GetXaxis()->SetLabelSize(0.1);
   lepZ2_phi_total__84->GetXaxis()->SetTitleSize(0.14);
   lepZ2_phi_total__84->GetXaxis()->SetTitleFont(42);
   lepZ2_phi_total__84->GetYaxis()->SetTitle("Data/pred.");
   lepZ2_phi_total__84->GetYaxis()->SetDecimals();
   lepZ2_phi_total__84->GetYaxis()->SetNdivisions(505);
   lepZ2_phi_total__84->GetYaxis()->SetLabelFont(42);
   lepZ2_phi_total__84->GetYaxis()->SetLabelOffset(0.01);
   lepZ2_phi_total__84->GetYaxis()->SetLabelSize(0.11);
   lepZ2_phi_total__84->GetYaxis()->SetTitleSize(0.14);
   lepZ2_phi_total__84->GetYaxis()->SetTitleOffset(0.62);
   lepZ2_phi_total__84->GetYaxis()->SetTitleFont(42);
   lepZ2_phi_total__84->GetZaxis()->SetLabelFont(42);
   lepZ2_phi_total__84->GetZaxis()->SetLabelOffset(0.007);
   lepZ2_phi_total__84->GetZaxis()->SetLabelSize(0.05);
   lepZ2_phi_total__84->GetZaxis()->SetTitleSize(0.06);
   lepZ2_phi_total__84->GetZaxis()->SetTitleFont(42);
   lepZ2_phi_total__84->Draw("AXIS SAME");
   TLine *line = new TLine(-3.15,1,3.15,1);
   line->SetLineColor(58);
   line->SetLineWidth(2);
   line->Draw();
   
   Double_t data_div_fx3105[10] = {
   -2.835,
   -2.205,
   -1.575,
   -0.945,
   -0.315,
   0.315,
   0.945,
   1.575,
   2.205,
   2.835};
   Double_t data_div_fy3105[10] = {
   0.9751821,
   0.9736644,
   1.038078,
   1.177297,
   0.9249323,
   0.9623094,
   1.007236,
   0.9390848,
   0.9913131,
   1.134646};
   Double_t data_div_felx3105[10] = {
   0.315,
   0.315,
   0.315,
   0.315,
   0.315,
   0.315,
   0.315,
   0.315,
   0.315,
   0.315};
   Double_t data_div_fely3105[10] = {
   0.0800705,
   0.07914952,
   0.0838336,
   0.08865957,
   0.0783589,
   0.07928123,
   0.08107888,
   0.07843994,
   0.08368283,
   0.08905601};
   Double_t data_div_fehx3105[10] = {
   0.315,
   0.315,
   0.315,
   0.315,
   0.315,
   0.315,
   0.315,
   0.315,
   0.315,
   0.315};
   Double_t data_div_fehy3105[10] = {
   0.08693108,
   0.08586068,
   0.0908934,
   0.09560151,
   0.08529603,
   0.08609822,
   0.08788358,
   0.08528227,
   0.09106364,
   0.09633585};
   grae = new TGraphAsymmErrors(10,data_div_fx3105,data_div_fy3105,data_div_felx3105,data_div_fehx3105,data_div_fely3105,data_div_fehy3105);
   grae->SetName("data_div");
   grae->SetTitle("Graph");
   grae->SetFillStyle(1000);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.1);
   
   TH1F *Graph_lepZ2_phi_data_graph3105 = new TH1F("Graph_lepZ2_phi_data_graph3105","Graph",100,-3.78,3.78);
   Graph_lepZ2_phi_data_graph3105->SetMinimum(120.9173);
   Graph_lepZ2_phi_data_graph3105->SetMaximum(196.5987);
   Graph_lepZ2_phi_data_graph3105->SetDirectory(0);
   Graph_lepZ2_phi_data_graph3105->SetStats(0);
   Graph_lepZ2_phi_data_graph3105->SetLineStyle(0);
   Graph_lepZ2_phi_data_graph3105->SetMarkerStyle(20);
   Graph_lepZ2_phi_data_graph3105->GetXaxis()->SetLabelFont(42);
   Graph_lepZ2_phi_data_graph3105->GetXaxis()->SetLabelOffset(0.007);
   Graph_lepZ2_phi_data_graph3105->GetXaxis()->SetLabelSize(0.05);
   Graph_lepZ2_phi_data_graph3105->GetXaxis()->SetTitleSize(0.06);
   Graph_lepZ2_phi_data_graph3105->GetXaxis()->SetTitleOffset(0.9);
   Graph_lepZ2_phi_data_graph3105->GetXaxis()->SetTitleFont(42);
   Graph_lepZ2_phi_data_graph3105->GetYaxis()->SetLabelFont(42);
   Graph_lepZ2_phi_data_graph3105->GetYaxis()->SetLabelOffset(0.007);
   Graph_lepZ2_phi_data_graph3105->GetYaxis()->SetLabelSize(0.05);
   Graph_lepZ2_phi_data_graph3105->GetYaxis()->SetTitleSize(0.06);
   Graph_lepZ2_phi_data_graph3105->GetYaxis()->SetTitleOffset(1.35);
   Graph_lepZ2_phi_data_graph3105->GetYaxis()->SetTitleFont(42);
   Graph_lepZ2_phi_data_graph3105->GetZaxis()->SetLabelFont(42);
   Graph_lepZ2_phi_data_graph3105->GetZaxis()->SetLabelOffset(0.007);
   Graph_lepZ2_phi_data_graph3105->GetZaxis()->SetLabelSize(0.05);
   Graph_lepZ2_phi_data_graph3105->GetZaxis()->SetTitleSize(0.06);
   Graph_lepZ2_phi_data_graph3105->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_lepZ2_phi_data_graph3105);
   
   grae->Draw("pz ");
   
   leg = new TLegend(0,0,0,0,NULL,"brNDC");
   leg->SetBorderSize(1);
   leg->SetTextSize(0.084);
   leg->SetLineColor(0);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   entry=leg->AddEntry("lepZ2_phi_total_errors","stat. unc.","F");
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
   entry=leg->AddEntry("lepZ2_phi_total_errors","total unc.","F");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   leg->Draw();
   pad2->Modified();
   lepZ2_phi_canvas->cd();
   lepZ2_phi_canvas->Modified();
   lepZ2_phi_canvas->cd();
   lepZ2_phi_canvas->SetSelected(lepZ2_phi_canvas);
}
