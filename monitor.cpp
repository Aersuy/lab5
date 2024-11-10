#include "monitor.hpp"
#include <sstream>

// Constructor
Monitor::Monitor(std::string tipPort, int numberOfPorts, std::string aspectRatio, bool hasSpeakers)
    : c_tipPort(tipPort), c_numberOfPorts(numberOfPorts), c_aspectRatio(aspectRatio), c_hasSpeakers(hasSpeakers)
{
}

// Setters
void Monitor::setPortType(const std::string& tipPort) 
{
    c_tipPort = tipPort;
}

void Monitor::setNumberOfPorts(int numberOfPorts) 
{
    c_numberOfPorts = numberOfPorts;
}

void Monitor::setAspectRatio(const std::string& aspectRatio) 
{
    c_aspectRatio = aspectRatio;
}

void Monitor::setHasSpeakers(bool hasSpeakers) 
{
    c_hasSpeakers = hasSpeakers;
}

// Getters
std::string Monitor::getPortType() const 
{
    return c_tipPort;
}

int Monitor::getNumberOfPorts() const 
{
    return c_numberOfPorts;
}

std::string Monitor::getAspectRatio() const 
{
    return c_aspectRatio;
}

bool Monitor::hasSpeakers() const 
{
    return c_hasSpeakers;
}

std::string Monitor::getFullSpecifications() const 
{
    std::ostringstream oss;
    oss << "Monitor Specifications:\n"
        << "Port Type: " << c_tipPort << "\n"
        << "Number of Ports: " << c_numberOfPorts << "\n"
        << "Aspect Ratio: " << c_aspectRatio << "\n"
        << "Has Speakers: " << (c_hasSpeakers ? "Yes" : "No") << "\n"  
        << "Screen Size: " << getSize() << " inches\n"
        << "Screen Type: " << getScreenType() << "\n"
        << "Refresh Rate: " << getRefreshRate() << " Hz\n"
        << "Current: " << getCurrent() << " mA\n"
        << "Voltage: " << getVoltage() << " V\n"
        << "Wattage: " << getWattage() << " W\n"
        << "Power Consumption: " << getPowerConsumption() << " Wh" << '\n' 
        << "Brand: " << c_brand << "\n"
        << "Model: " << c_model << "\n"
        << "Frequency: " << c_frequency << " Hz\n"
        << "Serial Number: " << c_serialNumber;
        
    return oss.str();
}
