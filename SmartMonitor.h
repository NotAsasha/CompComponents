#pragma once
#include "Monitor.h"
#include "Speaker.h"

class SmartMonitor : public Monitor, public Speaker {
public:
    SmartMonitor(std::string brand, int size, int maxVolume)
        : Monitor(brand, size), Speaker(maxVolume), brightness(50) {}

    void increaseBrightness() {
        if (brightness < 100) {
            brightness += 10;
            std::cout << "Brightness increased to: " << brightness << "%" << std::endl;
        }
        else {
            std::cout << "Brightness is at max!" << std::endl;
        }
    }

    void decreaseBrightness() {
        if (brightness > 0) {
            brightness -= 10;
            std::cout << "Brightness decreased to: " << brightness << "%" << std::endl;
        }
        else {
            std::cout << "Brightness is at min!" << std::endl;
        }
    }

    void showInfo() const {
        Monitor::display();
        Speaker::displayVolume();
        std::cout << "Brightness: " << brightness << "%" << std::endl;
    }

private:
    int brightness;
};