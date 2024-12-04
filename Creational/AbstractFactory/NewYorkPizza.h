#pragma once
#include "Pizza.h"
#include <iostream>
// Concrete New York Cheese Pizza
class NewYorkCheesePizza : public Pizza {
public:
    void bake() override
    {
        std::cout << "Baking New York-style cheese pizza."
            << std::endl;
    }

    void cut() override
    {
        std::cout << "Cutting New York-style cheese pizza."
            << std::endl;
    }

    void box() override
    {
        std::cout << "Boxing New York-style cheese pizza."
            << std::endl;
    }
};

// Concrete New York Pepperoni Pizza
class NewYorkPepperoniPizza : public Pizza {
public:
    void bake() override
    {
        std::cout
            << "Baking New York-style pepperoni pizza."
            << std::endl;
    }

    void cut() override
    {
        std::cout
            << "Cutting New York-style pepperoni pizza."
            << std::endl;
    }

    void box() override
    {
        std::cout
            << "Boxing New York-style pepperoni pizza."
            << std::endl;
    }
};

