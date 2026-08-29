# EmuPorts

EmuPorts is a small C++ learning project that demonstrates virtual port-mapped input and output without accessing real hardware.

The program creates 256 virtual 8-bit ports. A character entered in the console is converted to its numeric value, written to port `0x60` and then read back.

Port `0x60` is inspired by the traditional x86 keyboard data port, but all operations in this project take place only in memory.

## How it works

- `Port` stores an address and an 8-bit value.
- `PortManager` creates and locates virtual ports.
- `IOHandler` provides `in` and `out` operations.
- `VirtualKeyboard` sends the entered character to port `0x60`.

For example, the character `A` is stored as the numeric value `65` and then read back from the same port.

## Running the project

Requirements:

- Windows
- Visual Studio with C++ development tools

Open `EmuPorts.sln` in Visual Studio and press `Ctrl + F5`.

## Built with

- C++
- Visual Studio
- Windows Console API



