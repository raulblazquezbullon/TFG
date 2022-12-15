void nBJet25()
{
//=========Macro generated from canvas: nBJet25_canvas/nBJet25
//=========  (Thu Dec 15 18:29:19 2022) by ROOT version 6.12/07
   TCanvas *nBJet25_canvas = new TCanvas("nBJet25_canvas", "nBJet25",0,0,600,750);
   gStyle->SetOptFit(1);
   gStyle->SetOptStat(0);
   gStyle->SetOptTitle(0);
   nBJet25_canvas->SetHighLightColor(2);
   nBJet25_canvas->Range(0,0,1,1);
   nBJet25_canvas->SetFillColor(0);
   nBJet25_canvas->SetBorderMode(0);
   nBJet25_canvas->SetBorderSize(2);
   nBJet25_canvas->SetTickx(1);
   nBJet25_canvas->SetTicky(1);
   nBJet25_canvas->SetLeftMargin(0.18);
   nBJet25_canvas->SetRightMargin(0.04);
   nBJet25_canvas->SetBottomMargin(0.13);
   nBJet25_canvas->SetFrameFillStyle(0);
   nBJet25_canvas->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: pad1
   TPad *pad1 = new TPad("pad1", "pad1",0,0.3,1,1);
   pad1->Draw();
   pad1->cd();
   pad1->Range(-1.461538,-55.58312,1.102564,2167.742);
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
   
   TH1D *nBJet25_total__97 = new TH1D("nBJet25_total__97","dummy",1,-1,1);
   nBJet25_total__97->SetBinContent(1,1495.945);
   nBJet25_total__97->SetBinError(1,18.20347);
   nBJet25_total__97->SetMinimum(0);
   nBJet25_total__97->SetMaximum(2034.342);
   nBJet25_total__97->SetEntries(15152);
   nBJet25_total__97->SetDirectory(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#00cc00");
   nBJet25_total__97->SetFillColor(ci);
   nBJet25_total__97->SetMarkerStyle(20);
   nBJet25_total__97->SetMarkerSize(1.1);
   nBJet25_total__97->GetXaxis()->SetTitle("N(b-jet, p_{T} > 25, DCSVT)");
   nBJet25_total__97->GetXaxis()->SetMoreLogLabels();
   nBJet25_total__97->GetXaxis()->SetLabelFont(42);
   nBJet25_total__97->GetXaxis()->SetLabelOffset(999);
   nBJet25_total__97->GetXaxis()->SetLabelSize(0.05);
   nBJet25_total__97->GetXaxis()->SetTitleSize(0.05);
   nBJet25_total__97->GetXaxis()->SetTitleOffset(999);
   nBJet25_total__97->GetXaxis()->SetTitleFont(42);
   nBJet25_total__97->GetYaxis()->SetTitle("Events");
   nBJet25_total__97->GetYaxis()->SetLabelFont(42);
   nBJet25_total__97->GetYaxis()->SetLabelOffset(0.007);
   nBJet25_total__97->GetYaxis()->SetLabelSize(0.05);
   nBJet25_total__97->GetYaxis()->SetTitleSize(0.06);
   nBJet25_total__97->GetYaxis()->SetTitleOffset(1.48);
   nBJet25_total__97->GetYaxis()->SetTitleFont(42);
   nBJet25_total__97->GetZaxis()->SetLabelFont(42);
   nBJet25_total__97->GetZaxis()->SetLabelOffset(0.007);
   nBJet25_total__97->GetZaxis()->SetLabelSize(0.05);
   nBJet25_total__97->GetZaxis()->SetTitleSize(0.06);
   nBJet25_total__97->GetZaxis()->SetTitleFont(42);
   nBJet25_total__97->Draw("HIST");
   
   THStack *nBJet25_stack = new THStack();
   nBJet25_stack->SetName("nBJet25_stack");
   nBJet25_stack->SetTitle("nBJet25");
   
   TH1F *nBJet25_stack_stack_25 = new TH1F("nBJet25_stack_stack_25","nBJet25",1,-1,1);
   nBJet25_stack_stack_25->SetMinimum(0);
   nBJet25_stack_stack_25->SetMaximum(1570.742);
   nBJet25_stack_stack_25->SetDirectory(0);
   nBJet25_stack_stack_25->SetStats(0);
   nBJet25_stack_stack_25->SetLineStyle(0);
   nBJet25_stack_stack_25->SetMarkerStyle(20);
   nBJet25_stack_stack_25->GetXaxis()->SetLabelFont(42);
   nBJet25_stack_stack_25->GetXaxis()->SetLabelOffset(0.007);
   nBJet25_stack_stack_25->GetXaxis()->SetLabelSize(0.05);
   nBJet25_stack_stack_25->GetXaxis()->SetTitleSize(0.06);
   nBJet25_stack_stack_25->GetXaxis()->SetTitleOffset(0.9);
   nBJet25_stack_stack_25->GetXaxis()->SetTitleFont(42);
   nBJet25_stack_stack_25->GetYaxis()->SetLabelFont(42);
   nBJet25_stack_stack_25->GetYaxis()->SetLabelOffset(0.007);
   nBJet25_stack_stack_25->GetYaxis()->SetLabelSize(0.05);
   nBJet25_stack_stack_25->GetYaxis()->SetTitleSize(0.06);
   nBJet25_stack_stack_25->GetYaxis()->SetTitleOffset(1.35);
   nBJet25_stack_stack_25->GetYaxis()->SetTitleFont(42);
   nBJet25_stack_stack_25->GetZaxis()->SetLabelFont(42);
   nBJet25_stack_stack_25->GetZaxis()->SetLabelOffset(0.007);
   nBJet25_stack_stack_25->GetZaxis()->SetLabelSize(0.05);
   nBJet25_stack_stack_25->GetZaxis()->SetTitleSize(0.06);
   nBJet25_stack_stack_25->GetZaxis()->SetTitleFont(42);
   nBJet25_stack->SetHistogram(nBJet25_stack_stack_25);
   
   
   TH1D *nBJet25_fakes_VV_stack_1 = new TH1D("nBJet25_fakes_VV_stack_1","dummy",1,-1,1);
   nBJet25_fakes_VV_stack_1->SetBinContent(1,0.6803536);
   nBJet25_fakes_VV_stack_1->SetBinError(1,0.2571495);
   nBJet25_fakes_VV_stack_1->SetEntries(11);

   ci = TColor::GetColor("#2e3294");
   nBJet25_fakes_VV_stack_1->SetFillColor(ci);
   nBJet25_fakes_VV_stack_1->SetMarkerStyle(0);
   nBJet25_fakes_VV_stack_1->SetMarkerSize(1.1);
   nBJet25_fakes_VV_stack_1->GetXaxis()->SetTitle("N(b-jet, p_{T} > 25, DCSVT)");
   nBJet25_fakes_VV_stack_1->GetXaxis()->SetMoreLogLabels();
   nBJet25_fakes_VV_stack_1->GetXaxis()->SetLabelFont(42);
   nBJet25_fakes_VV_stack_1->GetXaxis()->SetLabelOffset(0.007);
   nBJet25_fakes_VV_stack_1->GetXaxis()->SetLabelSize(0.05);
   nBJet25_fakes_VV_stack_1->GetXaxis()->SetTitleSize(0.06);
   nBJet25_fakes_VV_stack_1->GetXaxis()->SetTitleOffset(0.9);
   nBJet25_fakes_VV_stack_1->GetXaxis()->SetTitleFont(42);
   nBJet25_fakes_VV_stack_1->GetYaxis()->SetTitle("Events");
   nBJet25_fakes_VV_stack_1->GetYaxis()->SetLabelFont(42);
   nBJet25_fakes_VV_stack_1->GetYaxis()->SetLabelOffset(0.007);
   nBJet25_fakes_VV_stack_1->GetYaxis()->SetLabelSize(0.05);
   nBJet25_fakes_VV_stack_1->GetYaxis()->SetTitleSize(0.06);
   nBJet25_fakes_VV_stack_1->GetYaxis()->SetTitleOffset(1.35);
   nBJet25_fakes_VV_stack_1->GetYaxis()->SetTitleFont(42);
   nBJet25_fakes_VV_stack_1->GetZaxis()->SetLabelFont(42);
   nBJet25_fakes_VV_stack_1->GetZaxis()->SetLabelOffset(0.007);
   nBJet25_fakes_VV_stack_1->GetZaxis()->SetLabelSize(0.05);
   nBJet25_fakes_VV_stack_1->GetZaxis()->SetTitleSize(0.06);
   nBJet25_fakes_VV_stack_1->GetZaxis()->SetTitleFont(42);
   nBJet25_stack->Add(nBJet25_fakes_VV_stack_1,"");
   
   TH1D *nBJet25_fakes_TT_stack_2 = new TH1D("nBJet25_fakes_TT_stack_2","dummy",1,-1,1);
   nBJet25_fakes_TT_stack_2->SetBinContent(1,55.04433);
   nBJet25_fakes_TT_stack_2->SetBinError(1,1.933956);
   nBJet25_fakes_TT_stack_2->SetEntries(841);

   ci = TColor::GetColor("#666666");
   nBJet25_fakes_TT_stack_2->SetFillColor(ci);
   nBJet25_fakes_TT_stack_2->SetMarkerStyle(0);
   nBJet25_fakes_TT_stack_2->SetMarkerSize(1.1);
   nBJet25_fakes_TT_stack_2->GetXaxis()->SetTitle("N(b-jet, p_{T} > 25, DCSVT)");
   nBJet25_fakes_TT_stack_2->GetXaxis()->SetMoreLogLabels();
   nBJet25_fakes_TT_stack_2->GetXaxis()->SetLabelFont(42);
   nBJet25_fakes_TT_stack_2->GetXaxis()->SetLabelOffset(0.007);
   nBJet25_fakes_TT_stack_2->GetXaxis()->SetLabelSize(0.05);
   nBJet25_fakes_TT_stack_2->GetXaxis()->SetTitleSize(0.06);
   nBJet25_fakes_TT_stack_2->GetXaxis()->SetTitleOffset(0.9);
   nBJet25_fakes_TT_stack_2->GetXaxis()->SetTitleFont(42);
   nBJet25_fakes_TT_stack_2->GetYaxis()->SetTitle("Events");
   nBJet25_fakes_TT_stack_2->GetYaxis()->SetLabelFont(42);
   nBJet25_fakes_TT_stack_2->GetYaxis()->SetLabelOffset(0.007);
   nBJet25_fakes_TT_stack_2->GetYaxis()->SetLabelSize(0.05);
   nBJet25_fakes_TT_stack_2->GetYaxis()->SetTitleSize(0.06);
   nBJet25_fakes_TT_stack_2->GetYaxis()->SetTitleOffset(1.35);
   nBJet25_fakes_TT_stack_2->GetYaxis()->SetTitleFont(42);
   nBJet25_fakes_TT_stack_2->GetZaxis()->SetLabelFont(42);
   nBJet25_fakes_TT_stack_2->GetZaxis()->SetLabelOffset(0.007);
   nBJet25_fakes_TT_stack_2->GetZaxis()->SetLabelSize(0.05);
   nBJet25_fakes_TT_stack_2->GetZaxis()->SetTitleSize(0.06);
   nBJet25_fakes_TT_stack_2->GetZaxis()->SetTitleFont(42);
   nBJet25_stack->Add(nBJet25_fakes_TT_stack_2,"");
   
   TH1D *nBJet25_fakes_DY_stack_3 = new TH1D("nBJet25_fakes_DY_stack_3","dummy",1,-1,1);
   nBJet25_fakes_DY_stack_3->SetBinContent(1,116.9275);
   nBJet25_fakes_DY_stack_3->SetBinError(1,14.17954);
   nBJet25_fakes_DY_stack_3->SetEntries(72);

   ci = TColor::GetColor("#cccccc");
   nBJet25_fakes_DY_stack_3->SetFillColor(ci);
   nBJet25_fakes_DY_stack_3->SetMarkerStyle(0);
   nBJet25_fakes_DY_stack_3->SetMarkerSize(1.1);
   nBJet25_fakes_DY_stack_3->GetXaxis()->SetTitle("N(b-jet, p_{T} > 25, DCSVT)");
   nBJet25_fakes_DY_stack_3->GetXaxis()->SetMoreLogLabels();
   nBJet25_fakes_DY_stack_3->GetXaxis()->SetLabelFont(42);
   nBJet25_fakes_DY_stack_3->GetXaxis()->SetLabelOffset(0.007);
   nBJet25_fakes_DY_stack_3->GetXaxis()->SetLabelSize(0.05);
   nBJet25_fakes_DY_stack_3->GetXaxis()->SetTitleSize(0.06);
   nBJet25_fakes_DY_stack_3->GetXaxis()->SetTitleOffset(0.9);
   nBJet25_fakes_DY_stack_3->GetXaxis()->SetTitleFont(42);
   nBJet25_fakes_DY_stack_3->GetYaxis()->SetTitle("Events");
   nBJet25_fakes_DY_stack_3->GetYaxis()->SetLabelFont(42);
   nBJet25_fakes_DY_stack_3->GetYaxis()->SetLabelOffset(0.007);
   nBJet25_fakes_DY_stack_3->GetYaxis()->SetLabelSize(0.05);
   nBJet25_fakes_DY_stack_3->GetYaxis()->SetTitleSize(0.06);
   nBJet25_fakes_DY_stack_3->GetYaxis()->SetTitleOffset(1.35);
   nBJet25_fakes_DY_stack_3->GetYaxis()->SetTitleFont(42);
   nBJet25_fakes_DY_stack_3->GetZaxis()->SetLabelFont(42);
   nBJet25_fakes_DY_stack_3->GetZaxis()->SetLabelOffset(0.007);
   nBJet25_fakes_DY_stack_3->GetZaxis()->SetLabelSize(0.05);
   nBJet25_fakes_DY_stack_3->GetZaxis()->SetTitleSize(0.06);
   nBJet25_fakes_DY_stack_3->GetZaxis()->SetTitleFont(42);
   nBJet25_stack->Add(nBJet25_fakes_DY_stack_3,"");
   
   TH1D *nBJet25_prompt_ZZ_stack_4 = new TH1D("nBJet25_prompt_ZZ_stack_4","dummy",1,-1,1);
   nBJet25_prompt_ZZ_stack_4->SetBinContent(1,73.21068);
   nBJet25_prompt_ZZ_stack_4->SetBinError(1,3.665118);
   nBJet25_prompt_ZZ_stack_4->SetEntries(403);

   ci = TColor::GetColor("#00cc00");
   nBJet25_prompt_ZZ_stack_4->SetFillColor(ci);
   nBJet25_prompt_ZZ_stack_4->SetMarkerStyle(0);
   nBJet25_prompt_ZZ_stack_4->SetMarkerSize(1.1);
   nBJet25_prompt_ZZ_stack_4->GetXaxis()->SetTitle("N(b-jet, p_{T} > 25, DCSVT)");
   nBJet25_prompt_ZZ_stack_4->GetXaxis()->SetMoreLogLabels();
   nBJet25_prompt_ZZ_stack_4->GetXaxis()->SetLabelFont(42);
   nBJet25_prompt_ZZ_stack_4->GetXaxis()->SetLabelOffset(0.007);
   nBJet25_prompt_ZZ_stack_4->GetXaxis()->SetLabelSize(0.05);
   nBJet25_prompt_ZZ_stack_4->GetXaxis()->SetTitleSize(0.06);
   nBJet25_prompt_ZZ_stack_4->GetXaxis()->SetTitleOffset(0.9);
   nBJet25_prompt_ZZ_stack_4->GetXaxis()->SetTitleFont(42);
   nBJet25_prompt_ZZ_stack_4->GetYaxis()->SetTitle("Events");
   nBJet25_prompt_ZZ_stack_4->GetYaxis()->SetLabelFont(42);
   nBJet25_prompt_ZZ_stack_4->GetYaxis()->SetLabelOffset(0.007);
   nBJet25_prompt_ZZ_stack_4->GetYaxis()->SetLabelSize(0.05);
   nBJet25_prompt_ZZ_stack_4->GetYaxis()->SetTitleSize(0.06);
   nBJet25_prompt_ZZ_stack_4->GetYaxis()->SetTitleOffset(1.35);
   nBJet25_prompt_ZZ_stack_4->GetYaxis()->SetTitleFont(42);
   nBJet25_prompt_ZZ_stack_4->GetZaxis()->SetLabelFont(42);
   nBJet25_prompt_ZZ_stack_4->GetZaxis()->SetLabelOffset(0.007);
   nBJet25_prompt_ZZ_stack_4->GetZaxis()->SetLabelSize(0.05);
   nBJet25_prompt_ZZ_stack_4->GetZaxis()->SetTitleSize(0.06);
   nBJet25_prompt_ZZ_stack_4->GetZaxis()->SetTitleFont(42);
   nBJet25_stack->Add(nBJet25_prompt_ZZ_stack_4,"");
   
   TH1D *nBJet25_prompt_WZ_stack_5 = new TH1D("nBJet25_prompt_WZ_stack_5","dummy",1,-1,1);
   nBJet25_prompt_WZ_stack_5->SetBinContent(1,1250.082);
   nBJet25_prompt_WZ_stack_5->SetBinError(1,10.63331);
   nBJet25_prompt_WZ_stack_5->SetEntries(13825);

   ci = TColor::GetColor("#ffcc00");
   nBJet25_prompt_WZ_stack_5->SetFillColor(ci);
   nBJet25_prompt_WZ_stack_5->SetMarkerStyle(0);
   nBJet25_prompt_WZ_stack_5->SetMarkerSize(1.1);
   nBJet25_prompt_WZ_stack_5->GetXaxis()->SetTitle("N(b-jet, p_{T} > 25, DCSVT)");
   nBJet25_prompt_WZ_stack_5->GetXaxis()->SetMoreLogLabels();
   nBJet25_prompt_WZ_stack_5->GetXaxis()->SetLabelFont(42);
   nBJet25_prompt_WZ_stack_5->GetXaxis()->SetLabelOffset(0.007);
   nBJet25_prompt_WZ_stack_5->GetXaxis()->SetLabelSize(0.05);
   nBJet25_prompt_WZ_stack_5->GetXaxis()->SetTitleSize(0.06);
   nBJet25_prompt_WZ_stack_5->GetXaxis()->SetTitleOffset(0.9);
   nBJet25_prompt_WZ_stack_5->GetXaxis()->SetTitleFont(42);
   nBJet25_prompt_WZ_stack_5->GetYaxis()->SetTitle("Events");
   nBJet25_prompt_WZ_stack_5->GetYaxis()->SetLabelFont(42);
   nBJet25_prompt_WZ_stack_5->GetYaxis()->SetLabelOffset(0.007);
   nBJet25_prompt_WZ_stack_5->GetYaxis()->SetLabelSize(0.05);
   nBJet25_prompt_WZ_stack_5->GetYaxis()->SetTitleSize(0.06);
   nBJet25_prompt_WZ_stack_5->GetYaxis()->SetTitleOffset(1.35);
   nBJet25_prompt_WZ_stack_5->GetYaxis()->SetTitleFont(42);
   nBJet25_prompt_WZ_stack_5->GetZaxis()->SetLabelFont(42);
   nBJet25_prompt_WZ_stack_5->GetZaxis()->SetLabelOffset(0.007);
   nBJet25_prompt_WZ_stack_5->GetZaxis()->SetLabelSize(0.05);
   nBJet25_prompt_WZ_stack_5->GetZaxis()->SetTitleSize(0.06);
   nBJet25_prompt_WZ_stack_5->GetZaxis()->SetTitleFont(42);
   nBJet25_stack->Add(nBJet25_prompt_WZ_stack_5,"");
   nBJet25_stack->Draw("same hist");
   
   TH1D *nBJet25_total__98 = new TH1D("nBJet25_total__98","dummy",1,-1,1);
   nBJet25_total__98->SetBinContent(1,1495.945);
   nBJet25_total__98->SetBinError(1,18.20347);
   nBJet25_total__98->SetMinimum(0);
   nBJet25_total__98->SetMaximum(2034.342);
   nBJet25_total__98->SetEntries(15152);
   nBJet25_total__98->SetDirectory(0);

   ci = TColor::GetColor("#00cc00");
   nBJet25_total__98->SetFillColor(ci);
   nBJet25_total__98->SetMarkerStyle(20);
   nBJet25_total__98->SetMarkerSize(1.1);
   nBJet25_total__98->GetXaxis()->SetTitle("N(b-jet, p_{T} > 25, DCSVT)");
   nBJet25_total__98->GetXaxis()->SetMoreLogLabels();
   nBJet25_total__98->GetXaxis()->SetLabelFont(42);
   nBJet25_total__98->GetXaxis()->SetLabelOffset(999);
   nBJet25_total__98->GetXaxis()->SetLabelSize(0.05);
   nBJet25_total__98->GetXaxis()->SetTitleSize(0.05);
   nBJet25_total__98->GetXaxis()->SetTitleOffset(999);
   nBJet25_total__98->GetXaxis()->SetTitleFont(42);
   nBJet25_total__98->GetYaxis()->SetTitle("Events");
   nBJet25_total__98->GetYaxis()->SetLabelFont(42);
   nBJet25_total__98->GetYaxis()->SetLabelOffset(0.007);
   nBJet25_total__98->GetYaxis()->SetLabelSize(0.05);
   nBJet25_total__98->GetYaxis()->SetTitleSize(0.06);
   nBJet25_total__98->GetYaxis()->SetTitleOffset(1.48);
   nBJet25_total__98->GetYaxis()->SetTitleFont(42);
   nBJet25_total__98->GetZaxis()->SetLabelFont(42);
   nBJet25_total__98->GetZaxis()->SetLabelOffset(0.007);
   nBJet25_total__98->GetZaxis()->SetLabelSize(0.05);
   nBJet25_total__98->GetZaxis()->SetTitleSize(0.06);
   nBJet25_total__98->GetZaxis()->SetTitleFont(42);
   nBJet25_total__98->Draw("AXIS SAME");
   
   Double_t nBJet25_total_errors_fx3121[1] = {
   0};
   Double_t nBJet25_total_errors_fy3121[1] = {
   1495.945};
   Double_t nBJet25_total_errors_felx3121[1] = {
   1};
   Double_t nBJet25_total_errors_fely3121[1] = {
   18.20347};
   Double_t nBJet25_total_errors_fehx3121[1] = {
   1};
   Double_t nBJet25_total_errors_fehy3121[1] = {
   18.20347};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(1,nBJet25_total_errors_fx3121,nBJet25_total_errors_fy3121,nBJet25_total_errors_felx3121,nBJet25_total_errors_fehx3121,nBJet25_total_errors_fely3121,nBJet25_total_errors_fehy3121);
   grae->SetName("nBJet25_total_errors");
   grae->SetTitle("Graph");
   grae->SetFillColor(1);
   grae->SetFillStyle(3013);
   grae->SetMarkerStyle(0);
   
   TH1F *Graph_nBJet25_total_errors3121 = new TH1F("Graph_nBJet25_total_errors3121","Graph",100,-1.2,1.2);
   Graph_nBJet25_total_errors3121->SetMinimum(1474.1);
   Graph_nBJet25_total_errors3121->SetMaximum(1517.789);
   Graph_nBJet25_total_errors3121->SetDirectory(0);
   Graph_nBJet25_total_errors3121->SetStats(0);
   Graph_nBJet25_total_errors3121->SetLineStyle(0);
   Graph_nBJet25_total_errors3121->SetMarkerStyle(20);
   Graph_nBJet25_total_errors3121->GetXaxis()->SetLabelFont(42);
   Graph_nBJet25_total_errors3121->GetXaxis()->SetLabelOffset(0.007);
   Graph_nBJet25_total_errors3121->GetXaxis()->SetLabelSize(0.05);
   Graph_nBJet25_total_errors3121->GetXaxis()->SetTitleSize(0.06);
   Graph_nBJet25_total_errors3121->GetXaxis()->SetTitleOffset(0.9);
   Graph_nBJet25_total_errors3121->GetXaxis()->SetTitleFont(42);
   Graph_nBJet25_total_errors3121->GetYaxis()->SetLabelFont(42);
   Graph_nBJet25_total_errors3121->GetYaxis()->SetLabelOffset(0.007);
   Graph_nBJet25_total_errors3121->GetYaxis()->SetLabelSize(0.05);
   Graph_nBJet25_total_errors3121->GetYaxis()->SetTitleSize(0.06);
   Graph_nBJet25_total_errors3121->GetYaxis()->SetTitleOffset(1.35);
   Graph_nBJet25_total_errors3121->GetYaxis()->SetTitleFont(42);
   Graph_nBJet25_total_errors3121->GetZaxis()->SetLabelFont(42);
   Graph_nBJet25_total_errors3121->GetZaxis()->SetLabelOffset(0.007);
   Graph_nBJet25_total_errors3121->GetZaxis()->SetLabelSize(0.05);
   Graph_nBJet25_total_errors3121->GetZaxis()->SetTitleSize(0.06);
   Graph_nBJet25_total_errors3121->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_nBJet25_total_errors3121);
   
   grae->Draw("pe2 ");
   
   Double_t nBJet25_data_graph_fx3122[1] = {
   0};
   Double_t nBJet25_data_graph_fy3122[1] = {
   1513};
   Double_t nBJet25_data_graph_felx3122[1] = {
   1};
   Double_t nBJet25_data_graph_fely3122[1] = {
   38.89384};
   Double_t nBJet25_data_graph_fehx3122[1] = {
   1};
   Double_t nBJet25_data_graph_fehy3122[1] = {
   39.90673};
   grae = new TGraphAsymmErrors(1,nBJet25_data_graph_fx3122,nBJet25_data_graph_fy3122,nBJet25_data_graph_felx3122,nBJet25_data_graph_fehx3122,nBJet25_data_graph_fely3122,nBJet25_data_graph_fehy3122);
   grae->SetName("nBJet25_data_graph");
   grae->SetTitle("Graph");
   grae->SetFillStyle(1000);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.1);
   
   TH1F *Graph_nBJet25_data_graph3122 = new TH1F("Graph_nBJet25_data_graph3122","Graph",100,-1.2,1.2);
   Graph_nBJet25_data_graph3122->SetMinimum(1466.226);
   Graph_nBJet25_data_graph3122->SetMaximum(1560.787);
   Graph_nBJet25_data_graph3122->SetDirectory(0);
   Graph_nBJet25_data_graph3122->SetStats(0);
   Graph_nBJet25_data_graph3122->SetLineStyle(0);
   Graph_nBJet25_data_graph3122->SetMarkerStyle(20);
   Graph_nBJet25_data_graph3122->GetXaxis()->SetLabelFont(42);
   Graph_nBJet25_data_graph3122->GetXaxis()->SetLabelOffset(0.007);
   Graph_nBJet25_data_graph3122->GetXaxis()->SetLabelSize(0.05);
   Graph_nBJet25_data_graph3122->GetXaxis()->SetTitleSize(0.06);
   Graph_nBJet25_data_graph3122->GetXaxis()->SetTitleOffset(0.9);
   Graph_nBJet25_data_graph3122->GetXaxis()->SetTitleFont(42);
   Graph_nBJet25_data_graph3122->GetYaxis()->SetLabelFont(42);
   Graph_nBJet25_data_graph3122->GetYaxis()->SetLabelOffset(0.007);
   Graph_nBJet25_data_graph3122->GetYaxis()->SetLabelSize(0.05);
   Graph_nBJet25_data_graph3122->GetYaxis()->SetTitleSize(0.06);
   Graph_nBJet25_data_graph3122->GetYaxis()->SetTitleOffset(1.35);
   Graph_nBJet25_data_graph3122->GetYaxis()->SetTitleFont(42);
   Graph_nBJet25_data_graph3122->GetZaxis()->SetLabelFont(42);
   Graph_nBJet25_data_graph3122->GetZaxis()->SetLabelOffset(0.007);
   Graph_nBJet25_data_graph3122->GetZaxis()->SetLabelSize(0.05);
   Graph_nBJet25_data_graph3122->GetZaxis()->SetTitleSize(0.06);
   Graph_nBJet25_data_graph3122->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_nBJet25_data_graph3122);
   
   grae->Draw("pz ");
   
   TLegend *leg = new TLegend(0.62,0.628,0.9,0.91,NULL,"brNDC");
   leg->SetBorderSize(1);
   leg->SetTextSize(0.036);
   leg->SetLineColor(0);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("nBJet25_data","Data","LPE");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1.1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("nBJet25_prompt_WZ_stack_5","WZ","F");

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
   entry=leg->AddEntry("nBJet25_prompt_ZZ_stack_4","qqZZ","F");

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
   entry=leg->AddEntry("nBJet25_fakes_DY_stack_3","Fakes DY","F");

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
   entry=leg->AddEntry("nBJet25_fakes_TT_stack_2","Fakes TT","F");

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
   entry=leg->AddEntry("nBJet25_total_errors","Total unc.","F");
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
   nBJet25_canvas->cd();
  
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
   
   TH1D *nBJet25_total__99 = new TH1D("nBJet25_total__99","dummy",1,-1,1);
   nBJet25_total__99->SetBinContent(1,1);
   nBJet25_total__99->SetMinimum(0.5);
   nBJet25_total__99->SetMaximum(2);
   nBJet25_total__99->SetEntries(15153);

   ci = TColor::GetColor("#00cc00");
   nBJet25_total__99->SetFillColor(ci);

   ci = TColor::GetColor("#6666ff");
   nBJet25_total__99->SetMarkerColor(ci);
   nBJet25_total__99->SetMarkerSize(1.1);
   nBJet25_total__99->GetXaxis()->SetTitle("N(b-jet, p_{T} > 25, DCSVT)");
   nBJet25_total__99->GetXaxis()->SetMoreLogLabels();
   nBJet25_total__99->GetXaxis()->SetLabelFont(42);
   nBJet25_total__99->GetXaxis()->SetLabelOffset(0.015);
   nBJet25_total__99->GetXaxis()->SetLabelSize(0.1);
   nBJet25_total__99->GetXaxis()->SetTitleSize(0.14);
   nBJet25_total__99->GetXaxis()->SetTitleFont(42);
   nBJet25_total__99->GetYaxis()->SetTitle("Data/pred.");
   nBJet25_total__99->GetYaxis()->SetDecimals();
   nBJet25_total__99->GetYaxis()->SetNdivisions(505);
   nBJet25_total__99->GetYaxis()->SetLabelFont(42);
   nBJet25_total__99->GetYaxis()->SetLabelOffset(0.01);
   nBJet25_total__99->GetYaxis()->SetLabelSize(0.11);
   nBJet25_total__99->GetYaxis()->SetTitleSize(0.14);
   nBJet25_total__99->GetYaxis()->SetTitleOffset(0.62);
   nBJet25_total__99->GetYaxis()->SetTitleFont(42);
   nBJet25_total__99->GetZaxis()->SetLabelFont(42);
   nBJet25_total__99->GetZaxis()->SetLabelOffset(0.007);
   nBJet25_total__99->GetZaxis()->SetLabelSize(0.05);
   nBJet25_total__99->GetZaxis()->SetTitleSize(0.06);
   nBJet25_total__99->GetZaxis()->SetTitleFont(42);
   nBJet25_total__99->Draw("AXIS");
   
   Double_t nBJet25_total_errors_fx3123[1] = {
   0};
   Double_t nBJet25_total_errors_fy3123[1] = {
   1};
   Double_t nBJet25_total_errors_felx3123[1] = {
   1};
   Double_t nBJet25_total_errors_fely3123[1] = {
   0.01216854};
   Double_t nBJet25_total_errors_fehx3123[1] = {
   1};
   Double_t nBJet25_total_errors_fehy3123[1] = {
   0.01216854};
   grae = new TGraphAsymmErrors(1,nBJet25_total_errors_fx3123,nBJet25_total_errors_fy3123,nBJet25_total_errors_felx3123,nBJet25_total_errors_fehx3123,nBJet25_total_errors_fely3123,nBJet25_total_errors_fehy3123);
   grae->SetName("nBJet25_total_errors");
   grae->SetTitle("Graph");

   ci = TColor::GetColor("#00ffff");
   grae->SetFillColor(ci);

   ci = TColor::GetColor("#00ffff");
   grae->SetMarkerColor(ci);
   grae->Draw("e2");
   
   Double_t nBJet25_total_errors_fx3124[1] = {
   0};
   Double_t nBJet25_total_errors_fy3124[1] = {
   1};
   Double_t nBJet25_total_errors_felx3124[1] = {
   1};
   Double_t nBJet25_total_errors_fely3124[1] = {
   0.01216854};
   Double_t nBJet25_total_errors_fehx3124[1] = {
   1};
   Double_t nBJet25_total_errors_fehy3124[1] = {
   0.01216854};
   grae = new TGraphAsymmErrors(1,nBJet25_total_errors_fx3124,nBJet25_total_errors_fy3124,nBJet25_total_errors_felx3124,nBJet25_total_errors_fehx3124,nBJet25_total_errors_fely3124,nBJet25_total_errors_fehy3124);
   grae->SetName("nBJet25_total_errors");
   grae->SetTitle("Graph");

   ci = TColor::GetColor("#6666ff");
   grae->SetFillColor(ci);

   ci = TColor::GetColor("#6666ff");
   grae->SetMarkerColor(ci);
   grae->Draw("e2 ");
   
   TH1D *nBJet25_total__100 = new TH1D("nBJet25_total__100","dummy",1,-1,1);
   nBJet25_total__100->SetBinContent(1,1);
   nBJet25_total__100->SetMinimum(0.5);
   nBJet25_total__100->SetMaximum(2);
   nBJet25_total__100->SetEntries(15153);

   ci = TColor::GetColor("#00cc00");
   nBJet25_total__100->SetFillColor(ci);

   ci = TColor::GetColor("#6666ff");
   nBJet25_total__100->SetMarkerColor(ci);
   nBJet25_total__100->SetMarkerSize(1.1);
   nBJet25_total__100->GetXaxis()->SetTitle("N(b-jet, p_{T} > 25, DCSVT)");
   nBJet25_total__100->GetXaxis()->SetMoreLogLabels();
   nBJet25_total__100->GetXaxis()->SetLabelFont(42);
   nBJet25_total__100->GetXaxis()->SetLabelOffset(0.015);
   nBJet25_total__100->GetXaxis()->SetLabelSize(0.1);
   nBJet25_total__100->GetXaxis()->SetTitleSize(0.14);
   nBJet25_total__100->GetXaxis()->SetTitleFont(42);
   nBJet25_total__100->GetYaxis()->SetTitle("Data/pred.");
   nBJet25_total__100->GetYaxis()->SetDecimals();
   nBJet25_total__100->GetYaxis()->SetNdivisions(505);
   nBJet25_total__100->GetYaxis()->SetLabelFont(42);
   nBJet25_total__100->GetYaxis()->SetLabelOffset(0.01);
   nBJet25_total__100->GetYaxis()->SetLabelSize(0.11);
   nBJet25_total__100->GetYaxis()->SetTitleSize(0.14);
   nBJet25_total__100->GetYaxis()->SetTitleOffset(0.62);
   nBJet25_total__100->GetYaxis()->SetTitleFont(42);
   nBJet25_total__100->GetZaxis()->SetLabelFont(42);
   nBJet25_total__100->GetZaxis()->SetLabelOffset(0.007);
   nBJet25_total__100->GetZaxis()->SetLabelSize(0.05);
   nBJet25_total__100->GetZaxis()->SetTitleSize(0.06);
   nBJet25_total__100->GetZaxis()->SetTitleFont(42);
   nBJet25_total__100->Draw("AXIS SAME");
   TLine *line = new TLine(-1,1,1,1);
   line->SetLineColor(58);
   line->SetLineWidth(2);
   line->Draw();
   
   Double_t data_div_fx3125[1] = {
   0};
   Double_t data_div_fy3125[1] = {
   1.011401};
   Double_t data_div_felx3125[1] = {
   1};
   Double_t data_div_fely3125[1] = {
   0.02599952};
   Double_t data_div_fehx3125[1] = {
   1};
   Double_t data_div_fehy3125[1] = {
   0.02667661};
   grae = new TGraphAsymmErrors(1,data_div_fx3125,data_div_fy3125,data_div_felx3125,data_div_fehx3125,data_div_fely3125,data_div_fehy3125);
   grae->SetName("data_div");
   grae->SetTitle("Graph");
   grae->SetFillStyle(1000);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.1);
   
   TH1F *Graph_nBJet25_data_graph3125 = new TH1F("Graph_nBJet25_data_graph3125","Graph",100,-1.2,1.2);
   Graph_nBJet25_data_graph3125->SetMinimum(1466.226);
   Graph_nBJet25_data_graph3125->SetMaximum(1560.787);
   Graph_nBJet25_data_graph3125->SetDirectory(0);
   Graph_nBJet25_data_graph3125->SetStats(0);
   Graph_nBJet25_data_graph3125->SetLineStyle(0);
   Graph_nBJet25_data_graph3125->SetMarkerStyle(20);
   Graph_nBJet25_data_graph3125->GetXaxis()->SetLabelFont(42);
   Graph_nBJet25_data_graph3125->GetXaxis()->SetLabelOffset(0.007);
   Graph_nBJet25_data_graph3125->GetXaxis()->SetLabelSize(0.05);
   Graph_nBJet25_data_graph3125->GetXaxis()->SetTitleSize(0.06);
   Graph_nBJet25_data_graph3125->GetXaxis()->SetTitleOffset(0.9);
   Graph_nBJet25_data_graph3125->GetXaxis()->SetTitleFont(42);
   Graph_nBJet25_data_graph3125->GetYaxis()->SetLabelFont(42);
   Graph_nBJet25_data_graph3125->GetYaxis()->SetLabelOffset(0.007);
   Graph_nBJet25_data_graph3125->GetYaxis()->SetLabelSize(0.05);
   Graph_nBJet25_data_graph3125->GetYaxis()->SetTitleSize(0.06);
   Graph_nBJet25_data_graph3125->GetYaxis()->SetTitleOffset(1.35);
   Graph_nBJet25_data_graph3125->GetYaxis()->SetTitleFont(42);
   Graph_nBJet25_data_graph3125->GetZaxis()->SetLabelFont(42);
   Graph_nBJet25_data_graph3125->GetZaxis()->SetLabelOffset(0.007);
   Graph_nBJet25_data_graph3125->GetZaxis()->SetLabelSize(0.05);
   Graph_nBJet25_data_graph3125->GetZaxis()->SetTitleSize(0.06);
   Graph_nBJet25_data_graph3125->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_nBJet25_data_graph3125);
   
   grae->Draw("pz ");
   
   leg = new TLegend(0,0,0,0,NULL,"brNDC");
   leg->SetBorderSize(1);
   leg->SetTextSize(0.084);
   leg->SetLineColor(0);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   entry=leg->AddEntry("nBJet25_total_errors","stat. unc.","F");
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
   entry=leg->AddEntry("nBJet25_total_errors","total unc.","F");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   leg->Draw();
   pad2->Modified();
   nBJet25_canvas->cd();
   nBJet25_canvas->Modified();
   nBJet25_canvas->cd();
   nBJet25_canvas->SetSelected(nBJet25_canvas);
}
