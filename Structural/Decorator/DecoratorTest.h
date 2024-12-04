#pragma once
/*
* ������ Decorator � ��������� ����������� ��������� ����� ��������� ��� ����������� 
� ��������� �������� ��� ��������� �� ������� ��������� �������. 
��� ����������� ����� �������� ������ �������-�����������, ������� ������������ ��� ����������� ���������� �����������,
�������������� �������� ����������������.

		(����� ������ ������� � ��� �������������)
*/
/*
1. Component interface
��� ����������� ����� ��� ���������, ������� ���������� ����� ��������� ��� ��� ���������� �����������, ��� � ��� �����������. 
�� ���������� ��������, ������� ����� ���� ��������� ��� ���������.

2. Concete ComponentImpl
��� ������� ������� ��� ������, ����������� ��������� Component. 
��� �������, � ������� �� ����� �������� ����� ��������� ��� �����������.

3. Decorator - ��� ����������� �����, ������� ����� ��������� ��������� Component � ����� ������ �� ������ Component.
���������� �������� �� ���������� ����� ��������� � ���������� ������� Component.

4. Concrete Decorator
��� ���������� ������, ������� ��������� ����� Decorator. ��� ��������� ������������ ��������� ��� ����������� � Component. ������ ���������� Decorator ����� �������� ���� ��� ��������� ��������� � Component.
*/
#include<iostream>
#include "IceCream.h"
#include "VanillaIceCream.h"
#include "ConcreteDecorators.h"
class DecoratorTest {
public: 
    static void test() {
        // Create a vanilla ice cream
        IceCream* vanillaIceCream = new VanillaIceCream();
        std::cout << "Order: " << vanillaIceCream->getDescription()
            << ", Cost: Rs." << vanillaIceCream->cost()
            << std::endl;

        // ������� � ChocolateDecorator  
        IceCream* chocolateIceCream = new ChocolateDecorator(vanillaIceCream);
        std::cout << "Order: " << chocolateIceCream->getDescription()
            << ", Cost: Rs." << chocolateIceCream->cost()
            << std::endl;

        // ������� � CaramelDecorator �� ��� ��� �������� � ChocolateDecorator   --- ���� ������� ��������� ��������
        IceCream* caramelIceCream  = new CaramelDecorator(chocolateIceCream);
        std::cout << "Order: " << caramelIceCream->getDescription()
            << ", Cost: Rs." << caramelIceCream->cost()
            << std::endl;

        delete vanillaIceCream;
        delete chocolateIceCream;
        delete caramelIceCream;
	}
};