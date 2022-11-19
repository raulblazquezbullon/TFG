void flavor3l()
{
//=========Macro generated from canvas: flavor3l_canvas/flavor3l
//=========  (Fri Nov 18 13:08:26 2022) by ROOT version 6.12/07
   TCanvas *flavor3l_canvas = new TCanvas("flavor3l_canvas", "flavor3l",0,0,600,750);
   gStyle->SetOptFit(1);
   gStyle->SetOptStat(0);
   gStyle->SetOptTitle(0);
   flavor3l_canvas->SetHighLightColor(2);
   flavor3l_canvas->Range(0,0,1,1);
   flavor3l_canvas->SetFillColor(0);
   flavor3l_canvas->SetBorderMode(0);
   flavor3l_canvas->SetBorderSize(2);
   flavor3l_canvas->SetTickx(1);
   flavor3l_canvas->SetTicky(1);
   flavor3l_canvas->SetLeftMargin(0.18);
   flavor3l_canvas->SetRightMargin(0.04);
   flavor3l_canvas->SetBottomMargin(0.13);
   flavor3l_canvas->SetFrameFillStyle(0);
   flavor3l_canvas->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: pad1
   TPad *pad1 = new TPad("pad1", "pad1",0,0.3,1,1);
   pad1->Draw();
   pad1->cd();
   pad1->Range(-1.423077,-44.91006,3.705128,1751.492);
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
   
   TH1D *flavor3l_total__105 = new TH1D("flavor3l_total__105","dummy",4,-0.5,3.5);
   flavor3l_total__105->SetBinContent(1,232.143);
   flavor3l_total__105->SetBinContent(2,279.1637);
   flavor3l_total__105->SetBinContent(3,436.7351);
   flavor3l_total__105->SetBinContent(4,547.9028);
   flavor3l_total__105->SetBinError(1,7.440654);
   flavor3l_total__105->SetBinError(2,6.360375);
   flavor3l_total__105->SetBinError(3,11.6598);
   flavor3l_total__105->SetBinError(4,9.979856);
   flavor3l_total__105->SetMinimum(0);
   flavor3l_total__105->SetMaximum(1643.708);
   flavor3l_total__105->SetEntries(15152);
   flavor3l_total__105->SetDirectory(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#00cc00");
   flavor3l_total__105->SetFillColor(ci);
   flavor3l_total__105->SetMarkerStyle(20);
   flavor3l_total__105->SetMarkerSize(1.1);
   flavor3l_total__105->GetXaxis()->SetTitle("flavor");
   flavor3l_total__105->GetXaxis()->SetBinLabel(1,"eee");
   flavor3l_total__105->GetXaxis()->SetBinLabel(2,"ee#mu");
   flavor3l_total__105->GetXaxis()->SetBinLabel(3,"e#mu#mu");
   flavor3l_total__105->GetXaxis()->SetBinLabel(4,"#mu#mu#mu");
   flavor3l_total__105->GetXaxis()->SetMoreLogLabels();
   flavor3l_total__105->GetXaxis()->SetLabelFont(42);
   flavor3l_total__105->GetXaxis()->SetLabelOffset(999);
   flavor3l_total__105->GetXaxis()->SetLabelSize(0.05);
   flavor3l_total__105->GetXaxis()->SetTitleSize(0.05);
   flavor3l_total__105->GetXaxis()->SetTitleOffset(999);
   flavor3l_total__105->GetXaxis()->SetTitleFont(42);
   flavor3l_total__105->GetYaxis()->SetTitle("Events");
   flavor3l_total__105->GetYaxis()->SetLabelFont(42);
   flavor3l_total__105->GetYaxis()->SetLabelOffset(0.007);
   flavor3l_total__105->GetYaxis()->SetLabelSize(0.05);
   flavor3l_total__105->GetYaxis()->SetTitleSize(0.06);
   flavor3l_total__105->GetYaxis()->SetTitleOffset(1.48);
   flavor3l_total__105->GetYaxis()->SetTitleFont(42);
   flavor3l_total__105->GetZaxis()->SetLabelFont(42);
   flavor3l_total__105->GetZaxis()->SetLabelOffset(0.007);
   flavor3l_total__105->GetZaxis()->SetLabelSize(0.05);
   flavor3l_total__105->GetZaxis()->SetTitleSize(0.06);
   flavor3l_total__105->GetZaxis()->SetTitleFont(42);
   flavor3l_total__105->Draw("HIST");
   
   THStack *flavor3l_stack = new THStack();
   flavor3l_stack->SetName("flavor3l_stack");
   flavor3l_stack->SetTitle("flavor3l");
   
   TH1F *flavor3l_stack_stack_27 = new TH1F("flavor3l_stack_stack_27","flavor3l",4,-0.5,3.5);
   flavor3l_stack_stack_27->SetMinimum(0);
   flavor3l_stack_stack_27->SetMaximum(575.2979);
   flavor3l_stack_stack_27->SetDirectory(0);
   flavor3l_stack_stack_27->SetStats(0);
   flavor3l_stack_stack_27->SetLineStyle(0);
   flavor3l_stack_stack_27->SetMarkerStyle(20);
   flavor3l_stack_stack_27->GetXaxis()->SetLabelFont(42);
   flavor3l_stack_stack_27->GetXaxis()->SetLabelOffset(0.007);
   flavor3l_stack_stack_27->GetXaxis()->SetLabelSize(0.05);
   flavor3l_stack_stack_27->GetXaxis()->SetTitleSize(0.06);
   flavor3l_stack_stack_27->GetXaxis()->SetTitleOffset(0.9);
   flavor3l_stack_stack_27->GetXaxis()->SetTitleFont(42);
   flavor3l_stack_stack_27->GetYaxis()->SetLabelFont(42);
   flavor3l_stack_stack_27->GetYaxis()->SetLabelOffset(0.007);
   flavor3l_stack_stack_27->GetYaxis()->SetLabelSize(0.05);
   flavor3l_stack_stack_27->GetYaxis()->SetTitleSize(0.06);
   flavor3l_stack_stack_27->GetYaxis()->SetTitleOffset(1.35);
   flavor3l_stack_stack_27->GetYaxis()->SetTitleFont(42);
   flavor3l_stack_stack_27->GetZaxis()->SetLabelFont(42);
   flavor3l_stack_stack_27->GetZaxis()->SetLabelOffset(0.007);
   flavor3l_stack_stack_27->GetZaxis()->SetLabelSize(0.05);
   flavor3l_stack_stack_27->GetZaxis()->SetTitleSize(0.06);
   flavor3l_stack_stack_27->GetZaxis()->SetTitleFont(42);
   flavor3l_stack->SetHistogram(flavor3l_stack_stack_27);
   
   
   TH1D *flavor3l_fakes_VV_stack_1 = new TH1D("flavor3l_fakes_VV_stack_1","dummy",4,-0.5,3.5);
   flavor3l_fakes_VV_stack_1->SetBinContent(1,0.1943867);
   flavor3l_fakes_VV_stack_1->SetBinContent(2,0.09719337);
   flavor3l_fakes_VV_stack_1->SetBinContent(3,0.3887735);
   flavor3l_fakes_VV_stack_1->SetBinError(1,0.1374522);
   flavor3l_fakes_VV_stack_1->SetBinError(2,0.09719337);
   flavor3l_fakes_VV_stack_1->SetBinError(3,0.1943867);
   flavor3l_fakes_VV_stack_1->SetEntries(11);

   ci = TColor::GetColor("#2e3294");
   flavor3l_fakes_VV_stack_1->SetFillColor(ci);
   flavor3l_fakes_VV_stack_1->SetMarkerStyle(0);
   flavor3l_fakes_VV_stack_1->SetMarkerSize(1.1);
   flavor3l_fakes_VV_stack_1->GetXaxis()->SetTitle("flavor");
   flavor3l_fakes_VV_stack_1->GetXaxis()->SetMoreLogLabels();
   flavor3l_fakes_VV_stack_1->GetXaxis()->SetLabelFont(42);
   flavor3l_fakes_VV_stack_1->GetXaxis()->SetLabelOffset(0.007);
   flavor3l_fakes_VV_stack_1->GetXaxis()->SetLabelSize(0.05);
   flavor3l_fakes_VV_stack_1->GetXaxis()->SetTitleSize(0.06);
   flavor3l_fakes_VV_stack_1->GetXaxis()->SetTitleOffset(0.9);
   flavor3l_fakes_VV_stack_1->GetXaxis()->SetTitleFont(42);
   flavor3l_fakes_VV_stack_1->GetYaxis()->SetTitle("Events");
   flavor3l_fakes_VV_stack_1->GetYaxis()->SetLabelFont(42);
   flavor3l_fakes_VV_stack_1->GetYaxis()->SetLabelOffset(0.007);
   flavor3l_fakes_VV_stack_1->GetYaxis()->SetLabelSize(0.05);
   flavor3l_fakes_VV_stack_1->GetYaxis()->SetTitleSize(0.06);
   flavor3l_fakes_VV_stack_1->GetYaxis()->SetTitleOffset(1.35);
   flavor3l_fakes_VV_stack_1->GetYaxis()->SetTitleFont(42);
   flavor3l_fakes_VV_stack_1->GetZaxis()->SetLabelFont(42);
   flavor3l_fakes_VV_stack_1->GetZaxis()->SetLabelOffset(0.007);
   flavor3l_fakes_VV_stack_1->GetZaxis()->SetLabelSize(0.05);
   flavor3l_fakes_VV_stack_1->GetZaxis()->SetTitleSize(0.06);
   flavor3l_fakes_VV_stack_1->GetZaxis()->SetTitleFont(42);
   flavor3l_stack->Add(flavor3l_fakes_VV_stack_1,"");
   
   TH1D *flavor3l_fakes_TT_stack_2 = new TH1D("flavor3l_fakes_TT_stack_2","dummy",4,-0.5,3.5);
   flavor3l_fakes_TT_stack_2->SetBinContent(1,5.232204);
   flavor3l_fakes_TT_stack_2->SetBinContent(2,10.57258);
   flavor3l_fakes_TT_stack_2->SetBinContent(3,16.93519);
   flavor3l_fakes_TT_stack_2->SetBinContent(4,22.30435);
   flavor3l_fakes_TT_stack_2->SetBinError(1,0.5941644);
   flavor3l_fakes_TT_stack_2->SetBinError(2,0.8384603);
   flavor3l_fakes_TT_stack_2->SetBinError(3,1.071867);
   flavor3l_fakes_TT_stack_2->SetBinError(4,1.239048);
   flavor3l_fakes_TT_stack_2->SetEntries(841);

   ci = TColor::GetColor("#666666");
   flavor3l_fakes_TT_stack_2->SetFillColor(ci);
   flavor3l_fakes_TT_stack_2->SetMarkerStyle(0);
   flavor3l_fakes_TT_stack_2->SetMarkerSize(1.1);
   flavor3l_fakes_TT_stack_2->GetXaxis()->SetTitle("flavor");
   flavor3l_fakes_TT_stack_2->GetXaxis()->SetMoreLogLabels();
   flavor3l_fakes_TT_stack_2->GetXaxis()->SetLabelFont(42);
   flavor3l_fakes_TT_stack_2->GetXaxis()->SetLabelOffset(0.007);
   flavor3l_fakes_TT_stack_2->GetXaxis()->SetLabelSize(0.05);
   flavor3l_fakes_TT_stack_2->GetXaxis()->SetTitleSize(0.06);
   flavor3l_fakes_TT_stack_2->GetXaxis()->SetTitleOffset(0.9);
   flavor3l_fakes_TT_stack_2->GetXaxis()->SetTitleFont(42);
   flavor3l_fakes_TT_stack_2->GetYaxis()->SetTitle("Events");
   flavor3l_fakes_TT_stack_2->GetYaxis()->SetLabelFont(42);
   flavor3l_fakes_TT_stack_2->GetYaxis()->SetLabelOffset(0.007);
   flavor3l_fakes_TT_stack_2->GetYaxis()->SetLabelSize(0.05);
   flavor3l_fakes_TT_stack_2->GetYaxis()->SetTitleSize(0.06);
   flavor3l_fakes_TT_stack_2->GetYaxis()->SetTitleOffset(1.35);
   flavor3l_fakes_TT_stack_2->GetYaxis()->SetTitleFont(42);
   flavor3l_fakes_TT_stack_2->GetZaxis()->SetLabelFont(42);
   flavor3l_fakes_TT_stack_2->GetZaxis()->SetLabelOffset(0.007);
   flavor3l_fakes_TT_stack_2->GetZaxis()->SetLabelSize(0.05);
   flavor3l_fakes_TT_stack_2->GetZaxis()->SetTitleSize(0.06);
   flavor3l_fakes_TT_stack_2->GetZaxis()->SetTitleFont(42);
   flavor3l_stack->Add(flavor3l_fakes_TT_stack_2,"");
   
   TH1D *flavor3l_fakes_DY_stack_3 = new TH1D("flavor3l_fakes_DY_stack_3","dummy",4,-0.5,3.5);
   flavor3l_fakes_DY_stack_3->SetBinContent(1,20.63427);
   flavor3l_fakes_DY_stack_3->SetBinContent(2,8.597611);
   flavor3l_fakes_DY_stack_3->SetBinContent(3,58.46375);
   flavor3l_fakes_DY_stack_3->SetBinContent(4,29.23188);
   flavor3l_fakes_DY_stack_3->SetBinError(1,5.956599);
   flavor3l_fakes_DY_stack_3->SetBinError(2,3.844968);
   flavor3l_fakes_DY_stack_3->SetBinError(3,10.02645);
   flavor3l_fakes_DY_stack_3->SetBinError(4,7.089771);
   flavor3l_fakes_DY_stack_3->SetEntries(72);

   ci = TColor::GetColor("#cccccc");
   flavor3l_fakes_DY_stack_3->SetFillColor(ci);
   flavor3l_fakes_DY_stack_3->SetMarkerStyle(0);
   flavor3l_fakes_DY_stack_3->SetMarkerSize(1.1);
   flavor3l_fakes_DY_stack_3->GetXaxis()->SetTitle("flavor");
   flavor3l_fakes_DY_stack_3->GetXaxis()->SetMoreLogLabels();
   flavor3l_fakes_DY_stack_3->GetXaxis()->SetLabelFont(42);
   flavor3l_fakes_DY_stack_3->GetXaxis()->SetLabelOffset(0.007);
   flavor3l_fakes_DY_stack_3->GetXaxis()->SetLabelSize(0.05);
   flavor3l_fakes_DY_stack_3->GetXaxis()->SetTitleSize(0.06);
   flavor3l_fakes_DY_stack_3->GetXaxis()->SetTitleOffset(0.9);
   flavor3l_fakes_DY_stack_3->GetXaxis()->SetTitleFont(42);
   flavor3l_fakes_DY_stack_3->GetYaxis()->SetTitle("Events");
   flavor3l_fakes_DY_stack_3->GetYaxis()->SetLabelFont(42);
   flavor3l_fakes_DY_stack_3->GetYaxis()->SetLabelOffset(0.007);
   flavor3l_fakes_DY_stack_3->GetYaxis()->SetLabelSize(0.05);
   flavor3l_fakes_DY_stack_3->GetYaxis()->SetTitleSize(0.06);
   flavor3l_fakes_DY_stack_3->GetYaxis()->SetTitleOffset(1.35);
   flavor3l_fakes_DY_stack_3->GetYaxis()->SetTitleFont(42);
   flavor3l_fakes_DY_stack_3->GetZaxis()->SetLabelFont(42);
   flavor3l_fakes_DY_stack_3->GetZaxis()->SetLabelOffset(0.007);
   flavor3l_fakes_DY_stack_3->GetZaxis()->SetLabelSize(0.05);
   flavor3l_fakes_DY_stack_3->GetZaxis()->SetTitleSize(0.06);
   flavor3l_fakes_DY_stack_3->GetZaxis()->SetTitleFont(42);
   flavor3l_stack->Add(flavor3l_fakes_DY_stack_3,"");
   
   TH1D *flavor3l_prompt_ZZ_stack_4 = new TH1D("flavor3l_prompt_ZZ_stack_4","dummy",4,-0.5,3.5);
   flavor3l_prompt_ZZ_stack_4->SetBinContent(1,9.357756);
   flavor3l_prompt_ZZ_stack_4->SetBinContent(2,15.59626);
   flavor3l_prompt_ZZ_stack_4->SetBinContent(3,17.06414);
   flavor3l_prompt_ZZ_stack_4->SetBinContent(4,31.19252);
   flavor3l_prompt_ZZ_stack_4->SetBinError(1,1.310348);
   flavor3l_prompt_ZZ_stack_4->SetBinError(2,1.691652);
   flavor3l_prompt_ZZ_stack_4->SetBinError(3,1.769469);
   flavor3l_prompt_ZZ_stack_4->SetBinError(4,2.392357);
   flavor3l_prompt_ZZ_stack_4->SetEntries(403);

   ci = TColor::GetColor("#00cc00");
   flavor3l_prompt_ZZ_stack_4->SetFillColor(ci);
   flavor3l_prompt_ZZ_stack_4->SetMarkerStyle(0);
   flavor3l_prompt_ZZ_stack_4->SetMarkerSize(1.1);
   flavor3l_prompt_ZZ_stack_4->GetXaxis()->SetTitle("flavor");
   flavor3l_prompt_ZZ_stack_4->GetXaxis()->SetMoreLogLabels();
   flavor3l_prompt_ZZ_stack_4->GetXaxis()->SetLabelFont(42);
   flavor3l_prompt_ZZ_stack_4->GetXaxis()->SetLabelOffset(0.007);
   flavor3l_prompt_ZZ_stack_4->GetXaxis()->SetLabelSize(0.05);
   flavor3l_prompt_ZZ_stack_4->GetXaxis()->SetTitleSize(0.06);
   flavor3l_prompt_ZZ_stack_4->GetXaxis()->SetTitleOffset(0.9);
   flavor3l_prompt_ZZ_stack_4->GetXaxis()->SetTitleFont(42);
   flavor3l_prompt_ZZ_stack_4->GetYaxis()->SetTitle("Events");
   flavor3l_prompt_ZZ_stack_4->GetYaxis()->SetLabelFont(42);
   flavor3l_prompt_ZZ_stack_4->GetYaxis()->SetLabelOffset(0.007);
   flavor3l_prompt_ZZ_stack_4->GetYaxis()->SetLabelSize(0.05);
   flavor3l_prompt_ZZ_stack_4->GetYaxis()->SetTitleSize(0.06);
   flavor3l_prompt_ZZ_stack_4->GetYaxis()->SetTitleOffset(1.35);
   flavor3l_prompt_ZZ_stack_4->GetYaxis()->SetTitleFont(42);
   flavor3l_prompt_ZZ_stack_4->GetZaxis()->SetLabelFont(42);
   flavor3l_prompt_ZZ_stack_4->GetZaxis()->SetLabelOffset(0.007);
   flavor3l_prompt_ZZ_stack_4->GetZaxis()->SetLabelSize(0.05);
   flavor3l_prompt_ZZ_stack_4->GetZaxis()->SetTitleSize(0.06);
   flavor3l_prompt_ZZ_stack_4->GetZaxis()->SetTitleFont(42);
   flavor3l_stack->Add(flavor3l_prompt_ZZ_stack_4,"");
   
   TH1D *flavor3l_prompt_WZ_stack_5 = new TH1D("flavor3l_prompt_WZ_stack_5","dummy",4,-0.5,3.5);
   flavor3l_prompt_WZ_stack_5->SetBinContent(1,196.7244);
   flavor3l_prompt_WZ_stack_5->SetBinContent(2,244.3);
   flavor3l_prompt_WZ_stack_5->SetBinContent(3,343.8833);
   flavor3l_prompt_WZ_stack_5->SetBinContent(4,465.174);
   flavor3l_prompt_WZ_stack_5->SetBinError(1,4.218213);
   flavor3l_prompt_WZ_stack_5->SetBinError(2,4.700686);
   flavor3l_prompt_WZ_stack_5->SetBinError(3,5.577056);
   flavor3l_prompt_WZ_stack_5->SetBinError(4,6.486452);
   flavor3l_prompt_WZ_stack_5->SetEntries(13825);

   ci = TColor::GetColor("#ffcc00");
   flavor3l_prompt_WZ_stack_5->SetFillColor(ci);
   flavor3l_prompt_WZ_stack_5->SetMarkerStyle(0);
   flavor3l_prompt_WZ_stack_5->SetMarkerSize(1.1);
   flavor3l_prompt_WZ_stack_5->GetXaxis()->SetTitle("flavor");
   flavor3l_prompt_WZ_stack_5->GetXaxis()->SetMoreLogLabels();
   flavor3l_prompt_WZ_stack_5->GetXaxis()->SetLabelFont(42);
   flavor3l_prompt_WZ_stack_5->GetXaxis()->SetLabelOffset(0.007);
   flavor3l_prompt_WZ_stack_5->GetXaxis()->SetLabelSize(0.05);
   flavor3l_prompt_WZ_stack_5->GetXaxis()->SetTitleSize(0.06);
   flavor3l_prompt_WZ_stack_5->GetXaxis()->SetTitleOffset(0.9);
   flavor3l_prompt_WZ_stack_5->GetXaxis()->SetTitleFont(42);
   flavor3l_prompt_WZ_stack_5->GetYaxis()->SetTitle("Events");
   flavor3l_prompt_WZ_stack_5->GetYaxis()->SetLabelFont(42);
   flavor3l_prompt_WZ_stack_5->GetYaxis()->SetLabelOffset(0.007);
   flavor3l_prompt_WZ_stack_5->GetYaxis()->SetLabelSize(0.05);
   flavor3l_prompt_WZ_stack_5->GetYaxis()->SetTitleSize(0.06);
   flavor3l_prompt_WZ_stack_5->GetYaxis()->SetTitleOffset(1.35);
   flavor3l_prompt_WZ_stack_5->GetYaxis()->SetTitleFont(42);
   flavor3l_prompt_WZ_stack_5->GetZaxis()->SetLabelFont(42);
   flavor3l_prompt_WZ_stack_5->GetZaxis()->SetLabelOffset(0.007);
   flavor3l_prompt_WZ_stack_5->GetZaxis()->SetLabelSize(0.05);
   flavor3l_prompt_WZ_stack_5->GetZaxis()->SetTitleSize(0.06);
   flavor3l_prompt_WZ_stack_5->GetZaxis()->SetTitleFont(42);
   flavor3l_stack->Add(flavor3l_prompt_WZ_stack_5,"");
   flavor3l_stack->Draw("same hist");
   
   TH1D *flavor3l_total__106 = new TH1D("flavor3l_total__106","dummy",4,-0.5,3.5);
   flavor3l_total__106->SetBinContent(1,232.143);
   flavor3l_total__106->SetBinContent(2,279.1637);
   flavor3l_total__106->SetBinContent(3,436.7351);
   flavor3l_total__106->SetBinContent(4,547.9028);
   flavor3l_total__106->SetBinError(1,7.440654);
   flavor3l_total__106->SetBinError(2,6.360375);
   flavor3l_total__106->SetBinError(3,11.6598);
   flavor3l_total__106->SetBinError(4,9.979856);
   flavor3l_total__106->SetMinimum(0);
   flavor3l_total__106->SetMaximum(1643.708);
   flavor3l_total__106->SetEntries(15152);
   flavor3l_total__106->SetDirectory(0);

   ci = TColor::GetColor("#00cc00");
   flavor3l_total__106->SetFillColor(ci);
   flavor3l_total__106->SetMarkerStyle(20);
   flavor3l_total__106->SetMarkerSize(1.1);
   flavor3l_total__106->GetXaxis()->SetTitle("flavor");
   flavor3l_total__106->GetXaxis()->SetBinLabel(1,"eee");
   flavor3l_total__106->GetXaxis()->SetBinLabel(2,"ee#mu");
   flavor3l_total__106->GetXaxis()->SetBinLabel(3,"e#mu#mu");
   flavor3l_total__106->GetXaxis()->SetBinLabel(4,"#mu#mu#mu");
   flavor3l_total__106->GetXaxis()->SetMoreLogLabels();
   flavor3l_total__106->GetXaxis()->SetLabelFont(42);
   flavor3l_total__106->GetXaxis()->SetLabelOffset(999);
   flavor3l_total__106->GetXaxis()->SetLabelSize(0.05);
   flavor3l_total__106->GetXaxis()->SetTitleSize(0.05);
   flavor3l_total__106->GetXaxis()->SetTitleOffset(999);
   flavor3l_total__106->GetXaxis()->SetTitleFont(42);
   flavor3l_total__106->GetYaxis()->SetTitle("Events");
   flavor3l_total__106->GetYaxis()->SetLabelFont(42);
   flavor3l_total__106->GetYaxis()->SetLabelOffset(0.007);
   flavor3l_total__106->GetYaxis()->SetLabelSize(0.05);
   flavor3l_total__106->GetYaxis()->SetTitleSize(0.06);
   flavor3l_total__106->GetYaxis()->SetTitleOffset(1.48);
   flavor3l_total__106->GetYaxis()->SetTitleFont(42);
   flavor3l_total__106->GetZaxis()->SetLabelFont(42);
   flavor3l_total__106->GetZaxis()->SetLabelOffset(0.007);
   flavor3l_total__106->GetZaxis()->SetLabelSize(0.05);
   flavor3l_total__106->GetZaxis()->SetTitleSize(0.06);
   flavor3l_total__106->GetZaxis()->SetTitleFont(42);
   flavor3l_total__106->Draw("AXIS SAME");
   
   Double_t flavor3l_total_errors_fx3131[4] = {
   0,
   1,
   2,
   3};
   Double_t flavor3l_total_errors_fy3131[4] = {
   232.143,
   279.1637,
   436.7351,
   547.9028};
   Double_t flavor3l_total_errors_felx3131[4] = {
   0.5,
   0.5,
   0.5,
   0.5};
   Double_t flavor3l_total_errors_fely3131[4] = {
   7.440654,
   6.360375,
   11.6598,
   9.979856};
   Double_t flavor3l_total_errors_fehx3131[4] = {
   0.5,
   0.5,
   0.5,
   0.5};
   Double_t flavor3l_total_errors_fehy3131[4] = {
   7.440654,
   6.360375,
   11.6598,
   9.979856};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(4,flavor3l_total_errors_fx3131,flavor3l_total_errors_fy3131,flavor3l_total_errors_felx3131,flavor3l_total_errors_fehx3131,flavor3l_total_errors_fely3131,flavor3l_total_errors_fehy3131);
   grae->SetName("flavor3l_total_errors");
   grae->SetTitle("Graph");
   grae->SetFillColor(1);
   grae->SetFillStyle(3013);
   grae->SetMarkerStyle(0);
   
   TH1F *Graph_flavor3l_total_errors3131 = new TH1F("Graph_flavor3l_total_errors3131","Graph",100,-0.9,3.9);
   Graph_flavor3l_total_errors3131->SetMinimum(191.3843);
   Graph_flavor3l_total_errors3131->SetMaximum(591.2006);
   Graph_flavor3l_total_errors3131->SetDirectory(0);
   Graph_flavor3l_total_errors3131->SetStats(0);
   Graph_flavor3l_total_errors3131->SetLineStyle(0);
   Graph_flavor3l_total_errors3131->SetMarkerStyle(20);
   Graph_flavor3l_total_errors3131->GetXaxis()->SetLabelFont(42);
   Graph_flavor3l_total_errors3131->GetXaxis()->SetLabelOffset(0.007);
   Graph_flavor3l_total_errors3131->GetXaxis()->SetLabelSize(0.05);
   Graph_flavor3l_total_errors3131->GetXaxis()->SetTitleSize(0.06);
   Graph_flavor3l_total_errors3131->GetXaxis()->SetTitleOffset(0.9);
   Graph_flavor3l_total_errors3131->GetXaxis()->SetTitleFont(42);
   Graph_flavor3l_total_errors3131->GetYaxis()->SetLabelFont(42);
   Graph_flavor3l_total_errors3131->GetYaxis()->SetLabelOffset(0.007);
   Graph_flavor3l_total_errors3131->GetYaxis()->SetLabelSize(0.05);
   Graph_flavor3l_total_errors3131->GetYaxis()->SetTitleSize(0.06);
   Graph_flavor3l_total_errors3131->GetYaxis()->SetTitleOffset(1.35);
   Graph_flavor3l_total_errors3131->GetYaxis()->SetTitleFont(42);
   Graph_flavor3l_total_errors3131->GetZaxis()->SetLabelFont(42);
   Graph_flavor3l_total_errors3131->GetZaxis()->SetLabelOffset(0.007);
   Graph_flavor3l_total_errors3131->GetZaxis()->SetLabelSize(0.05);
   Graph_flavor3l_total_errors3131->GetZaxis()->SetTitleSize(0.06);
   Graph_flavor3l_total_errors3131->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_flavor3l_total_errors3131);
   
   grae->Draw("pe2 ");
   
   Double_t flavor3l_data_graph_fx3132[4] = {
   0,
   1,
   2,
   3};
   Double_t flavor3l_data_graph_fy3132[4] = {
   235,
   297,
   426,
   555};
   Double_t flavor3l_data_graph_felx3132[4] = {
   0.5,
   0.5,
   0.5,
   0.5};
   Double_t flavor3l_data_graph_fely3132[4] = {
   15.31912,
   17.22435,
   20.63211,
   23.55185};
   Double_t flavor3l_data_graph_fehx3132[4] = {
   0.5,
   0.5,
   0.5,
   0.5};
   Double_t flavor3l_data_graph_fehy3132[4] = {
   16.35182,
   18.25343,
   21.65639,
   24.57312};
   grae = new TGraphAsymmErrors(4,flavor3l_data_graph_fx3132,flavor3l_data_graph_fy3132,flavor3l_data_graph_felx3132,flavor3l_data_graph_fehx3132,flavor3l_data_graph_fely3132,flavor3l_data_graph_fehy3132);
   grae->SetName("flavor3l_data_graph");
   grae->SetTitle("Graph");
   grae->SetFillStyle(1000);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.1);
   
   TH1F *Graph_flavor3l_data_graph3132 = new TH1F("Graph_flavor3l_data_graph3132","Graph",100,-0.9,3.9);
   Graph_flavor3l_data_graph3132->SetMinimum(183.6917);
   Graph_flavor3l_data_graph3132->SetMaximum(615.5623);
   Graph_flavor3l_data_graph3132->SetDirectory(0);
   Graph_flavor3l_data_graph3132->SetStats(0);
   Graph_flavor3l_data_graph3132->SetLineStyle(0);
   Graph_flavor3l_data_graph3132->SetMarkerStyle(20);
   Graph_flavor3l_data_graph3132->GetXaxis()->SetLabelFont(42);
   Graph_flavor3l_data_graph3132->GetXaxis()->SetLabelOffset(0.007);
   Graph_flavor3l_data_graph3132->GetXaxis()->SetLabelSize(0.05);
   Graph_flavor3l_data_graph3132->GetXaxis()->SetTitleSize(0.06);
   Graph_flavor3l_data_graph3132->GetXaxis()->SetTitleOffset(0.9);
   Graph_flavor3l_data_graph3132->GetXaxis()->SetTitleFont(42);
   Graph_flavor3l_data_graph3132->GetYaxis()->SetLabelFont(42);
   Graph_flavor3l_data_graph3132->GetYaxis()->SetLabelOffset(0.007);
   Graph_flavor3l_data_graph3132->GetYaxis()->SetLabelSize(0.05);
   Graph_flavor3l_data_graph3132->GetYaxis()->SetTitleSize(0.06);
   Graph_flavor3l_data_graph3132->GetYaxis()->SetTitleOffset(1.35);
   Graph_flavor3l_data_graph3132->GetYaxis()->SetTitleFont(42);
   Graph_flavor3l_data_graph3132->GetZaxis()->SetLabelFont(42);
   Graph_flavor3l_data_graph3132->GetZaxis()->SetLabelOffset(0.007);
   Graph_flavor3l_data_graph3132->GetZaxis()->SetLabelSize(0.05);
   Graph_flavor3l_data_graph3132->GetZaxis()->SetTitleSize(0.06);
   Graph_flavor3l_data_graph3132->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_flavor3l_data_graph3132);
   
   grae->Draw("pz ");
   
   TLegend *leg = new TLegend(0.2,0.628,0.48,0.91,NULL,"brNDC");
   leg->SetBorderSize(1);
   leg->SetTextSize(0.036);
   leg->SetLineColor(0);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("flavor3l_data","Data","LPE");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1.1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("flavor3l_prompt_WZ_stack_5","WZ","F");

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
   entry=leg->AddEntry("flavor3l_prompt_ZZ_stack_4","qqZZ","F");

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
   entry=leg->AddEntry("flavor3l_fakes_DY_stack_3","Fakes DY","F");

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
   entry=leg->AddEntry("flavor3l_fakes_TT_stack_2","Fakes TT","F");

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
   entry=leg->AddEntry("flavor3l_total_errors","Total unc.","F");
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
   flavor3l_canvas->cd();
  
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
   
   TH1D *flavor3l_total__107 = new TH1D("flavor3l_total__107","dummy",4,-0.5,3.5);
   flavor3l_total__107->SetBinContent(1,1);
   flavor3l_total__107->SetBinContent(2,1);
   flavor3l_total__107->SetBinContent(3,1);
   flavor3l_total__107->SetBinContent(4,1);
   flavor3l_total__107->SetMinimum(0.5);
   flavor3l_total__107->SetMaximum(2);
   flavor3l_total__107->SetEntries(15156);

   ci = TColor::GetColor("#00cc00");
   flavor3l_total__107->SetFillColor(ci);

   ci = TColor::GetColor("#6666ff");
   flavor3l_total__107->SetMarkerColor(ci);
   flavor3l_total__107->SetMarkerSize(1.1);
   flavor3l_total__107->GetXaxis()->SetTitle("flavor");
   flavor3l_total__107->GetXaxis()->SetBinLabel(1,"eee");
   flavor3l_total__107->GetXaxis()->SetBinLabel(2,"ee#mu");
   flavor3l_total__107->GetXaxis()->SetBinLabel(3,"e#mu#mu");
   flavor3l_total__107->GetXaxis()->SetBinLabel(4,"#mu#mu#mu");
   flavor3l_total__107->GetXaxis()->SetMoreLogLabels();
   flavor3l_total__107->GetXaxis()->SetLabelFont(42);
   flavor3l_total__107->GetXaxis()->SetLabelOffset(0.015);
   flavor3l_total__107->GetXaxis()->SetLabelSize(0.1542857);
   flavor3l_total__107->GetXaxis()->SetTitleSize(0.14);
   flavor3l_total__107->GetXaxis()->SetTitleFont(42);
   flavor3l_total__107->GetYaxis()->SetTitle("Data/pred.");
   flavor3l_total__107->GetYaxis()->SetDecimals();
   flavor3l_total__107->GetYaxis()->SetNdivisions(505);
   flavor3l_total__107->GetYaxis()->SetLabelFont(42);
   flavor3l_total__107->GetYaxis()->SetLabelOffset(0.01);
   flavor3l_total__107->GetYaxis()->SetLabelSize(0.11);
   flavor3l_total__107->GetYaxis()->SetTitleSize(0.14);
   flavor3l_total__107->GetYaxis()->SetTitleOffset(0.62);
   flavor3l_total__107->GetYaxis()->SetTitleFont(42);
   flavor3l_total__107->GetZaxis()->SetLabelFont(42);
   flavor3l_total__107->GetZaxis()->SetLabelOffset(0.007);
   flavor3l_total__107->GetZaxis()->SetLabelSize(0.05);
   flavor3l_total__107->GetZaxis()->SetTitleSize(0.06);
   flavor3l_total__107->GetZaxis()->SetTitleFont(42);
   flavor3l_total__107->Draw("AXIS");
   
   Double_t flavor3l_total_errors_fx3133[4] = {
   0,
   1,
   2,
   3};
   Double_t flavor3l_total_errors_fy3133[4] = {
   1,
   1,
   1,
   1};
   Double_t flavor3l_total_errors_felx3133[4] = {
   0.5,
   0.5,
   0.5,
   0.5};
   Double_t flavor3l_total_errors_fely3133[4] = {
   0.03205203,
   0.02278368,
   0.02669765,
   0.01821465};
   Double_t flavor3l_total_errors_fehx3133[4] = {
   0.5,
   0.5,
   0.5,
   0.5};
   Double_t flavor3l_total_errors_fehy3133[4] = {
   0.03205203,
   0.02278368,
   0.02669765,
   0.01821465};
   grae = new TGraphAsymmErrors(4,flavor3l_total_errors_fx3133,flavor3l_total_errors_fy3133,flavor3l_total_errors_felx3133,flavor3l_total_errors_fehx3133,flavor3l_total_errors_fely3133,flavor3l_total_errors_fehy3133);
   grae->SetName("flavor3l_total_errors");
   grae->SetTitle("Graph");

   ci = TColor::GetColor("#00ffff");
   grae->SetFillColor(ci);

   ci = TColor::GetColor("#00ffff");
   grae->SetMarkerColor(ci);
   grae->Draw("e2");
   
   Double_t flavor3l_total_errors_fx3134[4] = {
   0,
   1,
   2,
   3};
   Double_t flavor3l_total_errors_fy3134[4] = {
   1,
   1,
   1,
   1};
   Double_t flavor3l_total_errors_felx3134[4] = {
   0.5,
   0.5,
   0.5,
   0.5};
   Double_t flavor3l_total_errors_fely3134[4] = {
   0.03205203,
   0.02278368,
   0.02669765,
   0.01821465};
   Double_t flavor3l_total_errors_fehx3134[4] = {
   0.5,
   0.5,
   0.5,
   0.5};
   Double_t flavor3l_total_errors_fehy3134[4] = {
   0.03205203,
   0.02278368,
   0.02669765,
   0.01821465};
   grae = new TGraphAsymmErrors(4,flavor3l_total_errors_fx3134,flavor3l_total_errors_fy3134,flavor3l_total_errors_felx3134,flavor3l_total_errors_fehx3134,flavor3l_total_errors_fely3134,flavor3l_total_errors_fehy3134);
   grae->SetName("flavor3l_total_errors");
   grae->SetTitle("Graph");

   ci = TColor::GetColor("#6666ff");
   grae->SetFillColor(ci);

   ci = TColor::GetColor("#6666ff");
   grae->SetMarkerColor(ci);
   grae->Draw("e2 ");
   
   TH1D *flavor3l_total__108 = new TH1D("flavor3l_total__108","dummy",4,-0.5,3.5);
   flavor3l_total__108->SetBinContent(1,1);
   flavor3l_total__108->SetBinContent(2,1);
   flavor3l_total__108->SetBinContent(3,1);
   flavor3l_total__108->SetBinContent(4,1);
   flavor3l_total__108->SetMinimum(0.5);
   flavor3l_total__108->SetMaximum(2);
   flavor3l_total__108->SetEntries(15156);

   ci = TColor::GetColor("#00cc00");
   flavor3l_total__108->SetFillColor(ci);

   ci = TColor::GetColor("#6666ff");
   flavor3l_total__108->SetMarkerColor(ci);
   flavor3l_total__108->SetMarkerSize(1.1);
   flavor3l_total__108->GetXaxis()->SetTitle("flavor");
   flavor3l_total__108->GetXaxis()->SetBinLabel(1,"eee");
   flavor3l_total__108->GetXaxis()->SetBinLabel(2,"ee#mu");
   flavor3l_total__108->GetXaxis()->SetBinLabel(3,"e#mu#mu");
   flavor3l_total__108->GetXaxis()->SetBinLabel(4,"#mu#mu#mu");
   flavor3l_total__108->GetXaxis()->SetMoreLogLabels();
   flavor3l_total__108->GetXaxis()->SetLabelFont(42);
   flavor3l_total__108->GetXaxis()->SetLabelOffset(0.015);
   flavor3l_total__108->GetXaxis()->SetLabelSize(0.1542857);
   flavor3l_total__108->GetXaxis()->SetTitleSize(0.14);
   flavor3l_total__108->GetXaxis()->SetTitleFont(42);
   flavor3l_total__108->GetYaxis()->SetTitle("Data/pred.");
   flavor3l_total__108->GetYaxis()->SetDecimals();
   flavor3l_total__108->GetYaxis()->SetNdivisions(505);
   flavor3l_total__108->GetYaxis()->SetLabelFont(42);
   flavor3l_total__108->GetYaxis()->SetLabelOffset(0.01);
   flavor3l_total__108->GetYaxis()->SetLabelSize(0.11);
   flavor3l_total__108->GetYaxis()->SetTitleSize(0.14);
   flavor3l_total__108->GetYaxis()->SetTitleOffset(0.62);
   flavor3l_total__108->GetYaxis()->SetTitleFont(42);
   flavor3l_total__108->GetZaxis()->SetLabelFont(42);
   flavor3l_total__108->GetZaxis()->SetLabelOffset(0.007);
   flavor3l_total__108->GetZaxis()->SetLabelSize(0.05);
   flavor3l_total__108->GetZaxis()->SetTitleSize(0.06);
   flavor3l_total__108->GetZaxis()->SetTitleFont(42);
   flavor3l_total__108->Draw("AXIS SAME");
   TLine *line = new TLine(-0.5,1,3.5,1);
   line->SetLineColor(58);
   line->SetLineWidth(2);
   line->Draw();
   
   Double_t data_div_fx3135[4] = {
   0,
   1,
   2,
   3};
   Double_t data_div_fy3135[4] = {
   1.012307,
   1.063892,
   0.9754196,
   1.012953};
   Double_t data_div_felx3135[4] = {
   0.5,
   0.5,
   0.5,
   0.5};
   Double_t data_div_fely3135[4] = {
   0.06599003,
   0.06169983,
   0.0472417,
   0.04298545};
   Double_t data_div_fehx3135[4] = {
   0.5,
   0.5,
   0.5,
   0.5};
   Double_t data_div_fehy3135[4] = {
   0.07043857,
   0.06538614,
   0.04958702,
   0.04484942};
   grae = new TGraphAsymmErrors(4,data_div_fx3135,data_div_fy3135,data_div_felx3135,data_div_fehx3135,data_div_fely3135,data_div_fehy3135);
   grae->SetName("data_div");
   grae->SetTitle("Graph");
   grae->SetFillStyle(1000);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.1);
   
   TH1F *Graph_flavor3l_data_graph3135 = new TH1F("Graph_flavor3l_data_graph3135","Graph",100,-0.9,3.9);
   Graph_flavor3l_data_graph3135->SetMinimum(183.6917);
   Graph_flavor3l_data_graph3135->SetMaximum(615.5623);
   Graph_flavor3l_data_graph3135->SetDirectory(0);
   Graph_flavor3l_data_graph3135->SetStats(0);
   Graph_flavor3l_data_graph3135->SetLineStyle(0);
   Graph_flavor3l_data_graph3135->SetMarkerStyle(20);
   Graph_flavor3l_data_graph3135->GetXaxis()->SetLabelFont(42);
   Graph_flavor3l_data_graph3135->GetXaxis()->SetLabelOffset(0.007);
   Graph_flavor3l_data_graph3135->GetXaxis()->SetLabelSize(0.05);
   Graph_flavor3l_data_graph3135->GetXaxis()->SetTitleSize(0.06);
   Graph_flavor3l_data_graph3135->GetXaxis()->SetTitleOffset(0.9);
   Graph_flavor3l_data_graph3135->GetXaxis()->SetTitleFont(42);
   Graph_flavor3l_data_graph3135->GetYaxis()->SetLabelFont(42);
   Graph_flavor3l_data_graph3135->GetYaxis()->SetLabelOffset(0.007);
   Graph_flavor3l_data_graph3135->GetYaxis()->SetLabelSize(0.05);
   Graph_flavor3l_data_graph3135->GetYaxis()->SetTitleSize(0.06);
   Graph_flavor3l_data_graph3135->GetYaxis()->SetTitleOffset(1.35);
   Graph_flavor3l_data_graph3135->GetYaxis()->SetTitleFont(42);
   Graph_flavor3l_data_graph3135->GetZaxis()->SetLabelFont(42);
   Graph_flavor3l_data_graph3135->GetZaxis()->SetLabelOffset(0.007);
   Graph_flavor3l_data_graph3135->GetZaxis()->SetLabelSize(0.05);
   Graph_flavor3l_data_graph3135->GetZaxis()->SetTitleSize(0.06);
   Graph_flavor3l_data_graph3135->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_flavor3l_data_graph3135);
   
   grae->Draw("pz ");
   
   leg = new TLegend(0,0,0,0,NULL,"brNDC");
   leg->SetBorderSize(1);
   leg->SetTextSize(0.084);
   leg->SetLineColor(0);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   entry=leg->AddEntry("flavor3l_total_errors","stat. unc.","F");
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
   entry=leg->AddEntry("flavor3l_total_errors","total unc.","F");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   leg->Draw();
   pad2->Modified();
   flavor3l_canvas->cd();
   flavor3l_canvas->Modified();
   flavor3l_canvas->cd();
   flavor3l_canvas->SetSelected(flavor3l_canvas);
}
