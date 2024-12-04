#pragma once
#include "Pizza.h"
class PizzaFactory
{
public:
    virtual Pizza* createCheesePizza() = 0;
    virtual Pizza* createPepperoniPizza() = 0;
};

