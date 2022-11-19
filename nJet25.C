void nJet25()
{
//=========Macro generated from canvas: nJet25_canvas/nJet25
//=========  (Fri Nov 18 13:07:59 2022) by ROOT version 6.12/07
   TCanvas *nJet25_canvas = new TCanvas("nJet25_canvas", "nJet25",0,0,600,750);
   gStyle->SetOptFit(1);
   gStyle->SetOptStat(0);
   gStyle->SetOptTitle(0);
   nJet25_canvas->SetHighLightColor(2);
   nJet25_canvas->Range(0,0,1,1);
   nJet25_canvas->SetFillColor(0);
   nJet25_canvas->SetBorderMode(0);
   nJet25_canvas->SetBorderSize(2);
   nJet25_canvas->SetTickx(1);
   nJet25_canvas->SetTicky(1);
   nJet25_canvas->SetLeftMargin(0.18);
   nJet25_canvas->SetRightMargin(0.04);
   nJet25_canvas->SetBottomMargin(0.13);
   nJet25_canvas->SetFrameFillStyle(0);
   nJet25_canvas->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: pad1
   TPad *pad1 = new TPad("pad1", "pad1",0,0.3,1,1);
   pad1->Draw();
   pad1->cd();
   pad1->Range(-2.576923,-25.18545,8.961538,982.2327);
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
   Double_t xAxis11[10] = {-0.5, 0.5, 1.5, 2.5, 3.5, 4.5, 5.5, 6.5, 7.5, 8.5}; 
   
   TH1D *nJet25_total__101 = new TH1D("nJet25_total__101","dummy",9, xAxis11);
   nJet25_total__101->SetBinContent(1,845.4617);
   nJet25_total__101->SetBinContent(2,433.7261);
   nJet25_total__101->SetBinContent(3,147.4377);
   nJet25_total__101->SetBinContent(4,47.85149);
   nJet25_total__101->SetBinContent(5,11.35347);
   nJet25_total__101->SetBinContent(6,7.229527);
   nJet25_total__101->SetBinContent(7,2.661175);
   nJet25_total__101->SetBinContent(8,0.06649422);
   nJet25_total__101->SetBinContent(9,0.1569422);
   nJet25_total__101->SetBinError(1,14.13427);
   nJet25_total__101->SetBinError(2,9.273193);
   nJet25_total__101->SetBinError(3,4.434544);
   nJet25_total__101->SetBinError(4,3.940361);
   nJet25_total__101->SetBinError(5,1.028701);
   nJet25_total__101->SetBinError(6,2.509441);
   nJet25_total__101->SetBinError(7,1.74137);
   nJet25_total__101->SetBinError(8,0.06649422);
   nJet25_total__101->SetBinError(9,0.1122601);
   nJet25_total__101->SetMinimum(0);
   nJet25_total__101->SetMaximum(921.7876);
   nJet25_total__101->SetEntries(15152);
   nJet25_total__101->SetDirectory(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#00cc00");
   nJet25_total__101->SetFillColor(ci);
   nJet25_total__101->SetMarkerStyle(20);
   nJet25_total__101->SetMarkerSize(1.1);
   nJet25_total__101->GetXaxis()->SetTitle("N(jet, p_{T} > 25)");
   nJet25_total__101->GetXaxis()->SetMoreLogLabels();
   nJet25_total__101->GetXaxis()->SetLabelFont(42);
   nJet25_total__101->GetXaxis()->SetLabelOffset(999);
   nJet25_total__101->GetXaxis()->SetLabelSize(0.05);
   nJet25_total__101->GetXaxis()->SetTitleSize(0.05);
   nJet25_total__101->GetXaxis()->SetTitleOffset(999);
   nJet25_total__101->GetXaxis()->SetTitleFont(42);
   nJet25_total__101->GetYaxis()->SetTitle("Events");
   nJet25_total__101->GetYaxis()->SetLabelFont(42);
   nJet25_total__101->GetYaxis()->SetLabelOffset(0.007);
   nJet25_total__101->GetYaxis()->SetLabelSize(0.05);
   nJet25_total__101->GetYaxis()->SetTitleSize(0.06);
   nJet25_total__101->GetYaxis()->SetTitleOffset(1.48);
   nJet25_total__101->GetYaxis()->SetTitleFont(42);
   nJet25_total__101->GetZaxis()->SetLabelFont(42);
   nJet25_total__101->GetZaxis()->SetLabelOffset(0.007);
   nJet25_total__101->GetZaxis()->SetLabelSize(0.05);
   nJet25_total__101->GetZaxis()->SetTitleSize(0.06);
   nJet25_total__101->GetZaxis()->SetTitleFont(42);
   nJet25_total__101->Draw("HIST");
   
   THStack *nJet25_stack = new THStack();
   nJet25_stack->SetName("nJet25_stack");
   nJet25_stack->SetTitle("nJet25");
   Double_t xAxis12[10] = {-0.5, 0.5, 1.5, 2.5, 3.5, 4.5, 5.5, 6.5, 7.5, 8.5}; 
   
   TH1F *nJet25_stack_stack_26 = new TH1F("nJet25_stack_stack_26","nJet25",9, xAxis12);
   nJet25_stack_stack_26->SetMinimum(0);
   nJet25_stack_stack_26->SetMaximum(887.7348);
   nJet25_stack_stack_26->SetDirectory(0);
   nJet25_stack_stack_26->SetStats(0);
   nJet25_stack_stack_26->SetLineStyle(0);
   nJet25_stack_stack_26->SetMarkerStyle(20);
   nJet25_stack_stack_26->GetXaxis()->SetLabelFont(42);
   nJet25_stack_stack_26->GetXaxis()->SetLabelOffset(0.007);
   nJet25_stack_stack_26->GetXaxis()->SetLabelSize(0.05);
   nJet25_stack_stack_26->GetXaxis()->SetTitleSize(0.06);
   nJet25_stack_stack_26->GetXaxis()->SetTitleOffset(0.9);
   nJet25_stack_stack_26->GetXaxis()->SetTitleFont(42);
   nJet25_stack_stack_26->GetYaxis()->SetLabelFont(42);
   nJet25_stack_stack_26->GetYaxis()->SetLabelOffset(0.007);
   nJet25_stack_stack_26->GetYaxis()->SetLabelSize(0.05);
   nJet25_stack_stack_26->GetYaxis()->SetTitleSize(0.06);
   nJet25_stack_stack_26->GetYaxis()->SetTitleOffset(1.35);
   nJet25_stack_stack_26->GetYaxis()->SetTitleFont(42);
   nJet25_stack_stack_26->GetZaxis()->SetLabelFont(42);
   nJet25_stack_stack_26->GetZaxis()->SetLabelOffset(0.007);
   nJet25_stack_stack_26->GetZaxis()->SetLabelSize(0.05);
   nJet25_stack_stack_26->GetZaxis()->SetTitleSize(0.06);
   nJet25_stack_stack_26->GetZaxis()->SetTitleFont(42);
   nJet25_stack->SetHistogram(nJet25_stack_stack_26);
   
   Double_t xAxis13[10] = {-0.5, 0.5, 1.5, 2.5, 3.5, 4.5, 5.5, 6.5, 7.5, 8.5}; 
   
   TH1D *nJet25_fakes_VV_stack_1 = new TH1D("nJet25_fakes_VV_stack_1","dummy",9, xAxis13);
   nJet25_fakes_VV_stack_1->SetBinContent(1,0.4859669);
   nJet25_fakes_VV_stack_1->SetBinContent(2,0.1943867);
   nJet25_fakes_VV_stack_1->SetBinError(1,0.217331);
   nJet25_fakes_VV_stack_1->SetBinError(2,0.1374522);
   nJet25_fakes_VV_stack_1->SetEntries(11);

   ci = TColor::GetColor("#2e3294");
   nJet25_fakes_VV_stack_1->SetFillColor(ci);
   nJet25_fakes_VV_stack_1->SetMarkerStyle(0);
   nJet25_fakes_VV_stack_1->SetMarkerSize(1.1);
   nJet25_fakes_VV_stack_1->GetXaxis()->SetTitle("N(jet, p_{T} > 25)");
   nJet25_fakes_VV_stack_1->GetXaxis()->SetMoreLogLabels();
   nJet25_fakes_VV_stack_1->GetXaxis()->SetLabelFont(42);
   nJet25_fakes_VV_stack_1->GetXaxis()->SetLabelOffset(0.007);
   nJet25_fakes_VV_stack_1->GetXaxis()->SetLabelSize(0.05);
   nJet25_fakes_VV_stack_1->GetXaxis()->SetTitleSize(0.06);
   nJet25_fakes_VV_stack_1->GetXaxis()->SetTitleOffset(0.9);
   nJet25_fakes_VV_stack_1->GetXaxis()->SetTitleFont(42);
   nJet25_fakes_VV_stack_1->GetYaxis()->SetTitle("Events");
   nJet25_fakes_VV_stack_1->GetYaxis()->SetLabelFont(42);
   nJet25_fakes_VV_stack_1->GetYaxis()->SetLabelOffset(0.007);
   nJet25_fakes_VV_stack_1->GetYaxis()->SetLabelSize(0.05);
   nJet25_fakes_VV_stack_1->GetYaxis()->SetTitleSize(0.06);
   nJet25_fakes_VV_stack_1->GetYaxis()->SetTitleOffset(1.35);
   nJet25_fakes_VV_stack_1->GetYaxis()->SetTitleFont(42);
   nJet25_fakes_VV_stack_1->GetZaxis()->SetLabelFont(42);
   nJet25_fakes_VV_stack_1->GetZaxis()->SetLabelOffset(0.007);
   nJet25_fakes_VV_stack_1->GetZaxis()->SetLabelSize(0.05);
   nJet25_fakes_VV_stack_1->GetZaxis()->SetTitleSize(0.06);
   nJet25_fakes_VV_stack_1->GetZaxis()->SetTitleFont(42);
   nJet25_stack->Add(nJet25_fakes_VV_stack_1,"");
   Double_t xAxis14[10] = {-0.5, 0.5, 1.5, 2.5, 3.5, 4.5, 5.5, 6.5, 7.5, 8.5}; 
   
   TH1D *nJet25_fakes_TT_stack_2 = new TH1D("nJet25_fakes_TT_stack_2","dummy",9, xAxis14);
   nJet25_fakes_TT_stack_2->SetBinContent(1,8.910226);
   nJet25_fakes_TT_stack_2->SetBinContent(2,19.17515);
   nJet25_fakes_TT_stack_2->SetBinContent(3,14.67836);
   nJet25_fakes_TT_stack_2->SetBinContent(4,8.112295);
   nJet25_fakes_TT_stack_2->SetBinContent(5,2.838412);
   nJet25_fakes_TT_stack_2->SetBinContent(6,0.7979307);
   nJet25_fakes_TT_stack_2->SetBinContent(7,0.3989653);
   nJet25_fakes_TT_stack_2->SetBinContent(8,0.06649422);
   nJet25_fakes_TT_stack_2->SetBinContent(9,0.06649422);
   nJet25_fakes_TT_stack_2->SetBinError(1,0.7754493);
   nJet25_fakes_TT_stack_2->SetBinError(2,1.141474);
   nJet25_fakes_TT_stack_2->SetBinError(3,0.9982516);
   nJet25_fakes_TT_stack_2->SetBinError(4,0.7344527);
   nJet25_fakes_TT_stack_2->SetBinError(5,0.4502233);
   nJet25_fakes_TT_stack_2->SetBinError(6,0.2487986);
   nJet25_fakes_TT_stack_2->SetBinError(7,0.1628769);
   nJet25_fakes_TT_stack_2->SetBinError(8,0.06649422);
   nJet25_fakes_TT_stack_2->SetBinError(9,0.06649422);
   nJet25_fakes_TT_stack_2->SetEntries(841);

   ci = TColor::GetColor("#666666");
   nJet25_fakes_TT_stack_2->SetFillColor(ci);
   nJet25_fakes_TT_stack_2->SetMarkerStyle(0);
   nJet25_fakes_TT_stack_2->SetMarkerSize(1.1);
   nJet25_fakes_TT_stack_2->GetXaxis()->SetTitle("N(jet, p_{T} > 25)");
   nJet25_fakes_TT_stack_2->GetXaxis()->SetMoreLogLabels();
   nJet25_fakes_TT_stack_2->GetXaxis()->SetLabelFont(42);
   nJet25_fakes_TT_stack_2->GetXaxis()->SetLabelOffset(0.007);
   nJet25_fakes_TT_stack_2->GetXaxis()->SetLabelSize(0.05);
   nJet25_fakes_TT_stack_2->GetXaxis()->SetTitleSize(0.06);
   nJet25_fakes_TT_stack_2->GetXaxis()->SetTitleOffset(0.9);
   nJet25_fakes_TT_stack_2->GetXaxis()->SetTitleFont(42);
   nJet25_fakes_TT_stack_2->GetYaxis()->SetTitle("Events");
   nJet25_fakes_TT_stack_2->GetYaxis()->SetLabelFont(42);
   nJet25_fakes_TT_stack_2->GetYaxis()->SetLabelOffset(0.007);
   nJet25_fakes_TT_stack_2->GetYaxis()->SetLabelSize(0.05);
   nJet25_fakes_TT_stack_2->GetYaxis()->SetTitleSize(0.06);
   nJet25_fakes_TT_stack_2->GetYaxis()->SetTitleOffset(1.35);
   nJet25_fakes_TT_stack_2->GetYaxis()->SetTitleFont(42);
   nJet25_fakes_TT_stack_2->GetZaxis()->SetLabelFont(42);
   nJet25_fakes_TT_stack_2->GetZaxis()->SetLabelOffset(0.007);
   nJet25_fakes_TT_stack_2->GetZaxis()->SetLabelSize(0.05);
   nJet25_fakes_TT_stack_2->GetZaxis()->SetTitleSize(0.06);
   nJet25_fakes_TT_stack_2->GetZaxis()->SetTitleFont(42);
   nJet25_stack->Add(nJet25_fakes_TT_stack_2,"");
   Double_t xAxis15[10] = {-0.5, 0.5, 1.5, 2.5, 3.5, 4.5, 5.5, 6.5, 7.5, 8.5}; 
   
   TH1D *nJet25_fakes_DY_stack_3 = new TH1D("nJet25_fakes_DY_stack_3","dummy",9, xAxis15);
   nJet25_fakes_DY_stack_3->SetBinContent(1,73.93945);
   nJet25_fakes_DY_stack_3->SetBinContent(2,27.51235);
   nJet25_fakes_DY_stack_3->SetBinContent(3,3.439044);
   nJet25_fakes_DY_stack_3->SetBinContent(4,6.878088);
   nJet25_fakes_DY_stack_3->SetBinContent(6,3.439044);
   nJet25_fakes_DY_stack_3->SetBinContent(7,1.719522);
   nJet25_fakes_DY_stack_3->SetBinError(1,11.27566);
   nJet25_fakes_DY_stack_3->SetBinError(2,6.878088);
   nJet25_fakes_DY_stack_3->SetBinError(3,2.431771);
   nJet25_fakes_DY_stack_3->SetBinError(4,3.439044);
   nJet25_fakes_DY_stack_3->SetBinError(6,2.431771);
   nJet25_fakes_DY_stack_3->SetBinError(7,1.719522);
   nJet25_fakes_DY_stack_3->SetEntries(72);

   ci = TColor::GetColor("#cccccc");
   nJet25_fakes_DY_stack_3->SetFillColor(ci);
   nJet25_fakes_DY_stack_3->SetMarkerStyle(0);
   nJet25_fakes_DY_stack_3->SetMarkerSize(1.1);
   nJet25_fakes_DY_stack_3->GetXaxis()->SetTitle("N(jet, p_{T} > 25)");
   nJet25_fakes_DY_stack_3->GetXaxis()->SetMoreLogLabels();
   nJet25_fakes_DY_stack_3->GetXaxis()->SetLabelFont(42);
   nJet25_fakes_DY_stack_3->GetXaxis()->SetLabelOffset(0.007);
   nJet25_fakes_DY_stack_3->GetXaxis()->SetLabelSize(0.05);
   nJet25_fakes_DY_stack_3->GetXaxis()->SetTitleSize(0.06);
   nJet25_fakes_DY_stack_3->GetXaxis()->SetTitleOffset(0.9);
   nJet25_fakes_DY_stack_3->GetXaxis()->SetTitleFont(42);
   nJet25_fakes_DY_stack_3->GetYaxis()->SetTitle("Events");
   nJet25_fakes_DY_stack_3->GetYaxis()->SetLabelFont(42);
   nJet25_fakes_DY_stack_3->GetYaxis()->SetLabelOffset(0.007);
   nJet25_fakes_DY_stack_3->GetYaxis()->SetLabelSize(0.05);
   nJet25_fakes_DY_stack_3->GetYaxis()->SetTitleSize(0.06);
   nJet25_fakes_DY_stack_3->GetYaxis()->SetTitleOffset(1.35);
   nJet25_fakes_DY_stack_3->GetYaxis()->SetTitleFont(42);
   nJet25_fakes_DY_stack_3->GetZaxis()->SetLabelFont(42);
   nJet25_fakes_DY_stack_3->GetZaxis()->SetLabelOffset(0.007);
   nJet25_fakes_DY_stack_3->GetZaxis()->SetLabelSize(0.05);
   nJet25_fakes_DY_stack_3->GetZaxis()->SetTitleSize(0.06);
   nJet25_fakes_DY_stack_3->GetZaxis()->SetTitleFont(42);
   nJet25_stack->Add(nJet25_fakes_DY_stack_3,"");
   Double_t xAxis16[10] = {-0.5, 0.5, 1.5, 2.5, 3.5, 4.5, 5.5, 6.5, 7.5, 8.5}; 
   
   TH1D *nJet25_prompt_ZZ_stack_4 = new TH1D("nJet25_prompt_ZZ_stack_4","dummy",9, xAxis16);
   nJet25_prompt_ZZ_stack_4->SetBinContent(1,32.84389);
   nJet25_prompt_ZZ_stack_4->SetBinContent(2,25.50447);
   nJet25_prompt_ZZ_stack_4->SetBinContent(3,11.3761);
   nJet25_prompt_ZZ_stack_4->SetBinContent(4,2.01834);
   nJet25_prompt_ZZ_stack_4->SetBinContent(5,0.917427);
   nJet25_prompt_ZZ_stack_4->SetBinContent(6,0.5504562);
   nJet25_prompt_ZZ_stack_4->SetBinError(1,2.454867);
   nJet25_prompt_ZZ_stack_4->SetBinError(2,2.163261);
   nJet25_prompt_ZZ_stack_4->SetBinError(3,1.444766);
   nJet25_prompt_ZZ_stack_4->SetBinError(4,0.6085523);
   nJet25_prompt_ZZ_stack_4->SetBinError(5,0.4102858);
   nJet25_prompt_ZZ_stack_4->SetBinError(6,0.3178061);
   nJet25_prompt_ZZ_stack_4->SetEntries(403);

   ci = TColor::GetColor("#00cc00");
   nJet25_prompt_ZZ_stack_4->SetFillColor(ci);
   nJet25_prompt_ZZ_stack_4->SetMarkerStyle(0);
   nJet25_prompt_ZZ_stack_4->SetMarkerSize(1.1);
   nJet25_prompt_ZZ_stack_4->GetXaxis()->SetTitle("N(jet, p_{T} > 25)");
   nJet25_prompt_ZZ_stack_4->GetXaxis()->SetMoreLogLabels();
   nJet25_prompt_ZZ_stack_4->GetXaxis()->SetLabelFont(42);
   nJet25_prompt_ZZ_stack_4->GetXaxis()->SetLabelOffset(0.007);
   nJet25_prompt_ZZ_stack_4->GetXaxis()->SetLabelSize(0.05);
   nJet25_prompt_ZZ_stack_4->GetXaxis()->SetTitleSize(0.06);
   nJet25_prompt_ZZ_stack_4->GetXaxis()->SetTitleOffset(0.9);
   nJet25_prompt_ZZ_stack_4->GetXaxis()->SetTitleFont(42);
   nJet25_prompt_ZZ_stack_4->GetYaxis()->SetTitle("Events");
   nJet25_prompt_ZZ_stack_4->GetYaxis()->SetLabelFont(42);
   nJet25_prompt_ZZ_stack_4->GetYaxis()->SetLabelOffset(0.007);
   nJet25_prompt_ZZ_stack_4->GetYaxis()->SetLabelSize(0.05);
   nJet25_prompt_ZZ_stack_4->GetYaxis()->SetTitleSize(0.06);
   nJet25_prompt_ZZ_stack_4->GetYaxis()->SetTitleOffset(1.35);
   nJet25_prompt_ZZ_stack_4->GetYaxis()->SetTitleFont(42);
   nJet25_prompt_ZZ_stack_4->GetZaxis()->SetLabelFont(42);
   nJet25_prompt_ZZ_stack_4->GetZaxis()->SetLabelOffset(0.007);
   nJet25_prompt_ZZ_stack_4->GetZaxis()->SetLabelSize(0.05);
   nJet25_prompt_ZZ_stack_4->GetZaxis()->SetTitleSize(0.06);
   nJet25_prompt_ZZ_stack_4->GetZaxis()->SetTitleFont(42);
   nJet25_stack->Add(nJet25_prompt_ZZ_stack_4,"");
   Double_t xAxis17[10] = {-0.5, 0.5, 1.5, 2.5, 3.5, 4.5, 5.5, 6.5, 7.5, 8.5}; 
   
   TH1D *nJet25_prompt_WZ_stack_5 = new TH1D("nJet25_prompt_WZ_stack_5","dummy",9, xAxis17);
   nJet25_prompt_WZ_stack_5->SetBinContent(1,729.2821);
   nJet25_prompt_WZ_stack_5->SetBinContent(2,361.3397);
   nJet25_prompt_WZ_stack_5->SetBinContent(3,117.9442);
   nJet25_prompt_WZ_stack_5->SetBinContent(4,30.84276);
   nJet25_prompt_WZ_stack_5->SetBinContent(5,7.597631);
   nJet25_prompt_WZ_stack_5->SetBinContent(6,2.442096);
   nJet25_prompt_WZ_stack_5->SetBinContent(7,0.5426879);
   nJet25_prompt_WZ_stack_5->SetBinContent(9,0.09044799);
   nJet25_prompt_WZ_stack_5->SetBinError(1,8.121706);
   nJet25_prompt_WZ_stack_5->SetBinError(2,5.716857);
   nJet25_prompt_WZ_stack_5->SetBinError(3,3.266162);
   nJet25_prompt_WZ_stack_5->SetBinError(4,1.670229);
   nJet25_prompt_WZ_stack_5->SetBinError(5,0.8289695);
   nJet25_prompt_WZ_stack_5->SetBinError(6,0.4699815);
   nJet25_prompt_WZ_stack_5->SetBinError(7,0.2215514);
   nJet25_prompt_WZ_stack_5->SetBinError(9,0.09044799);
   nJet25_prompt_WZ_stack_5->SetEntries(13825);

   ci = TColor::GetColor("#ffcc00");
   nJet25_prompt_WZ_stack_5->SetFillColor(ci);
   nJet25_prompt_WZ_stack_5->SetMarkerStyle(0);
   nJet25_prompt_WZ_stack_5->SetMarkerSize(1.1);
   nJet25_prompt_WZ_stack_5->GetXaxis()->SetTitle("N(jet, p_{T} > 25)");
   nJet25_prompt_WZ_stack_5->GetXaxis()->SetMoreLogLabels();
   nJet25_prompt_WZ_stack_5->GetXaxis()->SetLabelFont(42);
   nJet25_prompt_WZ_stack_5->GetXaxis()->SetLabelOffset(0.007);
   nJet25_prompt_WZ_stack_5->GetXaxis()->SetLabelSize(0.05);
   nJet25_prompt_WZ_stack_5->GetXaxis()->SetTitleSize(0.06);
   nJet25_prompt_WZ_stack_5->GetXaxis()->SetTitleOffset(0.9);
   nJet25_prompt_WZ_stack_5->GetXaxis()->SetTitleFont(42);
   nJet25_prompt_WZ_stack_5->GetYaxis()->SetTitle("Events");
   nJet25_prompt_WZ_stack_5->GetYaxis()->SetLabelFont(42);
   nJet25_prompt_WZ_stack_5->GetYaxis()->SetLabelOffset(0.007);
   nJet25_prompt_WZ_stack_5->GetYaxis()->SetLabelSize(0.05);
   nJet25_prompt_WZ_stack_5->GetYaxis()->SetTitleSize(0.06);
   nJet25_prompt_WZ_stack_5->GetYaxis()->SetTitleOffset(1.35);
   nJet25_prompt_WZ_stack_5->GetYaxis()->SetTitleFont(42);
   nJet25_prompt_WZ_stack_5->GetZaxis()->SetLabelFont(42);
   nJet25_prompt_WZ_stack_5->GetZaxis()->SetLabelOffset(0.007);
   nJet25_prompt_WZ_stack_5->GetZaxis()->SetLabelSize(0.05);
   nJet25_prompt_WZ_stack_5->GetZaxis()->SetTitleSize(0.06);
   nJet25_prompt_WZ_stack_5->GetZaxis()->SetTitleFont(42);
   nJet25_stack->Add(nJet25_prompt_WZ_stack_5,"");
   nJet25_stack->Draw("same hist");
   Double_t xAxis18[10] = {-0.5, 0.5, 1.5, 2.5, 3.5, 4.5, 5.5, 6.5, 7.5, 8.5}; 
   
   TH1D *nJet25_total__102 = new TH1D("nJet25_total__102","dummy",9, xAxis18);
   nJet25_total__102->SetBinContent(1,845.4617);
   nJet25_total__102->SetBinContent(2,433.7261);
   nJet25_total__102->SetBinContent(3,147.4377);
   nJet25_total__102->SetBinContent(4,47.85149);
   nJet25_total__102->SetBinContent(5,11.35347);
   nJet25_total__102->SetBinContent(6,7.229527);
   nJet25_total__102->SetBinContent(7,2.661175);
   nJet25_total__102->SetBinContent(8,0.06649422);
   nJet25_total__102->SetBinContent(9,0.1569422);
   nJet25_total__102->SetBinError(1,14.13427);
   nJet25_total__102->SetBinError(2,9.273193);
   nJet25_total__102->SetBinError(3,4.434544);
   nJet25_total__102->SetBinError(4,3.940361);
   nJet25_total__102->SetBinError(5,1.028701);
   nJet25_total__102->SetBinError(6,2.509441);
   nJet25_total__102->SetBinError(7,1.74137);
   nJet25_total__102->SetBinError(8,0.06649422);
   nJet25_total__102->SetBinError(9,0.1122601);
   nJet25_total__102->SetMinimum(0);
   nJet25_total__102->SetMaximum(921.7876);
   nJet25_total__102->SetEntries(15152);
   nJet25_total__102->SetDirectory(0);

   ci = TColor::GetColor("#00cc00");
   nJet25_total__102->SetFillColor(ci);
   nJet25_total__102->SetMarkerStyle(20);
   nJet25_total__102->SetMarkerSize(1.1);
   nJet25_total__102->GetXaxis()->SetTitle("N(jet, p_{T} > 25)");
   nJet25_total__102->GetXaxis()->SetMoreLogLabels();
   nJet25_total__102->GetXaxis()->SetLabelFont(42);
   nJet25_total__102->GetXaxis()->SetLabelOffset(999);
   nJet25_total__102->GetXaxis()->SetLabelSize(0.05);
   nJet25_total__102->GetXaxis()->SetTitleSize(0.05);
   nJet25_total__102->GetXaxis()->SetTitleOffset(999);
   nJet25_total__102->GetXaxis()->SetTitleFont(42);
   nJet25_total__102->GetYaxis()->SetTitle("Events");
   nJet25_total__102->GetYaxis()->SetLabelFont(42);
   nJet25_total__102->GetYaxis()->SetLabelOffset(0.007);
   nJet25_total__102->GetYaxis()->SetLabelSize(0.05);
   nJet25_total__102->GetYaxis()->SetTitleSize(0.06);
   nJet25_total__102->GetYaxis()->SetTitleOffset(1.48);
   nJet25_total__102->GetYaxis()->SetTitleFont(42);
   nJet25_total__102->GetZaxis()->SetLabelFont(42);
   nJet25_total__102->GetZaxis()->SetLabelOffset(0.007);
   nJet25_total__102->GetZaxis()->SetLabelSize(0.05);
   nJet25_total__102->GetZaxis()->SetTitleSize(0.06);
   nJet25_total__102->GetZaxis()->SetTitleFont(42);
   nJet25_total__102->Draw("AXIS SAME");
   
   Double_t nJet25_total_errors_fx3126[9] = {
   0,
   1,
   2,
   3,
   4,
   5,
   6,
   7,
   8};
   Double_t nJet25_total_errors_fy3126[9] = {
   845.4617,
   433.7261,
   147.4377,
   47.85149,
   11.35347,
   7.229527,
   2.661175,
   0.06649422,
   0.1569422};
   Double_t nJet25_total_errors_felx3126[9] = {
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5};
   Double_t nJet25_total_errors_fely3126[9] = {
   14.13427,
   9.273193,
   4.434544,
   3.940361,
   1.028701,
   2.509441,
   1.74137,
   0.06649422,
   0.1122601};
   Double_t nJet25_total_errors_fehx3126[9] = {
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5};
   Double_t nJet25_total_errors_fehy3126[9] = {
   14.13427,
   9.273193,
   4.434544,
   3.940361,
   1.028701,
   2.509441,
   1.74137,
   0.06649422,
   0.1122601};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(9,nJet25_total_errors_fx3126,nJet25_total_errors_fy3126,nJet25_total_errors_felx3126,nJet25_total_errors_fehx3126,nJet25_total_errors_fely3126,nJet25_total_errors_fehy3126);
   grae->SetName("nJet25_total_errors");
   grae->SetTitle("Graph");
   grae->SetFillColor(1);
   grae->SetFillStyle(3013);
   grae->SetMarkerStyle(0);
   
   TH1F *Graph_nJet25_total_errors3126 = new TH1F("Graph_nJet25_total_errors3126","Graph",100,-1.4,9.4);
   Graph_nJet25_total_errors3126->SetMinimum(0);
   Graph_nJet25_total_errors3126->SetMaximum(945.5555);
   Graph_nJet25_total_errors3126->SetDirectory(0);
   Graph_nJet25_total_errors3126->SetStats(0);
   Graph_nJet25_total_errors3126->SetLineStyle(0);
   Graph_nJet25_total_errors3126->SetMarkerStyle(20);
   Graph_nJet25_total_errors3126->GetXaxis()->SetLabelFont(42);
   Graph_nJet25_total_errors3126->GetXaxis()->SetLabelOffset(0.007);
   Graph_nJet25_total_errors3126->GetXaxis()->SetLabelSize(0.05);
   Graph_nJet25_total_errors3126->GetXaxis()->SetTitleSize(0.06);
   Graph_nJet25_total_errors3126->GetXaxis()->SetTitleOffset(0.9);
   Graph_nJet25_total_errors3126->GetXaxis()->SetTitleFont(42);
   Graph_nJet25_total_errors3126->GetYaxis()->SetLabelFont(42);
   Graph_nJet25_total_errors3126->GetYaxis()->SetLabelOffset(0.007);
   Graph_nJet25_total_errors3126->GetYaxis()->SetLabelSize(0.05);
   Graph_nJet25_total_errors3126->GetYaxis()->SetTitleSize(0.06);
   Graph_nJet25_total_errors3126->GetYaxis()->SetTitleOffset(1.35);
   Graph_nJet25_total_errors3126->GetYaxis()->SetTitleFont(42);
   Graph_nJet25_total_errors3126->GetZaxis()->SetLabelFont(42);
   Graph_nJet25_total_errors3126->GetZaxis()->SetLabelOffset(0.007);
   Graph_nJet25_total_errors3126->GetZaxis()->SetLabelSize(0.05);
   Graph_nJet25_total_errors3126->GetZaxis()->SetTitleSize(0.06);
   Graph_nJet25_total_errors3126->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_nJet25_total_errors3126);
   
   grae->Draw("pe2 ");
   
   Double_t nJet25_data_graph_fx3127[9] = {
   0,
   1,
   2,
   3,
   4,
   5,
   6,
   7,
   8};
   Double_t nJet25_data_graph_fy3127[9] = {
   674,
   440,
   224,
   117,
   38,
   10,
   8,
   1,
   1};
   Double_t nJet25_data_graph_felx3127[9] = {
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5};
   Double_t nJet25_data_graph_fely3127[9] = {
   25.95563,
   20.96866,
   14.95577,
   10.8014,
   6.137282,
   3.108748,
   2.768432,
   0.8272525,
   0.8272525};
   Double_t nJet25_data_graph_fehx3127[9] = {
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5};
   Double_t nJet25_data_graph_fehy3127[9] = {
   26.97494,
   21.99255,
   15.98926,
   11.84775,
   7.218633,
   4.267035,
   3.94522,
   2.29957,
   2.29957};
   grae = new TGraphAsymmErrors(9,nJet25_data_graph_fx3127,nJet25_data_graph_fy3127,nJet25_data_graph_felx3127,nJet25_data_graph_fehx3127,nJet25_data_graph_fely3127,nJet25_data_graph_fehy3127);
   grae->SetName("nJet25_data_graph");
   grae->SetTitle("Graph");
   grae->SetFillStyle(1000);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.1);
   
   TH1F *Graph_nJet25_data_graph3127 = new TH1F("Graph_nJet25_data_graph3127","Graph",100,-1.4,9.4);
   Graph_nJet25_data_graph3127->SetMinimum(0.1554728);
   Graph_nJet25_data_graph3127->SetMaximum(771.0552);
   Graph_nJet25_data_graph3127->SetDirectory(0);
   Graph_nJet25_data_graph3127->SetStats(0);
   Graph_nJet25_data_graph3127->SetLineStyle(0);
   Graph_nJet25_data_graph3127->SetMarkerStyle(20);
   Graph_nJet25_data_graph3127->GetXaxis()->SetLabelFont(42);
   Graph_nJet25_data_graph3127->GetXaxis()->SetLabelOffset(0.007);
   Graph_nJet25_data_graph3127->GetXaxis()->SetLabelSize(0.05);
   Graph_nJet25_data_graph3127->GetXaxis()->SetTitleSize(0.06);
   Graph_nJet25_data_graph3127->GetXaxis()->SetTitleOffset(0.9);
   Graph_nJet25_data_graph3127->GetXaxis()->SetTitleFont(42);
   Graph_nJet25_data_graph3127->GetYaxis()->SetLabelFont(42);
   Graph_nJet25_data_graph3127->GetYaxis()->SetLabelOffset(0.007);
   Graph_nJet25_data_graph3127->GetYaxis()->SetLabelSize(0.05);
   Graph_nJet25_data_graph3127->GetYaxis()->SetTitleSize(0.06);
   Graph_nJet25_data_graph3127->GetYaxis()->SetTitleOffset(1.35);
   Graph_nJet25_data_graph3127->GetYaxis()->SetTitleFont(42);
   Graph_nJet25_data_graph3127->GetZaxis()->SetLabelFont(42);
   Graph_nJet25_data_graph3127->GetZaxis()->SetLabelOffset(0.007);
   Graph_nJet25_data_graph3127->GetZaxis()->SetLabelSize(0.05);
   Graph_nJet25_data_graph3127->GetZaxis()->SetTitleSize(0.06);
   Graph_nJet25_data_graph3127->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_nJet25_data_graph3127);
   
   grae->Draw("pz ");
   
   TLegend *leg = new TLegend(0.62,0.628,0.9,0.91,NULL,"brNDC");
   leg->SetBorderSize(1);
   leg->SetTextSize(0.036);
   leg->SetLineColor(0);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("nJet25_data","Data","LPE");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1.1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("nJet25_prompt_WZ_stack_5","WZ","F");

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
   entry=leg->AddEntry("nJet25_prompt_ZZ_stack_4","qqZZ","F");

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
   entry=leg->AddEntry("nJet25_fakes_DY_stack_3","Fakes DY","F");

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
   entry=leg->AddEntry("nJet25_fakes_TT_stack_2","Fakes TT","F");

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
   entry=leg->AddEntry("nJet25_total_errors","Total unc.","F");
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
   nJet25_canvas->cd();
  
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
   Double_t xAxis19[10] = {-0.5, 0.5, 1.5, 2.5, 3.5, 4.5, 5.5, 6.5, 7.5, 8.5}; 
   
   TH1D *nJet25_total__103 = new TH1D("nJet25_total__103","dummy",9, xAxis19);
   nJet25_total__103->SetBinContent(1,1);
   nJet25_total__103->SetBinContent(2,1);
   nJet25_total__103->SetBinContent(3,1);
   nJet25_total__103->SetBinContent(4,1);
   nJet25_total__103->SetBinContent(5,1);
   nJet25_total__103->SetBinContent(6,1);
   nJet25_total__103->SetBinContent(7,1);
   nJet25_total__103->SetBinContent(8,1);
   nJet25_total__103->SetBinContent(9,1);
   nJet25_total__103->SetMinimum(0.5);
   nJet25_total__103->SetMaximum(2);
   nJet25_total__103->SetEntries(15161);

   ci = TColor::GetColor("#00cc00");
   nJet25_total__103->SetFillColor(ci);

   ci = TColor::GetColor("#6666ff");
   nJet25_total__103->SetMarkerColor(ci);
   nJet25_total__103->SetMarkerSize(1.1);
   nJet25_total__103->GetXaxis()->SetTitle("N(jet, p_{T} > 25)");
   nJet25_total__103->GetXaxis()->SetMoreLogLabels();
   nJet25_total__103->GetXaxis()->SetLabelFont(42);
   nJet25_total__103->GetXaxis()->SetLabelOffset(0.015);
   nJet25_total__103->GetXaxis()->SetLabelSize(0.1);
   nJet25_total__103->GetXaxis()->SetTitleSize(0.14);
   nJet25_total__103->GetXaxis()->SetTitleFont(42);
   nJet25_total__103->GetYaxis()->SetTitle("Data/pred.");
   nJet25_total__103->GetYaxis()->SetDecimals();
   nJet25_total__103->GetYaxis()->SetNdivisions(505);
   nJet25_total__103->GetYaxis()->SetLabelFont(42);
   nJet25_total__103->GetYaxis()->SetLabelOffset(0.01);
   nJet25_total__103->GetYaxis()->SetLabelSize(0.11);
   nJet25_total__103->GetYaxis()->SetTitleSize(0.14);
   nJet25_total__103->GetYaxis()->SetTitleOffset(0.62);
   nJet25_total__103->GetYaxis()->SetTitleFont(42);
   nJet25_total__103->GetZaxis()->SetLabelFont(42);
   nJet25_total__103->GetZaxis()->SetLabelOffset(0.007);
   nJet25_total__103->GetZaxis()->SetLabelSize(0.05);
   nJet25_total__103->GetZaxis()->SetTitleSize(0.06);
   nJet25_total__103->GetZaxis()->SetTitleFont(42);
   nJet25_total__103->Draw("AXIS");
   
   Double_t nJet25_total_errors_fx3128[9] = {
   0,
   1,
   2,
   3,
   4,
   5,
   6,
   7,
   8};
   Double_t nJet25_total_errors_fy3128[9] = {
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1};
   Double_t nJet25_total_errors_felx3128[9] = {
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5};
   Double_t nJet25_total_errors_fely3128[9] = {
   0.01671781,
   0.0213803,
   0.03007741,
   0.08234564,
   0.09060676,
   0.3471101,
   0.6543613,
   1,
   0.7152955};
   Double_t nJet25_total_errors_fehx3128[9] = {
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5};
   Double_t nJet25_total_errors_fehy3128[9] = {
   0.01671781,
   0.0213803,
   0.03007741,
   0.08234564,
   0.09060676,
   0.3471101,
   0.6543613,
   1,
   0.7152955};
   grae = new TGraphAsymmErrors(9,nJet25_total_errors_fx3128,nJet25_total_errors_fy3128,nJet25_total_errors_felx3128,nJet25_total_errors_fehx3128,nJet25_total_errors_fely3128,nJet25_total_errors_fehy3128);
   grae->SetName("nJet25_total_errors");
   grae->SetTitle("Graph");

   ci = TColor::GetColor("#00ffff");
   grae->SetFillColor(ci);

   ci = TColor::GetColor("#00ffff");
   grae->SetMarkerColor(ci);
   grae->Draw("e2");
   
   Double_t nJet25_total_errors_fx3129[9] = {
   0,
   1,
   2,
   3,
   4,
   5,
   6,
   7,
   8};
   Double_t nJet25_total_errors_fy3129[9] = {
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1};
   Double_t nJet25_total_errors_felx3129[9] = {
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5};
   Double_t nJet25_total_errors_fely3129[9] = {
   0.01671781,
   0.0213803,
   0.03007741,
   0.08234564,
   0.09060676,
   0.3471101,
   0.6543613,
   1,
   0.7152955};
   Double_t nJet25_total_errors_fehx3129[9] = {
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5};
   Double_t nJet25_total_errors_fehy3129[9] = {
   0.01671781,
   0.0213803,
   0.03007741,
   0.08234564,
   0.09060676,
   0.3471101,
   0.6543613,
   1,
   0.7152955};
   grae = new TGraphAsymmErrors(9,nJet25_total_errors_fx3129,nJet25_total_errors_fy3129,nJet25_total_errors_felx3129,nJet25_total_errors_fehx3129,nJet25_total_errors_fely3129,nJet25_total_errors_fehy3129);
   grae->SetName("nJet25_total_errors");
   grae->SetTitle("Graph");

   ci = TColor::GetColor("#6666ff");
   grae->SetFillColor(ci);

   ci = TColor::GetColor("#6666ff");
   grae->SetMarkerColor(ci);
   grae->Draw("e2 ");
   Double_t xAxis20[10] = {-0.5, 0.5, 1.5, 2.5, 3.5, 4.5, 5.5, 6.5, 7.5, 8.5}; 
   
   TH1D *nJet25_total__104 = new TH1D("nJet25_total__104","dummy",9, xAxis20);
   nJet25_total__104->SetBinContent(1,1);
   nJet25_total__104->SetBinContent(2,1);
   nJet25_total__104->SetBinContent(3,1);
   nJet25_total__104->SetBinContent(4,1);
   nJet25_total__104->SetBinContent(5,1);
   nJet25_total__104->SetBinContent(6,1);
   nJet25_total__104->SetBinContent(7,1);
   nJet25_total__104->SetBinContent(8,1);
   nJet25_total__104->SetBinContent(9,1);
   nJet25_total__104->SetMinimum(0.5);
   nJet25_total__104->SetMaximum(2);
   nJet25_total__104->SetEntries(15161);

   ci = TColor::GetColor("#00cc00");
   nJet25_total__104->SetFillColor(ci);

   ci = TColor::GetColor("#6666ff");
   nJet25_total__104->SetMarkerColor(ci);
   nJet25_total__104->SetMarkerSize(1.1);
   nJet25_total__104->GetXaxis()->SetTitle("N(jet, p_{T} > 25)");
   nJet25_total__104->GetXaxis()->SetMoreLogLabels();
   nJet25_total__104->GetXaxis()->SetLabelFont(42);
   nJet25_total__104->GetXaxis()->SetLabelOffset(0.015);
   nJet25_total__104->GetXaxis()->SetLabelSize(0.1);
   nJet25_total__104->GetXaxis()->SetTitleSize(0.14);
   nJet25_total__104->GetXaxis()->SetTitleFont(42);
   nJet25_total__104->GetYaxis()->SetTitle("Data/pred.");
   nJet25_total__104->GetYaxis()->SetDecimals();
   nJet25_total__104->GetYaxis()->SetNdivisions(505);
   nJet25_total__104->GetYaxis()->SetLabelFont(42);
   nJet25_total__104->GetYaxis()->SetLabelOffset(0.01);
   nJet25_total__104->GetYaxis()->SetLabelSize(0.11);
   nJet25_total__104->GetYaxis()->SetTitleSize(0.14);
   nJet25_total__104->GetYaxis()->SetTitleOffset(0.62);
   nJet25_total__104->GetYaxis()->SetTitleFont(42);
   nJet25_total__104->GetZaxis()->SetLabelFont(42);
   nJet25_total__104->GetZaxis()->SetLabelOffset(0.007);
   nJet25_total__104->GetZaxis()->SetLabelSize(0.05);
   nJet25_total__104->GetZaxis()->SetTitleSize(0.06);
   nJet25_total__104->GetZaxis()->SetTitleFont(42);
   nJet25_total__104->Draw("AXIS SAME");
   TLine *line = new TLine(-0.5,1,8.5,1);
   line->SetLineColor(58);
   line->SetLineWidth(2);
   line->Draw();
   
   Double_t data_div_fx3130[9] = {
   0,
   1,
   2,
   3,
   4,
   5,
   6,
   7,
   8};
   Double_t data_div_fy3130[9] = {
   0.7971976,
   1.014465,
   1.519286,
   2.445065,
   3.346994,
   1.383216,
   3.00619,
   15.0389,
   6.371772};
   Double_t data_div_felx3130[9] = {
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5};
   Double_t data_div_fely3130[9] = {
   0.03069995,
   0.04834539,
   0.1014379,
   0.2257275,
   0.5405644,
   0.4300071,
   1.040304,
   12.44097,
   5.271064};
   Double_t data_div_fehx3130[9] = {
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5};
   Double_t data_div_fehy3130[9] = {
   0.03190557,
   0.05070608,
   0.1084476,
   0.2475941,
   0.6358086,
   0.5902233,
   1.48251,
   34.583,
   14.65233};
   grae = new TGraphAsymmErrors(9,data_div_fx3130,data_div_fy3130,data_div_felx3130,data_div_fehx3130,data_div_fely3130,data_div_fehy3130);
   grae->SetName("data_div");
   grae->SetTitle("Graph");
   grae->SetFillStyle(1000);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.1);
   
   TH1F *Graph_nJet25_data_graph3130 = new TH1F("Graph_nJet25_data_graph3130","Graph",100,-1.4,9.4);
   Graph_nJet25_data_graph3130->SetMinimum(0.1554728);
   Graph_nJet25_data_graph3130->SetMaximum(771.0552);
   Graph_nJet25_data_graph3130->SetDirectory(0);
   Graph_nJet25_data_graph3130->SetStats(0);
   Graph_nJet25_data_graph3130->SetLineStyle(0);
   Graph_nJet25_data_graph3130->SetMarkerStyle(20);
   Graph_nJet25_data_graph3130->GetXaxis()->SetLabelFont(42);
   Graph_nJet25_data_graph3130->GetXaxis()->SetLabelOffset(0.007);
   Graph_nJet25_data_graph3130->GetXaxis()->SetLabelSize(0.05);
   Graph_nJet25_data_graph3130->GetXaxis()->SetTitleSize(0.06);
   Graph_nJet25_data_graph3130->GetXaxis()->SetTitleOffset(0.9);
   Graph_nJet25_data_graph3130->GetXaxis()->SetTitleFont(42);
   Graph_nJet25_data_graph3130->GetYaxis()->SetLabelFont(42);
   Graph_nJet25_data_graph3130->GetYaxis()->SetLabelOffset(0.007);
   Graph_nJet25_data_graph3130->GetYaxis()->SetLabelSize(0.05);
   Graph_nJet25_data_graph3130->GetYaxis()->SetTitleSize(0.06);
   Graph_nJet25_data_graph3130->GetYaxis()->SetTitleOffset(1.35);
   Graph_nJet25_data_graph3130->GetYaxis()->SetTitleFont(42);
   Graph_nJet25_data_graph3130->GetZaxis()->SetLabelFont(42);
   Graph_nJet25_data_graph3130->GetZaxis()->SetLabelOffset(0.007);
   Graph_nJet25_data_graph3130->GetZaxis()->SetLabelSize(0.05);
   Graph_nJet25_data_graph3130->GetZaxis()->SetTitleSize(0.06);
   Graph_nJet25_data_graph3130->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_nJet25_data_graph3130);
   
   grae->Draw("pz ");
   
   leg = new TLegend(0,0,0,0,NULL,"brNDC");
   leg->SetBorderSize(1);
   leg->SetTextSize(0.084);
   leg->SetLineColor(0);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   entry=leg->AddEntry("nJet25_total_errors","stat. unc.","F");
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
   entry=leg->AddEntry("nJet25_total_errors","total unc.","F");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   leg->Draw();
   pad2->Modified();
   nJet25_canvas->cd();
   nJet25_canvas->Modified();
   nJet25_canvas->cd();
   nJet25_canvas->SetSelected(nJet25_canvas);
}
