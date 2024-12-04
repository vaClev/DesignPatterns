#pragma once
#include <iostream>
namespace PrototypePattern {

    //абстрактный базовый класс
    class Shape {
    public:
        virtual Shape* clone() const = 0; // Clone method for creating copies.
        virtual void draw() const = 0;   // Draw method for rendering the shape.
        virtual ~Shape() {}              // Virtual destructor for proper cleanup.
    };
}