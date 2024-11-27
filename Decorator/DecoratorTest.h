#pragma once
/*
* Шаблон Decorator — позволяет динамически добавлять новые поведения или обязанности 
к отдельным объектам без изменения их базовой структуры классов. 
Это достигается путем создания набора классов-декораторов, которые используются для обертывания конкретных компонентов,
представляющих основную функциональность.

		(грубо говоря обертка с доп возможностями)
*/
/*
1. Component interface
Это абстрактный класс или интерфейс, который определяет общий интерфейс как для конкретных компонентов, так и для декораторов. 
Он определяет операции, которые могут быть выполнены над объектами.

2. Concete ComponentImpl
Это базовые объекты или классы, реализующие интерфейс Component. 
Это объекты, к которым мы хотим добавить новое поведение или обязанности.

3. Decorator - Это абстрактный класс, который также реализует интерфейс Component и имеет ссылку на объект Component.
Декораторы отвечают за добавление новых поведений к обернутому объекту Component.

4. Concrete Decorator
Это конкретные классы, которые расширяют класс Decorator. Они добавляют определенные поведения или обязанности к Component. Каждый конкретный Decorator может добавить одно или несколько поведений к Component.
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

        // обернем в ChocolateDecorator  
        IceCream* chocolateIceCream = new ChocolateDecorator(vanillaIceCream);
        std::cout << "Order: " << chocolateIceCream->getDescription()
            << ", Cost: Rs." << chocolateIceCream->cost()
            << std::endl;

        // обернем в CaramelDecorator то что уже обернуто в ChocolateDecorator   --- типо двойная декорация возможна
        IceCream* caramelIceCream  = new CaramelDecorator(chocolateIceCream);
        std::cout << "Order: " << caramelIceCream->getDescription()
            << ", Cost: Rs." << caramelIceCream->cost()
            << std::endl;

        delete vanillaIceCream;
        delete chocolateIceCream;
        delete caramelIceCream;
	}
};