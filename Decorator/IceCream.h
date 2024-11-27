#pragma once
#include<iostream>
// Component interface - определ€ет базовые методы ћороженного
class IceCream {
public:
    virtual std::string getDescription() const = 0;
    virtual double cost() const = 0;
};
