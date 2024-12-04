#pragma once
#include "ShapesAbstraction.h"
#include "Renderer.h"

namespace Bridge
{
    /*Circle � Square � ��� ���������� ������ �����, ����������� �� ������������ ������ Shape.
    ������ �� ��� ����� ���� ���� Renderer ��� �������� ������ �� ���������� ���������.*/
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