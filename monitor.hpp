#pragma once
#include "televizor.hpp"
#include "dispositivDigital.hpp"
#include <string>

class Monitor : public Televizor, public DispositivDigital
{
private:
    std::string c_tipPort{};
    int c_numberOfPorts{};
    std::string c_aspectRatio{};
    bool c_hasSpeakers{};

public:
    Monitor(std::string tipPort, int numberOfPorts, std::string aspectRatio, bool hasSpeakers);
    ~Monitor() = default;

   
    void setPortType(const std::string& tipPort);
    void setNumberOfPorts(int numberOfPorts);
    void setAspectRatio(const std::string& aspectRatio);
    void setHasSpeakers(bool hasSpeakers);

    std::string getPortType() const;
    int getNumberOfPorts() const;
    std::string getAspectRatio() const;
    bool hasSpeakers() const;

   
    std::string getFullSpecifications() const;
};