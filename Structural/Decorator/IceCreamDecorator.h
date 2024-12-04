#pragma once
#include "IceCream.h"

// Decorator - abstract class that extends IceCream.
class IceCreamDecorator :public IceCream {
protected:
	IceCream* iceCream;
public:
	IceCreamDecorator(IceCream* ic) : iceCream(ic){} //���������� �������� ������������� ������

    std::string getDescription() const override
    {
        return iceCream->getDescription();
    }

    double cost() const override
    {
        return iceCream->cost();
    }
};
