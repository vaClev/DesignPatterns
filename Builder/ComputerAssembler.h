#pragma once
#include "ComputerBuilder.h"

// Director
// �� ���� ����� ��������� � ���� ������ ComputerBuilder � ��������� ������ �����.
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
Director: Director �������� �������� ����������� ������� builder, 
�� � �������� �������� �� ������� ���������� ���������.
�� �������� � Builder ��� ���������� �������. ����������� ����� ����������� ����,
����������� ��� ���������� �������, �� �� ����� ������� ����, ��� ����������� ������ ���.
*/