//Fix suggested by Copilot because write.cxx did not want to compile when I only had that and Particle.h
#ifdef __CINT__
#pragma link C++ class Particle+;
#endif