#pragma once
#include <iostream>
#include <unordered_map>
#include "Character.h"

// Flyweight factory
class CharacterFactory {
public:
    Character* getCharacter(char key) {
        if (m_characters.find(key) == m_characters.end()) {
            m_characters[key] = new Character(key);
        }
        return m_characters[key];
    }
private:
    std::unordered_map<char, Character*> m_characters;
};