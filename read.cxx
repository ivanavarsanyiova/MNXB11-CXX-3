#include <TFile.h>
#include <TTree.h>
#include <TH2D.h>
#include <TCanvas.h>
#include "Particle.h"


void read(){
// initialize your object
Particle *p = nullptr;

// open your file
TFile *f = TFile::Open("tree_file.root");

// get your tree
TTree *tree = (TTree*)f->Get("tree");

// remember to set the branch address
tree->SetBranchAddress("particle", &p);

// Creating histogram so I have something to fill
TH2D *h2 = new TH2D("h2", "graph of px and py", 100, -1, 1, 100, -1, 1);

Int_t N = tree->GetEntries(); 
for (Int_t i{0}; i<N; i++){ // loop over the whole tree
tree->GetEntry(i);
// do something - task 8, filling h2
h2->Fill(p->px, p->py);
}

//task 9, drawing px*py vs pz
tree->Draw("particle.px*particle.py:particle.pz", "particle.p<0.1");
}