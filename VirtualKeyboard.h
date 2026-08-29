#pragma once
#include "IOHandler.h"


class VirtualKeyboard {
private:
    IOHandler& io;
public:
    VirtualKeyboard(IOHandler& handler);

    // Імітація натискання клавіші
    void sendKey(char key);

    // Зчитування останнього натискання
    void readKey();
};
