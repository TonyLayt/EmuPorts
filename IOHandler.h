#pragma once
#include "PortManager.h"

class IOHandler {
private:
    PortManager& manager;
public:
    IOHandler(PortManager& m);

    void out(uint16_t addr, uint8_t data);

    uint8_t in(uint16_t addr);
};

