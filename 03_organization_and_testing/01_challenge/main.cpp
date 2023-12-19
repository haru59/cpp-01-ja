#include <iostream>
#include "temp_sensor.h"

int main() {
    //std::cout << "Temperature reading: " << readTemperature() << std::endl;
    std::cout << "Temperature reading: " << Sensor::readTemperature() << std::endl;//Sensor::を追加
    return 0;
}