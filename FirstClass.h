#pragma once
#include "TObject.h"

class FirstClass: public TObject {
public:
    FirstClass();
    FirstClass(Int_t variable);
    virtual ~FirstClass();
private:
    Int_t _variable;
ClassDef(FirstClass, 1);
};
