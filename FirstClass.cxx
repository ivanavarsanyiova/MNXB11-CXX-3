#include "FirstClass.h"
#include <iostream>
ClassImp(FirstClass)

FirstClass::FirstClass(): _variable(0)
{
}
FirstClass::FirstClass(Int_t variable): _variable(variable)
{
    std::cout << variable << std::endl;
}
FirstClass::~FirstClass(){
}