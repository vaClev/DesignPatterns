#pragma once
// Abstract Product Interface
class Pizza
{
public:
    virtual void bake() = 0; //  "=0" - ����� ����������� ������� --- ������� ���� ���������� � �����������
    virtual void cut() = 0;
    virtual void box() = 0;
};

