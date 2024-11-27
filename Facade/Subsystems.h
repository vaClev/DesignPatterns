#pragma once
#include <iostream>

// Subsystem 1
class Engine {
public:
    void Start()
    {
        std::cout << "Engine started" << std::endl;
    }

    void Stop()
    {
        std::cout << "Engine stopped" << std::endl;
    }
};

// Subsystem 2
class Lights {
public:
    void TurnOn() { std::cout << "Lights on" << std::endl; }

    void TurnOff()
    {
        std::cout << "Lights off" << std::endl;
    }
};