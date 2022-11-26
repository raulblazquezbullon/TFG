void lepZ1_phi()
{
//=========Macro generated from canvas: lepZ1_phi_canvas/lepZ1_phi
//=========  (Fri Nov 18 13:05:03 2022) by ROOT version 6.12/07
   TCanvas *lepZ1_phi_canvas = new TCanvas("lepZ1_phi_canvas", "lepZ1_phi",0,0,600,750);
   gStyle->SetOptFit(1);
   gStyle->SetOptStat(0);
   gStyle->SetOptTitle(0);
   lepZ1_phi_canvas->SetHighLightColor(2);
   lepZ1_phi_canvas->Range(0,0,1,1);
   lepZ1_phi_canvas->SetFillColor(0);
   lepZ1_phi_canvas->SetBorderMode(0);
   lepZ1_phi_canvas->SetBorderSize(2);
   lepZ1_phi_canvas->SetTickx(1);
   lepZ1_phi_canvas->SetTicky(1);
   lepZ1_phi_canvas->SetLeftMargin(0.18);
   lepZ1_phi_canvas->SetRightMargin(0.04);
   lepZ1_phi_canvas->SetBottomMargin(0.13);
   lepZ1_phi_canvas->SetFrameFillStyle(0);
   lepZ1_phi_canvas->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: pad1
   TPad *pad1 = new TPad("pad1", "pad1",0,0.3,1,1);
   pad1->Draw();
   pad1->cd();
   pad1->Range(-4.603846,-6.613085,3.473077,257.9103);
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
   
   TH1D *lepZ1_phi_total__77 = new TH1D("lepZ1_phi_total__77","dummy",10,-3.15,3.15);
   lepZ1_phi_total__77->SetBinContent(1,153.2525);
   lepZ1_phi_total__77->SetBinContent(2,148.856);
   lepZ1_phi_total__77->SetBinContent(3,152.2495);
   lepZ1_phi_total__77->SetBinContent(4,146.6572);
   lepZ1_phi_total__77->SetBinContent(5,153.2309);
   lepZ1_phi_total__77->SetBinContent(6,147.619);
   lepZ1_phi_total__77->SetBinContent(7,149.0683);
   lepZ1_phi_total__77->SetBinContent(8,148.3036);
   lepZ1_phi_total__77->SetBinContent(9,154.0741);
   lepZ1_phi_total__77->SetBinContent(10,142.6334);
   lepZ1_phi_total__77->SetBinError(1,6.060837);
   lepZ1_phi_total__77->SetBinError(2,5.306615);
   lepZ1_phi_total__77->SetBinError(3,5.567479);
   lepZ1_phi_total__77->SetBinError(4,5.547665);
   lepZ1_phi_total__77->SetBinError(5,6.723908);
   lepZ1_phi_total__77->SetBinError(6,5.286003);
   lepZ1_phi_total__77->SetBinError(7,5.801418);
   lepZ1_phi_total__77->SetBinError(8,5.79481);
   lepZ1_phi_total__77->SetBinError(9,6.510013);
   lepZ1_phi_total__77->SetBinError(10,4.682903);
   lepZ1_phi_total__77->SetMinimum(0);
   lepZ1_phi_total__77->SetMaximum(242.0389);
   lepZ1_phi_total__77->SetEntries(15152);
   lepZ1_phi_total__77->SetDirectory(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#00cc00");
   lepZ1_phi_total__77->SetFillColor(ci);
   lepZ1_phi_total__77->SetMarkerStyle(20);
   lepZ1_phi_total__77->SetMarkerSize(1.1);
   lepZ1_phi_total__77->GetXaxis()->SetTitle("#phi(Z1 lep.)");
   lepZ1_phi_total__77->GetXaxis()->SetMoreLogLabels();
   lepZ1_phi_total__77->GetXaxis()->SetLabelFont(42);
   lepZ1_phi_total__77->GetXaxis()->SetLabelOffset(999);
   lepZ1_phi_total__77->GetXaxis()->SetLabelSize(0.05);
   lepZ1_phi_total__77->GetXaxis()->SetTitleSize(0.05);
   lepZ1_phi_total__77->GetXaxis()->SetTitleOffset(999);
   lepZ1_phi_total__77->GetXaxis()->SetTitleFont(42);
   lepZ1_phi_total__77->GetYaxis()->SetTitle("Leptons");
   lepZ1_phi_total__77->GetYaxis()->SetLabelFont(42);
   lepZ1_phi_total__77->GetYaxis()->SetLabelOffset(0.007);
   lepZ1_phi_total__77->GetYaxis()->SetLabelSize(0.05);
   lepZ1_phi_total__77->GetYaxis()->SetTitleSize(0.06);
   lepZ1_phi_total__77->GetYaxis()->SetTitleOffset(1.48);
   lepZ1_phi_total__77->GetYaxis()->SetTitleFont(42);
   lepZ1_phi_total__77->GetZaxis()->SetLabelFont(42);
   lepZ1_phi_total__77->GetZaxis()->SetLabelOffset(0.007);
   lepZ1_phi_total__77->GetZaxis()->SetLabelSize(0.05);
   lepZ1_phi_total__77->GetZaxis()->SetTitleSize(0.06);
   lepZ1_phi_total__77->GetZaxis()->SetTitleFont(42);
   lepZ1_phi_total__77->Draw("HIST");
   
   THStack *lepZ1_phi_stack = new THStack();
   lepZ1_phi_stack->SetName("lepZ1_phi_stack");
   lepZ1_phi_stack->SetTitle("lepZ1_phi");
   
   TH1F *lepZ1_phi_stack_stack_20 = new TH1F("lepZ1_phi_stack_stack_20","lepZ1_phi",10,-3.15,3.15);
   lepZ1_phi_stack_stack_20->SetMinimum(0);
   lepZ1_phi_stack_stack_20->SetMaximum(161.7778);
   lepZ1_phi_stack_stack_20->SetDirectory(0);
   lepZ1_phi_stack_stack_20->SetStats(0);
   lepZ1_phi_stack_stack_20->SetLineStyle(0);
   lepZ1_phi_stack_stack_20->SetMarkerStyle(20);
   lepZ1_phi_stack_stack_20->GetXaxis()->SetLabelFont(42);
   lepZ1_phi_stack_stack_20->GetXaxis()->SetLabelOffset(0.007);
   lepZ1_phi_stack_stack_20->GetXaxis()->SetLabelSize(0.05);
   lepZ1_phi_stack_stack_20->GetXaxis()->SetTitleSize(0.06);
   lepZ1_phi_stack_stack_20->GetXaxis()->SetTitleOffset(0.9);
   lepZ1_phi_stack_stack_20->GetXaxis()->SetTitleFont(42);
   lepZ1_phi_stack_stack_20->GetYaxis()->SetLabelFont(42);
   lepZ1_phi_stack_stack_20->GetYaxis()->SetLabelOffset(0.007);
   lepZ1_phi_stack_stack_20->GetYaxis()->SetLabelSize(0.05);
   lepZ1_phi_stack_stack_20->GetYaxis()->SetTitleSize(0.06);
   lepZ1_phi_stack_stack_20->GetYaxis()->SetTitleOffset(1.35);
   lepZ1_phi_stack_stack_20->GetYaxis()->SetTitleFont(42);
   lepZ1_phi_stack_stack_20->GetZaxis()->SetLabelFont(42);
   lepZ1_phi_stack_stack_20->GetZaxis()->SetLabelOffset(0.007);
   lepZ1_phi_stack_stack_20->GetZaxis()->SetLabelSize(0.05);
   lepZ1_phi_stack_stack_20->GetZaxis()->SetTitleSize(0.06);
   lepZ1_phi_stack_stack_20->GetZaxis()->SetTitleFont(42);
   lepZ1_phi_stack->SetHistogram(lepZ1_phi_stack_stack_20);
   
   
   TH1D *lepZ1_phi_fakes_VV_stack_1 = new TH1D("lepZ1_phi_fakes_VV_stack_1","dummy",10,-3.15,3.15);
   lepZ1_phi_fakes_VV_stack_1->SetBinContent(2,0.09719337);
   lepZ1_phi_fakes_VV_stack_1->SetBinContent(3,0.09719337);
   lepZ1_phi_fakes_VV_stack_1->SetBinContent(4,0.09719337);
   lepZ1_phi_fakes_VV_stack_1->SetBinContent(5,0.09719337);
   lepZ1_phi_fakes_VV_stack_1->SetBinContent(6,0.09719337);
   lepZ1_phi_fakes_VV_stack_1->SetBinContent(7,0.09719337);
   lepZ1_phi_fakes_VV_stack_1->SetBinContent(8,0.09719337);
   lepZ1_phi_fakes_VV_stack_1->SetBinError(2,0.09719337);
   lepZ1_phi_fakes_VV_stack_1->SetBinError(3,0.09719337);
   lepZ1_phi_fakes_VV_stack_1->SetBinError(4,0.09719337);
   lepZ1_phi_fakes_VV_stack_1->SetBinError(5,0.09719337);
   lepZ1_phi_fakes_VV_stack_1->SetBinError(6,0.09719337);
   lepZ1_phi_fakes_VV_stack_1->SetBinError(7,0.09719337);
   lepZ1_phi_fakes_VV_stack_1->SetBinError(8,0.09719337);
   lepZ1_phi_fakes_VV_stack_1->SetEntries(11);

   ci = TColor::GetColor("#2e3294");
   lepZ1_phi_fakes_VV_stack_1->SetFillColor(ci);
   lepZ1_phi_fakes_VV_stack_1->SetMarkerStyle(0);
   lepZ1_phi_fakes_VV_stack_1->SetMarkerSize(1.1);
   lepZ1_phi_fakes_VV_stack_1->GetXaxis()->SetTitle("#phi(Z1 lep.)");
   lepZ1_phi_fakes_VV_stack_1->GetXaxis()->SetMoreLogLabels();
   lepZ1_phi_fakes_VV_stack_1->GetXaxis()->SetLabelFont(42);
   lepZ1_phi_fakes_VV_stack_1->GetXaxis()->SetLabelOffset(0.007);
   lepZ1_phi_fakes_VV_stack_1->GetXaxis()->SetLabelSize(0.05);
   lepZ1_phi_fakes_VV_stack_1->GetXaxis()->SetTitleSize(0.06);
   lepZ1_phi_fakes_VV_stack_1->GetXaxis()->SetTitleOffset(0.9);
   lepZ1_phi_fakes_VV_stack_1->GetXaxis()->SetTitleFont(42);
   lepZ1_phi_fakes_VV_stack_1->GetYaxis()->SetTitle("Leptons");
   lepZ1_phi_fakes_VV_stack_1->GetYaxis()->SetLabelFont(42);
   lepZ1_phi_fakes_VV_stack_1->GetYaxis()->SetLabelOffset(0.007);
   lepZ1_phi_fakes_VV_stack_1->GetYaxis()->SetLabelSize(0.05);
   lepZ1_phi_fakes_VV_stack_1->GetYaxis()->SetTitleSize(0.06);
   lepZ1_phi_fakes_VV_stack_1->GetYaxis()->SetTitleOffset(1.35);
   lepZ1_phi_fakes_VV_stack_1->GetYaxis()->SetTitleFont(42);
   lepZ1_phi_fakes_VV_stack_1->GetZaxis()->SetLabelFont(42);
   lepZ1_phi_fakes_VV_stack_1->GetZaxis()->SetLabelOffset(0.007);
   lepZ1_phi_fakes_VV_stack_1->GetZaxis()->SetLabelSize(0.05);
   lepZ1_phi_fakes_VV_stack_1->GetZaxis()->SetTitleSize(0.06);
   lepZ1_phi_fakes_VV_stack_1->GetZaxis()->SetTitleFont(42);
   lepZ1_phi_stack->Add(lepZ1_phi_fakes_VV_stack_1,"");
   
   TH1D *lepZ1_phi_fakes_TT_stack_2 = new TH1D("lepZ1_phi_fakes_TT_stack_2","dummy",10,-3.15,3.15);
   lepZ1_phi_fakes_TT_stack_2->SetBinContent(1,6.715917);
   lepZ1_phi_fakes_TT_stack_2->SetBinContent(2,5.631169);
   lepZ1_phi_fakes_TT_stack_2->SetBinContent(3,5.718503);
   lepZ1_phi_fakes_TT_stack_2->SetBinContent(4,4.70025);
   lepZ1_phi_fakes_TT_stack_2->SetBinContent(5,5.232204);
   lepZ1_phi_fakes_TT_stack_2->SetBinContent(6,5.585515);
   lepZ1_phi_fakes_TT_stack_2->SetBinContent(7,5.319538);
   lepZ1_phi_fakes_TT_stack_2->SetBinContent(8,5.190524);
   lepZ1_phi_fakes_TT_stack_2->SetBinContent(9,6.183963);
   lepZ1_phi_fakes_TT_stack_2->SetBinContent(10,4.766744);
   lepZ1_phi_fakes_TT_stack_2->SetBinError(1,0.6748427);
   lepZ1_phi_fakes_TT_stack_2->SetBinError(2,0.6160846);
   lepZ1_phi_fakes_TT_stack_2->SetBinError(3,0.6237711);
   lepZ1_phi_fakes_TT_stack_2->SetBinError(4,0.571404);
   lepZ1_phi_fakes_TT_stack_2->SetBinError(5,0.6015599);
   lepZ1_phi_fakes_TT_stack_2->SetBinError(6,0.6094296);
   lepZ1_phi_fakes_TT_stack_2->SetBinError(7,0.6021308);
   lepZ1_phi_fakes_TT_stack_2->SetBinError(8,0.6004165);
   lepZ1_phi_fakes_TT_stack_2->SetBinError(9,0.6412471);
   lepZ1_phi_fakes_TT_stack_2->SetBinError(10,0.5675218);
   lepZ1_phi_fakes_TT_stack_2->SetEntries(841);

   ci = TColor::GetColor("#666666");
   lepZ1_phi_fakes_TT_stack_2->SetFillColor(ci);
   lepZ1_phi_fakes_TT_stack_2->SetMarkerStyle(0);
   lepZ1_phi_fakes_TT_stack_2->SetMarkerSize(1.1);
   lepZ1_phi_fakes_TT_stack_2->GetXaxis()->SetTitle("#phi(Z1 lep.)");
   lepZ1_phi_fakes_TT_stack_2->GetXaxis()->SetMoreLogLabels();
   lepZ1_phi_fakes_TT_stack_2->GetXaxis()->SetLabelFont(42);
   lepZ1_phi_fakes_TT_stack_2->GetXaxis()->SetLabelOffset(0.007);
   lepZ1_phi_fakes_TT_stack_2->GetXaxis()->SetLabelSize(0.05);
   lepZ1_phi_fakes_TT_stack_2->GetXaxis()->SetTitleSize(0.06);
   lepZ1_phi_fakes_TT_stack_2->GetXaxis()->SetTitleOffset(0.9);
   lepZ1_phi_fakes_TT_stack_2->GetXaxis()->SetTitleFont(42);
   lepZ1_phi_fakes_TT_stack_2->GetYaxis()->SetTitle("Leptons");
   lepZ1_phi_fakes_TT_stack_2->GetYaxis()->SetLabelFont(42);
   lepZ1_phi_fakes_TT_stack_2->GetYaxis()->SetLabelOffset(0.007);
   lepZ1_phi_fakes_TT_stack_2->GetYaxis()->SetLabelSize(0.05);
   lepZ1_phi_fakes_TT_stack_2->GetYaxis()->SetTitleSize(0.06);
   lepZ1_phi_fakes_TT_stack_2->GetYaxis()->SetTitleOffset(1.35);
   lepZ1_phi_fakes_TT_stack_2->GetYaxis()->SetTitleFont(42);
   lepZ1_phi_fakes_TT_stack_2->GetZaxis()->SetLabelFont(42);
   lepZ1_phi_fakes_TT_stack_2->GetZaxis()->SetLabelOffset(0.007);
   lepZ1_phi_fakes_TT_stack_2->GetZaxis()->SetLabelSize(0.05);
   lepZ1_phi_fakes_TT_stack_2->GetZaxis()->SetTitleSize(0.06);
   lepZ1_phi_fakes_TT_stack_2->GetZaxis()->SetTitleFont(42);
   lepZ1_phi_stack->Add(lepZ1_phi_fakes_TT_stack_2,"");
   
   TH1D *lepZ1_phi_fakes_DY_stack_3 = new TH1D("lepZ1_phi_fakes_DY_stack_3","dummy",10,-3.15,3.15);
   lepZ1_phi_fakes_DY_stack_3->SetBinContent(1,13.75618);
   lepZ1_phi_fakes_DY_stack_3->SetBinContent(2,8.597611);
   lepZ1_phi_fakes_DY_stack_3->SetBinContent(3,10.31713);
   lepZ1_phi_fakes_DY_stack_3->SetBinContent(4,10.31713);
   lepZ1_phi_fakes_DY_stack_3->SetBinContent(5,18.91474);
   lepZ1_phi_fakes_DY_stack_3->SetBinContent(6,8.597611);
   lepZ1_phi_fakes_DY_stack_3->SetBinContent(7,12.03665);
   lepZ1_phi_fakes_DY_stack_3->SetBinContent(8,12.03665);
   lepZ1_phi_fakes_DY_stack_3->SetBinContent(9,17.19522);
   lepZ1_phi_fakes_DY_stack_3->SetBinContent(10,5.158566);
   lepZ1_phi_fakes_DY_stack_3->SetBinError(1,4.863543);
   lepZ1_phi_fakes_DY_stack_3->SetBinError(2,3.844968);
   lepZ1_phi_fakes_DY_stack_3->SetBinError(3,4.211952);
   lepZ1_phi_fakes_DY_stack_3->SetBinError(4,4.211952);
   lepZ1_phi_fakes_DY_stack_3->SetBinError(5,5.70301);
   lepZ1_phi_fakes_DY_stack_3->SetBinError(6,3.844968);
   lepZ1_phi_fakes_DY_stack_3->SetBinError(7,4.549428);
   lepZ1_phi_fakes_DY_stack_3->SetBinError(8,4.549428);
   lepZ1_phi_fakes_DY_stack_3->SetBinError(9,5.437606);
   lepZ1_phi_fakes_DY_stack_3->SetBinError(10,2.9783);
   lepZ1_phi_fakes_DY_stack_3->SetEntries(72);

   ci = TColor::GetColor("#cccccc");
   lepZ1_phi_fakes_DY_stack_3->SetFillColor(ci);
   lepZ1_phi_fakes_DY_stack_3->SetMarkerStyle(0);
   lepZ1_phi_fakes_DY_stack_3->SetMarkerSize(1.1);
   lepZ1_phi_fakes_DY_stack_3->GetXaxis()->SetTitle("#phi(Z1 lep.)");
   lepZ1_phi_fakes_DY_stack_3->GetXaxis()->SetMoreLogLabels();
   lepZ1_phi_fakes_DY_stack_3->GetXaxis()->SetLabelFont(42);
   lepZ1_phi_fakes_DY_stack_3->GetXaxis()->SetLabelOffset(0.007);
   lepZ1_phi_fakes_DY_stack_3->GetXaxis()->SetLabelSize(0.05);
   lepZ1_phi_fakes_DY_stack_3->GetXaxis()->SetTitleSize(0.06);
   lepZ1_phi_fakes_DY_stack_3->GetXaxis()->SetTitleOffset(0.9);
   lepZ1_phi_fakes_DY_stack_3->GetXaxis()->SetTitleFont(42);
   lepZ1_phi_fakes_DY_stack_3->GetYaxis()->SetTitle("Leptons");
   lepZ1_phi_fakes_DY_stack_3->GetYaxis()->SetLabelFont(42);
   lepZ1_phi_fakes_DY_stack_3->GetYaxis()->SetLabelOffset(0.007);
   lepZ1_phi_fakes_DY_stack_3->GetYaxis()->SetLabelSize(0.05);
   lepZ1_phi_fakes_DY_stack_3->GetYaxis()->SetTitleSize(0.06);
   lepZ1_phi_fakes_DY_stack_3->GetYaxis()->SetTitleOffset(1.35);
   lepZ1_phi_fakes_DY_stack_3->GetYaxis()->SetTitleFont(42);
   lepZ1_phi_fakes_DY_stack_3->GetZaxis()->SetLabelFont(42);
   lepZ1_phi_fakes_DY_stack_3->GetZaxis()->SetLabelOffset(0.007);
   lepZ1_phi_fakes_DY_stack_3->GetZaxis()->SetLabelSize(0.05);
   lepZ1_phi_fakes_DY_stack_3->GetZaxis()->SetTitleSize(0.06);
   lepZ1_phi_fakes_DY_stack_3->GetZaxis()->SetTitleFont(42);
   lepZ1_phi_stack->Add(lepZ1_phi_fakes_DY_stack_3,"");
   
   TH1D *lepZ1_phi_prompt_ZZ_stack_4 = new TH1D("lepZ1_phi_prompt_ZZ_stack_4","dummy",10,-3.15,3.15);
   lepZ1_phi_prompt_ZZ_stack_4->SetBinContent(1,6.605475);
   lepZ1_phi_prompt_ZZ_stack_4->SetBinContent(2,8.8073);
   lepZ1_phi_prompt_ZZ_stack_4->SetBinContent(3,5.871533);
   lepZ1_phi_prompt_ZZ_stack_4->SetBinContent(4,8.623814);
   lepZ1_phi_prompt_ZZ_stack_4->SetBinContent(5,6.972446);
   lepZ1_phi_prompt_ZZ_stack_4->SetBinContent(6,7.706387);
   lepZ1_phi_prompt_ZZ_stack_4->SetBinContent(7,7.339416);
   lepZ1_phi_prompt_ZZ_stack_4->SetBinContent(8,7.155931);
   lepZ1_phi_prompt_ZZ_stack_4->SetBinContent(9,6.238504);
   lepZ1_phi_prompt_ZZ_stack_4->SetBinContent(10,7.889873);
   lepZ1_phi_prompt_ZZ_stack_4->SetBinError(1,1.100912);
   lepZ1_phi_prompt_ZZ_stack_4->SetBinError(2,1.271224);
   lepZ1_phi_prompt_ZZ_stack_4->SetBinError(3,1.03795);
   lepZ1_phi_prompt_ZZ_stack_4->SetBinError(4,1.257913);
   lepZ1_phi_prompt_ZZ_stack_4->SetBinError(5,1.13108);
   lepZ1_phi_prompt_ZZ_stack_4->SetBinError(6,1.189121);
   lepZ1_phi_prompt_ZZ_stack_4->SetBinError(7,1.160464);
   lepZ1_phi_prompt_ZZ_stack_4->SetBinError(8,1.145866);
   lepZ1_phi_prompt_ZZ_stack_4->SetBinError(9,1.069895);
   lepZ1_phi_prompt_ZZ_stack_4->SetBinError(10,1.203194);
   lepZ1_phi_prompt_ZZ_stack_4->SetEntries(403);

   ci = TColor::GetColor("#00cc00");
   lepZ1_phi_prompt_ZZ_stack_4->SetFillColor(ci);
   lepZ1_phi_prompt_ZZ_stack_4->SetMarkerStyle(0);
   lepZ1_phi_prompt_ZZ_stack_4->SetMarkerSize(1.1);
   lepZ1_phi_prompt_ZZ_stack_4->GetXaxis()->SetTitle("#phi(Z1 lep.)");
   lepZ1_phi_prompt_ZZ_stack_4->GetXaxis()->SetMoreLogLabels();
   lepZ1_phi_prompt_ZZ_stack_4->GetXaxis()->SetLabelFont(42);
   lepZ1_phi_prompt_ZZ_stack_4->GetXaxis()->SetLabelOffset(0.007);
   lepZ1_phi_prompt_ZZ_stack_4->GetXaxis()->SetLabelSize(0.05);
   lepZ1_phi_prompt_ZZ_stack_4->GetXaxis()->SetTitleSize(0.06);
   lepZ1_phi_prompt_ZZ_stack_4->GetXaxis()->SetTitleOffset(0.9);
   lepZ1_phi_prompt_ZZ_stack_4->GetXaxis()->SetTitleFont(42);
   lepZ1_phi_prompt_ZZ_stack_4->GetYaxis()->SetTitle("Leptons");
   lepZ1_phi_prompt_ZZ_stack_4->GetYaxis()->SetLabelFont(42);
   lepZ1_phi_prompt_ZZ_stack_4->GetYaxis()->SetLabelOffset(0.007);
   lepZ1_phi_prompt_ZZ_stack_4->GetYaxis()->SetLabelSize(0.05);
   lepZ1_phi_prompt_ZZ_stack_4->GetYaxis()->SetTitleSize(0.06);
   lepZ1_phi_prompt_ZZ_stack_4->GetYaxis()->SetTitleOffset(1.35);
   lepZ1_phi_prompt_ZZ_stack_4->GetYaxis()->SetTitleFont(42);
   lepZ1_phi_prompt_ZZ_stack_4->GetZaxis()->SetLabelFont(42);
   lepZ1_phi_prompt_ZZ_stack_4->GetZaxis()->SetLabelOffset(0.007);
   lepZ1_phi_prompt_ZZ_stack_4->GetZaxis()->SetLabelSize(0.05);
   lepZ1_phi_prompt_ZZ_stack_4->GetZaxis()->SetTitleSize(0.06);
   lepZ1_phi_prompt_ZZ_stack_4->GetZaxis()->SetTitleFont(42);
   lepZ1_phi_stack->Add(lepZ1_phi_prompt_ZZ_stack_4,"");
   
   TH1D *lepZ1_phi_prompt_WZ_stack_5 = new TH1D("lepZ1_phi_prompt_WZ_stack_5","dummy",10,-3.15,3.15);
   lepZ1_phi_prompt_WZ_stack_5->SetBinContent(1,126.1749);
   lepZ1_phi_prompt_WZ_stack_5->SetBinContent(2,125.7227);
   lepZ1_phi_prompt_WZ_stack_5->SetBinContent(3,130.2451);
   lepZ1_phi_prompt_WZ_stack_5->SetBinContent(4,122.9188);
   lepZ1_phi_prompt_WZ_stack_5->SetBinContent(5,122.0143);
   lepZ1_phi_prompt_WZ_stack_5->SetBinContent(6,125.6323);
   lepZ1_phi_prompt_WZ_stack_5->SetBinContent(7,124.2755);
   lepZ1_phi_prompt_WZ_stack_5->SetBinContent(8,123.8233);
   lepZ1_phi_prompt_WZ_stack_5->SetBinContent(9,124.4564);
   lepZ1_phi_prompt_WZ_stack_5->SetBinContent(10,124.8182);
   lepZ1_phi_prompt_WZ_stack_5->SetBinError(1,3.378205);
   lepZ1_phi_prompt_WZ_stack_5->SetBinError(2,3.372146);
   lepZ1_phi_prompt_WZ_stack_5->SetBinError(3,3.43226);
   lepZ1_phi_prompt_WZ_stack_5->SetBinError(4,3.334331);
   lepZ1_phi_prompt_WZ_stack_5->SetBinError(5,3.32204);
   lepZ1_phi_prompt_WZ_stack_5->SetBinError(6,3.370932);
   lepZ1_phi_prompt_WZ_stack_5->SetBinError(7,3.352681);
   lepZ1_phi_prompt_WZ_stack_5->SetBinError(8,3.346576);
   lepZ1_phi_prompt_WZ_stack_5->SetBinError(9,3.355121);
   lepZ1_phi_prompt_WZ_stack_5->SetBinError(10,3.359994);
   lepZ1_phi_prompt_WZ_stack_5->SetEntries(13825);

   ci = TColor::GetColor("#ffcc00");
   lepZ1_phi_prompt_WZ_stack_5->SetFillColor(ci);
   lepZ1_phi_prompt_WZ_stack_5->SetMarkerStyle(0);
   lepZ1_phi_prompt_WZ_stack_5->SetMarkerSize(1.1);
   lepZ1_phi_prompt_WZ_stack_5->GetXaxis()->SetTitle("#phi(Z1 lep.)");
   lepZ1_phi_prompt_WZ_stack_5->GetXaxis()->SetMoreLogLabels();
   lepZ1_phi_prompt_WZ_stack_5->GetXaxis()->SetLabelFont(42);
   lepZ1_phi_prompt_WZ_stack_5->GetXaxis()->SetLabelOffset(0.007);
   lepZ1_phi_prompt_WZ_stack_5->GetXaxis()->SetLabelSize(0.05);
   lepZ1_phi_prompt_WZ_stack_5->GetXaxis()->SetTitleSize(0.06);
   lepZ1_phi_prompt_WZ_stack_5->GetXaxis()->SetTitleOffset(0.9);
   lepZ1_phi_prompt_WZ_stack_5->GetXaxis()->SetTitleFont(42);
   lepZ1_phi_prompt_WZ_stack_5->GetYaxis()->SetTitle("Leptons");
   lepZ1_phi_prompt_WZ_stack_5->GetYaxis()->SetLabelFont(42);
   lepZ1_phi_prompt_WZ_stack_5->GetYaxis()->SetLabelOffset(0.007);
   lepZ1_phi_prompt_WZ_stack_5->GetYaxis()->SetLabelSize(0.05);
   lepZ1_phi_prompt_WZ_stack_5->GetYaxis()->SetTitleSize(0.06);
   lepZ1_phi_prompt_WZ_stack_5->GetYaxis()->SetTitleOffset(1.35);
   lepZ1_phi_prompt_WZ_stack_5->GetYaxis()->SetTitleFont(42);
   lepZ1_phi_prompt_WZ_stack_5->GetZaxis()->SetLabelFont(42);
   lepZ1_phi_prompt_WZ_stack_5->GetZaxis()->SetLabelOffset(0.007);
   lepZ1_phi_prompt_WZ_stack_5->GetZaxis()->SetLabelSize(0.05);
   lepZ1_phi_prompt_WZ_stack_5->GetZaxis()->SetTitleSize(0.06);
   lepZ1_phi_prompt_WZ_stack_5->GetZaxis()->SetTitleFont(42);
   lepZ1_phi_stack->Add(lepZ1_phi_prompt_WZ_stack_5,"");
   lepZ1_phi_stack->Draw("same hist");
   
   TH1D *lepZ1_phi_total__78 = new TH1D("lepZ1_phi_total__78","dummy",10,-3.15,3.15);
   lepZ1_phi_total__78->SetBinContent(1,153.2525);
   lepZ1_phi_total__78->SetBinContent(2,148.856);
   lepZ1_phi_total__78->SetBinContent(3,152.2495);
   lepZ1_phi_total__78->SetBinContent(4,146.6572);
   lepZ1_phi_total__78->SetBinContent(5,153.2309);
   lepZ1_phi_total__78->SetBinContent(6,147.619);
   lepZ1_phi_total__78->SetBinContent(7,149.0683);
   lepZ1_phi_total__78->SetBinContent(8,148.3036);
   lepZ1_phi_total__78->SetBinContent(9,154.0741);
   lepZ1_phi_total__78->SetBinContent(10,142.6334);
   lepZ1_phi_total__78->SetBinError(1,6.060837);
   lepZ1_phi_total__78->SetBinError(2,5.306615);
   lepZ1_phi_total__78->SetBinError(3,5.567479);
   lepZ1_phi_total__78->SetBinError(4,5.547665);
   lepZ1_phi_total__78->SetBinError(5,6.723908);
   lepZ1_phi_total__78->SetBinError(6,5.286003);
   lepZ1_phi_total__78->SetBinError(7,5.801418);
   lepZ1_phi_total__78->SetBinError(8,5.79481);
   lepZ1_phi_total__78->SetBinError(9,6.510013);
   lepZ1_phi_total__78->SetBinError(10,4.682903);
   lepZ1_phi_total__78->SetMinimum(0);
   lepZ1_phi_total__78->SetMaximum(242.0389);
   lepZ1_phi_total__78->SetEntries(15152);
   lepZ1_phi_total__78->SetDirectory(0);

   ci = TColor::GetColor("#00cc00");
   lepZ1_phi_total__78->SetFillColor(ci);
   lepZ1_phi_total__78->SetMarkerStyle(20);
   lepZ1_phi_total__78->SetMarkerSize(1.1);
   lepZ1_phi_total__78->GetXaxis()->SetTitle("#phi(Z1 lep.)");
   lepZ1_phi_total__78->GetXaxis()->SetMoreLogLabels();
   lepZ1_phi_total__78->GetXaxis()->SetLabelFont(42);
   lepZ1_phi_total__78->GetXaxis()->SetLabelOffset(999);
   lepZ1_phi_total__78->GetXaxis()->SetLabelSize(0.05);
   lepZ1_phi_total__78->GetXaxis()->SetTitleSize(0.05);
   lepZ1_phi_total__78->GetXaxis()->SetTitleOffset(999);
   lepZ1_phi_total__78->GetXaxis()->SetTitleFont(42);
   lepZ1_phi_total__78->GetYaxis()->SetTitle("Leptons");
   lepZ1_phi_total__78->GetYaxis()->SetLabelFont(42);
   lepZ1_phi_total__78->GetYaxis()->SetLabelOffset(0.007);
   lepZ1_phi_total__78->GetYaxis()->SetLabelSize(0.05);
   lepZ1_phi_total__78->GetYaxis()->SetTitleSize(0.06);
   lepZ1_phi_total__78->GetYaxis()->SetTitleOffset(1.48);
   lepZ1_phi_total__78->GetYaxis()->SetTitleFont(42);
   lepZ1_phi_total__78->GetZaxis()->SetLabelFont(42);
   lepZ1_phi_total__78->GetZaxis()->SetLabelOffset(0.007);
   lepZ1_phi_total__78->GetZaxis()->SetLabelSize(0.05);
   lepZ1_phi_total__78->GetZaxis()->SetTitleSize(0.06);
   lepZ1_phi_total__78->GetZaxis()->SetTitleFont(42);
   lepZ1_phi_total__78->Draw("AXIS SAME");
   
   Double_t lepZ1_phi_total_errors_fx3096[10] = {
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
   Double_t lepZ1_phi_total_errors_fy3096[10] = {
   153.2525,
   148.856,
   152.2495,
   146.6572,
   153.2309,
   147.619,
   149.0683,
   148.3036,
   154.0741,
   142.6334};
   Double_t lepZ1_phi_total_errors_felx3096[10] = {
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
   Double_t lepZ1_phi_total_errors_fely3096[10] = {
   6.060837,
   5.306615,
   5.567479,
   5.547665,
   6.723908,
   5.286003,
   5.801418,
   5.79481,
   6.510013,
   4.682903};
   Double_t lepZ1_phi_total_errors_fehx3096[10] = {
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
   Double_t lepZ1_phi_total_errors_fehy3096[10] = {
   6.060837,
   5.306615,
   5.567479,
   5.547665,
   6.723908,
   5.286003,
   5.801418,
   5.79481,
   6.510013,
   4.682903};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(10,lepZ1_phi_total_errors_fx3096,lepZ1_phi_total_errors_fy3096,lepZ1_phi_total_errors_felx3096,lepZ1_phi_total_errors_fehx3096,lepZ1_phi_total_errors_fely3096,lepZ1_phi_total_errors_fehy3096);
   grae->SetName("lepZ1_phi_total_errors");
   grae->SetTitle("Graph");
   grae->SetFillColor(1);
   grae->SetFillStyle(3013);
   grae->SetMarkerStyle(0);
   
   TH1F *Graph_lepZ1_phi_total_errors3096 = new TH1F("Graph_lepZ1_phi_total_errors3096","Graph",100,-3.78,3.78);
   Graph_lepZ1_phi_total_errors3096->SetMinimum(135.6871);
   Graph_lepZ1_phi_total_errors3096->SetMaximum(162.8475);
   Graph_lepZ1_phi_total_errors3096->SetDirectory(0);
   Graph_lepZ1_phi_total_errors3096->SetStats(0);
   Graph_lepZ1_phi_total_errors3096->SetLineStyle(0);
   Graph_lepZ1_phi_total_errors3096->SetMarkerStyle(20);
   Graph_lepZ1_phi_total_errors3096->GetXaxis()->SetLabelFont(42);
   Graph_lepZ1_phi_total_errors3096->GetXaxis()->SetLabelOffset(0.007);
   Graph_lepZ1_phi_total_errors3096->GetXaxis()->SetLabelSize(0.05);
   Graph_lepZ1_phi_total_errors3096->GetXaxis()->SetTitleSize(0.06);
   Graph_lepZ1_phi_total_errors3096->GetXaxis()->SetTitleOffset(0.9);
   Graph_lepZ1_phi_total_errors3096->GetXaxis()->SetTitleFont(42);
   Graph_lepZ1_phi_total_errors3096->GetYaxis()->SetLabelFont(42);
   Graph_lepZ1_phi_total_errors3096->GetYaxis()->SetLabelOffset(0.007);
   Graph_lepZ1_phi_total_errors3096->GetYaxis()->SetLabelSize(0.05);
   Graph_lepZ1_phi_total_errors3096->GetYaxis()->SetTitleSize(0.06);
   Graph_lepZ1_phi_total_errors3096->GetYaxis()->SetTitleOffset(1.35);
   Graph_lepZ1_phi_total_errors3096->GetYaxis()->SetTitleFont(42);
   Graph_lepZ1_phi_total_errors3096->GetZaxis()->SetLabelFont(42);
   Graph_lepZ1_phi_total_errors3096->GetZaxis()->SetLabelOffset(0.007);
   Graph_lepZ1_phi_total_errors3096->GetZaxis()->SetLabelSize(0.05);
   Graph_lepZ1_phi_total_errors3096->GetZaxis()->SetTitleSize(0.06);
   Graph_lepZ1_phi_total_errors3096->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_lepZ1_phi_total_errors3096);
   
   grae->Draw("pe2 ");
   
   Double_t lepZ1_phi_data_graph_fx3097[10] = {
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
   Double_t lepZ1_phi_data_graph_fy3097[10] = {
   141,
   164,
   149,
   160,
   143,
   145,
   147,
   138,
   158,
   168};
   Double_t lepZ1_phi_data_graph_felx3097[10] = {
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
   Double_t lepZ1_phi_data_graph_fely3097[10] = {
   11.86049,
   12.79345,
   12.1931,
   12.63615,
   11.94451,
   12.02795,
   12.1108,
   11.73334,
   12.55675,
   12.94884};
   Double_t lepZ1_phi_data_graph_fehx3097[10] = {
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
   Double_t lepZ1_phi_data_graph_fehy3097[10] = {
   12.90271,
   13.83259,
   13.23417,
   13.67578,
   12.98643,
   13.06958,
   13.15215,
   12.77601,
   13.59664,
   13.98752};
   grae = new TGraphAsymmErrors(10,lepZ1_phi_data_graph_fx3097,lepZ1_phi_data_graph_fy3097,lepZ1_phi_data_graph_felx3097,lepZ1_phi_data_graph_fehx3097,lepZ1_phi_data_graph_fely3097,lepZ1_phi_data_graph_fehy3097);
   grae->SetName("lepZ1_phi_data_graph");
   grae->SetTitle("Graph");
   grae->SetFillStyle(1000);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.1);
   
   TH1F *Graph_lepZ1_phi_data_graph3097 = new TH1F("Graph_lepZ1_phi_data_graph3097","Graph",100,-3.78,3.78);
   Graph_lepZ1_phi_data_graph3097->SetMinimum(120.6946);
   Graph_lepZ1_phi_data_graph3097->SetMaximum(187.5596);
   Graph_lepZ1_phi_data_graph3097->SetDirectory(0);
   Graph_lepZ1_phi_data_graph3097->SetStats(0);
   Graph_lepZ1_phi_data_graph3097->SetLineStyle(0);
   Graph_lepZ1_phi_data_graph3097->SetMarkerStyle(20);
   Graph_lepZ1_phi_data_graph3097->GetXaxis()->SetLabelFont(42);
   Graph_lepZ1_phi_data_graph3097->GetXaxis()->SetLabelOffset(0.007);
   Graph_lepZ1_phi_data_graph3097->GetXaxis()->SetLabelSize(0.05);
   Graph_lepZ1_phi_data_graph3097->GetXaxis()->SetTitleSize(0.06);
   Graph_lepZ1_phi_data_graph3097->GetXaxis()->SetTitleOffset(0.9);
   Graph_lepZ1_phi_data_graph3097->GetXaxis()->SetTitleFont(42);
   Graph_lepZ1_phi_data_graph3097->GetYaxis()->SetLabelFont(42);
   Graph_lepZ1_phi_data_graph3097->GetYaxis()->SetLabelOffset(0.007);
   Graph_lepZ1_phi_data_graph3097->GetYaxis()->SetLabelSize(0.05);
   Graph_lepZ1_phi_data_graph3097->GetYaxis()->SetTitleSize(0.06);
   Graph_lepZ1_phi_data_graph3097->GetYaxis()->SetTitleOffset(1.35);
   Graph_lepZ1_phi_data_graph3097->GetYaxis()->SetTitleFont(42);
   Graph_lepZ1_phi_data_graph3097->GetZaxis()->SetLabelFont(42);
   Graph_lepZ1_phi_data_graph3097->GetZaxis()->SetLabelOffset(0.007);
   Graph_lepZ1_phi_data_graph3097->GetZaxis()->SetLabelSize(0.05);
   Graph_lepZ1_phi_data_graph3097->GetZaxis()->SetTitleSize(0.06);
   Graph_lepZ1_phi_data_graph3097->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_lepZ1_phi_data_graph3097);
   
   grae->Draw("pz ");
   
   TLegend *leg = new TLegend(0.62,0.628,0.9,0.91,NULL,"brNDC");
   leg->SetBorderSize(1);
   leg->SetTextSize(0.036);
   leg->SetLineColor(0);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("lepZ1_phi_data","Data","LPE");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1.1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("lepZ1_phi_prompt_WZ_stack_5","WZ","F");

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
   entry=leg->AddEntry("lepZ1_phi_prompt_ZZ_stack_4","qqZZ","F");

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
   entry=leg->AddEntry("lepZ1_phi_fakes_DY_stack_3","Fakes DY","F");

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
   entry=leg->AddEntry("lepZ1_phi_fakes_TT_stack_2","Fakes TT","F");

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
   entry=leg->AddEntry("lepZ1_phi_total_errors","Total unc.","F");
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
   lepZ1_phi_canvas->cd();
  
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
   
   TH1D *lepZ1_phi_total__79 = new TH1D("lepZ1_phi_total__79","dummy",10,-3.15,3.15);
   lepZ1_phi_total__79->SetBinContent(1,1);
   lepZ1_phi_total__79->SetBinContent(2,1);
   lepZ1_phi_total__79->SetBinContent(3,1);
   lepZ1_phi_total__79->SetBinContent(4,1);
   lepZ1_phi_total__79->SetBinContent(5,1);
   lepZ1_phi_total__79->SetBinContent(6,1);
   lepZ1_phi_total__79->SetBinContent(7,1);
   lepZ1_phi_total__79->SetBinContent(8,1);
   lepZ1_phi_total__79->SetBinContent(9,1);
   lepZ1_phi_total__79->SetBinContent(10,1);
   lepZ1_phi_total__79->SetMinimum(0.5);
   lepZ1_phi_total__79->SetMaximum(2);
   lepZ1_phi_total__79->SetEntries(15162);

   ci = TColor::GetColor("#00cc00");
   lepZ1_phi_total__79->SetFillColor(ci);

   ci = TColor::GetColor("#6666ff");
   lepZ1_phi_total__79->SetMarkerColor(ci);
   lepZ1_phi_total__79->SetMarkerSize(1.1);
   lepZ1_phi_total__79->GetXaxis()->SetTitle("#phi(Z1 lep.)");
   lepZ1_phi_total__79->GetXaxis()->SetMoreLogLabels();
   lepZ1_phi_total__79->GetXaxis()->SetLabelFont(42);
   lepZ1_phi_total__79->GetXaxis()->SetLabelOffset(0.015);
   lepZ1_phi_total__79->GetXaxis()->SetLabelSize(0.1);
   lepZ1_phi_total__79->GetXaxis()->SetTitleSize(0.14);
   lepZ1_phi_total__79->GetXaxis()->SetTitleFont(42);
   lepZ1_phi_total__79->GetYaxis()->SetTitle("Data/pred.");
   lepZ1_phi_total__79->GetYaxis()->SetDecimals();
   lepZ1_phi_total__79->GetYaxis()->SetNdivisions(505);
   lepZ1_phi_total__79->GetYaxis()->SetLabelFont(42);
   lepZ1_phi_total__79->GetYaxis()->SetLabelOffset(0.01);
   lepZ1_phi_total__79->GetYaxis()->SetLabelSize(0.11);
   lepZ1_phi_total__79->GetYaxis()->SetTitleSize(0.14);
   lepZ1_phi_total__79->GetYaxis()->SetTitleOffset(0.62);
   lepZ1_phi_total__79->GetYaxis()->SetTitleFont(42);
   lepZ1_phi_total__79->GetZaxis()->SetLabelFont(42);
   lepZ1_phi_total__79->GetZaxis()->SetLabelOffset(0.007);
   lepZ1_phi_total__79->GetZaxis()->SetLabelSize(0.05);
   lepZ1_phi_total__79->GetZaxis()->SetTitleSize(0.06);
   lepZ1_phi_total__79->GetZaxis()->SetTitleFont(42);
   lepZ1_phi_total__79->Draw("AXIS");
   
   Double_t lepZ1_phi_total_errors_fx3098[10] = {
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
   Double_t lepZ1_phi_total_errors_fy3098[10] = {
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
   Double_t lepZ1_phi_total_errors_felx3098[10] = {
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
   Double_t lepZ1_phi_total_errors_fely3098[10] = {
   0.03954804,
   0.03564933,
   0.03656813,
   0.03782743,
   0.04388088,
   0.03580843,
   0.03891784,
   0.03907396,
   0.04225247,
   0.03283174};
   Double_t lepZ1_phi_total_errors_fehx3098[10] = {
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
   Double_t lepZ1_phi_total_errors_fehy3098[10] = {
   0.03954804,
   0.03564933,
   0.03656813,
   0.03782743,
   0.04388088,
   0.03580843,
   0.03891784,
   0.03907396,
   0.04225247,
   0.03283174};
   grae = new TGraphAsymmErrors(10,lepZ1_phi_total_errors_fx3098,lepZ1_phi_total_errors_fy3098,lepZ1_phi_total_errors_felx3098,lepZ1_phi_total_errors_fehx3098,lepZ1_phi_total_errors_fely3098,lepZ1_phi_total_errors_fehy3098);
   grae->SetName("lepZ1_phi_total_errors");
   grae->SetTitle("Graph");

   ci = TColor::GetColor("#00ffff");
   grae->SetFillColor(ci);

   ci = TColor::GetColor("#00ffff");
   grae->SetMarkerColor(ci);
   grae->Draw("e2");
   
   Double_t lepZ1_phi_total_errors_fx3099[10] = {
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
   Double_t lepZ1_phi_total_errors_fy3099[10] = {
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
   Double_t lepZ1_phi_total_errors_felx3099[10] = {
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
   Double_t lepZ1_phi_total_errors_fely3099[10] = {
   0.03954804,
   0.03564933,
   0.03656813,
   0.03782743,
   0.04388088,
   0.03580843,
   0.03891784,
   0.03907396,
   0.04225247,
   0.03283174};
   Double_t lepZ1_phi_total_errors_fehx3099[10] = {
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
   Double_t lepZ1_phi_total_errors_fehy3099[10] = {
   0.03954804,
   0.03564933,
   0.03656813,
   0.03782743,
   0.04388088,
   0.03580843,
   0.03891784,
   0.03907396,
   0.04225247,
   0.03283174};
   grae = new TGraphAsymmErrors(10,lepZ1_phi_total_errors_fx3099,lepZ1_phi_total_errors_fy3099,lepZ1_phi_total_errors_felx3099,lepZ1_phi_total_errors_fehx3099,lepZ1_phi_total_errors_fely3099,lepZ1_phi_total_errors_fehy3099);
   grae->SetName("lepZ1_phi_total_errors");
   grae->SetTitle("Graph");

   ci = TColor::GetColor("#6666ff");
   grae->SetFillColor(ci);

   ci = TColor::GetColor("#6666ff");
   grae->SetMarkerColor(ci);
   grae->Draw("e2 ");
   
   TH1D *lepZ1_phi_total__80 = new TH1D("lepZ1_phi_total__80","dummy",10,-3.15,3.15);
   lepZ1_phi_total__80->SetBinContent(1,1);
   lepZ1_phi_total__80->SetBinContent(2,1);
   lepZ1_phi_total__80->SetBinContent(3,1);
   lepZ1_phi_total__80->SetBinContent(4,1);
   lepZ1_phi_total__80->SetBinContent(5,1);
   lepZ1_phi_total__80->SetBinContent(6,1);
   lepZ1_phi_total__80->SetBinContent(7,1);
   lepZ1_phi_total__80->SetBinContent(8,1);
   lepZ1_phi_total__80->SetBinContent(9,1);
   lepZ1_phi_total__80->SetBinContent(10,1);
   lepZ1_phi_total__80->SetMinimum(0.5);
   lepZ1_phi_total__80->SetMaximum(2);
   lepZ1_phi_total__80->SetEntries(15162);

   ci = TColor::GetColor("#00cc00");
   lepZ1_phi_total__80->SetFillColor(ci);

   ci = TColor::GetColor("#6666ff");
   lepZ1_phi_total__80->SetMarkerColor(ci);
   lepZ1_phi_total__80->SetMarkerSize(1.1);
   lepZ1_phi_total__80->GetXaxis()->SetTitle("#phi(Z1 lep.)");
   lepZ1_phi_total__80->GetXaxis()->SetMoreLogLabels();
   lepZ1_phi_total__80->GetXaxis()->SetLabelFont(42);
   lepZ1_phi_total__80->GetXaxis()->SetLabelOffset(0.015);
   lepZ1_phi_total__80->GetXaxis()->SetLabelSize(0.1);
   lepZ1_phi_total__80->GetXaxis()->SetTitleSize(0.14);
   lepZ1_phi_total__80->GetXaxis()->SetTitleFont(42);
   lepZ1_phi_total__80->GetYaxis()->SetTitle("Data/pred.");
   lepZ1_phi_total__80->GetYaxis()->SetDecimals();
   lepZ1_phi_total__80->GetYaxis()->SetNdivisions(505);
   lepZ1_phi_total__80->GetYaxis()->SetLabelFont(42);
   lepZ1_phi_total__80->GetYaxis()->SetLabelOffset(0.01);
   lepZ1_phi_total__80->GetYaxis()->SetLabelSize(0.11);
   lepZ1_phi_total__80->GetYaxis()->SetTitleSize(0.14);
   lepZ1_phi_total__80->GetYaxis()->SetTitleOffset(0.62);
   lepZ1_phi_total__80->GetYaxis()->SetTitleFont(42);
   lepZ1_phi_total__80->GetZaxis()->SetLabelFont(42);
   lepZ1_phi_total__80->GetZaxis()->SetLabelOffset(0.007);
   lepZ1_phi_total__80->GetZaxis()->SetLabelSize(0.05);
   lepZ1_phi_total__80->GetZaxis()->SetTitleSize(0.06);
   lepZ1_phi_total__80->GetZaxis()->SetTitleFont(42);
   lepZ1_phi_total__80->Draw("AXIS SAME");
   TLine *line = new TLine(-3.15,1,3.15,1);
   line->SetLineColor(58);
   line->SetLineWidth(2);
   line->Draw();
   
   Double_t data_div_fx3100[10] = {
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
   Double_t data_div_fy3100[10] = {
   0.9200502,
   1.101736,
   0.9786569,
   1.090979,
   0.933232,
   0.9822586,
   0.9861249,
   0.9305236,
   1.02548,
   1.177845};
   Double_t data_div_felx3100[10] = {
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
   Double_t data_div_fely3100[10] = {
   0.07739184,
   0.08594515,
   0.08008632,
   0.0861611,
   0.07795107,
   0.08147969,
   0.08124331,
   0.079117,
   0.08149814,
   0.09078408};
   Double_t data_div_fehx3100[10] = {
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
   Double_t data_div_fehy3100[10] = {
   0.0841925,
   0.09292602,
   0.08692423,
   0.09324994,
   0.08475074,
   0.0885359,
   0.088229,
   0.08614768,
   0.08824736,
   0.09806621};
   grae = new TGraphAsymmErrors(10,data_div_fx3100,data_div_fy3100,data_div_felx3100,data_div_fehx3100,data_div_fely3100,data_div_fehy3100);
   grae->SetName("data_div");
   grae->SetTitle("Graph");
   grae->SetFillStyle(1000);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.1);
   
   TH1F *Graph_lepZ1_phi_data_graph3100 = new TH1F("Graph_lepZ1_phi_data_graph3100","Graph",100,-3.78,3.78);
   Graph_lepZ1_phi_data_graph3100->SetMinimum(120.6946);
   Graph_lepZ1_phi_data_graph3100->SetMaximum(187.5596);
   Graph_lepZ1_phi_data_graph3100->SetDirectory(0);
   Graph_lepZ1_phi_data_graph3100->SetStats(0);
   Graph_lepZ1_phi_data_graph3100->SetLineStyle(0);
   Graph_lepZ1_phi_data_graph3100->SetMarkerStyle(20);
   Graph_lepZ1_phi_data_graph3100->GetXaxis()->SetLabelFont(42);
   Graph_lepZ1_phi_data_graph3100->GetXaxis()->SetLabelOffset(0.007);
   Graph_lepZ1_phi_data_graph3100->GetXaxis()->SetLabelSize(0.05);
   Graph_lepZ1_phi_data_graph3100->GetXaxis()->SetTitleSize(0.06);
   Graph_lepZ1_phi_data_graph3100->GetXaxis()->SetTitleOffset(0.9);
   Graph_lepZ1_phi_data_graph3100->GetXaxis()->SetTitleFont(42);
   Graph_lepZ1_phi_data_graph3100->GetYaxis()->SetLabelFont(42);
   Graph_lepZ1_phi_data_graph3100->GetYaxis()->SetLabelOffset(0.007);
   Graph_lepZ1_phi_data_graph3100->GetYaxis()->SetLabelSize(0.05);
   Graph_lepZ1_phi_data_graph3100->GetYaxis()->SetTitleSize(0.06);
   Graph_lepZ1_phi_data_graph3100->GetYaxis()->SetTitleOffset(1.35);
   Graph_lepZ1_phi_data_graph3100->GetYaxis()->SetTitleFont(42);
   Graph_lepZ1_phi_data_graph3100->GetZaxis()->SetLabelFont(42);
   Graph_lepZ1_phi_data_graph3100->GetZaxis()->SetLabelOffset(0.007);
   Graph_lepZ1_phi_data_graph3100->GetZaxis()->SetLabelSize(0.05);
   Graph_lepZ1_phi_data_graph3100->GetZaxis()->SetTitleSize(0.06);
   Graph_lepZ1_phi_data_graph3100->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_lepZ1_phi_data_graph3100);
   
   grae->Draw("pz ");
   
   leg = new TLegend(0,0,0,0,NULL,"brNDC");
   leg->SetBorderSize(1);
   leg->SetTextSize(0.084);
   leg->SetLineColor(0);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   entry=leg->AddEntry("lepZ1_phi_total_errors","stat. unc.","F");
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
   entry=leg->AddEntry("lepZ1_phi_total_errors","total unc.","F");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   leg->Draw();
   pad2->Modified();
   lepZ1_phi_canvas->cd();
   lepZ1_phi_canvas->Modified();
   lepZ1_phi_canvas->cd();
   lepZ1_phi_canvas->SetSelected(lepZ1_phi_canvas);
}
