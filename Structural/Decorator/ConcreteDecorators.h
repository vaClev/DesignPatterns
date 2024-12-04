#pragma once
#include "IceCreamDecorator.h"
class CaramelDecorator : public IceCreamDecorator {
public:
    CaramelDecorator(IceCream* ic): IceCreamDecorator(ic)  { } // конструктор пробрасывает родителю параметр создания

    std::string getDescription() const override
    {
        return iceCream->getDescription() + " with Caramel";  // "карамель" добавлено декоратором
    }

    double cost() const override
    {
        return iceCream->cost() + 150.0; // добавлено декоратором 150
    }
};


class ChocolateDecorator : public IceCreamDecorator {
public:
    ChocolateDecorator(IceCream* ic) : IceCreamDecorator(ic) { }

    std::string getDescription() const override
    {
        return iceCream->getDescription() + " with Choco";  // "карамель" добавлено декоратором
    }

    double cost() const override
    {
        return iceCream->cost() + 30.0; // добавлено декоратором 150
    }
};