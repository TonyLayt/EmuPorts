#pragma once
#include <iostream>
#include <vector>
#include "Port.h"

class PortManager {
private:
    std::vector<Port> ports;
public:
    void initialize(uint16_t count);

    Port* findPort(uint16_t addr);

    void displayState();
};

