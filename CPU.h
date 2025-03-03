#pragma once
#include "Global.h"
class CPU : public Component {
public:
    CPU(std::string model) : model(model) {}
    void display() const {
        std::cout << "CPU Model: " << model << std::endl;
    }
private:
    std::string model;
};
