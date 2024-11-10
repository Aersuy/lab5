#include "televizor.hpp"
#include "iostream"
#include "sstream"
Televizor::Televizor()
{   // DispositivElectric();
    std::cout << "Da marimea ecranului \n";
    std::cin >> c_marime;
    std::cout << "Da tipul ecranului \n";
    std::cin >> c_tipEcran;
    std::cout << "Da refresh rate-ul \n";
    std::cin >> c_refreshRate;
   
    
}
Televizor::Televizor(double marime,std::string tipEcran,double refreshRate)
{   
    c_marime = marime;
    c_tipEcran = tipEcran;
    c_refreshRate = refreshRate;
    
}
Televizor::Televizor(const Televizor& other)
{
    c_marime = other.c_marime;
    c_tipEcran = other.c_tipEcran;
    c_refreshRate = other.c_refreshRate;
    c_current = other.c_current;
    c_powerConsumption = other.c_powerConsumption;
    c_voltage = other.c_voltage;
    c_wattage = other.c_wattage;
}
void Televizor::setScreenType(const std::string& tipEcran) 
{
    c_tipEcran = tipEcran;
}

void Televizor::setRefreshRate(double refreshRate) 
{
    c_refreshRate = refreshRate;
}

// Getters
double Televizor::getSize() const 
{
    return c_marime;
}

std::string Televizor::getScreenType() const 
{
    return c_tipEcran;
}

double Televizor::getRefreshRate() const 
{
    return c_refreshRate;
}

// Utility function to get screen information
std::string Televizor::getScreenInfo() const 
{
    std::ostringstream oss;
    oss << "Device Information:\n"
        << "-------------------\n"
        << "Screen Size: " << c_marime << " inches\n"
        << "Screen Type: " << c_tipEcran << "\n"
        << "Refresh Rate: " << c_refreshRate << " Hz\n"
        << "Current: " << getCurrent() << " mA\n"
        << "Voltage: " << getVoltage() << " V\n"
        << "Wattage: " << getWattage() << " W\n"
        << "Power Consumption: " << getPowerConsumption() << " Wh";
    return oss.str();
}