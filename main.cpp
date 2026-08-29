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

    std::cout << "Введіть символ для передачі у порт 0x60: ";
    char input;
    std::cin >> input;

    keyboard.sendKey(input);   // записуємо символ у порт
    keyboard.readKey();        // зчитуємо назад

    return 0;
}