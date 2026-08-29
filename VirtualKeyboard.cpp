#include "VirtualKeyboard.h"


VirtualKeyboard::VirtualKeyboard(IOHandler& handler) : io(handler) {}


void VirtualKeyboard::sendKey(char key)
{
    uint8_t code = static_cast<uint8_t>(key);
    io.out(0x60, code); // записуємо код у порт клавіатури
    std::cout << "Клавіша '" << key << "' відправлена у порт 0x60 (код: " << (int)code << ")\n";
}

void VirtualKeyboard::readKey()
{
    uint8_t val = io.in(0x60);
    std::cout << "Прочитано код із порту 0x60: " << (int)val
        << " (символ: '" << static_cast<char>(val) << "')\n";
}
