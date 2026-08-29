#include "IOHandler.h"

IOHandler::IOHandler(PortManager& m) : manager(m) {}

void IOHandler::out(uint16_t addr, uint8_t data)
{
    Port* p = manager.findPort(addr);
    if (p) p->write(data);
    else std::cerr << "Помилка: порт 0x" << std::hex << addr << " не існує.\n";
}

uint8_t IOHandler::in(uint16_t addr)
{
    Port* p = manager.findPort(addr);
    if (p) return p->read();
    std::cerr << "Помилка: порт 0x" << std::hex << addr << " не існує.\n";
    return 0;
}

