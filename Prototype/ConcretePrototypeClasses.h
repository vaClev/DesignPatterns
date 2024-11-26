#pragma once
#include <iostream>
#include "InterfacePrototype.h"
namespace PrototypePattern {
        
    //Шаг 2: Создание конкретных классов-прототипов  
    class Circle : public Shape {
    private:
        double radius;

    public:
        Circle(double r) : radius(r) {}

        Shape* clone() const override {
            return new Circle(*this);
            /*
            По умолчанию компилятор C++ при компиляции классов генерирует специальный конструктор - конструктор копирования,
            который позволяет создать объект на основе другого объекта (по сути копирует объект). 
            Конструктор копирования по умолчанию копирует значения полей объекта, в новый объект.

            -- в Java конструктор копирования сам не отработает. Т.к. там все непримитивныее поля передаются по ссылкам.
            */
        }

        void draw() const override {
            std::cout << "Drawing a circle with radius " << radius << std::endl;
        }
    };

    //второй конкретный класс-прототип
    class Rectangle : public Shape {
    private:
        double width;
        double height;

    public:
        Rectangle(double w, double h) : width(w), height(h) {}

        Shape* clone() const override {
            return new Rectangle(*this);
        }

        void draw() const override {
            std::cout << "Drawing a rectangle with width " << width << " and height " << height << std::endl;
        }
    };
}
