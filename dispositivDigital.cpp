#include "dispositivDigital.hpp"
#include <string>
#include <iostream>
DispositivDigital::DispositivDigital(double frequency, std::string brand, std::string model, int serialNumber )
{
   c_frequency = frequency;
   c_brand = brand;
   c_model = model;
   c_serialNumber = serialNumber;
}

DispositivDigital::DispositivDigital()
{
    std::cout << "Da fregventa \n";
    std::cin >> c_frequency;
    std::cout << "Da brandul \n";
    std::getline(std::cin,c_brand);
    std::cout << "Da modelul \n";
    std::getline(std::cin,c_model);
    std::cout << "Da numarul de serie (int) \n";
    std::cin >> c_serialNumber;
}

DispositivDigital::DispositivDigital(DispositivDigital& other)
{
    c_brand = other.c_brand;
    c_frequency = other.c_frequency;
    c_model = other.c_model;
    c_serialNumber = other.c_serialNumber;
}