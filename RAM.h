#pragma once
#include "Global.h"
class RAM : public Component {
public:
    RAM(int size) : size(size) {}
    void display() const {
        std::cout << "RAM Size: " << size << " GB" << std::endl;
    }
private:
    int size;
};
