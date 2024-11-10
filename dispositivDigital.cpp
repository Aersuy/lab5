#pragma once
#include "dispositivDigital.hpp"
#include <string>
#include <limits>
#include <sstream>
#include <iostream>
DispositivDigital::DispositivDigital(double frequency, std::string brand, std::string model, int serialNumber )
{
   c_frequency = frequency;
   c_brand = brand;
   c_model = model;
   c_serialNumber = serialNumber;
}


DispositivDigital::DispositivDigital()
{   std::cout << "DispositivDigital Constructor Called\n";
    std::cout << "Da fregventa \n";
    std::cin >> c_frequency;
    std::cout << "Da brandul \n";
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
    std::getline(std::cin,c_brand);
    std::cout << "Da modelul \n";
    std::getline(std::cin,c_model);
    std::cout << "Da numarul de serie (int) \n";
    std::cin >> c_serialNumber;
}

DispositivDigital::DispositivDigital(const DispositivDigital& other)
{
    c_brand = other.c_brand;
    c_frequency = other.c_frequency;
    c_model = other.c_model;
    c_serialNumber = other.c_serialNumber;
}
void DispositivDigital::setFrequency(double frequency)
{
    c_frequency = frequency;
}
void DispositivDigital::setBrand(const std::string& brand)
{
    c_brand = brand;
}
void DispositivDigital::setModel(const std::string& model)
{
   c_model = model;
}
void DispositivDigital::setSerialNumber(int serialNumber)
{
    c_serialNumber = serialNumber;
}
double DispositivDigital::getFrequency() 
{
    return c_frequency;
}
int DispositivDigital::getSerialNumber() 
{
    return c_serialNumber;
}
std::string DispositivDigital::getModel() 
{
    return c_model;
}
std::string DispositivDigital::getBrand()
{
    return c_brand;
}
std::string DispositivDigital::getDescription() {
    std::ostringstream oss;
    oss << "Brand: " << c_brand
        << ", Model: " << c_model
        << ", Frequency: " << c_frequency << " Hz"
        << ", Serial Number: " << c_serialNumber;
    return oss.str();
}