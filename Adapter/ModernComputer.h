#pragma once
#include <iostream>
// Modern Computer (Client) -- класс  который хочет передавать команды "старым принтером" 
class ModernComputer {
public:
    void sendCommand(const std::string& command) {
        std::cout << "Sending command: " << command << std::endl;
    }
};