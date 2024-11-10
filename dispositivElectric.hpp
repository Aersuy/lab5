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
    DispositivElectric(double current, double voltage, double wattage, double powerConsumption);
    DispositivElectric(const DispositivElectric&);
    virtual ~DispositivElectric() = default;

    void setCurrent(double current);
    void setVoltage(double voltage);
    void setWattage(double wattage);
    void setPowerConsumption(double powerConsumption);

 
    double getCurrent() const;
    double getVoltage() const;
    double getWattage() const;
    double getPowerConsumption() const;

    
    double calculateEnergyConsumption(double hours); 
    void printDetails(double hours);
};