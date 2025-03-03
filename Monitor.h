#pragma once
#include "Global.h"

class Monitor : public Component {
public:
    Monitor(std::string brand, int size) : brand(brand), size(size) {}
    void display() const {
        std::cout << "Monitor Brand: " << brand << ", Size: " << size << " inches" << std::endl;
    }
private:
    std::string brand;
    int size;
};
