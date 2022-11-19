void lepZ1_eta()
{
//=========Macro generated from canvas: lepZ1_eta_canvas/lepZ1_eta
//=========  (Fri Nov 18 13:03:40 2022) by ROOT version 6.12/07
   TCanvas *lepZ1_eta_canvas = new TCanvas("lepZ1_eta_canvas", "lepZ1_eta",0,0,600,750);
   gStyle->SetOptFit(1);
   gStyle->SetOptStat(0);
   gStyle->SetOptTitle(0);
   lepZ1_eta_canvas->SetHighLightColor(2);
   lepZ1_eta_canvas->Range(0,0,1,1);
   lepZ1_eta_canvas->SetFillColor(0);
   lepZ1_eta_canvas->SetBorderMode(0);
   lepZ1_eta_canvas->SetBorderSize(2);
   lepZ1_eta_canvas->SetTickx(1);
   lepZ1_eta_canvas->SetTicky(1);
   lepZ1_eta_canvas->SetLeftMargin(0.18);
   lepZ1_eta_canvas->SetRightMargin(0.04);
   lepZ1_eta_canvas->SetBottomMargin(0.13);
   lepZ1_eta_canvas->SetFrameFillStyle(0);
   lepZ1_eta_canvas->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: pad1
   TPad *pad1 = new TPad("pad1", "pad1",0,0.3,1,1);
   pad1->Draw();
   pad1->cd();
   pad1->Range(-3.653846,-8.546321,2.75641,333.3065);
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
   
   TH1D *lepZ1_eta_total__65 = new TH1D("lepZ1_eta_total__65","dummy",10,-2.5,2.5);
   lepZ1_eta_total__65->SetBinContent(1,77.72869);
   lepZ1_eta_total__65->SetBinContent(2,122.5269);
   lepZ1_eta_total__65->SetBinContent(3,158.0443);
   lepZ1_eta_total__65->SetBinContent(4,187.6709);
   lepZ1_eta_total__65->SetBinContent(5,194.2811);
   lepZ1_eta_total__65->SetBinContent(6,217.2704);
   lepZ1_eta_total__65->SetBinContent(7,187.363);
   lepZ1_eta_total__65->SetBinContent(8,158.4353);
   lepZ1_eta_total__65->SetBinContent(9,121.3276);
   lepZ1_eta_total__65->SetBinContent(10,71.29621);
   lepZ1_eta_total__65->SetBinError(1,4.61698);
   lepZ1_eta_total__65->SetBinError(2,5.324935);
   lepZ1_eta_total__65->SetBinError(3,6.333762);
   lepZ1_eta_total__65->SetBinError(4,6.112372);
   lepZ1_eta_total__65->SetBinError(5,5.145917);
   lepZ1_eta_total__65->SetBinError(6,7.895237);
   lepZ1_eta_total__65->SetBinError(7,6.104442);
   lepZ1_eta_total__65->SetBinError(8,6.319353);
   lepZ1_eta_total__65->SetBinError(9,5.068134);
   lepZ1_eta_total__65->SetBinError(10,3.538005);
   lepZ1_eta_total__65->SetMinimum(0);
   lepZ1_eta_total__65->SetMaximum(312.7953);
   lepZ1_eta_total__65->SetEntries(15152);
   lepZ1_eta_total__65->SetDirectory(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#00cc00");
   lepZ1_eta_total__65->SetFillColor(ci);
   lepZ1_eta_total__65->SetMarkerStyle(20);
   lepZ1_eta_total__65->SetMarkerSize(1.1);
   lepZ1_eta_total__65->GetXaxis()->SetTitle("#eta(Z1 lep.)");
   lepZ1_eta_total__65->GetXaxis()->SetMoreLogLabels();
   lepZ1_eta_total__65->GetXaxis()->SetLabelFont(42);
   lepZ1_eta_total__65->GetXaxis()->SetLabelOffset(999);
   lepZ1_eta_total__65->GetXaxis()->SetLabelSize(0.05);
   lepZ1_eta_total__65->GetXaxis()->SetTitleSize(0.05);
   lepZ1_eta_total__65->GetXaxis()->SetTitleOffset(999);
   lepZ1_eta_total__65->GetXaxis()->SetTitleFont(42);
   lepZ1_eta_total__65->GetYaxis()->SetTitle("Leptons");
   lepZ1_eta_total__65->GetYaxis()->SetLabelFont(42);
   lepZ1_eta_total__65->GetYaxis()->SetLabelOffset(0.007);
   lepZ1_eta_total__65->GetYaxis()->SetLabelSize(0.05);
   lepZ1_eta_total__65->GetYaxis()->SetTitleSize(0.06);
   lepZ1_eta_total__65->GetYaxis()->SetTitleOffset(1.48);
   lepZ1_eta_total__65->GetYaxis()->SetTitleFont(42);
   lepZ1_eta_total__65->GetZaxis()->SetLabelFont(42);
   lepZ1_eta_total__65->GetZaxis()->SetLabelOffset(0.007);
   lepZ1_eta_total__65->GetZaxis()->SetLabelSize(0.05);
   lepZ1_eta_total__65->GetZaxis()->SetTitleSize(0.06);
   lepZ1_eta_total__65->GetZaxis()->SetTitleFont(42);
   lepZ1_eta_total__65->Draw("HIST");
   
   THStack *lepZ1_eta_stack = new THStack();
   lepZ1_eta_stack->SetName("lepZ1_eta_stack");
   lepZ1_eta_stack->SetTitle("lepZ1_eta");
   
   TH1F *lepZ1_eta_stack_stack_17 = new TH1F("lepZ1_eta_stack_stack_17","lepZ1_eta",10,-2.5,2.5);
   lepZ1_eta_stack_stack_17->SetMinimum(0);
   lepZ1_eta_stack_stack_17->SetMaximum(228.1339);
   lepZ1_eta_stack_stack_17->SetDirectory(0);
   lepZ1_eta_stack_stack_17->SetStats(0);
   lepZ1_eta_stack_stack_17->SetLineStyle(0);
   lepZ1_eta_stack_stack_17->SetMarkerStyle(20);
   lepZ1_eta_stack_stack_17->GetXaxis()->SetLabelFont(42);
   lepZ1_eta_stack_stack_17->GetXaxis()->SetLabelOffset(0.007);
   lepZ1_eta_stack_stack_17->GetXaxis()->SetLabelSize(0.05);
   lepZ1_eta_stack_stack_17->GetXaxis()->SetTitleSize(0.06);
   lepZ1_eta_stack_stack_17->GetXaxis()->SetTitleOffset(0.9);
   lepZ1_eta_stack_stack_17->GetXaxis()->SetTitleFont(42);
   lepZ1_eta_stack_stack_17->GetYaxis()->SetLabelFont(42);
   lepZ1_eta_stack_stack_17->GetYaxis()->SetLabelOffset(0.007);
   lepZ1_eta_stack_stack_17->GetYaxis()->SetLabelSize(0.05);
   lepZ1_eta_stack_stack_17->GetYaxis()->SetTitleSize(0.06);
   lepZ1_eta_stack_stack_17->GetYaxis()->SetTitleOffset(1.35);
   lepZ1_eta_stack_stack_17->GetYaxis()->SetTitleFont(42);
   lepZ1_eta_stack_stack_17->GetZaxis()->SetLabelFont(42);
   lepZ1_eta_stack_stack_17->GetZaxis()->SetLabelOffset(0.007);
   lepZ1_eta_stack_stack_17->GetZaxis()->SetLabelSize(0.05);
   lepZ1_eta_stack_stack_17->GetZaxis()->SetTitleSize(0.06);
   lepZ1_eta_stack_stack_17->GetZaxis()->SetTitleFont(42);
   lepZ1_eta_stack->SetHistogram(lepZ1_eta_stack_stack_17);
   
   
   TH1D *lepZ1_eta_fakes_VV_stack_1 = new TH1D("lepZ1_eta_fakes_VV_stack_1","dummy",10,-2.5,2.5);
   lepZ1_eta_fakes_VV_stack_1->SetBinContent(1,0.09719337);
   lepZ1_eta_fakes_VV_stack_1->SetBinContent(2,0.09719337);
   lepZ1_eta_fakes_VV_stack_1->SetBinContent(5,0.09719337);
   lepZ1_eta_fakes_VV_stack_1->SetBinContent(6,0.09719337);
   lepZ1_eta_fakes_VV_stack_1->SetBinContent(8,0.09719337);
   lepZ1_eta_fakes_VV_stack_1->SetBinContent(9,0.09719337);
   lepZ1_eta_fakes_VV_stack_1->SetBinContent(10,0.09719337);
   lepZ1_eta_fakes_VV_stack_1->SetBinError(1,0.09719337);
   lepZ1_eta_fakes_VV_stack_1->SetBinError(2,0.09719337);
   lepZ1_eta_fakes_VV_stack_1->SetBinError(5,0.09719337);
   lepZ1_eta_fakes_VV_stack_1->SetBinError(6,0.09719337);
   lepZ1_eta_fakes_VV_stack_1->SetBinError(8,0.09719337);
   lepZ1_eta_fakes_VV_stack_1->SetBinError(9,0.09719337);
   lepZ1_eta_fakes_VV_stack_1->SetBinError(10,0.09719337);
   lepZ1_eta_fakes_VV_stack_1->SetEntries(11);

   ci = TColor::GetColor("#2e3294");
   lepZ1_eta_fakes_VV_stack_1->SetFillColor(ci);
   lepZ1_eta_fakes_VV_stack_1->SetMarkerStyle(0);
   lepZ1_eta_fakes_VV_stack_1->SetMarkerSize(1.1);
   lepZ1_eta_fakes_VV_stack_1->GetXaxis()->SetTitle("#eta(Z1 lep.)");
   lepZ1_eta_fakes_VV_stack_1->GetXaxis()->SetMoreLogLabels();
   lepZ1_eta_fakes_VV_stack_1->GetXaxis()->SetLabelFont(42);
   lepZ1_eta_fakes_VV_stack_1->GetXaxis()->SetLabelOffset(0.007);
   lepZ1_eta_fakes_VV_stack_1->GetXaxis()->SetLabelSize(0.05);
   lepZ1_eta_fakes_VV_stack_1->GetXaxis()->SetTitleSize(0.06);
   lepZ1_eta_fakes_VV_stack_1->GetXaxis()->SetTitleOffset(0.9);
   lepZ1_eta_fakes_VV_stack_1->GetXaxis()->SetTitleFont(42);
   lepZ1_eta_fakes_VV_stack_1->GetYaxis()->SetTitle("Leptons");
   lepZ1_eta_fakes_VV_stack_1->GetYaxis()->SetLabelFont(42);
   lepZ1_eta_fakes_VV_stack_1->GetYaxis()->SetLabelOffset(0.007);
   lepZ1_eta_fakes_VV_stack_1->GetYaxis()->SetLabelSize(0.05);
   lepZ1_eta_fakes_VV_stack_1->GetYaxis()->SetTitleSize(0.06);
   lepZ1_eta_fakes_VV_stack_1->GetYaxis()->SetTitleOffset(1.35);
   lepZ1_eta_fakes_VV_stack_1->GetYaxis()->SetTitleFont(42);
   lepZ1_eta_fakes_VV_stack_1->GetZaxis()->SetLabelFont(42);
   lepZ1_eta_fakes_VV_stack_1->GetZaxis()->SetLabelOffset(0.007);
   lepZ1_eta_fakes_VV_stack_1->GetZaxis()->SetLabelSize(0.05);
   lepZ1_eta_fakes_VV_stack_1->GetZaxis()->SetTitleSize(0.06);
   lepZ1_eta_fakes_VV_stack_1->GetZaxis()->SetTitleFont(42);
   lepZ1_eta_stack->Add(lepZ1_eta_fakes_VV_stack_1,"");
   
   TH1D *lepZ1_eta_fakes_TT_stack_2 = new TH1D("lepZ1_eta_fakes_TT_stack_2","dummy",10,-2.5,2.5);
   lepZ1_eta_fakes_TT_stack_2->SetBinContent(1,2.593275);
   lepZ1_eta_fakes_TT_stack_2->SetBinContent(2,4.122642);
   lepZ1_eta_fakes_TT_stack_2->SetBinContent(3,5.519021);
   lepZ1_eta_fakes_TT_stack_2->SetBinContent(4,6.715917);
   lepZ1_eta_fakes_TT_stack_2->SetBinContent(5,8.11627);
   lepZ1_eta_fakes_TT_stack_2->SetBinContent(6,7.912813);
   lepZ1_eta_fakes_TT_stack_2->SetBinContent(7,6.961054);
   lepZ1_eta_fakes_TT_stack_2->SetBinContent(8,6.296111);
   lepZ1_eta_fakes_TT_stack_2->SetBinContent(9,4.787584);
   lepZ1_eta_fakes_TT_stack_2->SetBinContent(10,2.019641);
   lepZ1_eta_fakes_TT_stack_2->SetBinError(1,0.4152563);
   lepZ1_eta_fakes_TT_stack_2->SetBinError(2,0.523576);
   lepZ1_eta_fakes_TT_stack_2->SetBinError(3,0.6130465);
   lepZ1_eta_fakes_TT_stack_2->SetBinError(4,0.6682587);
   lepZ1_eta_fakes_TT_stack_2->SetBinError(5,0.7450136);
   lepZ1_eta_fakes_TT_stack_2->SetBinError(6,0.7253664);
   lepZ1_eta_fakes_TT_stack_2->SetBinError(7,0.6840979);
   lepZ1_eta_fakes_TT_stack_2->SetBinError(8,0.6577371);
   lepZ1_eta_fakes_TT_stack_2->SetBinError(9,0.5796832);
   lepZ1_eta_fakes_TT_stack_2->SetBinError(10,0.3916344);
   lepZ1_eta_fakes_TT_stack_2->SetEntries(841);

   ci = TColor::GetColor("#666666");
   lepZ1_eta_fakes_TT_stack_2->SetFillColor(ci);
   lepZ1_eta_fakes_TT_stack_2->SetMarkerStyle(0);
   lepZ1_eta_fakes_TT_stack_2->SetMarkerSize(1.1);
   lepZ1_eta_fakes_TT_stack_2->GetXaxis()->SetTitle("#eta(Z1 lep.)");
   lepZ1_eta_fakes_TT_stack_2->GetXaxis()->SetMoreLogLabels();
   lepZ1_eta_fakes_TT_stack_2->GetXaxis()->SetLabelFont(42);
   lepZ1_eta_fakes_TT_stack_2->GetXaxis()->SetLabelOffset(0.007);
   lepZ1_eta_fakes_TT_stack_2->GetXaxis()->SetLabelSize(0.05);
   lepZ1_eta_fakes_TT_stack_2->GetXaxis()->SetTitleSize(0.06);
   lepZ1_eta_fakes_TT_stack_2->GetXaxis()->SetTitleOffset(0.9);
   lepZ1_eta_fakes_TT_stack_2->GetXaxis()->SetTitleFont(42);
   lepZ1_eta_fakes_TT_stack_2->GetYaxis()->SetTitle("Leptons");
   lepZ1_eta_fakes_TT_stack_2->GetYaxis()->SetLabelFont(42);
   lepZ1_eta_fakes_TT_stack_2->GetYaxis()->SetLabelOffset(0.007);
   lepZ1_eta_fakes_TT_stack_2->GetYaxis()->SetLabelSize(0.05);
   lepZ1_eta_fakes_TT_stack_2->GetYaxis()->SetTitleSize(0.06);
   lepZ1_eta_fakes_TT_stack_2->GetYaxis()->SetTitleOffset(1.35);
   lepZ1_eta_fakes_TT_stack_2->GetYaxis()->SetTitleFont(42);
   lepZ1_eta_fakes_TT_stack_2->GetZaxis()->SetLabelFont(42);
   lepZ1_eta_fakes_TT_stack_2->GetZaxis()->SetLabelOffset(0.007);
   lepZ1_eta_fakes_TT_stack_2->GetZaxis()->SetLabelSize(0.05);
   lepZ1_eta_fakes_TT_stack_2->GetZaxis()->SetTitleSize(0.06);
   lepZ1_eta_fakes_TT_stack_2->GetZaxis()->SetTitleFont(42);
   lepZ1_eta_stack->Add(lepZ1_eta_fakes_TT_stack_2,"");
   
   TH1D *lepZ1_eta_fakes_DY_stack_3 = new TH1D("lepZ1_eta_fakes_DY_stack_3","dummy",10,-2.5,2.5);
   lepZ1_eta_fakes_DY_stack_3->SetBinContent(1,8.597611);
   lepZ1_eta_fakes_DY_stack_3->SetBinContent(2,10.31713);
   lepZ1_eta_fakes_DY_stack_3->SetBinContent(3,15.4757);
   lepZ1_eta_fakes_DY_stack_3->SetBinContent(4,12.03665);
   lepZ1_eta_fakes_DY_stack_3->SetBinContent(5,5.158566);
   lepZ1_eta_fakes_DY_stack_3->SetBinContent(6,25.79283);
   lepZ1_eta_fakes_DY_stack_3->SetBinContent(7,12.03665);
   lepZ1_eta_fakes_DY_stack_3->SetBinContent(8,15.4757);
   lepZ1_eta_fakes_DY_stack_3->SetBinContent(9,8.597611);
   lepZ1_eta_fakes_DY_stack_3->SetBinContent(10,3.439044);
   lepZ1_eta_fakes_DY_stack_3->SetBinError(1,3.844968);
   lepZ1_eta_fakes_DY_stack_3->SetBinError(2,4.211952);
   lepZ1_eta_fakes_DY_stack_3->SetBinError(3,5.158566);
   lepZ1_eta_fakes_DY_stack_3->SetBinError(4,4.549428);
   lepZ1_eta_fakes_DY_stack_3->SetBinError(5,2.9783);
   lepZ1_eta_fakes_DY_stack_3->SetBinError(6,6.65968);
   lepZ1_eta_fakes_DY_stack_3->SetBinError(7,4.549428);
   lepZ1_eta_fakes_DY_stack_3->SetBinError(8,5.158566);
   lepZ1_eta_fakes_DY_stack_3->SetBinError(9,3.844968);
   lepZ1_eta_fakes_DY_stack_3->SetBinError(10,2.431771);
   lepZ1_eta_fakes_DY_stack_3->SetEntries(72);

   ci = TColor::GetColor("#cccccc");
   lepZ1_eta_fakes_DY_stack_3->SetFillColor(ci);
   lepZ1_eta_fakes_DY_stack_3->SetMarkerStyle(0);
   lepZ1_eta_fakes_DY_stack_3->SetMarkerSize(1.1);
   lepZ1_eta_fakes_DY_stack_3->GetXaxis()->SetTitle("#eta(Z1 lep.)");
   lepZ1_eta_fakes_DY_stack_3->GetXaxis()->SetMoreLogLabels();
   lepZ1_eta_fakes_DY_stack_3->GetXaxis()->SetLabelFont(42);
   lepZ1_eta_fakes_DY_stack_3->GetXaxis()->SetLabelOffset(0.007);
   lepZ1_eta_fakes_DY_stack_3->GetXaxis()->SetLabelSize(0.05);
   lepZ1_eta_fakes_DY_stack_3->GetXaxis()->SetTitleSize(0.06);
   lepZ1_eta_fakes_DY_stack_3->GetXaxis()->SetTitleOffset(0.9);
   lepZ1_eta_fakes_DY_stack_3->GetXaxis()->SetTitleFont(42);
   lepZ1_eta_fakes_DY_stack_3->GetYaxis()->SetTitle("Leptons");
   lepZ1_eta_fakes_DY_stack_3->GetYaxis()->SetLabelFont(42);
   lepZ1_eta_fakes_DY_stack_3->GetYaxis()->SetLabelOffset(0.007);
   lepZ1_eta_fakes_DY_stack_3->GetYaxis()->SetLabelSize(0.05);
   lepZ1_eta_fakes_DY_stack_3->GetYaxis()->SetTitleSize(0.06);
   lepZ1_eta_fakes_DY_stack_3->GetYaxis()->SetTitleOffset(1.35);
   lepZ1_eta_fakes_DY_stack_3->GetYaxis()->SetTitleFont(42);
   lepZ1_eta_fakes_DY_stack_3->GetZaxis()->SetLabelFont(42);
   lepZ1_eta_fakes_DY_stack_3->GetZaxis()->SetLabelOffset(0.007);
   lepZ1_eta_fakes_DY_stack_3->GetZaxis()->SetLabelSize(0.05);
   lepZ1_eta_fakes_DY_stack_3->GetZaxis()->SetTitleSize(0.06);
   lepZ1_eta_fakes_DY_stack_3->GetZaxis()->SetTitleFont(42);
   lepZ1_eta_stack->Add(lepZ1_eta_fakes_DY_stack_3,"");
   
   TH1D *lepZ1_eta_prompt_ZZ_stack_4 = new TH1D("lepZ1_eta_prompt_ZZ_stack_4","dummy",10,-2.5,2.5);
   lepZ1_eta_prompt_ZZ_stack_4->SetBinContent(1,3.669708);
   lepZ1_eta_prompt_ZZ_stack_4->SetBinContent(2,6.055019);
   lepZ1_eta_prompt_ZZ_stack_4->SetBinContent(3,7.889873);
   lepZ1_eta_prompt_ZZ_stack_4->SetBinContent(4,10.0917);
   lepZ1_eta_prompt_ZZ_stack_4->SetBinContent(5,7.339416);
   lepZ1_eta_prompt_ZZ_stack_4->SetBinContent(6,9.17427);
   lepZ1_eta_prompt_ZZ_stack_4->SetBinContent(7,9.357756);
   lepZ1_eta_prompt_ZZ_stack_4->SetBinContent(8,5.688048);
   lepZ1_eta_prompt_ZZ_stack_4->SetBinContent(9,8.623814);
   lepZ1_eta_prompt_ZZ_stack_4->SetBinContent(10,5.321077);
   lepZ1_eta_prompt_ZZ_stack_4->SetBinError(1,0.8205717);
   lepZ1_eta_prompt_ZZ_stack_4->SetBinError(2,1.054043);
   lepZ1_eta_prompt_ZZ_stack_4->SetBinError(3,1.203194);
   lepZ1_eta_prompt_ZZ_stack_4->SetBinError(4,1.360764);
   lepZ1_eta_prompt_ZZ_stack_4->SetBinError(5,1.160464);
   lepZ1_eta_prompt_ZZ_stack_4->SetBinError(6,1.297438);
   lepZ1_eta_prompt_ZZ_stack_4->SetBinError(7,1.310348);
   lepZ1_eta_prompt_ZZ_stack_4->SetBinError(8,1.021604);
   lepZ1_eta_prompt_ZZ_stack_4->SetBinError(9,1.257913);
   lepZ1_eta_prompt_ZZ_stack_4->SetBinError(10,0.9880992);
   lepZ1_eta_prompt_ZZ_stack_4->SetEntries(403);

   ci = TColor::GetColor("#00cc00");
   lepZ1_eta_prompt_ZZ_stack_4->SetFillColor(ci);
   lepZ1_eta_prompt_ZZ_stack_4->SetMarkerStyle(0);
   lepZ1_eta_prompt_ZZ_stack_4->SetMarkerSize(1.1);
   lepZ1_eta_prompt_ZZ_stack_4->GetXaxis()->SetTitle("#eta(Z1 lep.)");
   lepZ1_eta_prompt_ZZ_stack_4->GetXaxis()->SetMoreLogLabels();
   lepZ1_eta_prompt_ZZ_stack_4->GetXaxis()->SetLabelFont(42);
   lepZ1_eta_prompt_ZZ_stack_4->GetXaxis()->SetLabelOffset(0.007);
   lepZ1_eta_prompt_ZZ_stack_4->GetXaxis()->SetLabelSize(0.05);
   lepZ1_eta_prompt_ZZ_stack_4->GetXaxis()->SetTitleSize(0.06);
   lepZ1_eta_prompt_ZZ_stack_4->GetXaxis()->SetTitleOffset(0.9);
   lepZ1_eta_prompt_ZZ_stack_4->GetXaxis()->SetTitleFont(42);
   lepZ1_eta_prompt_ZZ_stack_4->GetYaxis()->SetTitle("Leptons");
   lepZ1_eta_prompt_ZZ_stack_4->GetYaxis()->SetLabelFont(42);
   lepZ1_eta_prompt_ZZ_stack_4->GetYaxis()->SetLabelOffset(0.007);
   lepZ1_eta_prompt_ZZ_stack_4->GetYaxis()->SetLabelSize(0.05);
   lepZ1_eta_prompt_ZZ_stack_4->GetYaxis()->SetTitleSize(0.06);
   lepZ1_eta_prompt_ZZ_stack_4->GetYaxis()->SetTitleOffset(1.35);
   lepZ1_eta_prompt_ZZ_stack_4->GetYaxis()->SetTitleFont(42);
   lepZ1_eta_prompt_ZZ_stack_4->GetZaxis()->SetLabelFont(42);
   lepZ1_eta_prompt_ZZ_stack_4->GetZaxis()->SetLabelOffset(0.007);
   lepZ1_eta_prompt_ZZ_stack_4->GetZaxis()->SetLabelSize(0.05);
   lepZ1_eta_prompt_ZZ_stack_4->GetZaxis()->SetTitleSize(0.06);
   lepZ1_eta_prompt_ZZ_stack_4->GetZaxis()->SetTitleFont(42);
   lepZ1_eta_stack->Add(lepZ1_eta_prompt_ZZ_stack_4,"");
   
   TH1D *lepZ1_eta_prompt_WZ_stack_5 = new TH1D("lepZ1_eta_prompt_WZ_stack_5","dummy",10,-2.5,2.5);
   lepZ1_eta_prompt_WZ_stack_5->SetBinContent(1,62.77091);
   lepZ1_eta_prompt_WZ_stack_5->SetBinContent(2,101.9349);
   lepZ1_eta_prompt_WZ_stack_5->SetBinContent(3,129.1597);
   lepZ1_eta_prompt_WZ_stack_5->SetBinContent(4,158.8267);
   lepZ1_eta_prompt_WZ_stack_5->SetBinContent(5,173.5697);
   lepZ1_eta_prompt_WZ_stack_5->SetBinContent(6,174.2933);
   lepZ1_eta_prompt_WZ_stack_5->SetBinContent(7,159.0076);
   lepZ1_eta_prompt_WZ_stack_5->SetBinContent(8,130.8782);
   lepZ1_eta_prompt_WZ_stack_5->SetBinContent(9,99.22145);
   lepZ1_eta_prompt_WZ_stack_5->SetBinContent(10,60.41926);
   lepZ1_eta_prompt_WZ_stack_5->SetBinError(1,2.382751);
   lepZ1_eta_prompt_WZ_stack_5->SetBinError(2,3.036413);
   lepZ1_eta_prompt_WZ_stack_5->SetBinError(3,3.417929);
   lepZ1_eta_prompt_WZ_stack_5->SetBinError(4,3.790192);
   lepZ1_eta_prompt_WZ_stack_5->SetBinError(5,3.9622);
   lepZ1_eta_prompt_WZ_stack_5->SetBinError(6,3.97045);
   lepZ1_eta_prompt_WZ_stack_5->SetBinError(7,3.79235);
   lepZ1_eta_prompt_WZ_stack_5->SetBinError(8,3.440592);
   lepZ1_eta_prompt_WZ_stack_5->SetBinError(9,2.995727);
   lepZ1_eta_prompt_WZ_stack_5->SetBinError(10,2.337691);
   lepZ1_eta_prompt_WZ_stack_5->SetEntries(13825);

   ci = TColor::GetColor("#ffcc00");
   lepZ1_eta_prompt_WZ_stack_5->SetFillColor(ci);
   lepZ1_eta_prompt_WZ_stack_5->SetMarkerStyle(0);
   lepZ1_eta_prompt_WZ_stack_5->SetMarkerSize(1.1);
   lepZ1_eta_prompt_WZ_stack_5->GetXaxis()->SetTitle("#eta(Z1 lep.)");
   lepZ1_eta_prompt_WZ_stack_5->GetXaxis()->SetMoreLogLabels();
   lepZ1_eta_prompt_WZ_stack_5->GetXaxis()->SetLabelFont(42);
   lepZ1_eta_prompt_WZ_stack_5->GetXaxis()->SetLabelOffset(0.007);
   lepZ1_eta_prompt_WZ_stack_5->GetXaxis()->SetLabelSize(0.05);
   lepZ1_eta_prompt_WZ_stack_5->GetXaxis()->SetTitleSize(0.06);
   lepZ1_eta_prompt_WZ_stack_5->GetXaxis()->SetTitleOffset(0.9);
   lepZ1_eta_prompt_WZ_stack_5->GetXaxis()->SetTitleFont(42);
   lepZ1_eta_prompt_WZ_stack_5->GetYaxis()->SetTitle("Leptons");
   lepZ1_eta_prompt_WZ_stack_5->GetYaxis()->SetLabelFont(42);
   lepZ1_eta_prompt_WZ_stack_5->GetYaxis()->SetLabelOffset(0.007);
   lepZ1_eta_prompt_WZ_stack_5->GetYaxis()->SetLabelSize(0.05);
   lepZ1_eta_prompt_WZ_stack_5->GetYaxis()->SetTitleSize(0.06);
   lepZ1_eta_prompt_WZ_stack_5->GetYaxis()->SetTitleOffset(1.35);
   lepZ1_eta_prompt_WZ_stack_5->GetYaxis()->SetTitleFont(42);
   lepZ1_eta_prompt_WZ_stack_5->GetZaxis()->SetLabelFont(42);
   lepZ1_eta_prompt_WZ_stack_5->GetZaxis()->SetLabelOffset(0.007);
   lepZ1_eta_prompt_WZ_stack_5->GetZaxis()->SetLabelSize(0.05);
   lepZ1_eta_prompt_WZ_stack_5->GetZaxis()->SetTitleSize(0.06);
   lepZ1_eta_prompt_WZ_stack_5->GetZaxis()->SetTitleFont(42);
   lepZ1_eta_stack->Add(lepZ1_eta_prompt_WZ_stack_5,"");
   lepZ1_eta_stack->Draw("same hist");
   
   TH1D *lepZ1_eta_total__66 = new TH1D("lepZ1_eta_total__66","dummy",10,-2.5,2.5);
   lepZ1_eta_total__66->SetBinContent(1,77.72869);
   lepZ1_eta_total__66->SetBinContent(2,122.5269);
   lepZ1_eta_total__66->SetBinContent(3,158.0443);
   lepZ1_eta_total__66->SetBinContent(4,187.6709);
   lepZ1_eta_total__66->SetBinContent(5,194.2811);
   lepZ1_eta_total__66->SetBinContent(6,217.2704);
   lepZ1_eta_total__66->SetBinContent(7,187.363);
   lepZ1_eta_total__66->SetBinContent(8,158.4353);
   lepZ1_eta_total__66->SetBinContent(9,121.3276);
   lepZ1_eta_total__66->SetBinContent(10,71.29621);
   lepZ1_eta_total__66->SetBinError(1,4.61698);
   lepZ1_eta_total__66->SetBinError(2,5.324935);
   lepZ1_eta_total__66->SetBinError(3,6.333762);
   lepZ1_eta_total__66->SetBinError(4,6.112372);
   lepZ1_eta_total__66->SetBinError(5,5.145917);
   lepZ1_eta_total__66->SetBinError(6,7.895237);
   lepZ1_eta_total__66->SetBinError(7,6.104442);
   lepZ1_eta_total__66->SetBinError(8,6.319353);
   lepZ1_eta_total__66->SetBinError(9,5.068134);
   lepZ1_eta_total__66->SetBinError(10,3.538005);
   lepZ1_eta_total__66->SetMinimum(0);
   lepZ1_eta_total__66->SetMaximum(312.7953);
   lepZ1_eta_total__66->SetEntries(15152);
   lepZ1_eta_total__66->SetDirectory(0);

   ci = TColor::GetColor("#00cc00");
   lepZ1_eta_total__66->SetFillColor(ci);
   lepZ1_eta_total__66->SetMarkerStyle(20);
   lepZ1_eta_total__66->SetMarkerSize(1.1);
   lepZ1_eta_total__66->GetXaxis()->SetTitle("#eta(Z1 lep.)");
   lepZ1_eta_total__66->GetXaxis()->SetMoreLogLabels();
   lepZ1_eta_total__66->GetXaxis()->SetLabelFont(42);
   lepZ1_eta_total__66->GetXaxis()->SetLabelOffset(999);
   lepZ1_eta_total__66->GetXaxis()->SetLabelSize(0.05);
   lepZ1_eta_total__66->GetXaxis()->SetTitleSize(0.05);
   lepZ1_eta_total__66->GetXaxis()->SetTitleOffset(999);
   lepZ1_eta_total__66->GetXaxis()->SetTitleFont(42);
   lepZ1_eta_total__66->GetYaxis()->SetTitle("Leptons");
   lepZ1_eta_total__66->GetYaxis()->SetLabelFont(42);
   lepZ1_eta_total__66->GetYaxis()->SetLabelOffset(0.007);
   lepZ1_eta_total__66->GetYaxis()->SetLabelSize(0.05);
   lepZ1_eta_total__66->GetYaxis()->SetTitleSize(0.06);
   lepZ1_eta_total__66->GetYaxis()->SetTitleOffset(1.48);
   lepZ1_eta_total__66->GetYaxis()->SetTitleFont(42);
   lepZ1_eta_total__66->GetZaxis()->SetLabelFont(42);
   lepZ1_eta_total__66->GetZaxis()->SetLabelOffset(0.007);
   lepZ1_eta_total__66->GetZaxis()->SetLabelSize(0.05);
   lepZ1_eta_total__66->GetZaxis()->SetTitleSize(0.06);
   lepZ1_eta_total__66->GetZaxis()->SetTitleFont(42);
   lepZ1_eta_total__66->Draw("AXIS SAME");
   
   Double_t lepZ1_eta_total_errors_fx3081[10] = {
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
   Double_t lepZ1_eta_total_errors_fy3081[10] = {
   77.72869,
   122.5269,
   158.0443,
   187.6709,
   194.2811,
   217.2704,
   187.363,
   158.4353,
   121.3276,
   71.29621};
   Double_t lepZ1_eta_total_errors_felx3081[10] = {
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
   Double_t lepZ1_eta_total_errors_fely3081[10] = {
   4.61698,
   5.324935,
   6.333762,
   6.112372,
   5.145917,
   7.895237,
   6.104442,
   6.319353,
   5.068134,
   3.538005};
   Double_t lepZ1_eta_total_errors_fehx3081[10] = {
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
   Double_t lepZ1_eta_total_errors_fehy3081[10] = {
   4.61698,
   5.324935,
   6.333762,
   6.112372,
   5.145917,
   7.895237,
   6.104442,
   6.319353,
   5.068134,
   3.538005};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(10,lepZ1_eta_total_errors_fx3081,lepZ1_eta_total_errors_fy3081,lepZ1_eta_total_errors_felx3081,lepZ1_eta_total_errors_fehx3081,lepZ1_eta_total_errors_fely3081,lepZ1_eta_total_errors_fehy3081);
   grae->SetName("lepZ1_eta_total_errors");
   grae->SetTitle("Graph");
   grae->SetFillColor(1);
   grae->SetFillStyle(3013);
   grae->SetMarkerStyle(0);
   
   TH1F *Graph_lepZ1_eta_total_errors3081 = new TH1F("Graph_lepZ1_eta_total_errors3081","Graph",100,-3,3);
   Graph_lepZ1_eta_total_errors3081->SetMinimum(52.01747);
   Graph_lepZ1_eta_total_errors3081->SetMaximum(240.9064);
   Graph_lepZ1_eta_total_errors3081->SetDirectory(0);
   Graph_lepZ1_eta_total_errors3081->SetStats(0);
   Graph_lepZ1_eta_total_errors3081->SetLineStyle(0);
   Graph_lepZ1_eta_total_errors3081->SetMarkerStyle(20);
   Graph_lepZ1_eta_total_errors3081->GetXaxis()->SetLabelFont(42);
   Graph_lepZ1_eta_total_errors3081->GetXaxis()->SetLabelOffset(0.007);
   Graph_lepZ1_eta_total_errors3081->GetXaxis()->SetLabelSize(0.05);
   Graph_lepZ1_eta_total_errors3081->GetXaxis()->SetTitleSize(0.06);
   Graph_lepZ1_eta_total_errors3081->GetXaxis()->SetTitleOffset(0.9);
   Graph_lepZ1_eta_total_errors3081->GetXaxis()->SetTitleFont(42);
   Graph_lepZ1_eta_total_errors3081->GetYaxis()->SetLabelFont(42);
   Graph_lepZ1_eta_total_errors3081->GetYaxis()->SetLabelOffset(0.007);
   Graph_lepZ1_eta_total_errors3081->GetYaxis()->SetLabelSize(0.05);
   Graph_lepZ1_eta_total_errors3081->GetYaxis()->SetTitleSize(0.06);
   Graph_lepZ1_eta_total_errors3081->GetYaxis()->SetTitleOffset(1.35);
   Graph_lepZ1_eta_total_errors3081->GetYaxis()->SetTitleFont(42);
   Graph_lepZ1_eta_total_errors3081->GetZaxis()->SetLabelFont(42);
   Graph_lepZ1_eta_total_errors3081->GetZaxis()->SetLabelOffset(0.007);
   Graph_lepZ1_eta_total_errors3081->GetZaxis()->SetLabelSize(0.05);
   Graph_lepZ1_eta_total_errors3081->GetZaxis()->SetTitleSize(0.06);
   Graph_lepZ1_eta_total_errors3081->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_lepZ1_eta_total_errors3081);
   
   grae->Draw("pe2 ");
   
   Double_t lepZ1_eta_data_graph_fx3082[10] = {
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
   Double_t lepZ1_eta_data_graph_fy3082[10] = {
   79,
   131,
   149,
   195,
   205,
   220,
   197,
   159,
   104,
   74};
   Double_t lepZ1_eta_data_graph_felx3082[10] = {
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
   Double_t lepZ1_eta_data_graph_fely3082[10] = {
   8.869521,
   11.43114,
   12.1931,
   13.95255,
   14.30644,
   14.82143,
   14.02405,
   12.59651,
   10.18183,
   8.583016};
   Double_t lepZ1_eta_data_graph_fehx3082[10] = {
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
   Double_t lepZ1_eta_data_graph_fehy3082[10] = {
   9.925933,
   12.47494,
   13.23417,
   14.98845,
   15.34145,
   15.85523,
   15.05976,
   13.63627,
   11.23099,
   9.641304};
   grae = new TGraphAsymmErrors(10,lepZ1_eta_data_graph_fx3082,lepZ1_eta_data_graph_fy3082,lepZ1_eta_data_graph_felx3082,lepZ1_eta_data_graph_fehx3082,lepZ1_eta_data_graph_fely3082,lepZ1_eta_data_graph_fehy3082);
   grae->SetName("lepZ1_eta_data_graph");
   grae->SetTitle("Graph");
   grae->SetFillStyle(1000);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.1);
   
   TH1F *Graph_lepZ1_eta_data_graph3082 = new TH1F("Graph_lepZ1_eta_data_graph3082","Graph",100,-3,3);
   Graph_lepZ1_eta_data_graph3082->SetMinimum(48.37316);
   Graph_lepZ1_eta_data_graph3082->SetMaximum(252.8991);
   Graph_lepZ1_eta_data_graph3082->SetDirectory(0);
   Graph_lepZ1_eta_data_graph3082->SetStats(0);
   Graph_lepZ1_eta_data_graph3082->SetLineStyle(0);
   Graph_lepZ1_eta_data_graph3082->SetMarkerStyle(20);
   Graph_lepZ1_eta_data_graph3082->GetXaxis()->SetLabelFont(42);
   Graph_lepZ1_eta_data_graph3082->GetXaxis()->SetLabelOffset(0.007);
   Graph_lepZ1_eta_data_graph3082->GetXaxis()->SetLabelSize(0.05);
   Graph_lepZ1_eta_data_graph3082->GetXaxis()->SetTitleSize(0.06);
   Graph_lepZ1_eta_data_graph3082->GetXaxis()->SetTitleOffset(0.9);
   Graph_lepZ1_eta_data_graph3082->GetXaxis()->SetTitleFont(42);
   Graph_lepZ1_eta_data_graph3082->GetYaxis()->SetLabelFont(42);
   Graph_lepZ1_eta_data_graph3082->GetYaxis()->SetLabelOffset(0.007);
   Graph_lepZ1_eta_data_graph3082->GetYaxis()->SetLabelSize(0.05);
   Graph_lepZ1_eta_data_graph3082->GetYaxis()->SetTitleSize(0.06);
   Graph_lepZ1_eta_data_graph3082->GetYaxis()->SetTitleOffset(1.35);
   Graph_lepZ1_eta_data_graph3082->GetYaxis()->SetTitleFont(42);
   Graph_lepZ1_eta_data_graph3082->GetZaxis()->SetLabelFont(42);
   Graph_lepZ1_eta_data_graph3082->GetZaxis()->SetLabelOffset(0.007);
   Graph_lepZ1_eta_data_graph3082->GetZaxis()->SetLabelSize(0.05);
   Graph_lepZ1_eta_data_graph3082->GetZaxis()->SetTitleSize(0.06);
   Graph_lepZ1_eta_data_graph3082->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_lepZ1_eta_data_graph3082);
   
   grae->Draw("pz ");
   
   TLegend *leg = new TLegend(0.62,0.628,0.9,0.91,NULL,"brNDC");
   leg->SetBorderSize(1);
   leg->SetTextSize(0.036);
   leg->SetLineColor(0);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("lepZ1_eta_data","Data","LPE");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1.1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("lepZ1_eta_prompt_WZ_stack_5","WZ","F");

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
   entry=leg->AddEntry("lepZ1_eta_prompt_ZZ_stack_4","qqZZ","F");

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
   entry=leg->AddEntry("lepZ1_eta_fakes_DY_stack_3","Fakes DY","F");

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
   entry=leg->AddEntry("lepZ1_eta_fakes_TT_stack_2","Fakes TT","F");

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
   entry=leg->AddEntry("lepZ1_eta_total_errors","Total unc.","F");
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
   lepZ1_eta_canvas->cd();
  
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
   
   TH1D *lepZ1_eta_total__67 = new TH1D("lepZ1_eta_total__67","dummy",10,-2.5,2.5);
   lepZ1_eta_total__67->SetBinContent(1,1);
   lepZ1_eta_total__67->SetBinContent(2,1);
   lepZ1_eta_total__67->SetBinContent(3,1);
   lepZ1_eta_total__67->SetBinContent(4,1);
   lepZ1_eta_total__67->SetBinContent(5,1);
   lepZ1_eta_total__67->SetBinContent(6,1);
   lepZ1_eta_total__67->SetBinContent(7,1);
   lepZ1_eta_total__67->SetBinContent(8,1);
   lepZ1_eta_total__67->SetBinContent(9,1);
   lepZ1_eta_total__67->SetBinContent(10,1);
   lepZ1_eta_total__67->SetMinimum(0.5);
   lepZ1_eta_total__67->SetMaximum(2);
   lepZ1_eta_total__67->SetEntries(15162);

   ci = TColor::GetColor("#00cc00");
   lepZ1_eta_total__67->SetFillColor(ci);

   ci = TColor::GetColor("#6666ff");
   lepZ1_eta_total__67->SetMarkerColor(ci);
   lepZ1_eta_total__67->SetMarkerSize(1.1);
   lepZ1_eta_total__67->GetXaxis()->SetTitle("#eta(Z1 lep.)");
   lepZ1_eta_total__67->GetXaxis()->SetMoreLogLabels();
   lepZ1_eta_total__67->GetXaxis()->SetLabelFont(42);
   lepZ1_eta_total__67->GetXaxis()->SetLabelOffset(0.015);
   lepZ1_eta_total__67->GetXaxis()->SetLabelSize(0.1);
   lepZ1_eta_total__67->GetXaxis()->SetTitleSize(0.14);
   lepZ1_eta_total__67->GetXaxis()->SetTitleFont(42);
   lepZ1_eta_total__67->GetYaxis()->SetTitle("Data/pred.");
   lepZ1_eta_total__67->GetYaxis()->SetDecimals();
   lepZ1_eta_total__67->GetYaxis()->SetNdivisions(505);
   lepZ1_eta_total__67->GetYaxis()->SetLabelFont(42);
   lepZ1_eta_total__67->GetYaxis()->SetLabelOffset(0.01);
   lepZ1_eta_total__67->GetYaxis()->SetLabelSize(0.11);
   lepZ1_eta_total__67->GetYaxis()->SetTitleSize(0.14);
   lepZ1_eta_total__67->GetYaxis()->SetTitleOffset(0.62);
   lepZ1_eta_total__67->GetYaxis()->SetTitleFont(42);
   lepZ1_eta_total__67->GetZaxis()->SetLabelFont(42);
   lepZ1_eta_total__67->GetZaxis()->SetLabelOffset(0.007);
   lepZ1_eta_total__67->GetZaxis()->SetLabelSize(0.05);
   lepZ1_eta_total__67->GetZaxis()->SetTitleSize(0.06);
   lepZ1_eta_total__67->GetZaxis()->SetTitleFont(42);
   lepZ1_eta_total__67->Draw("AXIS");
   
   Double_t lepZ1_eta_total_errors_fx3083[10] = {
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
   Double_t lepZ1_eta_total_errors_fy3083[10] = {
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
   Double_t lepZ1_eta_total_errors_felx3083[10] = {
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
   Double_t lepZ1_eta_total_errors_fely3083[10] = {
   0.05939866,
   0.04345932,
   0.04007586,
   0.03256963,
   0.02648696,
   0.0363383,
   0.03258082,
   0.03988602,
   0.04177229,
   0.04962402};
   Double_t lepZ1_eta_total_errors_fehx3083[10] = {
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
   Double_t lepZ1_eta_total_errors_fehy3083[10] = {
   0.05939866,
   0.04345932,
   0.04007586,
   0.03256963,
   0.02648696,
   0.0363383,
   0.03258082,
   0.03988602,
   0.04177229,
   0.04962402};
   grae = new TGraphAsymmErrors(10,lepZ1_eta_total_errors_fx3083,lepZ1_eta_total_errors_fy3083,lepZ1_eta_total_errors_felx3083,lepZ1_eta_total_errors_fehx3083,lepZ1_eta_total_errors_fely3083,lepZ1_eta_total_errors_fehy3083);
   grae->SetName("lepZ1_eta_total_errors");
   grae->SetTitle("Graph");

   ci = TColor::GetColor("#00ffff");
   grae->SetFillColor(ci);

   ci = TColor::GetColor("#00ffff");
   grae->SetMarkerColor(ci);
   grae->Draw("e2");
   
   Double_t lepZ1_eta_total_errors_fx3084[10] = {
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
   Double_t lepZ1_eta_total_errors_fy3084[10] = {
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
   Double_t lepZ1_eta_total_errors_felx3084[10] = {
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
   Double_t lepZ1_eta_total_errors_fely3084[10] = {
   0.05939866,
   0.04345932,
   0.04007586,
   0.03256963,
   0.02648696,
   0.0363383,
   0.03258082,
   0.03988602,
   0.04177229,
   0.04962402};
   Double_t lepZ1_eta_total_errors_fehx3084[10] = {
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
   Double_t lepZ1_eta_total_errors_fehy3084[10] = {
   0.05939866,
   0.04345932,
   0.04007586,
   0.03256963,
   0.02648696,
   0.0363383,
   0.03258082,
   0.03988602,
   0.04177229,
   0.04962402};
   grae = new TGraphAsymmErrors(10,lepZ1_eta_total_errors_fx3084,lepZ1_eta_total_errors_fy3084,lepZ1_eta_total_errors_felx3084,lepZ1_eta_total_errors_fehx3084,lepZ1_eta_total_errors_fely3084,lepZ1_eta_total_errors_fehy3084);
   grae->SetName("lepZ1_eta_total_errors");
   grae->SetTitle("Graph");

   ci = TColor::GetColor("#6666ff");
   grae->SetFillColor(ci);

   ci = TColor::GetColor("#6666ff");
   grae->SetMarkerColor(ci);
   grae->Draw("e2 ");
   
   TH1D *lepZ1_eta_total__68 = new TH1D("lepZ1_eta_total__68","dummy",10,-2.5,2.5);
   lepZ1_eta_total__68->SetBinContent(1,1);
   lepZ1_eta_total__68->SetBinContent(2,1);
   lepZ1_eta_total__68->SetBinContent(3,1);
   lepZ1_eta_total__68->SetBinContent(4,1);
   lepZ1_eta_total__68->SetBinContent(5,1);
   lepZ1_eta_total__68->SetBinContent(6,1);
   lepZ1_eta_total__68->SetBinContent(7,1);
   lepZ1_eta_total__68->SetBinContent(8,1);
   lepZ1_eta_total__68->SetBinContent(9,1);
   lepZ1_eta_total__68->SetBinContent(10,1);
   lepZ1_eta_total__68->SetMinimum(0.5);
   lepZ1_eta_total__68->SetMaximum(2);
   lepZ1_eta_total__68->SetEntries(15162);

   ci = TColor::GetColor("#00cc00");
   lepZ1_eta_total__68->SetFillColor(ci);

   ci = TColor::GetColor("#6666ff");
   lepZ1_eta_total__68->SetMarkerColor(ci);
   lepZ1_eta_total__68->SetMarkerSize(1.1);
   lepZ1_eta_total__68->GetXaxis()->SetTitle("#eta(Z1 lep.)");
   lepZ1_eta_total__68->GetXaxis()->SetMoreLogLabels();
   lepZ1_eta_total__68->GetXaxis()->SetLabelFont(42);
   lepZ1_eta_total__68->GetXaxis()->SetLabelOffset(0.015);
   lepZ1_eta_total__68->GetXaxis()->SetLabelSize(0.1);
   lepZ1_eta_total__68->GetXaxis()->SetTitleSize(0.14);
   lepZ1_eta_total__68->GetXaxis()->SetTitleFont(42);
   lepZ1_eta_total__68->GetYaxis()->SetTitle("Data/pred.");
   lepZ1_eta_total__68->GetYaxis()->SetDecimals();
   lepZ1_eta_total__68->GetYaxis()->SetNdivisions(505);
   lepZ1_eta_total__68->GetYaxis()->SetLabelFont(42);
   lepZ1_eta_total__68->GetYaxis()->SetLabelOffset(0.01);
   lepZ1_eta_total__68->GetYaxis()->SetLabelSize(0.11);
   lepZ1_eta_total__68->GetYaxis()->SetTitleSize(0.14);
   lepZ1_eta_total__68->GetYaxis()->SetTitleOffset(0.62);
   lepZ1_eta_total__68->GetYaxis()->SetTitleFont(42);
   lepZ1_eta_total__68->GetZaxis()->SetLabelFont(42);
   lepZ1_eta_total__68->GetZaxis()->SetLabelOffset(0.007);
   lepZ1_eta_total__68->GetZaxis()->SetLabelSize(0.05);
   lepZ1_eta_total__68->GetZaxis()->SetTitleSize(0.06);
   lepZ1_eta_total__68->GetZaxis()->SetTitleFont(42);
   lepZ1_eta_total__68->Draw("AXIS SAME");
   TLine *line = new TLine(-2.5,1,2.5,1);
   line->SetLineColor(58);
   line->SetLineWidth(2);
   line->Draw();
   
   Double_t data_div_fx3085[10] = {
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
   Double_t data_div_fy3085[10] = {
   1.016356,
   1.069153,
   0.9427735,
   1.039053,
   1.055172,
   1.012563,
   1.051435,
   1.003564,
   0.857183,
   1.037923};
   Double_t data_div_felx3085[10] = {
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
   Double_t data_div_fely3085[10] = {
   0.1141087,
   0.09329493,
   0.07714988,
   0.07434584,
   0.07363782,
   0.06821653,
   0.07484959,
   0.07950573,
   0.08392009,
   0.1203853};
   Double_t data_div_fehx3085[10] = {
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
   Double_t data_div_fehy3085[10] = {
   0.1276997,
   0.1018139,
   0.08373707,
   0.07986559,
   0.0789652,
   0.07297463,
   0.08037743,
   0.08606837,
   0.09256744,
   0.1352288};
   grae = new TGraphAsymmErrors(10,data_div_fx3085,data_div_fy3085,data_div_felx3085,data_div_fehx3085,data_div_fely3085,data_div_fehy3085);
   grae->SetName("data_div");
   grae->SetTitle("Graph");
   grae->SetFillStyle(1000);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.1);
   
   TH1F *Graph_lepZ1_eta_data_graph3085 = new TH1F("Graph_lepZ1_eta_data_graph3085","Graph",100,-3,3);
   Graph_lepZ1_eta_data_graph3085->SetMinimum(48.37316);
   Graph_lepZ1_eta_data_graph3085->SetMaximum(252.8991);
   Graph_lepZ1_eta_data_graph3085->SetDirectory(0);
   Graph_lepZ1_eta_data_graph3085->SetStats(0);
   Graph_lepZ1_eta_data_graph3085->SetLineStyle(0);
   Graph_lepZ1_eta_data_graph3085->SetMarkerStyle(20);
   Graph_lepZ1_eta_data_graph3085->GetXaxis()->SetLabelFont(42);
   Graph_lepZ1_eta_data_graph3085->GetXaxis()->SetLabelOffset(0.007);
   Graph_lepZ1_eta_data_graph3085->GetXaxis()->SetLabelSize(0.05);
   Graph_lepZ1_eta_data_graph3085->GetXaxis()->SetTitleSize(0.06);
   Graph_lepZ1_eta_data_graph3085->GetXaxis()->SetTitleOffset(0.9);
   Graph_lepZ1_eta_data_graph3085->GetXaxis()->SetTitleFont(42);
   Graph_lepZ1_eta_data_graph3085->GetYaxis()->SetLabelFont(42);
   Graph_lepZ1_eta_data_graph3085->GetYaxis()->SetLabelOffset(0.007);
   Graph_lepZ1_eta_data_graph3085->GetYaxis()->SetLabelSize(0.05);
   Graph_lepZ1_eta_data_graph3085->GetYaxis()->SetTitleSize(0.06);
   Graph_lepZ1_eta_data_graph3085->GetYaxis()->SetTitleOffset(1.35);
   Graph_lepZ1_eta_data_graph3085->GetYaxis()->SetTitleFont(42);
   Graph_lepZ1_eta_data_graph3085->GetZaxis()->SetLabelFont(42);
   Graph_lepZ1_eta_data_graph3085->GetZaxis()->SetLabelOffset(0.007);
   Graph_lepZ1_eta_data_graph3085->GetZaxis()->SetLabelSize(0.05);
   Graph_lepZ1_eta_data_graph3085->GetZaxis()->SetTitleSize(0.06);
   Graph_lepZ1_eta_data_graph3085->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_lepZ1_eta_data_graph3085);
   
   grae->Draw("pz ");
   
   leg = new TLegend(0,0,0,0,NULL,"brNDC");
   leg->SetBorderSize(1);
   leg->SetTextSize(0.084);
   leg->SetLineColor(0);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   entry=leg->AddEntry("lepZ1_eta_total_errors","stat. unc.","F");
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
   entry=leg->AddEntry("lepZ1_eta_total_errors","total unc.","F");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   leg->Draw();
   pad2->Modified();
   lepZ1_eta_canvas->cd();
   lepZ1_eta_canvas->Modified();
   lepZ1_eta_canvas->cd();
   lepZ1_eta_canvas->SetSelected(lepZ1_eta_canvas);
}
