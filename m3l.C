void m3l()
{
//=========Macro generated from canvas: m3l_canvas/m3l
//=========  (Fri Nov 18 12:59:44 2022) by ROOT version 6.12/07
   TCanvas *m3l_canvas = new TCanvas("m3l_canvas", "m3l",0,0,600,750);
   gStyle->SetOptFit(1);
   gStyle->SetOptStat(0);
   gStyle->SetOptTitle(0);
   m3l_canvas->SetHighLightColor(2);
   m3l_canvas->Range(0,0,1,1);
   m3l_canvas->SetFillColor(0);
   m3l_canvas->SetBorderMode(0);
   m3l_canvas->SetBorderSize(2);
   m3l_canvas->SetTickx(1);
   m3l_canvas->SetTicky(1);
   m3l_canvas->SetLeftMargin(0.18);
   m3l_canvas->SetRightMargin(0.04);
   m3l_canvas->SetBottomMargin(0.13);
   m3l_canvas->SetFrameFillStyle(0);
   m3l_canvas->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: pad1
   TPad *pad1 = new TPad("pad1", "pad1",0,0.3,1,1);
   pad1->Draw();
   pad1->cd();
   pad1->Range(-115.3846,-18.76585,525.641,731.868);
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
   
   TH1D *m3l_total__33 = new TH1D("m3l_total__33","dummy",10,0,500);
   m3l_total__33->SetBinContent(3,420.0578);
   m3l_total__33->SetBinContent(4,504.5951);
   m3l_total__33->SetBinContent(5,263.5938);
   m3l_total__33->SetBinContent(6,131.8256);
   m3l_total__33->SetBinContent(7,65.47507);
   m3l_total__33->SetBinContent(8,34.32158);
   m3l_total__33->SetBinContent(9,25.9593);
   m3l_total__33->SetBinContent(10,50.11621);
   m3l_total__33->SetBinError(3,11.50844);
   m3l_total__33->SetBinError(4,10.02723);
   m3l_total__33->SetBinError(5,7.450999);
   m3l_total__33->SetBinError(6,4.851472);
   m3l_total__33->SetBinError(7,2.473777);
   m3l_total__33->SetBinError(8,1.792265);
   m3l_total__33->SetBinError(9,1.579335);
   m3l_total__33->SetBinError(10,2.737962);
   m3l_total__33->SetMinimum(0);
   m3l_total__33->SetMaximum(686.83);
   m3l_total__33->SetEntries(15152);
   m3l_total__33->SetDirectory(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#00cc00");
   m3l_total__33->SetFillColor(ci);
   m3l_total__33->SetMarkerStyle(20);
   m3l_total__33->SetMarkerSize(1.1);
   m3l_total__33->GetXaxis()->SetTitle("m_{3L} (GeV)");
   m3l_total__33->GetXaxis()->SetMoreLogLabels();
   m3l_total__33->GetXaxis()->SetLabelFont(42);
   m3l_total__33->GetXaxis()->SetLabelOffset(999);
   m3l_total__33->GetXaxis()->SetLabelSize(0.05);
   m3l_total__33->GetXaxis()->SetTitleSize(0.05);
   m3l_total__33->GetXaxis()->SetTitleOffset(999);
   m3l_total__33->GetXaxis()->SetTitleFont(42);
   m3l_total__33->GetYaxis()->SetTitle("Events");
   m3l_total__33->GetYaxis()->SetLabelFont(42);
   m3l_total__33->GetYaxis()->SetLabelOffset(0.007);
   m3l_total__33->GetYaxis()->SetLabelSize(0.05);
   m3l_total__33->GetYaxis()->SetTitleSize(0.06);
   m3l_total__33->GetYaxis()->SetTitleOffset(1.48);
   m3l_total__33->GetYaxis()->SetTitleFont(42);
   m3l_total__33->GetZaxis()->SetLabelFont(42);
   m3l_total__33->GetZaxis()->SetLabelOffset(0.007);
   m3l_total__33->GetZaxis()->SetLabelSize(0.05);
   m3l_total__33->GetZaxis()->SetTitleSize(0.06);
   m3l_total__33->GetZaxis()->SetTitleFont(42);
   m3l_total__33->Draw("HIST");
   
   THStack *m3l_stack = new THStack();
   m3l_stack->SetName("m3l_stack");
   m3l_stack->SetTitle("m3l");
   
   TH1F *m3l_stack_stack_9 = new TH1F("m3l_stack_stack_9","m3l",10,0,500);
   m3l_stack_stack_9->SetMinimum(0);
   m3l_stack_stack_9->SetMaximum(529.8248);
   m3l_stack_stack_9->SetDirectory(0);
   m3l_stack_stack_9->SetStats(0);
   m3l_stack_stack_9->SetLineStyle(0);
   m3l_stack_stack_9->SetMarkerStyle(20);
   m3l_stack_stack_9->GetXaxis()->SetLabelFont(42);
   m3l_stack_stack_9->GetXaxis()->SetLabelOffset(0.007);
   m3l_stack_stack_9->GetXaxis()->SetLabelSize(0.05);
   m3l_stack_stack_9->GetXaxis()->SetTitleSize(0.06);
   m3l_stack_stack_9->GetXaxis()->SetTitleOffset(0.9);
   m3l_stack_stack_9->GetXaxis()->SetTitleFont(42);
   m3l_stack_stack_9->GetYaxis()->SetLabelFont(42);
   m3l_stack_stack_9->GetYaxis()->SetLabelOffset(0.007);
   m3l_stack_stack_9->GetYaxis()->SetLabelSize(0.05);
   m3l_stack_stack_9->GetYaxis()->SetTitleSize(0.06);
   m3l_stack_stack_9->GetYaxis()->SetTitleOffset(1.35);
   m3l_stack_stack_9->GetYaxis()->SetTitleFont(42);
   m3l_stack_stack_9->GetZaxis()->SetLabelFont(42);
   m3l_stack_stack_9->GetZaxis()->SetLabelOffset(0.007);
   m3l_stack_stack_9->GetZaxis()->SetLabelSize(0.05);
   m3l_stack_stack_9->GetZaxis()->SetTitleSize(0.06);
   m3l_stack_stack_9->GetZaxis()->SetTitleFont(42);
   m3l_stack->SetHistogram(m3l_stack_stack_9);
   
   
   TH1D *m3l_fakes_VV_stack_1 = new TH1D("m3l_fakes_VV_stack_1","dummy",10,0,500);
   m3l_fakes_VV_stack_1->SetBinContent(3,0.1943867);
   m3l_fakes_VV_stack_1->SetBinContent(4,0.1943867);
   m3l_fakes_VV_stack_1->SetBinContent(5,0.09719337);
   m3l_fakes_VV_stack_1->SetBinContent(6,0.09719337);
   m3l_fakes_VV_stack_1->SetBinContent(9,0.09719337);
   m3l_fakes_VV_stack_1->SetBinError(3,0.1374522);
   m3l_fakes_VV_stack_1->SetBinError(4,0.1374522);
   m3l_fakes_VV_stack_1->SetBinError(5,0.09719337);
   m3l_fakes_VV_stack_1->SetBinError(6,0.09719337);
   m3l_fakes_VV_stack_1->SetBinError(9,0.09719337);
   m3l_fakes_VV_stack_1->SetEntries(11);

   ci = TColor::GetColor("#2e3294");
   m3l_fakes_VV_stack_1->SetFillColor(ci);
   m3l_fakes_VV_stack_1->SetMarkerStyle(0);
   m3l_fakes_VV_stack_1->SetMarkerSize(1.1);
   m3l_fakes_VV_stack_1->GetXaxis()->SetTitle("m_{3L} (GeV)");
   m3l_fakes_VV_stack_1->GetXaxis()->SetMoreLogLabels();
   m3l_fakes_VV_stack_1->GetXaxis()->SetLabelFont(42);
   m3l_fakes_VV_stack_1->GetXaxis()->SetLabelOffset(0.007);
   m3l_fakes_VV_stack_1->GetXaxis()->SetLabelSize(0.05);
   m3l_fakes_VV_stack_1->GetXaxis()->SetTitleSize(0.06);
   m3l_fakes_VV_stack_1->GetXaxis()->SetTitleOffset(0.9);
   m3l_fakes_VV_stack_1->GetXaxis()->SetTitleFont(42);
   m3l_fakes_VV_stack_1->GetYaxis()->SetTitle("Events");
   m3l_fakes_VV_stack_1->GetYaxis()->SetLabelFont(42);
   m3l_fakes_VV_stack_1->GetYaxis()->SetLabelOffset(0.007);
   m3l_fakes_VV_stack_1->GetYaxis()->SetLabelSize(0.05);
   m3l_fakes_VV_stack_1->GetYaxis()->SetTitleSize(0.06);
   m3l_fakes_VV_stack_1->GetYaxis()->SetTitleOffset(1.35);
   m3l_fakes_VV_stack_1->GetYaxis()->SetTitleFont(42);
   m3l_fakes_VV_stack_1->GetZaxis()->SetLabelFont(42);
   m3l_fakes_VV_stack_1->GetZaxis()->SetLabelOffset(0.007);
   m3l_fakes_VV_stack_1->GetZaxis()->SetLabelSize(0.05);
   m3l_fakes_VV_stack_1->GetZaxis()->SetTitleSize(0.06);
   m3l_fakes_VV_stack_1->GetZaxis()->SetTitleFont(42);
   m3l_stack->Add(m3l_fakes_VV_stack_1,"");
   
   TH1D *m3l_fakes_TT_stack_2 = new TH1D("m3l_fakes_TT_stack_2","dummy",10,0,500);
   m3l_fakes_TT_stack_2->SetBinContent(3,16.07474);
   m3l_fakes_TT_stack_2->SetBinContent(4,19.6158);
   m3l_fakes_TT_stack_2->SetBinContent(5,10.06544);
   m3l_fakes_TT_stack_2->SetBinContent(6,4.567261);
   m3l_fakes_TT_stack_2->SetBinContent(7,2.127815);
   m3l_fakes_TT_stack_2->SetBinContent(8,1.196896);
   m3l_fakes_TT_stack_2->SetBinContent(9,0.3324711);
   m3l_fakes_TT_stack_2->SetBinContent(10,1.063908);
   m3l_fakes_TT_stack_2->SetBinError(3,1.052161);
   m3l_fakes_TT_stack_2->SetBinError(4,1.142076);
   m3l_fakes_TT_stack_2->SetBinError(5,0.8243384);
   m3l_fakes_TT_stack_2->SetBinError(6,0.5557127);
   m3l_fakes_TT_stack_2->SetBinError(7,0.4098979);
   m3l_fakes_TT_stack_2->SetBinError(8,0.2821111);
   m3l_fakes_TT_stack_2->SetBinError(9,0.1486856);
   m3l_fakes_TT_stack_2->SetBinError(10,0.2659769);
   m3l_fakes_TT_stack_2->SetEntries(841);

   ci = TColor::GetColor("#666666");
   m3l_fakes_TT_stack_2->SetFillColor(ci);
   m3l_fakes_TT_stack_2->SetMarkerStyle(0);
   m3l_fakes_TT_stack_2->SetMarkerSize(1.1);
   m3l_fakes_TT_stack_2->GetXaxis()->SetTitle("m_{3L} (GeV)");
   m3l_fakes_TT_stack_2->GetXaxis()->SetMoreLogLabels();
   m3l_fakes_TT_stack_2->GetXaxis()->SetLabelFont(42);
   m3l_fakes_TT_stack_2->GetXaxis()->SetLabelOffset(0.007);
   m3l_fakes_TT_stack_2->GetXaxis()->SetLabelSize(0.05);
   m3l_fakes_TT_stack_2->GetXaxis()->SetTitleSize(0.06);
   m3l_fakes_TT_stack_2->GetXaxis()->SetTitleOffset(0.9);
   m3l_fakes_TT_stack_2->GetXaxis()->SetTitleFont(42);
   m3l_fakes_TT_stack_2->GetYaxis()->SetTitle("Events");
   m3l_fakes_TT_stack_2->GetYaxis()->SetLabelFont(42);
   m3l_fakes_TT_stack_2->GetYaxis()->SetLabelOffset(0.007);
   m3l_fakes_TT_stack_2->GetYaxis()->SetLabelSize(0.05);
   m3l_fakes_TT_stack_2->GetYaxis()->SetTitleSize(0.06);
   m3l_fakes_TT_stack_2->GetYaxis()->SetTitleOffset(1.35);
   m3l_fakes_TT_stack_2->GetYaxis()->SetTitleFont(42);
   m3l_fakes_TT_stack_2->GetZaxis()->SetLabelFont(42);
   m3l_fakes_TT_stack_2->GetZaxis()->SetLabelOffset(0.007);
   m3l_fakes_TT_stack_2->GetZaxis()->SetLabelSize(0.05);
   m3l_fakes_TT_stack_2->GetZaxis()->SetTitleSize(0.06);
   m3l_fakes_TT_stack_2->GetZaxis()->SetTitleFont(42);
   m3l_stack->Add(m3l_fakes_TT_stack_2,"");
   
   TH1D *m3l_fakes_DY_stack_3 = new TH1D("m3l_fakes_DY_stack_3","dummy",10,0,500);
   m3l_fakes_DY_stack_3->SetBinContent(3,56.74423);
   m3l_fakes_DY_stack_3->SetBinContent(4,32.67092);
   m3l_fakes_DY_stack_3->SetBinContent(5,18.91474);
   m3l_fakes_DY_stack_3->SetBinContent(6,6.878088);
   m3l_fakes_DY_stack_3->SetBinContent(10,1.719522);
   m3l_fakes_DY_stack_3->SetBinError(3,9.877902);
   m3l_fakes_DY_stack_3->SetBinError(4,7.495223);
   m3l_fakes_DY_stack_3->SetBinError(5,5.70301);
   m3l_fakes_DY_stack_3->SetBinError(6,3.439044);
   m3l_fakes_DY_stack_3->SetBinError(10,1.719522);
   m3l_fakes_DY_stack_3->SetEntries(72);

   ci = TColor::GetColor("#cccccc");
   m3l_fakes_DY_stack_3->SetFillColor(ci);
   m3l_fakes_DY_stack_3->SetMarkerStyle(0);
   m3l_fakes_DY_stack_3->SetMarkerSize(1.1);
   m3l_fakes_DY_stack_3->GetXaxis()->SetTitle("m_{3L} (GeV)");
   m3l_fakes_DY_stack_3->GetXaxis()->SetMoreLogLabels();
   m3l_fakes_DY_stack_3->GetXaxis()->SetLabelFont(42);
   m3l_fakes_DY_stack_3->GetXaxis()->SetLabelOffset(0.007);
   m3l_fakes_DY_stack_3->GetXaxis()->SetLabelSize(0.05);
   m3l_fakes_DY_stack_3->GetXaxis()->SetTitleSize(0.06);
   m3l_fakes_DY_stack_3->GetXaxis()->SetTitleOffset(0.9);
   m3l_fakes_DY_stack_3->GetXaxis()->SetTitleFont(42);
   m3l_fakes_DY_stack_3->GetYaxis()->SetTitle("Events");
   m3l_fakes_DY_stack_3->GetYaxis()->SetLabelFont(42);
   m3l_fakes_DY_stack_3->GetYaxis()->SetLabelOffset(0.007);
   m3l_fakes_DY_stack_3->GetYaxis()->SetLabelSize(0.05);
   m3l_fakes_DY_stack_3->GetYaxis()->SetTitleSize(0.06);
   m3l_fakes_DY_stack_3->GetYaxis()->SetTitleOffset(1.35);
   m3l_fakes_DY_stack_3->GetYaxis()->SetTitleFont(42);
   m3l_fakes_DY_stack_3->GetZaxis()->SetLabelFont(42);
   m3l_fakes_DY_stack_3->GetZaxis()->SetLabelOffset(0.007);
   m3l_fakes_DY_stack_3->GetZaxis()->SetLabelSize(0.05);
   m3l_fakes_DY_stack_3->GetZaxis()->SetTitleSize(0.06);
   m3l_fakes_DY_stack_3->GetZaxis()->SetTitleFont(42);
   m3l_stack->Add(m3l_fakes_DY_stack_3,"");
   
   TH1D *m3l_prompt_ZZ_stack_4 = new TH1D("m3l_prompt_ZZ_stack_4","dummy",10,0,500);
   m3l_prompt_ZZ_stack_4->SetBinContent(3,25.32099);
   m3l_prompt_ZZ_stack_4->SetBinContent(4,23.11916);
   m3l_prompt_ZZ_stack_4->SetBinContent(5,11.74307);
   m3l_prompt_ZZ_stack_4->SetBinContent(6,5.504562);
   m3l_prompt_ZZ_stack_4->SetBinContent(7,2.38531);
   m3l_prompt_ZZ_stack_4->SetBinContent(8,1.467883);
   m3l_prompt_ZZ_stack_4->SetBinContent(9,1.651369);
   m3l_prompt_ZZ_stack_4->SetBinContent(10,2.01834);
   m3l_prompt_ZZ_stack_4->SetBinError(3,2.155466);
   m3l_prompt_ZZ_stack_4->SetBinError(4,2.059619);
   m3l_prompt_ZZ_stack_4->SetBinError(5,1.467883);
   m3l_prompt_ZZ_stack_4->SetBinError(6,1.004991);
   m3l_prompt_ZZ_stack_4->SetBinError(7,0.6615661);
   m3l_prompt_ZZ_stack_4->SetBinError(8,0.5189751);
   m3l_prompt_ZZ_stack_4->SetBinError(9,0.5504562);
   m3l_prompt_ZZ_stack_4->SetBinError(10,0.6085523);
   m3l_prompt_ZZ_stack_4->SetEntries(403);

   ci = TColor::GetColor("#00cc00");
   m3l_prompt_ZZ_stack_4->SetFillColor(ci);
   m3l_prompt_ZZ_stack_4->SetMarkerStyle(0);
   m3l_prompt_ZZ_stack_4->SetMarkerSize(1.1);
   m3l_prompt_ZZ_stack_4->GetXaxis()->SetTitle("m_{3L} (GeV)");
   m3l_prompt_ZZ_stack_4->GetXaxis()->SetMoreLogLabels();
   m3l_prompt_ZZ_stack_4->GetXaxis()->SetLabelFont(42);
   m3l_prompt_ZZ_stack_4->GetXaxis()->SetLabelOffset(0.007);
   m3l_prompt_ZZ_stack_4->GetXaxis()->SetLabelSize(0.05);
   m3l_prompt_ZZ_stack_4->GetXaxis()->SetTitleSize(0.06);
   m3l_prompt_ZZ_stack_4->GetXaxis()->SetTitleOffset(0.9);
   m3l_prompt_ZZ_stack_4->GetXaxis()->SetTitleFont(42);
   m3l_prompt_ZZ_stack_4->GetYaxis()->SetTitle("Events");
   m3l_prompt_ZZ_stack_4->GetYaxis()->SetLabelFont(42);
   m3l_prompt_ZZ_stack_4->GetYaxis()->SetLabelOffset(0.007);
   m3l_prompt_ZZ_stack_4->GetYaxis()->SetLabelSize(0.05);
   m3l_prompt_ZZ_stack_4->GetYaxis()->SetTitleSize(0.06);
   m3l_prompt_ZZ_stack_4->GetYaxis()->SetTitleOffset(1.35);
   m3l_prompt_ZZ_stack_4->GetYaxis()->SetTitleFont(42);
   m3l_prompt_ZZ_stack_4->GetZaxis()->SetLabelFont(42);
   m3l_prompt_ZZ_stack_4->GetZaxis()->SetLabelOffset(0.007);
   m3l_prompt_ZZ_stack_4->GetZaxis()->SetLabelSize(0.05);
   m3l_prompt_ZZ_stack_4->GetZaxis()->SetTitleSize(0.06);
   m3l_prompt_ZZ_stack_4->GetZaxis()->SetTitleFont(42);
   m3l_stack->Add(m3l_prompt_ZZ_stack_4,"");
   
   TH1D *m3l_prompt_WZ_stack_5 = new TH1D("m3l_prompt_WZ_stack_5","dummy",10,0,500);
   m3l_prompt_WZ_stack_5->SetBinContent(3,321.7235);
   m3l_prompt_WZ_stack_5->SetBinContent(4,428.9948);
   m3l_prompt_WZ_stack_5->SetBinContent(5,222.7734);
   m3l_prompt_WZ_stack_5->SetBinContent(6,114.7785);
   m3l_prompt_WZ_stack_5->SetBinContent(7,60.96195);
   m3l_prompt_WZ_stack_5->SetBinContent(8,31.6568);
   m3l_prompt_WZ_stack_5->SetBinContent(9,23.87827);
   m3l_prompt_WZ_stack_5->SetBinContent(10,45.31444);
   m3l_prompt_WZ_stack_5->SetBinError(3,5.394372);
   m3l_prompt_WZ_stack_5->SetBinError(4,6.229103);
   m3l_prompt_WZ_stack_5->SetBinError(5,4.488809);
   m3l_prompt_WZ_stack_5->SetBinError(6,3.222031);
   m3l_prompt_WZ_stack_5->SetBinError(7,2.348166);
   m3l_prompt_WZ_stack_5->SetBinError(8,1.692127);
   m3l_prompt_WZ_stack_5->SetBinError(9,1.469606);
   m3l_prompt_WZ_stack_5->SetBinError(10,2.0245);
   m3l_prompt_WZ_stack_5->SetEntries(13825);

   ci = TColor::GetColor("#ffcc00");
   m3l_prompt_WZ_stack_5->SetFillColor(ci);
   m3l_prompt_WZ_stack_5->SetMarkerStyle(0);
   m3l_prompt_WZ_stack_5->SetMarkerSize(1.1);
   m3l_prompt_WZ_stack_5->GetXaxis()->SetTitle("m_{3L} (GeV)");
   m3l_prompt_WZ_stack_5->GetXaxis()->SetMoreLogLabels();
   m3l_prompt_WZ_stack_5->GetXaxis()->SetLabelFont(42);
   m3l_prompt_WZ_stack_5->GetXaxis()->SetLabelOffset(0.007);
   m3l_prompt_WZ_stack_5->GetXaxis()->SetLabelSize(0.05);
   m3l_prompt_WZ_stack_5->GetXaxis()->SetTitleSize(0.06);
   m3l_prompt_WZ_stack_5->GetXaxis()->SetTitleOffset(0.9);
   m3l_prompt_WZ_stack_5->GetXaxis()->SetTitleFont(42);
   m3l_prompt_WZ_stack_5->GetYaxis()->SetTitle("Events");
   m3l_prompt_WZ_stack_5->GetYaxis()->SetLabelFont(42);
   m3l_prompt_WZ_stack_5->GetYaxis()->SetLabelOffset(0.007);
   m3l_prompt_WZ_stack_5->GetYaxis()->SetLabelSize(0.05);
   m3l_prompt_WZ_stack_5->GetYaxis()->SetTitleSize(0.06);
   m3l_prompt_WZ_stack_5->GetYaxis()->SetTitleOffset(1.35);
   m3l_prompt_WZ_stack_5->GetYaxis()->SetTitleFont(42);
   m3l_prompt_WZ_stack_5->GetZaxis()->SetLabelFont(42);
   m3l_prompt_WZ_stack_5->GetZaxis()->SetLabelOffset(0.007);
   m3l_prompt_WZ_stack_5->GetZaxis()->SetLabelSize(0.05);
   m3l_prompt_WZ_stack_5->GetZaxis()->SetTitleSize(0.06);
   m3l_prompt_WZ_stack_5->GetZaxis()->SetTitleFont(42);
   m3l_stack->Add(m3l_prompt_WZ_stack_5,"");
   m3l_stack->Draw("same hist");
   
   TH1D *m3l_total__34 = new TH1D("m3l_total__34","dummy",10,0,500);
   m3l_total__34->SetBinContent(3,420.0578);
   m3l_total__34->SetBinContent(4,504.5951);
   m3l_total__34->SetBinContent(5,263.5938);
   m3l_total__34->SetBinContent(6,131.8256);
   m3l_total__34->SetBinContent(7,65.47507);
   m3l_total__34->SetBinContent(8,34.32158);
   m3l_total__34->SetBinContent(9,25.9593);
   m3l_total__34->SetBinContent(10,50.11621);
   m3l_total__34->SetBinError(3,11.50844);
   m3l_total__34->SetBinError(4,10.02723);
   m3l_total__34->SetBinError(5,7.450999);
   m3l_total__34->SetBinError(6,4.851472);
   m3l_total__34->SetBinError(7,2.473777);
   m3l_total__34->SetBinError(8,1.792265);
   m3l_total__34->SetBinError(9,1.579335);
   m3l_total__34->SetBinError(10,2.737962);
   m3l_total__34->SetMinimum(0);
   m3l_total__34->SetMaximum(686.83);
   m3l_total__34->SetEntries(15152);
   m3l_total__34->SetDirectory(0);

   ci = TColor::GetColor("#00cc00");
   m3l_total__34->SetFillColor(ci);
   m3l_total__34->SetMarkerStyle(20);
   m3l_total__34->SetMarkerSize(1.1);
   m3l_total__34->GetXaxis()->SetTitle("m_{3L} (GeV)");
   m3l_total__34->GetXaxis()->SetMoreLogLabels();
   m3l_total__34->GetXaxis()->SetLabelFont(42);
   m3l_total__34->GetXaxis()->SetLabelOffset(999);
   m3l_total__34->GetXaxis()->SetLabelSize(0.05);
   m3l_total__34->GetXaxis()->SetTitleSize(0.05);
   m3l_total__34->GetXaxis()->SetTitleOffset(999);
   m3l_total__34->GetXaxis()->SetTitleFont(42);
   m3l_total__34->GetYaxis()->SetTitle("Events");
   m3l_total__34->GetYaxis()->SetLabelFont(42);
   m3l_total__34->GetYaxis()->SetLabelOffset(0.007);
   m3l_total__34->GetYaxis()->SetLabelSize(0.05);
   m3l_total__34->GetYaxis()->SetTitleSize(0.06);
   m3l_total__34->GetYaxis()->SetTitleOffset(1.48);
   m3l_total__34->GetYaxis()->SetTitleFont(42);
   m3l_total__34->GetZaxis()->SetLabelFont(42);
   m3l_total__34->GetZaxis()->SetLabelOffset(0.007);
   m3l_total__34->GetZaxis()->SetLabelSize(0.05);
   m3l_total__34->GetZaxis()->SetTitleSize(0.06);
   m3l_total__34->GetZaxis()->SetTitleFont(42);
   m3l_total__34->Draw("AXIS SAME");
   
   Double_t m3l_total_errors_fx3041[8] = {
   125,
   175,
   225,
   275,
   325,
   375,
   425,
   475};
   Double_t m3l_total_errors_fy3041[8] = {
   420.0578,
   504.5951,
   263.5938,
   131.8256,
   65.47507,
   34.32158,
   25.9593,
   50.11621};
   Double_t m3l_total_errors_felx3041[8] = {
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25};
   Double_t m3l_total_errors_fely3041[8] = {
   11.50844,
   10.02723,
   7.450999,
   4.851472,
   2.473777,
   1.792265,
   1.579335,
   2.737962};
   Double_t m3l_total_errors_fehx3041[8] = {
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25};
   Double_t m3l_total_errors_fehy3041[8] = {
   11.50844,
   10.02723,
   7.450999,
   4.851472,
   2.473777,
   1.792265,
   1.579335,
   2.737962};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(8,m3l_total_errors_fx3041,m3l_total_errors_fy3041,m3l_total_errors_felx3041,m3l_total_errors_fehx3041,m3l_total_errors_fely3041,m3l_total_errors_fehy3041);
   grae->SetName("m3l_total_errors");
   grae->SetTitle("Graph");
   grae->SetFillColor(1);
   grae->SetFillStyle(3013);
   grae->SetMarkerStyle(0);
   
   TH1F *Graph_m3l_total_errors3041 = new TH1F("Graph_m3l_total_errors3041","Graph",100,60,540);
   Graph_m3l_total_errors3041->SetMinimum(21.94197);
   Graph_m3l_total_errors3041->SetMaximum(563.6465);
   Graph_m3l_total_errors3041->SetDirectory(0);
   Graph_m3l_total_errors3041->SetStats(0);
   Graph_m3l_total_errors3041->SetLineStyle(0);
   Graph_m3l_total_errors3041->SetMarkerStyle(20);
   Graph_m3l_total_errors3041->GetXaxis()->SetLabelFont(42);
   Graph_m3l_total_errors3041->GetXaxis()->SetLabelOffset(0.007);
   Graph_m3l_total_errors3041->GetXaxis()->SetLabelSize(0.05);
   Graph_m3l_total_errors3041->GetXaxis()->SetTitleSize(0.06);
   Graph_m3l_total_errors3041->GetXaxis()->SetTitleOffset(0.9);
   Graph_m3l_total_errors3041->GetXaxis()->SetTitleFont(42);
   Graph_m3l_total_errors3041->GetYaxis()->SetLabelFont(42);
   Graph_m3l_total_errors3041->GetYaxis()->SetLabelOffset(0.007);
   Graph_m3l_total_errors3041->GetYaxis()->SetLabelSize(0.05);
   Graph_m3l_total_errors3041->GetYaxis()->SetTitleSize(0.06);
   Graph_m3l_total_errors3041->GetYaxis()->SetTitleOffset(1.35);
   Graph_m3l_total_errors3041->GetYaxis()->SetTitleFont(42);
   Graph_m3l_total_errors3041->GetZaxis()->SetLabelFont(42);
   Graph_m3l_total_errors3041->GetZaxis()->SetLabelOffset(0.007);
   Graph_m3l_total_errors3041->GetZaxis()->SetLabelSize(0.05);
   Graph_m3l_total_errors3041->GetZaxis()->SetTitleSize(0.06);
   Graph_m3l_total_errors3041->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_m3l_total_errors3041);
   
   grae->Draw("pe2 ");
   
   Double_t m3l_data_graph_fx3042[10] = {
   25,
   75,
   125,
   175,
   225,
   275,
   325,
   375,
   425,
   475};
   Double_t m3l_data_graph_fy3042[10] = {
   0,
   0,
   446,
   498,
   241,
   142,
   85,
   33,
   20,
   48};
   Double_t m3l_data_graph_felx3042[10] = {
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25};
   Double_t m3l_data_graph_fely3042[10] = {
   0,
   0,
   21.11125,
   22.3089,
   15.51373,
   11.90258,
   9.20156,
   5.715412,
   4.43453,
   6.904115};
   Double_t m3l_data_graph_fehx3042[10] = {
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25};
   Double_t m3l_data_graph_fehy3042[10] = {
   1.841055,
   1.841055,
   22.13498,
   23.33136,
   16.54602,
   12.94465,
   10.25594,
   6.802707,
   5.546633,
   7.976496};
   grae = new TGraphAsymmErrors(10,m3l_data_graph_fx3042,m3l_data_graph_fy3042,m3l_data_graph_felx3042,m3l_data_graph_fehx3042,m3l_data_graph_fely3042,m3l_data_graph_fehy3042);
   grae->SetName("m3l_data_graph");
   grae->SetTitle("Graph");
   grae->SetFillStyle(1000);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.1);
   
   TH1F *Graph_m3l_data_graph3042 = new TH1F("Graph_m3l_data_graph3042","Graph",100,0,550);
   Graph_m3l_data_graph3042->SetMinimum(0);
   Graph_m3l_data_graph3042->SetMaximum(573.4645);
   Graph_m3l_data_graph3042->SetDirectory(0);
   Graph_m3l_data_graph3042->SetStats(0);
   Graph_m3l_data_graph3042->SetLineStyle(0);
   Graph_m3l_data_graph3042->SetMarkerStyle(20);
   Graph_m3l_data_graph3042->GetXaxis()->SetLabelFont(42);
   Graph_m3l_data_graph3042->GetXaxis()->SetLabelOffset(0.007);
   Graph_m3l_data_graph3042->GetXaxis()->SetLabelSize(0.05);
   Graph_m3l_data_graph3042->GetXaxis()->SetTitleSize(0.06);
   Graph_m3l_data_graph3042->GetXaxis()->SetTitleOffset(0.9);
   Graph_m3l_data_graph3042->GetXaxis()->SetTitleFont(42);
   Graph_m3l_data_graph3042->GetYaxis()->SetLabelFont(42);
   Graph_m3l_data_graph3042->GetYaxis()->SetLabelOffset(0.007);
   Graph_m3l_data_graph3042->GetYaxis()->SetLabelSize(0.05);
   Graph_m3l_data_graph3042->GetYaxis()->SetTitleSize(0.06);
   Graph_m3l_data_graph3042->GetYaxis()->SetTitleOffset(1.35);
   Graph_m3l_data_graph3042->GetYaxis()->SetTitleFont(42);
   Graph_m3l_data_graph3042->GetZaxis()->SetLabelFont(42);
   Graph_m3l_data_graph3042->GetZaxis()->SetLabelOffset(0.007);
   Graph_m3l_data_graph3042->GetZaxis()->SetLabelSize(0.05);
   Graph_m3l_data_graph3042->GetZaxis()->SetTitleSize(0.06);
   Graph_m3l_data_graph3042->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_m3l_data_graph3042);
   
   grae->Draw("pz ");
   
   TLegend *leg = new TLegend(0.62,0.628,0.9,0.91,NULL,"brNDC");
   leg->SetBorderSize(1);
   leg->SetTextSize(0.036);
   leg->SetLineColor(0);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("m3l_data","Data","LPE");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1.1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("m3l_prompt_WZ_stack_5","WZ","F");

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
   entry=leg->AddEntry("m3l_prompt_ZZ_stack_4","qqZZ","F");

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
   entry=leg->AddEntry("m3l_fakes_DY_stack_3","Fakes DY","F");

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
   entry=leg->AddEntry("m3l_fakes_TT_stack_2","Fakes TT","F");

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
   entry=leg->AddEntry("m3l_total_errors","Total unc.","F");
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
   m3l_canvas->cd();
  
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
   
   TH1D *m3l_total__35 = new TH1D("m3l_total__35","dummy",10,0,500);
   m3l_total__35->SetBinContent(3,1);
   m3l_total__35->SetBinContent(4,1);
   m3l_total__35->SetBinContent(5,1);
   m3l_total__35->SetBinContent(6,1);
   m3l_total__35->SetBinContent(7,1);
   m3l_total__35->SetBinContent(8,1);
   m3l_total__35->SetBinContent(9,1);
   m3l_total__35->SetBinContent(10,1);
   m3l_total__35->SetMinimum(0.5);
   m3l_total__35->SetMaximum(2);
   m3l_total__35->SetEntries(15162);

   ci = TColor::GetColor("#00cc00");
   m3l_total__35->SetFillColor(ci);

   ci = TColor::GetColor("#6666ff");
   m3l_total__35->SetMarkerColor(ci);
   m3l_total__35->SetMarkerSize(1.1);
   m3l_total__35->GetXaxis()->SetTitle("m_{3L} (GeV)");
   m3l_total__35->GetXaxis()->SetMoreLogLabels();
   m3l_total__35->GetXaxis()->SetLabelFont(42);
   m3l_total__35->GetXaxis()->SetLabelOffset(0.015);
   m3l_total__35->GetXaxis()->SetLabelSize(0.1);
   m3l_total__35->GetXaxis()->SetTitleSize(0.14);
   m3l_total__35->GetXaxis()->SetTitleFont(42);
   m3l_total__35->GetYaxis()->SetTitle("Data/pred.");
   m3l_total__35->GetYaxis()->SetDecimals();
   m3l_total__35->GetYaxis()->SetNdivisions(505);
   m3l_total__35->GetYaxis()->SetLabelFont(42);
   m3l_total__35->GetYaxis()->SetLabelOffset(0.01);
   m3l_total__35->GetYaxis()->SetLabelSize(0.11);
   m3l_total__35->GetYaxis()->SetTitleSize(0.14);
   m3l_total__35->GetYaxis()->SetTitleOffset(0.62);
   m3l_total__35->GetYaxis()->SetTitleFont(42);
   m3l_total__35->GetZaxis()->SetLabelFont(42);
   m3l_total__35->GetZaxis()->SetLabelOffset(0.007);
   m3l_total__35->GetZaxis()->SetLabelSize(0.05);
   m3l_total__35->GetZaxis()->SetTitleSize(0.06);
   m3l_total__35->GetZaxis()->SetTitleFont(42);
   m3l_total__35->Draw("AXIS");
   
   Double_t m3l_total_errors_fx3043[8] = {
   125,
   175,
   225,
   275,
   325,
   375,
   425,
   475};
   Double_t m3l_total_errors_fy3043[8] = {
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1};
   Double_t m3l_total_errors_felx3043[8] = {
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25};
   Double_t m3l_total_errors_fely3043[8] = {
   0.02739727,
   0.01987184,
   0.02826697,
   0.0368022,
   0.03778196,
   0.05221979,
   0.06083887,
   0.05463226};
   Double_t m3l_total_errors_fehx3043[8] = {
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25};
   Double_t m3l_total_errors_fehy3043[8] = {
   0.02739727,
   0.01987184,
   0.02826697,
   0.0368022,
   0.03778196,
   0.05221979,
   0.06083887,
   0.05463226};
   grae = new TGraphAsymmErrors(8,m3l_total_errors_fx3043,m3l_total_errors_fy3043,m3l_total_errors_felx3043,m3l_total_errors_fehx3043,m3l_total_errors_fely3043,m3l_total_errors_fehy3043);
   grae->SetName("m3l_total_errors");
   grae->SetTitle("Graph");

   ci = TColor::GetColor("#00ffff");
   grae->SetFillColor(ci);

   ci = TColor::GetColor("#00ffff");
   grae->SetMarkerColor(ci);
   grae->Draw("e2");
   
   Double_t m3l_total_errors_fx3044[8] = {
   125,
   175,
   225,
   275,
   325,
   375,
   425,
   475};
   Double_t m3l_total_errors_fy3044[8] = {
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1};
   Double_t m3l_total_errors_felx3044[8] = {
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25};
   Double_t m3l_total_errors_fely3044[8] = {
   0.02739727,
   0.01987184,
   0.02826697,
   0.0368022,
   0.03778196,
   0.05221979,
   0.06083887,
   0.05463226};
   Double_t m3l_total_errors_fehx3044[8] = {
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25};
   Double_t m3l_total_errors_fehy3044[8] = {
   0.02739727,
   0.01987184,
   0.02826697,
   0.0368022,
   0.03778196,
   0.05221979,
   0.06083887,
   0.05463226};
   grae = new TGraphAsymmErrors(8,m3l_total_errors_fx3044,m3l_total_errors_fy3044,m3l_total_errors_felx3044,m3l_total_errors_fehx3044,m3l_total_errors_fely3044,m3l_total_errors_fehy3044);
   grae->SetName("m3l_total_errors");
   grae->SetTitle("Graph");

   ci = TColor::GetColor("#6666ff");
   grae->SetFillColor(ci);

   ci = TColor::GetColor("#6666ff");
   grae->SetMarkerColor(ci);
   grae->Draw("e2 ");
   
   TH1D *m3l_total__36 = new TH1D("m3l_total__36","dummy",10,0,500);
   m3l_total__36->SetBinContent(3,1);
   m3l_total__36->SetBinContent(4,1);
   m3l_total__36->SetBinContent(5,1);
   m3l_total__36->SetBinContent(6,1);
   m3l_total__36->SetBinContent(7,1);
   m3l_total__36->SetBinContent(8,1);
   m3l_total__36->SetBinContent(9,1);
   m3l_total__36->SetBinContent(10,1);
   m3l_total__36->SetMinimum(0.5);
   m3l_total__36->SetMaximum(2);
   m3l_total__36->SetEntries(15162);

   ci = TColor::GetColor("#00cc00");
   m3l_total__36->SetFillColor(ci);

   ci = TColor::GetColor("#6666ff");
   m3l_total__36->SetMarkerColor(ci);
   m3l_total__36->SetMarkerSize(1.1);
   m3l_total__36->GetXaxis()->SetTitle("m_{3L} (GeV)");
   m3l_total__36->GetXaxis()->SetMoreLogLabels();
   m3l_total__36->GetXaxis()->SetLabelFont(42);
   m3l_total__36->GetXaxis()->SetLabelOffset(0.015);
   m3l_total__36->GetXaxis()->SetLabelSize(0.1);
   m3l_total__36->GetXaxis()->SetTitleSize(0.14);
   m3l_total__36->GetXaxis()->SetTitleFont(42);
   m3l_total__36->GetYaxis()->SetTitle("Data/pred.");
   m3l_total__36->GetYaxis()->SetDecimals();
   m3l_total__36->GetYaxis()->SetNdivisions(505);
   m3l_total__36->GetYaxis()->SetLabelFont(42);
   m3l_total__36->GetYaxis()->SetLabelOffset(0.01);
   m3l_total__36->GetYaxis()->SetLabelSize(0.11);
   m3l_total__36->GetYaxis()->SetTitleSize(0.14);
   m3l_total__36->GetYaxis()->SetTitleOffset(0.62);
   m3l_total__36->GetYaxis()->SetTitleFont(42);
   m3l_total__36->GetZaxis()->SetLabelFont(42);
   m3l_total__36->GetZaxis()->SetLabelOffset(0.007);
   m3l_total__36->GetZaxis()->SetLabelSize(0.05);
   m3l_total__36->GetZaxis()->SetTitleSize(0.06);
   m3l_total__36->GetZaxis()->SetTitleFont(42);
   m3l_total__36->Draw("AXIS SAME");
   TLine *line = new TLine(0,1,500,1);
   line->SetLineColor(58);
   line->SetLineWidth(2);
   line->Draw();
   
   Double_t data_div_fx3045[10] = {
   25,
   75,
   125,
   175,
   225,
   275,
   325,
   375,
   425,
   475};
   Double_t data_div_fy3045[10] = {
   0,
   0,
   1.061759,
   0.98693,
   0.9142854,
   1.077181,
   1.298204,
   0.9614943,
   0.7704367,
   0.9577739};
   Double_t data_div_felx3045[10] = {
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25};
   Double_t data_div_fely3045[10] = {
   0,
   0,
   0.05025795,
   0.04421149,
   0.05885467,
   0.09029034,
   0.1405353,
   0.1665253,
   0.1708262,
   0.1377621};
   Double_t data_div_fehx3045[10] = {
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25};
   Double_t data_div_fehy3045[10] = {
   0,
   0,
   0.05269508,
   0.04623779,
   0.06277088,
   0.09819524,
   0.1566389,
   0.198205,
   0.2136665,
   0.15916};
   grae = new TGraphAsymmErrors(10,data_div_fx3045,data_div_fy3045,data_div_felx3045,data_div_fehx3045,data_div_fely3045,data_div_fehy3045);
   grae->SetName("data_div");
   grae->SetTitle("Graph");
   grae->SetFillStyle(1000);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.1);
   
   TH1F *Graph_m3l_data_graph3045 = new TH1F("Graph_m3l_data_graph3045","Graph",100,0,550);
   Graph_m3l_data_graph3045->SetMinimum(0);
   Graph_m3l_data_graph3045->SetMaximum(573.4645);
   Graph_m3l_data_graph3045->SetDirectory(0);
   Graph_m3l_data_graph3045->SetStats(0);
   Graph_m3l_data_graph3045->SetLineStyle(0);
   Graph_m3l_data_graph3045->SetMarkerStyle(20);
   Graph_m3l_data_graph3045->GetXaxis()->SetLabelFont(42);
   Graph_m3l_data_graph3045->GetXaxis()->SetLabelOffset(0.007);
   Graph_m3l_data_graph3045->GetXaxis()->SetLabelSize(0.05);
   Graph_m3l_data_graph3045->GetXaxis()->SetTitleSize(0.06);
   Graph_m3l_data_graph3045->GetXaxis()->SetTitleOffset(0.9);
   Graph_m3l_data_graph3045->GetXaxis()->SetTitleFont(42);
   Graph_m3l_data_graph3045->GetYaxis()->SetLabelFont(42);
   Graph_m3l_data_graph3045->GetYaxis()->SetLabelOffset(0.007);
   Graph_m3l_data_graph3045->GetYaxis()->SetLabelSize(0.05);
   Graph_m3l_data_graph3045->GetYaxis()->SetTitleSize(0.06);
   Graph_m3l_data_graph3045->GetYaxis()->SetTitleOffset(1.35);
   Graph_m3l_data_graph3045->GetYaxis()->SetTitleFont(42);
   Graph_m3l_data_graph3045->GetZaxis()->SetLabelFont(42);
   Graph_m3l_data_graph3045->GetZaxis()->SetLabelOffset(0.007);
   Graph_m3l_data_graph3045->GetZaxis()->SetLabelSize(0.05);
   Graph_m3l_data_graph3045->GetZaxis()->SetTitleSize(0.06);
   Graph_m3l_data_graph3045->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_m3l_data_graph3045);
   
   grae->Draw("pz ");
   
   leg = new TLegend(0,0,0,0,NULL,"brNDC");
   leg->SetBorderSize(1);
   leg->SetTextSize(0.084);
   leg->SetLineColor(0);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   entry=leg->AddEntry("m3l_total_errors","stat. unc.","F");
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
   entry=leg->AddEntry("m3l_total_errors","total unc.","F");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   leg->Draw();
   pad2->Modified();
   m3l_canvas->cd();
   m3l_canvas->Modified();
   m3l_canvas->cd();
   m3l_canvas->SetSelected(m3l_canvas);
}
