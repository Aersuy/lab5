#pragma once
#include "televizor.hpp"
#include "dispositivDigital.hpp"
#include <string>
class Monitor : public Televizor,public DispositivDigital
{
private:
    std::string c_tipPort{};
    int c_numberOfPorts{};
    std::string c_aspectRatio{};
    bool c_hasSpeakers{};

 

public:
    Monitor(std::string,int,std::string,bool);
    ~Monitor();
};

