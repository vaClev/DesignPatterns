#pragma once
/*
Composite pattern - "�����������"  �������� ����� �� �������� ������ ������������ �������� � ������� 
� ������ ����� ������ � ������ ��������. 
�� ������������ ������ ���, ����� ������������ ����� ���������� � ��������� �������� ��� ��, ��� � ���������� ���� ��������� ��������, 

����������� - ��� ����������� ������� ��������������, ������� ��������� ������������� ��������� �������� � ����������� ���������,
� ����� �������� � ��� ���, ��� ����� ��� ��������� ������.


��������, �� ������ �������� ������������� �������� �� ����� ��� ��� �����,
������� �� ���� �������� ���������� �������, 
��� ���� �� ������ ������� �������� ����-����, ��� �� ������ �������� ������������� ��� ��� ��� ������.

*/

/*
� ������ � Photoshop, ��� �� ������ ��������� ��������� ��������, � ����� ��� ������� ���������� ����� ���������� ������,
��� ����� ������������ ��������� ��������� �������� �� ����� �������, � �� � ������� ���������� �������.
*/
#include "Page.h"
#include "Copy.h"
class CompositeTest {
public:
    void test()
    {
        Page aPage;
        Page bPage;
        Copy vkladki;
        vkladki.AddElement(aPage);
        vkladki.AddElement(bPage);

        vkladki.Add(aPage);
        aPage.Add(bPage);

        vkladki.Remove();
        bPage.Remove();
    }
};
/*
    Copy �������� � ���� Page. (������ Page)
    ��� ���� � Page � Copy  ��������� ���������� �������� PageObject.  -- ������� �������� � ���� ���������� ��������� ������ add - remove - delete.

    ��� ���� ����������� �������� � ��������  ����� - ���� �� ��������� ��� � � ���������� - � � ������. 
    (������� ����� ��� ��� ���� �������� �����������)
   
*/

/*
����� ����� ������ ���������� ������� � ����� ����� ������������ UI. 
���������� ����� ��������� UI, ��� ������ ������� UI �������� ������ ������� �� ��������� ������� ����������� ��������� UI ������� ������,
� ��� �������� UI �������� � ������� ������ ��������� �� ���� � �� �� ������� � ��������.
*/