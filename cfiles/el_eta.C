void el_eta()
{
//=========Macro generated from canvas: el_eta_canvas/el_eta
//=========  (Thu Dec 15 18:19:13 2022) by ROOT version 6.12/07
   TCanvas *el_eta_canvas = new TCanvas("el_eta_canvas", "el_eta",0,0,600,750);
   gStyle->SetOptFit(1);
   gStyle->SetOptStat(0);
   gStyle->SetOptTitle(0);
   el_eta_canvas->SetHighLightColor(2);
   el_eta_canvas->Range(0,0,1,1);
   el_eta_canvas->SetFillColor(0);
   el_eta_canvas->SetBorderMode(0);
   el_eta_canvas->SetBorderSize(2);
   el_eta_canvas->SetTickx(1);
   el_eta_canvas->SetTicky(1);
   el_eta_canvas->SetLeftMargin(0.18);
   el_eta_canvas->SetRightMargin(0.04);
   el_eta_canvas->SetBottomMargin(0.13);
   el_eta_canvas->SetFrameFillStyle(0);
   el_eta_canvas->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: pad1
   TPad *pad1 = new TPad("pad1", "pad1",0,0.3,1,1);
   pad1->Draw();
   pad1->cd();
   pad1->Range(-3.653846,-9.804922,2.75641,382.392);
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
   
   TH1D *el_eta_total__13 = new TH1D("el_eta_total__13","dummy",10,-2.5,2.5);
   el_eta_total__13->SetBinContent(0,4292.287);
   el_eta_total__13->SetBinContent(1,108.983);
   el_eta_total__13->SetBinContent(2,133.2513);
   el_eta_total__13->SetBinContent(3,167.6251);
   el_eta_total__13->SetBinContent(4,202.5196);
   el_eta_total__13->SetBinContent(5,225.2361);
   el_eta_total__13->SetBinContent(6,232.1807);
   el_eta_total__13->SetBinContent(7,208.2879);
   el_eta_total__13->SetBinContent(8,170.7406);
   el_eta_total__13->SetBinContent(9,142.5137);
   el_eta_total__13->SetBinContent(10,100.1533);
   el_eta_total__13->SetBinError(0,30.70041);
   el_eta_total__13->SetBinError(1,6.835924);
   el_eta_total__13->SetBinError(2,5.663717);
   el_eta_total__13->SetBinError(3,6.820258);
   el_eta_total__13->SetBinError(4,5.738184);
   el_eta_total__13->SetBinError(5,5.922836);
   el_eta_total__13->SetBinError(6,5.757705);
   el_eta_total__13->SetBinError(7,5.797814);
   el_eta_total__13->SetBinError(8,6.832993);
   el_eta_total__13->SetBinError(9,6.655203);
   el_eta_total__13->SetBinError(10,5.645546);
   el_eta_total__13->SetMinimum(0);
   el_eta_total__13->SetMaximum(358.8602);
   el_eta_total__13->SetEntries(60512);
   el_eta_total__13->SetDirectory(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#00cc00");
   el_eta_total__13->SetFillColor(ci);
   el_eta_total__13->SetMarkerStyle(20);
   el_eta_total__13->SetMarkerSize(1.1);
   el_eta_total__13->GetXaxis()->SetTitle("#eta(e)");
   el_eta_total__13->GetXaxis()->SetMoreLogLabels();
   el_eta_total__13->GetXaxis()->SetLabelFont(42);
   el_eta_total__13->GetXaxis()->SetLabelOffset(999);
   el_eta_total__13->GetXaxis()->SetLabelSize(0.05);
   el_eta_total__13->GetXaxis()->SetTitleSize(0.05);
   el_eta_total__13->GetXaxis()->SetTitleOffset(999);
   el_eta_total__13->GetXaxis()->SetTitleFont(42);
   el_eta_total__13->GetYaxis()->SetTitle("Electrons");
   el_eta_total__13->GetYaxis()->SetLabelFont(42);
   el_eta_total__13->GetYaxis()->SetLabelOffset(0.007);
   el_eta_total__13->GetYaxis()->SetLabelSize(0.05);
   el_eta_total__13->GetYaxis()->SetTitleSize(0.06);
   el_eta_total__13->GetYaxis()->SetTitleOffset(1.48);
   el_eta_total__13->GetYaxis()->SetTitleFont(42);
   el_eta_total__13->GetZaxis()->SetLabelFont(42);
   el_eta_total__13->GetZaxis()->SetLabelOffset(0.007);
   el_eta_total__13->GetZaxis()->SetLabelSize(0.05);
   el_eta_total__13->GetZaxis()->SetTitleSize(0.06);
   el_eta_total__13->GetZaxis()->SetTitleFont(42);
   el_eta_total__13->Draw("HIST");
   
   THStack *el_eta_stack = new THStack();
   el_eta_stack->SetName("el_eta_stack");
   el_eta_stack->SetTitle("el_eta");
   
   TH1F *el_eta_stack_stack_4 = new TH1F("el_eta_stack_stack_4","el_eta",10,-2.5,2.5);
   el_eta_stack_stack_4->SetMinimum(0);
   el_eta_stack_stack_4->SetMaximum(243.7897);
   el_eta_stack_stack_4->SetDirectory(0);
   el_eta_stack_stack_4->SetStats(0);
   el_eta_stack_stack_4->SetLineStyle(0);
   el_eta_stack_stack_4->SetMarkerStyle(20);
   el_eta_stack_stack_4->GetXaxis()->SetLabelFont(42);
   el_eta_stack_stack_4->GetXaxis()->SetLabelOffset(0.007);
   el_eta_stack_stack_4->GetXaxis()->SetLabelSize(0.05);
   el_eta_stack_stack_4->GetXaxis()->SetTitleSize(0.06);
   el_eta_stack_stack_4->GetXaxis()->SetTitleOffset(0.9);
   el_eta_stack_stack_4->GetXaxis()->SetTitleFont(42);
   el_eta_stack_stack_4->GetYaxis()->SetLabelFont(42);
   el_eta_stack_stack_4->GetYaxis()->SetLabelOffset(0.007);
   el_eta_stack_stack_4->GetYaxis()->SetLabelSize(0.05);
   el_eta_stack_stack_4->GetYaxis()->SetTitleSize(0.06);
   el_eta_stack_stack_4->GetYaxis()->SetTitleOffset(1.35);
   el_eta_stack_stack_4->GetYaxis()->SetTitleFont(42);
   el_eta_stack_stack_4->GetZaxis()->SetLabelFont(42);
   el_eta_stack_stack_4->GetZaxis()->SetLabelOffset(0.007);
   el_eta_stack_stack_4->GetZaxis()->SetLabelSize(0.05);
   el_eta_stack_stack_4->GetZaxis()->SetTitleSize(0.06);
   el_eta_stack_stack_4->GetZaxis()->SetTitleFont(42);
   el_eta_stack->SetHistogram(el_eta_stack_stack_4);
   
   
   TH1D *el_eta_fakes_VV_stack_1 = new TH1D("el_eta_fakes_VV_stack_1","dummy",10,-2.5,2.5);
   el_eta_fakes_VV_stack_1->SetBinContent(0,1.555094);
   el_eta_fakes_VV_stack_1->SetBinContent(1,0.09719337);
   el_eta_fakes_VV_stack_1->SetBinContent(2,0.09719337);
   el_eta_fakes_VV_stack_1->SetBinContent(3,0.09719337);
   el_eta_fakes_VV_stack_1->SetBinContent(5,0.09719337);
   el_eta_fakes_VV_stack_1->SetBinContent(6,0.1943867);
   el_eta_fakes_VV_stack_1->SetBinContent(7,0.09719337);
   el_eta_fakes_VV_stack_1->SetBinContent(8,0.09719337);
   el_eta_fakes_VV_stack_1->SetBinContent(9,0.1943867);
   el_eta_fakes_VV_stack_1->SetBinContent(10,0.1943867);
   el_eta_fakes_VV_stack_1->SetBinError(0,0.3887735);
   el_eta_fakes_VV_stack_1->SetBinError(1,0.09719337);
   el_eta_fakes_VV_stack_1->SetBinError(2,0.09719337);
   el_eta_fakes_VV_stack_1->SetBinError(3,0.09719337);
   el_eta_fakes_VV_stack_1->SetBinError(5,0.09719337);
   el_eta_fakes_VV_stack_1->SetBinError(6,0.1374522);
   el_eta_fakes_VV_stack_1->SetBinError(7,0.09719337);
   el_eta_fakes_VV_stack_1->SetBinError(8,0.09719337);
   el_eta_fakes_VV_stack_1->SetBinError(9,0.1374522);
   el_eta_fakes_VV_stack_1->SetBinError(10,0.1374522);
   el_eta_fakes_VV_stack_1->SetEntries(28);

   ci = TColor::GetColor("#2e3294");
   el_eta_fakes_VV_stack_1->SetFillColor(ci);
   el_eta_fakes_VV_stack_1->SetMarkerStyle(0);
   el_eta_fakes_VV_stack_1->SetMarkerSize(1.1);
   el_eta_fakes_VV_stack_1->GetXaxis()->SetTitle("#eta(e)");
   el_eta_fakes_VV_stack_1->GetXaxis()->SetMoreLogLabels();
   el_eta_fakes_VV_stack_1->GetXaxis()->SetLabelFont(42);
   el_eta_fakes_VV_stack_1->GetXaxis()->SetLabelOffset(0.007);
   el_eta_fakes_VV_stack_1->GetXaxis()->SetLabelSize(0.05);
   el_eta_fakes_VV_stack_1->GetXaxis()->SetTitleSize(0.06);
   el_eta_fakes_VV_stack_1->GetXaxis()->SetTitleOffset(0.9);
   el_eta_fakes_VV_stack_1->GetXaxis()->SetTitleFont(42);
   el_eta_fakes_VV_stack_1->GetYaxis()->SetTitle("Electrons");
   el_eta_fakes_VV_stack_1->GetYaxis()->SetLabelFont(42);
   el_eta_fakes_VV_stack_1->GetYaxis()->SetLabelOffset(0.007);
   el_eta_fakes_VV_stack_1->GetYaxis()->SetLabelSize(0.05);
   el_eta_fakes_VV_stack_1->GetYaxis()->SetTitleSize(0.06);
   el_eta_fakes_VV_stack_1->GetYaxis()->SetTitleOffset(1.35);
   el_eta_fakes_VV_stack_1->GetYaxis()->SetTitleFont(42);
   el_eta_fakes_VV_stack_1->GetZaxis()->SetLabelFont(42);
   el_eta_fakes_VV_stack_1->GetZaxis()->SetLabelOffset(0.007);
   el_eta_fakes_VV_stack_1->GetZaxis()->SetLabelSize(0.05);
   el_eta_fakes_VV_stack_1->GetZaxis()->SetTitleSize(0.06);
   el_eta_fakes_VV_stack_1->GetZaxis()->SetTitleFont(42);
   el_eta_stack->Add(el_eta_fakes_VV_stack_1,"");
   
   TH1D *el_eta_fakes_TT_stack_2 = new TH1D("el_eta_fakes_TT_stack_2","dummy",10,-2.5,2.5);
   el_eta_fakes_TT_stack_2->SetBinContent(0,166.4003);
   el_eta_fakes_TT_stack_2->SetBinContent(1,3.058734);
   el_eta_fakes_TT_stack_2->SetBinContent(2,4.72109);
   el_eta_fakes_TT_stack_2->SetBinContent(3,4.521607);
   el_eta_fakes_TT_stack_2->SetBinContent(4,6.761571);
   el_eta_fakes_TT_stack_2->SetBinContent(5,7.293525);
   el_eta_fakes_TT_stack_2->SetBinContent(6,8.311778);
   el_eta_fakes_TT_stack_2->SetBinContent(7,5.897146);
   el_eta_fakes_TT_stack_2->SetBinContent(8,5.120055);
   el_eta_fakes_TT_stack_2->SetBinContent(9,4.72109);
   el_eta_fakes_TT_stack_2->SetBinContent(10,3.370365);
   el_eta_fakes_TT_stack_2->SetBinError(0,3.368489);
   el_eta_fakes_TT_stack_2->SetBinError(1,0.4509858);
   el_eta_fakes_TT_stack_2->SetBinError(2,0.5602903);
   el_eta_fakes_TT_stack_2->SetBinError(3,0.5483254);
   el_eta_fakes_TT_stack_2->SetBinError(4,0.6808586);
   el_eta_fakes_TT_stack_2->SetBinError(5,0.7000695);
   el_eta_fakes_TT_stack_2->SetBinError(6,0.743428);
   el_eta_fakes_TT_stack_2->SetBinError(7,0.6302747);
   el_eta_fakes_TT_stack_2->SetBinError(8,0.5910136);
   el_eta_fakes_TT_stack_2->SetBinError(9,0.5602903);
   el_eta_fakes_TT_stack_2->SetBinError(10,0.4787796);
   el_eta_fakes_TT_stack_2->SetEntries(3332);

   ci = TColor::GetColor("#666666");
   el_eta_fakes_TT_stack_2->SetFillColor(ci);
   el_eta_fakes_TT_stack_2->SetMarkerStyle(0);
   el_eta_fakes_TT_stack_2->SetMarkerSize(1.1);
   el_eta_fakes_TT_stack_2->GetXaxis()->SetTitle("#eta(e)");
   el_eta_fakes_TT_stack_2->GetXaxis()->SetMoreLogLabels();
   el_eta_fakes_TT_stack_2->GetXaxis()->SetLabelFont(42);
   el_eta_fakes_TT_stack_2->GetXaxis()->SetLabelOffset(0.007);
   el_eta_fakes_TT_stack_2->GetXaxis()->SetLabelSize(0.05);
   el_eta_fakes_TT_stack_2->GetXaxis()->SetTitleSize(0.06);
   el_eta_fakes_TT_stack_2->GetXaxis()->SetTitleOffset(0.9);
   el_eta_fakes_TT_stack_2->GetXaxis()->SetTitleFont(42);
   el_eta_fakes_TT_stack_2->GetYaxis()->SetTitle("Electrons");
   el_eta_fakes_TT_stack_2->GetYaxis()->SetLabelFont(42);
   el_eta_fakes_TT_stack_2->GetYaxis()->SetLabelOffset(0.007);
   el_eta_fakes_TT_stack_2->GetYaxis()->SetLabelSize(0.05);
   el_eta_fakes_TT_stack_2->GetYaxis()->SetTitleSize(0.06);
   el_eta_fakes_TT_stack_2->GetYaxis()->SetTitleOffset(1.35);
   el_eta_fakes_TT_stack_2->GetYaxis()->SetTitleFont(42);
   el_eta_fakes_TT_stack_2->GetZaxis()->SetLabelFont(42);
   el_eta_fakes_TT_stack_2->GetZaxis()->SetLabelOffset(0.007);
   el_eta_fakes_TT_stack_2->GetZaxis()->SetLabelSize(0.05);
   el_eta_fakes_TT_stack_2->GetZaxis()->SetTitleSize(0.06);
   el_eta_fakes_TT_stack_2->GetZaxis()->SetTitleFont(42);
   el_eta_stack->Add(el_eta_fakes_TT_stack_2,"");
   
   TH1D *el_eta_fakes_DY_stack_3 = new TH1D("el_eta_fakes_DY_stack_3","dummy",10,-2.5,2.5);
   el_eta_fakes_DY_stack_3->SetBinContent(0,330.1482);
   el_eta_fakes_DY_stack_3->SetBinContent(1,22.35379);
   el_eta_fakes_DY_stack_3->SetBinContent(2,12.03665);
   el_eta_fakes_DY_stack_3->SetBinContent(3,18.91474);
   el_eta_fakes_DY_stack_3->SetBinContent(4,8.597611);
   el_eta_fakes_DY_stack_3->SetBinContent(5,8.597611);
   el_eta_fakes_DY_stack_3->SetBinContent(6,6.878088);
   el_eta_fakes_DY_stack_3->SetBinContent(7,8.597611);
   el_eta_fakes_DY_stack_3->SetBinContent(8,18.91474);
   el_eta_fakes_DY_stack_3->SetBinContent(9,18.91474);
   el_eta_fakes_DY_stack_3->SetBinContent(10,13.75618);
   el_eta_fakes_DY_stack_3->SetBinError(0,23.8264);
   el_eta_fakes_DY_stack_3->SetBinError(1,6.199825);
   el_eta_fakes_DY_stack_3->SetBinError(2,4.549428);
   el_eta_fakes_DY_stack_3->SetBinError(3,5.70301);
   el_eta_fakes_DY_stack_3->SetBinError(4,3.844968);
   el_eta_fakes_DY_stack_3->SetBinError(5,3.844968);
   el_eta_fakes_DY_stack_3->SetBinError(6,3.439044);
   el_eta_fakes_DY_stack_3->SetBinError(7,3.844968);
   el_eta_fakes_DY_stack_3->SetBinError(8,5.70301);
   el_eta_fakes_DY_stack_3->SetBinError(9,5.70301);
   el_eta_fakes_DY_stack_3->SetBinError(10,4.863543);
   el_eta_fakes_DY_stack_3->SetEntries(272);

   ci = TColor::GetColor("#cccccc");
   el_eta_fakes_DY_stack_3->SetFillColor(ci);
   el_eta_fakes_DY_stack_3->SetMarkerStyle(0);
   el_eta_fakes_DY_stack_3->SetMarkerSize(1.1);
   el_eta_fakes_DY_stack_3->GetXaxis()->SetTitle("#eta(e)");
   el_eta_fakes_DY_stack_3->GetXaxis()->SetMoreLogLabels();
   el_eta_fakes_DY_stack_3->GetXaxis()->SetLabelFont(42);
   el_eta_fakes_DY_stack_3->GetXaxis()->SetLabelOffset(0.007);
   el_eta_fakes_DY_stack_3->GetXaxis()->SetLabelSize(0.05);
   el_eta_fakes_DY_stack_3->GetXaxis()->SetTitleSize(0.06);
   el_eta_fakes_DY_stack_3->GetXaxis()->SetTitleOffset(0.9);
   el_eta_fakes_DY_stack_3->GetXaxis()->SetTitleFont(42);
   el_eta_fakes_DY_stack_3->GetYaxis()->SetTitle("Electrons");
   el_eta_fakes_DY_stack_3->GetYaxis()->SetLabelFont(42);
   el_eta_fakes_DY_stack_3->GetYaxis()->SetLabelOffset(0.007);
   el_eta_fakes_DY_stack_3->GetYaxis()->SetLabelSize(0.05);
   el_eta_fakes_DY_stack_3->GetYaxis()->SetTitleSize(0.06);
   el_eta_fakes_DY_stack_3->GetYaxis()->SetTitleOffset(1.35);
   el_eta_fakes_DY_stack_3->GetYaxis()->SetTitleFont(42);
   el_eta_fakes_DY_stack_3->GetZaxis()->SetLabelFont(42);
   el_eta_fakes_DY_stack_3->GetZaxis()->SetLabelOffset(0.007);
   el_eta_fakes_DY_stack_3->GetZaxis()->SetLabelSize(0.05);
   el_eta_fakes_DY_stack_3->GetZaxis()->SetTitleSize(0.06);
   el_eta_fakes_DY_stack_3->GetZaxis()->SetTitleFont(42);
   el_eta_stack->Add(el_eta_fakes_DY_stack_3,"");
   
   TH1D *el_eta_prompt_ZZ_stack_4 = new TH1D("el_eta_prompt_ZZ_stack_4","dummy",10,-2.5,2.5);
   el_eta_prompt_ZZ_stack_4->SetBinContent(0,216.5128);
   el_eta_prompt_ZZ_stack_4->SetBinContent(1,5.688048);
   el_eta_prompt_ZZ_stack_4->SetBinContent(2,5.688048);
   el_eta_prompt_ZZ_stack_4->SetBinContent(3,6.972446);
   el_eta_prompt_ZZ_stack_4->SetBinContent(4,8.073358);
   el_eta_prompt_ZZ_stack_4->SetBinContent(5,9.357756);
   el_eta_prompt_ZZ_stack_4->SetBinContent(6,12.29352);
   el_eta_prompt_ZZ_stack_4->SetBinContent(7,9.724727);
   el_eta_prompt_ZZ_stack_4->SetBinContent(8,5.871533);
   el_eta_prompt_ZZ_stack_4->SetBinContent(9,7.522902);
   el_eta_prompt_ZZ_stack_4->SetBinContent(10,5.137591);
   el_eta_prompt_ZZ_stack_4->SetBinError(0,6.302931);
   el_eta_prompt_ZZ_stack_4->SetBinError(1,1.021604);
   el_eta_prompt_ZZ_stack_4->SetBinError(2,1.021604);
   el_eta_prompt_ZZ_stack_4->SetBinError(3,1.13108);
   el_eta_prompt_ZZ_stack_4->SetBinError(4,1.217105);
   el_eta_prompt_ZZ_stack_4->SetBinError(5,1.310348);
   el_eta_prompt_ZZ_stack_4->SetBinError(6,1.501893);
   el_eta_prompt_ZZ_stack_4->SetBinError(7,1.335794);
   el_eta_prompt_ZZ_stack_4->SetBinError(8,1.03795);
   el_eta_prompt_ZZ_stack_4->SetBinError(9,1.17488);
   el_eta_prompt_ZZ_stack_4->SetBinError(10,0.9709135);
   el_eta_prompt_ZZ_stack_4->SetEntries(1596);

   ci = TColor::GetColor("#00cc00");
   el_eta_prompt_ZZ_stack_4->SetFillColor(ci);
   el_eta_prompt_ZZ_stack_4->SetMarkerStyle(0);
   el_eta_prompt_ZZ_stack_4->SetMarkerSize(1.1);
   el_eta_prompt_ZZ_stack_4->GetXaxis()->SetTitle("#eta(e)");
   el_eta_prompt_ZZ_stack_4->GetXaxis()->SetMoreLogLabels();
   el_eta_prompt_ZZ_stack_4->GetXaxis()->SetLabelFont(42);
   el_eta_prompt_ZZ_stack_4->GetXaxis()->SetLabelOffset(0.007);
   el_eta_prompt_ZZ_stack_4->GetXaxis()->SetLabelSize(0.05);
   el_eta_prompt_ZZ_stack_4->GetXaxis()->SetTitleSize(0.06);
   el_eta_prompt_ZZ_stack_4->GetXaxis()->SetTitleOffset(0.9);
   el_eta_prompt_ZZ_stack_4->GetXaxis()->SetTitleFont(42);
   el_eta_prompt_ZZ_stack_4->GetYaxis()->SetTitle("Electrons");
   el_eta_prompt_ZZ_stack_4->GetYaxis()->SetLabelFont(42);
   el_eta_prompt_ZZ_stack_4->GetYaxis()->SetLabelOffset(0.007);
   el_eta_prompt_ZZ_stack_4->GetYaxis()->SetLabelSize(0.05);
   el_eta_prompt_ZZ_stack_4->GetYaxis()->SetTitleSize(0.06);
   el_eta_prompt_ZZ_stack_4->GetYaxis()->SetTitleOffset(1.35);
   el_eta_prompt_ZZ_stack_4->GetYaxis()->SetTitleFont(42);
   el_eta_prompt_ZZ_stack_4->GetZaxis()->SetLabelFont(42);
   el_eta_prompt_ZZ_stack_4->GetZaxis()->SetLabelOffset(0.007);
   el_eta_prompt_ZZ_stack_4->GetZaxis()->SetLabelSize(0.05);
   el_eta_prompt_ZZ_stack_4->GetZaxis()->SetTitleSize(0.06);
   el_eta_prompt_ZZ_stack_4->GetZaxis()->SetTitleFont(42);
   el_eta_stack->Add(el_eta_prompt_ZZ_stack_4,"");
   
   TH1D *el_eta_prompt_WZ_stack_5 = new TH1D("el_eta_prompt_WZ_stack_5","dummy",10,-2.5,2.5);
   el_eta_prompt_WZ_stack_5->SetBinContent(0,3577.67);
   el_eta_prompt_WZ_stack_5->SetBinContent(1,77.78527);
   el_eta_prompt_WZ_stack_5->SetBinContent(2,110.7083);
   el_eta_prompt_WZ_stack_5->SetBinContent(3,137.1192);
   el_eta_prompt_WZ_stack_5->SetBinContent(4,179.087);
   el_eta_prompt_WZ_stack_5->SetBinContent(5,199.8901);
   el_eta_prompt_WZ_stack_5->SetBinContent(6,204.5029);
   el_eta_prompt_WZ_stack_5->SetBinContent(7,183.9712);
   el_eta_prompt_WZ_stack_5->SetBinContent(8,140.7371);
   el_eta_prompt_WZ_stack_5->SetBinContent(9,111.1606);
   el_eta_prompt_WZ_stack_5->SetBinContent(10,77.69482);
   el_eta_prompt_WZ_stack_5->SetBinError(0,17.98869);
   el_eta_prompt_WZ_stack_5->SetBinError(1,2.652456);
   el_eta_prompt_WZ_stack_5->SetBinError(2,3.164387);
   el_eta_prompt_WZ_stack_5->SetBinError(3,3.521669);
   el_eta_prompt_WZ_stack_5->SetBinError(4,4.024681);
   el_eta_prompt_WZ_stack_5->SetBinError(5,4.252018);
   el_eta_prompt_WZ_stack_5->SetBinError(6,4.3008);
   el_eta_prompt_WZ_stack_5->SetBinError(7,4.079194);
   el_eta_prompt_WZ_stack_5->SetBinError(8,3.567826);
   el_eta_prompt_WZ_stack_5->SetBinError(9,3.170844);
   el_eta_prompt_WZ_stack_5->SetBinError(10,2.650913);
   el_eta_prompt_WZ_stack_5->SetEntries(55284);

   ci = TColor::GetColor("#ffcc00");
   el_eta_prompt_WZ_stack_5->SetFillColor(ci);
   el_eta_prompt_WZ_stack_5->SetMarkerStyle(0);
   el_eta_prompt_WZ_stack_5->SetMarkerSize(1.1);
   el_eta_prompt_WZ_stack_5->GetXaxis()->SetTitle("#eta(e)");
   el_eta_prompt_WZ_stack_5->GetXaxis()->SetMoreLogLabels();
   el_eta_prompt_WZ_stack_5->GetXaxis()->SetLabelFont(42);
   el_eta_prompt_WZ_stack_5->GetXaxis()->SetLabelOffset(0.007);
   el_eta_prompt_WZ_stack_5->GetXaxis()->SetLabelSize(0.05);
   el_eta_prompt_WZ_stack_5->GetXaxis()->SetTitleSize(0.06);
   el_eta_prompt_WZ_stack_5->GetXaxis()->SetTitleOffset(0.9);
   el_eta_prompt_WZ_stack_5->GetXaxis()->SetTitleFont(42);
   el_eta_prompt_WZ_stack_5->GetYaxis()->SetTitle("Electrons");
   el_eta_prompt_WZ_stack_5->GetYaxis()->SetLabelFont(42);
   el_eta_prompt_WZ_stack_5->GetYaxis()->SetLabelOffset(0.007);
   el_eta_prompt_WZ_stack_5->GetYaxis()->SetLabelSize(0.05);
   el_eta_prompt_WZ_stack_5->GetYaxis()->SetTitleSize(0.06);
   el_eta_prompt_WZ_stack_5->GetYaxis()->SetTitleOffset(1.35);
   el_eta_prompt_WZ_stack_5->GetYaxis()->SetTitleFont(42);
   el_eta_prompt_WZ_stack_5->GetZaxis()->SetLabelFont(42);
   el_eta_prompt_WZ_stack_5->GetZaxis()->SetLabelOffset(0.007);
   el_eta_prompt_WZ_stack_5->GetZaxis()->SetLabelSize(0.05);
   el_eta_prompt_WZ_stack_5->GetZaxis()->SetTitleSize(0.06);
   el_eta_prompt_WZ_stack_5->GetZaxis()->SetTitleFont(42);
   el_eta_stack->Add(el_eta_prompt_WZ_stack_5,"");
   el_eta_stack->Draw("same hist");
   
   TH1D *el_eta_total__14 = new TH1D("el_eta_total__14","dummy",10,-2.5,2.5);
   el_eta_total__14->SetBinContent(0,4292.287);
   el_eta_total__14->SetBinContent(1,108.983);
   el_eta_total__14->SetBinContent(2,133.2513);
   el_eta_total__14->SetBinContent(3,167.6251);
   el_eta_total__14->SetBinContent(4,202.5196);
   el_eta_total__14->SetBinContent(5,225.2361);
   el_eta_total__14->SetBinContent(6,232.1807);
   el_eta_total__14->SetBinContent(7,208.2879);
   el_eta_total__14->SetBinContent(8,170.7406);
   el_eta_total__14->SetBinContent(9,142.5137);
   el_eta_total__14->SetBinContent(10,100.1533);
   el_eta_total__14->SetBinError(0,30.70041);
   el_eta_total__14->SetBinError(1,6.835924);
   el_eta_total__14->SetBinError(2,5.663717);
   el_eta_total__14->SetBinError(3,6.820258);
   el_eta_total__14->SetBinError(4,5.738184);
   el_eta_total__14->SetBinError(5,5.922836);
   el_eta_total__14->SetBinError(6,5.757705);
   el_eta_total__14->SetBinError(7,5.797814);
   el_eta_total__14->SetBinError(8,6.832993);
   el_eta_total__14->SetBinError(9,6.655203);
   el_eta_total__14->SetBinError(10,5.645546);
   el_eta_total__14->SetMinimum(0);
   el_eta_total__14->SetMaximum(358.8602);
   el_eta_total__14->SetEntries(60512);
   el_eta_total__14->SetDirectory(0);

   ci = TColor::GetColor("#00cc00");
   el_eta_total__14->SetFillColor(ci);
   el_eta_total__14->SetMarkerStyle(20);
   el_eta_total__14->SetMarkerSize(1.1);
   el_eta_total__14->GetXaxis()->SetTitle("#eta(e)");
   el_eta_total__14->GetXaxis()->SetMoreLogLabels();
   el_eta_total__14->GetXaxis()->SetLabelFont(42);
   el_eta_total__14->GetXaxis()->SetLabelOffset(999);
   el_eta_total__14->GetXaxis()->SetLabelSize(0.05);
   el_eta_total__14->GetXaxis()->SetTitleSize(0.05);
   el_eta_total__14->GetXaxis()->SetTitleOffset(999);
   el_eta_total__14->GetXaxis()->SetTitleFont(42);
   el_eta_total__14->GetYaxis()->SetTitle("Electrons");
   el_eta_total__14->GetYaxis()->SetLabelFont(42);
   el_eta_total__14->GetYaxis()->SetLabelOffset(0.007);
   el_eta_total__14->GetYaxis()->SetLabelSize(0.05);
   el_eta_total__14->GetYaxis()->SetTitleSize(0.06);
   el_eta_total__14->GetYaxis()->SetTitleOffset(1.48);
   el_eta_total__14->GetYaxis()->SetTitleFont(42);
   el_eta_total__14->GetZaxis()->SetLabelFont(42);
   el_eta_total__14->GetZaxis()->SetLabelOffset(0.007);
   el_eta_total__14->GetZaxis()->SetLabelSize(0.05);
   el_eta_total__14->GetZaxis()->SetTitleSize(0.06);
   el_eta_total__14->GetZaxis()->SetTitleFont(42);
   el_eta_total__14->Draw("AXIS SAME");
   
   Double_t el_eta_total_errors_fx3016[10] = {
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
   Double_t el_eta_total_errors_fy3016[10] = {
   108.983,
   133.2513,
   167.6251,
   202.5196,
   225.2361,
   232.1807,
   208.2879,
   170.7406,
   142.5137,
   100.1533};
   Double_t el_eta_total_errors_felx3016[10] = {
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
   Double_t el_eta_total_errors_fely3016[10] = {
   6.835924,
   5.663717,
   6.820258,
   5.738184,
   5.922836,
   5.757705,
   5.797814,
   6.832993,
   6.655203,
   5.645546};
   Double_t el_eta_total_errors_fehx3016[10] = {
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
   Double_t el_eta_total_errors_fehy3016[10] = {
   6.835924,
   5.663717,
   6.820258,
   5.738184,
   5.922836,
   5.757705,
   5.797814,
   6.832993,
   6.655203,
   5.645546};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(10,el_eta_total_errors_fx3016,el_eta_total_errors_fy3016,el_eta_total_errors_felx3016,el_eta_total_errors_fehx3016,el_eta_total_errors_fely3016,el_eta_total_errors_fehy3016);
   grae->SetName("el_eta_total_errors");
   grae->SetTitle("Graph");
   grae->SetFillColor(1);
   grae->SetFillStyle(3013);
   grae->SetMarkerStyle(0);
   
   TH1F *Graph_el_eta_total_errors3016 = new TH1F("Graph_el_eta_total_errors3016","Graph",100,-3,3);
   Graph_el_eta_total_errors3016->SetMinimum(80.16474);
   Graph_el_eta_total_errors3016->SetMaximum(252.2814);
   Graph_el_eta_total_errors3016->SetDirectory(0);
   Graph_el_eta_total_errors3016->SetStats(0);
   Graph_el_eta_total_errors3016->SetLineStyle(0);
   Graph_el_eta_total_errors3016->SetMarkerStyle(20);
   Graph_el_eta_total_errors3016->GetXaxis()->SetLabelFont(42);
   Graph_el_eta_total_errors3016->GetXaxis()->SetLabelOffset(0.007);
   Graph_el_eta_total_errors3016->GetXaxis()->SetLabelSize(0.05);
   Graph_el_eta_total_errors3016->GetXaxis()->SetTitleSize(0.06);
   Graph_el_eta_total_errors3016->GetXaxis()->SetTitleOffset(0.9);
   Graph_el_eta_total_errors3016->GetXaxis()->SetTitleFont(42);
   Graph_el_eta_total_errors3016->GetYaxis()->SetLabelFont(42);
   Graph_el_eta_total_errors3016->GetYaxis()->SetLabelOffset(0.007);
   Graph_el_eta_total_errors3016->GetYaxis()->SetLabelSize(0.05);
   Graph_el_eta_total_errors3016->GetYaxis()->SetTitleSize(0.06);
   Graph_el_eta_total_errors3016->GetYaxis()->SetTitleOffset(1.35);
   Graph_el_eta_total_errors3016->GetYaxis()->SetTitleFont(42);
   Graph_el_eta_total_errors3016->GetZaxis()->SetLabelFont(42);
   Graph_el_eta_total_errors3016->GetZaxis()->SetLabelOffset(0.007);
   Graph_el_eta_total_errors3016->GetZaxis()->SetLabelSize(0.05);
   Graph_el_eta_total_errors3016->GetZaxis()->SetTitleSize(0.06);
   Graph_el_eta_total_errors3016->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_el_eta_total_errors3016);
   
   grae->Draw("pe2 ");
   
   Double_t el_eta_data_graph_fx3017[10] = {
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
   Double_t el_eta_data_graph_fy3017[10] = {
   109,
   132,
   163,
   218,
   254,
   247,
   207,
   169,
   123,
   103};
   Double_t el_eta_data_graph_felx3017[10] = {
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
   Double_t el_eta_data_graph_fely3017[10] = {
   10.42448,
   11.47479,
   12.75431,
   14.75381,
   15.92722,
   15.70592,
   14.37617,
   12.9874,
   11.07567,
   10.1326};
   Double_t el_eta_data_graph_fehx3017[10] = {
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
   Double_t el_eta_data_graph_fehy3017[10] = {
   11.4725,
   12.51843,
   13.79357,
   15.78775,
   16.95867,
   16.73782,
   15.41101,
   14.02596,
   12.12087,
   11.182};
   grae = new TGraphAsymmErrors(10,el_eta_data_graph_fx3017,el_eta_data_graph_fy3017,el_eta_data_graph_felx3017,el_eta_data_graph_fehx3017,el_eta_data_graph_fely3017,el_eta_data_graph_fehy3017);
   grae->SetName("el_eta_data_graph");
   grae->SetTitle("Graph");
   grae->SetFillStyle(1000);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.1);
   
   TH1F *Graph_el_eta_data_graph3017 = new TH1F("Graph_el_eta_data_graph3017","Graph",100,-3,3);
   Graph_el_eta_data_graph3017->SetMinimum(75.05827);
   Graph_el_eta_data_graph3017->SetMaximum(288.7678);
   Graph_el_eta_data_graph3017->SetDirectory(0);
   Graph_el_eta_data_graph3017->SetStats(0);
   Graph_el_eta_data_graph3017->SetLineStyle(0);
   Graph_el_eta_data_graph3017->SetMarkerStyle(20);
   Graph_el_eta_data_graph3017->GetXaxis()->SetLabelFont(42);
   Graph_el_eta_data_graph3017->GetXaxis()->SetLabelOffset(0.007);
   Graph_el_eta_data_graph3017->GetXaxis()->SetLabelSize(0.05);
   Graph_el_eta_data_graph3017->GetXaxis()->SetTitleSize(0.06);
   Graph_el_eta_data_graph3017->GetXaxis()->SetTitleOffset(0.9);
   Graph_el_eta_data_graph3017->GetXaxis()->SetTitleFont(42);
   Graph_el_eta_data_graph3017->GetYaxis()->SetLabelFont(42);
   Graph_el_eta_data_graph3017->GetYaxis()->SetLabelOffset(0.007);
   Graph_el_eta_data_graph3017->GetYaxis()->SetLabelSize(0.05);
   Graph_el_eta_data_graph3017->GetYaxis()->SetTitleSize(0.06);
   Graph_el_eta_data_graph3017->GetYaxis()->SetTitleOffset(1.35);
   Graph_el_eta_data_graph3017->GetYaxis()->SetTitleFont(42);
   Graph_el_eta_data_graph3017->GetZaxis()->SetLabelFont(42);
   Graph_el_eta_data_graph3017->GetZaxis()->SetLabelOffset(0.007);
   Graph_el_eta_data_graph3017->GetZaxis()->SetLabelSize(0.05);
   Graph_el_eta_data_graph3017->GetZaxis()->SetTitleSize(0.06);
   Graph_el_eta_data_graph3017->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_el_eta_data_graph3017);
   
   grae->Draw("pz ");
   
   TLegend *leg = new TLegend(0.62,0.628,0.9,0.91,NULL,"brNDC");
   leg->SetBorderSize(1);
   leg->SetTextSize(0.036);
   leg->SetLineColor(0);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("el_eta_data","Data","LPE");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1.1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("el_eta_prompt_WZ_stack_5","WZ","F");

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
   entry=leg->AddEntry("el_eta_prompt_ZZ_stack_4","qqZZ","F");

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
   entry=leg->AddEntry("el_eta_fakes_DY_stack_3","Fakes DY","F");

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
   entry=leg->AddEntry("el_eta_fakes_TT_stack_2","Fakes TT","F");

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
   entry=leg->AddEntry("el_eta_total_errors","Total unc.","F");
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
   el_eta_canvas->cd();
  
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
   
   TH1D *el_eta_total__15 = new TH1D("el_eta_total__15","dummy",10,-2.5,2.5);
   el_eta_total__15->SetBinContent(0,4292.287);
   el_eta_total__15->SetBinContent(1,1);
   el_eta_total__15->SetBinContent(2,1);
   el_eta_total__15->SetBinContent(3,1);
   el_eta_total__15->SetBinContent(4,1);
   el_eta_total__15->SetBinContent(5,1);
   el_eta_total__15->SetBinContent(6,1);
   el_eta_total__15->SetBinContent(7,1);
   el_eta_total__15->SetBinContent(8,1);
   el_eta_total__15->SetBinContent(9,1);
   el_eta_total__15->SetBinContent(10,1);
   el_eta_total__15->SetBinError(0,30.70041);
   el_eta_total__15->SetMinimum(0.5);
   el_eta_total__15->SetMaximum(2);
   el_eta_total__15->SetEntries(60522);

   ci = TColor::GetColor("#00cc00");
   el_eta_total__15->SetFillColor(ci);

   ci = TColor::GetColor("#6666ff");
   el_eta_total__15->SetMarkerColor(ci);
   el_eta_total__15->SetMarkerSize(1.1);
   el_eta_total__15->GetXaxis()->SetTitle("#eta(e)");
   el_eta_total__15->GetXaxis()->SetMoreLogLabels();
   el_eta_total__15->GetXaxis()->SetLabelFont(42);
   el_eta_total__15->GetXaxis()->SetLabelOffset(0.015);
   el_eta_total__15->GetXaxis()->SetLabelSize(0.1);
   el_eta_total__15->GetXaxis()->SetTitleSize(0.14);
   el_eta_total__15->GetXaxis()->SetTitleFont(42);
   el_eta_total__15->GetYaxis()->SetTitle("Data/pred.");
   el_eta_total__15->GetYaxis()->SetDecimals();
   el_eta_total__15->GetYaxis()->SetNdivisions(505);
   el_eta_total__15->GetYaxis()->SetLabelFont(42);
   el_eta_total__15->GetYaxis()->SetLabelOffset(0.01);
   el_eta_total__15->GetYaxis()->SetLabelSize(0.11);
   el_eta_total__15->GetYaxis()->SetTitleSize(0.14);
   el_eta_total__15->GetYaxis()->SetTitleOffset(0.62);
   el_eta_total__15->GetYaxis()->SetTitleFont(42);
   el_eta_total__15->GetZaxis()->SetLabelFont(42);
   el_eta_total__15->GetZaxis()->SetLabelOffset(0.007);
   el_eta_total__15->GetZaxis()->SetLabelSize(0.05);
   el_eta_total__15->GetZaxis()->SetTitleSize(0.06);
   el_eta_total__15->GetZaxis()->SetTitleFont(42);
   el_eta_total__15->Draw("AXIS");
   
   Double_t el_eta_total_errors_fx3018[10] = {
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
   Double_t el_eta_total_errors_fy3018[10] = {
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
   Double_t el_eta_total_errors_felx3018[10] = {
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
   Double_t el_eta_total_errors_fely3018[10] = {
   0.06272467,
   0.04250402,
   0.04068756,
   0.02833397,
   0.02629612,
   0.02479838,
   0.02783558,
   0.04001973,
   0.04669869,
   0.05636902};
   Double_t el_eta_total_errors_fehx3018[10] = {
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
   Double_t el_eta_total_errors_fehy3018[10] = {
   0.06272467,
   0.04250402,
   0.04068756,
   0.02833397,
   0.02629612,
   0.02479838,
   0.02783558,
   0.04001973,
   0.04669869,
   0.05636902};
   grae = new TGraphAsymmErrors(10,el_eta_total_errors_fx3018,el_eta_total_errors_fy3018,el_eta_total_errors_felx3018,el_eta_total_errors_fehx3018,el_eta_total_errors_fely3018,el_eta_total_errors_fehy3018);
   grae->SetName("el_eta_total_errors");
   grae->SetTitle("Graph");

   ci = TColor::GetColor("#00ffff");
   grae->SetFillColor(ci);

   ci = TColor::GetColor("#00ffff");
   grae->SetMarkerColor(ci);
   grae->Draw("e2");
   
   Double_t el_eta_total_errors_fx3019[10] = {
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
   Double_t el_eta_total_errors_fy3019[10] = {
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
   Double_t el_eta_total_errors_felx3019[10] = {
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
   Double_t el_eta_total_errors_fely3019[10] = {
   0.06272467,
   0.04250402,
   0.04068756,
   0.02833397,
   0.02629612,
   0.02479838,
   0.02783558,
   0.04001973,
   0.04669869,
   0.05636902};
   Double_t el_eta_total_errors_fehx3019[10] = {
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
   Double_t el_eta_total_errors_fehy3019[10] = {
   0.06272467,
   0.04250402,
   0.04068756,
   0.02833397,
   0.02629612,
   0.02479838,
   0.02783558,
   0.04001973,
   0.04669869,
   0.05636902};
   grae = new TGraphAsymmErrors(10,el_eta_total_errors_fx3019,el_eta_total_errors_fy3019,el_eta_total_errors_felx3019,el_eta_total_errors_fehx3019,el_eta_total_errors_fely3019,el_eta_total_errors_fehy3019);
   grae->SetName("el_eta_total_errors");
   grae->SetTitle("Graph");

   ci = TColor::GetColor("#6666ff");
   grae->SetFillColor(ci);

   ci = TColor::GetColor("#6666ff");
   grae->SetMarkerColor(ci);
   grae->Draw("e2 ");
   
   TH1D *el_eta_total__16 = new TH1D("el_eta_total__16","dummy",10,-2.5,2.5);
   el_eta_total__16->SetBinContent(0,4292.287);
   el_eta_total__16->SetBinContent(1,1);
   el_eta_total__16->SetBinContent(2,1);
   el_eta_total__16->SetBinContent(3,1);
   el_eta_total__16->SetBinContent(4,1);
   el_eta_total__16->SetBinContent(5,1);
   el_eta_total__16->SetBinContent(6,1);
   el_eta_total__16->SetBinContent(7,1);
   el_eta_total__16->SetBinContent(8,1);
   el_eta_total__16->SetBinContent(9,1);
   el_eta_total__16->SetBinContent(10,1);
   el_eta_total__16->SetBinError(0,30.70041);
   el_eta_total__16->SetMinimum(0.5);
   el_eta_total__16->SetMaximum(2);
   el_eta_total__16->SetEntries(60522);

   ci = TColor::GetColor("#00cc00");
   el_eta_total__16->SetFillColor(ci);

   ci = TColor::GetColor("#6666ff");
   el_eta_total__16->SetMarkerColor(ci);
   el_eta_total__16->SetMarkerSize(1.1);
   el_eta_total__16->GetXaxis()->SetTitle("#eta(e)");
   el_eta_total__16->GetXaxis()->SetMoreLogLabels();
   el_eta_total__16->GetXaxis()->SetLabelFont(42);
   el_eta_total__16->GetXaxis()->SetLabelOffset(0.015);
   el_eta_total__16->GetXaxis()->SetLabelSize(0.1);
   el_eta_total__16->GetXaxis()->SetTitleSize(0.14);
   el_eta_total__16->GetXaxis()->SetTitleFont(42);
   el_eta_total__16->GetYaxis()->SetTitle("Data/pred.");
   el_eta_total__16->GetYaxis()->SetDecimals();
   el_eta_total__16->GetYaxis()->SetNdivisions(505);
   el_eta_total__16->GetYaxis()->SetLabelFont(42);
   el_eta_total__16->GetYaxis()->SetLabelOffset(0.01);
   el_eta_total__16->GetYaxis()->SetLabelSize(0.11);
   el_eta_total__16->GetYaxis()->SetTitleSize(0.14);
   el_eta_total__16->GetYaxis()->SetTitleOffset(0.62);
   el_eta_total__16->GetYaxis()->SetTitleFont(42);
   el_eta_total__16->GetZaxis()->SetLabelFont(42);
   el_eta_total__16->GetZaxis()->SetLabelOffset(0.007);
   el_eta_total__16->GetZaxis()->SetLabelSize(0.05);
   el_eta_total__16->GetZaxis()->SetTitleSize(0.06);
   el_eta_total__16->GetZaxis()->SetTitleFont(42);
   el_eta_total__16->Draw("AXIS SAME");
   TLine *line = new TLine(-2.5,1,2.5,1);
   line->SetLineColor(58);
   line->SetLineWidth(2);
   line->Draw();
   
   Double_t data_div_fx3020[10] = {
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
   Double_t data_div_fy3020[10] = {
   1.000156,
   0.9906093,
   0.9724078,
   1.076439,
   1.127705,
   1.063827,
   0.9938168,
   0.9898056,
   0.8630749,
   1.028423};
   Double_t data_div_felx3020[10] = {
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
   Double_t data_div_fely3020[10] = {
   0.09565235,
   0.08611392,
   0.07608826,
   0.07285126,
   0.07071343,
   0.06764527,
   0.06902068,
   0.0760651,
   0.07771654,
   0.1011708};
   Double_t data_div_fehx3020[10] = {
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
   Double_t data_div_fehy3020[10] = {
   0.1052687,
   0.093946,
   0.08228819,
   0.07795669,
   0.07529285,
   0.07208962,
   0.07398899,
   0.08214778,
   0.08505059,
   0.1116488};
   grae = new TGraphAsymmErrors(10,data_div_fx3020,data_div_fy3020,data_div_felx3020,data_div_fehx3020,data_div_fely3020,data_div_fehy3020);
   grae->SetName("data_div");
   grae->SetTitle("Graph");
   grae->SetFillStyle(1000);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.1);
   
   TH1F *Graph_el_eta_data_graph3020 = new TH1F("Graph_el_eta_data_graph3020","Graph",100,-3,3);
   Graph_el_eta_data_graph3020->SetMinimum(75.05827);
   Graph_el_eta_data_graph3020->SetMaximum(288.7678);
   Graph_el_eta_data_graph3020->SetDirectory(0);
   Graph_el_eta_data_graph3020->SetStats(0);
   Graph_el_eta_data_graph3020->SetLineStyle(0);
   Graph_el_eta_data_graph3020->SetMarkerStyle(20);
   Graph_el_eta_data_graph3020->GetXaxis()->SetLabelFont(42);
   Graph_el_eta_data_graph3020->GetXaxis()->SetLabelOffset(0.007);
   Graph_el_eta_data_graph3020->GetXaxis()->SetLabelSize(0.05);
   Graph_el_eta_data_graph3020->GetXaxis()->SetTitleSize(0.06);
   Graph_el_eta_data_graph3020->GetXaxis()->SetTitleOffset(0.9);
   Graph_el_eta_data_graph3020->GetXaxis()->SetTitleFont(42);
   Graph_el_eta_data_graph3020->GetYaxis()->SetLabelFont(42);
   Graph_el_eta_data_graph3020->GetYaxis()->SetLabelOffset(0.007);
   Graph_el_eta_data_graph3020->GetYaxis()->SetLabelSize(0.05);
   Graph_el_eta_data_graph3020->GetYaxis()->SetTitleSize(0.06);
   Graph_el_eta_data_graph3020->GetYaxis()->SetTitleOffset(1.35);
   Graph_el_eta_data_graph3020->GetYaxis()->SetTitleFont(42);
   Graph_el_eta_data_graph3020->GetZaxis()->SetLabelFont(42);
   Graph_el_eta_data_graph3020->GetZaxis()->SetLabelOffset(0.007);
   Graph_el_eta_data_graph3020->GetZaxis()->SetLabelSize(0.05);
   Graph_el_eta_data_graph3020->GetZaxis()->SetTitleSize(0.06);
   Graph_el_eta_data_graph3020->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_el_eta_data_graph3020);
   
   grae->Draw("pz ");
   
   leg = new TLegend(0,0,0,0,NULL,"brNDC");
   leg->SetBorderSize(1);
   leg->SetTextSize(0.084);
   leg->SetLineColor(0);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   entry=leg->AddEntry("el_eta_total_errors","stat. unc.","F");
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
   entry=leg->AddEntry("el_eta_total_errors","total unc.","F");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   leg->Draw();
   pad2->Modified();
   el_eta_canvas->cd();
   el_eta_canvas->Modified();
   el_eta_canvas->cd();
   el_eta_canvas->SetSelected(el_eta_canvas);
}
