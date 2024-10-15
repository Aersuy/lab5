#pragma once
class DispositivElectric
{
private:
     double c_current{}; // mA
     double c_voltage{}; // volts
     double c_wattage{}; // Watts
public:
    DispositivElectric(/* args */);
    DispositivElectric(double,double,double);
    DispositivElectric(DispositivElectric&);
    ~DispositivElectric();
};