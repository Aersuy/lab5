#pragma once
#include <string>
class DispositivDigital
{
protected:
     double c_frequency{};
     std::string c_brand{};    
     std::string c_model{};   
     int c_serialNumber{};
public:
    DispositivDigital(double,std::string,std::string,int);
    DispositivDigital();
    DispositivDigital(DispositivDigital&);
    ~DispositivDigital();
};
