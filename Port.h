#pragma once
#include <cstdint>


class Port {
private:
    uint16_t address;
    uint8_t value;

public:
    Port(uint16_t addr);

    void write(uint8_t data);
    uint8_t read() const;
    uint16_t getAddress() const;
};


