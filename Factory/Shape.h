#pragma once

//Здесь мы определили абстрактный класс Shape с чисто виртуальной функцией draw().
//  Этот класс представляет абстрактный продукт, от которого должны наследоваться все конкретные продукты.
namespace FactoryMethod {
    class Shape
    {
    public:
        virtual void draw() = 0;
        virtual ~Shape() {} // Virtual destructor for polymorphism
    };
}


