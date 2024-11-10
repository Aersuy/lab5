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
    DispositivDigital(double, std::string, std::string, int);
    DispositivDigital();
    DispositivDigital(const DispositivDigital&);
    virtual ~DispositivDigital() = default;

    
    void setFrequency(double);
    void setBrand(const std::string&);
    void setModel(const std::string& );
    void setSerialNumber(int);

 
    double getFrequency();
    std::string getBrand();
    std::string getModel();
    int getSerialNumber();

   
    std::string getDescription();
};