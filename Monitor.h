#pragma once
#include "Global.h"

class Monitor : public Component {
public:
    Monitor(std::string brand, int size) : brand(brand), size(size), resolution("1920x1080") {}

    void display() const {
        std::cout << "Monitor Brand: " << brand << ", Size: " << size << " inches, Resolution: " << resolution << std::endl;
    }

    void changeResolution(std::string newResolution) {
        resolution = newResolution;
        std::cout << "Resolution changed to: " << resolution << std::endl;
    }

    void turnOn() const {
        std::cout << brand << " monitor is now ON." << std::endl;
    }

    void turnOff() const {
        std::cout << brand << " monitor is now OFF." << std::endl;
    }

private:
    std::string brand;
    int size;
    std::string resolution;
};