void flavorLoose()
{
//=========Macro generated from canvas: flavorLoose_canvas/flavorLoose
//=========  (Thu Dec 15 18:32:27 2022) by ROOT version 6.12/07
   TCanvas *flavorLoose_canvas = new TCanvas("flavorLoose_canvas", "flavorLoose",0,0,600,750);
   gStyle->SetOptFit(1);
   gStyle->SetOptStat(0);
   gStyle->SetOptTitle(0);
   flavorLoose_canvas->SetHighLightColor(2);
   flavorLoose_canvas->Range(0,0,1,1);
   flavorLoose_canvas->SetFillColor(0);
   flavorLoose_canvas->SetBorderMode(0);
   flavorLoose_canvas->SetBorderSize(2);
   flavorLoose_canvas->SetTickx(1);
   flavorLoose_canvas->SetTicky(1);
   flavorLoose_canvas->SetLeftMargin(0.18);
   flavorLoose_canvas->SetRightMargin(0.04);
   flavorLoose_canvas->SetBottomMargin(0.13);
   flavorLoose_canvas->SetFrameFillStyle(0);
   flavorLoose_canvas->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: pad1
   TPad *pad1 = new TPad("pad1", "pad1",0,0.3,1,1);
   pad1->Draw();
   pad1->cd();
   pad1->Range(-1.423077,-29.94004,3.705128,1167.662);
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
   
   TH1D *flavorLoose_total__121 = new TH1D("flavorLoose_total__121","dummy",4,-0.5,3.5);
   flavorLoose_total__121->SetBinContent(1,232.143);
   flavorLoose_total__121->SetBinContent(2,279.1637);
   flavorLoose_total__121->SetBinContent(3,436.7351);
   flavorLoose_total__121->SetBinContent(4,547.9028);
   flavorLoose_total__121->SetBinError(1,7.440654);
   flavorLoose_total__121->SetBinError(2,6.360375);
   flavorLoose_total__121->SetBinError(3,11.6598);
   flavorLoose_total__121->SetBinError(4,9.979856);
   flavorLoose_total__121->SetMinimum(0);
   flavorLoose_total__121->SetMaximum(1095.806);
   flavorLoose_total__121->SetEntries(15152);
   flavorLoose_total__121->SetDirectory(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#00cc00");
   flavorLoose_total__121->SetFillColor(ci);
   flavorLoose_total__121->SetMarkerStyle(20);
   flavorLoose_total__121->SetMarkerSize(1.1);
   flavorLoose_total__121->GetXaxis()->SetTitle("flavor");
   flavorLoose_total__121->GetXaxis()->SetBinLabel(1,"eee");
   flavorLoose_total__121->GetXaxis()->SetBinLabel(2,"ee#mu");
   flavorLoose_total__121->GetXaxis()->SetBinLabel(3,"e#mu#mu");
   flavorLoose_total__121->GetXaxis()->SetBinLabel(4,"#mu#mu#mu");
   flavorLoose_total__121->GetXaxis()->SetMoreLogLabels();
   flavorLoose_total__121->GetXaxis()->SetLabelFont(42);
   flavorLoose_total__121->GetXaxis()->SetLabelOffset(999);
   flavorLoose_total__121->GetXaxis()->SetLabelSize(0.05);
   flavorLoose_total__121->GetXaxis()->SetTitleSize(0.05);
   flavorLoose_total__121->GetXaxis()->SetTitleOffset(999);
   flavorLoose_total__121->GetXaxis()->SetTitleFont(42);
   flavorLoose_total__121->GetYaxis()->SetTitle("Events");
   flavorLoose_total__121->GetYaxis()->SetLabelFont(42);
   flavorLoose_total__121->GetYaxis()->SetLabelOffset(0.007);
   flavorLoose_total__121->GetYaxis()->SetLabelSize(0.05);
   flavorLoose_total__121->GetYaxis()->SetTitleSize(0.06);
   flavorLoose_total__121->GetYaxis()->SetTitleOffset(1.48);
   flavorLoose_total__121->GetYaxis()->SetTitleFont(42);
   flavorLoose_total__121->GetZaxis()->SetLabelFont(42);
   flavorLoose_total__121->GetZaxis()->SetLabelOffset(0.007);
   flavorLoose_total__121->GetZaxis()->SetLabelSize(0.05);
   flavorLoose_total__121->GetZaxis()->SetTitleSize(0.06);
   flavorLoose_total__121->GetZaxis()->SetTitleFont(42);
   flavorLoose_total__121->Draw("HIST");
   
   THStack *flavorLoose_stack = new THStack();
   flavorLoose_stack->SetName("flavorLoose_stack");
   flavorLoose_stack->SetTitle("flavorLoose");
   
   TH1F *flavorLoose_stack_stack_31 = new TH1F("flavorLoose_stack_stack_31","flavorLoose",4,-0.5,3.5);
   flavorLoose_stack_stack_31->SetMinimum(0);
   flavorLoose_stack_stack_31->SetMaximum(575.2979);
   flavorLoose_stack_stack_31->SetDirectory(0);
   flavorLoose_stack_stack_31->SetStats(0);
   flavorLoose_stack_stack_31->SetLineStyle(0);
   flavorLoose_stack_stack_31->SetMarkerStyle(20);
   flavorLoose_stack_stack_31->GetXaxis()->SetLabelFont(42);
   flavorLoose_stack_stack_31->GetXaxis()->SetLabelOffset(0.007);
   flavorLoose_stack_stack_31->GetXaxis()->SetLabelSize(0.05);
   flavorLoose_stack_stack_31->GetXaxis()->SetTitleSize(0.06);
   flavorLoose_stack_stack_31->GetXaxis()->SetTitleOffset(0.9);
   flavorLoose_stack_stack_31->GetXaxis()->SetTitleFont(42);
   flavorLoose_stack_stack_31->GetYaxis()->SetLabelFont(42);
   flavorLoose_stack_stack_31->GetYaxis()->SetLabelOffset(0.007);
   flavorLoose_stack_stack_31->GetYaxis()->SetLabelSize(0.05);
   flavorLoose_stack_stack_31->GetYaxis()->SetTitleSize(0.06);
   flavorLoose_stack_stack_31->GetYaxis()->SetTitleOffset(1.35);
   flavorLoose_stack_stack_31->GetYaxis()->SetTitleFont(42);
   flavorLoose_stack_stack_31->GetZaxis()->SetLabelFont(42);
   flavorLoose_stack_stack_31->GetZaxis()->SetLabelOffset(0.007);
   flavorLoose_stack_stack_31->GetZaxis()->SetLabelSize(0.05);
   flavorLoose_stack_stack_31->GetZaxis()->SetTitleSize(0.06);
   flavorLoose_stack_stack_31->GetZaxis()->SetTitleFont(42);
   flavorLoose_stack->SetHistogram(flavorLoose_stack_stack_31);
   
   
   TH1D *flavorLoose_fakes_VV_stack_1 = new TH1D("flavorLoose_fakes_VV_stack_1","dummy",4,-0.5,3.5);
   flavorLoose_fakes_VV_stack_1->SetBinContent(1,0.1943867);
   flavorLoose_fakes_VV_stack_1->SetBinContent(2,0.09719337);
   flavorLoose_fakes_VV_stack_1->SetBinContent(3,0.3887735);
   flavorLoose_fakes_VV_stack_1->SetBinError(1,0.1374522);
   flavorLoose_fakes_VV_stack_1->SetBinError(2,0.09719337);
   flavorLoose_fakes_VV_stack_1->SetBinError(3,0.1943867);
   flavorLoose_fakes_VV_stack_1->SetEntries(11);

   ci = TColor::GetColor("#2e3294");
   flavorLoose_fakes_VV_stack_1->SetFillColor(ci);
   flavorLoose_fakes_VV_stack_1->SetMarkerStyle(0);
   flavorLoose_fakes_VV_stack_1->SetMarkerSize(1.1);
   flavorLoose_fakes_VV_stack_1->GetXaxis()->SetTitle("flavor");
   flavorLoose_fakes_VV_stack_1->GetXaxis()->SetMoreLogLabels();
   flavorLoose_fakes_VV_stack_1->GetXaxis()->SetLabelFont(42);
   flavorLoose_fakes_VV_stack_1->GetXaxis()->SetLabelOffset(0.007);
   flavorLoose_fakes_VV_stack_1->GetXaxis()->SetLabelSize(0.05);
   flavorLoose_fakes_VV_stack_1->GetXaxis()->SetTitleSize(0.06);
   flavorLoose_fakes_VV_stack_1->GetXaxis()->SetTitleOffset(0.9);
   flavorLoose_fakes_VV_stack_1->GetXaxis()->SetTitleFont(42);
   flavorLoose_fakes_VV_stack_1->GetYaxis()->SetTitle("Events");
   flavorLoose_fakes_VV_stack_1->GetYaxis()->SetLabelFont(42);
   flavorLoose_fakes_VV_stack_1->GetYaxis()->SetLabelOffset(0.007);
   flavorLoose_fakes_VV_stack_1->GetYaxis()->SetLabelSize(0.05);
   flavorLoose_fakes_VV_stack_1->GetYaxis()->SetTitleSize(0.06);
   flavorLoose_fakes_VV_stack_1->GetYaxis()->SetTitleOffset(1.35);
   flavorLoose_fakes_VV_stack_1->GetYaxis()->SetTitleFont(42);
   flavorLoose_fakes_VV_stack_1->GetZaxis()->SetLabelFont(42);
   flavorLoose_fakes_VV_stack_1->GetZaxis()->SetLabelOffset(0.007);
   flavorLoose_fakes_VV_stack_1->GetZaxis()->SetLabelSize(0.05);
   flavorLoose_fakes_VV_stack_1->GetZaxis()->SetTitleSize(0.06);
   flavorLoose_fakes_VV_stack_1->GetZaxis()->SetTitleFont(42);
   flavorLoose_stack->Add(flavorLoose_fakes_VV_stack_1,"");
   
   TH1D *flavorLoose_fakes_TT_stack_2 = new TH1D("flavorLoose_fakes_TT_stack_2","dummy",4,-0.5,3.5);
   flavorLoose_fakes_TT_stack_2->SetBinContent(1,5.232204);
   flavorLoose_fakes_TT_stack_2->SetBinContent(2,10.57258);
   flavorLoose_fakes_TT_stack_2->SetBinContent(3,16.93519);
   flavorLoose_fakes_TT_stack_2->SetBinContent(4,22.30435);
   flavorLoose_fakes_TT_stack_2->SetBinError(1,0.5941644);
   flavorLoose_fakes_TT_stack_2->SetBinError(2,0.8384603);
   flavorLoose_fakes_TT_stack_2->SetBinError(3,1.071867);
   flavorLoose_fakes_TT_stack_2->SetBinError(4,1.239048);
   flavorLoose_fakes_TT_stack_2->SetEntries(841);

   ci = TColor::GetColor("#666666");
   flavorLoose_fakes_TT_stack_2->SetFillColor(ci);
   flavorLoose_fakes_TT_stack_2->SetMarkerStyle(0);
   flavorLoose_fakes_TT_stack_2->SetMarkerSize(1.1);
   flavorLoose_fakes_TT_stack_2->GetXaxis()->SetTitle("flavor");
   flavorLoose_fakes_TT_stack_2->GetXaxis()->SetMoreLogLabels();
   flavorLoose_fakes_TT_stack_2->GetXaxis()->SetLabelFont(42);
   flavorLoose_fakes_TT_stack_2->GetXaxis()->SetLabelOffset(0.007);
   flavorLoose_fakes_TT_stack_2->GetXaxis()->SetLabelSize(0.05);
   flavorLoose_fakes_TT_stack_2->GetXaxis()->SetTitleSize(0.06);
   flavorLoose_fakes_TT_stack_2->GetXaxis()->SetTitleOffset(0.9);
   flavorLoose_fakes_TT_stack_2->GetXaxis()->SetTitleFont(42);
   flavorLoose_fakes_TT_stack_2->GetYaxis()->SetTitle("Events");
   flavorLoose_fakes_TT_stack_2->GetYaxis()->SetLabelFont(42);
   flavorLoose_fakes_TT_stack_2->GetYaxis()->SetLabelOffset(0.007);
   flavorLoose_fakes_TT_stack_2->GetYaxis()->SetLabelSize(0.05);
   flavorLoose_fakes_TT_stack_2->GetYaxis()->SetTitleSize(0.06);
   flavorLoose_fakes_TT_stack_2->GetYaxis()->SetTitleOffset(1.35);
   flavorLoose_fakes_TT_stack_2->GetYaxis()->SetTitleFont(42);
   flavorLoose_fakes_TT_stack_2->GetZaxis()->SetLabelFont(42);
   flavorLoose_fakes_TT_stack_2->GetZaxis()->SetLabelOffset(0.007);
   flavorLoose_fakes_TT_stack_2->GetZaxis()->SetLabelSize(0.05);
   flavorLoose_fakes_TT_stack_2->GetZaxis()->SetTitleSize(0.06);
   flavorLoose_fakes_TT_stack_2->GetZaxis()->SetTitleFont(42);
   flavorLoose_stack->Add(flavorLoose_fakes_TT_stack_2,"");
   
   TH1D *flavorLoose_fakes_DY_stack_3 = new TH1D("flavorLoose_fakes_DY_stack_3","dummy",4,-0.5,3.5);
   flavorLoose_fakes_DY_stack_3->SetBinContent(1,20.63427);
   flavorLoose_fakes_DY_stack_3->SetBinContent(2,8.597611);
   flavorLoose_fakes_DY_stack_3->SetBinContent(3,58.46375);
   flavorLoose_fakes_DY_stack_3->SetBinContent(4,29.23188);
   flavorLoose_fakes_DY_stack_3->SetBinError(1,5.956599);
   flavorLoose_fakes_DY_stack_3->SetBinError(2,3.844968);
   flavorLoose_fakes_DY_stack_3->SetBinError(3,10.02645);
   flavorLoose_fakes_DY_stack_3->SetBinError(4,7.089771);
   flavorLoose_fakes_DY_stack_3->SetEntries(72);

   ci = TColor::GetColor("#cccccc");
   flavorLoose_fakes_DY_stack_3->SetFillColor(ci);
   flavorLoose_fakes_DY_stack_3->SetMarkerStyle(0);
   flavorLoose_fakes_DY_stack_3->SetMarkerSize(1.1);
   flavorLoose_fakes_DY_stack_3->GetXaxis()->SetTitle("flavor");
   flavorLoose_fakes_DY_stack_3->GetXaxis()->SetMoreLogLabels();
   flavorLoose_fakes_DY_stack_3->GetXaxis()->SetLabelFont(42);
   flavorLoose_fakes_DY_stack_3->GetXaxis()->SetLabelOffset(0.007);
   flavorLoose_fakes_DY_stack_3->GetXaxis()->SetLabelSize(0.05);
   flavorLoose_fakes_DY_stack_3->GetXaxis()->SetTitleSize(0.06);
   flavorLoose_fakes_DY_stack_3->GetXaxis()->SetTitleOffset(0.9);
   flavorLoose_fakes_DY_stack_3->GetXaxis()->SetTitleFont(42);
   flavorLoose_fakes_DY_stack_3->GetYaxis()->SetTitle("Events");
   flavorLoose_fakes_DY_stack_3->GetYaxis()->SetLabelFont(42);
   flavorLoose_fakes_DY_stack_3->GetYaxis()->SetLabelOffset(0.007);
   flavorLoose_fakes_DY_stack_3->GetYaxis()->SetLabelSize(0.05);
   flavorLoose_fakes_DY_stack_3->GetYaxis()->SetTitleSize(0.06);
   flavorLoose_fakes_DY_stack_3->GetYaxis()->SetTitleOffset(1.35);
   flavorLoose_fakes_DY_stack_3->GetYaxis()->SetTitleFont(42);
   flavorLoose_fakes_DY_stack_3->GetZaxis()->SetLabelFont(42);
   flavorLoose_fakes_DY_stack_3->GetZaxis()->SetLabelOffset(0.007);
   flavorLoose_fakes_DY_stack_3->GetZaxis()->SetLabelSize(0.05);
   flavorLoose_fakes_DY_stack_3->GetZaxis()->SetTitleSize(0.06);
   flavorLoose_fakes_DY_stack_3->GetZaxis()->SetTitleFont(42);
   flavorLoose_stack->Add(flavorLoose_fakes_DY_stack_3,"");
   
   TH1D *flavorLoose_prompt_ZZ_stack_4 = new TH1D("flavorLoose_prompt_ZZ_stack_4","dummy",4,-0.5,3.5);
   flavorLoose_prompt_ZZ_stack_4->SetBinContent(1,9.357756);
   flavorLoose_prompt_ZZ_stack_4->SetBinContent(2,15.59626);
   flavorLoose_prompt_ZZ_stack_4->SetBinContent(3,17.06414);
   flavorLoose_prompt_ZZ_stack_4->SetBinContent(4,31.19252);
   flavorLoose_prompt_ZZ_stack_4->SetBinError(1,1.310348);
   flavorLoose_prompt_ZZ_stack_4->SetBinError(2,1.691652);
   flavorLoose_prompt_ZZ_stack_4->SetBinError(3,1.769469);
   flavorLoose_prompt_ZZ_stack_4->SetBinError(4,2.392357);
   flavorLoose_prompt_ZZ_stack_4->SetEntries(403);

   ci = TColor::GetColor("#00cc00");
   flavorLoose_prompt_ZZ_stack_4->SetFillColor(ci);
   flavorLoose_prompt_ZZ_stack_4->SetMarkerStyle(0);
   flavorLoose_prompt_ZZ_stack_4->SetMarkerSize(1.1);
   flavorLoose_prompt_ZZ_stack_4->GetXaxis()->SetTitle("flavor");
   flavorLoose_prompt_ZZ_stack_4->GetXaxis()->SetMoreLogLabels();
   flavorLoose_prompt_ZZ_stack_4->GetXaxis()->SetLabelFont(42);
   flavorLoose_prompt_ZZ_stack_4->GetXaxis()->SetLabelOffset(0.007);
   flavorLoose_prompt_ZZ_stack_4->GetXaxis()->SetLabelSize(0.05);
   flavorLoose_prompt_ZZ_stack_4->GetXaxis()->SetTitleSize(0.06);
   flavorLoose_prompt_ZZ_stack_4->GetXaxis()->SetTitleOffset(0.9);
   flavorLoose_prompt_ZZ_stack_4->GetXaxis()->SetTitleFont(42);
   flavorLoose_prompt_ZZ_stack_4->GetYaxis()->SetTitle("Events");
   flavorLoose_prompt_ZZ_stack_4->GetYaxis()->SetLabelFont(42);
   flavorLoose_prompt_ZZ_stack_4->GetYaxis()->SetLabelOffset(0.007);
   flavorLoose_prompt_ZZ_stack_4->GetYaxis()->SetLabelSize(0.05);
   flavorLoose_prompt_ZZ_stack_4->GetYaxis()->SetTitleSize(0.06);
   flavorLoose_prompt_ZZ_stack_4->GetYaxis()->SetTitleOffset(1.35);
   flavorLoose_prompt_ZZ_stack_4->GetYaxis()->SetTitleFont(42);
   flavorLoose_prompt_ZZ_stack_4->GetZaxis()->SetLabelFont(42);
   flavorLoose_prompt_ZZ_stack_4->GetZaxis()->SetLabelOffset(0.007);
   flavorLoose_prompt_ZZ_stack_4->GetZaxis()->SetLabelSize(0.05);
   flavorLoose_prompt_ZZ_stack_4->GetZaxis()->SetTitleSize(0.06);
   flavorLoose_prompt_ZZ_stack_4->GetZaxis()->SetTitleFont(42);
   flavorLoose_stack->Add(flavorLoose_prompt_ZZ_stack_4,"");
   
   TH1D *flavorLoose_prompt_WZ_stack_5 = new TH1D("flavorLoose_prompt_WZ_stack_5","dummy",4,-0.5,3.5);
   flavorLoose_prompt_WZ_stack_5->SetBinContent(1,196.7244);
   flavorLoose_prompt_WZ_stack_5->SetBinContent(2,244.3);
   flavorLoose_prompt_WZ_stack_5->SetBinContent(3,343.8833);
   flavorLoose_prompt_WZ_stack_5->SetBinContent(4,465.174);
   flavorLoose_prompt_WZ_stack_5->SetBinError(1,4.218213);
   flavorLoose_prompt_WZ_stack_5->SetBinError(2,4.700686);
   flavorLoose_prompt_WZ_stack_5->SetBinError(3,5.577056);
   flavorLoose_prompt_WZ_stack_5->SetBinError(4,6.486452);
   flavorLoose_prompt_WZ_stack_5->SetEntries(13825);

   ci = TColor::GetColor("#ffcc00");
   flavorLoose_prompt_WZ_stack_5->SetFillColor(ci);
   flavorLoose_prompt_WZ_stack_5->SetMarkerStyle(0);
   flavorLoose_prompt_WZ_stack_5->SetMarkerSize(1.1);
   flavorLoose_prompt_WZ_stack_5->GetXaxis()->SetTitle("flavor");
   flavorLoose_prompt_WZ_stack_5->GetXaxis()->SetMoreLogLabels();
   flavorLoose_prompt_WZ_stack_5->GetXaxis()->SetLabelFont(42);
   flavorLoose_prompt_WZ_stack_5->GetXaxis()->SetLabelOffset(0.007);
   flavorLoose_prompt_WZ_stack_5->GetXaxis()->SetLabelSize(0.05);
   flavorLoose_prompt_WZ_stack_5->GetXaxis()->SetTitleSize(0.06);
   flavorLoose_prompt_WZ_stack_5->GetXaxis()->SetTitleOffset(0.9);
   flavorLoose_prompt_WZ_stack_5->GetXaxis()->SetTitleFont(42);
   flavorLoose_prompt_WZ_stack_5->GetYaxis()->SetTitle("Events");
   flavorLoose_prompt_WZ_stack_5->GetYaxis()->SetLabelFont(42);
   flavorLoose_prompt_WZ_stack_5->GetYaxis()->SetLabelOffset(0.007);
   flavorLoose_prompt_WZ_stack_5->GetYaxis()->SetLabelSize(0.05);
   flavorLoose_prompt_WZ_stack_5->GetYaxis()->SetTitleSize(0.06);
   flavorLoose_prompt_WZ_stack_5->GetYaxis()->SetTitleOffset(1.35);
   flavorLoose_prompt_WZ_stack_5->GetYaxis()->SetTitleFont(42);
   flavorLoose_prompt_WZ_stack_5->GetZaxis()->SetLabelFont(42);
   flavorLoose_prompt_WZ_stack_5->GetZaxis()->SetLabelOffset(0.007);
   flavorLoose_prompt_WZ_stack_5->GetZaxis()->SetLabelSize(0.05);
   flavorLoose_prompt_WZ_stack_5->GetZaxis()->SetTitleSize(0.06);
   flavorLoose_prompt_WZ_stack_5->GetZaxis()->SetTitleFont(42);
   flavorLoose_stack->Add(flavorLoose_prompt_WZ_stack_5,"");
   flavorLoose_stack->Draw("same hist");
   
   TH1D *flavorLoose_total__122 = new TH1D("flavorLoose_total__122","dummy",4,-0.5,3.5);
   flavorLoose_total__122->SetBinContent(1,232.143);
   flavorLoose_total__122->SetBinContent(2,279.1637);
   flavorLoose_total__122->SetBinContent(3,436.7351);
   flavorLoose_total__122->SetBinContent(4,547.9028);
   flavorLoose_total__122->SetBinError(1,7.440654);
   flavorLoose_total__122->SetBinError(2,6.360375);
   flavorLoose_total__122->SetBinError(3,11.6598);
   flavorLoose_total__122->SetBinError(4,9.979856);
   flavorLoose_total__122->SetMinimum(0);
   flavorLoose_total__122->SetMaximum(1095.806);
   flavorLoose_total__122->SetEntries(15152);
   flavorLoose_total__122->SetDirectory(0);

   ci = TColor::GetColor("#00cc00");
   flavorLoose_total__122->SetFillColor(ci);
   flavorLoose_total__122->SetMarkerStyle(20);
   flavorLoose_total__122->SetMarkerSize(1.1);
   flavorLoose_total__122->GetXaxis()->SetTitle("flavor");
   flavorLoose_total__122->GetXaxis()->SetBinLabel(1,"eee");
   flavorLoose_total__122->GetXaxis()->SetBinLabel(2,"ee#mu");
   flavorLoose_total__122->GetXaxis()->SetBinLabel(3,"e#mu#mu");
   flavorLoose_total__122->GetXaxis()->SetBinLabel(4,"#mu#mu#mu");
   flavorLoose_total__122->GetXaxis()->SetMoreLogLabels();
   flavorLoose_total__122->GetXaxis()->SetLabelFont(42);
   flavorLoose_total__122->GetXaxis()->SetLabelOffset(999);
   flavorLoose_total__122->GetXaxis()->SetLabelSize(0.05);
   flavorLoose_total__122->GetXaxis()->SetTitleSize(0.05);
   flavorLoose_total__122->GetXaxis()->SetTitleOffset(999);
   flavorLoose_total__122->GetXaxis()->SetTitleFont(42);
   flavorLoose_total__122->GetYaxis()->SetTitle("Events");
   flavorLoose_total__122->GetYaxis()->SetLabelFont(42);
   flavorLoose_total__122->GetYaxis()->SetLabelOffset(0.007);
   flavorLoose_total__122->GetYaxis()->SetLabelSize(0.05);
   flavorLoose_total__122->GetYaxis()->SetTitleSize(0.06);
   flavorLoose_total__122->GetYaxis()->SetTitleOffset(1.48);
   flavorLoose_total__122->GetYaxis()->SetTitleFont(42);
   flavorLoose_total__122->GetZaxis()->SetLabelFont(42);
   flavorLoose_total__122->GetZaxis()->SetLabelOffset(0.007);
   flavorLoose_total__122->GetZaxis()->SetLabelSize(0.05);
   flavorLoose_total__122->GetZaxis()->SetTitleSize(0.06);
   flavorLoose_total__122->GetZaxis()->SetTitleFont(42);
   flavorLoose_total__122->Draw("AXIS SAME");
   
   Double_t flavorLoose_total_errors_fx3151[4] = {
   0,
   1,
   2,
   3};
   Double_t flavorLoose_total_errors_fy3151[4] = {
   232.143,
   279.1637,
   436.7351,
   547.9028};
   Double_t flavorLoose_total_errors_felx3151[4] = {
   0.5,
   0.5,
   0.5,
   0.5};
   Double_t flavorLoose_total_errors_fely3151[4] = {
   7.440654,
   6.360375,
   11.6598,
   9.979856};
   Double_t flavorLoose_total_errors_fehx3151[4] = {
   0.5,
   0.5,
   0.5,
   0.5};
   Double_t flavorLoose_total_errors_fehy3151[4] = {
   7.440654,
   6.360375,
   11.6598,
   9.979856};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(4,flavorLoose_total_errors_fx3151,flavorLoose_total_errors_fy3151,flavorLoose_total_errors_felx3151,flavorLoose_total_errors_fehx3151,flavorLoose_total_errors_fely3151,flavorLoose_total_errors_fehy3151);
   grae->SetName("flavorLoose_total_errors");
   grae->SetTitle("Graph");
   grae->SetFillColor(1);
   grae->SetFillStyle(3013);
   grae->SetMarkerStyle(0);
   
   TH1F *Graph_flavorLoose_total_errors3151 = new TH1F("Graph_flavorLoose_total_errors3151","Graph",100,-0.9,3.9);
   Graph_flavorLoose_total_errors3151->SetMinimum(191.3843);
   Graph_flavorLoose_total_errors3151->SetMaximum(591.2006);
   Graph_flavorLoose_total_errors3151->SetDirectory(0);
   Graph_flavorLoose_total_errors3151->SetStats(0);
   Graph_flavorLoose_total_errors3151->SetLineStyle(0);
   Graph_flavorLoose_total_errors3151->SetMarkerStyle(20);
   Graph_flavorLoose_total_errors3151->GetXaxis()->SetLabelFont(42);
   Graph_flavorLoose_total_errors3151->GetXaxis()->SetLabelOffset(0.007);
   Graph_flavorLoose_total_errors3151->GetXaxis()->SetLabelSize(0.05);
   Graph_flavorLoose_total_errors3151->GetXaxis()->SetTitleSize(0.06);
   Graph_flavorLoose_total_errors3151->GetXaxis()->SetTitleOffset(0.9);
   Graph_flavorLoose_total_errors3151->GetXaxis()->SetTitleFont(42);
   Graph_flavorLoose_total_errors3151->GetYaxis()->SetLabelFont(42);
   Graph_flavorLoose_total_errors3151->GetYaxis()->SetLabelOffset(0.007);
   Graph_flavorLoose_total_errors3151->GetYaxis()->SetLabelSize(0.05);
   Graph_flavorLoose_total_errors3151->GetYaxis()->SetTitleSize(0.06);
   Graph_flavorLoose_total_errors3151->GetYaxis()->SetTitleOffset(1.35);
   Graph_flavorLoose_total_errors3151->GetYaxis()->SetTitleFont(42);
   Graph_flavorLoose_total_errors3151->GetZaxis()->SetLabelFont(42);
   Graph_flavorLoose_total_errors3151->GetZaxis()->SetLabelOffset(0.007);
   Graph_flavorLoose_total_errors3151->GetZaxis()->SetLabelSize(0.05);
   Graph_flavorLoose_total_errors3151->GetZaxis()->SetTitleSize(0.06);
   Graph_flavorLoose_total_errors3151->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_flavorLoose_total_errors3151);
   
   grae->Draw("pe2 ");
   
   Double_t flavorLoose_data_graph_fx3152[4] = {
   0,
   1,
   2,
   3};
   Double_t flavorLoose_data_graph_fy3152[4] = {
   235,
   297,
   426,
   555};
   Double_t flavorLoose_data_graph_felx3152[4] = {
   0.5,
   0.5,
   0.5,
   0.5};
   Double_t flavorLoose_data_graph_fely3152[4] = {
   15.31912,
   17.22435,
   20.63211,
   23.55185};
   Double_t flavorLoose_data_graph_fehx3152[4] = {
   0.5,
   0.5,
   0.5,
   0.5};
   Double_t flavorLoose_data_graph_fehy3152[4] = {
   16.35182,
   18.25343,
   21.65639,
   24.57312};
   grae = new TGraphAsymmErrors(4,flavorLoose_data_graph_fx3152,flavorLoose_data_graph_fy3152,flavorLoose_data_graph_felx3152,flavorLoose_data_graph_fehx3152,flavorLoose_data_graph_fely3152,flavorLoose_data_graph_fehy3152);
   grae->SetName("flavorLoose_data_graph");
   grae->SetTitle("Graph");
   grae->SetFillStyle(1000);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.1);
   
   TH1F *Graph_flavorLoose_data_graph3152 = new TH1F("Graph_flavorLoose_data_graph3152","Graph",100,-0.9,3.9);
   Graph_flavorLoose_data_graph3152->SetMinimum(183.6917);
   Graph_flavorLoose_data_graph3152->SetMaximum(615.5623);
   Graph_flavorLoose_data_graph3152->SetDirectory(0);
   Graph_flavorLoose_data_graph3152->SetStats(0);
   Graph_flavorLoose_data_graph3152->SetLineStyle(0);
   Graph_flavorLoose_data_graph3152->SetMarkerStyle(20);
   Graph_flavorLoose_data_graph3152->GetXaxis()->SetLabelFont(42);
   Graph_flavorLoose_data_graph3152->GetXaxis()->SetLabelOffset(0.007);
   Graph_flavorLoose_data_graph3152->GetXaxis()->SetLabelSize(0.05);
   Graph_flavorLoose_data_graph3152->GetXaxis()->SetTitleSize(0.06);
   Graph_flavorLoose_data_graph3152->GetXaxis()->SetTitleOffset(0.9);
   Graph_flavorLoose_data_graph3152->GetXaxis()->SetTitleFont(42);
   Graph_flavorLoose_data_graph3152->GetYaxis()->SetLabelFont(42);
   Graph_flavorLoose_data_graph3152->GetYaxis()->SetLabelOffset(0.007);
   Graph_flavorLoose_data_graph3152->GetYaxis()->SetLabelSize(0.05);
   Graph_flavorLoose_data_graph3152->GetYaxis()->SetTitleSize(0.06);
   Graph_flavorLoose_data_graph3152->GetYaxis()->SetTitleOffset(1.35);
   Graph_flavorLoose_data_graph3152->GetYaxis()->SetTitleFont(42);
   Graph_flavorLoose_data_graph3152->GetZaxis()->SetLabelFont(42);
   Graph_flavorLoose_data_graph3152->GetZaxis()->SetLabelOffset(0.007);
   Graph_flavorLoose_data_graph3152->GetZaxis()->SetLabelSize(0.05);
   Graph_flavorLoose_data_graph3152->GetZaxis()->SetTitleSize(0.06);
   Graph_flavorLoose_data_graph3152->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_flavorLoose_data_graph3152);
   
   grae->Draw("pz ");
   
   TLegend *leg = new TLegend(0.2,0.628,0.48,0.91,NULL,"brNDC");
   leg->SetBorderSize(1);
   leg->SetTextSize(0.036);
   leg->SetLineColor(0);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("flavorLoose_data","Data","LPE");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1.1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("flavorLoose_prompt_WZ_stack_5","WZ","F");

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
   entry=leg->AddEntry("flavorLoose_prompt_ZZ_stack_4","qqZZ","F");

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
   entry=leg->AddEntry("flavorLoose_fakes_DY_stack_3","Fakes DY","F");

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
   entry=leg->AddEntry("flavorLoose_fakes_TT_stack_2","Fakes TT","F");

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
   entry=leg->AddEntry("flavorLoose_total_errors","Total unc.","F");
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
   flavorLoose_canvas->cd();
  
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
   
   TH1D *flavorLoose_total__123 = new TH1D("flavorLoose_total__123","dummy",4,-0.5,3.5);
   flavorLoose_total__123->SetBinContent(1,1);
   flavorLoose_total__123->SetBinContent(2,1);
   flavorLoose_total__123->SetBinContent(3,1);
   flavorLoose_total__123->SetBinContent(4,1);
   flavorLoose_total__123->SetMinimum(0.5);
   flavorLoose_total__123->SetMaximum(2);
   flavorLoose_total__123->SetEntries(15156);

   ci = TColor::GetColor("#00cc00");
   flavorLoose_total__123->SetFillColor(ci);

   ci = TColor::GetColor("#6666ff");
   flavorLoose_total__123->SetMarkerColor(ci);
   flavorLoose_total__123->SetMarkerSize(1.1);
   flavorLoose_total__123->GetXaxis()->SetTitle("flavor");
   flavorLoose_total__123->GetXaxis()->SetBinLabel(1,"eee");
   flavorLoose_total__123->GetXaxis()->SetBinLabel(2,"ee#mu");
   flavorLoose_total__123->GetXaxis()->SetBinLabel(3,"e#mu#mu");
   flavorLoose_total__123->GetXaxis()->SetBinLabel(4,"#mu#mu#mu");
   flavorLoose_total__123->GetXaxis()->SetMoreLogLabels();
   flavorLoose_total__123->GetXaxis()->SetLabelFont(42);
   flavorLoose_total__123->GetXaxis()->SetLabelOffset(0.015);
   flavorLoose_total__123->GetXaxis()->SetLabelSize(0.1542857);
   flavorLoose_total__123->GetXaxis()->SetTitleSize(0.14);
   flavorLoose_total__123->GetXaxis()->SetTitleFont(42);
   flavorLoose_total__123->GetYaxis()->SetTitle("Data/pred.");
   flavorLoose_total__123->GetYaxis()->SetDecimals();
   flavorLoose_total__123->GetYaxis()->SetNdivisions(505);
   flavorLoose_total__123->GetYaxis()->SetLabelFont(42);
   flavorLoose_total__123->GetYaxis()->SetLabelOffset(0.01);
   flavorLoose_total__123->GetYaxis()->SetLabelSize(0.11);
   flavorLoose_total__123->GetYaxis()->SetTitleSize(0.14);
   flavorLoose_total__123->GetYaxis()->SetTitleOffset(0.62);
   flavorLoose_total__123->GetYaxis()->SetTitleFont(42);
   flavorLoose_total__123->GetZaxis()->SetLabelFont(42);
   flavorLoose_total__123->GetZaxis()->SetLabelOffset(0.007);
   flavorLoose_total__123->GetZaxis()->SetLabelSize(0.05);
   flavorLoose_total__123->GetZaxis()->SetTitleSize(0.06);
   flavorLoose_total__123->GetZaxis()->SetTitleFont(42);
   flavorLoose_total__123->Draw("AXIS");
   
   Double_t flavorLoose_total_errors_fx3153[4] = {
   0,
   1,
   2,
   3};
   Double_t flavorLoose_total_errors_fy3153[4] = {
   1,
   1,
   1,
   1};
   Double_t flavorLoose_total_errors_felx3153[4] = {
   0.5,
   0.5,
   0.5,
   0.5};
   Double_t flavorLoose_total_errors_fely3153[4] = {
   0.03205203,
   0.02278368,
   0.02669765,
   0.01821465};
   Double_t flavorLoose_total_errors_fehx3153[4] = {
   0.5,
   0.5,
   0.5,
   0.5};
   Double_t flavorLoose_total_errors_fehy3153[4] = {
   0.03205203,
   0.02278368,
   0.02669765,
   0.01821465};
   grae = new TGraphAsymmErrors(4,flavorLoose_total_errors_fx3153,flavorLoose_total_errors_fy3153,flavorLoose_total_errors_felx3153,flavorLoose_total_errors_fehx3153,flavorLoose_total_errors_fely3153,flavorLoose_total_errors_fehy3153);
   grae->SetName("flavorLoose_total_errors");
   grae->SetTitle("Graph");

   ci = TColor::GetColor("#00ffff");
   grae->SetFillColor(ci);

   ci = TColor::GetColor("#00ffff");
   grae->SetMarkerColor(ci);
   grae->Draw("e2");
   
   Double_t flavorLoose_total_errors_fx3154[4] = {
   0,
   1,
   2,
   3};
   Double_t flavorLoose_total_errors_fy3154[4] = {
   1,
   1,
   1,
   1};
   Double_t flavorLoose_total_errors_felx3154[4] = {
   0.5,
   0.5,
   0.5,
   0.5};
   Double_t flavorLoose_total_errors_fely3154[4] = {
   0.03205203,
   0.02278368,
   0.02669765,
   0.01821465};
   Double_t flavorLoose_total_errors_fehx3154[4] = {
   0.5,
   0.5,
   0.5,
   0.5};
   Double_t flavorLoose_total_errors_fehy3154[4] = {
   0.03205203,
   0.02278368,
   0.02669765,
   0.01821465};
   grae = new TGraphAsymmErrors(4,flavorLoose_total_errors_fx3154,flavorLoose_total_errors_fy3154,flavorLoose_total_errors_felx3154,flavorLoose_total_errors_fehx3154,flavorLoose_total_errors_fely3154,flavorLoose_total_errors_fehy3154);
   grae->SetName("flavorLoose_total_errors");
   grae->SetTitle("Graph");

   ci = TColor::GetColor("#6666ff");
   grae->SetFillColor(ci);

   ci = TColor::GetColor("#6666ff");
   grae->SetMarkerColor(ci);
   grae->Draw("e2 ");
   
   TH1D *flavorLoose_total__124 = new TH1D("flavorLoose_total__124","dummy",4,-0.5,3.5);
   flavorLoose_total__124->SetBinContent(1,1);
   flavorLoose_total__124->SetBinContent(2,1);
   flavorLoose_total__124->SetBinContent(3,1);
   flavorLoose_total__124->SetBinContent(4,1);
   flavorLoose_total__124->SetMinimum(0.5);
   flavorLoose_total__124->SetMaximum(2);
   flavorLoose_total__124->SetEntries(15156);

   ci = TColor::GetColor("#00cc00");
   flavorLoose_total__124->SetFillColor(ci);

   ci = TColor::GetColor("#6666ff");
   flavorLoose_total__124->SetMarkerColor(ci);
   flavorLoose_total__124->SetMarkerSize(1.1);
   flavorLoose_total__124->GetXaxis()->SetTitle("flavor");
   flavorLoose_total__124->GetXaxis()->SetBinLabel(1,"eee");
   flavorLoose_total__124->GetXaxis()->SetBinLabel(2,"ee#mu");
   flavorLoose_total__124->GetXaxis()->SetBinLabel(3,"e#mu#mu");
   flavorLoose_total__124->GetXaxis()->SetBinLabel(4,"#mu#mu#mu");
   flavorLoose_total__124->GetXaxis()->SetMoreLogLabels();
   flavorLoose_total__124->GetXaxis()->SetLabelFont(42);
   flavorLoose_total__124->GetXaxis()->SetLabelOffset(0.015);
   flavorLoose_total__124->GetXaxis()->SetLabelSize(0.1542857);
   flavorLoose_total__124->GetXaxis()->SetTitleSize(0.14);
   flavorLoose_total__124->GetXaxis()->SetTitleFont(42);
   flavorLoose_total__124->GetYaxis()->SetTitle("Data/pred.");
   flavorLoose_total__124->GetYaxis()->SetDecimals();
   flavorLoose_total__124->GetYaxis()->SetNdivisions(505);
   flavorLoose_total__124->GetYaxis()->SetLabelFont(42);
   flavorLoose_total__124->GetYaxis()->SetLabelOffset(0.01);
   flavorLoose_total__124->GetYaxis()->SetLabelSize(0.11);
   flavorLoose_total__124->GetYaxis()->SetTitleSize(0.14);
   flavorLoose_total__124->GetYaxis()->SetTitleOffset(0.62);
   flavorLoose_total__124->GetYaxis()->SetTitleFont(42);
   flavorLoose_total__124->GetZaxis()->SetLabelFont(42);
   flavorLoose_total__124->GetZaxis()->SetLabelOffset(0.007);
   flavorLoose_total__124->GetZaxis()->SetLabelSize(0.05);
   flavorLoose_total__124->GetZaxis()->SetTitleSize(0.06);
   flavorLoose_total__124->GetZaxis()->SetTitleFont(42);
   flavorLoose_total__124->Draw("AXIS SAME");
   TLine *line = new TLine(-0.5,1,3.5,1);
   line->SetLineColor(58);
   line->SetLineWidth(2);
   line->Draw();
   
   Double_t data_div_fx3155[4] = {
   0,
   1,
   2,
   3};
   Double_t data_div_fy3155[4] = {
   1.012307,
   1.063892,
   0.9754196,
   1.012953};
   Double_t data_div_felx3155[4] = {
   0.5,
   0.5,
   0.5,
   0.5};
   Double_t data_div_fely3155[4] = {
   0.06599003,
   0.06169983,
   0.0472417,
   0.04298545};
   Double_t data_div_fehx3155[4] = {
   0.5,
   0.5,
   0.5,
   0.5};
   Double_t data_div_fehy3155[4] = {
   0.07043857,
   0.06538614,
   0.04958702,
   0.04484942};
   grae = new TGraphAsymmErrors(4,data_div_fx3155,data_div_fy3155,data_div_felx3155,data_div_fehx3155,data_div_fely3155,data_div_fehy3155);
   grae->SetName("data_div");
   grae->SetTitle("Graph");
   grae->SetFillStyle(1000);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.1);
   
   TH1F *Graph_flavorLoose_data_graph3155 = new TH1F("Graph_flavorLoose_data_graph3155","Graph",100,-0.9,3.9);
   Graph_flavorLoose_data_graph3155->SetMinimum(183.6917);
   Graph_flavorLoose_data_graph3155->SetMaximum(615.5623);
   Graph_flavorLoose_data_graph3155->SetDirectory(0);
   Graph_flavorLoose_data_graph3155->SetStats(0);
   Graph_flavorLoose_data_graph3155->SetLineStyle(0);
   Graph_flavorLoose_data_graph3155->SetMarkerStyle(20);
   Graph_flavorLoose_data_graph3155->GetXaxis()->SetLabelFont(42);
   Graph_flavorLoose_data_graph3155->GetXaxis()->SetLabelOffset(0.007);
   Graph_flavorLoose_data_graph3155->GetXaxis()->SetLabelSize(0.05);
   Graph_flavorLoose_data_graph3155->GetXaxis()->SetTitleSize(0.06);
   Graph_flavorLoose_data_graph3155->GetXaxis()->SetTitleOffset(0.9);
   Graph_flavorLoose_data_graph3155->GetXaxis()->SetTitleFont(42);
   Graph_flavorLoose_data_graph3155->GetYaxis()->SetLabelFont(42);
   Graph_flavorLoose_data_graph3155->GetYaxis()->SetLabelOffset(0.007);
   Graph_flavorLoose_data_graph3155->GetYaxis()->SetLabelSize(0.05);
   Graph_flavorLoose_data_graph3155->GetYaxis()->SetTitleSize(0.06);
   Graph_flavorLoose_data_graph3155->GetYaxis()->SetTitleOffset(1.35);
   Graph_flavorLoose_data_graph3155->GetYaxis()->SetTitleFont(42);
   Graph_flavorLoose_data_graph3155->GetZaxis()->SetLabelFont(42);
   Graph_flavorLoose_data_graph3155->GetZaxis()->SetLabelOffset(0.007);
   Graph_flavorLoose_data_graph3155->GetZaxis()->SetLabelSize(0.05);
   Graph_flavorLoose_data_graph3155->GetZaxis()->SetTitleSize(0.06);
   Graph_flavorLoose_data_graph3155->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_flavorLoose_data_graph3155);
   
   grae->Draw("pz ");
   
   leg = new TLegend(0,0,0,0,NULL,"brNDC");
   leg->SetBorderSize(1);
   leg->SetTextSize(0.084);
   leg->SetLineColor(0);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   entry=leg->AddEntry("flavorLoose_total_errors","stat. unc.","F");
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
   entry=leg->AddEntry("flavorLoose_total_errors","total unc.","F");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   leg->Draw();
   pad2->Modified();
   flavorLoose_canvas->cd();
   flavorLoose_canvas->Modified();
   flavorLoose_canvas->cd();
   flavorLoose_canvas->SetSelected(flavorLoose_canvas);
}
