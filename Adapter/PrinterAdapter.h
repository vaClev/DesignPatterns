#pragma once
// Adapter class чтобы сделать LegacyPrinter совместимым с ModernComputer
#include "LegacyPrinter.h"
class PrinterAdapter {
private:
    LegacyPrinter legacyPrinter; //по сути PrinterAdapter оборачивает LegacyPrinter

public:
    //перевызыват методы LegacyPrinter -- предваритеьно сделав входные данные совместитыми
    void sendCommand(const std::string& command) {
        // Convert the command to uppercase and pass it to the LegacyPrinter
        std::string uppercaseCommand = command; //при таком присваивании в —++ строка копируетс€
        for (char& c : uppercaseCommand) {
            c = std::toupper(c);
        }
        legacyPrinter.printInUppercase(uppercaseCommand);
    }
};
/*
ѕо сути, класс Adapter преобразует команду в нижнем регистре из ModernComputer
в верхний регистр и делегирует ее LegacyPrinter.
*/