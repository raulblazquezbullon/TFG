void el_phi()
{
//=========Macro generated from canvas: el_phi_canvas/el_phi
//=========  (Fri Nov 18 12:57:51 2022) by ROOT version 6.12/07
   TCanvas *el_phi_canvas = new TCanvas("el_phi_canvas", "el_phi",0,0,600,750);
   gStyle->SetOptFit(1);
   gStyle->SetOptStat(0);
   gStyle->SetOptTitle(0);
   el_phi_canvas->SetHighLightColor(2);
   el_phi_canvas->Range(0,0,1,1);
   el_phi_canvas->SetFillColor(0);
   el_phi_canvas->SetBorderMode(0);
   el_phi_canvas->SetBorderSize(2);
   el_phi_canvas->SetTickx(1);
   el_phi_canvas->SetTicky(1);
   el_phi_canvas->SetLeftMargin(0.18);
   el_phi_canvas->SetRightMargin(0.04);
   el_phi_canvas->SetBottomMargin(0.13);
   el_phi_canvas->SetFrameFillStyle(0);
   el_phi_canvas->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: pad1
   TPad *pad1 = new TPad("pad1", "pad1",0,0.3,1,1);
   pad1->Draw();
   pad1->cd();
   pad1->Range(-4.589231,-7.506791,3.462051,292.7649);
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
   
   TH1D *el_phi_total__17 = new TH1D("el_phi_total__17","dummy",10,-3.14,3.14);
   el_phi_total__17->SetBinContent(0,4292.649);
   el_phi_total__17->SetBinContent(1,170.6457);
   el_phi_total__17->SetBinContent(2,166.3805);
   el_phi_total__17->SetBinContent(3,167.6923);
   el_phi_total__17->SetBinContent(4,161.5122);
   el_phi_total__17->SetBinContent(5,175.2026);
   el_phi_total__17->SetBinContent(6,163.5587);
   el_phi_total__17->SetBinContent(7,177.79);
   el_phi_total__17->SetBinContent(8,166.8136);
   el_phi_total__17->SetBinContent(9,169.0916);
   el_phi_total__17->SetBinContent(10,172.1951);
   el_phi_total__17->SetBinContent(11,0.2473902);
   el_phi_total__17->SetBinError(0,30.70094);
   el_phi_total__17->SetBinError(1,6.194373);
   el_phi_total__17->SetBinError(2,5.443959);
   el_phi_total__17->SetBinError(3,6.392674);
   el_phi_total__17->SetBinError(4,5.652759);
   el_phi_total__17->SetBinError(5,6.460398);
   el_phi_total__17->SetBinError(6,5.678293);
   el_phi_total__17->SetBinError(7,6.8937);
   el_phi_total__17->SetBinError(8,5.944702);
   el_phi_total__17->SetBinError(9,6.183768);
   el_phi_total__17->SetBinError(10,6.854779);
   el_phi_total__17->SetBinError(11,0.1441637);
   el_phi_total__17->SetMinimum(0);
   el_phi_total__17->SetMaximum(274.7486);
   el_phi_total__17->SetEntries(60512);
   el_phi_total__17->SetDirectory(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#00cc00");
   el_phi_total__17->SetFillColor(ci);
   el_phi_total__17->SetMarkerStyle(20);
   el_phi_total__17->SetMarkerSize(1.1);
   el_phi_total__17->GetXaxis()->SetTitle("#phi(e)");
   el_phi_total__17->GetXaxis()->SetMoreLogLabels();
   el_phi_total__17->GetXaxis()->SetLabelFont(42);
   el_phi_total__17->GetXaxis()->SetLabelOffset(999);
   el_phi_total__17->GetXaxis()->SetLabelSize(0.05);
   el_phi_total__17->GetXaxis()->SetTitleSize(0.05);
   el_phi_total__17->GetXaxis()->SetTitleOffset(999);
   el_phi_total__17->GetXaxis()->SetTitleFont(42);
   el_phi_total__17->GetYaxis()->SetTitle("Electrons");
   el_phi_total__17->GetYaxis()->SetLabelFont(42);
   el_phi_total__17->GetYaxis()->SetLabelOffset(0.007);
   el_phi_total__17->GetYaxis()->SetLabelSize(0.05);
   el_phi_total__17->GetYaxis()->SetTitleSize(0.06);
   el_phi_total__17->GetYaxis()->SetTitleOffset(1.48);
   el_phi_total__17->GetYaxis()->SetTitleFont(42);
   el_phi_total__17->GetZaxis()->SetLabelFont(42);
   el_phi_total__17->GetZaxis()->SetLabelOffset(0.007);
   el_phi_total__17->GetZaxis()->SetLabelSize(0.05);
   el_phi_total__17->GetZaxis()->SetTitleSize(0.06);
   el_phi_total__17->GetZaxis()->SetTitleFont(42);
   el_phi_total__17->Draw("HIST");
   
   THStack *el_phi_stack = new THStack();
   el_phi_stack->SetName("el_phi_stack");
   el_phi_stack->SetTitle("el_phi");
   
   TH1F *el_phi_stack_stack_5 = new TH1F("el_phi_stack_stack_5","el_phi",10,-3.14,3.14);
   el_phi_stack_stack_5->SetMinimum(0);
   el_phi_stack_stack_5->SetMaximum(186.6795);
   el_phi_stack_stack_5->SetDirectory(0);
   el_phi_stack_stack_5->SetStats(0);
   el_phi_stack_stack_5->SetLineStyle(0);
   el_phi_stack_stack_5->SetMarkerStyle(20);
   el_phi_stack_stack_5->GetXaxis()->SetLabelFont(42);
   el_phi_stack_stack_5->GetXaxis()->SetLabelOffset(0.007);
   el_phi_stack_stack_5->GetXaxis()->SetLabelSize(0.05);
   el_phi_stack_stack_5->GetXaxis()->SetTitleSize(0.06);
   el_phi_stack_stack_5->GetXaxis()->SetTitleOffset(0.9);
   el_phi_stack_stack_5->GetXaxis()->SetTitleFont(42);
   el_phi_stack_stack_5->GetYaxis()->SetLabelFont(42);
   el_phi_stack_stack_5->GetYaxis()->SetLabelOffset(0.007);
   el_phi_stack_stack_5->GetYaxis()->SetLabelSize(0.05);
   el_phi_stack_stack_5->GetYaxis()->SetTitleSize(0.06);
   el_phi_stack_stack_5->GetYaxis()->SetTitleOffset(1.35);
   el_phi_stack_stack_5->GetYaxis()->SetTitleFont(42);
   el_phi_stack_stack_5->GetZaxis()->SetLabelFont(42);
   el_phi_stack_stack_5->GetZaxis()->SetLabelOffset(0.007);
   el_phi_stack_stack_5->GetZaxis()->SetLabelSize(0.05);
   el_phi_stack_stack_5->GetZaxis()->SetTitleSize(0.06);
   el_phi_stack_stack_5->GetZaxis()->SetTitleFont(42);
   el_phi_stack->SetHistogram(el_phi_stack_stack_5);
   
   
   TH1D *el_phi_fakes_VV_stack_1 = new TH1D("el_phi_fakes_VV_stack_1","dummy",10,-3.14,3.14);
   el_phi_fakes_VV_stack_1->SetBinContent(0,1.555094);
   el_phi_fakes_VV_stack_1->SetBinContent(2,0.1943867);
   el_phi_fakes_VV_stack_1->SetBinContent(3,0.09719337);
   el_phi_fakes_VV_stack_1->SetBinContent(4,0.09719337);
   el_phi_fakes_VV_stack_1->SetBinContent(5,0.1943867);
   el_phi_fakes_VV_stack_1->SetBinContent(6,0.1943867);
   el_phi_fakes_VV_stack_1->SetBinContent(7,0.09719337);
   el_phi_fakes_VV_stack_1->SetBinContent(8,0.1943867);
   el_phi_fakes_VV_stack_1->SetBinContent(10,0.09719337);
   el_phi_fakes_VV_stack_1->SetBinError(0,0.3887735);
   el_phi_fakes_VV_stack_1->SetBinError(2,0.1374522);
   el_phi_fakes_VV_stack_1->SetBinError(3,0.09719337);
   el_phi_fakes_VV_stack_1->SetBinError(4,0.09719337);
   el_phi_fakes_VV_stack_1->SetBinError(5,0.1374522);
   el_phi_fakes_VV_stack_1->SetBinError(6,0.1374522);
   el_phi_fakes_VV_stack_1->SetBinError(7,0.09719337);
   el_phi_fakes_VV_stack_1->SetBinError(8,0.1374522);
   el_phi_fakes_VV_stack_1->SetBinError(10,0.09719337);
   el_phi_fakes_VV_stack_1->SetEntries(28);

   ci = TColor::GetColor("#2e3294");
   el_phi_fakes_VV_stack_1->SetFillColor(ci);
   el_phi_fakes_VV_stack_1->SetMarkerStyle(0);
   el_phi_fakes_VV_stack_1->SetMarkerSize(1.1);
   el_phi_fakes_VV_stack_1->GetXaxis()->SetTitle("#phi(e)");
   el_phi_fakes_VV_stack_1->GetXaxis()->SetMoreLogLabels();
   el_phi_fakes_VV_stack_1->GetXaxis()->SetLabelFont(42);
   el_phi_fakes_VV_stack_1->GetXaxis()->SetLabelOffset(0.007);
   el_phi_fakes_VV_stack_1->GetXaxis()->SetLabelSize(0.05);
   el_phi_fakes_VV_stack_1->GetXaxis()->SetTitleSize(0.06);
   el_phi_fakes_VV_stack_1->GetXaxis()->SetTitleOffset(0.9);
   el_phi_fakes_VV_stack_1->GetXaxis()->SetTitleFont(42);
   el_phi_fakes_VV_stack_1->GetYaxis()->SetTitle("Electrons");
   el_phi_fakes_VV_stack_1->GetYaxis()->SetLabelFont(42);
   el_phi_fakes_VV_stack_1->GetYaxis()->SetLabelOffset(0.007);
   el_phi_fakes_VV_stack_1->GetYaxis()->SetLabelSize(0.05);
   el_phi_fakes_VV_stack_1->GetYaxis()->SetTitleSize(0.06);
   el_phi_fakes_VV_stack_1->GetYaxis()->SetTitleOffset(1.35);
   el_phi_fakes_VV_stack_1->GetYaxis()->SetTitleFont(42);
   el_phi_fakes_VV_stack_1->GetZaxis()->SetLabelFont(42);
   el_phi_fakes_VV_stack_1->GetZaxis()->SetLabelOffset(0.007);
   el_phi_fakes_VV_stack_1->GetZaxis()->SetLabelSize(0.05);
   el_phi_fakes_VV_stack_1->GetZaxis()->SetTitleSize(0.06);
   el_phi_fakes_VV_stack_1->GetZaxis()->SetTitleFont(42);
   el_phi_stack->Add(el_phi_fakes_VV_stack_1,"");
   
   TH1D *el_phi_fakes_TT_stack_2 = new TH1D("el_phi_fakes_TT_stack_2","dummy",10,-3.14,3.14);
   el_phi_fakes_TT_stack_2->SetBinContent(0,166.4003);
   el_phi_fakes_TT_stack_2->SetBinContent(1,7.006708);
   el_phi_fakes_TT_stack_2->SetBinContent(2,4.987067);
   el_phi_fakes_TT_stack_2->SetBinContent(3,5.319538);
   el_phi_fakes_TT_stack_2->SetBinContent(4,4.654596);
   el_phi_fakes_TT_stack_2->SetBinContent(5,5.917986);
   el_phi_fakes_TT_stack_2->SetBinContent(6,5.319538);
   el_phi_fakes_TT_stack_2->SetBinContent(7,4.633756);
   el_phi_fakes_TT_stack_2->SetBinContent(8,5.498181);
   el_phi_fakes_TT_stack_2->SetBinContent(9,5.452526);
   el_phi_fakes_TT_stack_2->SetBinContent(10,4.920573);
   el_phi_fakes_TT_stack_2->SetBinContent(11,0.06649422);
   el_phi_fakes_TT_stack_2->SetBinError(0,3.368489);
   el_phi_fakes_TT_stack_2->SetBinError(1,0.7027315);
   el_phi_fakes_TT_stack_2->SetBinError(2,0.5758569);
   el_phi_fakes_TT_stack_2->SetBinError(3,0.5947424);
   el_phi_fakes_TT_stack_2->SetBinError(4,0.5563306);
   el_phi_fakes_TT_stack_2->SetBinError(5,0.6273053);
   el_phi_fakes_TT_stack_2->SetBinError(6,0.5947424);
   el_phi_fakes_TT_stack_2->SetBinError(7,0.5596767);
   el_phi_fakes_TT_stack_2->SetBinError(8,0.6088656);
   el_phi_fakes_TT_stack_2->SetBinError(9,0.6021308);
   el_phi_fakes_TT_stack_2->SetBinError(10,0.5720049);
   el_phi_fakes_TT_stack_2->SetBinError(11,0.06649422);
   el_phi_fakes_TT_stack_2->SetEntries(3332);

   ci = TColor::GetColor("#666666");
   el_phi_fakes_TT_stack_2->SetFillColor(ci);
   el_phi_fakes_TT_stack_2->SetMarkerStyle(0);
   el_phi_fakes_TT_stack_2->SetMarkerSize(1.1);
   el_phi_fakes_TT_stack_2->GetXaxis()->SetTitle("#phi(e)");
   el_phi_fakes_TT_stack_2->GetXaxis()->SetMoreLogLabels();
   el_phi_fakes_TT_stack_2->GetXaxis()->SetLabelFont(42);
   el_phi_fakes_TT_stack_2->GetXaxis()->SetLabelOffset(0.007);
   el_phi_fakes_TT_stack_2->GetXaxis()->SetLabelSize(0.05);
   el_phi_fakes_TT_stack_2->GetXaxis()->SetTitleSize(0.06);
   el_phi_fakes_TT_stack_2->GetXaxis()->SetTitleOffset(0.9);
   el_phi_fakes_TT_stack_2->GetXaxis()->SetTitleFont(42);
   el_phi_fakes_TT_stack_2->GetYaxis()->SetTitle("Electrons");
   el_phi_fakes_TT_stack_2->GetYaxis()->SetLabelFont(42);
   el_phi_fakes_TT_stack_2->GetYaxis()->SetLabelOffset(0.007);
   el_phi_fakes_TT_stack_2->GetYaxis()->SetLabelSize(0.05);
   el_phi_fakes_TT_stack_2->GetYaxis()->SetTitleSize(0.06);
   el_phi_fakes_TT_stack_2->GetYaxis()->SetTitleOffset(1.35);
   el_phi_fakes_TT_stack_2->GetYaxis()->SetTitleFont(42);
   el_phi_fakes_TT_stack_2->GetZaxis()->SetLabelFont(42);
   el_phi_fakes_TT_stack_2->GetZaxis()->SetLabelOffset(0.007);
   el_phi_fakes_TT_stack_2->GetZaxis()->SetLabelSize(0.05);
   el_phi_fakes_TT_stack_2->GetZaxis()->SetTitleSize(0.06);
   el_phi_fakes_TT_stack_2->GetZaxis()->SetTitleFont(42);
   el_phi_stack->Add(el_phi_fakes_TT_stack_2,"");
   
   TH1D *el_phi_fakes_DY_stack_3 = new TH1D("el_phi_fakes_DY_stack_3","dummy",10,-3.14,3.14);
   el_phi_fakes_DY_stack_3->SetBinContent(0,330.1482);
   el_phi_fakes_DY_stack_3->SetBinContent(1,13.75618);
   el_phi_fakes_DY_stack_3->SetBinContent(2,8.597611);
   el_phi_fakes_DY_stack_3->SetBinContent(3,15.4757);
   el_phi_fakes_DY_stack_3->SetBinContent(4,10.31713);
   el_phi_fakes_DY_stack_3->SetBinContent(5,15.4757);
   el_phi_fakes_DY_stack_3->SetBinContent(6,10.31713);
   el_phi_fakes_DY_stack_3->SetBinContent(7,18.91474);
   el_phi_fakes_DY_stack_3->SetBinContent(8,12.03665);
   el_phi_fakes_DY_stack_3->SetBinContent(9,13.75618);
   el_phi_fakes_DY_stack_3->SetBinContent(10,18.91474);
   el_phi_fakes_DY_stack_3->SetBinError(0,23.8264);
   el_phi_fakes_DY_stack_3->SetBinError(1,4.863543);
   el_phi_fakes_DY_stack_3->SetBinError(2,3.844968);
   el_phi_fakes_DY_stack_3->SetBinError(3,5.158566);
   el_phi_fakes_DY_stack_3->SetBinError(4,4.211952);
   el_phi_fakes_DY_stack_3->SetBinError(5,5.158566);
   el_phi_fakes_DY_stack_3->SetBinError(6,4.211952);
   el_phi_fakes_DY_stack_3->SetBinError(7,5.70301);
   el_phi_fakes_DY_stack_3->SetBinError(8,4.549428);
   el_phi_fakes_DY_stack_3->SetBinError(9,4.863543);
   el_phi_fakes_DY_stack_3->SetBinError(10,5.70301);
   el_phi_fakes_DY_stack_3->SetEntries(272);

   ci = TColor::GetColor("#cccccc");
   el_phi_fakes_DY_stack_3->SetFillColor(ci);
   el_phi_fakes_DY_stack_3->SetMarkerStyle(0);
   el_phi_fakes_DY_stack_3->SetMarkerSize(1.1);
   el_phi_fakes_DY_stack_3->GetXaxis()->SetTitle("#phi(e)");
   el_phi_fakes_DY_stack_3->GetXaxis()->SetMoreLogLabels();
   el_phi_fakes_DY_stack_3->GetXaxis()->SetLabelFont(42);
   el_phi_fakes_DY_stack_3->GetXaxis()->SetLabelOffset(0.007);
   el_phi_fakes_DY_stack_3->GetXaxis()->SetLabelSize(0.05);
   el_phi_fakes_DY_stack_3->GetXaxis()->SetTitleSize(0.06);
   el_phi_fakes_DY_stack_3->GetXaxis()->SetTitleOffset(0.9);
   el_phi_fakes_DY_stack_3->GetXaxis()->SetTitleFont(42);
   el_phi_fakes_DY_stack_3->GetYaxis()->SetTitle("Electrons");
   el_phi_fakes_DY_stack_3->GetYaxis()->SetLabelFont(42);
   el_phi_fakes_DY_stack_3->GetYaxis()->SetLabelOffset(0.007);
   el_phi_fakes_DY_stack_3->GetYaxis()->SetLabelSize(0.05);
   el_phi_fakes_DY_stack_3->GetYaxis()->SetTitleSize(0.06);
   el_phi_fakes_DY_stack_3->GetYaxis()->SetTitleOffset(1.35);
   el_phi_fakes_DY_stack_3->GetYaxis()->SetTitleFont(42);
   el_phi_fakes_DY_stack_3->GetZaxis()->SetLabelFont(42);
   el_phi_fakes_DY_stack_3->GetZaxis()->SetLabelOffset(0.007);
   el_phi_fakes_DY_stack_3->GetZaxis()->SetLabelSize(0.05);
   el_phi_fakes_DY_stack_3->GetZaxis()->SetTitleSize(0.06);
   el_phi_fakes_DY_stack_3->GetZaxis()->SetTitleFont(42);
   el_phi_stack->Add(el_phi_fakes_DY_stack_3,"");
   
   TH1D *el_phi_prompt_ZZ_stack_4 = new TH1D("el_phi_prompt_ZZ_stack_4","dummy",10,-3.14,3.14);
   el_phi_prompt_ZZ_stack_4->SetBinContent(0,216.5128);
   el_phi_prompt_ZZ_stack_4->SetBinContent(1,7.155931);
   el_phi_prompt_ZZ_stack_4->SetBinContent(2,7.522902);
   el_phi_prompt_ZZ_stack_4->SetBinContent(3,6.605475);
   el_phi_prompt_ZZ_stack_4->SetBinContent(4,6.972446);
   el_phi_prompt_ZZ_stack_4->SetBinContent(5,8.8073);
   el_phi_prompt_ZZ_stack_4->SetBinContent(6,8.256843);
   el_phi_prompt_ZZ_stack_4->SetBinContent(7,7.889873);
   el_phi_prompt_ZZ_stack_4->SetBinContent(8,8.256843);
   el_phi_prompt_ZZ_stack_4->SetBinContent(9,7.155931);
   el_phi_prompt_ZZ_stack_4->SetBinContent(10,7.706387);
   el_phi_prompt_ZZ_stack_4->SetBinError(0,6.302931);
   el_phi_prompt_ZZ_stack_4->SetBinError(1,1.145866);
   el_phi_prompt_ZZ_stack_4->SetBinError(2,1.17488);
   el_phi_prompt_ZZ_stack_4->SetBinError(3,1.100912);
   el_phi_prompt_ZZ_stack_4->SetBinError(4,1.13108);
   el_phi_prompt_ZZ_stack_4->SetBinError(5,1.271224);
   el_phi_prompt_ZZ_stack_4->SetBinError(6,1.230858);
   el_phi_prompt_ZZ_stack_4->SetBinError(7,1.203194);
   el_phi_prompt_ZZ_stack_4->SetBinError(8,1.230858);
   el_phi_prompt_ZZ_stack_4->SetBinError(9,1.145866);
   el_phi_prompt_ZZ_stack_4->SetBinError(10,1.189121);
   el_phi_prompt_ZZ_stack_4->SetEntries(1596);

   ci = TColor::GetColor("#00cc00");
   el_phi_prompt_ZZ_stack_4->SetFillColor(ci);
   el_phi_prompt_ZZ_stack_4->SetMarkerStyle(0);
   el_phi_prompt_ZZ_stack_4->SetMarkerSize(1.1);
   el_phi_prompt_ZZ_stack_4->GetXaxis()->SetTitle("#phi(e)");
   el_phi_prompt_ZZ_stack_4->GetXaxis()->SetMoreLogLabels();
   el_phi_prompt_ZZ_stack_4->GetXaxis()->SetLabelFont(42);
   el_phi_prompt_ZZ_stack_4->GetXaxis()->SetLabelOffset(0.007);
   el_phi_prompt_ZZ_stack_4->GetXaxis()->SetLabelSize(0.05);
   el_phi_prompt_ZZ_stack_4->GetXaxis()->SetTitleSize(0.06);
   el_phi_prompt_ZZ_stack_4->GetXaxis()->SetTitleOffset(0.9);
   el_phi_prompt_ZZ_stack_4->GetXaxis()->SetTitleFont(42);
   el_phi_prompt_ZZ_stack_4->GetYaxis()->SetTitle("Electrons");
   el_phi_prompt_ZZ_stack_4->GetYaxis()->SetLabelFont(42);
   el_phi_prompt_ZZ_stack_4->GetYaxis()->SetLabelOffset(0.007);
   el_phi_prompt_ZZ_stack_4->GetYaxis()->SetLabelSize(0.05);
   el_phi_prompt_ZZ_stack_4->GetYaxis()->SetTitleSize(0.06);
   el_phi_prompt_ZZ_stack_4->GetYaxis()->SetTitleOffset(1.35);
   el_phi_prompt_ZZ_stack_4->GetYaxis()->SetTitleFont(42);
   el_phi_prompt_ZZ_stack_4->GetZaxis()->SetLabelFont(42);
   el_phi_prompt_ZZ_stack_4->GetZaxis()->SetLabelOffset(0.007);
   el_phi_prompt_ZZ_stack_4->GetZaxis()->SetLabelSize(0.05);
   el_phi_prompt_ZZ_stack_4->GetZaxis()->SetTitleSize(0.06);
   el_phi_prompt_ZZ_stack_4->GetZaxis()->SetTitleFont(42);
   el_phi_stack->Add(el_phi_prompt_ZZ_stack_4,"");
   
   TH1D *el_phi_prompt_WZ_stack_5 = new TH1D("el_phi_prompt_WZ_stack_5","dummy",10,-3.14,3.14);
   el_phi_prompt_WZ_stack_5->SetBinContent(0,3578.032);
   el_phi_prompt_WZ_stack_5->SetBinContent(1,142.7269);
   el_phi_prompt_WZ_stack_5->SetBinContent(2,145.0786);
   el_phi_prompt_WZ_stack_5->SetBinContent(3,140.1944);
   el_phi_prompt_WZ_stack_5->SetBinContent(4,139.4708);
   el_phi_prompt_WZ_stack_5->SetBinContent(5,144.8072);
   el_phi_prompt_WZ_stack_5->SetBinContent(6,139.4708);
   el_phi_prompt_WZ_stack_5->SetBinContent(7,146.2544);
   el_phi_prompt_WZ_stack_5->SetBinContent(8,140.8275);
   el_phi_prompt_WZ_stack_5->SetBinContent(9,142.7269);
   el_phi_prompt_WZ_stack_5->SetBinContent(10,140.5562);
   el_phi_prompt_WZ_stack_5->SetBinContent(11,0.180896);
   el_phi_prompt_WZ_stack_5->SetBinError(0,17.9896);
   el_phi_prompt_WZ_stack_5->SetBinError(1,3.59296);
   el_phi_prompt_WZ_stack_5->SetBinError(2,3.622439);
   el_phi_prompt_WZ_stack_5->SetBinError(3,3.560941);
   el_phi_prompt_WZ_stack_5->SetBinError(4,3.55174);
   el_phi_prompt_WZ_stack_5->SetBinError(5,3.61905);
   el_phi_prompt_WZ_stack_5->SetBinError(6,3.55174);
   el_phi_prompt_WZ_stack_5->SetBinError(7,3.637089);
   el_phi_prompt_WZ_stack_5->SetBinError(8,3.568973);
   el_phi_prompt_WZ_stack_5->SetBinError(9,3.59296);
   el_phi_prompt_WZ_stack_5->SetBinError(10,3.565533);
   el_phi_prompt_WZ_stack_5->SetBinError(11,0.1279128);
   el_phi_prompt_WZ_stack_5->SetEntries(55284);

   ci = TColor::GetColor("#ffcc00");
   el_phi_prompt_WZ_stack_5->SetFillColor(ci);
   el_phi_prompt_WZ_stack_5->SetMarkerStyle(0);
   el_phi_prompt_WZ_stack_5->SetMarkerSize(1.1);
   el_phi_prompt_WZ_stack_5->GetXaxis()->SetTitle("#phi(e)");
   el_phi_prompt_WZ_stack_5->GetXaxis()->SetMoreLogLabels();
   el_phi_prompt_WZ_stack_5->GetXaxis()->SetLabelFont(42);
   el_phi_prompt_WZ_stack_5->GetXaxis()->SetLabelOffset(0.007);
   el_phi_prompt_WZ_stack_5->GetXaxis()->SetLabelSize(0.05);
   el_phi_prompt_WZ_stack_5->GetXaxis()->SetTitleSize(0.06);
   el_phi_prompt_WZ_stack_5->GetXaxis()->SetTitleOffset(0.9);
   el_phi_prompt_WZ_stack_5->GetXaxis()->SetTitleFont(42);
   el_phi_prompt_WZ_stack_5->GetYaxis()->SetTitle("Electrons");
   el_phi_prompt_WZ_stack_5->GetYaxis()->SetLabelFont(42);
   el_phi_prompt_WZ_stack_5->GetYaxis()->SetLabelOffset(0.007);
   el_phi_prompt_WZ_stack_5->GetYaxis()->SetLabelSize(0.05);
   el_phi_prompt_WZ_stack_5->GetYaxis()->SetTitleSize(0.06);
   el_phi_prompt_WZ_stack_5->GetYaxis()->SetTitleOffset(1.35);
   el_phi_prompt_WZ_stack_5->GetYaxis()->SetTitleFont(42);
   el_phi_prompt_WZ_stack_5->GetZaxis()->SetLabelFont(42);
   el_phi_prompt_WZ_stack_5->GetZaxis()->SetLabelOffset(0.007);
   el_phi_prompt_WZ_stack_5->GetZaxis()->SetLabelSize(0.05);
   el_phi_prompt_WZ_stack_5->GetZaxis()->SetTitleSize(0.06);
   el_phi_prompt_WZ_stack_5->GetZaxis()->SetTitleFont(42);
   el_phi_stack->Add(el_phi_prompt_WZ_stack_5,"");
   el_phi_stack->Draw("same hist");
   
   TH1D *el_phi_total__18 = new TH1D("el_phi_total__18","dummy",10,-3.14,3.14);
   el_phi_total__18->SetBinContent(0,4292.649);
   el_phi_total__18->SetBinContent(1,170.6457);
   el_phi_total__18->SetBinContent(2,166.3805);
   el_phi_total__18->SetBinContent(3,167.6923);
   el_phi_total__18->SetBinContent(4,161.5122);
   el_phi_total__18->SetBinContent(5,175.2026);
   el_phi_total__18->SetBinContent(6,163.5587);
   el_phi_total__18->SetBinContent(7,177.79);
   el_phi_total__18->SetBinContent(8,166.8136);
   el_phi_total__18->SetBinContent(9,169.0916);
   el_phi_total__18->SetBinContent(10,172.1951);
   el_phi_total__18->SetBinContent(11,0.2473902);
   el_phi_total__18->SetBinError(0,30.70094);
   el_phi_total__18->SetBinError(1,6.194373);
   el_phi_total__18->SetBinError(2,5.443959);
   el_phi_total__18->SetBinError(3,6.392674);
   el_phi_total__18->SetBinError(4,5.652759);
   el_phi_total__18->SetBinError(5,6.460398);
   el_phi_total__18->SetBinError(6,5.678293);
   el_phi_total__18->SetBinError(7,6.8937);
   el_phi_total__18->SetBinError(8,5.944702);
   el_phi_total__18->SetBinError(9,6.183768);
   el_phi_total__18->SetBinError(10,6.854779);
   el_phi_total__18->SetBinError(11,0.1441637);
   el_phi_total__18->SetMinimum(0);
   el_phi_total__18->SetMaximum(274.7486);
   el_phi_total__18->SetEntries(60512);
   el_phi_total__18->SetDirectory(0);

   ci = TColor::GetColor("#00cc00");
   el_phi_total__18->SetFillColor(ci);
   el_phi_total__18->SetMarkerStyle(20);
   el_phi_total__18->SetMarkerSize(1.1);
   el_phi_total__18->GetXaxis()->SetTitle("#phi(e)");
   el_phi_total__18->GetXaxis()->SetMoreLogLabels();
   el_phi_total__18->GetXaxis()->SetLabelFont(42);
   el_phi_total__18->GetXaxis()->SetLabelOffset(999);
   el_phi_total__18->GetXaxis()->SetLabelSize(0.05);
   el_phi_total__18->GetXaxis()->SetTitleSize(0.05);
   el_phi_total__18->GetXaxis()->SetTitleOffset(999);
   el_phi_total__18->GetXaxis()->SetTitleFont(42);
   el_phi_total__18->GetYaxis()->SetTitle("Electrons");
   el_phi_total__18->GetYaxis()->SetLabelFont(42);
   el_phi_total__18->GetYaxis()->SetLabelOffset(0.007);
   el_phi_total__18->GetYaxis()->SetLabelSize(0.05);
   el_phi_total__18->GetYaxis()->SetTitleSize(0.06);
   el_phi_total__18->GetYaxis()->SetTitleOffset(1.48);
   el_phi_total__18->GetYaxis()->SetTitleFont(42);
   el_phi_total__18->GetZaxis()->SetLabelFont(42);
   el_phi_total__18->GetZaxis()->SetLabelOffset(0.007);
   el_phi_total__18->GetZaxis()->SetLabelSize(0.05);
   el_phi_total__18->GetZaxis()->SetTitleSize(0.06);
   el_phi_total__18->GetZaxis()->SetTitleFont(42);
   el_phi_total__18->Draw("AXIS SAME");
   
   Double_t el_phi_total_errors_fx3021[10] = {
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
   Double_t el_phi_total_errors_fy3021[10] = {
   170.6457,
   166.3805,
   167.6923,
   161.5122,
   175.2026,
   163.5587,
   177.79,
   166.8136,
   169.0916,
   172.1951};
   Double_t el_phi_total_errors_felx3021[10] = {
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
   Double_t el_phi_total_errors_fely3021[10] = {
   6.194373,
   5.443959,
   6.392674,
   5.652759,
   6.460398,
   5.678293,
   6.8937,
   5.944702,
   6.183768,
   6.854779};
   Double_t el_phi_total_errors_fehx3021[10] = {
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
   Double_t el_phi_total_errors_fehy3021[10] = {
   6.194373,
   5.443959,
   6.392674,
   5.652759,
   6.460398,
   5.678293,
   6.8937,
   5.944702,
   6.183768,
   6.854779};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(10,el_phi_total_errors_fx3021,el_phi_total_errors_fy3021,el_phi_total_errors_felx3021,el_phi_total_errors_fehx3021,el_phi_total_errors_fely3021,el_phi_total_errors_fehy3021);
   grae->SetName("el_phi_total_errors");
   grae->SetTitle("Graph");
   grae->SetFillColor(1);
   grae->SetFillStyle(3013);
   grae->SetMarkerStyle(0);
   
   TH1F *Graph_el_phi_total_errors3021 = new TH1F("Graph_el_phi_total_errors3021","Graph",100,-3.768,3.768);
   Graph_el_phi_total_errors3021->SetMinimum(152.977);
   Graph_el_phi_total_errors3021->SetMaximum(187.5661);
   Graph_el_phi_total_errors3021->SetDirectory(0);
   Graph_el_phi_total_errors3021->SetStats(0);
   Graph_el_phi_total_errors3021->SetLineStyle(0);
   Graph_el_phi_total_errors3021->SetMarkerStyle(20);
   Graph_el_phi_total_errors3021->GetXaxis()->SetLabelFont(42);
   Graph_el_phi_total_errors3021->GetXaxis()->SetLabelOffset(0.007);
   Graph_el_phi_total_errors3021->GetXaxis()->SetLabelSize(0.05);
   Graph_el_phi_total_errors3021->GetXaxis()->SetTitleSize(0.06);
   Graph_el_phi_total_errors3021->GetXaxis()->SetTitleOffset(0.9);
   Graph_el_phi_total_errors3021->GetXaxis()->SetTitleFont(42);
   Graph_el_phi_total_errors3021->GetYaxis()->SetLabelFont(42);
   Graph_el_phi_total_errors3021->GetYaxis()->SetLabelOffset(0.007);
   Graph_el_phi_total_errors3021->GetYaxis()->SetLabelSize(0.05);
   Graph_el_phi_total_errors3021->GetYaxis()->SetTitleSize(0.06);
   Graph_el_phi_total_errors3021->GetYaxis()->SetTitleOffset(1.35);
   Graph_el_phi_total_errors3021->GetYaxis()->SetTitleFont(42);
   Graph_el_phi_total_errors3021->GetZaxis()->SetLabelFont(42);
   Graph_el_phi_total_errors3021->GetZaxis()->SetLabelOffset(0.007);
   Graph_el_phi_total_errors3021->GetZaxis()->SetLabelSize(0.05);
   Graph_el_phi_total_errors3021->GetZaxis()->SetTitleSize(0.06);
   Graph_el_phi_total_errors3021->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_el_phi_total_errors3021);
   
   grae->Draw("pe2 ");
   
   Double_t el_phi_data_graph_fx3022[10] = {
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
   Double_t el_phi_data_graph_fy3022[10] = {
   164,
   192,
   178,
   175,
   184,
   177,
   149,
   168,
   166,
   169};
   Double_t el_phi_data_graph_felx3022[10] = {
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
   Double_t el_phi_data_graph_fely3022[10] = {
   12.79345,
   13.84462,
   13.3294,
   13.21639,
   13.55261,
   13.29184,
   12.1931,
   12.94884,
   12.87138,
   12.9874};
   Double_t el_phi_data_graph_fehx3022[10] = {
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
   Double_t el_phi_data_graph_fehy3022[10] = {
   13.83259,
   14.8808,
   14.36698,
   14.25428,
   14.58956,
   14.32952,
   13.23417,
   13.98752,
   13.91029,
   14.02596};
   grae = new TGraphAsymmErrors(10,el_phi_data_graph_fx3022,el_phi_data_graph_fy3022,el_phi_data_graph_felx3022,el_phi_data_graph_fehx3022,el_phi_data_graph_fely3022,el_phi_data_graph_fehy3022);
   grae->SetName("el_phi_data_graph");
   grae->SetTitle("Graph");
   grae->SetFillStyle(1000);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.1);
   
   TH1F *Graph_el_phi_data_graph3022 = new TH1F("Graph_el_phi_data_graph3022","Graph",100,-3.768,3.768);
   Graph_el_phi_data_graph3022->SetMinimum(129.7995);
   Graph_el_phi_data_graph3022->SetMaximum(213.8882);
   Graph_el_phi_data_graph3022->SetDirectory(0);
   Graph_el_phi_data_graph3022->SetStats(0);
   Graph_el_phi_data_graph3022->SetLineStyle(0);
   Graph_el_phi_data_graph3022->SetMarkerStyle(20);
   Graph_el_phi_data_graph3022->GetXaxis()->SetLabelFont(42);
   Graph_el_phi_data_graph3022->GetXaxis()->SetLabelOffset(0.007);
   Graph_el_phi_data_graph3022->GetXaxis()->SetLabelSize(0.05);
   Graph_el_phi_data_graph3022->GetXaxis()->SetTitleSize(0.06);
   Graph_el_phi_data_graph3022->GetXaxis()->SetTitleOffset(0.9);
   Graph_el_phi_data_graph3022->GetXaxis()->SetTitleFont(42);
   Graph_el_phi_data_graph3022->GetYaxis()->SetLabelFont(42);
   Graph_el_phi_data_graph3022->GetYaxis()->SetLabelOffset(0.007);
   Graph_el_phi_data_graph3022->GetYaxis()->SetLabelSize(0.05);
   Graph_el_phi_data_graph3022->GetYaxis()->SetTitleSize(0.06);
   Graph_el_phi_data_graph3022->GetYaxis()->SetTitleOffset(1.35);
   Graph_el_phi_data_graph3022->GetYaxis()->SetTitleFont(42);
   Graph_el_phi_data_graph3022->GetZaxis()->SetLabelFont(42);
   Graph_el_phi_data_graph3022->GetZaxis()->SetLabelOffset(0.007);
   Graph_el_phi_data_graph3022->GetZaxis()->SetLabelSize(0.05);
   Graph_el_phi_data_graph3022->GetZaxis()->SetTitleSize(0.06);
   Graph_el_phi_data_graph3022->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_el_phi_data_graph3022);
   
   grae->Draw("pz ");
   
   TLegend *leg = new TLegend(0.62,0.628,0.9,0.91,NULL,"brNDC");
   leg->SetBorderSize(1);
   leg->SetTextSize(0.036);
   leg->SetLineColor(0);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("el_phi_data","Data","LPE");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1.1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("el_phi_prompt_WZ_stack_5","WZ","F");

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
   entry=leg->AddEntry("el_phi_prompt_ZZ_stack_4","qqZZ","F");

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
   entry=leg->AddEntry("el_phi_fakes_DY_stack_3","Fakes DY","F");

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
   entry=leg->AddEntry("el_phi_fakes_TT_stack_2","Fakes TT","F");

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
   entry=leg->AddEntry("el_phi_total_errors","Total unc.","F");
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
   el_phi_canvas->cd();
  
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
   
   TH1D *el_phi_total__19 = new TH1D("el_phi_total__19","dummy",10,-3.14,3.14);
   el_phi_total__19->SetBinContent(0,4292.649);
   el_phi_total__19->SetBinContent(1,1);
   el_phi_total__19->SetBinContent(2,1);
   el_phi_total__19->SetBinContent(3,1);
   el_phi_total__19->SetBinContent(4,1);
   el_phi_total__19->SetBinContent(5,1);
   el_phi_total__19->SetBinContent(6,1);
   el_phi_total__19->SetBinContent(7,1);
   el_phi_total__19->SetBinContent(8,1);
   el_phi_total__19->SetBinContent(9,1);
   el_phi_total__19->SetBinContent(10,1);
   el_phi_total__19->SetBinContent(11,0.2473902);
   el_phi_total__19->SetBinError(0,30.70094);
   el_phi_total__19->SetBinError(11,0.1441637);
   el_phi_total__19->SetMinimum(0.5);
   el_phi_total__19->SetMaximum(2);
   el_phi_total__19->SetEntries(60522);

   ci = TColor::GetColor("#00cc00");
   el_phi_total__19->SetFillColor(ci);

   ci = TColor::GetColor("#6666ff");
   el_phi_total__19->SetMarkerColor(ci);
   el_phi_total__19->SetMarkerSize(1.1);
   el_phi_total__19->GetXaxis()->SetTitle("#phi(e)");
   el_phi_total__19->GetXaxis()->SetMoreLogLabels();
   el_phi_total__19->GetXaxis()->SetLabelFont(42);
   el_phi_total__19->GetXaxis()->SetLabelOffset(0.015);
   el_phi_total__19->GetXaxis()->SetLabelSize(0.1);
   el_phi_total__19->GetXaxis()->SetTitleSize(0.14);
   el_phi_total__19->GetXaxis()->SetTitleFont(42);
   el_phi_total__19->GetYaxis()->SetTitle("Data/pred.");
   el_phi_total__19->GetYaxis()->SetDecimals();
   el_phi_total__19->GetYaxis()->SetNdivisions(505);
   el_phi_total__19->GetYaxis()->SetLabelFont(42);
   el_phi_total__19->GetYaxis()->SetLabelOffset(0.01);
   el_phi_total__19->GetYaxis()->SetLabelSize(0.11);
   el_phi_total__19->GetYaxis()->SetTitleSize(0.14);
   el_phi_total__19->GetYaxis()->SetTitleOffset(0.62);
   el_phi_total__19->GetYaxis()->SetTitleFont(42);
   el_phi_total__19->GetZaxis()->SetLabelFont(42);
   el_phi_total__19->GetZaxis()->SetLabelOffset(0.007);
   el_phi_total__19->GetZaxis()->SetLabelSize(0.05);
   el_phi_total__19->GetZaxis()->SetTitleSize(0.06);
   el_phi_total__19->GetZaxis()->SetTitleFont(42);
   el_phi_total__19->Draw("AXIS");
   
   Double_t el_phi_total_errors_fx3023[10] = {
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
   Double_t el_phi_total_errors_fy3023[10] = {
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
   Double_t el_phi_total_errors_felx3023[10] = {
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
   Double_t el_phi_total_errors_fely3023[10] = {
   0.0362996,
   0.03271993,
   0.03812145,
   0.03499897,
   0.03687387,
   0.03471716,
   0.0387744,
   0.0356368,
   0.03657053,
   0.03980822};
   Double_t el_phi_total_errors_fehx3023[10] = {
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
   Double_t el_phi_total_errors_fehy3023[10] = {
   0.0362996,
   0.03271993,
   0.03812145,
   0.03499897,
   0.03687387,
   0.03471716,
   0.0387744,
   0.0356368,
   0.03657053,
   0.03980822};
   grae = new TGraphAsymmErrors(10,el_phi_total_errors_fx3023,el_phi_total_errors_fy3023,el_phi_total_errors_felx3023,el_phi_total_errors_fehx3023,el_phi_total_errors_fely3023,el_phi_total_errors_fehy3023);
   grae->SetName("el_phi_total_errors");
   grae->SetTitle("Graph");

   ci = TColor::GetColor("#00ffff");
   grae->SetFillColor(ci);

   ci = TColor::GetColor("#00ffff");
   grae->SetMarkerColor(ci);
   grae->Draw("e2");
   
   Double_t el_phi_total_errors_fx3024[10] = {
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
   Double_t el_phi_total_errors_fy3024[10] = {
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
   Double_t el_phi_total_errors_felx3024[10] = {
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
   Double_t el_phi_total_errors_fely3024[10] = {
   0.0362996,
   0.03271993,
   0.03812145,
   0.03499897,
   0.03687387,
   0.03471716,
   0.0387744,
   0.0356368,
   0.03657053,
   0.03980822};
   Double_t el_phi_total_errors_fehx3024[10] = {
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
   Double_t el_phi_total_errors_fehy3024[10] = {
   0.0362996,
   0.03271993,
   0.03812145,
   0.03499897,
   0.03687387,
   0.03471716,
   0.0387744,
   0.0356368,
   0.03657053,
   0.03980822};
   grae = new TGraphAsymmErrors(10,el_phi_total_errors_fx3024,el_phi_total_errors_fy3024,el_phi_total_errors_felx3024,el_phi_total_errors_fehx3024,el_phi_total_errors_fely3024,el_phi_total_errors_fehy3024);
   grae->SetName("el_phi_total_errors");
   grae->SetTitle("Graph");

   ci = TColor::GetColor("#6666ff");
   grae->SetFillColor(ci);

   ci = TColor::GetColor("#6666ff");
   grae->SetMarkerColor(ci);
   grae->Draw("e2 ");
   
   TH1D *el_phi_total__20 = new TH1D("el_phi_total__20","dummy",10,-3.14,3.14);
   el_phi_total__20->SetBinContent(0,4292.649);
   el_phi_total__20->SetBinContent(1,1);
   el_phi_total__20->SetBinContent(2,1);
   el_phi_total__20->SetBinContent(3,1);
   el_phi_total__20->SetBinContent(4,1);
   el_phi_total__20->SetBinContent(5,1);
   el_phi_total__20->SetBinContent(6,1);
   el_phi_total__20->SetBinContent(7,1);
   el_phi_total__20->SetBinContent(8,1);
   el_phi_total__20->SetBinContent(9,1);
   el_phi_total__20->SetBinContent(10,1);
   el_phi_total__20->SetBinContent(11,0.2473902);
   el_phi_total__20->SetBinError(0,30.70094);
   el_phi_total__20->SetBinError(11,0.1441637);
   el_phi_total__20->SetMinimum(0.5);
   el_phi_total__20->SetMaximum(2);
   el_phi_total__20->SetEntries(60522);

   ci = TColor::GetColor("#00cc00");
   el_phi_total__20->SetFillColor(ci);

   ci = TColor::GetColor("#6666ff");
   el_phi_total__20->SetMarkerColor(ci);
   el_phi_total__20->SetMarkerSize(1.1);
   el_phi_total__20->GetXaxis()->SetTitle("#phi(e)");
   el_phi_total__20->GetXaxis()->SetMoreLogLabels();
   el_phi_total__20->GetXaxis()->SetLabelFont(42);
   el_phi_total__20->GetXaxis()->SetLabelOffset(0.015);
   el_phi_total__20->GetXaxis()->SetLabelSize(0.1);
   el_phi_total__20->GetXaxis()->SetTitleSize(0.14);
   el_phi_total__20->GetXaxis()->SetTitleFont(42);
   el_phi_total__20->GetYaxis()->SetTitle("Data/pred.");
   el_phi_total__20->GetYaxis()->SetDecimals();
   el_phi_total__20->GetYaxis()->SetNdivisions(505);
   el_phi_total__20->GetYaxis()->SetLabelFont(42);
   el_phi_total__20->GetYaxis()->SetLabelOffset(0.01);
   el_phi_total__20->GetYaxis()->SetLabelSize(0.11);
   el_phi_total__20->GetYaxis()->SetTitleSize(0.14);
   el_phi_total__20->GetYaxis()->SetTitleOffset(0.62);
   el_phi_total__20->GetYaxis()->SetTitleFont(42);
   el_phi_total__20->GetZaxis()->SetLabelFont(42);
   el_phi_total__20->GetZaxis()->SetLabelOffset(0.007);
   el_phi_total__20->GetZaxis()->SetLabelSize(0.05);
   el_phi_total__20->GetZaxis()->SetTitleSize(0.06);
   el_phi_total__20->GetZaxis()->SetTitleFont(42);
   el_phi_total__20->Draw("AXIS SAME");
   TLine *line = new TLine(-3.14,1,3.14,1);
   line->SetLineColor(58);
   line->SetLineWidth(2);
   line->Draw();
   
   Double_t data_div_fx3025[10] = {
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
   Double_t data_div_fy3025[10] = {
   0.9610553,
   1.153981,
   1.061468,
   1.08351,
   1.050213,
   1.08218,
   0.8380675,
   1.007112,
   0.9817166,
   0.981445};
   Double_t data_div_felx3025[10] = {
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
   Double_t data_div_fely3025[10] = {
   0.07497081,
   0.0832106,
   0.07948728,
   0.08182904,
   0.07735394,
   0.08126647,
   0.06858149,
   0.07762463,
   0.07612078,
   0.07542261};
   Double_t data_div_fehx3025[10] = {
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
   Double_t data_div_fehy3025[10] = {
   0.08106029,
   0.08943834,
   0.08567463,
   0.08825514,
   0.08327253,
   0.08761084,
   0.07443709,
   0.08385119,
   0.08226483,
   0.08145391};
   grae = new TGraphAsymmErrors(10,data_div_fx3025,data_div_fy3025,data_div_felx3025,data_div_fehx3025,data_div_fely3025,data_div_fehy3025);
   grae->SetName("data_div");
   grae->SetTitle("Graph");
   grae->SetFillStyle(1000);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.1);
   
   TH1F *Graph_el_phi_data_graph3025 = new TH1F("Graph_el_phi_data_graph3025","Graph",100,-3.768,3.768);
   Graph_el_phi_data_graph3025->SetMinimum(129.7995);
   Graph_el_phi_data_graph3025->SetMaximum(213.8882);
   Graph_el_phi_data_graph3025->SetDirectory(0);
   Graph_el_phi_data_graph3025->SetStats(0);
   Graph_el_phi_data_graph3025->SetLineStyle(0);
   Graph_el_phi_data_graph3025->SetMarkerStyle(20);
   Graph_el_phi_data_graph3025->GetXaxis()->SetLabelFont(42);
   Graph_el_phi_data_graph3025->GetXaxis()->SetLabelOffset(0.007);
   Graph_el_phi_data_graph3025->GetXaxis()->SetLabelSize(0.05);
   Graph_el_phi_data_graph3025->GetXaxis()->SetTitleSize(0.06);
   Graph_el_phi_data_graph3025->GetXaxis()->SetTitleOffset(0.9);
   Graph_el_phi_data_graph3025->GetXaxis()->SetTitleFont(42);
   Graph_el_phi_data_graph3025->GetYaxis()->SetLabelFont(42);
   Graph_el_phi_data_graph3025->GetYaxis()->SetLabelOffset(0.007);
   Graph_el_phi_data_graph3025->GetYaxis()->SetLabelSize(0.05);
   Graph_el_phi_data_graph3025->GetYaxis()->SetTitleSize(0.06);
   Graph_el_phi_data_graph3025->GetYaxis()->SetTitleOffset(1.35);
   Graph_el_phi_data_graph3025->GetYaxis()->SetTitleFont(42);
   Graph_el_phi_data_graph3025->GetZaxis()->SetLabelFont(42);
   Graph_el_phi_data_graph3025->GetZaxis()->SetLabelOffset(0.007);
   Graph_el_phi_data_graph3025->GetZaxis()->SetLabelSize(0.05);
   Graph_el_phi_data_graph3025->GetZaxis()->SetTitleSize(0.06);
   Graph_el_phi_data_graph3025->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_el_phi_data_graph3025);
   
   grae->Draw("pz ");
   
   leg = new TLegend(0,0,0,0,NULL,"brNDC");
   leg->SetBorderSize(1);
   leg->SetTextSize(0.084);
   leg->SetLineColor(0);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   entry=leg->AddEntry("el_phi_total_errors","stat. unc.","F");
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
   entry=leg->AddEntry("el_phi_total_errors","total unc.","F");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   leg->Draw();
   pad2->Modified();
   el_phi_canvas->cd();
   el_phi_canvas->Modified();
   el_phi_canvas->cd();
   el_phi_canvas->SetSelected(el_phi_canvas);
}
