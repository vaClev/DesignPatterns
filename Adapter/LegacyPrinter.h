#pragma once
#include <iostream>
// Legacy Printer(Adaptee)  -- ������ ����� ������� ������� ��������� ����� ��������� �������� � "����� ���������� ���� � ������ ModernComputer"
class LegacyPrinter {
public:
    void printInUppercase(const std::string& text) {
        std::cout << "Printing: " << text << std::endl;
    }
};