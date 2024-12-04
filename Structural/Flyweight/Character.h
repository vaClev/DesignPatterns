#pragma once
#include <iostream>

// Flyweight class
class Character {
private:
    char m_intrinsicState;

public:
    Character(char intrinsicState) : m_intrinsicState(intrinsicState) {}

    void draw(int extrinsicState) {
        std::cout << "Drawing character '" << m_intrinsicState << "' at position " << extrinsicState << std::endl;
    }
};

