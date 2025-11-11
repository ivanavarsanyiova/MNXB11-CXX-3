#pragma once
#include <TObject.h>
#include <cmath>

class Particle: public TObject{
public: 
    Double_t px, py, pz, p;
    Particle(): px(0), py(0), pz(0), p(0) {}
    Particle(Double_t x, Double_t y, Double_t z): px(x),py(y),pz(z) {
        p=Momentum();
    }
    Double_t Momentum() {
        p = std::sqrt(px*px + py*py + pz*pz);
        return p;
    }
    ClassDef(Particle, 1);
};