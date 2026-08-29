#include <sstream>
#include <iostream>
#include <windows.h>
#include "PortManager.h"
#include "IOHandler.h"
#include "VirtualKeyboard.h"

int main() {
    SetConsoleOutputCP(1251);
    SetConsoleCP(1251);

    PortManager manager;
    manager.initialize(256);
    IOHandler io(manager);
    VirtualKeyboard keyboard(io);

    std::cout << "¬вед≥ть символ дл€ передач≥ у порт 0x60: ";
    char input;
    std::cin >> input;

    keyboard.sendKey(input);   // записуЇмо символ у порт
    keyboard.readKey();        // зчитуЇмо назад

    return 0;
}