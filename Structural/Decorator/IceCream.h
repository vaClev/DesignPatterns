#pragma once
#include<iostream>
// Component interface - ���������� ������� ������ �����������
class IceCream {
public:
    virtual std::string getDescription() const = 0;
    virtual double cost() const = 0;
};
