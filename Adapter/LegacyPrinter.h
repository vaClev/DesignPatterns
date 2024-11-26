#pragma once
#include <iostream>
// Legacy Printer(Adaptee)  -- старый класс который требует адаптации чтобы нормально работать в "нашем клиентском коде в классе ModernComputer"
class LegacyPrinter {
public:
    void printInUppercase(const std::string& text) {
        std::cout << "Printing: " << text << std::endl;
    }
};