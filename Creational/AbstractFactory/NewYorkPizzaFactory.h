#pragma once
#include "PizzaFactory.h"
#include "NewYorkPizza.h"
class NewYorkPizzaFactory : public PizzaFactory
{
public:
    Pizza* createCheesePizza() override
    {
        return new NewYorkCheesePizza();
    }

    Pizza* createPepperoniPizza() override
    {
        return new NewYorkPepperoniPizza();
    }
};

