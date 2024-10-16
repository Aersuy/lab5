#pragma once
#include <iostream>
#include "dispositivElectric.hpp"

DispositivElectric::DispositivElectric()
{
    std::cout << "Da tensiunea (Volti)\n"; // V
    std::cin >> c_voltage;
    std::cout << "Da currentul (Amperi)\n"  // mA
    std::cin >> c_current;
    std::cout << "Da puterea (Watts)\n"; // w
    std::cin >> c_wattage;
    std::cout << "Da consumptia de energire  \n"; // KWh
}
DispositivElectric::DispositivElectric(double voltage, double current, double wattage,double powerConsumption)
{
    c_voltage = voltage;
    c_current = current;
    c_wattage = wattage;
    c_powerConsumption = powerConsumption;
}
DispositivElectric::DispositivElectric(DispositivElectric& other)
{
    c_voltage = other.c_voltage;
    c_current = other.c_current;
    c_wattage = other.c_wattage;
    c_powerConsumption = other.c_powerConsumption;
}