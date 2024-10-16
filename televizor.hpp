#pragma once
#include <string>
#include <vector>
#include "dispositivElectric.hpp"
class Televizor : public DispositivElectric
{
protected:
    double c_marime;
    std::string c_tipEcran;
    double c_refreshRate; // hz;
public:
    Televizor();
    Televizor(double,std::string,double);
    Televizor(Televizor&);
    ~Televizor();
};


