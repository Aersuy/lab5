#pragma once
#include "dispositivElectric.hpp"
#include <string>

class Televizor : public DispositivElectric
{
protected:
    double c_marime{};
    std::string c_tipEcran{};
    double c_refreshRate{}; // hz

public:
    Televizor();
    Televizor(double marime, std::string tipEcran, double refreshRate);
    Televizor(const Televizor&);
    virtual ~Televizor() = default;

    
    void setSize(double marime);
    void setScreenType(const std::string& tipEcran);
    void setRefreshRate(double refreshRate);

  
    double getSize() const;
    std::string getScreenType() const;
    double getRefreshRate() const;

   
    std::string getScreenInfo() const;
};