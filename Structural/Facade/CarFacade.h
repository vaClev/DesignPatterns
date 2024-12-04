#pragma once
#include <iostream>
#include "Subsystems.h"

//����� Car �������� �������.   �������� ����������   --- ��������� ��������� ����������� "����������" ���������
class Car {
private:
    Engine engine;
    Lights lights;
    //����� ���� ������ ���������

public:
    void StartCar()
    {
        engine.Start();
        lights.TurnOn();
        //��� ����� ���� ��� ������ ������ �������
        std::cout << "Car is ready to drive" << std::endl;
    }

    void StopCar()
    {
        lights.TurnOff();
        engine.Stop();
        //��� ����� ���� ��� ������ ������ �������
        std::cout << "Car has stopped" << std::endl;
    }
};