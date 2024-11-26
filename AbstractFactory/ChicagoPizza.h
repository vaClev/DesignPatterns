#pragma once
#include "Pizza.h"
#include <iostream>
// Concrete Chicago Cheese Pizza
class ChicagoCheesePizza : public Pizza {
public:
    void bake() override
    {
        std::cout << "Baking Chicago-style cheese pizza."
            << std::endl;
    }

    void cut() override
    {
        std::cout << "Cutting Chicago-style cheese pizza."
            << std::endl;
    }

    void box() override
    {
        std::cout << "Boxing Chicago-style cheese pizza."
            << std::endl;
    }
};

// Concrete Chicago Pepperoni Pizza
class ChicagoPepperoniPizza : public Pizza {
public:
    void bake() override
    {
        std::cout << "Baking Chicago-style pepperoni pizza."
            << std::endl;
    }

    void cut() override
    {
        std::cout
            << "Cutting Chicago-style pepperoni pizza."
            << std::endl;
    }

    void box() override
    {
        std::cout << "Boxing Chicago-style pepperoni pizza."
            << std::endl;
    }
};