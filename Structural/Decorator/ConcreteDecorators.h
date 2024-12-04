#pragma once
#include "IceCreamDecorator.h"
class CaramelDecorator : public IceCreamDecorator {
public:
    CaramelDecorator(IceCream* ic): IceCreamDecorator(ic)  { } // ����������� ������������ �������� �������� ��������

    std::string getDescription() const override
    {
        return iceCream->getDescription() + " with Caramel";  // "��������" ��������� �����������
    }

    double cost() const override
    {
        return iceCream->cost() + 150.0; // ��������� ����������� 150
    }
};


class ChocolateDecorator : public IceCreamDecorator {
public:
    ChocolateDecorator(IceCream* ic) : IceCreamDecorator(ic) { }

    std::string getDescription() const override
    {
        return iceCream->getDescription() + " with Choco";  // "��������" ��������� �����������
    }

    double cost() const override
    {
        return iceCream->cost() + 30.0; // ��������� ����������� 150
    }
};