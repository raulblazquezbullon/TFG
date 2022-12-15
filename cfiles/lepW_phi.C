void lepW_phi()
{
//=========Macro generated from canvas: lepW_phi_canvas/lepW_phi
//=========  (Thu Dec 15 18:27:54 2022) by ROOT version 6.12/07
   TCanvas *lepW_phi_canvas = new TCanvas("lepW_phi_canvas", "lepW_phi",0,0,600,750);
   gStyle->SetOptFit(1);
   gStyle->SetOptStat(0);
   gStyle->SetOptTitle(0);
   lepW_phi_canvas->SetHighLightColor(2);
   lepW_phi_canvas->Range(0,0,1,1);
   lepW_phi_canvas->SetFillColor(0);
   lepW_phi_canvas->SetBorderMode(0);
   lepW_phi_canvas->SetBorderSize(2);
   lepW_phi_canvas->SetTickx(1);
   lepW_phi_canvas->SetTicky(1);
   lepW_phi_canvas->SetLeftMargin(0.18);
   lepW_phi_canvas->SetRightMargin(0.04);
   lepW_phi_canvas->SetBottomMargin(0.13);
   lepW_phi_canvas->SetFrameFillStyle(0);
   lepW_phi_canvas->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: pad1
   TPad *pad1 = new TPad("pad1", "pad1",0,0.3,1,1);
   pad1->Draw();
   pad1->cd();
   pad1->Range(-4.603846,-6.50117,3.473077,253.5456);
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
   
   TH1D *lepW_phi_total__85 = new TH1D("lepW_phi_total__85","dummy",10,-3.15,3.15);
   lepW_phi_total__85->SetBinContent(1,145.7058);
   lepW_phi_total__85->SetBinContent(2,144.9377);
   lepW_phi_total__85->SetBinContent(3,144.0296);
   lepW_phi_total__85->SetBinContent(4,150.503);
   lepW_phi_total__85->SetBinContent(5,154.6287);
   lepW_phi_total__85->SetBinContent(6,149.8977);
   lepW_phi_total__85->SetBinContent(7,153.2065);
   lepW_phi_total__85->SetBinContent(8,143.9974);
   lepW_phi_total__85->SetBinContent(9,148.8991);
   lepW_phi_total__85->SetBinContent(10,160.1389);
   lepW_phi_total__85->SetBinError(1,5.529096);
   lepW_phi_total__85->SetBinError(2,5.256219);
   lepW_phi_total__85->SetBinError(3,5.249025);
   lepW_phi_total__85->SetBinError(4,6.271201);
   lepW_phi_total__85->SetBinError(5,5.843486);
   lepW_phi_total__85->SetBinError(6,5.300245);
   lepW_phi_total__85->SetBinError(7,5.836181);
   lepW_phi_total__85->SetBinError(8,5.511836);
   lepW_phi_total__85->SetBinError(9,5.801262);
   lepW_phi_total__85->SetBinError(10,6.778814);
   lepW_phi_total__85->SetMinimum(0);
   lepW_phi_total__85->SetMaximum(237.9428);
   lepW_phi_total__85->SetEntries(15152);
   lepW_phi_total__85->SetDirectory(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#00cc00");
   lepW_phi_total__85->SetFillColor(ci);
   lepW_phi_total__85->SetMarkerStyle(20);
   lepW_phi_total__85->SetMarkerSize(1.1);
   lepW_phi_total__85->GetXaxis()->SetTitle("#phi(W lep.)");
   lepW_phi_total__85->GetXaxis()->SetMoreLogLabels();
   lepW_phi_total__85->GetXaxis()->SetLabelFont(42);
   lepW_phi_total__85->GetXaxis()->SetLabelOffset(999);
   lepW_phi_total__85->GetXaxis()->SetLabelSize(0.05);
   lepW_phi_total__85->GetXaxis()->SetTitleSize(0.05);
   lepW_phi_total__85->GetXaxis()->SetTitleOffset(999);
   lepW_phi_total__85->GetXaxis()->SetTitleFont(42);
   lepW_phi_total__85->GetYaxis()->SetTitle("Leptons");
   lepW_phi_total__85->GetYaxis()->SetLabelFont(42);
   lepW_phi_total__85->GetYaxis()->SetLabelOffset(0.007);
   lepW_phi_total__85->GetYaxis()->SetLabelSize(0.05);
   lepW_phi_total__85->GetYaxis()->SetTitleSize(0.06);
   lepW_phi_total__85->GetYaxis()->SetTitleOffset(1.48);
   lepW_phi_total__85->GetYaxis()->SetTitleFont(42);
   lepW_phi_total__85->GetZaxis()->SetLabelFont(42);
   lepW_phi_total__85->GetZaxis()->SetLabelOffset(0.007);
   lepW_phi_total__85->GetZaxis()->SetLabelSize(0.05);
   lepW_phi_total__85->GetZaxis()->SetTitleSize(0.06);
   lepW_phi_total__85->GetZaxis()->SetTitleFont(42);
   lepW_phi_total__85->Draw("HIST");
   
   THStack *lepW_phi_stack = new THStack();
   lepW_phi_stack->SetName("lepW_phi_stack");
   lepW_phi_stack->SetTitle("lepW_phi");
   
   TH1F *lepW_phi_stack_stack_22 = new TH1F("lepW_phi_stack_stack_22","lepW_phi",10,-3.15,3.15);
   lepW_phi_stack_stack_22->SetMinimum(0);
   lepW_phi_stack_stack_22->SetMaximum(168.1459);
   lepW_phi_stack_stack_22->SetDirectory(0);
   lepW_phi_stack_stack_22->SetStats(0);
   lepW_phi_stack_stack_22->SetLineStyle(0);
   lepW_phi_stack_stack_22->SetMarkerStyle(20);
   lepW_phi_stack_stack_22->GetXaxis()->SetLabelFont(42);
   lepW_phi_stack_stack_22->GetXaxis()->SetLabelOffset(0.007);
   lepW_phi_stack_stack_22->GetXaxis()->SetLabelSize(0.05);
   lepW_phi_stack_stack_22->GetXaxis()->SetTitleSize(0.06);
   lepW_phi_stack_stack_22->GetXaxis()->SetTitleOffset(0.9);
   lepW_phi_stack_stack_22->GetXaxis()->SetTitleFont(42);
   lepW_phi_stack_stack_22->GetYaxis()->SetLabelFont(42);
   lepW_phi_stack_stack_22->GetYaxis()->SetLabelOffset(0.007);
   lepW_phi_stack_stack_22->GetYaxis()->SetLabelSize(0.05);
   lepW_phi_stack_stack_22->GetYaxis()->SetTitleSize(0.06);
   lepW_phi_stack_stack_22->GetYaxis()->SetTitleOffset(1.35);
   lepW_phi_stack_stack_22->GetYaxis()->SetTitleFont(42);
   lepW_phi_stack_stack_22->GetZaxis()->SetLabelFont(42);
   lepW_phi_stack_stack_22->GetZaxis()->SetLabelOffset(0.007);
   lepW_phi_stack_stack_22->GetZaxis()->SetLabelSize(0.05);
   lepW_phi_stack_stack_22->GetZaxis()->SetTitleSize(0.06);
   lepW_phi_stack_stack_22->GetZaxis()->SetTitleFont(42);
   lepW_phi_stack->SetHistogram(lepW_phi_stack_stack_22);
   
   
   TH1D *lepW_phi_fakes_VV_stack_1 = new TH1D("lepW_phi_fakes_VV_stack_1","dummy",10,-3.15,3.15);
   lepW_phi_fakes_VV_stack_1->SetBinContent(1,0.09719337);
   lepW_phi_fakes_VV_stack_1->SetBinContent(2,0.09719337);
   lepW_phi_fakes_VV_stack_1->SetBinContent(5,0.09719337);
   lepW_phi_fakes_VV_stack_1->SetBinContent(6,0.1943867);
   lepW_phi_fakes_VV_stack_1->SetBinContent(8,0.09719337);
   lepW_phi_fakes_VV_stack_1->SetBinContent(10,0.09719337);
   lepW_phi_fakes_VV_stack_1->SetBinError(1,0.09719337);
   lepW_phi_fakes_VV_stack_1->SetBinError(2,0.09719337);
   lepW_phi_fakes_VV_stack_1->SetBinError(5,0.09719337);
   lepW_phi_fakes_VV_stack_1->SetBinError(6,0.1374522);
   lepW_phi_fakes_VV_stack_1->SetBinError(8,0.09719337);
   lepW_phi_fakes_VV_stack_1->SetBinError(10,0.09719337);
   lepW_phi_fakes_VV_stack_1->SetEntries(11);

   ci = TColor::GetColor("#2e3294");
   lepW_phi_fakes_VV_stack_1->SetFillColor(ci);
   lepW_phi_fakes_VV_stack_1->SetMarkerStyle(0);
   lepW_phi_fakes_VV_stack_1->SetMarkerSize(1.1);
   lepW_phi_fakes_VV_stack_1->GetXaxis()->SetTitle("#phi(W lep.)");
   lepW_phi_fakes_VV_stack_1->GetXaxis()->SetMoreLogLabels();
   lepW_phi_fakes_VV_stack_1->GetXaxis()->SetLabelFont(42);
   lepW_phi_fakes_VV_stack_1->GetXaxis()->SetLabelOffset(0.007);
   lepW_phi_fakes_VV_stack_1->GetXaxis()->SetLabelSize(0.05);
   lepW_phi_fakes_VV_stack_1->GetXaxis()->SetTitleSize(0.06);
   lepW_phi_fakes_VV_stack_1->GetXaxis()->SetTitleOffset(0.9);
   lepW_phi_fakes_VV_stack_1->GetXaxis()->SetTitleFont(42);
   lepW_phi_fakes_VV_stack_1->GetYaxis()->SetTitle("Leptons");
   lepW_phi_fakes_VV_stack_1->GetYaxis()->SetLabelFont(42);
   lepW_phi_fakes_VV_stack_1->GetYaxis()->SetLabelOffset(0.007);
   lepW_phi_fakes_VV_stack_1->GetYaxis()->SetLabelSize(0.05);
   lepW_phi_fakes_VV_stack_1->GetYaxis()->SetTitleSize(0.06);
   lepW_phi_fakes_VV_stack_1->GetYaxis()->SetTitleOffset(1.35);
   lepW_phi_fakes_VV_stack_1->GetYaxis()->SetTitleFont(42);
   lepW_phi_fakes_VV_stack_1->GetZaxis()->SetLabelFont(42);
   lepW_phi_fakes_VV_stack_1->GetZaxis()->SetLabelOffset(0.007);
   lepW_phi_fakes_VV_stack_1->GetZaxis()->SetLabelSize(0.05);
   lepW_phi_fakes_VV_stack_1->GetZaxis()->SetTitleSize(0.06);
   lepW_phi_fakes_VV_stack_1->GetZaxis()->SetTitleFont(42);
   lepW_phi_stack->Add(lepW_phi_fakes_VV_stack_1,"");
   
   TH1D *lepW_phi_fakes_TT_stack_2 = new TH1D("lepW_phi_fakes_TT_stack_2","dummy",10,-3.15,3.15);
   lepW_phi_fakes_TT_stack_2->SetBinContent(1,4.945387);
   lepW_phi_fakes_TT_stack_2->SetBinContent(2,5.718503);
   lepW_phi_fakes_TT_stack_2->SetBinContent(3,5.631169);
   lepW_phi_fakes_TT_stack_2->SetBinContent(4,5.319538);
   lepW_phi_fakes_TT_stack_2->SetBinContent(5,5.365192);
   lepW_phi_fakes_TT_stack_2->SetBinContent(6,5.784998);
   lepW_phi_fakes_TT_stack_2->SetBinContent(7,5.298698);
   lepW_phi_fakes_TT_stack_2->SetBinContent(8,5.498181);
   lepW_phi_fakes_TT_stack_2->SetBinContent(9,5.784998);
   lepW_phi_fakes_TT_stack_2->SetBinContent(10,5.697663);
   lepW_phi_fakes_TT_stack_2->SetBinError(1,0.6046558);
   lepW_phi_fakes_TT_stack_2->SetBinError(2,0.6166421);
   lepW_phi_fakes_TT_stack_2->SetBinError(3,0.6160846);
   lepW_phi_fakes_TT_stack_2->SetBinError(4,0.5947424);
   lepW_phi_fakes_TT_stack_2->SetBinError(5,0.6088656);
   lepW_phi_fakes_TT_stack_2->SetBinError(6,0.6202168);
   lepW_phi_fakes_TT_stack_2->SetBinError(7,0.5978736);
   lepW_phi_fakes_TT_stack_2->SetBinError(8,0.6160846);
   lepW_phi_fakes_TT_stack_2->SetBinError(9,0.6202168);
   lepW_phi_fakes_TT_stack_2->SetBinError(10,0.6196626);
   lepW_phi_fakes_TT_stack_2->SetEntries(841);

   ci = TColor::GetColor("#666666");
   lepW_phi_fakes_TT_stack_2->SetFillColor(ci);
   lepW_phi_fakes_TT_stack_2->SetMarkerStyle(0);
   lepW_phi_fakes_TT_stack_2->SetMarkerSize(1.1);
   lepW_phi_fakes_TT_stack_2->GetXaxis()->SetTitle("#phi(W lep.)");
   lepW_phi_fakes_TT_stack_2->GetXaxis()->SetMoreLogLabels();
   lepW_phi_fakes_TT_stack_2->GetXaxis()->SetLabelFont(42);
   lepW_phi_fakes_TT_stack_2->GetXaxis()->SetLabelOffset(0.007);
   lepW_phi_fakes_TT_stack_2->GetXaxis()->SetLabelSize(0.05);
   lepW_phi_fakes_TT_stack_2->GetXaxis()->SetTitleSize(0.06);
   lepW_phi_fakes_TT_stack_2->GetXaxis()->SetTitleOffset(0.9);
   lepW_phi_fakes_TT_stack_2->GetXaxis()->SetTitleFont(42);
   lepW_phi_fakes_TT_stack_2->GetYaxis()->SetTitle("Leptons");
   lepW_phi_fakes_TT_stack_2->GetYaxis()->SetLabelFont(42);
   lepW_phi_fakes_TT_stack_2->GetYaxis()->SetLabelOffset(0.007);
   lepW_phi_fakes_TT_stack_2->GetYaxis()->SetLabelSize(0.05);
   lepW_phi_fakes_TT_stack_2->GetYaxis()->SetTitleSize(0.06);
   lepW_phi_fakes_TT_stack_2->GetYaxis()->SetTitleOffset(1.35);
   lepW_phi_fakes_TT_stack_2->GetYaxis()->SetTitleFont(42);
   lepW_phi_fakes_TT_stack_2->GetZaxis()->SetLabelFont(42);
   lepW_phi_fakes_TT_stack_2->GetZaxis()->SetLabelOffset(0.007);
   lepW_phi_fakes_TT_stack_2->GetZaxis()->SetLabelSize(0.05);
   lepW_phi_fakes_TT_stack_2->GetZaxis()->SetTitleSize(0.06);
   lepW_phi_fakes_TT_stack_2->GetZaxis()->SetTitleFont(42);
   lepW_phi_stack->Add(lepW_phi_fakes_TT_stack_2,"");
   
   TH1D *lepW_phi_fakes_DY_stack_3 = new TH1D("lepW_phi_fakes_DY_stack_3","dummy",10,-3.15,3.15);
   lepW_phi_fakes_DY_stack_3->SetBinContent(1,10.31713);
   lepW_phi_fakes_DY_stack_3->SetBinContent(2,8.597611);
   lepW_phi_fakes_DY_stack_3->SetBinContent(3,8.597611);
   lepW_phi_fakes_DY_stack_3->SetBinContent(4,15.4757);
   lepW_phi_fakes_DY_stack_3->SetBinContent(5,12.03665);
   lepW_phi_fakes_DY_stack_3->SetBinContent(6,8.597611);
   lepW_phi_fakes_DY_stack_3->SetBinContent(7,12.03665);
   lepW_phi_fakes_DY_stack_3->SetBinContent(8,10.31713);
   lepW_phi_fakes_DY_stack_3->SetBinContent(9,12.03665);
   lepW_phi_fakes_DY_stack_3->SetBinContent(10,18.91474);
   lepW_phi_fakes_DY_stack_3->SetBinError(1,4.211952);
   lepW_phi_fakes_DY_stack_3->SetBinError(2,3.844968);
   lepW_phi_fakes_DY_stack_3->SetBinError(3,3.844968);
   lepW_phi_fakes_DY_stack_3->SetBinError(4,5.158566);
   lepW_phi_fakes_DY_stack_3->SetBinError(5,4.549428);
   lepW_phi_fakes_DY_stack_3->SetBinError(6,3.844968);
   lepW_phi_fakes_DY_stack_3->SetBinError(7,4.549428);
   lepW_phi_fakes_DY_stack_3->SetBinError(8,4.211952);
   lepW_phi_fakes_DY_stack_3->SetBinError(9,4.549428);
   lepW_phi_fakes_DY_stack_3->SetBinError(10,5.70301);
   lepW_phi_fakes_DY_stack_3->SetEntries(72);

   ci = TColor::GetColor("#cccccc");
   lepW_phi_fakes_DY_stack_3->SetFillColor(ci);
   lepW_phi_fakes_DY_stack_3->SetMarkerStyle(0);
   lepW_phi_fakes_DY_stack_3->SetMarkerSize(1.1);
   lepW_phi_fakes_DY_stack_3->GetXaxis()->SetTitle("#phi(W lep.)");
   lepW_phi_fakes_DY_stack_3->GetXaxis()->SetMoreLogLabels();
   lepW_phi_fakes_DY_stack_3->GetXaxis()->SetLabelFont(42);
   lepW_phi_fakes_DY_stack_3->GetXaxis()->SetLabelOffset(0.007);
   lepW_phi_fakes_DY_stack_3->GetXaxis()->SetLabelSize(0.05);
   lepW_phi_fakes_DY_stack_3->GetXaxis()->SetTitleSize(0.06);
   lepW_phi_fakes_DY_stack_3->GetXaxis()->SetTitleOffset(0.9);
   lepW_phi_fakes_DY_stack_3->GetXaxis()->SetTitleFont(42);
   lepW_phi_fakes_DY_stack_3->GetYaxis()->SetTitle("Leptons");
   lepW_phi_fakes_DY_stack_3->GetYaxis()->SetLabelFont(42);
   lepW_phi_fakes_DY_stack_3->GetYaxis()->SetLabelOffset(0.007);
   lepW_phi_fakes_DY_stack_3->GetYaxis()->SetLabelSize(0.05);
   lepW_phi_fakes_DY_stack_3->GetYaxis()->SetTitleSize(0.06);
   lepW_phi_fakes_DY_stack_3->GetYaxis()->SetTitleOffset(1.35);
   lepW_phi_fakes_DY_stack_3->GetYaxis()->SetTitleFont(42);
   lepW_phi_fakes_DY_stack_3->GetZaxis()->SetLabelFont(42);
   lepW_phi_fakes_DY_stack_3->GetZaxis()->SetLabelOffset(0.007);
   lepW_phi_fakes_DY_stack_3->GetZaxis()->SetLabelSize(0.05);
   lepW_phi_fakes_DY_stack_3->GetZaxis()->SetTitleSize(0.06);
   lepW_phi_fakes_DY_stack_3->GetZaxis()->SetTitleFont(42);
   lepW_phi_stack->Add(lepW_phi_fakes_DY_stack_3,"");
   
   TH1D *lepW_phi_prompt_ZZ_stack_4 = new TH1D("lepW_phi_prompt_ZZ_stack_4","dummy",10,-3.15,3.15);
   lepW_phi_prompt_ZZ_stack_4->SetBinContent(1,7.155931);
   lepW_phi_prompt_ZZ_stack_4->SetBinContent(2,6.972446);
   lepW_phi_prompt_ZZ_stack_4->SetBinContent(3,6.972446);
   lepW_phi_prompt_ZZ_stack_4->SetBinContent(4,6.78896);
   lepW_phi_prompt_ZZ_stack_4->SetBinContent(5,7.155931);
   lepW_phi_prompt_ZZ_stack_4->SetBinContent(6,7.155931);
   lepW_phi_prompt_ZZ_stack_4->SetBinContent(7,7.706387);
   lepW_phi_prompt_ZZ_stack_4->SetBinContent(8,7.155931);
   lepW_phi_prompt_ZZ_stack_4->SetBinContent(9,7.706387);
   lepW_phi_prompt_ZZ_stack_4->SetBinContent(10,8.440329);
   lepW_phi_prompt_ZZ_stack_4->SetBinError(1,1.145866);
   lepW_phi_prompt_ZZ_stack_4->SetBinError(2,1.13108);
   lepW_phi_prompt_ZZ_stack_4->SetBinError(3,1.13108);
   lepW_phi_prompt_ZZ_stack_4->SetBinError(4,1.116098);
   lepW_phi_prompt_ZZ_stack_4->SetBinError(5,1.145866);
   lepW_phi_prompt_ZZ_stack_4->SetBinError(6,1.145866);
   lepW_phi_prompt_ZZ_stack_4->SetBinError(7,1.189121);
   lepW_phi_prompt_ZZ_stack_4->SetBinError(8,1.145866);
   lepW_phi_prompt_ZZ_stack_4->SetBinError(9,1.189121);
   lepW_phi_prompt_ZZ_stack_4->SetBinError(10,1.244459);
   lepW_phi_prompt_ZZ_stack_4->SetEntries(403);

   ci = TColor::GetColor("#00cc00");
   lepW_phi_prompt_ZZ_stack_4->SetFillColor(ci);
   lepW_phi_prompt_ZZ_stack_4->SetMarkerStyle(0);
   lepW_phi_prompt_ZZ_stack_4->SetMarkerSize(1.1);
   lepW_phi_prompt_ZZ_stack_4->GetXaxis()->SetTitle("#phi(W lep.)");
   lepW_phi_prompt_ZZ_stack_4->GetXaxis()->SetMoreLogLabels();
   lepW_phi_prompt_ZZ_stack_4->GetXaxis()->SetLabelFont(42);
   lepW_phi_prompt_ZZ_stack_4->GetXaxis()->SetLabelOffset(0.007);
   lepW_phi_prompt_ZZ_stack_4->GetXaxis()->SetLabelSize(0.05);
   lepW_phi_prompt_ZZ_stack_4->GetXaxis()->SetTitleSize(0.06);
   lepW_phi_prompt_ZZ_stack_4->GetXaxis()->SetTitleOffset(0.9);
   lepW_phi_prompt_ZZ_stack_4->GetXaxis()->SetTitleFont(42);
   lepW_phi_prompt_ZZ_stack_4->GetYaxis()->SetTitle("Leptons");
   lepW_phi_prompt_ZZ_stack_4->GetYaxis()->SetLabelFont(42);
   lepW_phi_prompt_ZZ_stack_4->GetYaxis()->SetLabelOffset(0.007);
   lepW_phi_prompt_ZZ_stack_4->GetYaxis()->SetLabelSize(0.05);
   lepW_phi_prompt_ZZ_stack_4->GetYaxis()->SetTitleSize(0.06);
   lepW_phi_prompt_ZZ_stack_4->GetYaxis()->SetTitleOffset(1.35);
   lepW_phi_prompt_ZZ_stack_4->GetYaxis()->SetTitleFont(42);
   lepW_phi_prompt_ZZ_stack_4->GetZaxis()->SetLabelFont(42);
   lepW_phi_prompt_ZZ_stack_4->GetZaxis()->SetLabelOffset(0.007);
   lepW_phi_prompt_ZZ_stack_4->GetZaxis()->SetLabelSize(0.05);
   lepW_phi_prompt_ZZ_stack_4->GetZaxis()->SetTitleSize(0.06);
   lepW_phi_prompt_ZZ_stack_4->GetZaxis()->SetTitleFont(42);
   lepW_phi_stack->Add(lepW_phi_prompt_ZZ_stack_4,"");
   
   TH1D *lepW_phi_prompt_WZ_stack_5 = new TH1D("lepW_phi_prompt_WZ_stack_5","dummy",10,-3.15,3.15);
   lepW_phi_prompt_WZ_stack_5->SetBinContent(1,123.1902);
   lepW_phi_prompt_WZ_stack_5->SetBinContent(2,123.552);
   lepW_phi_prompt_WZ_stack_5->SetBinContent(3,122.8284);
   lepW_phi_prompt_WZ_stack_5->SetBinContent(4,122.9188);
   lepW_phi_prompt_WZ_stack_5->SetBinContent(5,129.9738);
   lepW_phi_prompt_WZ_stack_5->SetBinContent(6,128.1648);
   lepW_phi_prompt_WZ_stack_5->SetBinContent(7,128.1648);
   lepW_phi_prompt_WZ_stack_5->SetBinContent(8,120.929);
   lepW_phi_prompt_WZ_stack_5->SetBinContent(9,123.3711);
   lepW_phi_prompt_WZ_stack_5->SetBinContent(10,126.989);
   lepW_phi_prompt_WZ_stack_5->SetBinError(1,3.338009);
   lepW_phi_prompt_WZ_stack_5->SetBinError(2,3.342907);
   lepW_phi_prompt_WZ_stack_5->SetBinError(3,3.333104);
   lepW_phi_prompt_WZ_stack_5->SetBinError(4,3.334331);
   lepW_phi_prompt_WZ_stack_5->SetBinError(5,3.428683);
   lepW_phi_prompt_WZ_stack_5->SetBinError(6,3.404739);
   lepW_phi_prompt_WZ_stack_5->SetBinError(7,3.404739);
   lepW_phi_prompt_WZ_stack_5->SetBinError(8,3.307232);
   lepW_phi_prompt_WZ_stack_5->SetBinError(9,3.340459);
   lepW_phi_prompt_WZ_stack_5->SetBinError(10,3.389085);
   lepW_phi_prompt_WZ_stack_5->SetEntries(13825);

   ci = TColor::GetColor("#ffcc00");
   lepW_phi_prompt_WZ_stack_5->SetFillColor(ci);
   lepW_phi_prompt_WZ_stack_5->SetMarkerStyle(0);
   lepW_phi_prompt_WZ_stack_5->SetMarkerSize(1.1);
   lepW_phi_prompt_WZ_stack_5->GetXaxis()->SetTitle("#phi(W lep.)");
   lepW_phi_prompt_WZ_stack_5->GetXaxis()->SetMoreLogLabels();
   lepW_phi_prompt_WZ_stack_5->GetXaxis()->SetLabelFont(42);
   lepW_phi_prompt_WZ_stack_5->GetXaxis()->SetLabelOffset(0.007);
   lepW_phi_prompt_WZ_stack_5->GetXaxis()->SetLabelSize(0.05);
   lepW_phi_prompt_WZ_stack_5->GetXaxis()->SetTitleSize(0.06);
   lepW_phi_prompt_WZ_stack_5->GetXaxis()->SetTitleOffset(0.9);
   lepW_phi_prompt_WZ_stack_5->GetXaxis()->SetTitleFont(42);
   lepW_phi_prompt_WZ_stack_5->GetYaxis()->SetTitle("Leptons");
   lepW_phi_prompt_WZ_stack_5->GetYaxis()->SetLabelFont(42);
   lepW_phi_prompt_WZ_stack_5->GetYaxis()->SetLabelOffset(0.007);
   lepW_phi_prompt_WZ_stack_5->GetYaxis()->SetLabelSize(0.05);
   lepW_phi_prompt_WZ_stack_5->GetYaxis()->SetTitleSize(0.06);
   lepW_phi_prompt_WZ_stack_5->GetYaxis()->SetTitleOffset(1.35);
   lepW_phi_prompt_WZ_stack_5->GetYaxis()->SetTitleFont(42);
   lepW_phi_prompt_WZ_stack_5->GetZaxis()->SetLabelFont(42);
   lepW_phi_prompt_WZ_stack_5->GetZaxis()->SetLabelOffset(0.007);
   lepW_phi_prompt_WZ_stack_5->GetZaxis()->SetLabelSize(0.05);
   lepW_phi_prompt_WZ_stack_5->GetZaxis()->SetTitleSize(0.06);
   lepW_phi_prompt_WZ_stack_5->GetZaxis()->SetTitleFont(42);
   lepW_phi_stack->Add(lepW_phi_prompt_WZ_stack_5,"");
   lepW_phi_stack->Draw("same hist");
   
   TH1D *lepW_phi_total__86 = new TH1D("lepW_phi_total__86","dummy",10,-3.15,3.15);
   lepW_phi_total__86->SetBinContent(1,145.7058);
   lepW_phi_total__86->SetBinContent(2,144.9377);
   lepW_phi_total__86->SetBinContent(3,144.0296);
   lepW_phi_total__86->SetBinContent(4,150.503);
   lepW_phi_total__86->SetBinContent(5,154.6287);
   lepW_phi_total__86->SetBinContent(6,149.8977);
   lepW_phi_total__86->SetBinContent(7,153.2065);
   lepW_phi_total__86->SetBinContent(8,143.9974);
   lepW_phi_total__86->SetBinContent(9,148.8991);
   lepW_phi_total__86->SetBinContent(10,160.1389);
   lepW_phi_total__86->SetBinError(1,5.529096);
   lepW_phi_total__86->SetBinError(2,5.256219);
   lepW_phi_total__86->SetBinError(3,5.249025);
   lepW_phi_total__86->SetBinError(4,6.271201);
   lepW_phi_total__86->SetBinError(5,5.843486);
   lepW_phi_total__86->SetBinError(6,5.300245);
   lepW_phi_total__86->SetBinError(7,5.836181);
   lepW_phi_total__86->SetBinError(8,5.511836);
   lepW_phi_total__86->SetBinError(9,5.801262);
   lepW_phi_total__86->SetBinError(10,6.778814);
   lepW_phi_total__86->SetMinimum(0);
   lepW_phi_total__86->SetMaximum(237.9428);
   lepW_phi_total__86->SetEntries(15152);
   lepW_phi_total__86->SetDirectory(0);

   ci = TColor::GetColor("#00cc00");
   lepW_phi_total__86->SetFillColor(ci);
   lepW_phi_total__86->SetMarkerStyle(20);
   lepW_phi_total__86->SetMarkerSize(1.1);
   lepW_phi_total__86->GetXaxis()->SetTitle("#phi(W lep.)");
   lepW_phi_total__86->GetXaxis()->SetMoreLogLabels();
   lepW_phi_total__86->GetXaxis()->SetLabelFont(42);
   lepW_phi_total__86->GetXaxis()->SetLabelOffset(999);
   lepW_phi_total__86->GetXaxis()->SetLabelSize(0.05);
   lepW_phi_total__86->GetXaxis()->SetTitleSize(0.05);
   lepW_phi_total__86->GetXaxis()->SetTitleOffset(999);
   lepW_phi_total__86->GetXaxis()->SetTitleFont(42);
   lepW_phi_total__86->GetYaxis()->SetTitle("Leptons");
   lepW_phi_total__86->GetYaxis()->SetLabelFont(42);
   lepW_phi_total__86->GetYaxis()->SetLabelOffset(0.007);
   lepW_phi_total__86->GetYaxis()->SetLabelSize(0.05);
   lepW_phi_total__86->GetYaxis()->SetTitleSize(0.06);
   lepW_phi_total__86->GetYaxis()->SetTitleOffset(1.48);
   lepW_phi_total__86->GetYaxis()->SetTitleFont(42);
   lepW_phi_total__86->GetZaxis()->SetLabelFont(42);
   lepW_phi_total__86->GetZaxis()->SetLabelOffset(0.007);
   lepW_phi_total__86->GetZaxis()->SetLabelSize(0.05);
   lepW_phi_total__86->GetZaxis()->SetTitleSize(0.06);
   lepW_phi_total__86->GetZaxis()->SetTitleFont(42);
   lepW_phi_total__86->Draw("AXIS SAME");
   
   Double_t lepW_phi_total_errors_fx3106[10] = {
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
   Double_t lepW_phi_total_errors_fy3106[10] = {
   145.7058,
   144.9377,
   144.0296,
   150.503,
   154.6287,
   149.8977,
   153.2065,
   143.9974,
   148.8991,
   160.1389};
   Double_t lepW_phi_total_errors_felx3106[10] = {
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
   Double_t lepW_phi_total_errors_fely3106[10] = {
   5.529096,
   5.256219,
   5.249025,
   6.271201,
   5.843486,
   5.300245,
   5.836181,
   5.511836,
   5.801262,
   6.778814};
   Double_t lepW_phi_total_errors_fehx3106[10] = {
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
   Double_t lepW_phi_total_errors_fehy3106[10] = {
   5.529096,
   5.256219,
   5.249025,
   6.271201,
   5.843486,
   5.300245,
   5.836181,
   5.511836,
   5.801262,
   6.778814};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(10,lepW_phi_total_errors_fx3106,lepW_phi_total_errors_fy3106,lepW_phi_total_errors_felx3106,lepW_phi_total_errors_fehx3106,lepW_phi_total_errors_fely3106,lepW_phi_total_errors_fehy3106);
   grae->SetName("lepW_phi_total_errors");
   grae->SetTitle("Graph");
   grae->SetFillColor(1);
   grae->SetFillStyle(3013);
   grae->SetMarkerStyle(0);
   
   TH1F *Graph_lepW_phi_total_errors3106 = new TH1F("Graph_lepW_phi_total_errors3106","Graph",100,-3.78,3.78);
   Graph_lepW_phi_total_errors3106->SetMinimum(135.6423);
   Graph_lepW_phi_total_errors3106->SetMaximum(169.7609);
   Graph_lepW_phi_total_errors3106->SetDirectory(0);
   Graph_lepW_phi_total_errors3106->SetStats(0);
   Graph_lepW_phi_total_errors3106->SetLineStyle(0);
   Graph_lepW_phi_total_errors3106->SetMarkerStyle(20);
   Graph_lepW_phi_total_errors3106->GetXaxis()->SetLabelFont(42);
   Graph_lepW_phi_total_errors3106->GetXaxis()->SetLabelOffset(0.007);
   Graph_lepW_phi_total_errors3106->GetXaxis()->SetLabelSize(0.05);
   Graph_lepW_phi_total_errors3106->GetXaxis()->SetTitleSize(0.06);
   Graph_lepW_phi_total_errors3106->GetXaxis()->SetTitleOffset(0.9);
   Graph_lepW_phi_total_errors3106->GetXaxis()->SetTitleFont(42);
   Graph_lepW_phi_total_errors3106->GetYaxis()->SetLabelFont(42);
   Graph_lepW_phi_total_errors3106->GetYaxis()->SetLabelOffset(0.007);
   Graph_lepW_phi_total_errors3106->GetYaxis()->SetLabelSize(0.05);
   Graph_lepW_phi_total_errors3106->GetYaxis()->SetTitleSize(0.06);
   Graph_lepW_phi_total_errors3106->GetYaxis()->SetTitleOffset(1.35);
   Graph_lepW_phi_total_errors3106->GetYaxis()->SetTitleFont(42);
   Graph_lepW_phi_total_errors3106->GetZaxis()->SetLabelFont(42);
   Graph_lepW_phi_total_errors3106->GetZaxis()->SetLabelOffset(0.007);
   Graph_lepW_phi_total_errors3106->GetZaxis()->SetLabelSize(0.05);
   Graph_lepW_phi_total_errors3106->GetZaxis()->SetTitleSize(0.06);
   Graph_lepW_phi_total_errors3106->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_lepW_phi_total_errors3106);
   
   grae->Draw("pe2 ");
   
   Double_t lepW_phi_data_graph_fx3107[10] = {
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
   Double_t lepW_phi_data_graph_fy3107[10] = {
   152,
   149,
   134,
   139,
   165,
   164,
   132,
   159,
   158,
   161};
   Double_t lepW_phi_data_graph_felx3107[10] = {
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
   Double_t lepW_phi_data_graph_fely3107[10] = {
   12.31551,
   12.1931,
   11.56162,
   11.77587,
   12.83247,
   12.79345,
   11.47479,
   12.59651,
   12.55675,
   12.67566};
   Double_t lepW_phi_data_graph_fehx3107[10] = {
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
   Double_t lepW_phi_data_graph_fehy3107[10] = {
   13.35617,
   13.23417,
   12.60492,
   12.8184,
   13.8715,
   13.83259,
   12.51843,
   13.63627,
   13.59664,
   13.71516};
   grae = new TGraphAsymmErrors(10,lepW_phi_data_graph_fx3107,lepW_phi_data_graph_fy3107,lepW_phi_data_graph_felx3107,lepW_phi_data_graph_fehx3107,lepW_phi_data_graph_fely3107,lepW_phi_data_graph_fehy3107);
   grae->SetName("lepW_phi_data_graph");
   grae->SetTitle("Graph");
   grae->SetFillStyle(1000);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.1);
   
   TH1F *Graph_lepW_phi_data_graph3107 = new TH1F("Graph_lepW_phi_data_graph3107","Graph",100,-3.78,3.78);
   Graph_lepW_phi_data_graph3107->SetMinimum(114.6906);
   Graph_lepW_phi_data_graph3107->SetMaximum(184.7061);
   Graph_lepW_phi_data_graph3107->SetDirectory(0);
   Graph_lepW_phi_data_graph3107->SetStats(0);
   Graph_lepW_phi_data_graph3107->SetLineStyle(0);
   Graph_lepW_phi_data_graph3107->SetMarkerStyle(20);
   Graph_lepW_phi_data_graph3107->GetXaxis()->SetLabelFont(42);
   Graph_lepW_phi_data_graph3107->GetXaxis()->SetLabelOffset(0.007);
   Graph_lepW_phi_data_graph3107->GetXaxis()->SetLabelSize(0.05);
   Graph_lepW_phi_data_graph3107->GetXaxis()->SetTitleSize(0.06);
   Graph_lepW_phi_data_graph3107->GetXaxis()->SetTitleOffset(0.9);
   Graph_lepW_phi_data_graph3107->GetXaxis()->SetTitleFont(42);
   Graph_lepW_phi_data_graph3107->GetYaxis()->SetLabelFont(42);
   Graph_lepW_phi_data_graph3107->GetYaxis()->SetLabelOffset(0.007);
   Graph_lepW_phi_data_graph3107->GetYaxis()->SetLabelSize(0.05);
   Graph_lepW_phi_data_graph3107->GetYaxis()->SetTitleSize(0.06);
   Graph_lepW_phi_data_graph3107->GetYaxis()->SetTitleOffset(1.35);
   Graph_lepW_phi_data_graph3107->GetYaxis()->SetTitleFont(42);
   Graph_lepW_phi_data_graph3107->GetZaxis()->SetLabelFont(42);
   Graph_lepW_phi_data_graph3107->GetZaxis()->SetLabelOffset(0.007);
   Graph_lepW_phi_data_graph3107->GetZaxis()->SetLabelSize(0.05);
   Graph_lepW_phi_data_graph3107->GetZaxis()->SetTitleSize(0.06);
   Graph_lepW_phi_data_graph3107->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_lepW_phi_data_graph3107);
   
   grae->Draw("pz ");
   
   TLegend *leg = new TLegend(0.62,0.628,0.9,0.91,NULL,"brNDC");
   leg->SetBorderSize(1);
   leg->SetTextSize(0.036);
   leg->SetLineColor(0);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("lepW_phi_data","Data","LPE");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1.1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("lepW_phi_prompt_WZ_stack_5","WZ","F");

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
   entry=leg->AddEntry("lepW_phi_prompt_ZZ_stack_4","qqZZ","F");

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
   entry=leg->AddEntry("lepW_phi_fakes_DY_stack_3","Fakes DY","F");

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
   entry=leg->AddEntry("lepW_phi_fakes_TT_stack_2","Fakes TT","F");

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
   entry=leg->AddEntry("lepW_phi_total_errors","Total unc.","F");
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
   lepW_phi_canvas->cd();
  
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
   
   TH1D *lepW_phi_total__87 = new TH1D("lepW_phi_total__87","dummy",10,-3.15,3.15);
   lepW_phi_total__87->SetBinContent(1,1);
   lepW_phi_total__87->SetBinContent(2,1);
   lepW_phi_total__87->SetBinContent(3,1);
   lepW_phi_total__87->SetBinContent(4,1);
   lepW_phi_total__87->SetBinContent(5,1);
   lepW_phi_total__87->SetBinContent(6,1);
   lepW_phi_total__87->SetBinContent(7,1);
   lepW_phi_total__87->SetBinContent(8,1);
   lepW_phi_total__87->SetBinContent(9,1);
   lepW_phi_total__87->SetBinContent(10,1);
   lepW_phi_total__87->SetMinimum(0.5);
   lepW_phi_total__87->SetMaximum(2);
   lepW_phi_total__87->SetEntries(15162);

   ci = TColor::GetColor("#00cc00");
   lepW_phi_total__87->SetFillColor(ci);

   ci = TColor::GetColor("#6666ff");
   lepW_phi_total__87->SetMarkerColor(ci);
   lepW_phi_total__87->SetMarkerSize(1.1);
   lepW_phi_total__87->GetXaxis()->SetTitle("#phi(W lep.)");
   lepW_phi_total__87->GetXaxis()->SetMoreLogLabels();
   lepW_phi_total__87->GetXaxis()->SetLabelFont(42);
   lepW_phi_total__87->GetXaxis()->SetLabelOffset(0.015);
   lepW_phi_total__87->GetXaxis()->SetLabelSize(0.1);
   lepW_phi_total__87->GetXaxis()->SetTitleSize(0.14);
   lepW_phi_total__87->GetXaxis()->SetTitleFont(42);
   lepW_phi_total__87->GetYaxis()->SetTitle("Data/pred.");
   lepW_phi_total__87->GetYaxis()->SetDecimals();
   lepW_phi_total__87->GetYaxis()->SetNdivisions(505);
   lepW_phi_total__87->GetYaxis()->SetLabelFont(42);
   lepW_phi_total__87->GetYaxis()->SetLabelOffset(0.01);
   lepW_phi_total__87->GetYaxis()->SetLabelSize(0.11);
   lepW_phi_total__87->GetYaxis()->SetTitleSize(0.14);
   lepW_phi_total__87->GetYaxis()->SetTitleOffset(0.62);
   lepW_phi_total__87->GetYaxis()->SetTitleFont(42);
   lepW_phi_total__87->GetZaxis()->SetLabelFont(42);
   lepW_phi_total__87->GetZaxis()->SetLabelOffset(0.007);
   lepW_phi_total__87->GetZaxis()->SetLabelSize(0.05);
   lepW_phi_total__87->GetZaxis()->SetTitleSize(0.06);
   lepW_phi_total__87->GetZaxis()->SetTitleFont(42);
   lepW_phi_total__87->Draw("AXIS");
   
   Double_t lepW_phi_total_errors_fx3108[10] = {
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
   Double_t lepW_phi_total_errors_fy3108[10] = {
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
   Double_t lepW_phi_total_errors_felx3108[10] = {
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
   Double_t lepW_phi_total_errors_fely3108[10] = {
   0.03794699,
   0.03626537,
   0.03644407,
   0.04166827,
   0.03779043,
   0.03535908,
   0.03809355,
   0.03827733,
   0.03896103,
   0.04233084};
   Double_t lepW_phi_total_errors_fehx3108[10] = {
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
   Double_t lepW_phi_total_errors_fehy3108[10] = {
   0.03794699,
   0.03626537,
   0.03644407,
   0.04166827,
   0.03779043,
   0.03535908,
   0.03809355,
   0.03827733,
   0.03896103,
   0.04233084};
   grae = new TGraphAsymmErrors(10,lepW_phi_total_errors_fx3108,lepW_phi_total_errors_fy3108,lepW_phi_total_errors_felx3108,lepW_phi_total_errors_fehx3108,lepW_phi_total_errors_fely3108,lepW_phi_total_errors_fehy3108);
   grae->SetName("lepW_phi_total_errors");
   grae->SetTitle("Graph");

   ci = TColor::GetColor("#00ffff");
   grae->SetFillColor(ci);

   ci = TColor::GetColor("#00ffff");
   grae->SetMarkerColor(ci);
   grae->Draw("e2");
   
   Double_t lepW_phi_total_errors_fx3109[10] = {
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
   Double_t lepW_phi_total_errors_fy3109[10] = {
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
   Double_t lepW_phi_total_errors_felx3109[10] = {
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
   Double_t lepW_phi_total_errors_fely3109[10] = {
   0.03794699,
   0.03626537,
   0.03644407,
   0.04166827,
   0.03779043,
   0.03535908,
   0.03809355,
   0.03827733,
   0.03896103,
   0.04233084};
   Double_t lepW_phi_total_errors_fehx3109[10] = {
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
   Double_t lepW_phi_total_errors_fehy3109[10] = {
   0.03794699,
   0.03626537,
   0.03644407,
   0.04166827,
   0.03779043,
   0.03535908,
   0.03809355,
   0.03827733,
   0.03896103,
   0.04233084};
   grae = new TGraphAsymmErrors(10,lepW_phi_total_errors_fx3109,lepW_phi_total_errors_fy3109,lepW_phi_total_errors_felx3109,lepW_phi_total_errors_fehx3109,lepW_phi_total_errors_fely3109,lepW_phi_total_errors_fehy3109);
   grae->SetName("lepW_phi_total_errors");
   grae->SetTitle("Graph");

   ci = TColor::GetColor("#6666ff");
   grae->SetFillColor(ci);

   ci = TColor::GetColor("#6666ff");
   grae->SetMarkerColor(ci);
   grae->Draw("e2 ");
   
   TH1D *lepW_phi_total__88 = new TH1D("lepW_phi_total__88","dummy",10,-3.15,3.15);
   lepW_phi_total__88->SetBinContent(1,1);
   lepW_phi_total__88->SetBinContent(2,1);
   lepW_phi_total__88->SetBinContent(3,1);
   lepW_phi_total__88->SetBinContent(4,1);
   lepW_phi_total__88->SetBinContent(5,1);
   lepW_phi_total__88->SetBinContent(6,1);
   lepW_phi_total__88->SetBinContent(7,1);
   lepW_phi_total__88->SetBinContent(8,1);
   lepW_phi_total__88->SetBinContent(9,1);
   lepW_phi_total__88->SetBinContent(10,1);
   lepW_phi_total__88->SetMinimum(0.5);
   lepW_phi_total__88->SetMaximum(2);
   lepW_phi_total__88->SetEntries(15162);

   ci = TColor::GetColor("#00cc00");
   lepW_phi_total__88->SetFillColor(ci);

   ci = TColor::GetColor("#6666ff");
   lepW_phi_total__88->SetMarkerColor(ci);
   lepW_phi_total__88->SetMarkerSize(1.1);
   lepW_phi_total__88->GetXaxis()->SetTitle("#phi(W lep.)");
   lepW_phi_total__88->GetXaxis()->SetMoreLogLabels();
   lepW_phi_total__88->GetXaxis()->SetLabelFont(42);
   lepW_phi_total__88->GetXaxis()->SetLabelOffset(0.015);
   lepW_phi_total__88->GetXaxis()->SetLabelSize(0.1);
   lepW_phi_total__88->GetXaxis()->SetTitleSize(0.14);
   lepW_phi_total__88->GetXaxis()->SetTitleFont(42);
   lepW_phi_total__88->GetYaxis()->SetTitle("Data/pred.");
   lepW_phi_total__88->GetYaxis()->SetDecimals();
   lepW_phi_total__88->GetYaxis()->SetNdivisions(505);
   lepW_phi_total__88->GetYaxis()->SetLabelFont(42);
   lepW_phi_total__88->GetYaxis()->SetLabelOffset(0.01);
   lepW_phi_total__88->GetYaxis()->SetLabelSize(0.11);
   lepW_phi_total__88->GetYaxis()->SetTitleSize(0.14);
   lepW_phi_total__88->GetYaxis()->SetTitleOffset(0.62);
   lepW_phi_total__88->GetYaxis()->SetTitleFont(42);
   lepW_phi_total__88->GetZaxis()->SetLabelFont(42);
   lepW_phi_total__88->GetZaxis()->SetLabelOffset(0.007);
   lepW_phi_total__88->GetZaxis()->SetLabelSize(0.05);
   lepW_phi_total__88->GetZaxis()->SetTitleSize(0.06);
   lepW_phi_total__88->GetZaxis()->SetTitleFont(42);
   lepW_phi_total__88->Draw("AXIS SAME");
   TLine *line = new TLine(-3.15,1,3.15,1);
   line->SetLineColor(58);
   line->SetLineWidth(2);
   line->Draw();
   
   Double_t data_div_fx3110[10] = {
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
   Double_t data_div_fy3110[10] = {
   1.043198,
   1.028028,
   0.9303643,
   0.9235695,
   1.067072,
   1.094079,
   0.861582,
   1.104187,
   1.061121,
   1.005377};
   Double_t data_div_felx3110[10] = {
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
   Double_t data_div_fely3110[10] = {
   0.08452313,
   0.08412649,
   0.08027251,
   0.07824345,
   0.08298894,
   0.08534786,
   0.07489755,
   0.08747736,
   0.08433063,
   0.07915412};
   Double_t data_div_fehx3110[10] = {
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
   Double_t data_div_fehy3110[10] = {
   0.09166534,
   0.09130935,
   0.08751621,
   0.08517035,
   0.08970842,
   0.09228021,
   0.08170949,
   0.09469801,
   0.09131442,
   0.08564541};
   grae = new TGraphAsymmErrors(10,data_div_fx3110,data_div_fy3110,data_div_felx3110,data_div_fehx3110,data_div_fely3110,data_div_fehy3110);
   grae->SetName("data_div");
   grae->SetTitle("Graph");
   grae->SetFillStyle(1000);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.1);
   
   TH1F *Graph_lepW_phi_data_graph3110 = new TH1F("Graph_lepW_phi_data_graph3110","Graph",100,-3.78,3.78);
   Graph_lepW_phi_data_graph3110->SetMinimum(114.6906);
   Graph_lepW_phi_data_graph3110->SetMaximum(184.7061);
   Graph_lepW_phi_data_graph3110->SetDirectory(0);
   Graph_lepW_phi_data_graph3110->SetStats(0);
   Graph_lepW_phi_data_graph3110->SetLineStyle(0);
   Graph_lepW_phi_data_graph3110->SetMarkerStyle(20);
   Graph_lepW_phi_data_graph3110->GetXaxis()->SetLabelFont(42);
   Graph_lepW_phi_data_graph3110->GetXaxis()->SetLabelOffset(0.007);
   Graph_lepW_phi_data_graph3110->GetXaxis()->SetLabelSize(0.05);
   Graph_lepW_phi_data_graph3110->GetXaxis()->SetTitleSize(0.06);
   Graph_lepW_phi_data_graph3110->GetXaxis()->SetTitleOffset(0.9);
   Graph_lepW_phi_data_graph3110->GetXaxis()->SetTitleFont(42);
   Graph_lepW_phi_data_graph3110->GetYaxis()->SetLabelFont(42);
   Graph_lepW_phi_data_graph3110->GetYaxis()->SetLabelOffset(0.007);
   Graph_lepW_phi_data_graph3110->GetYaxis()->SetLabelSize(0.05);
   Graph_lepW_phi_data_graph3110->GetYaxis()->SetTitleSize(0.06);
   Graph_lepW_phi_data_graph3110->GetYaxis()->SetTitleOffset(1.35);
   Graph_lepW_phi_data_graph3110->GetYaxis()->SetTitleFont(42);
   Graph_lepW_phi_data_graph3110->GetZaxis()->SetLabelFont(42);
   Graph_lepW_phi_data_graph3110->GetZaxis()->SetLabelOffset(0.007);
   Graph_lepW_phi_data_graph3110->GetZaxis()->SetLabelSize(0.05);
   Graph_lepW_phi_data_graph3110->GetZaxis()->SetTitleSize(0.06);
   Graph_lepW_phi_data_graph3110->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_lepW_phi_data_graph3110);
   
   grae->Draw("pz ");
   
   leg = new TLegend(0,0,0,0,NULL,"brNDC");
   leg->SetBorderSize(1);
   leg->SetTextSize(0.084);
   leg->SetLineColor(0);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   entry=leg->AddEntry("lepW_phi_total_errors","stat. unc.","F");
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
   entry=leg->AddEntry("lepW_phi_total_errors","total unc.","F");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   leg->Draw();
   pad2->Modified();
   lepW_phi_canvas->cd();
   lepW_phi_canvas->Modified();
   lepW_phi_canvas->cd();
   lepW_phi_canvas->SetSelected(lepW_phi_canvas);
}
