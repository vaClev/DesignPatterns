#pragma once

//����� �� ���������� ����������� ����� Shape � ����� ����������� �������� draw().
//  ���� ����� ������������ ����������� �������, �� �������� ������ ������������� ��� ���������� ��������.
namespace FactoryMethod {
    class Shape
    {
    public:
        virtual void draw() = 0;
        virtual ~Shape() {} // Virtual destructor for polymorphism
    };
}


