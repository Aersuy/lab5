#pragma once
#include "televizor.hpp"
#include "dispositivDigital.hpp"
#include <string>
class Monitor : public Televizor,public DispositivDigital
{
private:
    std::string c_tipPort;
public:
    Monitor(/* args */);
    ~Monitor();
};

Monitor::Monitor(/* args */)
{
}

Monitor::~Monitor()
{
}
