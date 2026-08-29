#include "PortManager.h"
#include <iostream>

void PortManager::initialize(uint16_t count)
{
	ports.clear();
	for (uint16_t i = 0; i < count; ++i) {
		ports.emplace_back(i);
	}
}

Port* PortManager::findPort(uint16_t addr)
{
	for (auto& port : ports) {
		if (port.getAddress() == addr) {
			return &port;
		}
	}
	return nullptr;
}

void PortManager::displayState()
{
	std::cout << "Адреса\tЗначення\n";
	for (const auto& p : ports)
		std::cout << "0x" << std::hex << p.getAddress()
		<< "\t" << std::dec << (int)p.read() << "\n";
}