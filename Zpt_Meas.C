void Zpt_Meas()
{
//=========Macro generated from canvas: Zpt_Meas_canvas/Zpt_Meas
//=========  (Fri Nov 18 13:12:06 2022) by ROOT version 6.12/07
   TCanvas *Zpt_Meas_canvas = new TCanvas("Zpt_Meas_canvas", "Zpt_Meas",0,0,600,750);
   gStyle->SetOptFit(1);
   gStyle->SetOptStat(0);
   gStyle->SetOptTitle(0);
   Zpt_Meas_canvas->SetHighLightColor(2);
   Zpt_Meas_canvas->Range(0,0,1,1);
   Zpt_Meas_canvas->SetFillColor(0);
   Zpt_Meas_canvas->SetBorderMode(0);
   Zpt_Meas_canvas->SetBorderSize(2);
   Zpt_Meas_canvas->SetTickx(1);
   Zpt_Meas_canvas->SetTicky(1);
   Zpt_Meas_canvas->SetLeftMargin(0.18);
   Zpt_Meas_canvas->SetRightMargin(0.04);
   Zpt_Meas_canvas->SetBottomMargin(0.13);
   Zpt_Meas_canvas->SetFrameFillStyle(0);
   Zpt_Meas_canvas->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: pad1
   TPad *pad1 = new TPad("pad1", "pad1",0,0.3,1,1);
   pad1->Draw();
   pad1->cd();
   pad1->Range(-115.3846,-33.97974,525.641,1325.21);
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
   Double_t xAxis21[8] = {0, 75, 150, 225, 300, 350, 400, 500}; 
   
   TH1D *Zpt_Meas_total__129 = new TH1D("Zpt_Meas_total__129","dummy",7, xAxis21);
   Zpt_Meas_total__129->SetBinContent(1,922.2642);
   Zpt_Meas_total__129->SetBinContent(2,423.2209);
   Zpt_Meas_total__129->SetBinContent(3,100.4298);
   Zpt_Meas_total__129->SetBinContent(4,30.34437);
   Zpt_Meas_total__129->SetBinContent(5,9.031203);
   Zpt_Meas_total__129->SetBinContent(6,4.862827);
   Zpt_Meas_total__129->SetBinContent(7,5.791261);
   Zpt_Meas_total__129->SetBinError(1,14.87099);
   Zpt_Meas_total__129->SetBinError(2,9.355195);
   Zpt_Meas_total__129->SetBinError(3,4.228742);
   Zpt_Meas_total__129->SetBinError(4,1.714144);
   Zpt_Meas_total__129->SetBinError(5,0.939971);
   Zpt_Meas_total__129->SetBinError(6,0.6747675);
   Zpt_Meas_total__129->SetBinError(7,0.7354447);
   Zpt_Meas_total__129->SetMinimum(0);
   Zpt_Meas_total__129->SetMaximum(1243.658);
   Zpt_Meas_total__129->SetEntries(15152);
   Zpt_Meas_total__129->SetDirectory(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#00cc00");
   Zpt_Meas_total__129->SetFillColor(ci);
   Zpt_Meas_total__129->SetMarkerStyle(20);
   Zpt_Meas_total__129->SetMarkerSize(1.1);
   Zpt_Meas_total__129->GetXaxis()->SetTitle("p_{T}^{Z} [GeV]");
   Zpt_Meas_total__129->GetXaxis()->SetMoreLogLabels();
   Zpt_Meas_total__129->GetXaxis()->SetLabelFont(42);
   Zpt_Meas_total__129->GetXaxis()->SetLabelOffset(999);
   Zpt_Meas_total__129->GetXaxis()->SetLabelSize(0.05);
   Zpt_Meas_total__129->GetXaxis()->SetTitleSize(0.05);
   Zpt_Meas_total__129->GetXaxis()->SetTitleOffset(999);
   Zpt_Meas_total__129->GetXaxis()->SetTitleFont(42);
   Zpt_Meas_total__129->GetYaxis()->SetTitle("Events");
   Zpt_Meas_total__129->GetYaxis()->SetLabelFont(42);
   Zpt_Meas_total__129->GetYaxis()->SetLabelOffset(0.007);
   Zpt_Meas_total__129->GetYaxis()->SetLabelSize(0.05);
   Zpt_Meas_total__129->GetYaxis()->SetTitleSize(0.06);
   Zpt_Meas_total__129->GetYaxis()->SetTitleOffset(1.48);
   Zpt_Meas_total__129->GetYaxis()->SetTitleFont(42);
   Zpt_Meas_total__129->GetZaxis()->SetLabelFont(42);
   Zpt_Meas_total__129->GetZaxis()->SetLabelOffset(0.007);
   Zpt_Meas_total__129->GetZaxis()->SetLabelSize(0.05);
   Zpt_Meas_total__129->GetZaxis()->SetTitleSize(0.06);
   Zpt_Meas_total__129->GetZaxis()->SetTitleFont(42);
   Zpt_Meas_total__129->Draw("HIST");
   
   THStack *Zpt_Meas_stack = new THStack();
   Zpt_Meas_stack->SetName("Zpt_Meas_stack");
   Zpt_Meas_stack->SetTitle("Zpt_Meas");
   Double_t xAxis22[8] = {0, 75, 150, 225, 300, 350, 400, 500}; 
   
   TH1F *Zpt_Meas_stack_stack_33 = new TH1F("Zpt_Meas_stack_stack_33","Zpt_Meas",7, xAxis22);
   Zpt_Meas_stack_stack_33->SetMinimum(0);
   Zpt_Meas_stack_stack_33->SetMaximum(968.3775);
   Zpt_Meas_stack_stack_33->SetDirectory(0);
   Zpt_Meas_stack_stack_33->SetStats(0);
   Zpt_Meas_stack_stack_33->SetLineStyle(0);
   Zpt_Meas_stack_stack_33->SetMarkerStyle(20);
   Zpt_Meas_stack_stack_33->GetXaxis()->SetLabelFont(42);
   Zpt_Meas_stack_stack_33->GetXaxis()->SetLabelOffset(0.007);
   Zpt_Meas_stack_stack_33->GetXaxis()->SetLabelSize(0.05);
   Zpt_Meas_stack_stack_33->GetXaxis()->SetTitleSize(0.06);
   Zpt_Meas_stack_stack_33->GetXaxis()->SetTitleOffset(0.9);
   Zpt_Meas_stack_stack_33->GetXaxis()->SetTitleFont(42);
   Zpt_Meas_stack_stack_33->GetYaxis()->SetLabelFont(42);
   Zpt_Meas_stack_stack_33->GetYaxis()->SetLabelOffset(0.007);
   Zpt_Meas_stack_stack_33->GetYaxis()->SetLabelSize(0.05);
   Zpt_Meas_stack_stack_33->GetYaxis()->SetTitleSize(0.06);
   Zpt_Meas_stack_stack_33->GetYaxis()->SetTitleOffset(1.35);
   Zpt_Meas_stack_stack_33->GetYaxis()->SetTitleFont(42);
   Zpt_Meas_stack_stack_33->GetZaxis()->SetLabelFont(42);
   Zpt_Meas_stack_stack_33->GetZaxis()->SetLabelOffset(0.007);
   Zpt_Meas_stack_stack_33->GetZaxis()->SetLabelSize(0.05);
   Zpt_Meas_stack_stack_33->GetZaxis()->SetTitleSize(0.06);
   Zpt_Meas_stack_stack_33->GetZaxis()->SetTitleFont(42);
   Zpt_Meas_stack->SetHistogram(Zpt_Meas_stack_stack_33);
   
   Double_t xAxis23[8] = {0, 75, 150, 225, 300, 350, 400, 500}; 
   
   TH1D *Zpt_Meas_fakes_VV_stack_1 = new TH1D("Zpt_Meas_fakes_VV_stack_1","dummy",7, xAxis23);
   Zpt_Meas_fakes_VV_stack_1->SetBinContent(1,0.6803536);
   Zpt_Meas_fakes_VV_stack_1->SetBinError(1,0.2571495);
   Zpt_Meas_fakes_VV_stack_1->SetEntries(11);

   ci = TColor::GetColor("#2e3294");
   Zpt_Meas_fakes_VV_stack_1->SetFillColor(ci);
   Zpt_Meas_fakes_VV_stack_1->SetMarkerStyle(0);
   Zpt_Meas_fakes_VV_stack_1->SetMarkerSize(1.1);
   Zpt_Meas_fakes_VV_stack_1->GetXaxis()->SetTitle("p_{T}^{Z} [GeV]");
   Zpt_Meas_fakes_VV_stack_1->GetXaxis()->SetMoreLogLabels();
   Zpt_Meas_fakes_VV_stack_1->GetXaxis()->SetLabelFont(42);
   Zpt_Meas_fakes_VV_stack_1->GetXaxis()->SetLabelOffset(0.007);
   Zpt_Meas_fakes_VV_stack_1->GetXaxis()->SetLabelSize(0.05);
   Zpt_Meas_fakes_VV_stack_1->GetXaxis()->SetTitleSize(0.06);
   Zpt_Meas_fakes_VV_stack_1->GetXaxis()->SetTitleOffset(0.9);
   Zpt_Meas_fakes_VV_stack_1->GetXaxis()->SetTitleFont(42);
   Zpt_Meas_fakes_VV_stack_1->GetYaxis()->SetTitle("Events");
   Zpt_Meas_fakes_VV_stack_1->GetYaxis()->SetLabelFont(42);
   Zpt_Meas_fakes_VV_stack_1->GetYaxis()->SetLabelOffset(0.007);
   Zpt_Meas_fakes_VV_stack_1->GetYaxis()->SetLabelSize(0.05);
   Zpt_Meas_fakes_VV_stack_1->GetYaxis()->SetTitleSize(0.06);
   Zpt_Meas_fakes_VV_stack_1->GetYaxis()->SetTitleOffset(1.35);
   Zpt_Meas_fakes_VV_stack_1->GetYaxis()->SetTitleFont(42);
   Zpt_Meas_fakes_VV_stack_1->GetZaxis()->SetLabelFont(42);
   Zpt_Meas_fakes_VV_stack_1->GetZaxis()->SetLabelOffset(0.007);
   Zpt_Meas_fakes_VV_stack_1->GetZaxis()->SetLabelSize(0.05);
   Zpt_Meas_fakes_VV_stack_1->GetZaxis()->SetTitleSize(0.06);
   Zpt_Meas_fakes_VV_stack_1->GetZaxis()->SetTitleFont(42);
   Zpt_Meas_stack->Add(Zpt_Meas_fakes_VV_stack_1,"");
   Double_t xAxis24[8] = {0, 75, 150, 225, 300, 350, 400, 500}; 
   
   TH1D *Zpt_Meas_fakes_TT_stack_2 = new TH1D("Zpt_Meas_fakes_TT_stack_2","dummy",7, xAxis24);
   Zpt_Meas_fakes_TT_stack_2->SetBinContent(1,32.36582);
   Zpt_Meas_fakes_TT_stack_2->SetBinContent(2,18.95483);
   Zpt_Meas_fakes_TT_stack_2->SetBinContent(3,3.125229);
   Zpt_Meas_fakes_TT_stack_2->SetBinContent(4,0.4654596);
   Zpt_Meas_fakes_TT_stack_2->SetBinContent(5,0.06649422);
   Zpt_Meas_fakes_TT_stack_2->SetBinContent(6,0.06649422);
   Zpt_Meas_fakes_TT_stack_2->SetBinError(1,1.476978);
   Zpt_Meas_fakes_TT_stack_2->SetBinError(2,1.141173);
   Zpt_Meas_fakes_TT_stack_2->SetBinError(3,0.4654596);
   Zpt_Meas_fakes_TT_stack_2->SetBinError(4,0.1759272);
   Zpt_Meas_fakes_TT_stack_2->SetBinError(5,0.06649422);
   Zpt_Meas_fakes_TT_stack_2->SetBinError(6,0.06649422);
   Zpt_Meas_fakes_TT_stack_2->SetEntries(841);

   ci = TColor::GetColor("#666666");
   Zpt_Meas_fakes_TT_stack_2->SetFillColor(ci);
   Zpt_Meas_fakes_TT_stack_2->SetMarkerStyle(0);
   Zpt_Meas_fakes_TT_stack_2->SetMarkerSize(1.1);
   Zpt_Meas_fakes_TT_stack_2->GetXaxis()->SetTitle("p_{T}^{Z} [GeV]");
   Zpt_Meas_fakes_TT_stack_2->GetXaxis()->SetMoreLogLabels();
   Zpt_Meas_fakes_TT_stack_2->GetXaxis()->SetLabelFont(42);
   Zpt_Meas_fakes_TT_stack_2->GetXaxis()->SetLabelOffset(0.007);
   Zpt_Meas_fakes_TT_stack_2->GetXaxis()->SetLabelSize(0.05);
   Zpt_Meas_fakes_TT_stack_2->GetXaxis()->SetTitleSize(0.06);
   Zpt_Meas_fakes_TT_stack_2->GetXaxis()->SetTitleOffset(0.9);
   Zpt_Meas_fakes_TT_stack_2->GetXaxis()->SetTitleFont(42);
   Zpt_Meas_fakes_TT_stack_2->GetYaxis()->SetTitle("Events");
   Zpt_Meas_fakes_TT_stack_2->GetYaxis()->SetLabelFont(42);
   Zpt_Meas_fakes_TT_stack_2->GetYaxis()->SetLabelOffset(0.007);
   Zpt_Meas_fakes_TT_stack_2->GetYaxis()->SetLabelSize(0.05);
   Zpt_Meas_fakes_TT_stack_2->GetYaxis()->SetTitleSize(0.06);
   Zpt_Meas_fakes_TT_stack_2->GetYaxis()->SetTitleOffset(1.35);
   Zpt_Meas_fakes_TT_stack_2->GetYaxis()->SetTitleFont(42);
   Zpt_Meas_fakes_TT_stack_2->GetZaxis()->SetLabelFont(42);
   Zpt_Meas_fakes_TT_stack_2->GetZaxis()->SetLabelOffset(0.007);
   Zpt_Meas_fakes_TT_stack_2->GetZaxis()->SetLabelSize(0.05);
   Zpt_Meas_fakes_TT_stack_2->GetZaxis()->SetTitleSize(0.06);
   Zpt_Meas_fakes_TT_stack_2->GetZaxis()->SetTitleFont(42);
   Zpt_Meas_stack->Add(Zpt_Meas_fakes_TT_stack_2,"");
   Double_t xAxis25[8] = {0, 75, 150, 225, 300, 350, 400, 500}; 
   
   TH1D *Zpt_Meas_fakes_DY_stack_3 = new TH1D("Zpt_Meas_fakes_DY_stack_3","dummy",7, xAxis25);
   Zpt_Meas_fakes_DY_stack_3->SetBinContent(1,82.53706);
   Zpt_Meas_fakes_DY_stack_3->SetBinContent(2,29.23188);
   Zpt_Meas_fakes_DY_stack_3->SetBinContent(3,5.158566);
   Zpt_Meas_fakes_DY_stack_3->SetBinError(1,11.9132);
   Zpt_Meas_fakes_DY_stack_3->SetBinError(2,7.089771);
   Zpt_Meas_fakes_DY_stack_3->SetBinError(3,2.9783);
   Zpt_Meas_fakes_DY_stack_3->SetEntries(72);

   ci = TColor::GetColor("#cccccc");
   Zpt_Meas_fakes_DY_stack_3->SetFillColor(ci);
   Zpt_Meas_fakes_DY_stack_3->SetMarkerStyle(0);
   Zpt_Meas_fakes_DY_stack_3->SetMarkerSize(1.1);
   Zpt_Meas_fakes_DY_stack_3->GetXaxis()->SetTitle("p_{T}^{Z} [GeV]");
   Zpt_Meas_fakes_DY_stack_3->GetXaxis()->SetMoreLogLabels();
   Zpt_Meas_fakes_DY_stack_3->GetXaxis()->SetLabelFont(42);
   Zpt_Meas_fakes_DY_stack_3->GetXaxis()->SetLabelOffset(0.007);
   Zpt_Meas_fakes_DY_stack_3->GetXaxis()->SetLabelSize(0.05);
   Zpt_Meas_fakes_DY_stack_3->GetXaxis()->SetTitleSize(0.06);
   Zpt_Meas_fakes_DY_stack_3->GetXaxis()->SetTitleOffset(0.9);
   Zpt_Meas_fakes_DY_stack_3->GetXaxis()->SetTitleFont(42);
   Zpt_Meas_fakes_DY_stack_3->GetYaxis()->SetTitle("Events");
   Zpt_Meas_fakes_DY_stack_3->GetYaxis()->SetLabelFont(42);
   Zpt_Meas_fakes_DY_stack_3->GetYaxis()->SetLabelOffset(0.007);
   Zpt_Meas_fakes_DY_stack_3->GetYaxis()->SetLabelSize(0.05);
   Zpt_Meas_fakes_DY_stack_3->GetYaxis()->SetTitleSize(0.06);
   Zpt_Meas_fakes_DY_stack_3->GetYaxis()->SetTitleOffset(1.35);
   Zpt_Meas_fakes_DY_stack_3->GetYaxis()->SetTitleFont(42);
   Zpt_Meas_fakes_DY_stack_3->GetZaxis()->SetLabelFont(42);
   Zpt_Meas_fakes_DY_stack_3->GetZaxis()->SetLabelOffset(0.007);
   Zpt_Meas_fakes_DY_stack_3->GetZaxis()->SetLabelSize(0.05);
   Zpt_Meas_fakes_DY_stack_3->GetZaxis()->SetTitleSize(0.06);
   Zpt_Meas_fakes_DY_stack_3->GetZaxis()->SetTitleFont(42);
   Zpt_Meas_stack->Add(Zpt_Meas_fakes_DY_stack_3,"");
   Double_t xAxis26[8] = {0, 75, 150, 225, 300, 350, 400, 500}; 
   
   TH1D *Zpt_Meas_prompt_ZZ_stack_4 = new TH1D("Zpt_Meas_prompt_ZZ_stack_4","dummy",7, xAxis26);
   Zpt_Meas_prompt_ZZ_stack_4->SetBinContent(1,43.11907);
   Zpt_Meas_prompt_ZZ_stack_4->SetBinContent(2,21.83476);
   Zpt_Meas_prompt_ZZ_stack_4->SetBinContent(3,4.954106);
   Zpt_Meas_prompt_ZZ_stack_4->SetBinContent(4,2.201825);
   Zpt_Meas_prompt_ZZ_stack_4->SetBinContent(5,0.7339416);
   Zpt_Meas_prompt_ZZ_stack_4->SetBinContent(6,0.1834854);
   Zpt_Meas_prompt_ZZ_stack_4->SetBinContent(7,0.1834854);
   Zpt_Meas_prompt_ZZ_stack_4->SetBinError(1,2.812778);
   Zpt_Meas_prompt_ZZ_stack_4->SetBinError(2,2.00159);
   Zpt_Meas_prompt_ZZ_stack_4->SetBinError(3,0.9534182);
   Zpt_Meas_prompt_ZZ_stack_4->SetBinError(4,0.6356121);
   Zpt_Meas_prompt_ZZ_stack_4->SetBinError(5,0.3669708);
   Zpt_Meas_prompt_ZZ_stack_4->SetBinError(6,0.1834854);
   Zpt_Meas_prompt_ZZ_stack_4->SetBinError(7,0.1834854);
   Zpt_Meas_prompt_ZZ_stack_4->SetEntries(403);

   ci = TColor::GetColor("#00cc00");
   Zpt_Meas_prompt_ZZ_stack_4->SetFillColor(ci);
   Zpt_Meas_prompt_ZZ_stack_4->SetMarkerStyle(0);
   Zpt_Meas_prompt_ZZ_stack_4->SetMarkerSize(1.1);
   Zpt_Meas_prompt_ZZ_stack_4->GetXaxis()->SetTitle("p_{T}^{Z} [GeV]");
   Zpt_Meas_prompt_ZZ_stack_4->GetXaxis()->SetMoreLogLabels();
   Zpt_Meas_prompt_ZZ_stack_4->GetXaxis()->SetLabelFont(42);
   Zpt_Meas_prompt_ZZ_stack_4->GetXaxis()->SetLabelOffset(0.007);
   Zpt_Meas_prompt_ZZ_stack_4->GetXaxis()->SetLabelSize(0.05);
   Zpt_Meas_prompt_ZZ_stack_4->GetXaxis()->SetTitleSize(0.06);
   Zpt_Meas_prompt_ZZ_stack_4->GetXaxis()->SetTitleOffset(0.9);
   Zpt_Meas_prompt_ZZ_stack_4->GetXaxis()->SetTitleFont(42);
   Zpt_Meas_prompt_ZZ_stack_4->GetYaxis()->SetTitle("Events");
   Zpt_Meas_prompt_ZZ_stack_4->GetYaxis()->SetLabelFont(42);
   Zpt_Meas_prompt_ZZ_stack_4->GetYaxis()->SetLabelOffset(0.007);
   Zpt_Meas_prompt_ZZ_stack_4->GetYaxis()->SetLabelSize(0.05);
   Zpt_Meas_prompt_ZZ_stack_4->GetYaxis()->SetTitleSize(0.06);
   Zpt_Meas_prompt_ZZ_stack_4->GetYaxis()->SetTitleOffset(1.35);
   Zpt_Meas_prompt_ZZ_stack_4->GetYaxis()->SetTitleFont(42);
   Zpt_Meas_prompt_ZZ_stack_4->GetZaxis()->SetLabelFont(42);
   Zpt_Meas_prompt_ZZ_stack_4->GetZaxis()->SetLabelOffset(0.007);
   Zpt_Meas_prompt_ZZ_stack_4->GetZaxis()->SetLabelSize(0.05);
   Zpt_Meas_prompt_ZZ_stack_4->GetZaxis()->SetTitleSize(0.06);
   Zpt_Meas_prompt_ZZ_stack_4->GetZaxis()->SetTitleFont(42);
   Zpt_Meas_stack->Add(Zpt_Meas_prompt_ZZ_stack_4,"");
   Double_t xAxis27[8] = {0, 75, 150, 225, 300, 350, 400, 500}; 
   
   TH1D *Zpt_Meas_prompt_WZ_stack_5 = new TH1D("Zpt_Meas_prompt_WZ_stack_5","dummy",7, xAxis27);
   Zpt_Meas_prompt_WZ_stack_5->SetBinContent(1,763.5619);
   Zpt_Meas_prompt_WZ_stack_5->SetBinContent(2,353.1994);
   Zpt_Meas_prompt_WZ_stack_5->SetBinContent(3,87.19186);
   Zpt_Meas_prompt_WZ_stack_5->SetBinContent(4,27.67708);
   Zpt_Meas_prompt_WZ_stack_5->SetBinContent(5,8.230767);
   Zpt_Meas_prompt_WZ_stack_5->SetBinContent(6,4.612847);
   Zpt_Meas_prompt_WZ_stack_5->SetBinContent(7,5.607775);
   Zpt_Meas_prompt_WZ_stack_5->SetBinError(1,8.310394);
   Zpt_Meas_prompt_WZ_stack_5->SetBinError(2,5.652095);
   Zpt_Meas_prompt_WZ_stack_5->SetBinError(3,2.808261);
   Zpt_Meas_prompt_WZ_stack_5->SetBinError(4,1.582194);
   Zpt_Meas_prompt_WZ_stack_5->SetBinError(5,0.8628188);
   Zpt_Meas_prompt_WZ_stack_5->SetBinError(6,0.6459278);
   Zpt_Meas_prompt_WZ_stack_5->SetBinError(7,0.7121882);
   Zpt_Meas_prompt_WZ_stack_5->SetEntries(13825);

   ci = TColor::GetColor("#ffcc00");
   Zpt_Meas_prompt_WZ_stack_5->SetFillColor(ci);
   Zpt_Meas_prompt_WZ_stack_5->SetMarkerStyle(0);
   Zpt_Meas_prompt_WZ_stack_5->SetMarkerSize(1.1);
   Zpt_Meas_prompt_WZ_stack_5->GetXaxis()->SetTitle("p_{T}^{Z} [GeV]");
   Zpt_Meas_prompt_WZ_stack_5->GetXaxis()->SetMoreLogLabels();
   Zpt_Meas_prompt_WZ_stack_5->GetXaxis()->SetLabelFont(42);
   Zpt_Meas_prompt_WZ_stack_5->GetXaxis()->SetLabelOffset(0.007);
   Zpt_Meas_prompt_WZ_stack_5->GetXaxis()->SetLabelSize(0.05);
   Zpt_Meas_prompt_WZ_stack_5->GetXaxis()->SetTitleSize(0.06);
   Zpt_Meas_prompt_WZ_stack_5->GetXaxis()->SetTitleOffset(0.9);
   Zpt_Meas_prompt_WZ_stack_5->GetXaxis()->SetTitleFont(42);
   Zpt_Meas_prompt_WZ_stack_5->GetYaxis()->SetTitle("Events");
   Zpt_Meas_prompt_WZ_stack_5->GetYaxis()->SetLabelFont(42);
   Zpt_Meas_prompt_WZ_stack_5->GetYaxis()->SetLabelOffset(0.007);
   Zpt_Meas_prompt_WZ_stack_5->GetYaxis()->SetLabelSize(0.05);
   Zpt_Meas_prompt_WZ_stack_5->GetYaxis()->SetTitleSize(0.06);
   Zpt_Meas_prompt_WZ_stack_5->GetYaxis()->SetTitleOffset(1.35);
   Zpt_Meas_prompt_WZ_stack_5->GetYaxis()->SetTitleFont(42);
   Zpt_Meas_prompt_WZ_stack_5->GetZaxis()->SetLabelFont(42);
   Zpt_Meas_prompt_WZ_stack_5->GetZaxis()->SetLabelOffset(0.007);
   Zpt_Meas_prompt_WZ_stack_5->GetZaxis()->SetLabelSize(0.05);
   Zpt_Meas_prompt_WZ_stack_5->GetZaxis()->SetTitleSize(0.06);
   Zpt_Meas_prompt_WZ_stack_5->GetZaxis()->SetTitleFont(42);
   Zpt_Meas_stack->Add(Zpt_Meas_prompt_WZ_stack_5,"");
   Zpt_Meas_stack->Draw("same hist");
   Double_t xAxis28[8] = {0, 75, 150, 225, 300, 350, 400, 500}; 
   
   TH1D *Zpt_Meas_total__130 = new TH1D("Zpt_Meas_total__130","dummy",7, xAxis28);
   Zpt_Meas_total__130->SetBinContent(1,922.2642);
   Zpt_Meas_total__130->SetBinContent(2,423.2209);
   Zpt_Meas_total__130->SetBinContent(3,100.4298);
   Zpt_Meas_total__130->SetBinContent(4,30.34437);
   Zpt_Meas_total__130->SetBinContent(5,9.031203);
   Zpt_Meas_total__130->SetBinContent(6,4.862827);
   Zpt_Meas_total__130->SetBinContent(7,5.791261);
   Zpt_Meas_total__130->SetBinError(1,14.87099);
   Zpt_Meas_total__130->SetBinError(2,9.355195);
   Zpt_Meas_total__130->SetBinError(3,4.228742);
   Zpt_Meas_total__130->SetBinError(4,1.714144);
   Zpt_Meas_total__130->SetBinError(5,0.939971);
   Zpt_Meas_total__130->SetBinError(6,0.6747675);
   Zpt_Meas_total__130->SetBinError(7,0.7354447);
   Zpt_Meas_total__130->SetMinimum(0);
   Zpt_Meas_total__130->SetMaximum(1243.658);
   Zpt_Meas_total__130->SetEntries(15152);
   Zpt_Meas_total__130->SetDirectory(0);

   ci = TColor::GetColor("#00cc00");
   Zpt_Meas_total__130->SetFillColor(ci);
   Zpt_Meas_total__130->SetMarkerStyle(20);
   Zpt_Meas_total__130->SetMarkerSize(1.1);
   Zpt_Meas_total__130->GetXaxis()->SetTitle("p_{T}^{Z} [GeV]");
   Zpt_Meas_total__130->GetXaxis()->SetMoreLogLabels();
   Zpt_Meas_total__130->GetXaxis()->SetLabelFont(42);
   Zpt_Meas_total__130->GetXaxis()->SetLabelOffset(999);
   Zpt_Meas_total__130->GetXaxis()->SetLabelSize(0.05);
   Zpt_Meas_total__130->GetXaxis()->SetTitleSize(0.05);
   Zpt_Meas_total__130->GetXaxis()->SetTitleOffset(999);
   Zpt_Meas_total__130->GetXaxis()->SetTitleFont(42);
   Zpt_Meas_total__130->GetYaxis()->SetTitle("Events");
   Zpt_Meas_total__130->GetYaxis()->SetLabelFont(42);
   Zpt_Meas_total__130->GetYaxis()->SetLabelOffset(0.007);
   Zpt_Meas_total__130->GetYaxis()->SetLabelSize(0.05);
   Zpt_Meas_total__130->GetYaxis()->SetTitleSize(0.06);
   Zpt_Meas_total__130->GetYaxis()->SetTitleOffset(1.48);
   Zpt_Meas_total__130->GetYaxis()->SetTitleFont(42);
   Zpt_Meas_total__130->GetZaxis()->SetLabelFont(42);
   Zpt_Meas_total__130->GetZaxis()->SetLabelOffset(0.007);
   Zpt_Meas_total__130->GetZaxis()->SetLabelSize(0.05);
   Zpt_Meas_total__130->GetZaxis()->SetTitleSize(0.06);
   Zpt_Meas_total__130->GetZaxis()->SetTitleFont(42);
   Zpt_Meas_total__130->Draw("AXIS SAME");
   
   Double_t Zpt_Meas_total_errors_fx3161[7] = {
   37.5,
   112.5,
   187.5,
   262.5,
   325,
   375,
   450};
   Double_t Zpt_Meas_total_errors_fy3161[7] = {
   922.2642,
   423.2209,
   100.4298,
   30.34437,
   9.031203,
   4.862827,
   5.791261};
   Double_t Zpt_Meas_total_errors_felx3161[7] = {
   37.5,
   37.5,
   37.5,
   37.5,
   25,
   25,
   50};
   Double_t Zpt_Meas_total_errors_fely3161[7] = {
   14.87099,
   9.355195,
   4.228742,
   1.714144,
   0.939971,
   0.6747675,
   0.7354447};
   Double_t Zpt_Meas_total_errors_fehx3161[7] = {
   37.5,
   37.5,
   37.5,
   37.5,
   25,
   25,
   50};
   Double_t Zpt_Meas_total_errors_fehy3161[7] = {
   14.87099,
   9.355195,
   4.228742,
   1.714144,
   0.939971,
   0.6747675,
   0.7354447};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(7,Zpt_Meas_total_errors_fx3161,Zpt_Meas_total_errors_fy3161,Zpt_Meas_total_errors_felx3161,Zpt_Meas_total_errors_fehx3161,Zpt_Meas_total_errors_fely3161,Zpt_Meas_total_errors_fehy3161);
   grae->SetName("Zpt_Meas_total_errors");
   grae->SetTitle("Graph");
   grae->SetFillColor(1);
   grae->SetFillStyle(3013);
   grae->SetMarkerStyle(0);
   
   TH1F *Graph_Zpt_Meas_total_errors3161 = new TH1F("Graph_Zpt_Meas_total_errors3161","Graph",100,0,550);
   Graph_Zpt_Meas_total_errors3161->SetMinimum(3.769254);
   Graph_Zpt_Meas_total_errors3161->SetMaximum(1030.43);
   Graph_Zpt_Meas_total_errors3161->SetDirectory(0);
   Graph_Zpt_Meas_total_errors3161->SetStats(0);
   Graph_Zpt_Meas_total_errors3161->SetLineStyle(0);
   Graph_Zpt_Meas_total_errors3161->SetMarkerStyle(20);
   Graph_Zpt_Meas_total_errors3161->GetXaxis()->SetLabelFont(42);
   Graph_Zpt_Meas_total_errors3161->GetXaxis()->SetLabelOffset(0.007);
   Graph_Zpt_Meas_total_errors3161->GetXaxis()->SetLabelSize(0.05);
   Graph_Zpt_Meas_total_errors3161->GetXaxis()->SetTitleSize(0.06);
   Graph_Zpt_Meas_total_errors3161->GetXaxis()->SetTitleOffset(0.9);
   Graph_Zpt_Meas_total_errors3161->GetXaxis()->SetTitleFont(42);
   Graph_Zpt_Meas_total_errors3161->GetYaxis()->SetLabelFont(42);
   Graph_Zpt_Meas_total_errors3161->GetYaxis()->SetLabelOffset(0.007);
   Graph_Zpt_Meas_total_errors3161->GetYaxis()->SetLabelSize(0.05);
   Graph_Zpt_Meas_total_errors3161->GetYaxis()->SetTitleSize(0.06);
   Graph_Zpt_Meas_total_errors3161->GetYaxis()->SetTitleOffset(1.35);
   Graph_Zpt_Meas_total_errors3161->GetYaxis()->SetTitleFont(42);
   Graph_Zpt_Meas_total_errors3161->GetZaxis()->SetLabelFont(42);
   Graph_Zpt_Meas_total_errors3161->GetZaxis()->SetLabelOffset(0.007);
   Graph_Zpt_Meas_total_errors3161->GetZaxis()->SetLabelSize(0.05);
   Graph_Zpt_Meas_total_errors3161->GetZaxis()->SetTitleSize(0.06);
   Graph_Zpt_Meas_total_errors3161->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Zpt_Meas_total_errors3161);
   
   grae->Draw("pe2 ");
   
   Double_t Zpt_Meas_data_graph_fx3162[7] = {
   37.5,
   112.5,
   187.5,
   262.5,
   325,
   375,
   450};
   Double_t Zpt_Meas_data_graph_fy3162[7] = {
   916,
   416,
   102,
   51,
   6,
   10,
   12};
   Double_t Zpt_Meas_data_graph_felx3162[7] = {
   37.5,
   37.5,
   37.5,
   37.5,
   25,
   25,
   50};
   Double_t Zpt_Meas_data_graph_fely3162[7] = {
   30.26062,
   20.38832,
   10.08313,
   7.118073,
   2.379969,
   3.108748,
   3.415326};
   Double_t Zpt_Meas_data_graph_fehx3162[7] = {
   37.5,
   37.5,
   37.5,
   37.5,
   25,
   25,
   50};
   Double_t Zpt_Meas_data_graph_fehy3162[7] = {
   31.27718,
   21.41289,
   11.13277,
   8.188292,
   3.583712,
   4.267035,
   4.559911};
   grae = new TGraphAsymmErrors(7,Zpt_Meas_data_graph_fx3162,Zpt_Meas_data_graph_fy3162,Zpt_Meas_data_graph_felx3162,Zpt_Meas_data_graph_fehx3162,Zpt_Meas_data_graph_fely3162,Zpt_Meas_data_graph_fehy3162);
   grae->SetName("Zpt_Meas_data_graph");
   grae->SetTitle("Graph");
   grae->SetFillStyle(1000);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.1);
   
   TH1F *Graph_Zpt_Meas_data_graph3162 = new TH1F("Graph_Zpt_Meas_data_graph3162","Graph",100,0,550);
   Graph_Zpt_Meas_data_graph3162->SetMinimum(3.258028);
   Graph_Zpt_Meas_data_graph3162->SetMaximum(1041.643);
   Graph_Zpt_Meas_data_graph3162->SetDirectory(0);
   Graph_Zpt_Meas_data_graph3162->SetStats(0);
   Graph_Zpt_Meas_data_graph3162->SetLineStyle(0);
   Graph_Zpt_Meas_data_graph3162->SetMarkerStyle(20);
   Graph_Zpt_Meas_data_graph3162->GetXaxis()->SetLabelFont(42);
   Graph_Zpt_Meas_data_graph3162->GetXaxis()->SetLabelOffset(0.007);
   Graph_Zpt_Meas_data_graph3162->GetXaxis()->SetLabelSize(0.05);
   Graph_Zpt_Meas_data_graph3162->GetXaxis()->SetTitleSize(0.06);
   Graph_Zpt_Meas_data_graph3162->GetXaxis()->SetTitleOffset(0.9);
   Graph_Zpt_Meas_data_graph3162->GetXaxis()->SetTitleFont(42);
   Graph_Zpt_Meas_data_graph3162->GetYaxis()->SetLabelFont(42);
   Graph_Zpt_Meas_data_graph3162->GetYaxis()->SetLabelOffset(0.007);
   Graph_Zpt_Meas_data_graph3162->GetYaxis()->SetLabelSize(0.05);
   Graph_Zpt_Meas_data_graph3162->GetYaxis()->SetTitleSize(0.06);
   Graph_Zpt_Meas_data_graph3162->GetYaxis()->SetTitleOffset(1.35);
   Graph_Zpt_Meas_data_graph3162->GetYaxis()->SetTitleFont(42);
   Graph_Zpt_Meas_data_graph3162->GetZaxis()->SetLabelFont(42);
   Graph_Zpt_Meas_data_graph3162->GetZaxis()->SetLabelOffset(0.007);
   Graph_Zpt_Meas_data_graph3162->GetZaxis()->SetLabelSize(0.05);
   Graph_Zpt_Meas_data_graph3162->GetZaxis()->SetTitleSize(0.06);
   Graph_Zpt_Meas_data_graph3162->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Zpt_Meas_data_graph3162);
   
   grae->Draw("pz ");
   
   TLegend *leg = new TLegend(0.62,0.628,0.9,0.91,NULL,"brNDC");
   leg->SetBorderSize(1);
   leg->SetTextSize(0.036);
   leg->SetLineColor(0);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("Zpt_Meas_data","Data","LPE");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1.1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("Zpt_Meas_prompt_WZ_stack_5","WZ","F");

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
   entry=leg->AddEntry("Zpt_Meas_prompt_ZZ_stack_4","qqZZ","F");

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
   entry=leg->AddEntry("Zpt_Meas_fakes_DY_stack_3","Fakes DY","F");

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
   entry=leg->AddEntry("Zpt_Meas_fakes_TT_stack_2","Fakes TT","F");

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
   entry=leg->AddEntry("Zpt_Meas_total_errors","Total unc.","F");
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
   Zpt_Meas_canvas->cd();
  
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
   Double_t xAxis29[8] = {0, 75, 150, 225, 300, 350, 400, 500}; 
   
   TH1D *Zpt_Meas_total__131 = new TH1D("Zpt_Meas_total__131","dummy",7, xAxis29);
   Zpt_Meas_total__131->SetBinContent(1,1);
   Zpt_Meas_total__131->SetBinContent(2,1);
   Zpt_Meas_total__131->SetBinContent(3,1);
   Zpt_Meas_total__131->SetBinContent(4,1);
   Zpt_Meas_total__131->SetBinContent(5,1);
   Zpt_Meas_total__131->SetBinContent(6,1);
   Zpt_Meas_total__131->SetBinContent(7,1);
   Zpt_Meas_total__131->SetMinimum(0.5);
   Zpt_Meas_total__131->SetMaximum(2);
   Zpt_Meas_total__131->SetEntries(15159);

   ci = TColor::GetColor("#00cc00");
   Zpt_Meas_total__131->SetFillColor(ci);

   ci = TColor::GetColor("#6666ff");
   Zpt_Meas_total__131->SetMarkerColor(ci);
   Zpt_Meas_total__131->SetMarkerSize(1.1);
   Zpt_Meas_total__131->GetXaxis()->SetTitle("p_{T}^{Z} [GeV]");
   Zpt_Meas_total__131->GetXaxis()->SetMoreLogLabels();
   Zpt_Meas_total__131->GetXaxis()->SetLabelFont(42);
   Zpt_Meas_total__131->GetXaxis()->SetLabelOffset(0.015);
   Zpt_Meas_total__131->GetXaxis()->SetLabelSize(0.1);
   Zpt_Meas_total__131->GetXaxis()->SetTitleSize(0.14);
   Zpt_Meas_total__131->GetXaxis()->SetTitleFont(42);
   Zpt_Meas_total__131->GetYaxis()->SetTitle("Data/pred.");
   Zpt_Meas_total__131->GetYaxis()->SetDecimals();
   Zpt_Meas_total__131->GetYaxis()->SetNdivisions(505);
   Zpt_Meas_total__131->GetYaxis()->SetLabelFont(42);
   Zpt_Meas_total__131->GetYaxis()->SetLabelOffset(0.01);
   Zpt_Meas_total__131->GetYaxis()->SetLabelSize(0.11);
   Zpt_Meas_total__131->GetYaxis()->SetTitleSize(0.14);
   Zpt_Meas_total__131->GetYaxis()->SetTitleOffset(0.62);
   Zpt_Meas_total__131->GetYaxis()->SetTitleFont(42);
   Zpt_Meas_total__131->GetZaxis()->SetLabelFont(42);
   Zpt_Meas_total__131->GetZaxis()->SetLabelOffset(0.007);
   Zpt_Meas_total__131->GetZaxis()->SetLabelSize(0.05);
   Zpt_Meas_total__131->GetZaxis()->SetTitleSize(0.06);
   Zpt_Meas_total__131->GetZaxis()->SetTitleFont(42);
   Zpt_Meas_total__131->Draw("AXIS");
   
   Double_t Zpt_Meas_total_errors_fx3163[7] = {
   37.5,
   112.5,
   187.5,
   262.5,
   325,
   375,
   450};
   Double_t Zpt_Meas_total_errors_fy3163[7] = {
   1,
   1,
   1,
   1,
   1,
   1,
   1};
   Double_t Zpt_Meas_total_errors_felx3163[7] = {
   37.5,
   37.5,
   37.5,
   37.5,
   25,
   25,
   50};
   Double_t Zpt_Meas_total_errors_fely3163[7] = {
   0.01612443,
   0.02210476,
   0.04210646,
   0.05648969,
   0.1040804,
   0.1387603,
   0.1269922};
   Double_t Zpt_Meas_total_errors_fehx3163[7] = {
   37.5,
   37.5,
   37.5,
   37.5,
   25,
   25,
   50};
   Double_t Zpt_Meas_total_errors_fehy3163[7] = {
   0.01612443,
   0.02210476,
   0.04210646,
   0.05648969,
   0.1040804,
   0.1387603,
   0.1269922};
   grae = new TGraphAsymmErrors(7,Zpt_Meas_total_errors_fx3163,Zpt_Meas_total_errors_fy3163,Zpt_Meas_total_errors_felx3163,Zpt_Meas_total_errors_fehx3163,Zpt_Meas_total_errors_fely3163,Zpt_Meas_total_errors_fehy3163);
   grae->SetName("Zpt_Meas_total_errors");
   grae->SetTitle("Graph");

   ci = TColor::GetColor("#00ffff");
   grae->SetFillColor(ci);

   ci = TColor::GetColor("#00ffff");
   grae->SetMarkerColor(ci);
   grae->Draw("e2");
   
   Double_t Zpt_Meas_total_errors_fx3164[7] = {
   37.5,
   112.5,
   187.5,
   262.5,
   325,
   375,
   450};
   Double_t Zpt_Meas_total_errors_fy3164[7] = {
   1,
   1,
   1,
   1,
   1,
   1,
   1};
   Double_t Zpt_Meas_total_errors_felx3164[7] = {
   37.5,
   37.5,
   37.5,
   37.5,
   25,
   25,
   50};
   Double_t Zpt_Meas_total_errors_fely3164[7] = {
   0.01612443,
   0.02210476,
   0.04210646,
   0.05648969,
   0.1040804,
   0.1387603,
   0.1269922};
   Double_t Zpt_Meas_total_errors_fehx3164[7] = {
   37.5,
   37.5,
   37.5,
   37.5,
   25,
   25,
   50};
   Double_t Zpt_Meas_total_errors_fehy3164[7] = {
   0.01612443,
   0.02210476,
   0.04210646,
   0.05648969,
   0.1040804,
   0.1387603,
   0.1269922};
   grae = new TGraphAsymmErrors(7,Zpt_Meas_total_errors_fx3164,Zpt_Meas_total_errors_fy3164,Zpt_Meas_total_errors_felx3164,Zpt_Meas_total_errors_fehx3164,Zpt_Meas_total_errors_fely3164,Zpt_Meas_total_errors_fehy3164);
   grae->SetName("Zpt_Meas_total_errors");
   grae->SetTitle("Graph");

   ci = TColor::GetColor("#6666ff");
   grae->SetFillColor(ci);

   ci = TColor::GetColor("#6666ff");
   grae->SetMarkerColor(ci);
   grae->Draw("e2 ");
   Double_t xAxis30[8] = {0, 75, 150, 225, 300, 350, 400, 500}; 
   
   TH1D *Zpt_Meas_total__132 = new TH1D("Zpt_Meas_total__132","dummy",7, xAxis30);
   Zpt_Meas_total__132->SetBinContent(1,1);
   Zpt_Meas_total__132->SetBinContent(2,1);
   Zpt_Meas_total__132->SetBinContent(3,1);
   Zpt_Meas_total__132->SetBinContent(4,1);
   Zpt_Meas_total__132->SetBinContent(5,1);
   Zpt_Meas_total__132->SetBinContent(6,1);
   Zpt_Meas_total__132->SetBinContent(7,1);
   Zpt_Meas_total__132->SetMinimum(0.5);
   Zpt_Meas_total__132->SetMaximum(2);
   Zpt_Meas_total__132->SetEntries(15159);

   ci = TColor::GetColor("#00cc00");
   Zpt_Meas_total__132->SetFillColor(ci);

   ci = TColor::GetColor("#6666ff");
   Zpt_Meas_total__132->SetMarkerColor(ci);
   Zpt_Meas_total__132->SetMarkerSize(1.1);
   Zpt_Meas_total__132->GetXaxis()->SetTitle("p_{T}^{Z} [GeV]");
   Zpt_Meas_total__132->GetXaxis()->SetMoreLogLabels();
   Zpt_Meas_total__132->GetXaxis()->SetLabelFont(42);
   Zpt_Meas_total__132->GetXaxis()->SetLabelOffset(0.015);
   Zpt_Meas_total__132->GetXaxis()->SetLabelSize(0.1);
   Zpt_Meas_total__132->GetXaxis()->SetTitleSize(0.14);
   Zpt_Meas_total__132->GetXaxis()->SetTitleFont(42);
   Zpt_Meas_total__132->GetYaxis()->SetTitle("Data/pred.");
   Zpt_Meas_total__132->GetYaxis()->SetDecimals();
   Zpt_Meas_total__132->GetYaxis()->SetNdivisions(505);
   Zpt_Meas_total__132->GetYaxis()->SetLabelFont(42);
   Zpt_Meas_total__132->GetYaxis()->SetLabelOffset(0.01);
   Zpt_Meas_total__132->GetYaxis()->SetLabelSize(0.11);
   Zpt_Meas_total__132->GetYaxis()->SetTitleSize(0.14);
   Zpt_Meas_total__132->GetYaxis()->SetTitleOffset(0.62);
   Zpt_Meas_total__132->GetYaxis()->SetTitleFont(42);
   Zpt_Meas_total__132->GetZaxis()->SetLabelFont(42);
   Zpt_Meas_total__132->GetZaxis()->SetLabelOffset(0.007);
   Zpt_Meas_total__132->GetZaxis()->SetLabelSize(0.05);
   Zpt_Meas_total__132->GetZaxis()->SetTitleSize(0.06);
   Zpt_Meas_total__132->GetZaxis()->SetTitleFont(42);
   Zpt_Meas_total__132->Draw("AXIS SAME");
   TLine *line = new TLine(0,1,500,1);
   line->SetLineColor(58);
   line->SetLineWidth(2);
   line->Draw();
   
   Double_t data_div_fx3165[7] = {
   37.5,
   112.5,
   187.5,
   262.5,
   325,
   375,
   450};
   Double_t data_div_fy3165[7] = {
   0.9932078,
   0.9829383,
   1.015635,
   1.680707,
   0.6643633,
   2.056417,
   2.072088};
   Double_t data_div_felx3165[7] = {
   37.5,
   37.5,
   37.5,
   37.5,
   25,
   25,
   50};
   Double_t data_div_fely3165[7] = {
   0.03281122,
   0.04817418,
   0.1003998,
   0.2345764,
   0.2635274,
   0.6392882,
   0.5897379};
   Double_t data_div_fehx3165[7] = {
   37.5,
   37.5,
   37.5,
   37.5,
   25,
   25,
   50};
   Double_t data_div_fehy3165[7] = {
   0.03391347,
   0.05059507,
   0.1108513,
   0.2698455,
   0.3968145,
   0.8774804,
   0.787378};
   grae = new TGraphAsymmErrors(7,data_div_fx3165,data_div_fy3165,data_div_felx3165,data_div_fehx3165,data_div_fely3165,data_div_fehy3165);
   grae->SetName("data_div");
   grae->SetTitle("Graph");
   grae->SetFillStyle(1000);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.1);
   
   TH1F *Graph_Zpt_Meas_data_graph3165 = new TH1F("Graph_Zpt_Meas_data_graph3165","Graph",100,0,550);
   Graph_Zpt_Meas_data_graph3165->SetMinimum(3.258028);
   Graph_Zpt_Meas_data_graph3165->SetMaximum(1041.643);
   Graph_Zpt_Meas_data_graph3165->SetDirectory(0);
   Graph_Zpt_Meas_data_graph3165->SetStats(0);
   Graph_Zpt_Meas_data_graph3165->SetLineStyle(0);
   Graph_Zpt_Meas_data_graph3165->SetMarkerStyle(20);
   Graph_Zpt_Meas_data_graph3165->GetXaxis()->SetLabelFont(42);
   Graph_Zpt_Meas_data_graph3165->GetXaxis()->SetLabelOffset(0.007);
   Graph_Zpt_Meas_data_graph3165->GetXaxis()->SetLabelSize(0.05);
   Graph_Zpt_Meas_data_graph3165->GetXaxis()->SetTitleSize(0.06);
   Graph_Zpt_Meas_data_graph3165->GetXaxis()->SetTitleOffset(0.9);
   Graph_Zpt_Meas_data_graph3165->GetXaxis()->SetTitleFont(42);
   Graph_Zpt_Meas_data_graph3165->GetYaxis()->SetLabelFont(42);
   Graph_Zpt_Meas_data_graph3165->GetYaxis()->SetLabelOffset(0.007);
   Graph_Zpt_Meas_data_graph3165->GetYaxis()->SetLabelSize(0.05);
   Graph_Zpt_Meas_data_graph3165->GetYaxis()->SetTitleSize(0.06);
   Graph_Zpt_Meas_data_graph3165->GetYaxis()->SetTitleOffset(1.35);
   Graph_Zpt_Meas_data_graph3165->GetYaxis()->SetTitleFont(42);
   Graph_Zpt_Meas_data_graph3165->GetZaxis()->SetLabelFont(42);
   Graph_Zpt_Meas_data_graph3165->GetZaxis()->SetLabelOffset(0.007);
   Graph_Zpt_Meas_data_graph3165->GetZaxis()->SetLabelSize(0.05);
   Graph_Zpt_Meas_data_graph3165->GetZaxis()->SetTitleSize(0.06);
   Graph_Zpt_Meas_data_graph3165->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Zpt_Meas_data_graph3165);
   
   grae->Draw("pz ");
   
   leg = new TLegend(0,0,0,0,NULL,"brNDC");
   leg->SetBorderSize(1);
   leg->SetTextSize(0.084);
   leg->SetLineColor(0);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   entry=leg->AddEntry("Zpt_Meas_total_errors","stat. unc.","F");
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
   entry=leg->AddEntry("Zpt_Meas_total_errors","total unc.","F");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   leg->Draw();
   pad2->Modified();
   Zpt_Meas_canvas->cd();
   Zpt_Meas_canvas->Modified();
   Zpt_Meas_canvas->cd();
   Zpt_Meas_canvas->SetSelected(Zpt_Meas_canvas);
}
