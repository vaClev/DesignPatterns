#pragma once
#include <iostream>

//класс продукта у которого нет конструктора для инициализации.
class Computer {
private:
    std::string cpu_;
    std::string memory_;
    std::string storage_;

public:
    void setCPU(const std::string& cpu) {
        cpu_ = cpu;
    }

    void setMemory(const std::string& memory) {
        memory_ = memory;
    }

    void setStorage(const std::string& storage) {
        storage_ = storage;
    }

    void display() {
        std::cout << "CPU: " << cpu_ << std::endl;
        std::cout << "Memory: " << memory_ << std::endl;
        std::cout << "Storage: " << storage_ << std::endl;
    }
};