#pragma once
#include <iostream>
// Modern Computer (Client) -- �����  ������� ����� ���������� ������� "������ ���������" 
class ModernComputer {
public:
    void sendCommand(const std::string& command) {
        std::cout << "Sending command: " << command << std::endl;
    }
};