#pragma once
#include "PizzaFactory.h"
#include "ChicagoPizza.h"
class ChicagoPizzaFactory : public PizzaFactory
{
public:
    Pizza* createCheesePizza() override
    {
        return new ChicagoCheesePizza();
    }

    Pizza* createPepperoniPizza() override
    {
        return new ChicagoPepperoniPizza();
    }
};

