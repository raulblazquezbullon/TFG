import ROOT as r
from array import array
import numpy as np
import argparse
from copy import deepcopy
import os
import re
import sys

r.gROOT.SetBatch(1)

functional_variables = {"m3l"     : "m3Lmet"}

def histo_deepcopy(h):
	''' This function avoids any memory problem regarding histogram creation '''  
	h.SetDirectory(0)
	histo = deepcopy(h.Clone())
	return histo
	
def get_histos(var, filename, someProcess = ""):
	''' Read histograms from the root file and save them into a dictionary '''
	histos = {}
	f = r.TFile.Open(filename)
	
	if someProcess != "":
		histo = histo_deepcopy(f.Get(var + "_" + someProcess))
		f.Close()
		del f
		return histo
  
	for key in f.GetListOfKeys():
		name = key.GetName()
		if (var not in name) or ("stack" in name) or ("canvas" in name): continue
		process = name.split('_')[-1]
		histos[process] = histo_deepcopy(f.Get(name))	
  
	f.Close()
	del f
	return histos

def rebin_histo(var, path, nquant, firstBin = [0.0]):
	''' This is the function that rebins the histogram leaving the background as flat as possible '''
	h = get_histos(var, path, someProcess = "background")

	xquant = array('d')
	yquant = array('d', [0.] * nquant)
	init = array('d', firstBin) #min bin

	for q in range(0, nquant):
		xquant.append(float((q+1))/nquant)

	h.GetQuantiles(nquant, yquant, xquant) # Use background to rebin


	rebining = init + yquant
	rebining = rebining.tolist()

	return rebining

def add_parsing_options():
	''' Add some parsing options '''
	parser = argparse.ArgumentParser()
	parser.add_argument("--nquant",    dest = "nquant")
	parser.add_argument("--variables", dest = "variables", default = functional_variables.keys())
	parser.add_argument("--mode",      dest = "mode")
	parser.add_argument("--year",      dest = "year", default = "2022")
	parser.add_argument("--ncores",	   dest = "ncores",default = 8)
	parser.add_argument("--lumis",	   dest = "lumis",default = {"2022":13.09})
	parser.add_argument("--cut",	   dest = "cut",default = "./wz-run3/common/cuts_wzsm.txt")
	parser.add_argument("--run-local", dest = "local",action = "store_true",default = False)
	parser.add_argument("--extra",	   dest = "extra",default = "",type = str,
						help = "Extra options for CMGTools, user must give extra options without -- \
								and without '', also separated by commas")
	parser.add_argument("--do-submit", dest = "submit",action = "store_true",default = False)

	return parser.parse_args()   


def make_plotfile(filename, line):
	''' Create plotfiles for later plotting with mcPlots.py '''
	header = "# {}: {}={} \n".format("vim", "syntax", "sh")
	secondline = "# *; LegendCutoff=1e-5 \n"
	
	# == Create plot files for CMGTools
	f = open(filename, "w")
	f.write(header)
	f.write(secondline)
	f.write(line)
	f.close()
	return filename
	

def make_plots(options):
	'''
	
	'''
	''' This is where the magic hapens :) '''
	'''
	  * Edit this function as you please (add parameters, options, whatever) 
	  * The ultimate goal for this function is to produce plots of variables that have a certain binning
	'''
	'''
	This function takes account of parser options, at the moment 10 options have been added:
		1. Output path
		2. Number of cores
		3. Luminosity (in 1/pb)
		4. Year
		5. Name of the file
		6. Variable to be studied
		7. Number of quantiles
		8. Cut file
		9. Extra options (like sP)
		10. Submit command directly (maintain this as the second to last)
		11. Run local (maintain this as the last one)
	'''
	comm = "python wz-run3/wz-run.py plot" # Raw command, let's add some options
	
	if "" not in options[8]: # Fixing syntax to pass the command to wz-run.py
		extra_opt = " --".join(options[8])
		extra_opt += " --sP %s_rebin%d"%(options[5],options[6])
		extra_opt = "".join(["'--",extra_opt,"'"])
	
	else: # Adding select plot option to choose what variable to plot
		extra_opt = "'--sP %s_rebin%d"%(options[5],options[6]) + "'"
		
	# Now we add other options like run local, do submit, number of cores, etc
	comm += " --outname " + options[0] + " --ncores " + options[1] + (" --run-local ")*int(options[-1]) +\
			"--extra " + extra_opt + (" --do-submit ")*int(options[-2]) + " --plotfile %s"%(options[4])
	
	f = os.popen(comm) # os.popen run comm string as a bash command
	cmd = f.read()
	return cmd

if __name__ == "__main__":
   # == Load options
   opts = add_parsing_options()
   
   # print(functional_variables.keys())
   
   nquant    = opts.nquant.split(",")
   variables = opts.variables.split(",") # This line raise an error if user don't give variables manually
   mode      = opts.mode
   year      = opts.year
   cores 	 = opts.ncores
   lumis 	 = opts.lumis
   cut 		 = opts.cut
   local 	 = opts.local
   submit 	 = opts.submit
   extra 	 = opts.extra.split(",")
   
   # == Rootfile with unrebinned plots
   inpath = "./output_raul/plots_wz.root"
   outpath = "./check_discriminant_vars/"
   mode = "plot"
   
   # == Iterate over variables
   for var in variables:
     print("=======")
     print("{}".format(var))

     # == Get the required variable defined within CMGTools
     var_to_comm = functional_variables[var]
     
     for nq in nquant:
       out = outpath + "./rebin%s/%s"%(nq, var)
       nq = int(nq)
       # == Get the new binning for the histogram
       rebining = rebin_histo(var, inpath, nq)
       if mode == "plot":
          
          # == Create an specific plot file with the desired rebinning
          filename = "./wz-run3/separate-studies/bining_optimization/{var}_{nq}_plots.txt".format(var = var, nq = nq)
          line = "%s_rebin%d:%s:%s;XTitle='%s', MoreY=2.0\n"%(var, nq, var_to_comm, rebining, var)

          if not os.path.isfile(filename): make_plotfile(filename, line)

          pars = (out, cores, lumis[year], year, filename, var, nq, cut, extra, submit, local)
          batchcomm = make_plots(pars)
          print(batchcomm)
          
