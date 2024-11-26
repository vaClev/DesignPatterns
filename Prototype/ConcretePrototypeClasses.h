#pragma once
#include <iostream>
#include "InterfacePrototype.h"
namespace PrototypePattern {
        
    //��� 2: �������� ���������� �������-����������  
    class Circle : public Shape {
    private:
        double radius;

    public:
        Circle(double r) : radius(r) {}

        Shape* clone() const override {
            return new Circle(*this);
            /*
            �� ��������� ���������� C++ ��� ���������� ������� ���������� ����������� ����������� - ����������� �����������,
            ������� ��������� ������� ������ �� ������ ������� ������� (�� ���� �������� ������). 
            ����������� ����������� �� ��������� �������� �������� ����� �������, � ����� ������.

            -- � Java ����������� ����������� ��� �� ����������. �.�. ��� ��� �������������� ���� ���������� �� �������.
            */
        }

        void draw() const override {
            std::cout << "Drawing a circle with radius " << radius << std::endl;
        }
    };

    //������ ���������� �����-��������
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
