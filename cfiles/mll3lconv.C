void mll3lconv()
{
//=========Macro generated from canvas: mll3lconv_canvas/mll3lconv
//=========  (Fri Nov 18 13:01:53 2022) by ROOT version 6.12/07
   TCanvas *mll3lconv_canvas = new TCanvas("mll3lconv_canvas", "mll3lconv",0,0,600,750);
   gStyle->SetOptFit(1);
   gStyle->SetOptStat(0);
   gStyle->SetOptTitle(0);
   mll3lconv_canvas->SetHighLightColor(2);
   mll3lconv_canvas->Range(0,0,1,1);
   mll3lconv_canvas->SetFillColor(0);
   mll3lconv_canvas->SetBorderMode(0);
   mll3lconv_canvas->SetBorderSize(2);
   mll3lconv_canvas->SetTickx(1);
   mll3lconv_canvas->SetTicky(1);
   mll3lconv_canvas->SetLeftMargin(0.18);
   mll3lconv_canvas->SetRightMargin(0.04);
   mll3lconv_canvas->SetBottomMargin(0.13);
   mll3lconv_canvas->SetFrameFillStyle(0);
   mll3lconv_canvas->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: pad1
   TPad *pad1 = new TPad("pad1", "pad1",0,0.3,1,1);
   pad1->Draw();
   pad1->cd();
   pad1->Range(25.76923,-55.58312,77.05128,2167.742);
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
   
   TH1D *mll3lconv_total__49 = new TH1D("mll3lconv_total__49","dummy",8,35,75);
   mll3lconv_total__49->SetBinContent(8,1495.945);
   mll3lconv_total__49->SetBinError(8,18.20347);
   mll3lconv_total__49->SetMinimum(0);
   mll3lconv_total__49->SetMaximum(2034.342);
   mll3lconv_total__49->SetEntries(15152);
   mll3lconv_total__49->SetDirectory(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#00cc00");
   mll3lconv_total__49->SetFillColor(ci);
   mll3lconv_total__49->SetMarkerStyle(20);
   mll3lconv_total__49->SetMarkerSize(1.1);
   mll3lconv_total__49->GetXaxis()->SetTitle("M_{ll} (GeV)");
   mll3lconv_total__49->GetXaxis()->SetMoreLogLabels();
   mll3lconv_total__49->GetXaxis()->SetLabelFont(42);
   mll3lconv_total__49->GetXaxis()->SetLabelOffset(999);
   mll3lconv_total__49->GetXaxis()->SetLabelSize(0.05);
   mll3lconv_total__49->GetXaxis()->SetTitleSize(0.05);
   mll3lconv_total__49->GetXaxis()->SetTitleOffset(999);
   mll3lconv_total__49->GetXaxis()->SetTitleFont(42);
   mll3lconv_total__49->GetYaxis()->SetTitle("Events");
   mll3lconv_total__49->GetYaxis()->SetLabelFont(42);
   mll3lconv_total__49->GetYaxis()->SetLabelOffset(0.007);
   mll3lconv_total__49->GetYaxis()->SetLabelSize(0.05);
   mll3lconv_total__49->GetYaxis()->SetTitleSize(0.06);
   mll3lconv_total__49->GetYaxis()->SetTitleOffset(1.48);
   mll3lconv_total__49->GetYaxis()->SetTitleFont(42);
   mll3lconv_total__49->GetZaxis()->SetLabelFont(42);
   mll3lconv_total__49->GetZaxis()->SetLabelOffset(0.007);
   mll3lconv_total__49->GetZaxis()->SetLabelSize(0.05);
   mll3lconv_total__49->GetZaxis()->SetTitleSize(0.06);
   mll3lconv_total__49->GetZaxis()->SetTitleFont(42);
   mll3lconv_total__49->Draw("HIST");
   
   THStack *mll3lconv_stack = new THStack();
   mll3lconv_stack->SetName("mll3lconv_stack");
   mll3lconv_stack->SetTitle("mll3lconv");
   
   TH1F *mll3lconv_stack_stack_13 = new TH1F("mll3lconv_stack_stack_13","mll3lconv",8,35,75);
   mll3lconv_stack_stack_13->SetMinimum(0);
   mll3lconv_stack_stack_13->SetMaximum(1570.742);
   mll3lconv_stack_stack_13->SetDirectory(0);
   mll3lconv_stack_stack_13->SetStats(0);
   mll3lconv_stack_stack_13->SetLineStyle(0);
   mll3lconv_stack_stack_13->SetMarkerStyle(20);
   mll3lconv_stack_stack_13->GetXaxis()->SetLabelFont(42);
   mll3lconv_stack_stack_13->GetXaxis()->SetLabelOffset(0.007);
   mll3lconv_stack_stack_13->GetXaxis()->SetLabelSize(0.05);
   mll3lconv_stack_stack_13->GetXaxis()->SetTitleSize(0.06);
   mll3lconv_stack_stack_13->GetXaxis()->SetTitleOffset(0.9);
   mll3lconv_stack_stack_13->GetXaxis()->SetTitleFont(42);
   mll3lconv_stack_stack_13->GetYaxis()->SetLabelFont(42);
   mll3lconv_stack_stack_13->GetYaxis()->SetLabelOffset(0.007);
   mll3lconv_stack_stack_13->GetYaxis()->SetLabelSize(0.05);
   mll3lconv_stack_stack_13->GetYaxis()->SetTitleSize(0.06);
   mll3lconv_stack_stack_13->GetYaxis()->SetTitleOffset(1.35);
   mll3lconv_stack_stack_13->GetYaxis()->SetTitleFont(42);
   mll3lconv_stack_stack_13->GetZaxis()->SetLabelFont(42);
   mll3lconv_stack_stack_13->GetZaxis()->SetLabelOffset(0.007);
   mll3lconv_stack_stack_13->GetZaxis()->SetLabelSize(0.05);
   mll3lconv_stack_stack_13->GetZaxis()->SetTitleSize(0.06);
   mll3lconv_stack_stack_13->GetZaxis()->SetTitleFont(42);
   mll3lconv_stack->SetHistogram(mll3lconv_stack_stack_13);
   
   
   TH1D *mll3lconv_fakes_VV_stack_1 = new TH1D("mll3lconv_fakes_VV_stack_1","dummy",8,35,75);
   mll3lconv_fakes_VV_stack_1->SetBinContent(8,0.6803536);
   mll3lconv_fakes_VV_stack_1->SetBinError(8,0.2571495);
   mll3lconv_fakes_VV_stack_1->SetEntries(11);

   ci = TColor::GetColor("#2e3294");
   mll3lconv_fakes_VV_stack_1->SetFillColor(ci);
   mll3lconv_fakes_VV_stack_1->SetMarkerStyle(0);
   mll3lconv_fakes_VV_stack_1->SetMarkerSize(1.1);
   mll3lconv_fakes_VV_stack_1->GetXaxis()->SetTitle("M_{ll} (GeV)");
   mll3lconv_fakes_VV_stack_1->GetXaxis()->SetMoreLogLabels();
   mll3lconv_fakes_VV_stack_1->GetXaxis()->SetLabelFont(42);
   mll3lconv_fakes_VV_stack_1->GetXaxis()->SetLabelOffset(0.007);
   mll3lconv_fakes_VV_stack_1->GetXaxis()->SetLabelSize(0.05);
   mll3lconv_fakes_VV_stack_1->GetXaxis()->SetTitleSize(0.06);
   mll3lconv_fakes_VV_stack_1->GetXaxis()->SetTitleOffset(0.9);
   mll3lconv_fakes_VV_stack_1->GetXaxis()->SetTitleFont(42);
   mll3lconv_fakes_VV_stack_1->GetYaxis()->SetTitle("Events");
   mll3lconv_fakes_VV_stack_1->GetYaxis()->SetLabelFont(42);
   mll3lconv_fakes_VV_stack_1->GetYaxis()->SetLabelOffset(0.007);
   mll3lconv_fakes_VV_stack_1->GetYaxis()->SetLabelSize(0.05);
   mll3lconv_fakes_VV_stack_1->GetYaxis()->SetTitleSize(0.06);
   mll3lconv_fakes_VV_stack_1->GetYaxis()->SetTitleOffset(1.35);
   mll3lconv_fakes_VV_stack_1->GetYaxis()->SetTitleFont(42);
   mll3lconv_fakes_VV_stack_1->GetZaxis()->SetLabelFont(42);
   mll3lconv_fakes_VV_stack_1->GetZaxis()->SetLabelOffset(0.007);
   mll3lconv_fakes_VV_stack_1->GetZaxis()->SetLabelSize(0.05);
   mll3lconv_fakes_VV_stack_1->GetZaxis()->SetTitleSize(0.06);
   mll3lconv_fakes_VV_stack_1->GetZaxis()->SetTitleFont(42);
   mll3lconv_stack->Add(mll3lconv_fakes_VV_stack_1,"");
   
   TH1D *mll3lconv_fakes_TT_stack_2 = new TH1D("mll3lconv_fakes_TT_stack_2","dummy",8,35,75);
   mll3lconv_fakes_TT_stack_2->SetBinContent(8,55.04433);
   mll3lconv_fakes_TT_stack_2->SetBinError(8,1.933956);
   mll3lconv_fakes_TT_stack_2->SetEntries(841);

   ci = TColor::GetColor("#666666");
   mll3lconv_fakes_TT_stack_2->SetFillColor(ci);
   mll3lconv_fakes_TT_stack_2->SetMarkerStyle(0);
   mll3lconv_fakes_TT_stack_2->SetMarkerSize(1.1);
   mll3lconv_fakes_TT_stack_2->GetXaxis()->SetTitle("M_{ll} (GeV)");
   mll3lconv_fakes_TT_stack_2->GetXaxis()->SetMoreLogLabels();
   mll3lconv_fakes_TT_stack_2->GetXaxis()->SetLabelFont(42);
   mll3lconv_fakes_TT_stack_2->GetXaxis()->SetLabelOffset(0.007);
   mll3lconv_fakes_TT_stack_2->GetXaxis()->SetLabelSize(0.05);
   mll3lconv_fakes_TT_stack_2->GetXaxis()->SetTitleSize(0.06);
   mll3lconv_fakes_TT_stack_2->GetXaxis()->SetTitleOffset(0.9);
   mll3lconv_fakes_TT_stack_2->GetXaxis()->SetTitleFont(42);
   mll3lconv_fakes_TT_stack_2->GetYaxis()->SetTitle("Events");
   mll3lconv_fakes_TT_stack_2->GetYaxis()->SetLabelFont(42);
   mll3lconv_fakes_TT_stack_2->GetYaxis()->SetLabelOffset(0.007);
   mll3lconv_fakes_TT_stack_2->GetYaxis()->SetLabelSize(0.05);
   mll3lconv_fakes_TT_stack_2->GetYaxis()->SetTitleSize(0.06);
   mll3lconv_fakes_TT_stack_2->GetYaxis()->SetTitleOffset(1.35);
   mll3lconv_fakes_TT_stack_2->GetYaxis()->SetTitleFont(42);
   mll3lconv_fakes_TT_stack_2->GetZaxis()->SetLabelFont(42);
   mll3lconv_fakes_TT_stack_2->GetZaxis()->SetLabelOffset(0.007);
   mll3lconv_fakes_TT_stack_2->GetZaxis()->SetLabelSize(0.05);
   mll3lconv_fakes_TT_stack_2->GetZaxis()->SetTitleSize(0.06);
   mll3lconv_fakes_TT_stack_2->GetZaxis()->SetTitleFont(42);
   mll3lconv_stack->Add(mll3lconv_fakes_TT_stack_2,"");
   
   TH1D *mll3lconv_fakes_DY_stack_3 = new TH1D("mll3lconv_fakes_DY_stack_3","dummy",8,35,75);
   mll3lconv_fakes_DY_stack_3->SetBinContent(8,116.9275);
   mll3lconv_fakes_DY_stack_3->SetBinError(8,14.17954);
   mll3lconv_fakes_DY_stack_3->SetEntries(72);

   ci = TColor::GetColor("#cccccc");
   mll3lconv_fakes_DY_stack_3->SetFillColor(ci);
   mll3lconv_fakes_DY_stack_3->SetMarkerStyle(0);
   mll3lconv_fakes_DY_stack_3->SetMarkerSize(1.1);
   mll3lconv_fakes_DY_stack_3->GetXaxis()->SetTitle("M_{ll} (GeV)");
   mll3lconv_fakes_DY_stack_3->GetXaxis()->SetMoreLogLabels();
   mll3lconv_fakes_DY_stack_3->GetXaxis()->SetLabelFont(42);
   mll3lconv_fakes_DY_stack_3->GetXaxis()->SetLabelOffset(0.007);
   mll3lconv_fakes_DY_stack_3->GetXaxis()->SetLabelSize(0.05);
   mll3lconv_fakes_DY_stack_3->GetXaxis()->SetTitleSize(0.06);
   mll3lconv_fakes_DY_stack_3->GetXaxis()->SetTitleOffset(0.9);
   mll3lconv_fakes_DY_stack_3->GetXaxis()->SetTitleFont(42);
   mll3lconv_fakes_DY_stack_3->GetYaxis()->SetTitle("Events");
   mll3lconv_fakes_DY_stack_3->GetYaxis()->SetLabelFont(42);
   mll3lconv_fakes_DY_stack_3->GetYaxis()->SetLabelOffset(0.007);
   mll3lconv_fakes_DY_stack_3->GetYaxis()->SetLabelSize(0.05);
   mll3lconv_fakes_DY_stack_3->GetYaxis()->SetTitleSize(0.06);
   mll3lconv_fakes_DY_stack_3->GetYaxis()->SetTitleOffset(1.35);
   mll3lconv_fakes_DY_stack_3->GetYaxis()->SetTitleFont(42);
   mll3lconv_fakes_DY_stack_3->GetZaxis()->SetLabelFont(42);
   mll3lconv_fakes_DY_stack_3->GetZaxis()->SetLabelOffset(0.007);
   mll3lconv_fakes_DY_stack_3->GetZaxis()->SetLabelSize(0.05);
   mll3lconv_fakes_DY_stack_3->GetZaxis()->SetTitleSize(0.06);
   mll3lconv_fakes_DY_stack_3->GetZaxis()->SetTitleFont(42);
   mll3lconv_stack->Add(mll3lconv_fakes_DY_stack_3,"");
   
   TH1D *mll3lconv_prompt_ZZ_stack_4 = new TH1D("mll3lconv_prompt_ZZ_stack_4","dummy",8,35,75);
   mll3lconv_prompt_ZZ_stack_4->SetBinContent(8,73.21068);
   mll3lconv_prompt_ZZ_stack_4->SetBinError(8,3.665118);
   mll3lconv_prompt_ZZ_stack_4->SetEntries(403);

   ci = TColor::GetColor("#00cc00");
   mll3lconv_prompt_ZZ_stack_4->SetFillColor(ci);
   mll3lconv_prompt_ZZ_stack_4->SetMarkerStyle(0);
   mll3lconv_prompt_ZZ_stack_4->SetMarkerSize(1.1);
   mll3lconv_prompt_ZZ_stack_4->GetXaxis()->SetTitle("M_{ll} (GeV)");
   mll3lconv_prompt_ZZ_stack_4->GetXaxis()->SetMoreLogLabels();
   mll3lconv_prompt_ZZ_stack_4->GetXaxis()->SetLabelFont(42);
   mll3lconv_prompt_ZZ_stack_4->GetXaxis()->SetLabelOffset(0.007);
   mll3lconv_prompt_ZZ_stack_4->GetXaxis()->SetLabelSize(0.05);
   mll3lconv_prompt_ZZ_stack_4->GetXaxis()->SetTitleSize(0.06);
   mll3lconv_prompt_ZZ_stack_4->GetXaxis()->SetTitleOffset(0.9);
   mll3lconv_prompt_ZZ_stack_4->GetXaxis()->SetTitleFont(42);
   mll3lconv_prompt_ZZ_stack_4->GetYaxis()->SetTitle("Events");
   mll3lconv_prompt_ZZ_stack_4->GetYaxis()->SetLabelFont(42);
   mll3lconv_prompt_ZZ_stack_4->GetYaxis()->SetLabelOffset(0.007);
   mll3lconv_prompt_ZZ_stack_4->GetYaxis()->SetLabelSize(0.05);
   mll3lconv_prompt_ZZ_stack_4->GetYaxis()->SetTitleSize(0.06);
   mll3lconv_prompt_ZZ_stack_4->GetYaxis()->SetTitleOffset(1.35);
   mll3lconv_prompt_ZZ_stack_4->GetYaxis()->SetTitleFont(42);
   mll3lconv_prompt_ZZ_stack_4->GetZaxis()->SetLabelFont(42);
   mll3lconv_prompt_ZZ_stack_4->GetZaxis()->SetLabelOffset(0.007);
   mll3lconv_prompt_ZZ_stack_4->GetZaxis()->SetLabelSize(0.05);
   mll3lconv_prompt_ZZ_stack_4->GetZaxis()->SetTitleSize(0.06);
   mll3lconv_prompt_ZZ_stack_4->GetZaxis()->SetTitleFont(42);
   mll3lconv_stack->Add(mll3lconv_prompt_ZZ_stack_4,"");
   
   TH1D *mll3lconv_prompt_WZ_stack_5 = new TH1D("mll3lconv_prompt_WZ_stack_5","dummy",8,35,75);
   mll3lconv_prompt_WZ_stack_5->SetBinContent(8,1250.082);
   mll3lconv_prompt_WZ_stack_5->SetBinError(8,10.63331);
   mll3lconv_prompt_WZ_stack_5->SetEntries(13825);

   ci = TColor::GetColor("#ffcc00");
   mll3lconv_prompt_WZ_stack_5->SetFillColor(ci);
   mll3lconv_prompt_WZ_stack_5->SetMarkerStyle(0);
   mll3lconv_prompt_WZ_stack_5->SetMarkerSize(1.1);
   mll3lconv_prompt_WZ_stack_5->GetXaxis()->SetTitle("M_{ll} (GeV)");
   mll3lconv_prompt_WZ_stack_5->GetXaxis()->SetMoreLogLabels();
   mll3lconv_prompt_WZ_stack_5->GetXaxis()->SetLabelFont(42);
   mll3lconv_prompt_WZ_stack_5->GetXaxis()->SetLabelOffset(0.007);
   mll3lconv_prompt_WZ_stack_5->GetXaxis()->SetLabelSize(0.05);
   mll3lconv_prompt_WZ_stack_5->GetXaxis()->SetTitleSize(0.06);
   mll3lconv_prompt_WZ_stack_5->GetXaxis()->SetTitleOffset(0.9);
   mll3lconv_prompt_WZ_stack_5->GetXaxis()->SetTitleFont(42);
   mll3lconv_prompt_WZ_stack_5->GetYaxis()->SetTitle("Events");
   mll3lconv_prompt_WZ_stack_5->GetYaxis()->SetLabelFont(42);
   mll3lconv_prompt_WZ_stack_5->GetYaxis()->SetLabelOffset(0.007);
   mll3lconv_prompt_WZ_stack_5->GetYaxis()->SetLabelSize(0.05);
   mll3lconv_prompt_WZ_stack_5->GetYaxis()->SetTitleSize(0.06);
   mll3lconv_prompt_WZ_stack_5->GetYaxis()->SetTitleOffset(1.35);
   mll3lconv_prompt_WZ_stack_5->GetYaxis()->SetTitleFont(42);
   mll3lconv_prompt_WZ_stack_5->GetZaxis()->SetLabelFont(42);
   mll3lconv_prompt_WZ_stack_5->GetZaxis()->SetLabelOffset(0.007);
   mll3lconv_prompt_WZ_stack_5->GetZaxis()->SetLabelSize(0.05);
   mll3lconv_prompt_WZ_stack_5->GetZaxis()->SetTitleSize(0.06);
   mll3lconv_prompt_WZ_stack_5->GetZaxis()->SetTitleFont(42);
   mll3lconv_stack->Add(mll3lconv_prompt_WZ_stack_5,"");
   mll3lconv_stack->Draw("same hist");
   
   TH1D *mll3lconv_total__50 = new TH1D("mll3lconv_total__50","dummy",8,35,75);
   mll3lconv_total__50->SetBinContent(8,1495.945);
   mll3lconv_total__50->SetBinError(8,18.20347);
   mll3lconv_total__50->SetMinimum(0);
   mll3lconv_total__50->SetMaximum(2034.342);
   mll3lconv_total__50->SetEntries(15152);
   mll3lconv_total__50->SetDirectory(0);

   ci = TColor::GetColor("#00cc00");
   mll3lconv_total__50->SetFillColor(ci);
   mll3lconv_total__50->SetMarkerStyle(20);
   mll3lconv_total__50->SetMarkerSize(1.1);
   mll3lconv_total__50->GetXaxis()->SetTitle("M_{ll} (GeV)");
   mll3lconv_total__50->GetXaxis()->SetMoreLogLabels();
   mll3lconv_total__50->GetXaxis()->SetLabelFont(42);
   mll3lconv_total__50->GetXaxis()->SetLabelOffset(999);
   mll3lconv_total__50->GetXaxis()->SetLabelSize(0.05);
   mll3lconv_total__50->GetXaxis()->SetTitleSize(0.05);
   mll3lconv_total__50->GetXaxis()->SetTitleOffset(999);
   mll3lconv_total__50->GetXaxis()->SetTitleFont(42);
   mll3lconv_total__50->GetYaxis()->SetTitle("Events");
   mll3lconv_total__50->GetYaxis()->SetLabelFont(42);
   mll3lconv_total__50->GetYaxis()->SetLabelOffset(0.007);
   mll3lconv_total__50->GetYaxis()->SetLabelSize(0.05);
   mll3lconv_total__50->GetYaxis()->SetTitleSize(0.06);
   mll3lconv_total__50->GetYaxis()->SetTitleOffset(1.48);
   mll3lconv_total__50->GetYaxis()->SetTitleFont(42);
   mll3lconv_total__50->GetZaxis()->SetLabelFont(42);
   mll3lconv_total__50->GetZaxis()->SetLabelOffset(0.007);
   mll3lconv_total__50->GetZaxis()->SetLabelSize(0.05);
   mll3lconv_total__50->GetZaxis()->SetTitleSize(0.06);
   mll3lconv_total__50->GetZaxis()->SetTitleFont(42);
   mll3lconv_total__50->Draw("AXIS SAME");
   
   Double_t mll3lconv_total_errors_fx3061[1] = {
   72.5};
   Double_t mll3lconv_total_errors_fy3061[1] = {
   1495.945};
   Double_t mll3lconv_total_errors_felx3061[1] = {
   2.5};
   Double_t mll3lconv_total_errors_fely3061[1] = {
   18.20347};
   Double_t mll3lconv_total_errors_fehx3061[1] = {
   2.5};
   Double_t mll3lconv_total_errors_fehy3061[1] = {
   18.20347};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(1,mll3lconv_total_errors_fx3061,mll3lconv_total_errors_fy3061,mll3lconv_total_errors_felx3061,mll3lconv_total_errors_fehx3061,mll3lconv_total_errors_fely3061,mll3lconv_total_errors_fehy3061);
   grae->SetName("mll3lconv_total_errors");
   grae->SetTitle("Graph");
   grae->SetFillColor(1);
   grae->SetFillStyle(3013);
   grae->SetMarkerStyle(0);
   
   TH1F *Graph_mll3lconv_total_errors3061 = new TH1F("Graph_mll3lconv_total_errors3061","Graph",100,69.5,75.5);
   Graph_mll3lconv_total_errors3061->SetMinimum(1474.1);
   Graph_mll3lconv_total_errors3061->SetMaximum(1517.789);
   Graph_mll3lconv_total_errors3061->SetDirectory(0);
   Graph_mll3lconv_total_errors3061->SetStats(0);
   Graph_mll3lconv_total_errors3061->SetLineStyle(0);
   Graph_mll3lconv_total_errors3061->SetMarkerStyle(20);
   Graph_mll3lconv_total_errors3061->GetXaxis()->SetLabelFont(42);
   Graph_mll3lconv_total_errors3061->GetXaxis()->SetLabelOffset(0.007);
   Graph_mll3lconv_total_errors3061->GetXaxis()->SetLabelSize(0.05);
   Graph_mll3lconv_total_errors3061->GetXaxis()->SetTitleSize(0.06);
   Graph_mll3lconv_total_errors3061->GetXaxis()->SetTitleOffset(0.9);
   Graph_mll3lconv_total_errors3061->GetXaxis()->SetTitleFont(42);
   Graph_mll3lconv_total_errors3061->GetYaxis()->SetLabelFont(42);
   Graph_mll3lconv_total_errors3061->GetYaxis()->SetLabelOffset(0.007);
   Graph_mll3lconv_total_errors3061->GetYaxis()->SetLabelSize(0.05);
   Graph_mll3lconv_total_errors3061->GetYaxis()->SetTitleSize(0.06);
   Graph_mll3lconv_total_errors3061->GetYaxis()->SetTitleOffset(1.35);
   Graph_mll3lconv_total_errors3061->GetYaxis()->SetTitleFont(42);
   Graph_mll3lconv_total_errors3061->GetZaxis()->SetLabelFont(42);
   Graph_mll3lconv_total_errors3061->GetZaxis()->SetLabelOffset(0.007);
   Graph_mll3lconv_total_errors3061->GetZaxis()->SetLabelSize(0.05);
   Graph_mll3lconv_total_errors3061->GetZaxis()->SetTitleSize(0.06);
   Graph_mll3lconv_total_errors3061->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_mll3lconv_total_errors3061);
   
   grae->Draw("pe2 ");
   
   Double_t mll3lconv_data_graph_fx3062[8] = {
   37.5,
   42.5,
   47.5,
   52.5,
   57.5,
   62.5,
   67.5,
   72.5};
   Double_t mll3lconv_data_graph_fy3062[8] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   1513};
   Double_t mll3lconv_data_graph_felx3062[8] = {
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5};
   Double_t mll3lconv_data_graph_fely3062[8] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   38.89384};
   Double_t mll3lconv_data_graph_fehx3062[8] = {
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5};
   Double_t mll3lconv_data_graph_fehy3062[8] = {
   1.841055,
   1.841055,
   1.841055,
   1.841055,
   1.841055,
   1.841055,
   1.841055,
   39.90673};
   grae = new TGraphAsymmErrors(8,mll3lconv_data_graph_fx3062,mll3lconv_data_graph_fy3062,mll3lconv_data_graph_felx3062,mll3lconv_data_graph_fehx3062,mll3lconv_data_graph_fely3062,mll3lconv_data_graph_fehy3062);
   grae->SetName("mll3lconv_data_graph");
   grae->SetTitle("Graph");
   grae->SetFillStyle(1000);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.1);
   
   TH1F *Graph_mll3lconv_data_graph3062 = new TH1F("Graph_mll3lconv_data_graph3062","Graph",100,31,79);
   Graph_mll3lconv_data_graph3062->SetMinimum(0);
   Graph_mll3lconv_data_graph3062->SetMaximum(1708.197);
   Graph_mll3lconv_data_graph3062->SetDirectory(0);
   Graph_mll3lconv_data_graph3062->SetStats(0);
   Graph_mll3lconv_data_graph3062->SetLineStyle(0);
   Graph_mll3lconv_data_graph3062->SetMarkerStyle(20);
   Graph_mll3lconv_data_graph3062->GetXaxis()->SetLabelFont(42);
   Graph_mll3lconv_data_graph3062->GetXaxis()->SetLabelOffset(0.007);
   Graph_mll3lconv_data_graph3062->GetXaxis()->SetLabelSize(0.05);
   Graph_mll3lconv_data_graph3062->GetXaxis()->SetTitleSize(0.06);
   Graph_mll3lconv_data_graph3062->GetXaxis()->SetTitleOffset(0.9);
   Graph_mll3lconv_data_graph3062->GetXaxis()->SetTitleFont(42);
   Graph_mll3lconv_data_graph3062->GetYaxis()->SetLabelFont(42);
   Graph_mll3lconv_data_graph3062->GetYaxis()->SetLabelOffset(0.007);
   Graph_mll3lconv_data_graph3062->GetYaxis()->SetLabelSize(0.05);
   Graph_mll3lconv_data_graph3062->GetYaxis()->SetTitleSize(0.06);
   Graph_mll3lconv_data_graph3062->GetYaxis()->SetTitleOffset(1.35);
   Graph_mll3lconv_data_graph3062->GetYaxis()->SetTitleFont(42);
   Graph_mll3lconv_data_graph3062->GetZaxis()->SetLabelFont(42);
   Graph_mll3lconv_data_graph3062->GetZaxis()->SetLabelOffset(0.007);
   Graph_mll3lconv_data_graph3062->GetZaxis()->SetLabelSize(0.05);
   Graph_mll3lconv_data_graph3062->GetZaxis()->SetTitleSize(0.06);
   Graph_mll3lconv_data_graph3062->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_mll3lconv_data_graph3062);
   
   grae->Draw("pz ");
   
   TLegend *leg = new TLegend(0.62,0.628,0.9,0.91,NULL,"brNDC");
   leg->SetBorderSize(1);
   leg->SetTextSize(0.036);
   leg->SetLineColor(0);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("mll3lconv_data","Data","LPE");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1.1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("mll3lconv_prompt_WZ_stack_5","WZ","F");

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
   entry=leg->AddEntry("mll3lconv_prompt_ZZ_stack_4","qqZZ","F");

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
   entry=leg->AddEntry("mll3lconv_fakes_DY_stack_3","Fakes DY","F");

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
   entry=leg->AddEntry("mll3lconv_fakes_TT_stack_2","Fakes TT","F");

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
   entry=leg->AddEntry("mll3lconv_total_errors","Total unc.","F");
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
   mll3lconv_canvas->cd();
  
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
   
   TH1D *mll3lconv_total__51 = new TH1D("mll3lconv_total__51","dummy",8,35,75);
   mll3lconv_total__51->SetBinContent(8,1);
   mll3lconv_total__51->SetMinimum(0.5);
   mll3lconv_total__51->SetMaximum(2);
   mll3lconv_total__51->SetEntries(15160);

   ci = TColor::GetColor("#00cc00");
   mll3lconv_total__51->SetFillColor(ci);

   ci = TColor::GetColor("#6666ff");
   mll3lconv_total__51->SetMarkerColor(ci);
   mll3lconv_total__51->SetMarkerSize(1.1);
   mll3lconv_total__51->GetXaxis()->SetTitle("M_{ll} (GeV)");
   mll3lconv_total__51->GetXaxis()->SetMoreLogLabels();
   mll3lconv_total__51->GetXaxis()->SetLabelFont(42);
   mll3lconv_total__51->GetXaxis()->SetLabelOffset(0.015);
   mll3lconv_total__51->GetXaxis()->SetLabelSize(0.1);
   mll3lconv_total__51->GetXaxis()->SetTitleSize(0.14);
   mll3lconv_total__51->GetXaxis()->SetTitleFont(42);
   mll3lconv_total__51->GetYaxis()->SetTitle("Data/pred.");
   mll3lconv_total__51->GetYaxis()->SetDecimals();
   mll3lconv_total__51->GetYaxis()->SetNdivisions(505);
   mll3lconv_total__51->GetYaxis()->SetLabelFont(42);
   mll3lconv_total__51->GetYaxis()->SetLabelOffset(0.01);
   mll3lconv_total__51->GetYaxis()->SetLabelSize(0.11);
   mll3lconv_total__51->GetYaxis()->SetTitleSize(0.14);
   mll3lconv_total__51->GetYaxis()->SetTitleOffset(0.62);
   mll3lconv_total__51->GetYaxis()->SetTitleFont(42);
   mll3lconv_total__51->GetZaxis()->SetLabelFont(42);
   mll3lconv_total__51->GetZaxis()->SetLabelOffset(0.007);
   mll3lconv_total__51->GetZaxis()->SetLabelSize(0.05);
   mll3lconv_total__51->GetZaxis()->SetTitleSize(0.06);
   mll3lconv_total__51->GetZaxis()->SetTitleFont(42);
   mll3lconv_total__51->Draw("AXIS");
   
   Double_t mll3lconv_total_errors_fx3063[1] = {
   72.5};
   Double_t mll3lconv_total_errors_fy3063[1] = {
   1};
   Double_t mll3lconv_total_errors_felx3063[1] = {
   2.5};
   Double_t mll3lconv_total_errors_fely3063[1] = {
   0.01216854};
   Double_t mll3lconv_total_errors_fehx3063[1] = {
   2.5};
   Double_t mll3lconv_total_errors_fehy3063[1] = {
   0.01216854};
   grae = new TGraphAsymmErrors(1,mll3lconv_total_errors_fx3063,mll3lconv_total_errors_fy3063,mll3lconv_total_errors_felx3063,mll3lconv_total_errors_fehx3063,mll3lconv_total_errors_fely3063,mll3lconv_total_errors_fehy3063);
   grae->SetName("mll3lconv_total_errors");
   grae->SetTitle("Graph");

   ci = TColor::GetColor("#00ffff");
   grae->SetFillColor(ci);

   ci = TColor::GetColor("#00ffff");
   grae->SetMarkerColor(ci);
   grae->Draw("e2");
   
   Double_t mll3lconv_total_errors_fx3064[1] = {
   72.5};
   Double_t mll3lconv_total_errors_fy3064[1] = {
   1};
   Double_t mll3lconv_total_errors_felx3064[1] = {
   2.5};
   Double_t mll3lconv_total_errors_fely3064[1] = {
   0.01216854};
   Double_t mll3lconv_total_errors_fehx3064[1] = {
   2.5};
   Double_t mll3lconv_total_errors_fehy3064[1] = {
   0.01216854};
   grae = new TGraphAsymmErrors(1,mll3lconv_total_errors_fx3064,mll3lconv_total_errors_fy3064,mll3lconv_total_errors_felx3064,mll3lconv_total_errors_fehx3064,mll3lconv_total_errors_fely3064,mll3lconv_total_errors_fehy3064);
   grae->SetName("mll3lconv_total_errors");
   grae->SetTitle("Graph");

   ci = TColor::GetColor("#6666ff");
   grae->SetFillColor(ci);

   ci = TColor::GetColor("#6666ff");
   grae->SetMarkerColor(ci);
   grae->Draw("e2 ");
   
   TH1D *mll3lconv_total__52 = new TH1D("mll3lconv_total__52","dummy",8,35,75);
   mll3lconv_total__52->SetBinContent(8,1);
   mll3lconv_total__52->SetMinimum(0.5);
   mll3lconv_total__52->SetMaximum(2);
   mll3lconv_total__52->SetEntries(15160);

   ci = TColor::GetColor("#00cc00");
   mll3lconv_total__52->SetFillColor(ci);

   ci = TColor::GetColor("#6666ff");
   mll3lconv_total__52->SetMarkerColor(ci);
   mll3lconv_total__52->SetMarkerSize(1.1);
   mll3lconv_total__52->GetXaxis()->SetTitle("M_{ll} (GeV)");
   mll3lconv_total__52->GetXaxis()->SetMoreLogLabels();
   mll3lconv_total__52->GetXaxis()->SetLabelFont(42);
   mll3lconv_total__52->GetXaxis()->SetLabelOffset(0.015);
   mll3lconv_total__52->GetXaxis()->SetLabelSize(0.1);
   mll3lconv_total__52->GetXaxis()->SetTitleSize(0.14);
   mll3lconv_total__52->GetXaxis()->SetTitleFont(42);
   mll3lconv_total__52->GetYaxis()->SetTitle("Data/pred.");
   mll3lconv_total__52->GetYaxis()->SetDecimals();
   mll3lconv_total__52->GetYaxis()->SetNdivisions(505);
   mll3lconv_total__52->GetYaxis()->SetLabelFont(42);
   mll3lconv_total__52->GetYaxis()->SetLabelOffset(0.01);
   mll3lconv_total__52->GetYaxis()->SetLabelSize(0.11);
   mll3lconv_total__52->GetYaxis()->SetTitleSize(0.14);
   mll3lconv_total__52->GetYaxis()->SetTitleOffset(0.62);
   mll3lconv_total__52->GetYaxis()->SetTitleFont(42);
   mll3lconv_total__52->GetZaxis()->SetLabelFont(42);
   mll3lconv_total__52->GetZaxis()->SetLabelOffset(0.007);
   mll3lconv_total__52->GetZaxis()->SetLabelSize(0.05);
   mll3lconv_total__52->GetZaxis()->SetTitleSize(0.06);
   mll3lconv_total__52->GetZaxis()->SetTitleFont(42);
   mll3lconv_total__52->Draw("AXIS SAME");
   TLine *line = new TLine(35,1,75,1);
   line->SetLineColor(58);
   line->SetLineWidth(2);
   line->Draw();
   
   Double_t data_div_fx3065[8] = {
   37.5,
   42.5,
   47.5,
   52.5,
   57.5,
   62.5,
   67.5,
   72.5};
   Double_t data_div_fy3065[8] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   1.011401};
   Double_t data_div_felx3065[8] = {
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5};
   Double_t data_div_fely3065[8] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0.02599952};
   Double_t data_div_fehx3065[8] = {
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5};
   Double_t data_div_fehy3065[8] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0.02667661};
   grae = new TGraphAsymmErrors(8,data_div_fx3065,data_div_fy3065,data_div_felx3065,data_div_fehx3065,data_div_fely3065,data_div_fehy3065);
   grae->SetName("data_div");
   grae->SetTitle("Graph");
   grae->SetFillStyle(1000);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.1);
   
   TH1F *Graph_mll3lconv_data_graph3065 = new TH1F("Graph_mll3lconv_data_graph3065","Graph",100,31,79);
   Graph_mll3lconv_data_graph3065->SetMinimum(0);
   Graph_mll3lconv_data_graph3065->SetMaximum(1708.197);
   Graph_mll3lconv_data_graph3065->SetDirectory(0);
   Graph_mll3lconv_data_graph3065->SetStats(0);
   Graph_mll3lconv_data_graph3065->SetLineStyle(0);
   Graph_mll3lconv_data_graph3065->SetMarkerStyle(20);
   Graph_mll3lconv_data_graph3065->GetXaxis()->SetLabelFont(42);
   Graph_mll3lconv_data_graph3065->GetXaxis()->SetLabelOffset(0.007);
   Graph_mll3lconv_data_graph3065->GetXaxis()->SetLabelSize(0.05);
   Graph_mll3lconv_data_graph3065->GetXaxis()->SetTitleSize(0.06);
   Graph_mll3lconv_data_graph3065->GetXaxis()->SetTitleOffset(0.9);
   Graph_mll3lconv_data_graph3065->GetXaxis()->SetTitleFont(42);
   Graph_mll3lconv_data_graph3065->GetYaxis()->SetLabelFont(42);
   Graph_mll3lconv_data_graph3065->GetYaxis()->SetLabelOffset(0.007);
   Graph_mll3lconv_data_graph3065->GetYaxis()->SetLabelSize(0.05);
   Graph_mll3lconv_data_graph3065->GetYaxis()->SetTitleSize(0.06);
   Graph_mll3lconv_data_graph3065->GetYaxis()->SetTitleOffset(1.35);
   Graph_mll3lconv_data_graph3065->GetYaxis()->SetTitleFont(42);
   Graph_mll3lconv_data_graph3065->GetZaxis()->SetLabelFont(42);
   Graph_mll3lconv_data_graph3065->GetZaxis()->SetLabelOffset(0.007);
   Graph_mll3lconv_data_graph3065->GetZaxis()->SetLabelSize(0.05);
   Graph_mll3lconv_data_graph3065->GetZaxis()->SetTitleSize(0.06);
   Graph_mll3lconv_data_graph3065->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_mll3lconv_data_graph3065);
   
   grae->Draw("pz ");
   
   leg = new TLegend(0,0,0,0,NULL,"brNDC");
   leg->SetBorderSize(1);
   leg->SetTextSize(0.084);
   leg->SetLineColor(0);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   entry=leg->AddEntry("mll3lconv_total_errors","stat. unc.","F");
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
   entry=leg->AddEntry("mll3lconv_total_errors","total unc.","F");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   leg->Draw();
   pad2->Modified();
   mll3lconv_canvas->cd();
   mll3lconv_canvas->Modified();
   mll3lconv_canvas->cd();
   mll3lconv_canvas->SetSelected(mll3lconv_canvas);
}
