#include "televizor.hpp"
#include "iostream"
Televizor::Televizor()
{
    std::cout << "Da marimea ecranului \n";
    std::cin >> c_marime;
    std::cout << "Da resolutia \n";
    std::cin >> c_resolution[0];
    std::cout << "Da resolutia \n";
    std::cin >> c_resolution[1];
   
    
}
Televizor::Televizor(double marime,int res1,int res2)
{ 
    c_marime = marime;
    c_resolution[0] = res1;
    c_resolution[1] = res2;
}
Televizor::Televizor(Televizor& other)
{
    c_marime = other.c_marime;
    c_resolution[0] = other.c_resolution[0];
    c_resolution[1] = other.c_resolution[1];
}