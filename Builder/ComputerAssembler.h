#pragma once
#include "ComputerBuilder.h"

// Director
// по сути может принимать в себя разные ComputerBuilder и создавать разные Компы.
class ComputerAssembler {
public:
    Computer assembleComputer(ComputerBuilder& builder) {
        builder.buildCPU("Intel i7");
        builder.buildMemory("16GB");
        builder.buildStorage("512GB SSD");
        return builder.getResult();
    }
};
/*
Director: Director является основным компонентом шаблона builder, 
он в основном отвечает за процесс построения программы.
Он работает с Builder для построения объекта. Разработчик знает фактические шаги,
необходимые для построения объекта, но не знает деталей того, как реализуется каждый шаг.
*/