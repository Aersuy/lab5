#pragma once
class DispositivElectric
{
protected:
     double c_current{}; // mA
     double c_voltage{}; // volts
     double c_wattage{}; // Watts
     double c_powerConsumption{}; 
public:
    DispositivElectric();
    DispositivElectric(double,double,double,double);
    DispositivElectric(DispositivElectric&);
    ~DispositivElectric();
};