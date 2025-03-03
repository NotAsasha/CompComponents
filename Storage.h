#pragma once
#include "Global.h"
class Storage : public Component {
public:
    Storage(std::string type, int capacity) : type(type), capacity(capacity) {}
    void display() const {
        std::cout << "Storage: " << type << " " << capacity << " GB" << std::endl;
    }
private:
    std::string type;
    int capacity;
};
