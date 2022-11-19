void mu_eta()
{
//=========Macro generated from canvas: mu_eta_canvas/mu_eta
//=========  (Fri Nov 18 12:58:48 2022) by ROOT version 6.12/07
   TCanvas *mu_eta_canvas = new TCanvas("mu_eta_canvas", "mu_eta",0,0,600,750);
   gStyle->SetOptFit(1);
   gStyle->SetOptStat(0);
   gStyle->SetOptTitle(0);
   mu_eta_canvas->SetHighLightColor(2);
   mu_eta_canvas->Range(0,0,1,1);
   mu_eta_canvas->SetFillColor(0);
   mu_eta_canvas->SetBorderMode(0);
   mu_eta_canvas->SetBorderSize(2);
   mu_eta_canvas->SetTickx(1);
   mu_eta_canvas->SetTicky(1);
   mu_eta_canvas->SetLeftMargin(0.18);
   mu_eta_canvas->SetRightMargin(0.04);
   mu_eta_canvas->SetBottomMargin(0.13);
   mu_eta_canvas->SetFrameFillStyle(0);
   mu_eta_canvas->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: pad1
   TPad *pad1 = new TPad("pad1", "pad1",0,0.3,1,1);
   pad1->Draw();
   pad1->cd();
   pad1->Range(-3.653846,-13.59979,2.75641,530.3917);
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
   
   TH1D *mu_eta_total__25 = new TH1D("mu_eta_total__25","dummy",10,-2.5,2.5);
   mu_eta_total__25->SetBinContent(0,3187.436);
   mu_eta_total__25->SetBinContent(1,149.9662);
   mu_eta_total__25->SetBinContent(2,250.3772);
   mu_eta_total__25->SetBinContent(3,293.1511);
   mu_eta_total__25->SetBinContent(4,343.9786);
   mu_eta_total__25->SetBinContent(5,355.7101);
   mu_eta_total__25->SetBinContent(6,360.3981);
   mu_eta_total__25->SetBinContent(7,351.7983);
   mu_eta_total__25->SetBinContent(8,307.6362);
   mu_eta_total__25->SetBinContent(9,241.8643);
   mu_eta_total__25->SetBinContent(10,141.462);
   mu_eta_total__25->SetBinError(0,26.72669);
   mu_eta_total__25->SetBinError(1,6.060272);
   mu_eta_total__25->SetBinError(2,7.390044);
   mu_eta_total__25->SetBinError(3,8.18183);
   mu_eta_total__25->SetBinError(4,8.467435);
   mu_eta_total__25->SetBinError(5,7.45366);
   mu_eta_total__25->SetBinError(6,9.01192);
   mu_eta_total__25->SetBinError(7,9.123171);
   mu_eta_total__25->SetBinError(8,8.915147);
   mu_eta_total__25->SetBinError(9,7.153974);
   mu_eta_total__25->SetBinError(10,5.523249);
   mu_eta_total__25->SetMinimum(0);
   mu_eta_total__25->SetMaximum(497.7522);
   mu_eta_total__25->SetEntries(60512);
   mu_eta_total__25->SetDirectory(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#00cc00");
   mu_eta_total__25->SetFillColor(ci);
   mu_eta_total__25->SetMarkerStyle(20);
   mu_eta_total__25->SetMarkerSize(1.1);
   mu_eta_total__25->GetXaxis()->SetTitle("#eta(#mu)");
   mu_eta_total__25->GetXaxis()->SetMoreLogLabels();
   mu_eta_total__25->GetXaxis()->SetLabelFont(42);
   mu_eta_total__25->GetXaxis()->SetLabelOffset(999);
   mu_eta_total__25->GetXaxis()->SetLabelSize(0.05);
   mu_eta_total__25->GetXaxis()->SetTitleSize(0.05);
   mu_eta_total__25->GetXaxis()->SetTitleOffset(999);
   mu_eta_total__25->GetXaxis()->SetTitleFont(42);
   mu_eta_total__25->GetYaxis()->SetTitle("Muons");
   mu_eta_total__25->GetYaxis()->SetLabelFont(42);
   mu_eta_total__25->GetYaxis()->SetLabelOffset(0.007);
   mu_eta_total__25->GetYaxis()->SetLabelSize(0.05);
   mu_eta_total__25->GetYaxis()->SetTitleSize(0.06);
   mu_eta_total__25->GetYaxis()->SetTitleOffset(1.48);
   mu_eta_total__25->GetYaxis()->SetTitleFont(42);
   mu_eta_total__25->GetZaxis()->SetLabelFont(42);
   mu_eta_total__25->GetZaxis()->SetLabelOffset(0.007);
   mu_eta_total__25->GetZaxis()->SetLabelSize(0.05);
   mu_eta_total__25->GetZaxis()->SetTitleSize(0.06);
   mu_eta_total__25->GetZaxis()->SetTitleFont(42);
   mu_eta_total__25->Draw("HIST");
   
   THStack *mu_eta_stack = new THStack();
   mu_eta_stack->SetName("mu_eta_stack");
   mu_eta_stack->SetTitle("mu_eta");
   
   TH1F *mu_eta_stack_stack_7 = new TH1F("mu_eta_stack_stack_7","mu_eta",10,-2.5,2.5);
   mu_eta_stack_stack_7->SetMinimum(0);
   mu_eta_stack_stack_7->SetMaximum(378.418);
   mu_eta_stack_stack_7->SetDirectory(0);
   mu_eta_stack_stack_7->SetStats(0);
   mu_eta_stack_stack_7->SetLineStyle(0);
   mu_eta_stack_stack_7->SetMarkerStyle(20);
   mu_eta_stack_stack_7->GetXaxis()->SetLabelFont(42);
   mu_eta_stack_stack_7->GetXaxis()->SetLabelOffset(0.007);
   mu_eta_stack_stack_7->GetXaxis()->SetLabelSize(0.05);
   mu_eta_stack_stack_7->GetXaxis()->SetTitleSize(0.06);
   mu_eta_stack_stack_7->GetXaxis()->SetTitleOffset(0.9);
   mu_eta_stack_stack_7->GetXaxis()->SetTitleFont(42);
   mu_eta_stack_stack_7->GetYaxis()->SetLabelFont(42);
   mu_eta_stack_stack_7->GetYaxis()->SetLabelOffset(0.007);
   mu_eta_stack_stack_7->GetYaxis()->SetLabelSize(0.05);
   mu_eta_stack_stack_7->GetYaxis()->SetTitleSize(0.06);
   mu_eta_stack_stack_7->GetYaxis()->SetTitleOffset(1.35);
   mu_eta_stack_stack_7->GetYaxis()->SetTitleFont(42);
   mu_eta_stack_stack_7->GetZaxis()->SetLabelFont(42);
   mu_eta_stack_stack_7->GetZaxis()->SetLabelOffset(0.007);
   mu_eta_stack_stack_7->GetZaxis()->SetLabelSize(0.05);
   mu_eta_stack_stack_7->GetZaxis()->SetTitleSize(0.06);
   mu_eta_stack_stack_7->GetZaxis()->SetTitleFont(42);
   mu_eta_stack->SetHistogram(mu_eta_stack_stack_7);
   
   
   TH1D *mu_eta_fakes_VV_stack_1 = new TH1D("mu_eta_fakes_VV_stack_1","dummy",10,-2.5,2.5);
   mu_eta_fakes_VV_stack_1->SetBinContent(0,1.846674);
   mu_eta_fakes_VV_stack_1->SetBinContent(2,0.1943867);
   mu_eta_fakes_VV_stack_1->SetBinContent(4,0.09719337);
   mu_eta_fakes_VV_stack_1->SetBinContent(5,0.1943867);
   mu_eta_fakes_VV_stack_1->SetBinContent(7,0.1943867);
   mu_eta_fakes_VV_stack_1->SetBinContent(8,0.09719337);
   mu_eta_fakes_VV_stack_1->SetBinContent(9,0.09719337);
   mu_eta_fakes_VV_stack_1->SetBinError(0,0.4236561);
   mu_eta_fakes_VV_stack_1->SetBinError(2,0.1374522);
   mu_eta_fakes_VV_stack_1->SetBinError(4,0.09719337);
   mu_eta_fakes_VV_stack_1->SetBinError(5,0.1374522);
   mu_eta_fakes_VV_stack_1->SetBinError(7,0.1374522);
   mu_eta_fakes_VV_stack_1->SetBinError(8,0.09719337);
   mu_eta_fakes_VV_stack_1->SetBinError(9,0.09719337);
   mu_eta_fakes_VV_stack_1->SetEntries(28);

   ci = TColor::GetColor("#2e3294");
   mu_eta_fakes_VV_stack_1->SetFillColor(ci);
   mu_eta_fakes_VV_stack_1->SetMarkerStyle(0);
   mu_eta_fakes_VV_stack_1->SetMarkerSize(1.1);
   mu_eta_fakes_VV_stack_1->GetXaxis()->SetTitle("#eta(#mu)");
   mu_eta_fakes_VV_stack_1->GetXaxis()->SetMoreLogLabels();
   mu_eta_fakes_VV_stack_1->GetXaxis()->SetLabelFont(42);
   mu_eta_fakes_VV_stack_1->GetXaxis()->SetLabelOffset(0.007);
   mu_eta_fakes_VV_stack_1->GetXaxis()->SetLabelSize(0.05);
   mu_eta_fakes_VV_stack_1->GetXaxis()->SetTitleSize(0.06);
   mu_eta_fakes_VV_stack_1->GetXaxis()->SetTitleOffset(0.9);
   mu_eta_fakes_VV_stack_1->GetXaxis()->SetTitleFont(42);
   mu_eta_fakes_VV_stack_1->GetYaxis()->SetTitle("Muons");
   mu_eta_fakes_VV_stack_1->GetYaxis()->SetLabelFont(42);
   mu_eta_fakes_VV_stack_1->GetYaxis()->SetLabelOffset(0.007);
   mu_eta_fakes_VV_stack_1->GetYaxis()->SetLabelSize(0.05);
   mu_eta_fakes_VV_stack_1->GetYaxis()->SetTitleSize(0.06);
   mu_eta_fakes_VV_stack_1->GetYaxis()->SetTitleOffset(1.35);
   mu_eta_fakes_VV_stack_1->GetYaxis()->SetTitleFont(42);
   mu_eta_fakes_VV_stack_1->GetZaxis()->SetLabelFont(42);
   mu_eta_fakes_VV_stack_1->GetZaxis()->SetLabelOffset(0.007);
   mu_eta_fakes_VV_stack_1->GetZaxis()->SetLabelSize(0.05);
   mu_eta_fakes_VV_stack_1->GetZaxis()->SetTitleSize(0.06);
   mu_eta_fakes_VV_stack_1->GetZaxis()->SetTitleFont(42);
   mu_eta_stack->Add(mu_eta_fakes_VV_stack_1,"");
   
   TH1D *mu_eta_fakes_TT_stack_2 = new TH1D("mu_eta_fakes_TT_stack_2","dummy",10,-2.5,2.5);
   mu_eta_fakes_TT_stack_2->SetBinContent(0,108.8213);
   mu_eta_fakes_TT_stack_2->SetBinContent(1,5.652009);
   mu_eta_fakes_TT_stack_2->SetBinContent(2,9.641663);
   mu_eta_fakes_TT_stack_2->SetBinContent(3,11.34967);
   mu_eta_fakes_TT_stack_2->SetBinContent(4,12.12676);
   mu_eta_fakes_TT_stack_2->SetBinContent(5,14.41238);
   mu_eta_fakes_TT_stack_2->SetBinContent(6,15.21031);
   mu_eta_fakes_TT_stack_2->SetBinContent(7,13.65613);
   mu_eta_fakes_TT_stack_2->SetBinContent(8,12.79171);
   mu_eta_fakes_TT_stack_2->SetBinContent(9,10.88421);
   mu_eta_fakes_TT_stack_2->SetBinContent(10,5.631169);
   mu_eta_fakes_TT_stack_2->SetBinError(0,2.711864);
   mu_eta_fakes_TT_stack_2->SetBinError(1,0.6273053);
   mu_eta_fakes_TT_stack_2->SetBinError(2,0.8006965);
   mu_eta_fakes_TT_stack_2->SetBinError(3,0.8767273);
   mu_eta_fakes_TT_stack_2->SetBinError(4,0.9085388);
   mu_eta_fakes_TT_stack_2->SetBinError(5,0.9893535);
   mu_eta_fakes_TT_stack_2->SetBinError(6,1.020157);
   mu_eta_fakes_TT_stack_2->SetBinError(7,0.9628795);
   mu_eta_fakes_TT_stack_2->SetBinError(8,0.9325543);
   mu_eta_fakes_TT_stack_2->SetBinError(9,0.8691296);
   mu_eta_fakes_TT_stack_2->SetBinError(10,0.6372513);
   mu_eta_fakes_TT_stack_2->SetEntries(3332);

   ci = TColor::GetColor("#666666");
   mu_eta_fakes_TT_stack_2->SetFillColor(ci);
   mu_eta_fakes_TT_stack_2->SetMarkerStyle(0);
   mu_eta_fakes_TT_stack_2->SetMarkerSize(1.1);
   mu_eta_fakes_TT_stack_2->GetXaxis()->SetTitle("#eta(#mu)");
   mu_eta_fakes_TT_stack_2->GetXaxis()->SetMoreLogLabels();
   mu_eta_fakes_TT_stack_2->GetXaxis()->SetLabelFont(42);
   mu_eta_fakes_TT_stack_2->GetXaxis()->SetLabelOffset(0.007);
   mu_eta_fakes_TT_stack_2->GetXaxis()->SetLabelSize(0.05);
   mu_eta_fakes_TT_stack_2->GetXaxis()->SetTitleSize(0.06);
   mu_eta_fakes_TT_stack_2->GetXaxis()->SetTitleOffset(0.9);
   mu_eta_fakes_TT_stack_2->GetXaxis()->SetTitleFont(42);
   mu_eta_fakes_TT_stack_2->GetYaxis()->SetTitle("Muons");
   mu_eta_fakes_TT_stack_2->GetYaxis()->SetLabelFont(42);
   mu_eta_fakes_TT_stack_2->GetYaxis()->SetLabelOffset(0.007);
   mu_eta_fakes_TT_stack_2->GetYaxis()->SetLabelSize(0.05);
   mu_eta_fakes_TT_stack_2->GetYaxis()->SetTitleSize(0.06);
   mu_eta_fakes_TT_stack_2->GetYaxis()->SetTitleOffset(1.35);
   mu_eta_fakes_TT_stack_2->GetYaxis()->SetTitleFont(42);
   mu_eta_fakes_TT_stack_2->GetZaxis()->SetLabelFont(42);
   mu_eta_fakes_TT_stack_2->GetZaxis()->SetLabelOffset(0.007);
   mu_eta_fakes_TT_stack_2->GetZaxis()->SetLabelSize(0.05);
   mu_eta_fakes_TT_stack_2->GetZaxis()->SetTitleSize(0.06);
   mu_eta_fakes_TT_stack_2->GetZaxis()->SetTitleFont(42);
   mu_eta_stack->Add(mu_eta_fakes_TT_stack_2,"");
   
   TH1D *mu_eta_fakes_DY_stack_3 = new TH1D("mu_eta_fakes_DY_stack_3","dummy",10,-2.5,2.5);
   mu_eta_fakes_DY_stack_3->SetBinContent(0,254.4893);
   mu_eta_fakes_DY_stack_3->SetBinContent(1,13.75618);
   mu_eta_fakes_DY_stack_3->SetBinContent(2,18.91474);
   mu_eta_fakes_DY_stack_3->SetBinContent(3,24.07331);
   mu_eta_fakes_DY_stack_3->SetBinContent(4,24.07331);
   mu_eta_fakes_DY_stack_3->SetBinContent(5,13.75618);
   mu_eta_fakes_DY_stack_3->SetBinContent(6,29.23188);
   mu_eta_fakes_DY_stack_3->SetBinContent(7,30.9514);
   mu_eta_fakes_DY_stack_3->SetBinContent(8,30.9514);
   mu_eta_fakes_DY_stack_3->SetBinContent(9,17.19522);
   mu_eta_fakes_DY_stack_3->SetBinContent(10,10.31713);
   mu_eta_fakes_DY_stack_3->SetBinError(0,20.91889);
   mu_eta_fakes_DY_stack_3->SetBinError(1,4.863543);
   mu_eta_fakes_DY_stack_3->SetBinError(2,5.70301);
   mu_eta_fakes_DY_stack_3->SetBinError(3,6.433863);
   mu_eta_fakes_DY_stack_3->SetBinError(4,6.433863);
   mu_eta_fakes_DY_stack_3->SetBinError(5,4.863543);
   mu_eta_fakes_DY_stack_3->SetBinError(6,7.089771);
   mu_eta_fakes_DY_stack_3->SetBinError(7,7.295314);
   mu_eta_fakes_DY_stack_3->SetBinError(8,7.295314);
   mu_eta_fakes_DY_stack_3->SetBinError(9,5.437606);
   mu_eta_fakes_DY_stack_3->SetBinError(10,4.211952);
   mu_eta_fakes_DY_stack_3->SetEntries(272);

   ci = TColor::GetColor("#cccccc");
   mu_eta_fakes_DY_stack_3->SetFillColor(ci);
   mu_eta_fakes_DY_stack_3->SetMarkerStyle(0);
   mu_eta_fakes_DY_stack_3->SetMarkerSize(1.1);
   mu_eta_fakes_DY_stack_3->GetXaxis()->SetTitle("#eta(#mu)");
   mu_eta_fakes_DY_stack_3->GetXaxis()->SetMoreLogLabels();
   mu_eta_fakes_DY_stack_3->GetXaxis()->SetLabelFont(42);
   mu_eta_fakes_DY_stack_3->GetXaxis()->SetLabelOffset(0.007);
   mu_eta_fakes_DY_stack_3->GetXaxis()->SetLabelSize(0.05);
   mu_eta_fakes_DY_stack_3->GetXaxis()->SetTitleSize(0.06);
   mu_eta_fakes_DY_stack_3->GetXaxis()->SetTitleOffset(0.9);
   mu_eta_fakes_DY_stack_3->GetXaxis()->SetTitleFont(42);
   mu_eta_fakes_DY_stack_3->GetYaxis()->SetTitle("Muons");
   mu_eta_fakes_DY_stack_3->GetYaxis()->SetLabelFont(42);
   mu_eta_fakes_DY_stack_3->GetYaxis()->SetLabelOffset(0.007);
   mu_eta_fakes_DY_stack_3->GetYaxis()->SetLabelSize(0.05);
   mu_eta_fakes_DY_stack_3->GetYaxis()->SetTitleSize(0.06);
   mu_eta_fakes_DY_stack_3->GetYaxis()->SetTitleOffset(1.35);
   mu_eta_fakes_DY_stack_3->GetYaxis()->SetTitleFont(42);
   mu_eta_fakes_DY_stack_3->GetZaxis()->SetLabelFont(42);
   mu_eta_fakes_DY_stack_3->GetZaxis()->SetLabelOffset(0.007);
   mu_eta_fakes_DY_stack_3->GetZaxis()->SetLabelSize(0.05);
   mu_eta_fakes_DY_stack_3->GetZaxis()->SetTitleSize(0.06);
   mu_eta_fakes_DY_stack_3->GetZaxis()->SetTitleFont(42);
   mu_eta_stack->Add(mu_eta_fakes_DY_stack_3,"");
   
   TH1D *mu_eta_prompt_ZZ_stack_4 = new TH1D("mu_eta_prompt_ZZ_stack_4","dummy",10,-2.5,2.5);
   mu_eta_prompt_ZZ_stack_4->SetBinContent(0,149.5406);
   mu_eta_prompt_ZZ_stack_4->SetBinContent(1,9.357756);
   mu_eta_prompt_ZZ_stack_4->SetBinContent(2,14.86232);
   mu_eta_prompt_ZZ_stack_4->SetBinContent(3,15.77975);
   mu_eta_prompt_ZZ_stack_4->SetBinContent(4,17.6146);
   mu_eta_prompt_ZZ_stack_4->SetBinContent(5,13.94489);
   mu_eta_prompt_ZZ_stack_4->SetBinContent(6,14.31186);
   mu_eta_prompt_ZZ_stack_4->SetBinContent(7,13.94489);
   mu_eta_prompt_ZZ_stack_4->SetBinContent(8,16.3302);
   mu_eta_prompt_ZZ_stack_4->SetBinContent(9,16.3302);
   mu_eta_prompt_ZZ_stack_4->SetBinContent(10,10.82564);
   mu_eta_prompt_ZZ_stack_4->SetBinError(0,5.238179);
   mu_eta_prompt_ZZ_stack_4->SetBinError(1,1.310348);
   mu_eta_prompt_ZZ_stack_4->SetBinError(2,1.651369);
   mu_eta_prompt_ZZ_stack_4->SetBinError(3,1.701574);
   mu_eta_prompt_ZZ_stack_4->SetBinError(4,1.797783);
   mu_eta_prompt_ZZ_stack_4->SetBinError(5,1.599589);
   mu_eta_prompt_ZZ_stack_4->SetBinError(6,1.620499);
   mu_eta_prompt_ZZ_stack_4->SetBinError(7,1.599589);
   mu_eta_prompt_ZZ_stack_4->SetBinError(8,1.730998);
   mu_eta_prompt_ZZ_stack_4->SetBinError(9,1.730998);
   mu_eta_prompt_ZZ_stack_4->SetBinError(10,1.409378);
   mu_eta_prompt_ZZ_stack_4->SetEntries(1596);

   ci = TColor::GetColor("#00cc00");
   mu_eta_prompt_ZZ_stack_4->SetFillColor(ci);
   mu_eta_prompt_ZZ_stack_4->SetMarkerStyle(0);
   mu_eta_prompt_ZZ_stack_4->SetMarkerSize(1.1);
   mu_eta_prompt_ZZ_stack_4->GetXaxis()->SetTitle("#eta(#mu)");
   mu_eta_prompt_ZZ_stack_4->GetXaxis()->SetMoreLogLabels();
   mu_eta_prompt_ZZ_stack_4->GetXaxis()->SetLabelFont(42);
   mu_eta_prompt_ZZ_stack_4->GetXaxis()->SetLabelOffset(0.007);
   mu_eta_prompt_ZZ_stack_4->GetXaxis()->SetLabelSize(0.05);
   mu_eta_prompt_ZZ_stack_4->GetXaxis()->SetTitleSize(0.06);
   mu_eta_prompt_ZZ_stack_4->GetXaxis()->SetTitleOffset(0.9);
   mu_eta_prompt_ZZ_stack_4->GetXaxis()->SetTitleFont(42);
   mu_eta_prompt_ZZ_stack_4->GetYaxis()->SetTitle("Muons");
   mu_eta_prompt_ZZ_stack_4->GetYaxis()->SetLabelFont(42);
   mu_eta_prompt_ZZ_stack_4->GetYaxis()->SetLabelOffset(0.007);
   mu_eta_prompt_ZZ_stack_4->GetYaxis()->SetLabelSize(0.05);
   mu_eta_prompt_ZZ_stack_4->GetYaxis()->SetTitleSize(0.06);
   mu_eta_prompt_ZZ_stack_4->GetYaxis()->SetTitleOffset(1.35);
   mu_eta_prompt_ZZ_stack_4->GetYaxis()->SetTitleFont(42);
   mu_eta_prompt_ZZ_stack_4->GetZaxis()->SetLabelFont(42);
   mu_eta_prompt_ZZ_stack_4->GetZaxis()->SetLabelOffset(0.007);
   mu_eta_prompt_ZZ_stack_4->GetZaxis()->SetLabelSize(0.05);
   mu_eta_prompt_ZZ_stack_4->GetZaxis()->SetTitleSize(0.06);
   mu_eta_prompt_ZZ_stack_4->GetZaxis()->SetTitleFont(42);
   mu_eta_stack->Add(mu_eta_prompt_ZZ_stack_4,"");
   
   TH1D *mu_eta_prompt_WZ_stack_5 = new TH1D("mu_eta_prompt_WZ_stack_5","dummy",10,-2.5,2.5);
   mu_eta_prompt_WZ_stack_5->SetBinContent(0,2672.738);
   mu_eta_prompt_WZ_stack_5->SetBinContent(1,121.2003);
   mu_eta_prompt_WZ_stack_5->SetBinContent(2,206.7641);
   mu_eta_prompt_WZ_stack_5->SetBinContent(3,241.9484);
   mu_eta_prompt_WZ_stack_5->SetBinContent(4,290.0667);
   mu_eta_prompt_WZ_stack_5->SetBinContent(5,313.4023);
   mu_eta_prompt_WZ_stack_5->SetBinContent(6,301.644);
   mu_eta_prompt_WZ_stack_5->SetBinContent(7,293.0515);
   mu_eta_prompt_WZ_stack_5->SetBinContent(8,247.4657);
   mu_eta_prompt_WZ_stack_5->SetBinContent(9,197.3575);
   mu_eta_prompt_WZ_stack_5->SetBinContent(10,114.6881);
   mu_eta_prompt_WZ_stack_5->SetBinError(0,15.54811);
   mu_eta_prompt_WZ_stack_5->SetBinError(1,3.31094);
   mu_eta_prompt_WZ_stack_5->SetBinError(2,4.324511);
   mu_eta_prompt_WZ_stack_5->SetBinError(3,4.678006);
   mu_eta_prompt_WZ_stack_5->SetBinError(4,5.122104);
   mu_eta_prompt_WZ_stack_5->SetBinError(5,5.324153);
   mu_eta_prompt_WZ_stack_5->SetBinError(6,5.223322);
   mu_eta_prompt_WZ_stack_5->SetBinError(7,5.14839);
   mu_eta_prompt_WZ_stack_5->SetBinError(8,4.731044);
   mu_eta_prompt_WZ_stack_5->SetBinError(9,4.224996);
   mu_eta_prompt_WZ_stack_5->SetBinError(10,3.220761);
   mu_eta_prompt_WZ_stack_5->SetEntries(55284);

   ci = TColor::GetColor("#ffcc00");
   mu_eta_prompt_WZ_stack_5->SetFillColor(ci);
   mu_eta_prompt_WZ_stack_5->SetMarkerStyle(0);
   mu_eta_prompt_WZ_stack_5->SetMarkerSize(1.1);
   mu_eta_prompt_WZ_stack_5->GetXaxis()->SetTitle("#eta(#mu)");
   mu_eta_prompt_WZ_stack_5->GetXaxis()->SetMoreLogLabels();
   mu_eta_prompt_WZ_stack_5->GetXaxis()->SetLabelFont(42);
   mu_eta_prompt_WZ_stack_5->GetXaxis()->SetLabelOffset(0.007);
   mu_eta_prompt_WZ_stack_5->GetXaxis()->SetLabelSize(0.05);
   mu_eta_prompt_WZ_stack_5->GetXaxis()->SetTitleSize(0.06);
   mu_eta_prompt_WZ_stack_5->GetXaxis()->SetTitleOffset(0.9);
   mu_eta_prompt_WZ_stack_5->GetXaxis()->SetTitleFont(42);
   mu_eta_prompt_WZ_stack_5->GetYaxis()->SetTitle("Muons");
   mu_eta_prompt_WZ_stack_5->GetYaxis()->SetLabelFont(42);
   mu_eta_prompt_WZ_stack_5->GetYaxis()->SetLabelOffset(0.007);
   mu_eta_prompt_WZ_stack_5->GetYaxis()->SetLabelSize(0.05);
   mu_eta_prompt_WZ_stack_5->GetYaxis()->SetTitleSize(0.06);
   mu_eta_prompt_WZ_stack_5->GetYaxis()->SetTitleOffset(1.35);
   mu_eta_prompt_WZ_stack_5->GetYaxis()->SetTitleFont(42);
   mu_eta_prompt_WZ_stack_5->GetZaxis()->SetLabelFont(42);
   mu_eta_prompt_WZ_stack_5->GetZaxis()->SetLabelOffset(0.007);
   mu_eta_prompt_WZ_stack_5->GetZaxis()->SetLabelSize(0.05);
   mu_eta_prompt_WZ_stack_5->GetZaxis()->SetTitleSize(0.06);
   mu_eta_prompt_WZ_stack_5->GetZaxis()->SetTitleFont(42);
   mu_eta_stack->Add(mu_eta_prompt_WZ_stack_5,"");
   mu_eta_stack->Draw("same hist");
   
   TH1D *mu_eta_total__26 = new TH1D("mu_eta_total__26","dummy",10,-2.5,2.5);
   mu_eta_total__26->SetBinContent(0,3187.436);
   mu_eta_total__26->SetBinContent(1,149.9662);
   mu_eta_total__26->SetBinContent(2,250.3772);
   mu_eta_total__26->SetBinContent(3,293.1511);
   mu_eta_total__26->SetBinContent(4,343.9786);
   mu_eta_total__26->SetBinContent(5,355.7101);
   mu_eta_total__26->SetBinContent(6,360.3981);
   mu_eta_total__26->SetBinContent(7,351.7983);
   mu_eta_total__26->SetBinContent(8,307.6362);
   mu_eta_total__26->SetBinContent(9,241.8643);
   mu_eta_total__26->SetBinContent(10,141.462);
   mu_eta_total__26->SetBinError(0,26.72669);
   mu_eta_total__26->SetBinError(1,6.060272);
   mu_eta_total__26->SetBinError(2,7.390044);
   mu_eta_total__26->SetBinError(3,8.18183);
   mu_eta_total__26->SetBinError(4,8.467435);
   mu_eta_total__26->SetBinError(5,7.45366);
   mu_eta_total__26->SetBinError(6,9.01192);
   mu_eta_total__26->SetBinError(7,9.123171);
   mu_eta_total__26->SetBinError(8,8.915147);
   mu_eta_total__26->SetBinError(9,7.153974);
   mu_eta_total__26->SetBinError(10,5.523249);
   mu_eta_total__26->SetMinimum(0);
   mu_eta_total__26->SetMaximum(497.7522);
   mu_eta_total__26->SetEntries(60512);
   mu_eta_total__26->SetDirectory(0);

   ci = TColor::GetColor("#00cc00");
   mu_eta_total__26->SetFillColor(ci);
   mu_eta_total__26->SetMarkerStyle(20);
   mu_eta_total__26->SetMarkerSize(1.1);
   mu_eta_total__26->GetXaxis()->SetTitle("#eta(#mu)");
   mu_eta_total__26->GetXaxis()->SetMoreLogLabels();
   mu_eta_total__26->GetXaxis()->SetLabelFont(42);
   mu_eta_total__26->GetXaxis()->SetLabelOffset(999);
   mu_eta_total__26->GetXaxis()->SetLabelSize(0.05);
   mu_eta_total__26->GetXaxis()->SetTitleSize(0.05);
   mu_eta_total__26->GetXaxis()->SetTitleOffset(999);
   mu_eta_total__26->GetXaxis()->SetTitleFont(42);
   mu_eta_total__26->GetYaxis()->SetTitle("Muons");
   mu_eta_total__26->GetYaxis()->SetLabelFont(42);
   mu_eta_total__26->GetYaxis()->SetLabelOffset(0.007);
   mu_eta_total__26->GetYaxis()->SetLabelSize(0.05);
   mu_eta_total__26->GetYaxis()->SetTitleSize(0.06);
   mu_eta_total__26->GetYaxis()->SetTitleOffset(1.48);
   mu_eta_total__26->GetYaxis()->SetTitleFont(42);
   mu_eta_total__26->GetZaxis()->SetLabelFont(42);
   mu_eta_total__26->GetZaxis()->SetLabelOffset(0.007);
   mu_eta_total__26->GetZaxis()->SetLabelSize(0.05);
   mu_eta_total__26->GetZaxis()->SetTitleSize(0.06);
   mu_eta_total__26->GetZaxis()->SetTitleFont(42);
   mu_eta_total__26->Draw("AXIS SAME");
   
   Double_t mu_eta_total_errors_fx3031[10] = {
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
   Double_t mu_eta_total_errors_fy3031[10] = {
   149.9662,
   250.3772,
   293.1511,
   343.9786,
   355.7101,
   360.3981,
   351.7983,
   307.6362,
   241.8643,
   141.462};
   Double_t mu_eta_total_errors_felx3031[10] = {
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
   Double_t mu_eta_total_errors_fely3031[10] = {
   6.060272,
   7.390044,
   8.18183,
   8.467435,
   7.45366,
   9.01192,
   9.123171,
   8.915147,
   7.153974,
   5.523249};
   Double_t mu_eta_total_errors_fehx3031[10] = {
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
   Double_t mu_eta_total_errors_fehy3031[10] = {
   6.060272,
   7.390044,
   8.18183,
   8.467435,
   7.45366,
   9.01192,
   9.123171,
   8.915147,
   7.153974,
   5.523249};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(10,mu_eta_total_errors_fx3031,mu_eta_total_errors_fy3031,mu_eta_total_errors_felx3031,mu_eta_total_errors_fehx3031,mu_eta_total_errors_fely3031,mu_eta_total_errors_fehy3031);
   grae->SetName("mu_eta_total_errors");
   grae->SetTitle("Graph");
   grae->SetFillColor(1);
   grae->SetFillStyle(3013);
   grae->SetMarkerStyle(0);
   
   TH1F *Graph_mu_eta_total_errors3031 = new TH1F("Graph_mu_eta_total_errors3031","Graph",100,-3,3);
   Graph_mu_eta_total_errors3031->SetMinimum(112.5916);
   Graph_mu_eta_total_errors3031->SetMaximum(392.7571);
   Graph_mu_eta_total_errors3031->SetDirectory(0);
   Graph_mu_eta_total_errors3031->SetStats(0);
   Graph_mu_eta_total_errors3031->SetLineStyle(0);
   Graph_mu_eta_total_errors3031->SetMarkerStyle(20);
   Graph_mu_eta_total_errors3031->GetXaxis()->SetLabelFont(42);
   Graph_mu_eta_total_errors3031->GetXaxis()->SetLabelOffset(0.007);
   Graph_mu_eta_total_errors3031->GetXaxis()->SetLabelSize(0.05);
   Graph_mu_eta_total_errors3031->GetXaxis()->SetTitleSize(0.06);
   Graph_mu_eta_total_errors3031->GetXaxis()->SetTitleOffset(0.9);
   Graph_mu_eta_total_errors3031->GetXaxis()->SetTitleFont(42);
   Graph_mu_eta_total_errors3031->GetYaxis()->SetLabelFont(42);
   Graph_mu_eta_total_errors3031->GetYaxis()->SetLabelOffset(0.007);
   Graph_mu_eta_total_errors3031->GetYaxis()->SetLabelSize(0.05);
   Graph_mu_eta_total_errors3031->GetYaxis()->SetTitleSize(0.06);
   Graph_mu_eta_total_errors3031->GetYaxis()->SetTitleOffset(1.35);
   Graph_mu_eta_total_errors3031->GetYaxis()->SetTitleFont(42);
   Graph_mu_eta_total_errors3031->GetZaxis()->SetLabelFont(42);
   Graph_mu_eta_total_errors3031->GetZaxis()->SetLabelOffset(0.007);
   Graph_mu_eta_total_errors3031->GetZaxis()->SetLabelSize(0.05);
   Graph_mu_eta_total_errors3031->GetZaxis()->SetTitleSize(0.06);
   Graph_mu_eta_total_errors3031->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_mu_eta_total_errors3031);
   
   grae->Draw("pe2 ");
   
   Double_t mu_eta_data_graph_fx3032[10] = {
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
   Double_t mu_eta_data_graph_fy3032[10] = {
   151,
   280,
   312,
   357,
   335,
   329,
   340,
   300,
   273,
   137};
   Double_t mu_eta_data_graph_felx3032[10] = {
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
   Double_t mu_eta_data_graph_fely3032[10] = {
   12.27484,
   16.72356,
   17.65443,
   18.886,
   18.29426,
   18.12952,
   18.43041,
   17.31122,
   16.51294,
   11.69064};
   Double_t mu_eta_data_graph_fehx3032[10] = {
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
   Double_t mu_eta_data_graph_fehy3032[10] = {
   13.31564,
   17.75352,
   18.68281,
   19.91252,
   19.32164,
   19.15716,
   19.4576,
   18.34016,
   17.54328,
   12.73347};
   grae = new TGraphAsymmErrors(10,mu_eta_data_graph_fx3032,mu_eta_data_graph_fy3032,mu_eta_data_graph_felx3032,mu_eta_data_graph_fehx3032,mu_eta_data_graph_fely3032,mu_eta_data_graph_fehy3032);
   grae->SetName("mu_eta_data_graph");
   grae->SetTitle("Graph");
   grae->SetFillStyle(1000);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.1);
   
   TH1F *Graph_mu_eta_data_graph3032 = new TH1F("Graph_mu_eta_data_graph3032","Graph",100,-3,3);
   Graph_mu_eta_data_graph3032->SetMinimum(100.149);
   Graph_mu_eta_data_graph3032->SetMaximum(402.0728);
   Graph_mu_eta_data_graph3032->SetDirectory(0);
   Graph_mu_eta_data_graph3032->SetStats(0);
   Graph_mu_eta_data_graph3032->SetLineStyle(0);
   Graph_mu_eta_data_graph3032->SetMarkerStyle(20);
   Graph_mu_eta_data_graph3032->GetXaxis()->SetLabelFont(42);
   Graph_mu_eta_data_graph3032->GetXaxis()->SetLabelOffset(0.007);
   Graph_mu_eta_data_graph3032->GetXaxis()->SetLabelSize(0.05);
   Graph_mu_eta_data_graph3032->GetXaxis()->SetTitleSize(0.06);
   Graph_mu_eta_data_graph3032->GetXaxis()->SetTitleOffset(0.9);
   Graph_mu_eta_data_graph3032->GetXaxis()->SetTitleFont(42);
   Graph_mu_eta_data_graph3032->GetYaxis()->SetLabelFont(42);
   Graph_mu_eta_data_graph3032->GetYaxis()->SetLabelOffset(0.007);
   Graph_mu_eta_data_graph3032->GetYaxis()->SetLabelSize(0.05);
   Graph_mu_eta_data_graph3032->GetYaxis()->SetTitleSize(0.06);
   Graph_mu_eta_data_graph3032->GetYaxis()->SetTitleOffset(1.35);
   Graph_mu_eta_data_graph3032->GetYaxis()->SetTitleFont(42);
   Graph_mu_eta_data_graph3032->GetZaxis()->SetLabelFont(42);
   Graph_mu_eta_data_graph3032->GetZaxis()->SetLabelOffset(0.007);
   Graph_mu_eta_data_graph3032->GetZaxis()->SetLabelSize(0.05);
   Graph_mu_eta_data_graph3032->GetZaxis()->SetTitleSize(0.06);
   Graph_mu_eta_data_graph3032->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_mu_eta_data_graph3032);
   
   grae->Draw("pz ");
   
   TLegend *leg = new TLegend(0.62,0.628,0.9,0.91,NULL,"brNDC");
   leg->SetBorderSize(1);
   leg->SetTextSize(0.036);
   leg->SetLineColor(0);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("mu_eta_data","Data","LPE");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1.1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("mu_eta_prompt_WZ_stack_5","WZ","F");

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
   entry=leg->AddEntry("mu_eta_prompt_ZZ_stack_4","qqZZ","F");

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
   entry=leg->AddEntry("mu_eta_fakes_DY_stack_3","Fakes DY","F");

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
   entry=leg->AddEntry("mu_eta_fakes_TT_stack_2","Fakes TT","F");

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
   entry=leg->AddEntry("mu_eta_total_errors","Total unc.","F");
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
   mu_eta_canvas->cd();
  
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
   
   TH1D *mu_eta_total__27 = new TH1D("mu_eta_total__27","dummy",10,-2.5,2.5);
   mu_eta_total__27->SetBinContent(0,3187.436);
   mu_eta_total__27->SetBinContent(1,1);
   mu_eta_total__27->SetBinContent(2,1);
   mu_eta_total__27->SetBinContent(3,1);
   mu_eta_total__27->SetBinContent(4,1);
   mu_eta_total__27->SetBinContent(5,1);
   mu_eta_total__27->SetBinContent(6,1);
   mu_eta_total__27->SetBinContent(7,1);
   mu_eta_total__27->SetBinContent(8,1);
   mu_eta_total__27->SetBinContent(9,1);
   mu_eta_total__27->SetBinContent(10,1);
   mu_eta_total__27->SetBinError(0,26.72669);
   mu_eta_total__27->SetMinimum(0.5);
   mu_eta_total__27->SetMaximum(2);
   mu_eta_total__27->SetEntries(60522);

   ci = TColor::GetColor("#00cc00");
   mu_eta_total__27->SetFillColor(ci);

   ci = TColor::GetColor("#6666ff");
   mu_eta_total__27->SetMarkerColor(ci);
   mu_eta_total__27->SetMarkerSize(1.1);
   mu_eta_total__27->GetXaxis()->SetTitle("#eta(#mu)");
   mu_eta_total__27->GetXaxis()->SetMoreLogLabels();
   mu_eta_total__27->GetXaxis()->SetLabelFont(42);
   mu_eta_total__27->GetXaxis()->SetLabelOffset(0.015);
   mu_eta_total__27->GetXaxis()->SetLabelSize(0.1);
   mu_eta_total__27->GetXaxis()->SetTitleSize(0.14);
   mu_eta_total__27->GetXaxis()->SetTitleFont(42);
   mu_eta_total__27->GetYaxis()->SetTitle("Data/pred.");
   mu_eta_total__27->GetYaxis()->SetDecimals();
   mu_eta_total__27->GetYaxis()->SetNdivisions(505);
   mu_eta_total__27->GetYaxis()->SetLabelFont(42);
   mu_eta_total__27->GetYaxis()->SetLabelOffset(0.01);
   mu_eta_total__27->GetYaxis()->SetLabelSize(0.11);
   mu_eta_total__27->GetYaxis()->SetTitleSize(0.14);
   mu_eta_total__27->GetYaxis()->SetTitleOffset(0.62);
   mu_eta_total__27->GetYaxis()->SetTitleFont(42);
   mu_eta_total__27->GetZaxis()->SetLabelFont(42);
   mu_eta_total__27->GetZaxis()->SetLabelOffset(0.007);
   mu_eta_total__27->GetZaxis()->SetLabelSize(0.05);
   mu_eta_total__27->GetZaxis()->SetTitleSize(0.06);
   mu_eta_total__27->GetZaxis()->SetTitleFont(42);
   mu_eta_total__27->Draw("AXIS");
   
   Double_t mu_eta_total_errors_fx3033[10] = {
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
   Double_t mu_eta_total_errors_fy3033[10] = {
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
   Double_t mu_eta_total_errors_felx3033[10] = {
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
   Double_t mu_eta_total_errors_fely3033[10] = {
   0.04041091,
   0.02951564,
   0.02790994,
   0.02461617,
   0.02095431,
   0.02500546,
   0.02593296,
   0.02897951,
   0.02957846,
   0.03904405};
   Double_t mu_eta_total_errors_fehx3033[10] = {
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
   Double_t mu_eta_total_errors_fehy3033[10] = {
   0.04041091,
   0.02951564,
   0.02790994,
   0.02461617,
   0.02095431,
   0.02500546,
   0.02593296,
   0.02897951,
   0.02957846,
   0.03904405};
   grae = new TGraphAsymmErrors(10,mu_eta_total_errors_fx3033,mu_eta_total_errors_fy3033,mu_eta_total_errors_felx3033,mu_eta_total_errors_fehx3033,mu_eta_total_errors_fely3033,mu_eta_total_errors_fehy3033);
   grae->SetName("mu_eta_total_errors");
   grae->SetTitle("Graph");

   ci = TColor::GetColor("#00ffff");
   grae->SetFillColor(ci);

   ci = TColor::GetColor("#00ffff");
   grae->SetMarkerColor(ci);
   grae->Draw("e2");
   
   Double_t mu_eta_total_errors_fx3034[10] = {
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
   Double_t mu_eta_total_errors_fy3034[10] = {
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
   Double_t mu_eta_total_errors_felx3034[10] = {
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
   Double_t mu_eta_total_errors_fely3034[10] = {
   0.04041091,
   0.02951564,
   0.02790994,
   0.02461617,
   0.02095431,
   0.02500546,
   0.02593296,
   0.02897951,
   0.02957846,
   0.03904405};
   Double_t mu_eta_total_errors_fehx3034[10] = {
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
   Double_t mu_eta_total_errors_fehy3034[10] = {
   0.04041091,
   0.02951564,
   0.02790994,
   0.02461617,
   0.02095431,
   0.02500546,
   0.02593296,
   0.02897951,
   0.02957846,
   0.03904405};
   grae = new TGraphAsymmErrors(10,mu_eta_total_errors_fx3034,mu_eta_total_errors_fy3034,mu_eta_total_errors_felx3034,mu_eta_total_errors_fehx3034,mu_eta_total_errors_fely3034,mu_eta_total_errors_fehy3034);
   grae->SetName("mu_eta_total_errors");
   grae->SetTitle("Graph");

   ci = TColor::GetColor("#6666ff");
   grae->SetFillColor(ci);

   ci = TColor::GetColor("#6666ff");
   grae->SetMarkerColor(ci);
   grae->Draw("e2 ");
   
   TH1D *mu_eta_total__28 = new TH1D("mu_eta_total__28","dummy",10,-2.5,2.5);
   mu_eta_total__28->SetBinContent(0,3187.436);
   mu_eta_total__28->SetBinContent(1,1);
   mu_eta_total__28->SetBinContent(2,1);
   mu_eta_total__28->SetBinContent(3,1);
   mu_eta_total__28->SetBinContent(4,1);
   mu_eta_total__28->SetBinContent(5,1);
   mu_eta_total__28->SetBinContent(6,1);
   mu_eta_total__28->SetBinContent(7,1);
   mu_eta_total__28->SetBinContent(8,1);
   mu_eta_total__28->SetBinContent(9,1);
   mu_eta_total__28->SetBinContent(10,1);
   mu_eta_total__28->SetBinError(0,26.72669);
   mu_eta_total__28->SetMinimum(0.5);
   mu_eta_total__28->SetMaximum(2);
   mu_eta_total__28->SetEntries(60522);

   ci = TColor::GetColor("#00cc00");
   mu_eta_total__28->SetFillColor(ci);

   ci = TColor::GetColor("#6666ff");
   mu_eta_total__28->SetMarkerColor(ci);
   mu_eta_total__28->SetMarkerSize(1.1);
   mu_eta_total__28->GetXaxis()->SetTitle("#eta(#mu)");
   mu_eta_total__28->GetXaxis()->SetMoreLogLabels();
   mu_eta_total__28->GetXaxis()->SetLabelFont(42);
   mu_eta_total__28->GetXaxis()->SetLabelOffset(0.015);
   mu_eta_total__28->GetXaxis()->SetLabelSize(0.1);
   mu_eta_total__28->GetXaxis()->SetTitleSize(0.14);
   mu_eta_total__28->GetXaxis()->SetTitleFont(42);
   mu_eta_total__28->GetYaxis()->SetTitle("Data/pred.");
   mu_eta_total__28->GetYaxis()->SetDecimals();
   mu_eta_total__28->GetYaxis()->SetNdivisions(505);
   mu_eta_total__28->GetYaxis()->SetLabelFont(42);
   mu_eta_total__28->GetYaxis()->SetLabelOffset(0.01);
   mu_eta_total__28->GetYaxis()->SetLabelSize(0.11);
   mu_eta_total__28->GetYaxis()->SetTitleSize(0.14);
   mu_eta_total__28->GetYaxis()->SetTitleOffset(0.62);
   mu_eta_total__28->GetYaxis()->SetTitleFont(42);
   mu_eta_total__28->GetZaxis()->SetLabelFont(42);
   mu_eta_total__28->GetZaxis()->SetLabelOffset(0.007);
   mu_eta_total__28->GetZaxis()->SetLabelSize(0.05);
   mu_eta_total__28->GetZaxis()->SetTitleSize(0.06);
   mu_eta_total__28->GetZaxis()->SetTitleFont(42);
   mu_eta_total__28->Draw("AXIS SAME");
   TLine *line = new TLine(-2.5,1,2.5,1);
   line->SetLineColor(58);
   line->SetLineWidth(2);
   line->Draw();
   
   Double_t data_div_fx3035[10] = {
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
   Double_t data_div_fy3035[10] = {
   1.006893,
   1.118313,
   1.064298,
   1.037855,
   0.9417781,
   0.9128794,
   0.9664629,
   0.9751778,
   1.128732,
   0.968458};
   Double_t data_div_felx3035[10] = {
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
   Double_t data_div_fely3035[10] = {
   0.08185071,
   0.06679346,
   0.06022297,
   0.05490457,
   0.05143025,
   0.05030416,
   0.05238915,
   0.05627173,
   0.06827356,
   0.08264158};
   Double_t data_div_fehx3035[10] = {
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
   Double_t data_div_fehy3035[10] = {
   0.0887909,
   0.07090707,
   0.06373098,
   0.05788885,
   0.05431851,
   0.05315555,
   0.05530896,
   0.05961639,
   0.07253354,
   0.09001339};
   grae = new TGraphAsymmErrors(10,data_div_fx3035,data_div_fy3035,data_div_felx3035,data_div_fehx3035,data_div_fely3035,data_div_fehy3035);
   grae->SetName("data_div");
   grae->SetTitle("Graph");
   grae->SetFillStyle(1000);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.1);
   
   TH1F *Graph_mu_eta_data_graph3035 = new TH1F("Graph_mu_eta_data_graph3035","Graph",100,-3,3);
   Graph_mu_eta_data_graph3035->SetMinimum(100.149);
   Graph_mu_eta_data_graph3035->SetMaximum(402.0728);
   Graph_mu_eta_data_graph3035->SetDirectory(0);
   Graph_mu_eta_data_graph3035->SetStats(0);
   Graph_mu_eta_data_graph3035->SetLineStyle(0);
   Graph_mu_eta_data_graph3035->SetMarkerStyle(20);
   Graph_mu_eta_data_graph3035->GetXaxis()->SetLabelFont(42);
   Graph_mu_eta_data_graph3035->GetXaxis()->SetLabelOffset(0.007);
   Graph_mu_eta_data_graph3035->GetXaxis()->SetLabelSize(0.05);
   Graph_mu_eta_data_graph3035->GetXaxis()->SetTitleSize(0.06);
   Graph_mu_eta_data_graph3035->GetXaxis()->SetTitleOffset(0.9);
   Graph_mu_eta_data_graph3035->GetXaxis()->SetTitleFont(42);
   Graph_mu_eta_data_graph3035->GetYaxis()->SetLabelFont(42);
   Graph_mu_eta_data_graph3035->GetYaxis()->SetLabelOffset(0.007);
   Graph_mu_eta_data_graph3035->GetYaxis()->SetLabelSize(0.05);
   Graph_mu_eta_data_graph3035->GetYaxis()->SetTitleSize(0.06);
   Graph_mu_eta_data_graph3035->GetYaxis()->SetTitleOffset(1.35);
   Graph_mu_eta_data_graph3035->GetYaxis()->SetTitleFont(42);
   Graph_mu_eta_data_graph3035->GetZaxis()->SetLabelFont(42);
   Graph_mu_eta_data_graph3035->GetZaxis()->SetLabelOffset(0.007);
   Graph_mu_eta_data_graph3035->GetZaxis()->SetLabelSize(0.05);
   Graph_mu_eta_data_graph3035->GetZaxis()->SetTitleSize(0.06);
   Graph_mu_eta_data_graph3035->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_mu_eta_data_graph3035);
   
   grae->Draw("pz ");
   
   leg = new TLegend(0,0,0,0,NULL,"brNDC");
   leg->SetBorderSize(1);
   leg->SetTextSize(0.084);
   leg->SetLineColor(0);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   entry=leg->AddEntry("mu_eta_total_errors","stat. unc.","F");
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
   entry=leg->AddEntry("mu_eta_total_errors","total unc.","F");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   leg->Draw();
   pad2->Modified();
   mu_eta_canvas->cd();
   mu_eta_canvas->Modified();
   mu_eta_canvas->cd();
   mu_eta_canvas->SetSelected(mu_eta_canvas);
}
