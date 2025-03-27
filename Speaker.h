#pragma once

#include <iostream>
using namespace std;
class Speaker {
public:
    Speaker(int maxVolume = 100) : volume(10), maxVolume(maxVolume) {}

    void increaseVolume() {
        if (volume < maxVolume) {
            volume += 10;
            std::cout << "Volume added to: " << volume << "%" << std::endl;
        }
        else {
            std::cout << "Volume is at max!" << std::endl;
        }
    }

    void decreaseVolume() {
        if (volume > 0) {
            volume -= 10;
            std::cout << "Volume decreased to: " << volume << "%" << std::endl;
        }
        else {
            std::cout << "Volume is at min!" << std::endl;
        }
    }

    void displayVolume() const {
        std::cout << "Current volume: " << volume << "%" << std::endl;
    }

private:
    int volume;
    int maxVolume;
};