#pragma once
#include <string>
#include <vector>
#include "dispositivElectric.hpp"
class Televizor : public DispositivElectric
{
private:
    double c_marime;
    std::vector<int> c_resolution;
    std::string c_tipEcran;
    double c_refreshRate; // hz;
public:
    Televizor();
    Televizor(double);
    Televizor(Televizor&);
    ~Televizor();
};


