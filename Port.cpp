#include "Port.h"

Port::Port(uint16_t addr) : address(addr), value(0){}

void Port::write(uint8_t data) {
	value = data;
}

uint8_t Port::read() const {
	return value;
}

uint16_t Port::getAddress() const
{
	return address;
}
