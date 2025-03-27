#include "Global.h"
#include "CPU.h"
#include "RAM.h"
#include "Storage.h"
#include "SmartMonitor.h"



class Computer {
public:
    Computer(std::string cpuModel, int ramSize, std::string storageType, int storageCapacity)
        : cpu(new CPU(cpuModel)), ram(new RAM(ramSize)), storage(new Storage(storageType, storageCapacity)), monitor(nullptr) {}

    ~Computer() {
        delete cpu;
        delete ram;
        delete storage;
    }

    void AddMonitor(Monitor* monitor) {
        this->monitor = monitor;
    }

    void Display() const {
        std::cout << "Computer Specssss:" << std::endl;
        cpu->display();
        ram->display();
        storage->display();
        if (monitor) {
            monitor->display();
        }
        else {
            std::cout << "No monitor :(" << std::endl;
        }
    }

private:
    Component* cpu;        
    Component* ram;       
    Component* storage;   
    Monitor* monitor; 
};


int main() {


    Computer myComputer("Intel i6", 31, "SSD", 513);


    SmartMonitor mySmartMonitor("NotAMonitor", 27, 100);
    myComputer.AddMonitor(&mySmartMonitor);

    myComputer.Display();

    std::cout << "\nTesting smart monitor features:\n";
    mySmartMonitor.turnOn();
    mySmartMonitor.increaseBrightness();
    mySmartMonitor.increaseVolume();
    return 0;
}
