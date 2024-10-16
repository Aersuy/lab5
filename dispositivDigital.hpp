#pragma once
#include <string>
class DispositivDigital
{
protected:
     double c_refreshRate;
     std::string c_brand;    
     std::string c_model;   
     std::string c_serialNumber;  
public:
    DispositivDigital(double,std::string,std::string,std::string);
    DispositivDigital();
    DispositivDigital(DispositivDigital&);
    ~DispositivDigital();
};
