#pragma once
#include <iostream>
#include "dispositivElectric.hpp"

DispositivElectric::DispositivElectric()
{
    std::cout << "Da tensiunea (Volti)\n";
    std::cin >> c_voltage;
    std::cout << "Da currentul (Amperi)\n"
    std::cin >> c_current;
    std::cout << "Da puterea (Watts)\n";
    std::cin >> c_wattage;
}
DispositivElectric::DispositivElectric(double voltage, double current, double wattage)
{
    c_voltage = voltage;
    c_current = current;
    c_wattage = wattage;
}
DispositivElectric::DispositivElectric(DispositivElectric& other)
{
    c_voltage = other.c_voltage;
    c_current = other.c_current;
    c_wattage = other.c_wattage;
}