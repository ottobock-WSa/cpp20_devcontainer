#include <iostream>
#include <string>
#include "sensor.hpp"


int main(int argc, char const *argv[]){

    TemperatureSensor sT;
    HumiditySensor sH;

    std::cout << "Temperature: "  << sT.read() << std::endl;
    std::cout << "Humidity: "  << sH.read() << std::endl;


}