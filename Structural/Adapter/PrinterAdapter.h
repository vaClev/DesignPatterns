#pragma once
// Adapter class ����� ������� LegacyPrinter ����������� � ModernComputer
#include "LegacyPrinter.h"
class PrinterAdapter {
private:
    LegacyPrinter legacyPrinter; //�� ���� PrinterAdapter ����������� LegacyPrinter

public:
    //����������� ������ LegacyPrinter -- ������������� ������ ������� ������ ������������
    void sendCommand(const std::string& command) {
        // Convert the command to uppercase and pass it to the LegacyPrinter
        std::string uppercaseCommand = command; //��� ����� ������������ � �++ ������ ����������
        for (char& c : uppercaseCommand) {
            c = std::toupper(c);
        }
        legacyPrinter.printInUppercase(uppercaseCommand);
    }
};
/*
�� ����, ����� Adapter ����������� ������� � ������ �������� �� ModernComputer
� ������� ������� � ���������� �� LegacyPrinter.
*/