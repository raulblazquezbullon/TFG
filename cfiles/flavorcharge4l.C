void flavorcharge4l()
{
//=========Macro generated from canvas: flavorcharge4l_canvas/flavorcharge4l
//=========  (Fri Nov 18 13:09:42 2022) by ROOT version 6.12/07
   TCanvas *flavorcharge4l_canvas = new TCanvas("flavorcharge4l_canvas", "flavorcharge4l",0,0,600,750);
   gStyle->SetOptFit(1);
   gStyle->SetOptStat(0);
   gStyle->SetOptTitle(0);
   flavorcharge4l_canvas->SetHighLightColor(2);
   flavorcharge4l_canvas->Range(0,0,1,1);
   flavorcharge4l_canvas->SetFillColor(0);
   flavorcharge4l_canvas->SetBorderMode(0);
   flavorcharge4l_canvas->SetBorderSize(2);
   flavorcharge4l_canvas->SetTickx(1);
   flavorcharge4l_canvas->SetTicky(1);
   flavorcharge4l_canvas->SetLeftMargin(0.18);
   flavorcharge4l_canvas->SetRightMargin(0.04);
   flavorcharge4l_canvas->SetBottomMargin(0.13);
   flavorcharge4l_canvas->SetFrameFillStyle(0);
   flavorcharge4l_canvas->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: pad1
   TPad *pad1 = new TPad("pad1", "pad1",0,0.3,1,1);
   pad1->Draw();
   pad1->cd();
   pad1->Range(-1.192308,-122.6184,2.653846,4782.118);
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
   
   TH1D *flavorcharge4l_total__113 = new TH1D("flavorcharge4l_total__113","dummy",3,-0.5,2.5);
   flavorcharge4l_total__113->SetBinContent(1,1495.945);
   flavorcharge4l_total__113->SetBinError(1,18.20347);
   flavorcharge4l_total__113->SetMinimum(0);
   flavorcharge4l_total__113->SetMaximum(4487.834);
   flavorcharge4l_total__113->SetEntries(15152);
   flavorcharge4l_total__113->SetDirectory(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#00cc00");
   flavorcharge4l_total__113->SetFillColor(ci);
   flavorcharge4l_total__113->SetMarkerStyle(20);
   flavorcharge4l_total__113->SetMarkerSize(1.1);
   flavorcharge4l_total__113->GetXaxis()->SetTitle("flavor");
   flavorcharge4l_total__113->GetXaxis()->SetBinLabel(1,"eeee");
   flavorcharge4l_total__113->GetXaxis()->SetBinLabel(2,"ee#mu#mu");
   flavorcharge4l_total__113->GetXaxis()->SetBinLabel(3,"#mu#mu#mu#mu");
   flavorcharge4l_total__113->GetXaxis()->SetMoreLogLabels();
   flavorcharge4l_total__113->GetXaxis()->SetLabelFont(42);
   flavorcharge4l_total__113->GetXaxis()->SetLabelOffset(999);
   flavorcharge4l_total__113->GetXaxis()->SetLabelSize(0.05);
   flavorcharge4l_total__113->GetXaxis()->SetTitleSize(0.05);
   flavorcharge4l_total__113->GetXaxis()->SetTitleOffset(999);
   flavorcharge4l_total__113->GetXaxis()->SetTitleFont(42);
   flavorcharge4l_total__113->GetYaxis()->SetTitle("Events");
   flavorcharge4l_total__113->GetYaxis()->SetLabelFont(42);
   flavorcharge4l_total__113->GetYaxis()->SetLabelOffset(0.007);
   flavorcharge4l_total__113->GetYaxis()->SetLabelSize(0.05);
   flavorcharge4l_total__113->GetYaxis()->SetTitleSize(0.06);
   flavorcharge4l_total__113->GetYaxis()->SetTitleOffset(1.48);
   flavorcharge4l_total__113->GetYaxis()->SetTitleFont(42);
   flavorcharge4l_total__113->GetZaxis()->SetLabelFont(42);
   flavorcharge4l_total__113->GetZaxis()->SetLabelOffset(0.007);
   flavorcharge4l_total__113->GetZaxis()->SetLabelSize(0.05);
   flavorcharge4l_total__113->GetZaxis()->SetTitleSize(0.06);
   flavorcharge4l_total__113->GetZaxis()->SetTitleFont(42);
   flavorcharge4l_total__113->Draw("HIST");
   
   THStack *flavorcharge4l_stack = new THStack();
   flavorcharge4l_stack->SetName("flavorcharge4l_stack");
   flavorcharge4l_stack->SetTitle("flavorcharge4l");
   
   TH1F *flavorcharge4l_stack_stack_29 = new TH1F("flavorcharge4l_stack_stack_29","flavorcharge4l",3,-0.5,2.5);
   flavorcharge4l_stack_stack_29->SetMinimum(0);
   flavorcharge4l_stack_stack_29->SetMaximum(1570.742);
   flavorcharge4l_stack_stack_29->SetDirectory(0);
   flavorcharge4l_stack_stack_29->SetStats(0);
   flavorcharge4l_stack_stack_29->SetLineStyle(0);
   flavorcharge4l_stack_stack_29->SetMarkerStyle(20);
   flavorcharge4l_stack_stack_29->GetXaxis()->SetLabelFont(42);
   flavorcharge4l_stack_stack_29->GetXaxis()->SetLabelOffset(0.007);
   flavorcharge4l_stack_stack_29->GetXaxis()->SetLabelSize(0.05);
   flavorcharge4l_stack_stack_29->GetXaxis()->SetTitleSize(0.06);
   flavorcharge4l_stack_stack_29->GetXaxis()->SetTitleOffset(0.9);
   flavorcharge4l_stack_stack_29->GetXaxis()->SetTitleFont(42);
   flavorcharge4l_stack_stack_29->GetYaxis()->SetLabelFont(42);
   flavorcharge4l_stack_stack_29->GetYaxis()->SetLabelOffset(0.007);
   flavorcharge4l_stack_stack_29->GetYaxis()->SetLabelSize(0.05);
   flavorcharge4l_stack_stack_29->GetYaxis()->SetTitleSize(0.06);
   flavorcharge4l_stack_stack_29->GetYaxis()->SetTitleOffset(1.35);
   flavorcharge4l_stack_stack_29->GetYaxis()->SetTitleFont(42);
   flavorcharge4l_stack_stack_29->GetZaxis()->SetLabelFont(42);
   flavorcharge4l_stack_stack_29->GetZaxis()->SetLabelOffset(0.007);
   flavorcharge4l_stack_stack_29->GetZaxis()->SetLabelSize(0.05);
   flavorcharge4l_stack_stack_29->GetZaxis()->SetTitleSize(0.06);
   flavorcharge4l_stack_stack_29->GetZaxis()->SetTitleFont(42);
   flavorcharge4l_stack->SetHistogram(flavorcharge4l_stack_stack_29);
   
   
   TH1D *flavorcharge4l_fakes_VV_stack_1 = new TH1D("flavorcharge4l_fakes_VV_stack_1","dummy",3,-0.5,2.5);
   flavorcharge4l_fakes_VV_stack_1->SetBinContent(1,0.6803536);
   flavorcharge4l_fakes_VV_stack_1->SetBinError(1,0.2571495);
   flavorcharge4l_fakes_VV_stack_1->SetEntries(11);

   ci = TColor::GetColor("#2e3294");
   flavorcharge4l_fakes_VV_stack_1->SetFillColor(ci);
   flavorcharge4l_fakes_VV_stack_1->SetMarkerStyle(0);
   flavorcharge4l_fakes_VV_stack_1->SetMarkerSize(1.1);
   flavorcharge4l_fakes_VV_stack_1->GetXaxis()->SetTitle("flavor");
   flavorcharge4l_fakes_VV_stack_1->GetXaxis()->SetMoreLogLabels();
   flavorcharge4l_fakes_VV_stack_1->GetXaxis()->SetLabelFont(42);
   flavorcharge4l_fakes_VV_stack_1->GetXaxis()->SetLabelOffset(0.007);
   flavorcharge4l_fakes_VV_stack_1->GetXaxis()->SetLabelSize(0.05);
   flavorcharge4l_fakes_VV_stack_1->GetXaxis()->SetTitleSize(0.06);
   flavorcharge4l_fakes_VV_stack_1->GetXaxis()->SetTitleOffset(0.9);
   flavorcharge4l_fakes_VV_stack_1->GetXaxis()->SetTitleFont(42);
   flavorcharge4l_fakes_VV_stack_1->GetYaxis()->SetTitle("Events");
   flavorcharge4l_fakes_VV_stack_1->GetYaxis()->SetLabelFont(42);
   flavorcharge4l_fakes_VV_stack_1->GetYaxis()->SetLabelOffset(0.007);
   flavorcharge4l_fakes_VV_stack_1->GetYaxis()->SetLabelSize(0.05);
   flavorcharge4l_fakes_VV_stack_1->GetYaxis()->SetTitleSize(0.06);
   flavorcharge4l_fakes_VV_stack_1->GetYaxis()->SetTitleOffset(1.35);
   flavorcharge4l_fakes_VV_stack_1->GetYaxis()->SetTitleFont(42);
   flavorcharge4l_fakes_VV_stack_1->GetZaxis()->SetLabelFont(42);
   flavorcharge4l_fakes_VV_stack_1->GetZaxis()->SetLabelOffset(0.007);
   flavorcharge4l_fakes_VV_stack_1->GetZaxis()->SetLabelSize(0.05);
   flavorcharge4l_fakes_VV_stack_1->GetZaxis()->SetTitleSize(0.06);
   flavorcharge4l_fakes_VV_stack_1->GetZaxis()->SetTitleFont(42);
   flavorcharge4l_stack->Add(flavorcharge4l_fakes_VV_stack_1,"");
   
   TH1D *flavorcharge4l_fakes_TT_stack_2 = new TH1D("flavorcharge4l_fakes_TT_stack_2","dummy",3,-0.5,2.5);
   flavorcharge4l_fakes_TT_stack_2->SetBinContent(1,55.04433);
   flavorcharge4l_fakes_TT_stack_2->SetBinError(1,1.933956);
   flavorcharge4l_fakes_TT_stack_2->SetEntries(841);

   ci = TColor::GetColor("#666666");
   flavorcharge4l_fakes_TT_stack_2->SetFillColor(ci);
   flavorcharge4l_fakes_TT_stack_2->SetMarkerStyle(0);
   flavorcharge4l_fakes_TT_stack_2->SetMarkerSize(1.1);
   flavorcharge4l_fakes_TT_stack_2->GetXaxis()->SetTitle("flavor");
   flavorcharge4l_fakes_TT_stack_2->GetXaxis()->SetMoreLogLabels();
   flavorcharge4l_fakes_TT_stack_2->GetXaxis()->SetLabelFont(42);
   flavorcharge4l_fakes_TT_stack_2->GetXaxis()->SetLabelOffset(0.007);
   flavorcharge4l_fakes_TT_stack_2->GetXaxis()->SetLabelSize(0.05);
   flavorcharge4l_fakes_TT_stack_2->GetXaxis()->SetTitleSize(0.06);
   flavorcharge4l_fakes_TT_stack_2->GetXaxis()->SetTitleOffset(0.9);
   flavorcharge4l_fakes_TT_stack_2->GetXaxis()->SetTitleFont(42);
   flavorcharge4l_fakes_TT_stack_2->GetYaxis()->SetTitle("Events");
   flavorcharge4l_fakes_TT_stack_2->GetYaxis()->SetLabelFont(42);
   flavorcharge4l_fakes_TT_stack_2->GetYaxis()->SetLabelOffset(0.007);
   flavorcharge4l_fakes_TT_stack_2->GetYaxis()->SetLabelSize(0.05);
   flavorcharge4l_fakes_TT_stack_2->GetYaxis()->SetTitleSize(0.06);
   flavorcharge4l_fakes_TT_stack_2->GetYaxis()->SetTitleOffset(1.35);
   flavorcharge4l_fakes_TT_stack_2->GetYaxis()->SetTitleFont(42);
   flavorcharge4l_fakes_TT_stack_2->GetZaxis()->SetLabelFont(42);
   flavorcharge4l_fakes_TT_stack_2->GetZaxis()->SetLabelOffset(0.007);
   flavorcharge4l_fakes_TT_stack_2->GetZaxis()->SetLabelSize(0.05);
   flavorcharge4l_fakes_TT_stack_2->GetZaxis()->SetTitleSize(0.06);
   flavorcharge4l_fakes_TT_stack_2->GetZaxis()->SetTitleFont(42);
   flavorcharge4l_stack->Add(flavorcharge4l_fakes_TT_stack_2,"");
   
   TH1D *flavorcharge4l_fakes_DY_stack_3 = new TH1D("flavorcharge4l_fakes_DY_stack_3","dummy",3,-0.5,2.5);
   flavorcharge4l_fakes_DY_stack_3->SetBinContent(1,116.9275);
   flavorcharge4l_fakes_DY_stack_3->SetBinError(1,14.17954);
   flavorcharge4l_fakes_DY_stack_3->SetEntries(72);

   ci = TColor::GetColor("#cccccc");
   flavorcharge4l_fakes_DY_stack_3->SetFillColor(ci);
   flavorcharge4l_fakes_DY_stack_3->SetMarkerStyle(0);
   flavorcharge4l_fakes_DY_stack_3->SetMarkerSize(1.1);
   flavorcharge4l_fakes_DY_stack_3->GetXaxis()->SetTitle("flavor");
   flavorcharge4l_fakes_DY_stack_3->GetXaxis()->SetMoreLogLabels();
   flavorcharge4l_fakes_DY_stack_3->GetXaxis()->SetLabelFont(42);
   flavorcharge4l_fakes_DY_stack_3->GetXaxis()->SetLabelOffset(0.007);
   flavorcharge4l_fakes_DY_stack_3->GetXaxis()->SetLabelSize(0.05);
   flavorcharge4l_fakes_DY_stack_3->GetXaxis()->SetTitleSize(0.06);
   flavorcharge4l_fakes_DY_stack_3->GetXaxis()->SetTitleOffset(0.9);
   flavorcharge4l_fakes_DY_stack_3->GetXaxis()->SetTitleFont(42);
   flavorcharge4l_fakes_DY_stack_3->GetYaxis()->SetTitle("Events");
   flavorcharge4l_fakes_DY_stack_3->GetYaxis()->SetLabelFont(42);
   flavorcharge4l_fakes_DY_stack_3->GetYaxis()->SetLabelOffset(0.007);
   flavorcharge4l_fakes_DY_stack_3->GetYaxis()->SetLabelSize(0.05);
   flavorcharge4l_fakes_DY_stack_3->GetYaxis()->SetTitleSize(0.06);
   flavorcharge4l_fakes_DY_stack_3->GetYaxis()->SetTitleOffset(1.35);
   flavorcharge4l_fakes_DY_stack_3->GetYaxis()->SetTitleFont(42);
   flavorcharge4l_fakes_DY_stack_3->GetZaxis()->SetLabelFont(42);
   flavorcharge4l_fakes_DY_stack_3->GetZaxis()->SetLabelOffset(0.007);
   flavorcharge4l_fakes_DY_stack_3->GetZaxis()->SetLabelSize(0.05);
   flavorcharge4l_fakes_DY_stack_3->GetZaxis()->SetTitleSize(0.06);
   flavorcharge4l_fakes_DY_stack_3->GetZaxis()->SetTitleFont(42);
   flavorcharge4l_stack->Add(flavorcharge4l_fakes_DY_stack_3,"");
   
   TH1D *flavorcharge4l_prompt_ZZ_stack_4 = new TH1D("flavorcharge4l_prompt_ZZ_stack_4","dummy",3,-0.5,2.5);
   flavorcharge4l_prompt_ZZ_stack_4->SetBinContent(1,73.21068);
   flavorcharge4l_prompt_ZZ_stack_4->SetBinError(1,3.665118);
   flavorcharge4l_prompt_ZZ_stack_4->SetEntries(403);

   ci = TColor::GetColor("#00cc00");
   flavorcharge4l_prompt_ZZ_stack_4->SetFillColor(ci);
   flavorcharge4l_prompt_ZZ_stack_4->SetMarkerStyle(0);
   flavorcharge4l_prompt_ZZ_stack_4->SetMarkerSize(1.1);
   flavorcharge4l_prompt_ZZ_stack_4->GetXaxis()->SetTitle("flavor");
   flavorcharge4l_prompt_ZZ_stack_4->GetXaxis()->SetMoreLogLabels();
   flavorcharge4l_prompt_ZZ_stack_4->GetXaxis()->SetLabelFont(42);
   flavorcharge4l_prompt_ZZ_stack_4->GetXaxis()->SetLabelOffset(0.007);
   flavorcharge4l_prompt_ZZ_stack_4->GetXaxis()->SetLabelSize(0.05);
   flavorcharge4l_prompt_ZZ_stack_4->GetXaxis()->SetTitleSize(0.06);
   flavorcharge4l_prompt_ZZ_stack_4->GetXaxis()->SetTitleOffset(0.9);
   flavorcharge4l_prompt_ZZ_stack_4->GetXaxis()->SetTitleFont(42);
   flavorcharge4l_prompt_ZZ_stack_4->GetYaxis()->SetTitle("Events");
   flavorcharge4l_prompt_ZZ_stack_4->GetYaxis()->SetLabelFont(42);
   flavorcharge4l_prompt_ZZ_stack_4->GetYaxis()->SetLabelOffset(0.007);
   flavorcharge4l_prompt_ZZ_stack_4->GetYaxis()->SetLabelSize(0.05);
   flavorcharge4l_prompt_ZZ_stack_4->GetYaxis()->SetTitleSize(0.06);
   flavorcharge4l_prompt_ZZ_stack_4->GetYaxis()->SetTitleOffset(1.35);
   flavorcharge4l_prompt_ZZ_stack_4->GetYaxis()->SetTitleFont(42);
   flavorcharge4l_prompt_ZZ_stack_4->GetZaxis()->SetLabelFont(42);
   flavorcharge4l_prompt_ZZ_stack_4->GetZaxis()->SetLabelOffset(0.007);
   flavorcharge4l_prompt_ZZ_stack_4->GetZaxis()->SetLabelSize(0.05);
   flavorcharge4l_prompt_ZZ_stack_4->GetZaxis()->SetTitleSize(0.06);
   flavorcharge4l_prompt_ZZ_stack_4->GetZaxis()->SetTitleFont(42);
   flavorcharge4l_stack->Add(flavorcharge4l_prompt_ZZ_stack_4,"");
   
   TH1D *flavorcharge4l_prompt_WZ_stack_5 = new TH1D("flavorcharge4l_prompt_WZ_stack_5","dummy",3,-0.5,2.5);
   flavorcharge4l_prompt_WZ_stack_5->SetBinContent(1,1250.082);
   flavorcharge4l_prompt_WZ_stack_5->SetBinError(1,10.63331);
   flavorcharge4l_prompt_WZ_stack_5->SetEntries(13825);

   ci = TColor::GetColor("#ffcc00");
   flavorcharge4l_prompt_WZ_stack_5->SetFillColor(ci);
   flavorcharge4l_prompt_WZ_stack_5->SetMarkerStyle(0);
   flavorcharge4l_prompt_WZ_stack_5->SetMarkerSize(1.1);
   flavorcharge4l_prompt_WZ_stack_5->GetXaxis()->SetTitle("flavor");
   flavorcharge4l_prompt_WZ_stack_5->GetXaxis()->SetMoreLogLabels();
   flavorcharge4l_prompt_WZ_stack_5->GetXaxis()->SetLabelFont(42);
   flavorcharge4l_prompt_WZ_stack_5->GetXaxis()->SetLabelOffset(0.007);
   flavorcharge4l_prompt_WZ_stack_5->GetXaxis()->SetLabelSize(0.05);
   flavorcharge4l_prompt_WZ_stack_5->GetXaxis()->SetTitleSize(0.06);
   flavorcharge4l_prompt_WZ_stack_5->GetXaxis()->SetTitleOffset(0.9);
   flavorcharge4l_prompt_WZ_stack_5->GetXaxis()->SetTitleFont(42);
   flavorcharge4l_prompt_WZ_stack_5->GetYaxis()->SetTitle("Events");
   flavorcharge4l_prompt_WZ_stack_5->GetYaxis()->SetLabelFont(42);
   flavorcharge4l_prompt_WZ_stack_5->GetYaxis()->SetLabelOffset(0.007);
   flavorcharge4l_prompt_WZ_stack_5->GetYaxis()->SetLabelSize(0.05);
   flavorcharge4l_prompt_WZ_stack_5->GetYaxis()->SetTitleSize(0.06);
   flavorcharge4l_prompt_WZ_stack_5->GetYaxis()->SetTitleOffset(1.35);
   flavorcharge4l_prompt_WZ_stack_5->GetYaxis()->SetTitleFont(42);
   flavorcharge4l_prompt_WZ_stack_5->GetZaxis()->SetLabelFont(42);
   flavorcharge4l_prompt_WZ_stack_5->GetZaxis()->SetLabelOffset(0.007);
   flavorcharge4l_prompt_WZ_stack_5->GetZaxis()->SetLabelSize(0.05);
   flavorcharge4l_prompt_WZ_stack_5->GetZaxis()->SetTitleSize(0.06);
   flavorcharge4l_prompt_WZ_stack_5->GetZaxis()->SetTitleFont(42);
   flavorcharge4l_stack->Add(flavorcharge4l_prompt_WZ_stack_5,"");
   flavorcharge4l_stack->Draw("same hist");
   
   TH1D *flavorcharge4l_total__114 = new TH1D("flavorcharge4l_total__114","dummy",3,-0.5,2.5);
   flavorcharge4l_total__114->SetBinContent(1,1495.945);
   flavorcharge4l_total__114->SetBinError(1,18.20347);
   flavorcharge4l_total__114->SetMinimum(0);
   flavorcharge4l_total__114->SetMaximum(4487.834);
   flavorcharge4l_total__114->SetEntries(15152);
   flavorcharge4l_total__114->SetDirectory(0);

   ci = TColor::GetColor("#00cc00");
   flavorcharge4l_total__114->SetFillColor(ci);
   flavorcharge4l_total__114->SetMarkerStyle(20);
   flavorcharge4l_total__114->SetMarkerSize(1.1);
   flavorcharge4l_total__114->GetXaxis()->SetTitle("flavor");
   flavorcharge4l_total__114->GetXaxis()->SetBinLabel(1,"eeee");
   flavorcharge4l_total__114->GetXaxis()->SetBinLabel(2,"ee#mu#mu");
   flavorcharge4l_total__114->GetXaxis()->SetBinLabel(3,"#mu#mu#mu#mu");
   flavorcharge4l_total__114->GetXaxis()->SetMoreLogLabels();
   flavorcharge4l_total__114->GetXaxis()->SetLabelFont(42);
   flavorcharge4l_total__114->GetXaxis()->SetLabelOffset(999);
   flavorcharge4l_total__114->GetXaxis()->SetLabelSize(0.05);
   flavorcharge4l_total__114->GetXaxis()->SetTitleSize(0.05);
   flavorcharge4l_total__114->GetXaxis()->SetTitleOffset(999);
   flavorcharge4l_total__114->GetXaxis()->SetTitleFont(42);
   flavorcharge4l_total__114->GetYaxis()->SetTitle("Events");
   flavorcharge4l_total__114->GetYaxis()->SetLabelFont(42);
   flavorcharge4l_total__114->GetYaxis()->SetLabelOffset(0.007);
   flavorcharge4l_total__114->GetYaxis()->SetLabelSize(0.05);
   flavorcharge4l_total__114->GetYaxis()->SetTitleSize(0.06);
   flavorcharge4l_total__114->GetYaxis()->SetTitleOffset(1.48);
   flavorcharge4l_total__114->GetYaxis()->SetTitleFont(42);
   flavorcharge4l_total__114->GetZaxis()->SetLabelFont(42);
   flavorcharge4l_total__114->GetZaxis()->SetLabelOffset(0.007);
   flavorcharge4l_total__114->GetZaxis()->SetLabelSize(0.05);
   flavorcharge4l_total__114->GetZaxis()->SetTitleSize(0.06);
   flavorcharge4l_total__114->GetZaxis()->SetTitleFont(42);
   flavorcharge4l_total__114->Draw("AXIS SAME");
   
   Double_t flavorcharge4l_total_errors_fx3141[1] = {
   0};
   Double_t flavorcharge4l_total_errors_fy3141[1] = {
   1495.945};
   Double_t flavorcharge4l_total_errors_felx3141[1] = {
   0.5};
   Double_t flavorcharge4l_total_errors_fely3141[1] = {
   18.20347};
   Double_t flavorcharge4l_total_errors_fehx3141[1] = {
   0.5};
   Double_t flavorcharge4l_total_errors_fehy3141[1] = {
   18.20347};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(1,flavorcharge4l_total_errors_fx3141,flavorcharge4l_total_errors_fy3141,flavorcharge4l_total_errors_felx3141,flavorcharge4l_total_errors_fehx3141,flavorcharge4l_total_errors_fely3141,flavorcharge4l_total_errors_fehy3141);
   grae->SetName("flavorcharge4l_total_errors");
   grae->SetTitle("Graph");
   grae->SetFillColor(1);
   grae->SetFillStyle(3013);
   grae->SetMarkerStyle(0);
   
   TH1F *Graph_flavorcharge4l_total_errors3141 = new TH1F("Graph_flavorcharge4l_total_errors3141","Graph",100,-0.6,0.6);
   Graph_flavorcharge4l_total_errors3141->SetMinimum(1474.1);
   Graph_flavorcharge4l_total_errors3141->SetMaximum(1517.789);
   Graph_flavorcharge4l_total_errors3141->SetDirectory(0);
   Graph_flavorcharge4l_total_errors3141->SetStats(0);
   Graph_flavorcharge4l_total_errors3141->SetLineStyle(0);
   Graph_flavorcharge4l_total_errors3141->SetMarkerStyle(20);
   Graph_flavorcharge4l_total_errors3141->GetXaxis()->SetLabelFont(42);
   Graph_flavorcharge4l_total_errors3141->GetXaxis()->SetLabelOffset(0.007);
   Graph_flavorcharge4l_total_errors3141->GetXaxis()->SetLabelSize(0.05);
   Graph_flavorcharge4l_total_errors3141->GetXaxis()->SetTitleSize(0.06);
   Graph_flavorcharge4l_total_errors3141->GetXaxis()->SetTitleOffset(0.9);
   Graph_flavorcharge4l_total_errors3141->GetXaxis()->SetTitleFont(42);
   Graph_flavorcharge4l_total_errors3141->GetYaxis()->SetLabelFont(42);
   Graph_flavorcharge4l_total_errors3141->GetYaxis()->SetLabelOffset(0.007);
   Graph_flavorcharge4l_total_errors3141->GetYaxis()->SetLabelSize(0.05);
   Graph_flavorcharge4l_total_errors3141->GetYaxis()->SetTitleSize(0.06);
   Graph_flavorcharge4l_total_errors3141->GetYaxis()->SetTitleOffset(1.35);
   Graph_flavorcharge4l_total_errors3141->GetYaxis()->SetTitleFont(42);
   Graph_flavorcharge4l_total_errors3141->GetZaxis()->SetLabelFont(42);
   Graph_flavorcharge4l_total_errors3141->GetZaxis()->SetLabelOffset(0.007);
   Graph_flavorcharge4l_total_errors3141->GetZaxis()->SetLabelSize(0.05);
   Graph_flavorcharge4l_total_errors3141->GetZaxis()->SetTitleSize(0.06);
   Graph_flavorcharge4l_total_errors3141->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_flavorcharge4l_total_errors3141);
   
   grae->Draw("pe2 ");
   
   Double_t flavorcharge4l_data_graph_fx3142[3] = {
   0,
   1,
   2};
   Double_t flavorcharge4l_data_graph_fy3142[3] = {
   1513,
   0,
   0};
   Double_t flavorcharge4l_data_graph_felx3142[3] = {
   0.5,
   0.5,
   0.5};
   Double_t flavorcharge4l_data_graph_fely3142[3] = {
   38.89384,
   0,
   0};
   Double_t flavorcharge4l_data_graph_fehx3142[3] = {
   0.5,
   0.5,
   0.5};
   Double_t flavorcharge4l_data_graph_fehy3142[3] = {
   39.90673,
   1.841055,
   1.841055};
   grae = new TGraphAsymmErrors(3,flavorcharge4l_data_graph_fx3142,flavorcharge4l_data_graph_fy3142,flavorcharge4l_data_graph_felx3142,flavorcharge4l_data_graph_fehx3142,flavorcharge4l_data_graph_fely3142,flavorcharge4l_data_graph_fehy3142);
   grae->SetName("flavorcharge4l_data_graph");
   grae->SetTitle("Graph");
   grae->SetFillStyle(1000);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.1);
   
   TH1F *Graph_flavorcharge4l_data_graph3142 = new TH1F("Graph_flavorcharge4l_data_graph3142","Graph",100,-0.8,2.8);
   Graph_flavorcharge4l_data_graph3142->SetMinimum(0);
   Graph_flavorcharge4l_data_graph3142->SetMaximum(1708.197);
   Graph_flavorcharge4l_data_graph3142->SetDirectory(0);
   Graph_flavorcharge4l_data_graph3142->SetStats(0);
   Graph_flavorcharge4l_data_graph3142->SetLineStyle(0);
   Graph_flavorcharge4l_data_graph3142->SetMarkerStyle(20);
   Graph_flavorcharge4l_data_graph3142->GetXaxis()->SetLabelFont(42);
   Graph_flavorcharge4l_data_graph3142->GetXaxis()->SetLabelOffset(0.007);
   Graph_flavorcharge4l_data_graph3142->GetXaxis()->SetLabelSize(0.05);
   Graph_flavorcharge4l_data_graph3142->GetXaxis()->SetTitleSize(0.06);
   Graph_flavorcharge4l_data_graph3142->GetXaxis()->SetTitleOffset(0.9);
   Graph_flavorcharge4l_data_graph3142->GetXaxis()->SetTitleFont(42);
   Graph_flavorcharge4l_data_graph3142->GetYaxis()->SetLabelFont(42);
   Graph_flavorcharge4l_data_graph3142->GetYaxis()->SetLabelOffset(0.007);
   Graph_flavorcharge4l_data_graph3142->GetYaxis()->SetLabelSize(0.05);
   Graph_flavorcharge4l_data_graph3142->GetYaxis()->SetTitleSize(0.06);
   Graph_flavorcharge4l_data_graph3142->GetYaxis()->SetTitleOffset(1.35);
   Graph_flavorcharge4l_data_graph3142->GetYaxis()->SetTitleFont(42);
   Graph_flavorcharge4l_data_graph3142->GetZaxis()->SetLabelFont(42);
   Graph_flavorcharge4l_data_graph3142->GetZaxis()->SetLabelOffset(0.007);
   Graph_flavorcharge4l_data_graph3142->GetZaxis()->SetLabelSize(0.05);
   Graph_flavorcharge4l_data_graph3142->GetZaxis()->SetTitleSize(0.06);
   Graph_flavorcharge4l_data_graph3142->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_flavorcharge4l_data_graph3142);
   
   grae->Draw("pz ");
   
   TLegend *leg = new TLegend(0.2,0.628,0.48,0.91,NULL,"brNDC");
   leg->SetBorderSize(1);
   leg->SetTextSize(0.036);
   leg->SetLineColor(0);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("flavorcharge4l_data","Data","LPE");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1.1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("flavorcharge4l_prompt_WZ_stack_5","WZ","F");

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
   entry=leg->AddEntry("flavorcharge4l_prompt_ZZ_stack_4","qqZZ","F");

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
   entry=leg->AddEntry("flavorcharge4l_fakes_DY_stack_3","Fakes DY","F");

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
   entry=leg->AddEntry("flavorcharge4l_fakes_TT_stack_2","Fakes TT","F");

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
   entry=leg->AddEntry("flavorcharge4l_total_errors","Total unc.","F");
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
   flavorcharge4l_canvas->cd();
  
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
   
   TH1D *flavorcharge4l_total__115 = new TH1D("flavorcharge4l_total__115","dummy",3,-0.5,2.5);
   flavorcharge4l_total__115->SetBinContent(1,1);
   flavorcharge4l_total__115->SetMinimum(0.5);
   flavorcharge4l_total__115->SetMaximum(2);
   flavorcharge4l_total__115->SetEntries(15155);

   ci = TColor::GetColor("#00cc00");
   flavorcharge4l_total__115->SetFillColor(ci);

   ci = TColor::GetColor("#6666ff");
   flavorcharge4l_total__115->SetMarkerColor(ci);
   flavorcharge4l_total__115->SetMarkerSize(1.1);
   flavorcharge4l_total__115->GetXaxis()->SetTitle("flavor");
   flavorcharge4l_total__115->GetXaxis()->SetBinLabel(1,"eeee");
   flavorcharge4l_total__115->GetXaxis()->SetBinLabel(2,"ee#mu#mu");
   flavorcharge4l_total__115->GetXaxis()->SetBinLabel(3,"#mu#mu#mu#mu");
   flavorcharge4l_total__115->GetXaxis()->SetMoreLogLabels();
   flavorcharge4l_total__115->GetXaxis()->SetLabelFont(42);
   flavorcharge4l_total__115->GetXaxis()->SetLabelOffset(0.015);
   flavorcharge4l_total__115->GetXaxis()->SetLabelSize(0.1542857);
   flavorcharge4l_total__115->GetXaxis()->SetTitleSize(0.14);
   flavorcharge4l_total__115->GetXaxis()->SetTitleFont(42);
   flavorcharge4l_total__115->GetYaxis()->SetTitle("Data/pred.");
   flavorcharge4l_total__115->GetYaxis()->SetDecimals();
   flavorcharge4l_total__115->GetYaxis()->SetNdivisions(505);
   flavorcharge4l_total__115->GetYaxis()->SetLabelFont(42);
   flavorcharge4l_total__115->GetYaxis()->SetLabelOffset(0.01);
   flavorcharge4l_total__115->GetYaxis()->SetLabelSize(0.11);
   flavorcharge4l_total__115->GetYaxis()->SetTitleSize(0.14);
   flavorcharge4l_total__115->GetYaxis()->SetTitleOffset(0.62);
   flavorcharge4l_total__115->GetYaxis()->SetTitleFont(42);
   flavorcharge4l_total__115->GetZaxis()->SetLabelFont(42);
   flavorcharge4l_total__115->GetZaxis()->SetLabelOffset(0.007);
   flavorcharge4l_total__115->GetZaxis()->SetLabelSize(0.05);
   flavorcharge4l_total__115->GetZaxis()->SetTitleSize(0.06);
   flavorcharge4l_total__115->GetZaxis()->SetTitleFont(42);
   flavorcharge4l_total__115->Draw("AXIS");
   
   Double_t flavorcharge4l_total_errors_fx3143[1] = {
   0};
   Double_t flavorcharge4l_total_errors_fy3143[1] = {
   1};
   Double_t flavorcharge4l_total_errors_felx3143[1] = {
   0.5};
   Double_t flavorcharge4l_total_errors_fely3143[1] = {
   0.01216854};
   Double_t flavorcharge4l_total_errors_fehx3143[1] = {
   0.5};
   Double_t flavorcharge4l_total_errors_fehy3143[1] = {
   0.01216854};
   grae = new TGraphAsymmErrors(1,flavorcharge4l_total_errors_fx3143,flavorcharge4l_total_errors_fy3143,flavorcharge4l_total_errors_felx3143,flavorcharge4l_total_errors_fehx3143,flavorcharge4l_total_errors_fely3143,flavorcharge4l_total_errors_fehy3143);
   grae->SetName("flavorcharge4l_total_errors");
   grae->SetTitle("Graph");

   ci = TColor::GetColor("#00ffff");
   grae->SetFillColor(ci);

   ci = TColor::GetColor("#00ffff");
   grae->SetMarkerColor(ci);
   grae->Draw("e2");
   
   Double_t flavorcharge4l_total_errors_fx3144[1] = {
   0};
   Double_t flavorcharge4l_total_errors_fy3144[1] = {
   1};
   Double_t flavorcharge4l_total_errors_felx3144[1] = {
   0.5};
   Double_t flavorcharge4l_total_errors_fely3144[1] = {
   0.01216854};
   Double_t flavorcharge4l_total_errors_fehx3144[1] = {
   0.5};
   Double_t flavorcharge4l_total_errors_fehy3144[1] = {
   0.01216854};
   grae = new TGraphAsymmErrors(1,flavorcharge4l_total_errors_fx3144,flavorcharge4l_total_errors_fy3144,flavorcharge4l_total_errors_felx3144,flavorcharge4l_total_errors_fehx3144,flavorcharge4l_total_errors_fely3144,flavorcharge4l_total_errors_fehy3144);
   grae->SetName("flavorcharge4l_total_errors");
   grae->SetTitle("Graph");

   ci = TColor::GetColor("#6666ff");
   grae->SetFillColor(ci);

   ci = TColor::GetColor("#6666ff");
   grae->SetMarkerColor(ci);
   grae->Draw("e2 ");
   
   TH1D *flavorcharge4l_total__116 = new TH1D("flavorcharge4l_total__116","dummy",3,-0.5,2.5);
   flavorcharge4l_total__116->SetBinContent(1,1);
   flavorcharge4l_total__116->SetMinimum(0.5);
   flavorcharge4l_total__116->SetMaximum(2);
   flavorcharge4l_total__116->SetEntries(15155);

   ci = TColor::GetColor("#00cc00");
   flavorcharge4l_total__116->SetFillColor(ci);

   ci = TColor::GetColor("#6666ff");
   flavorcharge4l_total__116->SetMarkerColor(ci);
   flavorcharge4l_total__116->SetMarkerSize(1.1);
   flavorcharge4l_total__116->GetXaxis()->SetTitle("flavor");
   flavorcharge4l_total__116->GetXaxis()->SetBinLabel(1,"eeee");
   flavorcharge4l_total__116->GetXaxis()->SetBinLabel(2,"ee#mu#mu");
   flavorcharge4l_total__116->GetXaxis()->SetBinLabel(3,"#mu#mu#mu#mu");
   flavorcharge4l_total__116->GetXaxis()->SetMoreLogLabels();
   flavorcharge4l_total__116->GetXaxis()->SetLabelFont(42);
   flavorcharge4l_total__116->GetXaxis()->SetLabelOffset(0.015);
   flavorcharge4l_total__116->GetXaxis()->SetLabelSize(0.1542857);
   flavorcharge4l_total__116->GetXaxis()->SetTitleSize(0.14);
   flavorcharge4l_total__116->GetXaxis()->SetTitleFont(42);
   flavorcharge4l_total__116->GetYaxis()->SetTitle("Data/pred.");
   flavorcharge4l_total__116->GetYaxis()->SetDecimals();
   flavorcharge4l_total__116->GetYaxis()->SetNdivisions(505);
   flavorcharge4l_total__116->GetYaxis()->SetLabelFont(42);
   flavorcharge4l_total__116->GetYaxis()->SetLabelOffset(0.01);
   flavorcharge4l_total__116->GetYaxis()->SetLabelSize(0.11);
   flavorcharge4l_total__116->GetYaxis()->SetTitleSize(0.14);
   flavorcharge4l_total__116->GetYaxis()->SetTitleOffset(0.62);
   flavorcharge4l_total__116->GetYaxis()->SetTitleFont(42);
   flavorcharge4l_total__116->GetZaxis()->SetLabelFont(42);
   flavorcharge4l_total__116->GetZaxis()->SetLabelOffset(0.007);
   flavorcharge4l_total__116->GetZaxis()->SetLabelSize(0.05);
   flavorcharge4l_total__116->GetZaxis()->SetTitleSize(0.06);
   flavorcharge4l_total__116->GetZaxis()->SetTitleFont(42);
   flavorcharge4l_total__116->Draw("AXIS SAME");
   TLine *line = new TLine(-0.5,1,2.5,1);
   line->SetLineColor(58);
   line->SetLineWidth(2);
   line->Draw();
   
   Double_t data_div_fx3145[3] = {
   0,
   1,
   2};
   Double_t data_div_fy3145[3] = {
   1.011401,
   0,
   0};
   Double_t data_div_felx3145[3] = {
   0.5,
   0.5,
   0.5};
   Double_t data_div_fely3145[3] = {
   0.02599952,
   0,
   0};
   Double_t data_div_fehx3145[3] = {
   0.5,
   0.5,
   0.5};
   Double_t data_div_fehy3145[3] = {
   0.02667661,
   0,
   0};
   grae = new TGraphAsymmErrors(3,data_div_fx3145,data_div_fy3145,data_div_felx3145,data_div_fehx3145,data_div_fely3145,data_div_fehy3145);
   grae->SetName("data_div");
   grae->SetTitle("Graph");
   grae->SetFillStyle(1000);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.1);
   
   TH1F *Graph_flavorcharge4l_data_graph3145 = new TH1F("Graph_flavorcharge4l_data_graph3145","Graph",100,-0.8,2.8);
   Graph_flavorcharge4l_data_graph3145->SetMinimum(0);
   Graph_flavorcharge4l_data_graph3145->SetMaximum(1708.197);
   Graph_flavorcharge4l_data_graph3145->SetDirectory(0);
   Graph_flavorcharge4l_data_graph3145->SetStats(0);
   Graph_flavorcharge4l_data_graph3145->SetLineStyle(0);
   Graph_flavorcharge4l_data_graph3145->SetMarkerStyle(20);
   Graph_flavorcharge4l_data_graph3145->GetXaxis()->SetLabelFont(42);
   Graph_flavorcharge4l_data_graph3145->GetXaxis()->SetLabelOffset(0.007);
   Graph_flavorcharge4l_data_graph3145->GetXaxis()->SetLabelSize(0.05);
   Graph_flavorcharge4l_data_graph3145->GetXaxis()->SetTitleSize(0.06);
   Graph_flavorcharge4l_data_graph3145->GetXaxis()->SetTitleOffset(0.9);
   Graph_flavorcharge4l_data_graph3145->GetXaxis()->SetTitleFont(42);
   Graph_flavorcharge4l_data_graph3145->GetYaxis()->SetLabelFont(42);
   Graph_flavorcharge4l_data_graph3145->GetYaxis()->SetLabelOffset(0.007);
   Graph_flavorcharge4l_data_graph3145->GetYaxis()->SetLabelSize(0.05);
   Graph_flavorcharge4l_data_graph3145->GetYaxis()->SetTitleSize(0.06);
   Graph_flavorcharge4l_data_graph3145->GetYaxis()->SetTitleOffset(1.35);
   Graph_flavorcharge4l_data_graph3145->GetYaxis()->SetTitleFont(42);
   Graph_flavorcharge4l_data_graph3145->GetZaxis()->SetLabelFont(42);
   Graph_flavorcharge4l_data_graph3145->GetZaxis()->SetLabelOffset(0.007);
   Graph_flavorcharge4l_data_graph3145->GetZaxis()->SetLabelSize(0.05);
   Graph_flavorcharge4l_data_graph3145->GetZaxis()->SetTitleSize(0.06);
   Graph_flavorcharge4l_data_graph3145->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_flavorcharge4l_data_graph3145);
   
   grae->Draw("pz ");
   
   leg = new TLegend(0,0,0,0,NULL,"brNDC");
   leg->SetBorderSize(1);
   leg->SetTextSize(0.084);
   leg->SetLineColor(0);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   entry=leg->AddEntry("flavorcharge4l_total_errors","stat. unc.","F");
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
   entry=leg->AddEntry("flavorcharge4l_total_errors","total unc.","F");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   leg->Draw();
   pad2->Modified();
   flavorcharge4l_canvas->cd();
   flavorcharge4l_canvas->Modified();
   flavorcharge4l_canvas->cd();
   flavorcharge4l_canvas->SetSelected(flavorcharge4l_canvas);
}
