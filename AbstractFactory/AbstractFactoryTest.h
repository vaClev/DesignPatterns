#pragma once
#include "NewYorkPizzaFactory.h"
#include "ChicagoPizzaFactory.h"
/*У нас будет два вида пиццы: "Нью-Йорк" и "Чикаго", у каждого свой набор видов пиццы.
Шаг 1: Мы определим интерфейс абстрактной фабрики (PizzaFactory) с методами для создания разных типов пиццы для разных стилей.
Шаг 2: Мы создадим две конкретные фабрики (NewYorkPizzaFactory и ChicagoPizzaFactory), реализующие этот интерфейс, и создадим соответствующие пиццы в стиле Нью-Йорка и Чикаго.
Шаг 3: Мы создадим абстрактный интерфейс продукта (Pizza), который определяет методы, которые должны реализовывать конкретные пиццы.Конкретные классы пиццы 
(NewYorkCheesePizza, NewYorkPepperoniPizza, ChicagoCheesePizza, ChicagoPepperoniPizza) реализуют абстрактный интерфейс пиццы для каждого стиля.

Клиентский код будет создавать и готовить пиццу с использованием абстрактных фабрик и взаимодействовать с ними без необходимости знать конкретные стили пиццы или реализации.
*/
namespace AbstractFactory {
    static void abstractFactoryTest()
    {
        // Create a New York Pizza Factory
        PizzaFactory* newYorkFactory = new NewYorkPizzaFactory();
        Pizza* newYorkCheesePizza = newYorkFactory->createCheesePizza();
        Pizza* newYorkPepperoniPizza = newYorkFactory->createPepperoniPizza();

        // Create a Chicago Pizza Factory
        PizzaFactory* chicagoFactory = new ChicagoPizzaFactory();
        Pizza* chicagoCheesePizza = chicagoFactory->createCheesePizza();
        Pizza* chicagoPepperoniPizza = chicagoFactory->createPepperoniPizza();

        /*Две абстрактные фабрики дают возможность "программисту-клиенту" стандартно обращаться и получать разные "фабричные" объекты*/

        // Order and prepare the pizzas
        newYorkCheesePizza->bake();
        newYorkCheesePizza->cut();
        newYorkCheesePizza->box();

        newYorkPepperoniPizza->bake();
        newYorkPepperoniPizza->cut();
        newYorkPepperoniPizza->box();

        chicagoCheesePizza->bake();
        chicagoCheesePizza->cut();
        chicagoCheesePizza->box();

        chicagoPepperoniPizza->bake();
        chicagoPepperoniPizza->cut();
        chicagoPepperoniPizza->box();

        // Clean up
        delete newYorkFactory;
        delete newYorkCheesePizza;
        delete newYorkPepperoniPizza;
        delete chicagoFactory;
        delete chicagoCheesePizza;
        delete chicagoPepperoniPizza;
    }
}

/*
Преимущества абстрактного фабричного шаблона в шаблонах проектирования C ++
    Согласованность: Это гарантирует, что объекты, созданные фабрикой, совместимы и непротиворечивы в рамках семейства, улучшая целостность системы в целом.
    Гибкость: Шаблон позволяет легко добавлять новые семейства продуктов или вариации без изменения существующего клиентского кода.
    Инкапсуляция: Конкретные классы инкапсулируются в соответствующих фабриках, что уменьшает зависимости и упрощает управление изменениями.


Недостатки абстрактного фабричного шаблона в шаблонах проектирования C ++
    Сложность: Реализация шаблона может привести к появлению большого количества классов и интерфейсов, что потенциально увеличивает сложность кода.
    Жесткость: Модификация или расширение семейства продуктов может потребовать изменений во многих местах, что делает систему менее гибкой.
    Затраты времени выполнения: Создание объектов с помощью фабрик может привести к некоторым накладным расходам во время выполнения, хотя обычно они незначительны.
*/


