#pragma once
/* Bridge ������������ ��� ��������� ���������� ������� �� ��� ����������.
�������� �������, ����� ��� ����� �������� ���������� �������� ����� ����������� � �� �����������.*/

/*�����������, ��� �� ����� ������� ��������� ��� ���������, � ������� ���� ������ ����� (��������, ����� � ��������)
� ������ ������ ���������� (��������, ������ � �����). 
������ Bridge ����� ������ ��� �������� ����� (����������) �� ������� ���������� (����������).*/
#include "Renderer.h" 
#include "ConcreteShapes.h"
#include "ShapesAbstraction.h"

namespace Bridge {
    static void test() {
        VectorRenderer vectorRenderer;
        RasterRenderer rasterRenderer;

        Circle circle(vectorRenderer);
        Square square(rasterRenderer);

        circle.draw();  // Output: Drawing a circle Rendering as a vector
        square.draw();  // Output: Drawing a square Rendering as a raster
    }
}
/*
* �������� ���������� �������� Bridge
    ���������� Abstractions: ��� ��������������� ����� ������� ��� ����, ������� ���������� ��������� ��� ����������� ����. 
    �� ����, ��� �������� ������ �� ������ ����������, �� �� ��������� ���� ���������. 
    ���������� ���������� ������ � ��������, ������� ����� ������������ ���������� ���.

    ������������������� ����������: ��� ���������� ������, ������� ��������� ���������� � ������������� ���������� ���������� ���������������� ����������.
    ������������������� ���������� � ��� ��, � ��� ��������������� ���������� ���.

    Implementation: ��� �������������� ����� ������� ��� ����, ������� ���������� ��������� ��� ���������� ������������ ����������������. 
    ���������� �������� �� ���������� � ����� ��������������� ����������. ��� ����� ����� ��������� ����������, ������ �� ������� ����� 
    �������������� ���������� ����������� ������������.

    Concrete Implementation: ��� � �������� ���������� ������, ������� ��������� ��������� ������� ������.
    ������ ���������� ���������� ������������ ������������ ������ ���������� ������� ����������������.
    ����� ���� ��������� ���������� ���������� ��� ������ ��������, ��� ������ ��� ����������.
*/

/*
� ����������� ���� �������:

Abstractions: � Shape � � ��� ����������, �������������� ����� ��������� ������, ������� ����� ����������.
Implementations: � Renderer � � ��� ����������, �������������� ��������� ������ ����������.

Concrete Abstraction: �Circle� � � Square� � ��� ���������� ����������, � ��� ��������� �� ������ �Renderer� ,
            ��� ��������� �������� �����, ��������� ��������� ������ ����������.
*/