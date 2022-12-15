void mu_phi()
{
//=========Macro generated from canvas: mu_phi_canvas/mu_phi
//=========  (Thu Dec 15 18:21:12 2022) by ROOT version 6.12/07
   TCanvas *mu_phi_canvas = new TCanvas("mu_phi_canvas", "mu_phi",0,0,600,750);
   gStyle->SetOptFit(1);
   gStyle->SetOptStat(0);
   gStyle->SetOptTitle(0);
   mu_phi_canvas->SetHighLightColor(2);
   mu_phi_canvas->Range(0,0,1,1);
   mu_phi_canvas->SetFillColor(0);
   mu_phi_canvas->SetBorderMode(0);
   mu_phi_canvas->SetBorderSize(2);
   mu_phi_canvas->SetTickx(1);
   mu_phi_canvas->SetTicky(1);
   mu_phi_canvas->SetLeftMargin(0.18);
   mu_phi_canvas->SetRightMargin(0.04);
   mu_phi_canvas->SetBottomMargin(0.13);
   mu_phi_canvas->SetFrameFillStyle(0);
   mu_phi_canvas->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: pad1
   TPad *pad1 = new TPad("pad1", "pad1",0,0.3,1,1);
   pad1->Draw();
   pad1->cd();
   pad1->Range(-4.589231,-12.34959,3.462051,481.6341);
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
   
   TH1D *mu_phi_total__29 = new TH1D("mu_phi_total__29","dummy",10,-3.14,3.14);
   mu_phi_total__29->SetBinContent(0,3187.888);
   mu_phi_total__29->SetBinContent(1,285.4288);
   mu_phi_total__29->SetBinContent(2,279.4301);
   mu_phi_total__29->SetBinContent(3,275.4132);
   mu_phi_total__29->SetBinContent(4,283.9647);
   mu_phi_total__29->SetBinContent(5,281.5816);
   mu_phi_total__29->SetBinContent(6,285.1114);
   mu_phi_total__29->SetBinContent(7,275.0738);
   mu_phi_total__29->SetBinContent(8,277.0372);
   mu_phi_total__29->SetBinContent(9,275.3143);
   mu_phi_total__29->SetBinContent(10,277.0826);
   mu_phi_total__29->SetBinContent(11,0.45224);
   mu_phi_total__29->SetBinError(0,26.72745);
   mu_phi_total__29->SetBinError(1,7.589576);
   mu_phi_total__29->SetBinError(2,7.930022);
   mu_phi_total__29->SetBinError(3,6.946969);
   mu_phi_total__29->SetBinError(4,8.789007);
   mu_phi_total__29->SetBinError(5,8.280316);
   mu_phi_total__29->SetBinError(6,7.419496);
   mu_phi_total__29->SetBinError(7,7.351371);
   mu_phi_total__29->SetBinError(8,7.897238);
   mu_phi_total__29->SetBinError(9,8.078681);
   mu_phi_total__29->SetBinError(10,7.732172);
   mu_phi_total__29->SetBinError(11,0.2022479);
   mu_phi_total__29->SetMinimum(0);
   mu_phi_total__29->SetMaximum(451.9951);
   mu_phi_total__29->SetEntries(60512);
   mu_phi_total__29->SetDirectory(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#00cc00");
   mu_phi_total__29->SetFillColor(ci);
   mu_phi_total__29->SetMarkerStyle(20);
   mu_phi_total__29->SetMarkerSize(1.1);
   mu_phi_total__29->GetXaxis()->SetTitle("#phi(#mu)");
   mu_phi_total__29->GetXaxis()->SetMoreLogLabels();
   mu_phi_total__29->GetXaxis()->SetLabelFont(42);
   mu_phi_total__29->GetXaxis()->SetLabelOffset(999);
   mu_phi_total__29->GetXaxis()->SetLabelSize(0.05);
   mu_phi_total__29->GetXaxis()->SetTitleSize(0.05);
   mu_phi_total__29->GetXaxis()->SetTitleOffset(999);
   mu_phi_total__29->GetXaxis()->SetTitleFont(42);
   mu_phi_total__29->GetYaxis()->SetTitle("Muons");
   mu_phi_total__29->GetYaxis()->SetLabelFont(42);
   mu_phi_total__29->GetYaxis()->SetLabelOffset(0.007);
   mu_phi_total__29->GetYaxis()->SetLabelSize(0.05);
   mu_phi_total__29->GetYaxis()->SetTitleSize(0.06);
   mu_phi_total__29->GetYaxis()->SetTitleOffset(1.48);
   mu_phi_total__29->GetYaxis()->SetTitleFont(42);
   mu_phi_total__29->GetZaxis()->SetLabelFont(42);
   mu_phi_total__29->GetZaxis()->SetLabelOffset(0.007);
   mu_phi_total__29->GetZaxis()->SetLabelSize(0.05);
   mu_phi_total__29->GetZaxis()->SetTitleSize(0.06);
   mu_phi_total__29->GetZaxis()->SetTitleFont(42);
   mu_phi_total__29->Draw("HIST");
   
   THStack *mu_phi_stack = new THStack();
   mu_phi_stack->SetName("mu_phi_stack");
   mu_phi_stack->SetTitle("mu_phi");
   
   TH1F *mu_phi_stack_stack_8 = new TH1F("mu_phi_stack_stack_8","mu_phi",10,-3.14,3.14);
   mu_phi_stack_stack_8->SetMinimum(0);
   mu_phi_stack_stack_8->SetMaximum(299.7002);
   mu_phi_stack_stack_8->SetDirectory(0);
   mu_phi_stack_stack_8->SetStats(0);
   mu_phi_stack_stack_8->SetLineStyle(0);
   mu_phi_stack_stack_8->SetMarkerStyle(20);
   mu_phi_stack_stack_8->GetXaxis()->SetLabelFont(42);
   mu_phi_stack_stack_8->GetXaxis()->SetLabelOffset(0.007);
   mu_phi_stack_stack_8->GetXaxis()->SetLabelSize(0.05);
   mu_phi_stack_stack_8->GetXaxis()->SetTitleSize(0.06);
   mu_phi_stack_stack_8->GetXaxis()->SetTitleOffset(0.9);
   mu_phi_stack_stack_8->GetXaxis()->SetTitleFont(42);
   mu_phi_stack_stack_8->GetYaxis()->SetLabelFont(42);
   mu_phi_stack_stack_8->GetYaxis()->SetLabelOffset(0.007);
   mu_phi_stack_stack_8->GetYaxis()->SetLabelSize(0.05);
   mu_phi_stack_stack_8->GetYaxis()->SetTitleSize(0.06);
   mu_phi_stack_stack_8->GetYaxis()->SetTitleOffset(1.35);
   mu_phi_stack_stack_8->GetYaxis()->SetTitleFont(42);
   mu_phi_stack_stack_8->GetZaxis()->SetLabelFont(42);
   mu_phi_stack_stack_8->GetZaxis()->SetLabelOffset(0.007);
   mu_phi_stack_stack_8->GetZaxis()->SetLabelSize(0.05);
   mu_phi_stack_stack_8->GetZaxis()->SetTitleSize(0.06);
   mu_phi_stack_stack_8->GetZaxis()->SetTitleFont(42);
   mu_phi_stack->SetHistogram(mu_phi_stack_stack_8);
   
   
   TH1D *mu_phi_fakes_VV_stack_1 = new TH1D("mu_phi_fakes_VV_stack_1","dummy",10,-3.14,3.14);
   mu_phi_fakes_VV_stack_1->SetBinContent(0,1.846674);
   mu_phi_fakes_VV_stack_1->SetBinContent(1,0.09719337);
   mu_phi_fakes_VV_stack_1->SetBinContent(2,0.09719337);
   mu_phi_fakes_VV_stack_1->SetBinContent(3,0.1943867);
   mu_phi_fakes_VV_stack_1->SetBinContent(4,0.1943867);
   mu_phi_fakes_VV_stack_1->SetBinContent(6,0.09719337);
   mu_phi_fakes_VV_stack_1->SetBinContent(8,0.1943867);
   mu_phi_fakes_VV_stack_1->SetBinError(0,0.4236561);
   mu_phi_fakes_VV_stack_1->SetBinError(1,0.09719337);
   mu_phi_fakes_VV_stack_1->SetBinError(2,0.09719337);
   mu_phi_fakes_VV_stack_1->SetBinError(3,0.1374522);
   mu_phi_fakes_VV_stack_1->SetBinError(4,0.1374522);
   mu_phi_fakes_VV_stack_1->SetBinError(6,0.09719337);
   mu_phi_fakes_VV_stack_1->SetBinError(8,0.1374522);
   mu_phi_fakes_VV_stack_1->SetEntries(28);

   ci = TColor::GetColor("#2e3294");
   mu_phi_fakes_VV_stack_1->SetFillColor(ci);
   mu_phi_fakes_VV_stack_1->SetMarkerStyle(0);
   mu_phi_fakes_VV_stack_1->SetMarkerSize(1.1);
   mu_phi_fakes_VV_stack_1->GetXaxis()->SetTitle("#phi(#mu)");
   mu_phi_fakes_VV_stack_1->GetXaxis()->SetMoreLogLabels();
   mu_phi_fakes_VV_stack_1->GetXaxis()->SetLabelFont(42);
   mu_phi_fakes_VV_stack_1->GetXaxis()->SetLabelOffset(0.007);
   mu_phi_fakes_VV_stack_1->GetXaxis()->SetLabelSize(0.05);
   mu_phi_fakes_VV_stack_1->GetXaxis()->SetTitleSize(0.06);
   mu_phi_fakes_VV_stack_1->GetXaxis()->SetTitleOffset(0.9);
   mu_phi_fakes_VV_stack_1->GetXaxis()->SetTitleFont(42);
   mu_phi_fakes_VV_stack_1->GetYaxis()->SetTitle("Muons");
   mu_phi_fakes_VV_stack_1->GetYaxis()->SetLabelFont(42);
   mu_phi_fakes_VV_stack_1->GetYaxis()->SetLabelOffset(0.007);
   mu_phi_fakes_VV_stack_1->GetYaxis()->SetLabelSize(0.05);
   mu_phi_fakes_VV_stack_1->GetYaxis()->SetTitleSize(0.06);
   mu_phi_fakes_VV_stack_1->GetYaxis()->SetTitleOffset(1.35);
   mu_phi_fakes_VV_stack_1->GetYaxis()->SetTitleFont(42);
   mu_phi_fakes_VV_stack_1->GetZaxis()->SetLabelFont(42);
   mu_phi_fakes_VV_stack_1->GetZaxis()->SetLabelOffset(0.007);
   mu_phi_fakes_VV_stack_1->GetZaxis()->SetLabelSize(0.05);
   mu_phi_fakes_VV_stack_1->GetZaxis()->SetTitleSize(0.06);
   mu_phi_fakes_VV_stack_1->GetZaxis()->SetTitleFont(42);
   mu_phi_stack->Add(mu_phi_fakes_VV_stack_1,"");
   
   TH1D *mu_phi_fakes_TT_stack_2 = new TH1D("mu_phi_fakes_TT_stack_2","dummy",10,-3.14,3.14);
   mu_phi_fakes_TT_stack_2->SetBinContent(0,108.8213);
   mu_phi_fakes_TT_stack_2->SetBinContent(1,11.44098);
   mu_phi_fakes_TT_stack_2->SetBinContent(2,11.28318);
   mu_phi_fakes_TT_stack_2->SetBinContent(3,11.28318);
   mu_phi_fakes_TT_stack_2->SetBinContent(4,10.75122);
   mu_phi_fakes_TT_stack_2->SetBinContent(5,9.666477);
   mu_phi_fakes_TT_stack_2->SetBinContent(6,12.61306);
   mu_phi_fakes_TT_stack_2->SetBinContent(7,11.0172);
   mu_phi_fakes_TT_stack_2->SetBinContent(8,10.1111);
   mu_phi_fakes_TT_stack_2->SetBinContent(9,11.88163);
   mu_phi_fakes_TT_stack_2->SetBinContent(10,11.30799);
   mu_phi_fakes_TT_stack_2->SetBinError(0,2.711864);
   mu_phi_fakes_TT_stack_2->SetBinError(1,0.8909575);
   mu_phi_fakes_TT_stack_2->SetBinError(2,0.874202);
   mu_phi_fakes_TT_stack_2->SetBinError(3,0.874202);
   mu_phi_fakes_TT_stack_2->SetBinError(4,0.8537314);
   mu_phi_fakes_TT_stack_2->SetBinError(5,0.8189572);
   mu_phi_fakes_TT_stack_2->SetBinError(6,0.9233953);
   mu_phi_fakes_TT_stack_2->SetBinError(7,0.874202);
   mu_phi_fakes_TT_stack_2->SetBinError(8,0.8345853);
   mu_phi_fakes_TT_stack_2->SetBinError(9,0.896673);
   mu_phi_fakes_TT_stack_2->SetBinError(10,0.8759431);
   mu_phi_fakes_TT_stack_2->SetEntries(3332);

   ci = TColor::GetColor("#666666");
   mu_phi_fakes_TT_stack_2->SetFillColor(ci);
   mu_phi_fakes_TT_stack_2->SetMarkerStyle(0);
   mu_phi_fakes_TT_stack_2->SetMarkerSize(1.1);
   mu_phi_fakes_TT_stack_2->GetXaxis()->SetTitle("#phi(#mu)");
   mu_phi_fakes_TT_stack_2->GetXaxis()->SetMoreLogLabels();
   mu_phi_fakes_TT_stack_2->GetXaxis()->SetLabelFont(42);
   mu_phi_fakes_TT_stack_2->GetXaxis()->SetLabelOffset(0.007);
   mu_phi_fakes_TT_stack_2->GetXaxis()->SetLabelSize(0.05);
   mu_phi_fakes_TT_stack_2->GetXaxis()->SetTitleSize(0.06);
   mu_phi_fakes_TT_stack_2->GetXaxis()->SetTitleOffset(0.9);
   mu_phi_fakes_TT_stack_2->GetXaxis()->SetTitleFont(42);
   mu_phi_fakes_TT_stack_2->GetYaxis()->SetTitle("Muons");
   mu_phi_fakes_TT_stack_2->GetYaxis()->SetLabelFont(42);
   mu_phi_fakes_TT_stack_2->GetYaxis()->SetLabelOffset(0.007);
   mu_phi_fakes_TT_stack_2->GetYaxis()->SetLabelSize(0.05);
   mu_phi_fakes_TT_stack_2->GetYaxis()->SetTitleSize(0.06);
   mu_phi_fakes_TT_stack_2->GetYaxis()->SetTitleOffset(1.35);
   mu_phi_fakes_TT_stack_2->GetYaxis()->SetTitleFont(42);
   mu_phi_fakes_TT_stack_2->GetZaxis()->SetLabelFont(42);
   mu_phi_fakes_TT_stack_2->GetZaxis()->SetLabelOffset(0.007);
   mu_phi_fakes_TT_stack_2->GetZaxis()->SetLabelSize(0.05);
   mu_phi_fakes_TT_stack_2->GetZaxis()->SetTitleSize(0.06);
   mu_phi_fakes_TT_stack_2->GetZaxis()->SetTitleFont(42);
   mu_phi_stack->Add(mu_phi_fakes_TT_stack_2,"");
   
   TH1D *mu_phi_fakes_DY_stack_3 = new TH1D("mu_phi_fakes_DY_stack_3","dummy",10,-3.14,3.14);
   mu_phi_fakes_DY_stack_3->SetBinContent(0,254.4893);
   mu_phi_fakes_DY_stack_3->SetBinContent(1,18.91474);
   mu_phi_fakes_DY_stack_3->SetBinContent(2,22.35379);
   mu_phi_fakes_DY_stack_3->SetBinContent(3,13.75618);
   mu_phi_fakes_DY_stack_3->SetBinContent(4,30.9514);
   mu_phi_fakes_DY_stack_3->SetBinContent(5,25.79283);
   mu_phi_fakes_DY_stack_3->SetBinContent(6,17.19522);
   mu_phi_fakes_DY_stack_3->SetBinContent(7,17.19522);
   mu_phi_fakes_DY_stack_3->SetBinContent(8,22.35379);
   mu_phi_fakes_DY_stack_3->SetBinContent(9,24.07331);
   mu_phi_fakes_DY_stack_3->SetBinContent(10,20.63427);
   mu_phi_fakes_DY_stack_3->SetBinError(0,20.91889);
   mu_phi_fakes_DY_stack_3->SetBinError(1,5.70301);
   mu_phi_fakes_DY_stack_3->SetBinError(2,6.199825);
   mu_phi_fakes_DY_stack_3->SetBinError(3,4.863543);
   mu_phi_fakes_DY_stack_3->SetBinError(4,7.295314);
   mu_phi_fakes_DY_stack_3->SetBinError(5,6.65968);
   mu_phi_fakes_DY_stack_3->SetBinError(6,5.437606);
   mu_phi_fakes_DY_stack_3->SetBinError(7,5.437606);
   mu_phi_fakes_DY_stack_3->SetBinError(8,6.199825);
   mu_phi_fakes_DY_stack_3->SetBinError(9,6.433863);
   mu_phi_fakes_DY_stack_3->SetBinError(10,5.956599);
   mu_phi_fakes_DY_stack_3->SetEntries(272);

   ci = TColor::GetColor("#cccccc");
   mu_phi_fakes_DY_stack_3->SetFillColor(ci);
   mu_phi_fakes_DY_stack_3->SetMarkerStyle(0);
   mu_phi_fakes_DY_stack_3->SetMarkerSize(1.1);
   mu_phi_fakes_DY_stack_3->GetXaxis()->SetTitle("#phi(#mu)");
   mu_phi_fakes_DY_stack_3->GetXaxis()->SetMoreLogLabels();
   mu_phi_fakes_DY_stack_3->GetXaxis()->SetLabelFont(42);
   mu_phi_fakes_DY_stack_3->GetXaxis()->SetLabelOffset(0.007);
   mu_phi_fakes_DY_stack_3->GetXaxis()->SetLabelSize(0.05);
   mu_phi_fakes_DY_stack_3->GetXaxis()->SetTitleSize(0.06);
   mu_phi_fakes_DY_stack_3->GetXaxis()->SetTitleOffset(0.9);
   mu_phi_fakes_DY_stack_3->GetXaxis()->SetTitleFont(42);
   mu_phi_fakes_DY_stack_3->GetYaxis()->SetTitle("Muons");
   mu_phi_fakes_DY_stack_3->GetYaxis()->SetLabelFont(42);
   mu_phi_fakes_DY_stack_3->GetYaxis()->SetLabelOffset(0.007);
   mu_phi_fakes_DY_stack_3->GetYaxis()->SetLabelSize(0.05);
   mu_phi_fakes_DY_stack_3->GetYaxis()->SetTitleSize(0.06);
   mu_phi_fakes_DY_stack_3->GetYaxis()->SetTitleOffset(1.35);
   mu_phi_fakes_DY_stack_3->GetYaxis()->SetTitleFont(42);
   mu_phi_fakes_DY_stack_3->GetZaxis()->SetLabelFont(42);
   mu_phi_fakes_DY_stack_3->GetZaxis()->SetLabelOffset(0.007);
   mu_phi_fakes_DY_stack_3->GetZaxis()->SetLabelSize(0.05);
   mu_phi_fakes_DY_stack_3->GetZaxis()->SetTitleSize(0.06);
   mu_phi_fakes_DY_stack_3->GetZaxis()->SetTitleFont(42);
   mu_phi_stack->Add(mu_phi_fakes_DY_stack_3,"");
   
   TH1D *mu_phi_prompt_ZZ_stack_4 = new TH1D("mu_phi_prompt_ZZ_stack_4","dummy",10,-3.14,3.14);
   mu_phi_prompt_ZZ_stack_4->SetBinContent(0,149.5406);
   mu_phi_prompt_ZZ_stack_4->SetBinContent(1,13.02746);
   mu_phi_prompt_ZZ_stack_4->SetBinContent(2,15.59626);
   mu_phi_prompt_ZZ_stack_4->SetBinContent(3,12.84398);
   mu_phi_prompt_ZZ_stack_4->SetBinContent(4,14.86232);
   mu_phi_prompt_ZZ_stack_4->SetBinContent(5,13.76141);
   mu_phi_prompt_ZZ_stack_4->SetBinContent(6,16.51369);
   mu_phi_prompt_ZZ_stack_4->SetBinContent(7,14.86232);
   mu_phi_prompt_ZZ_stack_4->SetBinContent(8,11.92655);
   mu_phi_prompt_ZZ_stack_4->SetBinContent(9,15.22929);
   mu_phi_prompt_ZZ_stack_4->SetBinContent(10,14.67883);
   mu_phi_prompt_ZZ_stack_4->SetBinError(0,5.238179);
   mu_phi_prompt_ZZ_stack_4->SetBinError(1,1.546076);
   mu_phi_prompt_ZZ_stack_4->SetBinError(2,1.691652);
   mu_phi_prompt_ZZ_stack_4->SetBinError(3,1.535149);
   mu_phi_prompt_ZZ_stack_4->SetBinError(4,1.651369);
   mu_phi_prompt_ZZ_stack_4->SetBinError(5,1.58903);
   mu_phi_prompt_ZZ_stack_4->SetBinError(6,1.740695);
   mu_phi_prompt_ZZ_stack_4->SetBinError(7,1.651369);
   mu_phi_prompt_ZZ_stack_4->SetBinError(8,1.479307);
   mu_phi_prompt_ZZ_stack_4->SetBinError(9,1.671632);
   mu_phi_prompt_ZZ_stack_4->SetBinError(10,1.641143);
   mu_phi_prompt_ZZ_stack_4->SetEntries(1596);

   ci = TColor::GetColor("#00cc00");
   mu_phi_prompt_ZZ_stack_4->SetFillColor(ci);
   mu_phi_prompt_ZZ_stack_4->SetMarkerStyle(0);
   mu_phi_prompt_ZZ_stack_4->SetMarkerSize(1.1);
   mu_phi_prompt_ZZ_stack_4->GetXaxis()->SetTitle("#phi(#mu)");
   mu_phi_prompt_ZZ_stack_4->GetXaxis()->SetMoreLogLabels();
   mu_phi_prompt_ZZ_stack_4->GetXaxis()->SetLabelFont(42);
   mu_phi_prompt_ZZ_stack_4->GetXaxis()->SetLabelOffset(0.007);
   mu_phi_prompt_ZZ_stack_4->GetXaxis()->SetLabelSize(0.05);
   mu_phi_prompt_ZZ_stack_4->GetXaxis()->SetTitleSize(0.06);
   mu_phi_prompt_ZZ_stack_4->GetXaxis()->SetTitleOffset(0.9);
   mu_phi_prompt_ZZ_stack_4->GetXaxis()->SetTitleFont(42);
   mu_phi_prompt_ZZ_stack_4->GetYaxis()->SetTitle("Muons");
   mu_phi_prompt_ZZ_stack_4->GetYaxis()->SetLabelFont(42);
   mu_phi_prompt_ZZ_stack_4->GetYaxis()->SetLabelOffset(0.007);
   mu_phi_prompt_ZZ_stack_4->GetYaxis()->SetLabelSize(0.05);
   mu_phi_prompt_ZZ_stack_4->GetYaxis()->SetTitleSize(0.06);
   mu_phi_prompt_ZZ_stack_4->GetYaxis()->SetTitleOffset(1.35);
   mu_phi_prompt_ZZ_stack_4->GetYaxis()->SetTitleFont(42);
   mu_phi_prompt_ZZ_stack_4->GetZaxis()->SetLabelFont(42);
   mu_phi_prompt_ZZ_stack_4->GetZaxis()->SetLabelOffset(0.007);
   mu_phi_prompt_ZZ_stack_4->GetZaxis()->SetLabelSize(0.05);
   mu_phi_prompt_ZZ_stack_4->GetZaxis()->SetTitleSize(0.06);
   mu_phi_prompt_ZZ_stack_4->GetZaxis()->SetTitleFont(42);
   mu_phi_stack->Add(mu_phi_prompt_ZZ_stack_4,"");
   
   TH1D *mu_phi_prompt_WZ_stack_5 = new TH1D("mu_phi_prompt_WZ_stack_5","dummy",10,-3.14,3.14);
   mu_phi_prompt_WZ_stack_5->SetBinContent(0,2673.19);
   mu_phi_prompt_WZ_stack_5->SetBinContent(1,241.9484);
   mu_phi_prompt_WZ_stack_5->SetBinContent(2,230.0997);
   mu_phi_prompt_WZ_stack_5->SetBinContent(3,237.3355);
   mu_phi_prompt_WZ_stack_5->SetBinContent(4,227.2054);
   mu_phi_prompt_WZ_stack_5->SetBinContent(5,232.3609);
   mu_phi_prompt_WZ_stack_5->SetBinContent(6,238.6922);
   mu_phi_prompt_WZ_stack_5->SetBinContent(7,231.9991);
   mu_phi_prompt_WZ_stack_5->SetBinContent(8,232.4513);
   mu_phi_prompt_WZ_stack_5->SetBinContent(9,224.1301);
   mu_phi_prompt_WZ_stack_5->SetBinContent(10,230.4615);
   mu_phi_prompt_WZ_stack_5->SetBinContent(11,0.45224);
   mu_phi_prompt_WZ_stack_5->SetBinError(0,15.54943);
   mu_phi_prompt_WZ_stack_5->SetBinError(1,4.678006);
   mu_phi_prompt_WZ_stack_5->SetBinError(2,4.562023);
   mu_phi_prompt_WZ_stack_5->SetBinError(3,4.633198);
   mu_phi_prompt_WZ_stack_5->SetBinError(4,4.53324);
   mu_phi_prompt_WZ_stack_5->SetBinError(5,4.584384);
   mu_phi_prompt_WZ_stack_5->SetBinError(6,4.646422);
   mu_phi_prompt_WZ_stack_5->SetBinError(7,4.580813);
   mu_phi_prompt_WZ_stack_5->SetBinError(8,4.585276);
   mu_phi_prompt_WZ_stack_5->SetBinError(9,4.502457);
   mu_phi_prompt_WZ_stack_5->SetBinError(10,4.565608);
   mu_phi_prompt_WZ_stack_5->SetBinError(11,0.2022479);
   mu_phi_prompt_WZ_stack_5->SetEntries(55284);

   ci = TColor::GetColor("#ffcc00");
   mu_phi_prompt_WZ_stack_5->SetFillColor(ci);
   mu_phi_prompt_WZ_stack_5->SetMarkerStyle(0);
   mu_phi_prompt_WZ_stack_5->SetMarkerSize(1.1);
   mu_phi_prompt_WZ_stack_5->GetXaxis()->SetTitle("#phi(#mu)");
   mu_phi_prompt_WZ_stack_5->GetXaxis()->SetMoreLogLabels();
   mu_phi_prompt_WZ_stack_5->GetXaxis()->SetLabelFont(42);
   mu_phi_prompt_WZ_stack_5->GetXaxis()->SetLabelOffset(0.007);
   mu_phi_prompt_WZ_stack_5->GetXaxis()->SetLabelSize(0.05);
   mu_phi_prompt_WZ_stack_5->GetXaxis()->SetTitleSize(0.06);
   mu_phi_prompt_WZ_stack_5->GetXaxis()->SetTitleOffset(0.9);
   mu_phi_prompt_WZ_stack_5->GetXaxis()->SetTitleFont(42);
   mu_phi_prompt_WZ_stack_5->GetYaxis()->SetTitle("Muons");
   mu_phi_prompt_WZ_stack_5->GetYaxis()->SetLabelFont(42);
   mu_phi_prompt_WZ_stack_5->GetYaxis()->SetLabelOffset(0.007);
   mu_phi_prompt_WZ_stack_5->GetYaxis()->SetLabelSize(0.05);
   mu_phi_prompt_WZ_stack_5->GetYaxis()->SetTitleSize(0.06);
   mu_phi_prompt_WZ_stack_5->GetYaxis()->SetTitleOffset(1.35);
   mu_phi_prompt_WZ_stack_5->GetYaxis()->SetTitleFont(42);
   mu_phi_prompt_WZ_stack_5->GetZaxis()->SetLabelFont(42);
   mu_phi_prompt_WZ_stack_5->GetZaxis()->SetLabelOffset(0.007);
   mu_phi_prompt_WZ_stack_5->GetZaxis()->SetLabelSize(0.05);
   mu_phi_prompt_WZ_stack_5->GetZaxis()->SetTitleSize(0.06);
   mu_phi_prompt_WZ_stack_5->GetZaxis()->SetTitleFont(42);
   mu_phi_stack->Add(mu_phi_prompt_WZ_stack_5,"");
   mu_phi_stack->Draw("same hist");
   
   TH1D *mu_phi_total__30 = new TH1D("mu_phi_total__30","dummy",10,-3.14,3.14);
   mu_phi_total__30->SetBinContent(0,3187.888);
   mu_phi_total__30->SetBinContent(1,285.4288);
   mu_phi_total__30->SetBinContent(2,279.4301);
   mu_phi_total__30->SetBinContent(3,275.4132);
   mu_phi_total__30->SetBinContent(4,283.9647);
   mu_phi_total__30->SetBinContent(5,281.5816);
   mu_phi_total__30->SetBinContent(6,285.1114);
   mu_phi_total__30->SetBinContent(7,275.0738);
   mu_phi_total__30->SetBinContent(8,277.0372);
   mu_phi_total__30->SetBinContent(9,275.3143);
   mu_phi_total__30->SetBinContent(10,277.0826);
   mu_phi_total__30->SetBinContent(11,0.45224);
   mu_phi_total__30->SetBinError(0,26.72745);
   mu_phi_total__30->SetBinError(1,7.589576);
   mu_phi_total__30->SetBinError(2,7.930022);
   mu_phi_total__30->SetBinError(3,6.946969);
   mu_phi_total__30->SetBinError(4,8.789007);
   mu_phi_total__30->SetBinError(5,8.280316);
   mu_phi_total__30->SetBinError(6,7.419496);
   mu_phi_total__30->SetBinError(7,7.351371);
   mu_phi_total__30->SetBinError(8,7.897238);
   mu_phi_total__30->SetBinError(9,8.078681);
   mu_phi_total__30->SetBinError(10,7.732172);
   mu_phi_total__30->SetBinError(11,0.2022479);
   mu_phi_total__30->SetMinimum(0);
   mu_phi_total__30->SetMaximum(451.9951);
   mu_phi_total__30->SetEntries(60512);
   mu_phi_total__30->SetDirectory(0);

   ci = TColor::GetColor("#00cc00");
   mu_phi_total__30->SetFillColor(ci);
   mu_phi_total__30->SetMarkerStyle(20);
   mu_phi_total__30->SetMarkerSize(1.1);
   mu_phi_total__30->GetXaxis()->SetTitle("#phi(#mu)");
   mu_phi_total__30->GetXaxis()->SetMoreLogLabels();
   mu_phi_total__30->GetXaxis()->SetLabelFont(42);
   mu_phi_total__30->GetXaxis()->SetLabelOffset(999);
   mu_phi_total__30->GetXaxis()->SetLabelSize(0.05);
   mu_phi_total__30->GetXaxis()->SetTitleSize(0.05);
   mu_phi_total__30->GetXaxis()->SetTitleOffset(999);
   mu_phi_total__30->GetXaxis()->SetTitleFont(42);
   mu_phi_total__30->GetYaxis()->SetTitle("Muons");
   mu_phi_total__30->GetYaxis()->SetLabelFont(42);
   mu_phi_total__30->GetYaxis()->SetLabelOffset(0.007);
   mu_phi_total__30->GetYaxis()->SetLabelSize(0.05);
   mu_phi_total__30->GetYaxis()->SetTitleSize(0.06);
   mu_phi_total__30->GetYaxis()->SetTitleOffset(1.48);
   mu_phi_total__30->GetYaxis()->SetTitleFont(42);
   mu_phi_total__30->GetZaxis()->SetLabelFont(42);
   mu_phi_total__30->GetZaxis()->SetLabelOffset(0.007);
   mu_phi_total__30->GetZaxis()->SetLabelSize(0.05);
   mu_phi_total__30->GetZaxis()->SetTitleSize(0.06);
   mu_phi_total__30->GetZaxis()->SetTitleFont(42);
   mu_phi_total__30->Draw("AXIS SAME");
   
   Double_t mu_phi_total_errors_fx3036[10] = {
   -2.826,
   -2.198,
   -1.57,
   -0.942,
   -0.314,
   0.314,
   0.942,
   1.57,
   2.198,
   2.826};
   Double_t mu_phi_total_errors_fy3036[10] = {
   285.4288,
   279.4301,
   275.4132,
   283.9647,
   281.5816,
   285.1114,
   275.0738,
   277.0372,
   275.3143,
   277.0826};
   Double_t mu_phi_total_errors_felx3036[10] = {
   0.314,
   0.314,
   0.314,
   0.314,
   0.314,
   0.314,
   0.314,
   0.314,
   0.314,
   0.314};
   Double_t mu_phi_total_errors_fely3036[10] = {
   7.589576,
   7.930022,
   6.946969,
   8.789007,
   8.280316,
   7.419496,
   7.351371,
   7.897238,
   8.078681,
   7.732172};
   Double_t mu_phi_total_errors_fehx3036[10] = {
   0.314,
   0.314,
   0.314,
   0.314,
   0.314,
   0.314,
   0.314,
   0.314,
   0.314,
   0.314};
   Double_t mu_phi_total_errors_fehy3036[10] = {
   7.589576,
   7.930022,
   6.946969,
   8.789007,
   8.280316,
   7.419496,
   7.351371,
   7.897238,
   8.078681,
   7.732172};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(10,mu_phi_total_errors_fx3036,mu_phi_total_errors_fy3036,mu_phi_total_errors_felx3036,mu_phi_total_errors_fehx3036,mu_phi_total_errors_fely3036,mu_phi_total_errors_fehy3036);
   grae->SetName("mu_phi_total_errors");
   grae->SetTitle("Graph");
   grae->SetFillColor(1);
   grae->SetFillStyle(3013);
   grae->SetMarkerStyle(0);
   
   TH1F *Graph_mu_phi_total_errors3036 = new TH1F("Graph_mu_phi_total_errors3036","Graph",100,-3.768,3.768);
   Graph_mu_phi_total_errors3036->SetMinimum(264.6574);
   Graph_mu_phi_total_errors3036->SetMaximum(295.5966);
   Graph_mu_phi_total_errors3036->SetDirectory(0);
   Graph_mu_phi_total_errors3036->SetStats(0);
   Graph_mu_phi_total_errors3036->SetLineStyle(0);
   Graph_mu_phi_total_errors3036->SetMarkerStyle(20);
   Graph_mu_phi_total_errors3036->GetXaxis()->SetLabelFont(42);
   Graph_mu_phi_total_errors3036->GetXaxis()->SetLabelOffset(0.007);
   Graph_mu_phi_total_errors3036->GetXaxis()->SetLabelSize(0.05);
   Graph_mu_phi_total_errors3036->GetXaxis()->SetTitleSize(0.06);
   Graph_mu_phi_total_errors3036->GetXaxis()->SetTitleOffset(0.9);
   Graph_mu_phi_total_errors3036->GetXaxis()->SetTitleFont(42);
   Graph_mu_phi_total_errors3036->GetYaxis()->SetLabelFont(42);
   Graph_mu_phi_total_errors3036->GetYaxis()->SetLabelOffset(0.007);
   Graph_mu_phi_total_errors3036->GetYaxis()->SetLabelSize(0.05);
   Graph_mu_phi_total_errors3036->GetYaxis()->SetTitleSize(0.06);
   Graph_mu_phi_total_errors3036->GetYaxis()->SetTitleOffset(1.35);
   Graph_mu_phi_total_errors3036->GetYaxis()->SetTitleFont(42);
   Graph_mu_phi_total_errors3036->GetZaxis()->SetLabelFont(42);
   Graph_mu_phi_total_errors3036->GetZaxis()->SetLabelOffset(0.007);
   Graph_mu_phi_total_errors3036->GetZaxis()->SetLabelSize(0.05);
   Graph_mu_phi_total_errors3036->GetZaxis()->SetTitleSize(0.06);
   Graph_mu_phi_total_errors3036->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_mu_phi_total_errors3036);
   
   grae->Draw("pe2 ");
   
   Double_t mu_phi_data_graph_fx3037[10] = {
   -2.826,
   -2.198,
   -1.57,
   -0.942,
   -0.314,
   0.314,
   0.942,
   1.57,
   2.198,
   2.826};
   Double_t mu_phi_data_graph_fy3037[10] = {
   281,
   270,
   256,
   298,
   263,
   279,
   281,
   273,
   289,
   323};
   Double_t mu_phi_data_graph_felx3037[10] = {
   0.314,
   0.314,
   0.314,
   0.314,
   0.314,
   0.314,
   0.314,
   0.314,
   0.314,
   0.314};
   Double_t mu_phi_data_graph_fely3037[10] = {
   16.75343,
   16.42185,
   15.98989,
   17.25336,
   16.20731,
   16.69364,
   16.75343,
   16.51294,
   16.99052,
   17.96328};
   Double_t mu_phi_data_graph_fehx3037[10] = {
   0.314,
   0.314,
   0.314,
   0.314,
   0.314,
   0.314,
   0.314,
   0.314,
   0.314,
   0.314};
   Double_t mu_phi_data_graph_fehy3037[10] = {
   17.78334,
   17.45235,
   17.02121,
   18.28239,
   17.23821,
   17.72364,
   17.78334,
   17.54328,
   18.02001,
   18.99117};
   grae = new TGraphAsymmErrors(10,mu_phi_data_graph_fx3037,mu_phi_data_graph_fy3037,mu_phi_data_graph_felx3037,mu_phi_data_graph_fehx3037,mu_phi_data_graph_fely3037,mu_phi_data_graph_fehy3037);
   grae->SetName("mu_phi_data_graph");
   grae->SetTitle("Graph");
   grae->SetFillStyle(1000);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.1);
   
   TH1F *Graph_mu_phi_data_graph3037 = new TH1F("Graph_mu_phi_data_graph3037","Graph",100,-3.768,3.768);
   Graph_mu_phi_data_graph3037->SetMinimum(229.812);
   Graph_mu_phi_data_graph3037->SetMaximum(352.1893);
   Graph_mu_phi_data_graph3037->SetDirectory(0);
   Graph_mu_phi_data_graph3037->SetStats(0);
   Graph_mu_phi_data_graph3037->SetLineStyle(0);
   Graph_mu_phi_data_graph3037->SetMarkerStyle(20);
   Graph_mu_phi_data_graph3037->GetXaxis()->SetLabelFont(42);
   Graph_mu_phi_data_graph3037->GetXaxis()->SetLabelOffset(0.007);
   Graph_mu_phi_data_graph3037->GetXaxis()->SetLabelSize(0.05);
   Graph_mu_phi_data_graph3037->GetXaxis()->SetTitleSize(0.06);
   Graph_mu_phi_data_graph3037->GetXaxis()->SetTitleOffset(0.9);
   Graph_mu_phi_data_graph3037->GetXaxis()->SetTitleFont(42);
   Graph_mu_phi_data_graph3037->GetYaxis()->SetLabelFont(42);
   Graph_mu_phi_data_graph3037->GetYaxis()->SetLabelOffset(0.007);
   Graph_mu_phi_data_graph3037->GetYaxis()->SetLabelSize(0.05);
   Graph_mu_phi_data_graph3037->GetYaxis()->SetTitleSize(0.06);
   Graph_mu_phi_data_graph3037->GetYaxis()->SetTitleOffset(1.35);
   Graph_mu_phi_data_graph3037->GetYaxis()->SetTitleFont(42);
   Graph_mu_phi_data_graph3037->GetZaxis()->SetLabelFont(42);
   Graph_mu_phi_data_graph3037->GetZaxis()->SetLabelOffset(0.007);
   Graph_mu_phi_data_graph3037->GetZaxis()->SetLabelSize(0.05);
   Graph_mu_phi_data_graph3037->GetZaxis()->SetTitleSize(0.06);
   Graph_mu_phi_data_graph3037->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_mu_phi_data_graph3037);
   
   grae->Draw("pz ");
   
   TLegend *leg = new TLegend(0.62,0.628,0.9,0.91,NULL,"brNDC");
   leg->SetBorderSize(1);
   leg->SetTextSize(0.036);
   leg->SetLineColor(0);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("mu_phi_data","Data","LPE");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1.1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("mu_phi_prompt_WZ_stack_5","WZ","F");

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
   entry=leg->AddEntry("mu_phi_prompt_ZZ_stack_4","qqZZ","F");

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
   entry=leg->AddEntry("mu_phi_fakes_DY_stack_3","Fakes DY","F");

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
   entry=leg->AddEntry("mu_phi_fakes_TT_stack_2","Fakes TT","F");

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
   entry=leg->AddEntry("mu_phi_total_errors","Total unc.","F");
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
   mu_phi_canvas->cd();
  
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
   
   TH1D *mu_phi_total__31 = new TH1D("mu_phi_total__31","dummy",10,-3.14,3.14);
   mu_phi_total__31->SetBinContent(0,3187.888);
   mu_phi_total__31->SetBinContent(1,1);
   mu_phi_total__31->SetBinContent(2,1);
   mu_phi_total__31->SetBinContent(3,1);
   mu_phi_total__31->SetBinContent(4,1);
   mu_phi_total__31->SetBinContent(5,1);
   mu_phi_total__31->SetBinContent(6,1);
   mu_phi_total__31->SetBinContent(7,1);
   mu_phi_total__31->SetBinContent(8,1);
   mu_phi_total__31->SetBinContent(9,1);
   mu_phi_total__31->SetBinContent(10,1);
   mu_phi_total__31->SetBinContent(11,0.45224);
   mu_phi_total__31->SetBinError(0,26.72745);
   mu_phi_total__31->SetBinError(11,0.2022479);
   mu_phi_total__31->SetMinimum(0.5);
   mu_phi_total__31->SetMaximum(2);
   mu_phi_total__31->SetEntries(60522);

   ci = TColor::GetColor("#00cc00");
   mu_phi_total__31->SetFillColor(ci);

   ci = TColor::GetColor("#6666ff");
   mu_phi_total__31->SetMarkerColor(ci);
   mu_phi_total__31->SetMarkerSize(1.1);
   mu_phi_total__31->GetXaxis()->SetTitle("#phi(#mu)");
   mu_phi_total__31->GetXaxis()->SetMoreLogLabels();
   mu_phi_total__31->GetXaxis()->SetLabelFont(42);
   mu_phi_total__31->GetXaxis()->SetLabelOffset(0.015);
   mu_phi_total__31->GetXaxis()->SetLabelSize(0.1);
   mu_phi_total__31->GetXaxis()->SetTitleSize(0.14);
   mu_phi_total__31->GetXaxis()->SetTitleFont(42);
   mu_phi_total__31->GetYaxis()->SetTitle("Data/pred.");
   mu_phi_total__31->GetYaxis()->SetDecimals();
   mu_phi_total__31->GetYaxis()->SetNdivisions(505);
   mu_phi_total__31->GetYaxis()->SetLabelFont(42);
   mu_phi_total__31->GetYaxis()->SetLabelOffset(0.01);
   mu_phi_total__31->GetYaxis()->SetLabelSize(0.11);
   mu_phi_total__31->GetYaxis()->SetTitleSize(0.14);
   mu_phi_total__31->GetYaxis()->SetTitleOffset(0.62);
   mu_phi_total__31->GetYaxis()->SetTitleFont(42);
   mu_phi_total__31->GetZaxis()->SetLabelFont(42);
   mu_phi_total__31->GetZaxis()->SetLabelOffset(0.007);
   mu_phi_total__31->GetZaxis()->SetLabelSize(0.05);
   mu_phi_total__31->GetZaxis()->SetTitleSize(0.06);
   mu_phi_total__31->GetZaxis()->SetTitleFont(42);
   mu_phi_total__31->Draw("AXIS");
   
   Double_t mu_phi_total_errors_fx3038[10] = {
   -2.826,
   -2.198,
   -1.57,
   -0.942,
   -0.314,
   0.314,
   0.942,
   1.57,
   2.198,
   2.826};
   Double_t mu_phi_total_errors_fy3038[10] = {
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
   Double_t mu_phi_total_errors_felx3038[10] = {
   0.314,
   0.314,
   0.314,
   0.314,
   0.314,
   0.314,
   0.314,
   0.314,
   0.314,
   0.314};
   Double_t mu_phi_total_errors_fely3038[10] = {
   0.02659009,
   0.02837927,
   0.0252238,
   0.03095106,
   0.02940645,
   0.02602315,
   0.02672508,
   0.02850606,
   0.02934348,
   0.02790566};
   Double_t mu_phi_total_errors_fehx3038[10] = {
   0.314,
   0.314,
   0.314,
   0.314,
   0.314,
   0.314,
   0.314,
   0.314,
   0.314,
   0.314};
   Double_t mu_phi_total_errors_fehy3038[10] = {
   0.02659009,
   0.02837927,
   0.0252238,
   0.03095106,
   0.02940645,
   0.02602315,
   0.02672508,
   0.02850606,
   0.02934348,
   0.02790566};
   grae = new TGraphAsymmErrors(10,mu_phi_total_errors_fx3038,mu_phi_total_errors_fy3038,mu_phi_total_errors_felx3038,mu_phi_total_errors_fehx3038,mu_phi_total_errors_fely3038,mu_phi_total_errors_fehy3038);
   grae->SetName("mu_phi_total_errors");
   grae->SetTitle("Graph");

   ci = TColor::GetColor("#00ffff");
   grae->SetFillColor(ci);

   ci = TColor::GetColor("#00ffff");
   grae->SetMarkerColor(ci);
   grae->Draw("e2");
   
   Double_t mu_phi_total_errors_fx3039[10] = {
   -2.826,
   -2.198,
   -1.57,
   -0.942,
   -0.314,
   0.314,
   0.942,
   1.57,
   2.198,
   2.826};
   Double_t mu_phi_total_errors_fy3039[10] = {
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
   Double_t mu_phi_total_errors_felx3039[10] = {
   0.314,
   0.314,
   0.314,
   0.314,
   0.314,
   0.314,
   0.314,
   0.314,
   0.314,
   0.314};
   Double_t mu_phi_total_errors_fely3039[10] = {
   0.02659009,
   0.02837927,
   0.0252238,
   0.03095106,
   0.02940645,
   0.02602315,
   0.02672508,
   0.02850606,
   0.02934348,
   0.02790566};
   Double_t mu_phi_total_errors_fehx3039[10] = {
   0.314,
   0.314,
   0.314,
   0.314,
   0.314,
   0.314,
   0.314,
   0.314,
   0.314,
   0.314};
   Double_t mu_phi_total_errors_fehy3039[10] = {
   0.02659009,
   0.02837927,
   0.0252238,
   0.03095106,
   0.02940645,
   0.02602315,
   0.02672508,
   0.02850606,
   0.02934348,
   0.02790566};
   grae = new TGraphAsymmErrors(10,mu_phi_total_errors_fx3039,mu_phi_total_errors_fy3039,mu_phi_total_errors_felx3039,mu_phi_total_errors_fehx3039,mu_phi_total_errors_fely3039,mu_phi_total_errors_fehy3039);
   grae->SetName("mu_phi_total_errors");
   grae->SetTitle("Graph");

   ci = TColor::GetColor("#6666ff");
   grae->SetFillColor(ci);

   ci = TColor::GetColor("#6666ff");
   grae->SetMarkerColor(ci);
   grae->Draw("e2 ");
   
   TH1D *mu_phi_total__32 = new TH1D("mu_phi_total__32","dummy",10,-3.14,3.14);
   mu_phi_total__32->SetBinContent(0,3187.888);
   mu_phi_total__32->SetBinContent(1,1);
   mu_phi_total__32->SetBinContent(2,1);
   mu_phi_total__32->SetBinContent(3,1);
   mu_phi_total__32->SetBinContent(4,1);
   mu_phi_total__32->SetBinContent(5,1);
   mu_phi_total__32->SetBinContent(6,1);
   mu_phi_total__32->SetBinContent(7,1);
   mu_phi_total__32->SetBinContent(8,1);
   mu_phi_total__32->SetBinContent(9,1);
   mu_phi_total__32->SetBinContent(10,1);
   mu_phi_total__32->SetBinContent(11,0.45224);
   mu_phi_total__32->SetBinError(0,26.72745);
   mu_phi_total__32->SetBinError(11,0.2022479);
   mu_phi_total__32->SetMinimum(0.5);
   mu_phi_total__32->SetMaximum(2);
   mu_phi_total__32->SetEntries(60522);

   ci = TColor::GetColor("#00cc00");
   mu_phi_total__32->SetFillColor(ci);

   ci = TColor::GetColor("#6666ff");
   mu_phi_total__32->SetMarkerColor(ci);
   mu_phi_total__32->SetMarkerSize(1.1);
   mu_phi_total__32->GetXaxis()->SetTitle("#phi(#mu)");
   mu_phi_total__32->GetXaxis()->SetMoreLogLabels();
   mu_phi_total__32->GetXaxis()->SetLabelFont(42);
   mu_phi_total__32->GetXaxis()->SetLabelOffset(0.015);
   mu_phi_total__32->GetXaxis()->SetLabelSize(0.1);
   mu_phi_total__32->GetXaxis()->SetTitleSize(0.14);
   mu_phi_total__32->GetXaxis()->SetTitleFont(42);
   mu_phi_total__32->GetYaxis()->SetTitle("Data/pred.");
   mu_phi_total__32->GetYaxis()->SetDecimals();
   mu_phi_total__32->GetYaxis()->SetNdivisions(505);
   mu_phi_total__32->GetYaxis()->SetLabelFont(42);
   mu_phi_total__32->GetYaxis()->SetLabelOffset(0.01);
   mu_phi_total__32->GetYaxis()->SetLabelSize(0.11);
   mu_phi_total__32->GetYaxis()->SetTitleSize(0.14);
   mu_phi_total__32->GetYaxis()->SetTitleOffset(0.62);
   mu_phi_total__32->GetYaxis()->SetTitleFont(42);
   mu_phi_total__32->GetZaxis()->SetLabelFont(42);
   mu_phi_total__32->GetZaxis()->SetLabelOffset(0.007);
   mu_phi_total__32->GetZaxis()->SetLabelSize(0.05);
   mu_phi_total__32->GetZaxis()->SetTitleSize(0.06);
   mu_phi_total__32->GetZaxis()->SetTitleFont(42);
   mu_phi_total__32->Draw("AXIS SAME");
   TLine *line = new TLine(-3.14,1,3.14,1);
   line->SetLineColor(58);
   line->SetLineWidth(2);
   line->Draw();
   
   Double_t data_div_fx3040[10] = {
   -2.826,
   -2.198,
   -1.57,
   -0.942,
   -0.314,
   0.314,
   0.942,
   1.57,
   2.198,
   2.826};
   Double_t data_div_fy3040[10] = {
   0.9844839,
   0.9662524,
   0.9295123,
   1.049426,
   0.9340099,
   0.9785648,
   1.021544,
   0.9854274,
   1.049709,
   1.165717};
   Double_t data_div_felx3040[10] = {
   0.314,
   0.314,
   0.314,
   0.314,
   0.314,
   0.314,
   0.314,
   0.314,
   0.314,
   0.314};
   Double_t data_div_fely3040[10] = {
   0.05869568,
   0.05876907,
   0.0580578,
   0.06075881,
   0.05755811,
   0.05855127,
   0.06090523,
   0.05960551,
   0.06171318,
   0.06483006};
   Double_t data_div_fehx3040[10] = {
   0.314,
   0.314,
   0.314,
   0.314,
   0.314,
   0.314,
   0.314,
   0.314,
   0.314,
   0.314};
   Double_t data_div_fehy3040[10] = {
   0.06230394,
   0.06245695,
   0.06180245,
   0.06438263,
   0.06121925,
   0.06216392,
   0.06464932,
   0.06332463,
   0.06545249,
   0.06853974};
   grae = new TGraphAsymmErrors(10,data_div_fx3040,data_div_fy3040,data_div_felx3040,data_div_fehx3040,data_div_fely3040,data_div_fehy3040);
   grae->SetName("data_div");
   grae->SetTitle("Graph");
   grae->SetFillStyle(1000);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.1);
   
   TH1F *Graph_mu_phi_data_graph3040 = new TH1F("Graph_mu_phi_data_graph3040","Graph",100,-3.768,3.768);
   Graph_mu_phi_data_graph3040->SetMinimum(229.812);
   Graph_mu_phi_data_graph3040->SetMaximum(352.1893);
   Graph_mu_phi_data_graph3040->SetDirectory(0);
   Graph_mu_phi_data_graph3040->SetStats(0);
   Graph_mu_phi_data_graph3040->SetLineStyle(0);
   Graph_mu_phi_data_graph3040->SetMarkerStyle(20);
   Graph_mu_phi_data_graph3040->GetXaxis()->SetLabelFont(42);
   Graph_mu_phi_data_graph3040->GetXaxis()->SetLabelOffset(0.007);
   Graph_mu_phi_data_graph3040->GetXaxis()->SetLabelSize(0.05);
   Graph_mu_phi_data_graph3040->GetXaxis()->SetTitleSize(0.06);
   Graph_mu_phi_data_graph3040->GetXaxis()->SetTitleOffset(0.9);
   Graph_mu_phi_data_graph3040->GetXaxis()->SetTitleFont(42);
   Graph_mu_phi_data_graph3040->GetYaxis()->SetLabelFont(42);
   Graph_mu_phi_data_graph3040->GetYaxis()->SetLabelOffset(0.007);
   Graph_mu_phi_data_graph3040->GetYaxis()->SetLabelSize(0.05);
   Graph_mu_phi_data_graph3040->GetYaxis()->SetTitleSize(0.06);
   Graph_mu_phi_data_graph3040->GetYaxis()->SetTitleOffset(1.35);
   Graph_mu_phi_data_graph3040->GetYaxis()->SetTitleFont(42);
   Graph_mu_phi_data_graph3040->GetZaxis()->SetLabelFont(42);
   Graph_mu_phi_data_graph3040->GetZaxis()->SetLabelOffset(0.007);
   Graph_mu_phi_data_graph3040->GetZaxis()->SetLabelSize(0.05);
   Graph_mu_phi_data_graph3040->GetZaxis()->SetTitleSize(0.06);
   Graph_mu_phi_data_graph3040->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_mu_phi_data_graph3040);
   
   grae->Draw("pz ");
   
   leg = new TLegend(0,0,0,0,NULL,"brNDC");
   leg->SetBorderSize(1);
   leg->SetTextSize(0.084);
   leg->SetLineColor(0);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   entry=leg->AddEntry("mu_phi_total_errors","stat. unc.","F");
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
   entry=leg->AddEntry("mu_phi_total_errors","total unc.","F");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   leg->Draw();
   pad2->Modified();
   mu_phi_canvas->cd();
   mu_phi_canvas->Modified();
   mu_phi_canvas->cd();
   mu_phi_canvas->SetSelected(mu_phi_canvas);
}
