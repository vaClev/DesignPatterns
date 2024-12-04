#include <iostream>
#include "SquareFactory.h"
#include "CircleFactory.h"

namespace FactoryMethod {
    static void fabricMethodTest()
    {
        ShapeFactory* circleFactory = new CircleFactory();
        ShapeFactory* squareFactory = new SquareFactory();

        Shape* circle = circleFactory->createShape();
        Shape* square = squareFactory->createShape();

        circle->draw(); // Output: Drawing a Circle
        square->draw(); // Output: Drawing a Square

        delete circleFactory;
        delete squareFactory;
        delete circle;
        delete square;
    }
}
/*
    Преимущества фабричного метода
Ниже приведены основные преимущества шаблона фабричного метода:

    Отделяет логику создания от клиентского кода, повышая гибкость.
    Можно легко добавлять новые типы продуктов.
    Упрощает модульное тестирование, позволяя создавать макет продукта.
    Централизует логику создания объектов во всем приложении.
    Скрывает определенные классы продуктов от клиентов, уменьшая зависимость.

Недостатки фабричного метода
Ниже приведены основные преимущества шаблона фабричного метода:

    Добавляет больше классов и интерфейсов, что может усложнить обслуживание.
    Небольшое влияние на производительность из-за полиморфизма.
    Конкретные создатели связаны со своими продуктами.
    Клиентам необходимы знания о конкретных подклассах.
    Слишком широкое применение может привести к ненужной сложности.
    Тестировать заводскую логику бывает сложнее.
*/


