#pragma once
#include <iostream>
#include "dispositivElectric.hpp"

DispositivElectric::DispositivElectric()
{
    std::cout << "Da tensiunea (Volti)\n"; // V
    std::cin >> c_voltage;
    std::cout << "Da currentul (Amperi)\n";  // mA
    std::cin >> c_current;
    std::cout << "Da puterea (Watts)\n"; // w
    std::cin >> c_wattage;
    std::cout << "Da consumptia de energire  \n"; // KWh
    std::cin >> c_powerConsumption;
}
DispositivElectric::DispositivElectric(double voltage, double current, double wattage,double powerConsumption)
{
    c_voltage = voltage;
    c_current = current;
    c_wattage = wattage;
    c_powerConsumption = powerConsumption;
}
DispositivElectric::DispositivElectric(const DispositivElectric& other)
{
    c_voltage = other.c_voltage;
    c_current = other.c_current;
    c_wattage = other.c_wattage;
    c_powerConsumption = other.c_powerConsumption;
}
void DispositivElectric::setCurrent(double current)
 {
    c_current = current;
}

void DispositivElectric::setVoltage(double voltage)
 {
    c_voltage = voltage;
}

void DispositivElectric::setWattage(double wattage) {
    c_wattage = wattage;
}

void DispositivElectric::setPowerConsumption(double powerConsumption)
 {
    c_powerConsumption = powerConsumption;
}

// Getters
double DispositivElectric::getCurrent() const
 {
    return c_current;
}

double DispositivElectric::getVoltage() const
 {
    return c_voltage;
}

double DispositivElectric::getWattage() const
 {
    return c_wattage;
}

double DispositivElectric::getPowerConsumption() const
 {
    return c_powerConsumption;
}


double DispositivElectric::calculateEnergyConsumption(double hours)
 {
   c_powerConsumption = c_wattage * hours;
   return c_powerConsumption;
}
void DispositivElectric::printDetails(double hours) {
    std::cout << "Current: " << c_current << " mA\n";
    std::cout << "Voltage: " << c_voltage << " V\n";
    std::cout << "Wattage: " << c_wattage << " W\n";
    std::cout << "Power consumption over " << hours << " hours: " << calculateEnergyConsumption(hours) << " Wh";
    
}