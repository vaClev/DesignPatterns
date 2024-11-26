#pragma once
#include "ComputerBuilder.h"
// Concrete Builder  --- BuilderImplemetation
class DesktopComputerBuilder : public ComputerBuilder {
public:
    DesktopComputerBuilder() {
        computer_ = Computer();
    }

    void buildCPU(const std::string& cpu) override {
        computer_.setCPU(cpu);
    }

    void buildMemory(const std::string& memory) override {
        computer_.setMemory(memory);
    }

    void buildStorage(const std::string& storage) override {
        computer_.setStorage(storage);
    }

    Computer getResult() override {
        return computer_;
    }

private:
    Computer computer_;
};
