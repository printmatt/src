#include <iostream>
#include "Temperature_class.h"

int main() {
    //temnperature to be converted
    float temp = 68.0;
    //start with fahrenheit
    std::cout << "Fahrenheit: " << temp << std::endl;

    //Input degrees and system as F -> receive C and K outputs
    Temperature t(temp, Temperature::FAHRENHEIT);
    std::cout << "in Celsius: " << t.getCelsius() << std::endl;
    std::cout << "in Kelvin: " << t.getKelvin() << std::endl;

    std::cout << "Let's try with a 68 Kelvin input!\n";

    //Try starting with Kelvin
    Temperature k(temp, Temperature::KELVIN);
    std::cout << "in Fahrenheit: " << k.getFahrenheit() << std::endl;
    std::cout << "in Celsius: " << k.getCelsius() << std::endl;
    std::cout << "in Kelvin: " << k.getKelvin() << std::endl;


}