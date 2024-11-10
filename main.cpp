#include "monitor.cpp"
#include "dispositivDigital.cpp"
#include "dispositivElectric.cpp"
#include "televizor.cpp"
#include <iostream>
int main()
{   Monitor m{"Hdmi",1,"16/9",0};
    std::cout << m.getFullSpecifications();
    return 0;
}