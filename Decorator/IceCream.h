#pragma once
#include<iostream>
// Component interface - определяет базовые методы Мороженного
class IceCream {
public:
    virtual std::string getDescription() const = 0;
    virtual double cost() const = 0;
};
