void charge3l()
{
//=========Macro generated from canvas: charge3l_canvas/charge3l
//=========  (Fri Nov 18 13:13:54 2022) by ROOT version 6.12/07
   TCanvas *charge3l_canvas = new TCanvas("charge3l_canvas", "charge3l",0,0,600,750);
   gStyle->SetOptFit(1);
   gStyle->SetOptStat(0);
   gStyle->SetOptTitle(0);
   charge3l_canvas->SetHighLightColor(2);
   charge3l_canvas->Range(0,0,1,1);
   charge3l_canvas->SetFillColor(0);
   charge3l_canvas->SetBorderMode(0);
   charge3l_canvas->SetBorderSize(2);
   charge3l_canvas->SetTickx(1);
   charge3l_canvas->SetTicky(1);
   charge3l_canvas->SetLeftMargin(0.18);
   charge3l_canvas->SetRightMargin(0.04);
   charge3l_canvas->SetBottomMargin(0.13);
   charge3l_canvas->SetFrameFillStyle(0);
   charge3l_canvas->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: pad1
   TPad *pad1 = new TPad("pad1", "pad1",0,0.3,1,1);
   pad1->Draw();
   pad1->cd();
   pad1->Range(-1.461538,-122.6184,1.102564,4782.118);
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
   
   TH1D *charge3l_total__145 = new TH1D("charge3l_total__145","dummy",1,-1,1);
   charge3l_total__145->SetBinContent(1,1495.945);
   charge3l_total__145->SetBinError(1,18.20347);
   charge3l_total__145->SetMinimum(0);
   charge3l_total__145->SetMaximum(4487.834);
   charge3l_total__145->SetEntries(15152);
   charge3l_total__145->SetDirectory(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#00cc00");
   charge3l_total__145->SetFillColor(ci);
   charge3l_total__145->SetMarkerStyle(20);
   charge3l_total__145->SetMarkerSize(1.1);
   charge3l_total__145->GetXaxis()->SetTitle("charge");
   charge3l_total__145->GetXaxis()->SetMoreLogLabels();
   charge3l_total__145->GetXaxis()->SetLabelFont(42);
   charge3l_total__145->GetXaxis()->SetLabelOffset(999);
   charge3l_total__145->GetXaxis()->SetLabelSize(0.05);
   charge3l_total__145->GetXaxis()->SetTitleSize(0.05);
   charge3l_total__145->GetXaxis()->SetTitleOffset(999);
   charge3l_total__145->GetXaxis()->SetTitleFont(42);
   charge3l_total__145->GetYaxis()->SetTitle("Events");
   charge3l_total__145->GetYaxis()->SetLabelFont(42);
   charge3l_total__145->GetYaxis()->SetLabelOffset(0.007);
   charge3l_total__145->GetYaxis()->SetLabelSize(0.05);
   charge3l_total__145->GetYaxis()->SetTitleSize(0.06);
   charge3l_total__145->GetYaxis()->SetTitleOffset(1.48);
   charge3l_total__145->GetYaxis()->SetTitleFont(42);
   charge3l_total__145->GetZaxis()->SetLabelFont(42);
   charge3l_total__145->GetZaxis()->SetLabelOffset(0.007);
   charge3l_total__145->GetZaxis()->SetLabelSize(0.05);
   charge3l_total__145->GetZaxis()->SetTitleSize(0.06);
   charge3l_total__145->GetZaxis()->SetTitleFont(42);
   charge3l_total__145->Draw("HIST");
   
   THStack *charge3l_stack = new THStack();
   charge3l_stack->SetName("charge3l_stack");
   charge3l_stack->SetTitle("charge3l");
   
   TH1F *charge3l_stack_stack_37 = new TH1F("charge3l_stack_stack_37","charge3l",1,-1,1);
   charge3l_stack_stack_37->SetMinimum(0);
   charge3l_stack_stack_37->SetMaximum(1570.742);
   charge3l_stack_stack_37->SetDirectory(0);
   charge3l_stack_stack_37->SetStats(0);
   charge3l_stack_stack_37->SetLineStyle(0);
   charge3l_stack_stack_37->SetMarkerStyle(20);
   charge3l_stack_stack_37->GetXaxis()->SetLabelFont(42);
   charge3l_stack_stack_37->GetXaxis()->SetLabelOffset(0.007);
   charge3l_stack_stack_37->GetXaxis()->SetLabelSize(0.05);
   charge3l_stack_stack_37->GetXaxis()->SetTitleSize(0.06);
   charge3l_stack_stack_37->GetXaxis()->SetTitleOffset(0.9);
   charge3l_stack_stack_37->GetXaxis()->SetTitleFont(42);
   charge3l_stack_stack_37->GetYaxis()->SetLabelFont(42);
   charge3l_stack_stack_37->GetYaxis()->SetLabelOffset(0.007);
   charge3l_stack_stack_37->GetYaxis()->SetLabelSize(0.05);
   charge3l_stack_stack_37->GetYaxis()->SetTitleSize(0.06);
   charge3l_stack_stack_37->GetYaxis()->SetTitleOffset(1.35);
   charge3l_stack_stack_37->GetYaxis()->SetTitleFont(42);
   charge3l_stack_stack_37->GetZaxis()->SetLabelFont(42);
   charge3l_stack_stack_37->GetZaxis()->SetLabelOffset(0.007);
   charge3l_stack_stack_37->GetZaxis()->SetLabelSize(0.05);
   charge3l_stack_stack_37->GetZaxis()->SetTitleSize(0.06);
   charge3l_stack_stack_37->GetZaxis()->SetTitleFont(42);
   charge3l_stack->SetHistogram(charge3l_stack_stack_37);
   
   
   TH1D *charge3l_fakes_VV_stack_1 = new TH1D("charge3l_fakes_VV_stack_1","dummy",1,-1,1);
   charge3l_fakes_VV_stack_1->SetBinContent(1,0.6803536);
   charge3l_fakes_VV_stack_1->SetBinError(1,0.2571495);
   charge3l_fakes_VV_stack_1->SetEntries(11);

   ci = TColor::GetColor("#2e3294");
   charge3l_fakes_VV_stack_1->SetFillColor(ci);
   charge3l_fakes_VV_stack_1->SetMarkerStyle(0);
   charge3l_fakes_VV_stack_1->SetMarkerSize(1.1);
   charge3l_fakes_VV_stack_1->GetXaxis()->SetTitle("charge");
   charge3l_fakes_VV_stack_1->GetXaxis()->SetMoreLogLabels();
   charge3l_fakes_VV_stack_1->GetXaxis()->SetLabelFont(42);
   charge3l_fakes_VV_stack_1->GetXaxis()->SetLabelOffset(0.007);
   charge3l_fakes_VV_stack_1->GetXaxis()->SetLabelSize(0.05);
   charge3l_fakes_VV_stack_1->GetXaxis()->SetTitleSize(0.06);
   charge3l_fakes_VV_stack_1->GetXaxis()->SetTitleOffset(0.9);
   charge3l_fakes_VV_stack_1->GetXaxis()->SetTitleFont(42);
   charge3l_fakes_VV_stack_1->GetYaxis()->SetTitle("Events");
   charge3l_fakes_VV_stack_1->GetYaxis()->SetLabelFont(42);
   charge3l_fakes_VV_stack_1->GetYaxis()->SetLabelOffset(0.007);
   charge3l_fakes_VV_stack_1->GetYaxis()->SetLabelSize(0.05);
   charge3l_fakes_VV_stack_1->GetYaxis()->SetTitleSize(0.06);
   charge3l_fakes_VV_stack_1->GetYaxis()->SetTitleOffset(1.35);
   charge3l_fakes_VV_stack_1->GetYaxis()->SetTitleFont(42);
   charge3l_fakes_VV_stack_1->GetZaxis()->SetLabelFont(42);
   charge3l_fakes_VV_stack_1->GetZaxis()->SetLabelOffset(0.007);
   charge3l_fakes_VV_stack_1->GetZaxis()->SetLabelSize(0.05);
   charge3l_fakes_VV_stack_1->GetZaxis()->SetTitleSize(0.06);
   charge3l_fakes_VV_stack_1->GetZaxis()->SetTitleFont(42);
   charge3l_stack->Add(charge3l_fakes_VV_stack_1,"");
   
   TH1D *charge3l_fakes_TT_stack_2 = new TH1D("charge3l_fakes_TT_stack_2","dummy",1,-1,1);
   charge3l_fakes_TT_stack_2->SetBinContent(1,55.04433);
   charge3l_fakes_TT_stack_2->SetBinError(1,1.933956);
   charge3l_fakes_TT_stack_2->SetEntries(841);

   ci = TColor::GetColor("#666666");
   charge3l_fakes_TT_stack_2->SetFillColor(ci);
   charge3l_fakes_TT_stack_2->SetMarkerStyle(0);
   charge3l_fakes_TT_stack_2->SetMarkerSize(1.1);
   charge3l_fakes_TT_stack_2->GetXaxis()->SetTitle("charge");
   charge3l_fakes_TT_stack_2->GetXaxis()->SetMoreLogLabels();
   charge3l_fakes_TT_stack_2->GetXaxis()->SetLabelFont(42);
   charge3l_fakes_TT_stack_2->GetXaxis()->SetLabelOffset(0.007);
   charge3l_fakes_TT_stack_2->GetXaxis()->SetLabelSize(0.05);
   charge3l_fakes_TT_stack_2->GetXaxis()->SetTitleSize(0.06);
   charge3l_fakes_TT_stack_2->GetXaxis()->SetTitleOffset(0.9);
   charge3l_fakes_TT_stack_2->GetXaxis()->SetTitleFont(42);
   charge3l_fakes_TT_stack_2->GetYaxis()->SetTitle("Events");
   charge3l_fakes_TT_stack_2->GetYaxis()->SetLabelFont(42);
   charge3l_fakes_TT_stack_2->GetYaxis()->SetLabelOffset(0.007);
   charge3l_fakes_TT_stack_2->GetYaxis()->SetLabelSize(0.05);
   charge3l_fakes_TT_stack_2->GetYaxis()->SetTitleSize(0.06);
   charge3l_fakes_TT_stack_2->GetYaxis()->SetTitleOffset(1.35);
   charge3l_fakes_TT_stack_2->GetYaxis()->SetTitleFont(42);
   charge3l_fakes_TT_stack_2->GetZaxis()->SetLabelFont(42);
   charge3l_fakes_TT_stack_2->GetZaxis()->SetLabelOffset(0.007);
   charge3l_fakes_TT_stack_2->GetZaxis()->SetLabelSize(0.05);
   charge3l_fakes_TT_stack_2->GetZaxis()->SetTitleSize(0.06);
   charge3l_fakes_TT_stack_2->GetZaxis()->SetTitleFont(42);
   charge3l_stack->Add(charge3l_fakes_TT_stack_2,"");
   
   TH1D *charge3l_fakes_DY_stack_3 = new TH1D("charge3l_fakes_DY_stack_3","dummy",1,-1,1);
   charge3l_fakes_DY_stack_3->SetBinContent(1,116.9275);
   charge3l_fakes_DY_stack_3->SetBinError(1,14.17954);
   charge3l_fakes_DY_stack_3->SetEntries(72);

   ci = TColor::GetColor("#cccccc");
   charge3l_fakes_DY_stack_3->SetFillColor(ci);
   charge3l_fakes_DY_stack_3->SetMarkerStyle(0);
   charge3l_fakes_DY_stack_3->SetMarkerSize(1.1);
   charge3l_fakes_DY_stack_3->GetXaxis()->SetTitle("charge");
   charge3l_fakes_DY_stack_3->GetXaxis()->SetMoreLogLabels();
   charge3l_fakes_DY_stack_3->GetXaxis()->SetLabelFont(42);
   charge3l_fakes_DY_stack_3->GetXaxis()->SetLabelOffset(0.007);
   charge3l_fakes_DY_stack_3->GetXaxis()->SetLabelSize(0.05);
   charge3l_fakes_DY_stack_3->GetXaxis()->SetTitleSize(0.06);
   charge3l_fakes_DY_stack_3->GetXaxis()->SetTitleOffset(0.9);
   charge3l_fakes_DY_stack_3->GetXaxis()->SetTitleFont(42);
   charge3l_fakes_DY_stack_3->GetYaxis()->SetTitle("Events");
   charge3l_fakes_DY_stack_3->GetYaxis()->SetLabelFont(42);
   charge3l_fakes_DY_stack_3->GetYaxis()->SetLabelOffset(0.007);
   charge3l_fakes_DY_stack_3->GetYaxis()->SetLabelSize(0.05);
   charge3l_fakes_DY_stack_3->GetYaxis()->SetTitleSize(0.06);
   charge3l_fakes_DY_stack_3->GetYaxis()->SetTitleOffset(1.35);
   charge3l_fakes_DY_stack_3->GetYaxis()->SetTitleFont(42);
   charge3l_fakes_DY_stack_3->GetZaxis()->SetLabelFont(42);
   charge3l_fakes_DY_stack_3->GetZaxis()->SetLabelOffset(0.007);
   charge3l_fakes_DY_stack_3->GetZaxis()->SetLabelSize(0.05);
   charge3l_fakes_DY_stack_3->GetZaxis()->SetTitleSize(0.06);
   charge3l_fakes_DY_stack_3->GetZaxis()->SetTitleFont(42);
   charge3l_stack->Add(charge3l_fakes_DY_stack_3,"");
   
   TH1D *charge3l_prompt_ZZ_stack_4 = new TH1D("charge3l_prompt_ZZ_stack_4","dummy",1,-1,1);
   charge3l_prompt_ZZ_stack_4->SetBinContent(1,73.21068);
   charge3l_prompt_ZZ_stack_4->SetBinError(1,3.665118);
   charge3l_prompt_ZZ_stack_4->SetEntries(403);

   ci = TColor::GetColor("#00cc00");
   charge3l_prompt_ZZ_stack_4->SetFillColor(ci);
   charge3l_prompt_ZZ_stack_4->SetMarkerStyle(0);
   charge3l_prompt_ZZ_stack_4->SetMarkerSize(1.1);
   charge3l_prompt_ZZ_stack_4->GetXaxis()->SetTitle("charge");
   charge3l_prompt_ZZ_stack_4->GetXaxis()->SetMoreLogLabels();
   charge3l_prompt_ZZ_stack_4->GetXaxis()->SetLabelFont(42);
   charge3l_prompt_ZZ_stack_4->GetXaxis()->SetLabelOffset(0.007);
   charge3l_prompt_ZZ_stack_4->GetXaxis()->SetLabelSize(0.05);
   charge3l_prompt_ZZ_stack_4->GetXaxis()->SetTitleSize(0.06);
   charge3l_prompt_ZZ_stack_4->GetXaxis()->SetTitleOffset(0.9);
   charge3l_prompt_ZZ_stack_4->GetXaxis()->SetTitleFont(42);
   charge3l_prompt_ZZ_stack_4->GetYaxis()->SetTitle("Events");
   charge3l_prompt_ZZ_stack_4->GetYaxis()->SetLabelFont(42);
   charge3l_prompt_ZZ_stack_4->GetYaxis()->SetLabelOffset(0.007);
   charge3l_prompt_ZZ_stack_4->GetYaxis()->SetLabelSize(0.05);
   charge3l_prompt_ZZ_stack_4->GetYaxis()->SetTitleSize(0.06);
   charge3l_prompt_ZZ_stack_4->GetYaxis()->SetTitleOffset(1.35);
   charge3l_prompt_ZZ_stack_4->GetYaxis()->SetTitleFont(42);
   charge3l_prompt_ZZ_stack_4->GetZaxis()->SetLabelFont(42);
   charge3l_prompt_ZZ_stack_4->GetZaxis()->SetLabelOffset(0.007);
   charge3l_prompt_ZZ_stack_4->GetZaxis()->SetLabelSize(0.05);
   charge3l_prompt_ZZ_stack_4->GetZaxis()->SetTitleSize(0.06);
   charge3l_prompt_ZZ_stack_4->GetZaxis()->SetTitleFont(42);
   charge3l_stack->Add(charge3l_prompt_ZZ_stack_4,"");
   
   TH1D *charge3l_prompt_WZ_stack_5 = new TH1D("charge3l_prompt_WZ_stack_5","dummy",1,-1,1);
   charge3l_prompt_WZ_stack_5->SetBinContent(1,1250.082);
   charge3l_prompt_WZ_stack_5->SetBinError(1,10.63331);
   charge3l_prompt_WZ_stack_5->SetEntries(13825);

   ci = TColor::GetColor("#ffcc00");
   charge3l_prompt_WZ_stack_5->SetFillColor(ci);
   charge3l_prompt_WZ_stack_5->SetMarkerStyle(0);
   charge3l_prompt_WZ_stack_5->SetMarkerSize(1.1);
   charge3l_prompt_WZ_stack_5->GetXaxis()->SetTitle("charge");
   charge3l_prompt_WZ_stack_5->GetXaxis()->SetMoreLogLabels();
   charge3l_prompt_WZ_stack_5->GetXaxis()->SetLabelFont(42);
   charge3l_prompt_WZ_stack_5->GetXaxis()->SetLabelOffset(0.007);
   charge3l_prompt_WZ_stack_5->GetXaxis()->SetLabelSize(0.05);
   charge3l_prompt_WZ_stack_5->GetXaxis()->SetTitleSize(0.06);
   charge3l_prompt_WZ_stack_5->GetXaxis()->SetTitleOffset(0.9);
   charge3l_prompt_WZ_stack_5->GetXaxis()->SetTitleFont(42);
   charge3l_prompt_WZ_stack_5->GetYaxis()->SetTitle("Events");
   charge3l_prompt_WZ_stack_5->GetYaxis()->SetLabelFont(42);
   charge3l_prompt_WZ_stack_5->GetYaxis()->SetLabelOffset(0.007);
   charge3l_prompt_WZ_stack_5->GetYaxis()->SetLabelSize(0.05);
   charge3l_prompt_WZ_stack_5->GetYaxis()->SetTitleSize(0.06);
   charge3l_prompt_WZ_stack_5->GetYaxis()->SetTitleOffset(1.35);
   charge3l_prompt_WZ_stack_5->GetYaxis()->SetTitleFont(42);
   charge3l_prompt_WZ_stack_5->GetZaxis()->SetLabelFont(42);
   charge3l_prompt_WZ_stack_5->GetZaxis()->SetLabelOffset(0.007);
   charge3l_prompt_WZ_stack_5->GetZaxis()->SetLabelSize(0.05);
   charge3l_prompt_WZ_stack_5->GetZaxis()->SetTitleSize(0.06);
   charge3l_prompt_WZ_stack_5->GetZaxis()->SetTitleFont(42);
   charge3l_stack->Add(charge3l_prompt_WZ_stack_5,"");
   charge3l_stack->Draw("same hist");
   
   TH1D *charge3l_total__146 = new TH1D("charge3l_total__146","dummy",1,-1,1);
   charge3l_total__146->SetBinContent(1,1495.945);
   charge3l_total__146->SetBinError(1,18.20347);
   charge3l_total__146->SetMinimum(0);
   charge3l_total__146->SetMaximum(4487.834);
   charge3l_total__146->SetEntries(15152);
   charge3l_total__146->SetDirectory(0);

   ci = TColor::GetColor("#00cc00");
   charge3l_total__146->SetFillColor(ci);
   charge3l_total__146->SetMarkerStyle(20);
   charge3l_total__146->SetMarkerSize(1.1);
   charge3l_total__146->GetXaxis()->SetTitle("charge");
   charge3l_total__146->GetXaxis()->SetMoreLogLabels();
   charge3l_total__146->GetXaxis()->SetLabelFont(42);
   charge3l_total__146->GetXaxis()->SetLabelOffset(999);
   charge3l_total__146->GetXaxis()->SetLabelSize(0.05);
   charge3l_total__146->GetXaxis()->SetTitleSize(0.05);
   charge3l_total__146->GetXaxis()->SetTitleOffset(999);
   charge3l_total__146->GetXaxis()->SetTitleFont(42);
   charge3l_total__146->GetYaxis()->SetTitle("Events");
   charge3l_total__146->GetYaxis()->SetLabelFont(42);
   charge3l_total__146->GetYaxis()->SetLabelOffset(0.007);
   charge3l_total__146->GetYaxis()->SetLabelSize(0.05);
   charge3l_total__146->GetYaxis()->SetTitleSize(0.06);
   charge3l_total__146->GetYaxis()->SetTitleOffset(1.48);
   charge3l_total__146->GetYaxis()->SetTitleFont(42);
   charge3l_total__146->GetZaxis()->SetLabelFont(42);
   charge3l_total__146->GetZaxis()->SetLabelOffset(0.007);
   charge3l_total__146->GetZaxis()->SetLabelSize(0.05);
   charge3l_total__146->GetZaxis()->SetTitleSize(0.06);
   charge3l_total__146->GetZaxis()->SetTitleFont(42);
   charge3l_total__146->Draw("AXIS SAME");
   
   Double_t charge3l_total_errors_fx3181[1] = {
   0};
   Double_t charge3l_total_errors_fy3181[1] = {
   1495.945};
   Double_t charge3l_total_errors_felx3181[1] = {
   1};
   Double_t charge3l_total_errors_fely3181[1] = {
   18.20347};
   Double_t charge3l_total_errors_fehx3181[1] = {
   1};
   Double_t charge3l_total_errors_fehy3181[1] = {
   18.20347};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(1,charge3l_total_errors_fx3181,charge3l_total_errors_fy3181,charge3l_total_errors_felx3181,charge3l_total_errors_fehx3181,charge3l_total_errors_fely3181,charge3l_total_errors_fehy3181);
   grae->SetName("charge3l_total_errors");
   grae->SetTitle("Graph");
   grae->SetFillColor(1);
   grae->SetFillStyle(3013);
   grae->SetMarkerStyle(0);
   
   TH1F *Graph_charge3l_total_errors3181 = new TH1F("Graph_charge3l_total_errors3181","Graph",100,-1.2,1.2);
   Graph_charge3l_total_errors3181->SetMinimum(1474.1);
   Graph_charge3l_total_errors3181->SetMaximum(1517.789);
   Graph_charge3l_total_errors3181->SetDirectory(0);
   Graph_charge3l_total_errors3181->SetStats(0);
   Graph_charge3l_total_errors3181->SetLineStyle(0);
   Graph_charge3l_total_errors3181->SetMarkerStyle(20);
   Graph_charge3l_total_errors3181->GetXaxis()->SetLabelFont(42);
   Graph_charge3l_total_errors3181->GetXaxis()->SetLabelOffset(0.007);
   Graph_charge3l_total_errors3181->GetXaxis()->SetLabelSize(0.05);
   Graph_charge3l_total_errors3181->GetXaxis()->SetTitleSize(0.06);
   Graph_charge3l_total_errors3181->GetXaxis()->SetTitleOffset(0.9);
   Graph_charge3l_total_errors3181->GetXaxis()->SetTitleFont(42);
   Graph_charge3l_total_errors3181->GetYaxis()->SetLabelFont(42);
   Graph_charge3l_total_errors3181->GetYaxis()->SetLabelOffset(0.007);
   Graph_charge3l_total_errors3181->GetYaxis()->SetLabelSize(0.05);
   Graph_charge3l_total_errors3181->GetYaxis()->SetTitleSize(0.06);
   Graph_charge3l_total_errors3181->GetYaxis()->SetTitleOffset(1.35);
   Graph_charge3l_total_errors3181->GetYaxis()->SetTitleFont(42);
   Graph_charge3l_total_errors3181->GetZaxis()->SetLabelFont(42);
   Graph_charge3l_total_errors3181->GetZaxis()->SetLabelOffset(0.007);
   Graph_charge3l_total_errors3181->GetZaxis()->SetLabelSize(0.05);
   Graph_charge3l_total_errors3181->GetZaxis()->SetTitleSize(0.06);
   Graph_charge3l_total_errors3181->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_charge3l_total_errors3181);
   
   grae->Draw("pe2 ");
   
   Double_t charge3l_data_graph_fx3182[1] = {
   0};
   Double_t charge3l_data_graph_fy3182[1] = {
   1513};
   Double_t charge3l_data_graph_felx3182[1] = {
   1};
   Double_t charge3l_data_graph_fely3182[1] = {
   38.89384};
   Double_t charge3l_data_graph_fehx3182[1] = {
   1};
   Double_t charge3l_data_graph_fehy3182[1] = {
   39.90673};
   grae = new TGraphAsymmErrors(1,charge3l_data_graph_fx3182,charge3l_data_graph_fy3182,charge3l_data_graph_felx3182,charge3l_data_graph_fehx3182,charge3l_data_graph_fely3182,charge3l_data_graph_fehy3182);
   grae->SetName("charge3l_data_graph");
   grae->SetTitle("Graph");
   grae->SetFillStyle(1000);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.1);
   
   TH1F *Graph_charge3l_data_graph3182 = new TH1F("Graph_charge3l_data_graph3182","Graph",100,-1.2,1.2);
   Graph_charge3l_data_graph3182->SetMinimum(1466.226);
   Graph_charge3l_data_graph3182->SetMaximum(1560.787);
   Graph_charge3l_data_graph3182->SetDirectory(0);
   Graph_charge3l_data_graph3182->SetStats(0);
   Graph_charge3l_data_graph3182->SetLineStyle(0);
   Graph_charge3l_data_graph3182->SetMarkerStyle(20);
   Graph_charge3l_data_graph3182->GetXaxis()->SetLabelFont(42);
   Graph_charge3l_data_graph3182->GetXaxis()->SetLabelOffset(0.007);
   Graph_charge3l_data_graph3182->GetXaxis()->SetLabelSize(0.05);
   Graph_charge3l_data_graph3182->GetXaxis()->SetTitleSize(0.06);
   Graph_charge3l_data_graph3182->GetXaxis()->SetTitleOffset(0.9);
   Graph_charge3l_data_graph3182->GetXaxis()->SetTitleFont(42);
   Graph_charge3l_data_graph3182->GetYaxis()->SetLabelFont(42);
   Graph_charge3l_data_graph3182->GetYaxis()->SetLabelOffset(0.007);
   Graph_charge3l_data_graph3182->GetYaxis()->SetLabelSize(0.05);
   Graph_charge3l_data_graph3182->GetYaxis()->SetTitleSize(0.06);
   Graph_charge3l_data_graph3182->GetYaxis()->SetTitleOffset(1.35);
   Graph_charge3l_data_graph3182->GetYaxis()->SetTitleFont(42);
   Graph_charge3l_data_graph3182->GetZaxis()->SetLabelFont(42);
   Graph_charge3l_data_graph3182->GetZaxis()->SetLabelOffset(0.007);
   Graph_charge3l_data_graph3182->GetZaxis()->SetLabelSize(0.05);
   Graph_charge3l_data_graph3182->GetZaxis()->SetTitleSize(0.06);
   Graph_charge3l_data_graph3182->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_charge3l_data_graph3182);
   
   grae->Draw("pz ");
   
   TLegend *leg = new TLegend(0.2,0.628,0.48,0.91,NULL,"brNDC");
   leg->SetBorderSize(1);
   leg->SetTextSize(0.036);
   leg->SetLineColor(0);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("charge3l_data","Data","LPE");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1.1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("charge3l_prompt_WZ_stack_5","WZ","F");

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
   entry=leg->AddEntry("charge3l_prompt_ZZ_stack_4","qqZZ","F");

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
   entry=leg->AddEntry("charge3l_fakes_DY_stack_3","Fakes DY","F");

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
   entry=leg->AddEntry("charge3l_fakes_TT_stack_2","Fakes TT","F");

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
   entry=leg->AddEntry("charge3l_total_errors","Total unc.","F");
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
   charge3l_canvas->cd();
  
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
   
   TH1D *charge3l_total__147 = new TH1D("charge3l_total__147","dummy",1,-1,1);
   charge3l_total__147->SetBinContent(1,1);
   charge3l_total__147->SetMinimum(0.5);
   charge3l_total__147->SetMaximum(2);
   charge3l_total__147->SetEntries(15153);

   ci = TColor::GetColor("#00cc00");
   charge3l_total__147->SetFillColor(ci);

   ci = TColor::GetColor("#6666ff");
   charge3l_total__147->SetMarkerColor(ci);
   charge3l_total__147->SetMarkerSize(1.1);
   charge3l_total__147->GetXaxis()->SetTitle("charge");
   charge3l_total__147->GetXaxis()->SetMoreLogLabels();
   charge3l_total__147->GetXaxis()->SetLabelFont(42);
   charge3l_total__147->GetXaxis()->SetLabelOffset(0.015);
   charge3l_total__147->GetXaxis()->SetLabelSize(0.1);
   charge3l_total__147->GetXaxis()->SetTitleSize(0.14);
   charge3l_total__147->GetXaxis()->SetTitleFont(42);
   charge3l_total__147->GetYaxis()->SetTitle("Data/pred.");
   charge3l_total__147->GetYaxis()->SetDecimals();
   charge3l_total__147->GetYaxis()->SetNdivisions(505);
   charge3l_total__147->GetYaxis()->SetLabelFont(42);
   charge3l_total__147->GetYaxis()->SetLabelOffset(0.01);
   charge3l_total__147->GetYaxis()->SetLabelSize(0.11);
   charge3l_total__147->GetYaxis()->SetTitleSize(0.14);
   charge3l_total__147->GetYaxis()->SetTitleOffset(0.62);
   charge3l_total__147->GetYaxis()->SetTitleFont(42);
   charge3l_total__147->GetZaxis()->SetLabelFont(42);
   charge3l_total__147->GetZaxis()->SetLabelOffset(0.007);
   charge3l_total__147->GetZaxis()->SetLabelSize(0.05);
   charge3l_total__147->GetZaxis()->SetTitleSize(0.06);
   charge3l_total__147->GetZaxis()->SetTitleFont(42);
   charge3l_total__147->Draw("AXIS");
   
   Double_t charge3l_total_errors_fx3183[1] = {
   0};
   Double_t charge3l_total_errors_fy3183[1] = {
   1};
   Double_t charge3l_total_errors_felx3183[1] = {
   1};
   Double_t charge3l_total_errors_fely3183[1] = {
   0.01216854};
   Double_t charge3l_total_errors_fehx3183[1] = {
   1};
   Double_t charge3l_total_errors_fehy3183[1] = {
   0.01216854};
   grae = new TGraphAsymmErrors(1,charge3l_total_errors_fx3183,charge3l_total_errors_fy3183,charge3l_total_errors_felx3183,charge3l_total_errors_fehx3183,charge3l_total_errors_fely3183,charge3l_total_errors_fehy3183);
   grae->SetName("charge3l_total_errors");
   grae->SetTitle("Graph");

   ci = TColor::GetColor("#00ffff");
   grae->SetFillColor(ci);

   ci = TColor::GetColor("#00ffff");
   grae->SetMarkerColor(ci);
   grae->Draw("e2");
   
   Double_t charge3l_total_errors_fx3184[1] = {
   0};
   Double_t charge3l_total_errors_fy3184[1] = {
   1};
   Double_t charge3l_total_errors_felx3184[1] = {
   1};
   Double_t charge3l_total_errors_fely3184[1] = {
   0.01216854};
   Double_t charge3l_total_errors_fehx3184[1] = {
   1};
   Double_t charge3l_total_errors_fehy3184[1] = {
   0.01216854};
   grae = new TGraphAsymmErrors(1,charge3l_total_errors_fx3184,charge3l_total_errors_fy3184,charge3l_total_errors_felx3184,charge3l_total_errors_fehx3184,charge3l_total_errors_fely3184,charge3l_total_errors_fehy3184);
   grae->SetName("charge3l_total_errors");
   grae->SetTitle("Graph");

   ci = TColor::GetColor("#6666ff");
   grae->SetFillColor(ci);

   ci = TColor::GetColor("#6666ff");
   grae->SetMarkerColor(ci);
   grae->Draw("e2 ");
   
   TH1D *charge3l_total__148 = new TH1D("charge3l_total__148","dummy",1,-1,1);
   charge3l_total__148->SetBinContent(1,1);
   charge3l_total__148->SetMinimum(0.5);
   charge3l_total__148->SetMaximum(2);
   charge3l_total__148->SetEntries(15153);

   ci = TColor::GetColor("#00cc00");
   charge3l_total__148->SetFillColor(ci);

   ci = TColor::GetColor("#6666ff");
   charge3l_total__148->SetMarkerColor(ci);
   charge3l_total__148->SetMarkerSize(1.1);
   charge3l_total__148->GetXaxis()->SetTitle("charge");
   charge3l_total__148->GetXaxis()->SetMoreLogLabels();
   charge3l_total__148->GetXaxis()->SetLabelFont(42);
   charge3l_total__148->GetXaxis()->SetLabelOffset(0.015);
   charge3l_total__148->GetXaxis()->SetLabelSize(0.1);
   charge3l_total__148->GetXaxis()->SetTitleSize(0.14);
   charge3l_total__148->GetXaxis()->SetTitleFont(42);
   charge3l_total__148->GetYaxis()->SetTitle("Data/pred.");
   charge3l_total__148->GetYaxis()->SetDecimals();
   charge3l_total__148->GetYaxis()->SetNdivisions(505);
   charge3l_total__148->GetYaxis()->SetLabelFont(42);
   charge3l_total__148->GetYaxis()->SetLabelOffset(0.01);
   charge3l_total__148->GetYaxis()->SetLabelSize(0.11);
   charge3l_total__148->GetYaxis()->SetTitleSize(0.14);
   charge3l_total__148->GetYaxis()->SetTitleOffset(0.62);
   charge3l_total__148->GetYaxis()->SetTitleFont(42);
   charge3l_total__148->GetZaxis()->SetLabelFont(42);
   charge3l_total__148->GetZaxis()->SetLabelOffset(0.007);
   charge3l_total__148->GetZaxis()->SetLabelSize(0.05);
   charge3l_total__148->GetZaxis()->SetTitleSize(0.06);
   charge3l_total__148->GetZaxis()->SetTitleFont(42);
   charge3l_total__148->Draw("AXIS SAME");
   TLine *line = new TLine(-1,1,1,1);
   line->SetLineColor(58);
   line->SetLineWidth(2);
   line->Draw();
   
   Double_t data_div_fx3185[1] = {
   0};
   Double_t data_div_fy3185[1] = {
   1.011401};
   Double_t data_div_felx3185[1] = {
   1};
   Double_t data_div_fely3185[1] = {
   0.02599952};
   Double_t data_div_fehx3185[1] = {
   1};
   Double_t data_div_fehy3185[1] = {
   0.02667661};
   grae = new TGraphAsymmErrors(1,data_div_fx3185,data_div_fy3185,data_div_felx3185,data_div_fehx3185,data_div_fely3185,data_div_fehy3185);
   grae->SetName("data_div");
   grae->SetTitle("Graph");
   grae->SetFillStyle(1000);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.1);
   
   TH1F *Graph_charge3l_data_graph3185 = new TH1F("Graph_charge3l_data_graph3185","Graph",100,-1.2,1.2);
   Graph_charge3l_data_graph3185->SetMinimum(1466.226);
   Graph_charge3l_data_graph3185->SetMaximum(1560.787);
   Graph_charge3l_data_graph3185->SetDirectory(0);
   Graph_charge3l_data_graph3185->SetStats(0);
   Graph_charge3l_data_graph3185->SetLineStyle(0);
   Graph_charge3l_data_graph3185->SetMarkerStyle(20);
   Graph_charge3l_data_graph3185->GetXaxis()->SetLabelFont(42);
   Graph_charge3l_data_graph3185->GetXaxis()->SetLabelOffset(0.007);
   Graph_charge3l_data_graph3185->GetXaxis()->SetLabelSize(0.05);
   Graph_charge3l_data_graph3185->GetXaxis()->SetTitleSize(0.06);
   Graph_charge3l_data_graph3185->GetXaxis()->SetTitleOffset(0.9);
   Graph_charge3l_data_graph3185->GetXaxis()->SetTitleFont(42);
   Graph_charge3l_data_graph3185->GetYaxis()->SetLabelFont(42);
   Graph_charge3l_data_graph3185->GetYaxis()->SetLabelOffset(0.007);
   Graph_charge3l_data_graph3185->GetYaxis()->SetLabelSize(0.05);
   Graph_charge3l_data_graph3185->GetYaxis()->SetTitleSize(0.06);
   Graph_charge3l_data_graph3185->GetYaxis()->SetTitleOffset(1.35);
   Graph_charge3l_data_graph3185->GetYaxis()->SetTitleFont(42);
   Graph_charge3l_data_graph3185->GetZaxis()->SetLabelFont(42);
   Graph_charge3l_data_graph3185->GetZaxis()->SetLabelOffset(0.007);
   Graph_charge3l_data_graph3185->GetZaxis()->SetLabelSize(0.05);
   Graph_charge3l_data_graph3185->GetZaxis()->SetTitleSize(0.06);
   Graph_charge3l_data_graph3185->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_charge3l_data_graph3185);
   
   grae->Draw("pz ");
   
   leg = new TLegend(0,0,0,0,NULL,"brNDC");
   leg->SetBorderSize(1);
   leg->SetTextSize(0.084);
   leg->SetLineColor(0);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   entry=leg->AddEntry("charge3l_total_errors","stat. unc.","F");
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
   entry=leg->AddEntry("charge3l_total_errors","total unc.","F");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   leg->Draw();
   pad2->Modified();
   charge3l_canvas->cd();
   charge3l_canvas->Modified();
   charge3l_canvas->cd();
   charge3l_canvas->SetSelected(charge3l_canvas);
}
