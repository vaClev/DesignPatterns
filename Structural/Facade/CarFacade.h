#pragma once
#include <iostream>
#include "Subsystems.h"

//Класс Car является фасадом.   Содержит подсистемы   --- реализует лоступный пользоваелю "упрощенный" интерфейс
class Car {
private:
    Engine engine;
    Lights lights;
    //может быть больше подсистем

public:
    void StartCar()
    {
        engine.Start();
        lights.TurnOn();
        //тут могло быть еще больше всяких методов
        std::cout << "Car is ready to drive" << std::endl;
    }

    void StopCar()
    {
        lights.TurnOff();
        engine.Stop();
        //тут могло быть еще больше всяких методов
        std::cout << "Car has stopped" << std::endl;
    }
};