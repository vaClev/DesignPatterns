#pragma once
#include "ShapesAbstraction.h"
#include "Renderer.h"

namespace Bridge
{
    /*Circle и Square — это конкретные классы фигур, производные от абстрактного класса Shape.
    Каждый из них имеет член типа Renderer для хранения ссылки на реализацию рендерера.*/
    class Circle : public Shape {
    public:
        Circle(Renderer& renderer) : renderer(renderer) {}

        void draw() override {
            std::cout << "Drawing a circle ";
            renderer.render();
        }

    private:
        Renderer& renderer;
    };

    class Square : public Shape {
    public:
        Square(Renderer& renderer) : renderer(renderer) {}

        void draw() override {
            std::cout << "Drawing a square ";
            renderer.render();
        }

    private:
        Renderer& renderer;
    };
}