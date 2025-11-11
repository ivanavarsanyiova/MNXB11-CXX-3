#include <iostream>
#include <TRandom.h>
#include <TTree.h>
#include <TFile.h>
#include "TObject.h"
#include <cmath>
#include "Particle.h"


//AI fix that hopefully works
ClassImp(Particle)

void writeTree(TString file_name="tree_file", Int_t nEvents=100);
void writeTree(TString file_name, Int_t nEvents){
// Initialize your object e.g. as a pointer
Particle* particle = nullptr;
// Create your root file here
TFile f(Form("%s.root", file_name.Data()),"RECREATE");
// Create your TTree here
TTree *tree=new TTree("tree", "hw3_tree");
// And the associated branches underneath
tree->Branch("particle",&particle);
// for example a branch with your personal object type

// Now we create our loop for filling the tree with some random data
// For loop here
for (Int_t i{0}; i<nEvents; i++){     
    particle = new Particle();   
    particle->px=gRandom->Gaus(0,.02);
    particle->py=gRandom->Gaus(0,.02);
    particle->pz=gRandom->Gaus(0,.02);
    particle->p=particle->Momentum();
// define how many events you want
// Initialize your new object below
// Now fill tree
    tree->Fill();
// Remember to delete it again otherwise you will have memory leak!
    delete particle;
}
// save the tree/file
tree->AutoSave();
}

//Does not tun, AI said this will help
int main(){
    writeTree("tree_file",100);
    return 0;
}