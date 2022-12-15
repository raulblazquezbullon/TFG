void tot_weight()
{
//=========Macro generated from canvas: tot_weight_canvas/tot_weight
//=========  (Thu Dec 15 18:17:33 2022) by ROOT version 6.12/07
   TCanvas *tot_weight_canvas = new TCanvas("tot_weight_canvas", "tot_weight",0,0,600,750);
   gStyle->SetOptFit(1);
   gStyle->SetOptStat(0);
   gStyle->SetOptTitle(0);
   tot_weight_canvas->SetHighLightColor(2);
   tot_weight_canvas->Range(0,0,1,1);
   tot_weight_canvas->SetFillColor(0);
   tot_weight_canvas->SetBorderMode(0);
   tot_weight_canvas->SetBorderSize(2);
   tot_weight_canvas->SetTickx(1);
   tot_weight_canvas->SetTicky(1);
   tot_weight_canvas->SetLeftMargin(0.18);
   tot_weight_canvas->SetRightMargin(0.04);
   tot_weight_canvas->SetBottomMargin(0.13);
   tot_weight_canvas->SetFrameFillStyle(0);
   tot_weight_canvas->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: pad1
   TPad *pad1 = new TPad("pad1", "pad1",0,0.3,1,1);
   pad1->Draw();
   pad1->cd();
   pad1->Range(-0.4615385,-55.58312,2.102564,2167.742);
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
   
   TH1D *tot_weight_total__1 = new TH1D("tot_weight_total__1","dummy",1,0,2);
   tot_weight_total__1->SetBinContent(1,1495.945);
   tot_weight_total__1->SetBinError(1,18.20347);
   tot_weight_total__1->SetMinimum(0);
   tot_weight_total__1->SetMaximum(2034.342);
   tot_weight_total__1->SetEntries(15152);
   tot_weight_total__1->SetDirectory(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#00cc00");
   tot_weight_total__1->SetFillColor(ci);
   tot_weight_total__1->SetMarkerStyle(20);
   tot_weight_total__1->SetMarkerSize(1.1);
   tot_weight_total__1->GetXaxis()->SetTitle("Yields");
   tot_weight_total__1->GetXaxis()->SetMoreLogLabels();
   tot_weight_total__1->GetXaxis()->SetLabelFont(42);
   tot_weight_total__1->GetXaxis()->SetLabelOffset(999);
   tot_weight_total__1->GetXaxis()->SetLabelSize(0.05);
   tot_weight_total__1->GetXaxis()->SetTitleSize(0.05);
   tot_weight_total__1->GetXaxis()->SetTitleOffset(999);
   tot_weight_total__1->GetXaxis()->SetTitleFont(42);
   tot_weight_total__1->GetYaxis()->SetTitle("Events");
   tot_weight_total__1->GetYaxis()->SetLabelFont(42);
   tot_weight_total__1->GetYaxis()->SetLabelOffset(0.007);
   tot_weight_total__1->GetYaxis()->SetLabelSize(0.05);
   tot_weight_total__1->GetYaxis()->SetTitleSize(0.06);
   tot_weight_total__1->GetYaxis()->SetTitleOffset(1.48);
   tot_weight_total__1->GetYaxis()->SetTitleFont(42);
   tot_weight_total__1->GetZaxis()->SetLabelFont(42);
   tot_weight_total__1->GetZaxis()->SetLabelOffset(0.007);
   tot_weight_total__1->GetZaxis()->SetLabelSize(0.05);
   tot_weight_total__1->GetZaxis()->SetTitleSize(0.06);
   tot_weight_total__1->GetZaxis()->SetTitleFont(42);
   tot_weight_total__1->Draw("HIST");
   
   THStack *tot_weight_stack = new THStack();
   tot_weight_stack->SetName("tot_weight_stack");
   tot_weight_stack->SetTitle("tot_weight");
   
   TH1F *tot_weight_stack_stack_1 = new TH1F("tot_weight_stack_stack_1","tot_weight",1,0,2);
   tot_weight_stack_stack_1->SetMinimum(0);
   tot_weight_stack_stack_1->SetMaximum(1570.742);
   tot_weight_stack_stack_1->SetDirectory(0);
   tot_weight_stack_stack_1->SetStats(0);
   tot_weight_stack_stack_1->SetLineStyle(0);
   tot_weight_stack_stack_1->SetMarkerStyle(20);
   tot_weight_stack_stack_1->GetXaxis()->SetLabelFont(42);
   tot_weight_stack_stack_1->GetXaxis()->SetLabelOffset(0.007);
   tot_weight_stack_stack_1->GetXaxis()->SetLabelSize(0.05);
   tot_weight_stack_stack_1->GetXaxis()->SetTitleSize(0.06);
   tot_weight_stack_stack_1->GetXaxis()->SetTitleOffset(0.9);
   tot_weight_stack_stack_1->GetXaxis()->SetTitleFont(42);
   tot_weight_stack_stack_1->GetYaxis()->SetLabelFont(42);
   tot_weight_stack_stack_1->GetYaxis()->SetLabelOffset(0.007);
   tot_weight_stack_stack_1->GetYaxis()->SetLabelSize(0.05);
   tot_weight_stack_stack_1->GetYaxis()->SetTitleSize(0.06);
   tot_weight_stack_stack_1->GetYaxis()->SetTitleOffset(1.35);
   tot_weight_stack_stack_1->GetYaxis()->SetTitleFont(42);
   tot_weight_stack_stack_1->GetZaxis()->SetLabelFont(42);
   tot_weight_stack_stack_1->GetZaxis()->SetLabelOffset(0.007);
   tot_weight_stack_stack_1->GetZaxis()->SetLabelSize(0.05);
   tot_weight_stack_stack_1->GetZaxis()->SetTitleSize(0.06);
   tot_weight_stack_stack_1->GetZaxis()->SetTitleFont(42);
   tot_weight_stack->SetHistogram(tot_weight_stack_stack_1);
   
   
   TH1D *tot_weight_fakes_VV_stack_1 = new TH1D("tot_weight_fakes_VV_stack_1","dummy",1,0,2);
   tot_weight_fakes_VV_stack_1->SetBinContent(1,0.6803536);
   tot_weight_fakes_VV_stack_1->SetBinError(1,0.2571495);
   tot_weight_fakes_VV_stack_1->SetEntries(11);

   ci = TColor::GetColor("#2e3294");
   tot_weight_fakes_VV_stack_1->SetFillColor(ci);
   tot_weight_fakes_VV_stack_1->SetMarkerStyle(0);
   tot_weight_fakes_VV_stack_1->SetMarkerSize(1.1);
   tot_weight_fakes_VV_stack_1->GetXaxis()->SetTitle("Yields");
   tot_weight_fakes_VV_stack_1->GetXaxis()->SetMoreLogLabels();
   tot_weight_fakes_VV_stack_1->GetXaxis()->SetLabelFont(42);
   tot_weight_fakes_VV_stack_1->GetXaxis()->SetLabelOffset(0.007);
   tot_weight_fakes_VV_stack_1->GetXaxis()->SetLabelSize(0.05);
   tot_weight_fakes_VV_stack_1->GetXaxis()->SetTitleSize(0.06);
   tot_weight_fakes_VV_stack_1->GetXaxis()->SetTitleOffset(0.9);
   tot_weight_fakes_VV_stack_1->GetXaxis()->SetTitleFont(42);
   tot_weight_fakes_VV_stack_1->GetYaxis()->SetTitle("Events");
   tot_weight_fakes_VV_stack_1->GetYaxis()->SetLabelFont(42);
   tot_weight_fakes_VV_stack_1->GetYaxis()->SetLabelOffset(0.007);
   tot_weight_fakes_VV_stack_1->GetYaxis()->SetLabelSize(0.05);
   tot_weight_fakes_VV_stack_1->GetYaxis()->SetTitleSize(0.06);
   tot_weight_fakes_VV_stack_1->GetYaxis()->SetTitleOffset(1.35);
   tot_weight_fakes_VV_stack_1->GetYaxis()->SetTitleFont(42);
   tot_weight_fakes_VV_stack_1->GetZaxis()->SetLabelFont(42);
   tot_weight_fakes_VV_stack_1->GetZaxis()->SetLabelOffset(0.007);
   tot_weight_fakes_VV_stack_1->GetZaxis()->SetLabelSize(0.05);
   tot_weight_fakes_VV_stack_1->GetZaxis()->SetTitleSize(0.06);
   tot_weight_fakes_VV_stack_1->GetZaxis()->SetTitleFont(42);
   tot_weight_stack->Add(tot_weight_fakes_VV_stack_1,"");
   
   TH1D *tot_weight_fakes_TT_stack_2 = new TH1D("tot_weight_fakes_TT_stack_2","dummy",1,0,2);
   tot_weight_fakes_TT_stack_2->SetBinContent(1,55.04433);
   tot_weight_fakes_TT_stack_2->SetBinError(1,1.933956);
   tot_weight_fakes_TT_stack_2->SetEntries(841);

   ci = TColor::GetColor("#666666");
   tot_weight_fakes_TT_stack_2->SetFillColor(ci);
   tot_weight_fakes_TT_stack_2->SetMarkerStyle(0);
   tot_weight_fakes_TT_stack_2->SetMarkerSize(1.1);
   tot_weight_fakes_TT_stack_2->GetXaxis()->SetTitle("Yields");
   tot_weight_fakes_TT_stack_2->GetXaxis()->SetMoreLogLabels();
   tot_weight_fakes_TT_stack_2->GetXaxis()->SetLabelFont(42);
   tot_weight_fakes_TT_stack_2->GetXaxis()->SetLabelOffset(0.007);
   tot_weight_fakes_TT_stack_2->GetXaxis()->SetLabelSize(0.05);
   tot_weight_fakes_TT_stack_2->GetXaxis()->SetTitleSize(0.06);
   tot_weight_fakes_TT_stack_2->GetXaxis()->SetTitleOffset(0.9);
   tot_weight_fakes_TT_stack_2->GetXaxis()->SetTitleFont(42);
   tot_weight_fakes_TT_stack_2->GetYaxis()->SetTitle("Events");
   tot_weight_fakes_TT_stack_2->GetYaxis()->SetLabelFont(42);
   tot_weight_fakes_TT_stack_2->GetYaxis()->SetLabelOffset(0.007);
   tot_weight_fakes_TT_stack_2->GetYaxis()->SetLabelSize(0.05);
   tot_weight_fakes_TT_stack_2->GetYaxis()->SetTitleSize(0.06);
   tot_weight_fakes_TT_stack_2->GetYaxis()->SetTitleOffset(1.35);
   tot_weight_fakes_TT_stack_2->GetYaxis()->SetTitleFont(42);
   tot_weight_fakes_TT_stack_2->GetZaxis()->SetLabelFont(42);
   tot_weight_fakes_TT_stack_2->GetZaxis()->SetLabelOffset(0.007);
   tot_weight_fakes_TT_stack_2->GetZaxis()->SetLabelSize(0.05);
   tot_weight_fakes_TT_stack_2->GetZaxis()->SetTitleSize(0.06);
   tot_weight_fakes_TT_stack_2->GetZaxis()->SetTitleFont(42);
   tot_weight_stack->Add(tot_weight_fakes_TT_stack_2,"");
   
   TH1D *tot_weight_fakes_DY_stack_3 = new TH1D("tot_weight_fakes_DY_stack_3","dummy",1,0,2);
   tot_weight_fakes_DY_stack_3->SetBinContent(1,116.9275);
   tot_weight_fakes_DY_stack_3->SetBinError(1,14.17954);
   tot_weight_fakes_DY_stack_3->SetEntries(72);

   ci = TColor::GetColor("#cccccc");
   tot_weight_fakes_DY_stack_3->SetFillColor(ci);
   tot_weight_fakes_DY_stack_3->SetMarkerStyle(0);
   tot_weight_fakes_DY_stack_3->SetMarkerSize(1.1);
   tot_weight_fakes_DY_stack_3->GetXaxis()->SetTitle("Yields");
   tot_weight_fakes_DY_stack_3->GetXaxis()->SetMoreLogLabels();
   tot_weight_fakes_DY_stack_3->GetXaxis()->SetLabelFont(42);
   tot_weight_fakes_DY_stack_3->GetXaxis()->SetLabelOffset(0.007);
   tot_weight_fakes_DY_stack_3->GetXaxis()->SetLabelSize(0.05);
   tot_weight_fakes_DY_stack_3->GetXaxis()->SetTitleSize(0.06);
   tot_weight_fakes_DY_stack_3->GetXaxis()->SetTitleOffset(0.9);
   tot_weight_fakes_DY_stack_3->GetXaxis()->SetTitleFont(42);
   tot_weight_fakes_DY_stack_3->GetYaxis()->SetTitle("Events");
   tot_weight_fakes_DY_stack_3->GetYaxis()->SetLabelFont(42);
   tot_weight_fakes_DY_stack_3->GetYaxis()->SetLabelOffset(0.007);
   tot_weight_fakes_DY_stack_3->GetYaxis()->SetLabelSize(0.05);
   tot_weight_fakes_DY_stack_3->GetYaxis()->SetTitleSize(0.06);
   tot_weight_fakes_DY_stack_3->GetYaxis()->SetTitleOffset(1.35);
   tot_weight_fakes_DY_stack_3->GetYaxis()->SetTitleFont(42);
   tot_weight_fakes_DY_stack_3->GetZaxis()->SetLabelFont(42);
   tot_weight_fakes_DY_stack_3->GetZaxis()->SetLabelOffset(0.007);
   tot_weight_fakes_DY_stack_3->GetZaxis()->SetLabelSize(0.05);
   tot_weight_fakes_DY_stack_3->GetZaxis()->SetTitleSize(0.06);
   tot_weight_fakes_DY_stack_3->GetZaxis()->SetTitleFont(42);
   tot_weight_stack->Add(tot_weight_fakes_DY_stack_3,"");
   
   TH1D *tot_weight_prompt_ZZ_stack_4 = new TH1D("tot_weight_prompt_ZZ_stack_4","dummy",1,0,2);
   tot_weight_prompt_ZZ_stack_4->SetBinContent(1,73.21068);
   tot_weight_prompt_ZZ_stack_4->SetBinError(1,3.665118);
   tot_weight_prompt_ZZ_stack_4->SetEntries(403);

   ci = TColor::GetColor("#00cc00");
   tot_weight_prompt_ZZ_stack_4->SetFillColor(ci);
   tot_weight_prompt_ZZ_stack_4->SetMarkerStyle(0);
   tot_weight_prompt_ZZ_stack_4->SetMarkerSize(1.1);
   tot_weight_prompt_ZZ_stack_4->GetXaxis()->SetTitle("Yields");
   tot_weight_prompt_ZZ_stack_4->GetXaxis()->SetMoreLogLabels();
   tot_weight_prompt_ZZ_stack_4->GetXaxis()->SetLabelFont(42);
   tot_weight_prompt_ZZ_stack_4->GetXaxis()->SetLabelOffset(0.007);
   tot_weight_prompt_ZZ_stack_4->GetXaxis()->SetLabelSize(0.05);
   tot_weight_prompt_ZZ_stack_4->GetXaxis()->SetTitleSize(0.06);
   tot_weight_prompt_ZZ_stack_4->GetXaxis()->SetTitleOffset(0.9);
   tot_weight_prompt_ZZ_stack_4->GetXaxis()->SetTitleFont(42);
   tot_weight_prompt_ZZ_stack_4->GetYaxis()->SetTitle("Events");
   tot_weight_prompt_ZZ_stack_4->GetYaxis()->SetLabelFont(42);
   tot_weight_prompt_ZZ_stack_4->GetYaxis()->SetLabelOffset(0.007);
   tot_weight_prompt_ZZ_stack_4->GetYaxis()->SetLabelSize(0.05);
   tot_weight_prompt_ZZ_stack_4->GetYaxis()->SetTitleSize(0.06);
   tot_weight_prompt_ZZ_stack_4->GetYaxis()->SetTitleOffset(1.35);
   tot_weight_prompt_ZZ_stack_4->GetYaxis()->SetTitleFont(42);
   tot_weight_prompt_ZZ_stack_4->GetZaxis()->SetLabelFont(42);
   tot_weight_prompt_ZZ_stack_4->GetZaxis()->SetLabelOffset(0.007);
   tot_weight_prompt_ZZ_stack_4->GetZaxis()->SetLabelSize(0.05);
   tot_weight_prompt_ZZ_stack_4->GetZaxis()->SetTitleSize(0.06);
   tot_weight_prompt_ZZ_stack_4->GetZaxis()->SetTitleFont(42);
   tot_weight_stack->Add(tot_weight_prompt_ZZ_stack_4,"");
   
   TH1D *tot_weight_prompt_WZ_stack_5 = new TH1D("tot_weight_prompt_WZ_stack_5","dummy",1,0,2);
   tot_weight_prompt_WZ_stack_5->SetBinContent(1,1250.082);
   tot_weight_prompt_WZ_stack_5->SetBinError(1,10.63331);
   tot_weight_prompt_WZ_stack_5->SetEntries(13825);

   ci = TColor::GetColor("#ffcc00");
   tot_weight_prompt_WZ_stack_5->SetFillColor(ci);
   tot_weight_prompt_WZ_stack_5->SetMarkerStyle(0);
   tot_weight_prompt_WZ_stack_5->SetMarkerSize(1.1);
   tot_weight_prompt_WZ_stack_5->GetXaxis()->SetTitle("Yields");
   tot_weight_prompt_WZ_stack_5->GetXaxis()->SetMoreLogLabels();
   tot_weight_prompt_WZ_stack_5->GetXaxis()->SetLabelFont(42);
   tot_weight_prompt_WZ_stack_5->GetXaxis()->SetLabelOffset(0.007);
   tot_weight_prompt_WZ_stack_5->GetXaxis()->SetLabelSize(0.05);
   tot_weight_prompt_WZ_stack_5->GetXaxis()->SetTitleSize(0.06);
   tot_weight_prompt_WZ_stack_5->GetXaxis()->SetTitleOffset(0.9);
   tot_weight_prompt_WZ_stack_5->GetXaxis()->SetTitleFont(42);
   tot_weight_prompt_WZ_stack_5->GetYaxis()->SetTitle("Events");
   tot_weight_prompt_WZ_stack_5->GetYaxis()->SetLabelFont(42);
   tot_weight_prompt_WZ_stack_5->GetYaxis()->SetLabelOffset(0.007);
   tot_weight_prompt_WZ_stack_5->GetYaxis()->SetLabelSize(0.05);
   tot_weight_prompt_WZ_stack_5->GetYaxis()->SetTitleSize(0.06);
   tot_weight_prompt_WZ_stack_5->GetYaxis()->SetTitleOffset(1.35);
   tot_weight_prompt_WZ_stack_5->GetYaxis()->SetTitleFont(42);
   tot_weight_prompt_WZ_stack_5->GetZaxis()->SetLabelFont(42);
   tot_weight_prompt_WZ_stack_5->GetZaxis()->SetLabelOffset(0.007);
   tot_weight_prompt_WZ_stack_5->GetZaxis()->SetLabelSize(0.05);
   tot_weight_prompt_WZ_stack_5->GetZaxis()->SetTitleSize(0.06);
   tot_weight_prompt_WZ_stack_5->GetZaxis()->SetTitleFont(42);
   tot_weight_stack->Add(tot_weight_prompt_WZ_stack_5,"");
   tot_weight_stack->Draw("same hist");
   
   TH1D *tot_weight_total__2 = new TH1D("tot_weight_total__2","dummy",1,0,2);
   tot_weight_total__2->SetBinContent(1,1495.945);
   tot_weight_total__2->SetBinError(1,18.20347);
   tot_weight_total__2->SetMinimum(0);
   tot_weight_total__2->SetMaximum(2034.342);
   tot_weight_total__2->SetEntries(15152);
   tot_weight_total__2->SetDirectory(0);

   ci = TColor::GetColor("#00cc00");
   tot_weight_total__2->SetFillColor(ci);
   tot_weight_total__2->SetMarkerStyle(20);
   tot_weight_total__2->SetMarkerSize(1.1);
   tot_weight_total__2->GetXaxis()->SetTitle("Yields");
   tot_weight_total__2->GetXaxis()->SetMoreLogLabels();
   tot_weight_total__2->GetXaxis()->SetLabelFont(42);
   tot_weight_total__2->GetXaxis()->SetLabelOffset(999);
   tot_weight_total__2->GetXaxis()->SetLabelSize(0.05);
   tot_weight_total__2->GetXaxis()->SetTitleSize(0.05);
   tot_weight_total__2->GetXaxis()->SetTitleOffset(999);
   tot_weight_total__2->GetXaxis()->SetTitleFont(42);
   tot_weight_total__2->GetYaxis()->SetTitle("Events");
   tot_weight_total__2->GetYaxis()->SetLabelFont(42);
   tot_weight_total__2->GetYaxis()->SetLabelOffset(0.007);
   tot_weight_total__2->GetYaxis()->SetLabelSize(0.05);
   tot_weight_total__2->GetYaxis()->SetTitleSize(0.06);
   tot_weight_total__2->GetYaxis()->SetTitleOffset(1.48);
   tot_weight_total__2->GetYaxis()->SetTitleFont(42);
   tot_weight_total__2->GetZaxis()->SetLabelFont(42);
   tot_weight_total__2->GetZaxis()->SetLabelOffset(0.007);
   tot_weight_total__2->GetZaxis()->SetLabelSize(0.05);
   tot_weight_total__2->GetZaxis()->SetTitleSize(0.06);
   tot_weight_total__2->GetZaxis()->SetTitleFont(42);
   tot_weight_total__2->Draw("AXIS SAME");
   
   Double_t tot_weight_total_errors_fx3001[1] = {
   1};
   Double_t tot_weight_total_errors_fy3001[1] = {
   1495.945};
   Double_t tot_weight_total_errors_felx3001[1] = {
   1};
   Double_t tot_weight_total_errors_fely3001[1] = {
   18.20347};
   Double_t tot_weight_total_errors_fehx3001[1] = {
   1};
   Double_t tot_weight_total_errors_fehy3001[1] = {
   18.20347};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(1,tot_weight_total_errors_fx3001,tot_weight_total_errors_fy3001,tot_weight_total_errors_felx3001,tot_weight_total_errors_fehx3001,tot_weight_total_errors_fely3001,tot_weight_total_errors_fehy3001);
   grae->SetName("tot_weight_total_errors");
   grae->SetTitle("Graph");
   grae->SetFillColor(1);
   grae->SetFillStyle(3013);
   grae->SetMarkerStyle(0);
   
   TH1F *Graph_tot_weight_total_errors3001 = new TH1F("Graph_tot_weight_total_errors3001","Graph",100,0,2.2);
   Graph_tot_weight_total_errors3001->SetMinimum(1474.1);
   Graph_tot_weight_total_errors3001->SetMaximum(1517.789);
   Graph_tot_weight_total_errors3001->SetDirectory(0);
   Graph_tot_weight_total_errors3001->SetStats(0);
   Graph_tot_weight_total_errors3001->SetLineStyle(0);
   Graph_tot_weight_total_errors3001->SetMarkerStyle(20);
   Graph_tot_weight_total_errors3001->GetXaxis()->SetLabelFont(42);
   Graph_tot_weight_total_errors3001->GetXaxis()->SetLabelOffset(0.007);
   Graph_tot_weight_total_errors3001->GetXaxis()->SetLabelSize(0.05);
   Graph_tot_weight_total_errors3001->GetXaxis()->SetTitleSize(0.06);
   Graph_tot_weight_total_errors3001->GetXaxis()->SetTitleOffset(0.9);
   Graph_tot_weight_total_errors3001->GetXaxis()->SetTitleFont(42);
   Graph_tot_weight_total_errors3001->GetYaxis()->SetLabelFont(42);
   Graph_tot_weight_total_errors3001->GetYaxis()->SetLabelOffset(0.007);
   Graph_tot_weight_total_errors3001->GetYaxis()->SetLabelSize(0.05);
   Graph_tot_weight_total_errors3001->GetYaxis()->SetTitleSize(0.06);
   Graph_tot_weight_total_errors3001->GetYaxis()->SetTitleOffset(1.35);
   Graph_tot_weight_total_errors3001->GetYaxis()->SetTitleFont(42);
   Graph_tot_weight_total_errors3001->GetZaxis()->SetLabelFont(42);
   Graph_tot_weight_total_errors3001->GetZaxis()->SetLabelOffset(0.007);
   Graph_tot_weight_total_errors3001->GetZaxis()->SetLabelSize(0.05);
   Graph_tot_weight_total_errors3001->GetZaxis()->SetTitleSize(0.06);
   Graph_tot_weight_total_errors3001->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_tot_weight_total_errors3001);
   
   grae->Draw("pe2 ");
   
   Double_t tot_weight_data_graph_fx3002[1] = {
   1};
   Double_t tot_weight_data_graph_fy3002[1] = {
   1513};
   Double_t tot_weight_data_graph_felx3002[1] = {
   1};
   Double_t tot_weight_data_graph_fely3002[1] = {
   38.89384};
   Double_t tot_weight_data_graph_fehx3002[1] = {
   1};
   Double_t tot_weight_data_graph_fehy3002[1] = {
   39.90673};
   grae = new TGraphAsymmErrors(1,tot_weight_data_graph_fx3002,tot_weight_data_graph_fy3002,tot_weight_data_graph_felx3002,tot_weight_data_graph_fehx3002,tot_weight_data_graph_fely3002,tot_weight_data_graph_fehy3002);
   grae->SetName("tot_weight_data_graph");
   grae->SetTitle("Graph");
   grae->SetFillStyle(1000);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.1);
   
   TH1F *Graph_tot_weight_data_graph3002 = new TH1F("Graph_tot_weight_data_graph3002","Graph",100,0,2.2);
   Graph_tot_weight_data_graph3002->SetMinimum(1466.226);
   Graph_tot_weight_data_graph3002->SetMaximum(1560.787);
   Graph_tot_weight_data_graph3002->SetDirectory(0);
   Graph_tot_weight_data_graph3002->SetStats(0);
   Graph_tot_weight_data_graph3002->SetLineStyle(0);
   Graph_tot_weight_data_graph3002->SetMarkerStyle(20);
   Graph_tot_weight_data_graph3002->GetXaxis()->SetLabelFont(42);
   Graph_tot_weight_data_graph3002->GetXaxis()->SetLabelOffset(0.007);
   Graph_tot_weight_data_graph3002->GetXaxis()->SetLabelSize(0.05);
   Graph_tot_weight_data_graph3002->GetXaxis()->SetTitleSize(0.06);
   Graph_tot_weight_data_graph3002->GetXaxis()->SetTitleOffset(0.9);
   Graph_tot_weight_data_graph3002->GetXaxis()->SetTitleFont(42);
   Graph_tot_weight_data_graph3002->GetYaxis()->SetLabelFont(42);
   Graph_tot_weight_data_graph3002->GetYaxis()->SetLabelOffset(0.007);
   Graph_tot_weight_data_graph3002->GetYaxis()->SetLabelSize(0.05);
   Graph_tot_weight_data_graph3002->GetYaxis()->SetTitleSize(0.06);
   Graph_tot_weight_data_graph3002->GetYaxis()->SetTitleOffset(1.35);
   Graph_tot_weight_data_graph3002->GetYaxis()->SetTitleFont(42);
   Graph_tot_weight_data_graph3002->GetZaxis()->SetLabelFont(42);
   Graph_tot_weight_data_graph3002->GetZaxis()->SetLabelOffset(0.007);
   Graph_tot_weight_data_graph3002->GetZaxis()->SetLabelSize(0.05);
   Graph_tot_weight_data_graph3002->GetZaxis()->SetTitleSize(0.06);
   Graph_tot_weight_data_graph3002->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_tot_weight_data_graph3002);
   
   grae->Draw("pz ");
   
   TLegend *leg = new TLegend(0.62,0.628,0.9,0.91,NULL,"brNDC");
   leg->SetBorderSize(1);
   leg->SetTextSize(0.036);
   leg->SetLineColor(0);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("tot_weight_data","Data","LPE");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1.1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("tot_weight_prompt_WZ_stack_5","WZ","F");

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
   entry=leg->AddEntry("tot_weight_prompt_ZZ_stack_4","qqZZ","F");

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
   entry=leg->AddEntry("tot_weight_fakes_DY_stack_3","Fakes DY","F");

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
   entry=leg->AddEntry("tot_weight_fakes_TT_stack_2","Fakes TT","F");

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
   entry=leg->AddEntry("tot_weight_total_errors","Total unc.","F");
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
   tot_weight_canvas->cd();
  
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
   
   TH1D *tot_weight_total__3 = new TH1D("tot_weight_total__3","dummy",1,0,2);
   tot_weight_total__3->SetBinContent(1,1);
   tot_weight_total__3->SetMinimum(0.5);
   tot_weight_total__3->SetMaximum(2);
   tot_weight_total__3->SetEntries(15153);

   ci = TColor::GetColor("#00cc00");
   tot_weight_total__3->SetFillColor(ci);

   ci = TColor::GetColor("#6666ff");
   tot_weight_total__3->SetMarkerColor(ci);
   tot_weight_total__3->SetMarkerSize(1.1);
   tot_weight_total__3->GetXaxis()->SetTitle("Yields");
   tot_weight_total__3->GetXaxis()->SetMoreLogLabels();
   tot_weight_total__3->GetXaxis()->SetLabelFont(42);
   tot_weight_total__3->GetXaxis()->SetLabelOffset(0.015);
   tot_weight_total__3->GetXaxis()->SetLabelSize(0.1);
   tot_weight_total__3->GetXaxis()->SetTitleSize(0.14);
   tot_weight_total__3->GetXaxis()->SetTitleFont(42);
   tot_weight_total__3->GetYaxis()->SetTitle("Data/pred.");
   tot_weight_total__3->GetYaxis()->SetDecimals();
   tot_weight_total__3->GetYaxis()->SetNdivisions(505);
   tot_weight_total__3->GetYaxis()->SetLabelFont(42);
   tot_weight_total__3->GetYaxis()->SetLabelOffset(0.01);
   tot_weight_total__3->GetYaxis()->SetLabelSize(0.11);
   tot_weight_total__3->GetYaxis()->SetTitleSize(0.14);
   tot_weight_total__3->GetYaxis()->SetTitleOffset(0.62);
   tot_weight_total__3->GetYaxis()->SetTitleFont(42);
   tot_weight_total__3->GetZaxis()->SetLabelFont(42);
   tot_weight_total__3->GetZaxis()->SetLabelOffset(0.007);
   tot_weight_total__3->GetZaxis()->SetLabelSize(0.05);
   tot_weight_total__3->GetZaxis()->SetTitleSize(0.06);
   tot_weight_total__3->GetZaxis()->SetTitleFont(42);
   tot_weight_total__3->Draw("AXIS");
   
   Double_t tot_weight_total_errors_fx3003[1] = {
   1};
   Double_t tot_weight_total_errors_fy3003[1] = {
   1};
   Double_t tot_weight_total_errors_felx3003[1] = {
   1};
   Double_t tot_weight_total_errors_fely3003[1] = {
   0.01216854};
   Double_t tot_weight_total_errors_fehx3003[1] = {
   1};
   Double_t tot_weight_total_errors_fehy3003[1] = {
   0.01216854};
   grae = new TGraphAsymmErrors(1,tot_weight_total_errors_fx3003,tot_weight_total_errors_fy3003,tot_weight_total_errors_felx3003,tot_weight_total_errors_fehx3003,tot_weight_total_errors_fely3003,tot_weight_total_errors_fehy3003);
   grae->SetName("tot_weight_total_errors");
   grae->SetTitle("Graph");

   ci = TColor::GetColor("#00ffff");
   grae->SetFillColor(ci);

   ci = TColor::GetColor("#00ffff");
   grae->SetMarkerColor(ci);
   grae->Draw("e2");
   
   Double_t tot_weight_total_errors_fx3004[1] = {
   1};
   Double_t tot_weight_total_errors_fy3004[1] = {
   1};
   Double_t tot_weight_total_errors_felx3004[1] = {
   1};
   Double_t tot_weight_total_errors_fely3004[1] = {
   0.01216854};
   Double_t tot_weight_total_errors_fehx3004[1] = {
   1};
   Double_t tot_weight_total_errors_fehy3004[1] = {
   0.01216854};
   grae = new TGraphAsymmErrors(1,tot_weight_total_errors_fx3004,tot_weight_total_errors_fy3004,tot_weight_total_errors_felx3004,tot_weight_total_errors_fehx3004,tot_weight_total_errors_fely3004,tot_weight_total_errors_fehy3004);
   grae->SetName("tot_weight_total_errors");
   grae->SetTitle("Graph");

   ci = TColor::GetColor("#6666ff");
   grae->SetFillColor(ci);

   ci = TColor::GetColor("#6666ff");
   grae->SetMarkerColor(ci);
   grae->Draw("e2 ");
   
   TH1D *tot_weight_total__4 = new TH1D("tot_weight_total__4","dummy",1,0,2);
   tot_weight_total__4->SetBinContent(1,1);
   tot_weight_total__4->SetMinimum(0.5);
   tot_weight_total__4->SetMaximum(2);
   tot_weight_total__4->SetEntries(15153);

   ci = TColor::GetColor("#00cc00");
   tot_weight_total__4->SetFillColor(ci);

   ci = TColor::GetColor("#6666ff");
   tot_weight_total__4->SetMarkerColor(ci);
   tot_weight_total__4->SetMarkerSize(1.1);
   tot_weight_total__4->GetXaxis()->SetTitle("Yields");
   tot_weight_total__4->GetXaxis()->SetMoreLogLabels();
   tot_weight_total__4->GetXaxis()->SetLabelFont(42);
   tot_weight_total__4->GetXaxis()->SetLabelOffset(0.015);
   tot_weight_total__4->GetXaxis()->SetLabelSize(0.1);
   tot_weight_total__4->GetXaxis()->SetTitleSize(0.14);
   tot_weight_total__4->GetXaxis()->SetTitleFont(42);
   tot_weight_total__4->GetYaxis()->SetTitle("Data/pred.");
   tot_weight_total__4->GetYaxis()->SetDecimals();
   tot_weight_total__4->GetYaxis()->SetNdivisions(505);
   tot_weight_total__4->GetYaxis()->SetLabelFont(42);
   tot_weight_total__4->GetYaxis()->SetLabelOffset(0.01);
   tot_weight_total__4->GetYaxis()->SetLabelSize(0.11);
   tot_weight_total__4->GetYaxis()->SetTitleSize(0.14);
   tot_weight_total__4->GetYaxis()->SetTitleOffset(0.62);
   tot_weight_total__4->GetYaxis()->SetTitleFont(42);
   tot_weight_total__4->GetZaxis()->SetLabelFont(42);
   tot_weight_total__4->GetZaxis()->SetLabelOffset(0.007);
   tot_weight_total__4->GetZaxis()->SetLabelSize(0.05);
   tot_weight_total__4->GetZaxis()->SetTitleSize(0.06);
   tot_weight_total__4->GetZaxis()->SetTitleFont(42);
   tot_weight_total__4->Draw("AXIS SAME");
   TLine *line = new TLine(0,1,2,1);
   line->SetLineColor(58);
   line->SetLineWidth(2);
   line->Draw();
   
   Double_t data_div_fx3005[1] = {
   1};
   Double_t data_div_fy3005[1] = {
   1.011401};
   Double_t data_div_felx3005[1] = {
   1};
   Double_t data_div_fely3005[1] = {
   0.02599952};
   Double_t data_div_fehx3005[1] = {
   1};
   Double_t data_div_fehy3005[1] = {
   0.02667661};
   grae = new TGraphAsymmErrors(1,data_div_fx3005,data_div_fy3005,data_div_felx3005,data_div_fehx3005,data_div_fely3005,data_div_fehy3005);
   grae->SetName("data_div");
   grae->SetTitle("Graph");
   grae->SetFillStyle(1000);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.1);
   
   TH1F *Graph_tot_weight_data_graph3005 = new TH1F("Graph_tot_weight_data_graph3005","Graph",100,0,2.2);
   Graph_tot_weight_data_graph3005->SetMinimum(1466.226);
   Graph_tot_weight_data_graph3005->SetMaximum(1560.787);
   Graph_tot_weight_data_graph3005->SetDirectory(0);
   Graph_tot_weight_data_graph3005->SetStats(0);
   Graph_tot_weight_data_graph3005->SetLineStyle(0);
   Graph_tot_weight_data_graph3005->SetMarkerStyle(20);
   Graph_tot_weight_data_graph3005->GetXaxis()->SetLabelFont(42);
   Graph_tot_weight_data_graph3005->GetXaxis()->SetLabelOffset(0.007);
   Graph_tot_weight_data_graph3005->GetXaxis()->SetLabelSize(0.05);
   Graph_tot_weight_data_graph3005->GetXaxis()->SetTitleSize(0.06);
   Graph_tot_weight_data_graph3005->GetXaxis()->SetTitleOffset(0.9);
   Graph_tot_weight_data_graph3005->GetXaxis()->SetTitleFont(42);
   Graph_tot_weight_data_graph3005->GetYaxis()->SetLabelFont(42);
   Graph_tot_weight_data_graph3005->GetYaxis()->SetLabelOffset(0.007);
   Graph_tot_weight_data_graph3005->GetYaxis()->SetLabelSize(0.05);
   Graph_tot_weight_data_graph3005->GetYaxis()->SetTitleSize(0.06);
   Graph_tot_weight_data_graph3005->GetYaxis()->SetTitleOffset(1.35);
   Graph_tot_weight_data_graph3005->GetYaxis()->SetTitleFont(42);
   Graph_tot_weight_data_graph3005->GetZaxis()->SetLabelFont(42);
   Graph_tot_weight_data_graph3005->GetZaxis()->SetLabelOffset(0.007);
   Graph_tot_weight_data_graph3005->GetZaxis()->SetLabelSize(0.05);
   Graph_tot_weight_data_graph3005->GetZaxis()->SetTitleSize(0.06);
   Graph_tot_weight_data_graph3005->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_tot_weight_data_graph3005);
   
   grae->Draw("pz ");
   
   leg = new TLegend(0,0,0,0,NULL,"brNDC");
   leg->SetBorderSize(1);
   leg->SetTextSize(0.084);
   leg->SetLineColor(0);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   entry=leg->AddEntry("tot_weight_total_errors","stat. unc.","F");
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
   entry=leg->AddEntry("tot_weight_total_errors","total unc.","F");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   leg->Draw();
   pad2->Modified();
   tot_weight_canvas->cd();
   tot_weight_canvas->Modified();
   tot_weight_canvas->cd();
   tot_weight_canvas->SetSelected(tot_weight_canvas);
}
