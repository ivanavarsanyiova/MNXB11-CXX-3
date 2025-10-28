#pragma once
#include "TObject.h"

class PrintVariable: public TObject {
public:
    PrintVariable();
    PrintVariable(Int_t variable);
    virtual ~PrintVariable();
private:
    Int_t _variable;
ClassDef(PrintVariable, 1);
};
