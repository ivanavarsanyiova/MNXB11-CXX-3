#include "PrintVariable.h"
#include <iostream>
ClassImp(PrintVariable)

PrintVariable::PrintVariable(): _variable(0)
{
}
PrintVariable::PrintVariable(Int_t variable): _variable(variable)
{
    std::cout << variable << std::endl;
}
PrintVariable::~PrintVariable(){
}