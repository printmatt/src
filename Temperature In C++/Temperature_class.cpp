#include "Temperature_class.h"

//constructor method. convert input temperature to base Celsius
Temperature::Temperature(float degrees, int system)
{
    //initialize celsius depends on which system was entered
    if (system == Temperature::CELSIUS)
        Temperature::celsius = degrees;
    else if (system == Temperature::FAHRENHEIT)
        Temperature::celsius = (degrees - 32) / 1.8;
    else if (system == Temperature::KELVIN)
        Temperature::celsius = degrees - 273.15;
}

//return celsius as it is
float Temperature::getCelsius() const {
    return celsius;
}

//return after converting celsius  to fahrenheit
float Temperature::getFahrenheit() const {
    return celsius*1.8 +32;
}

//return after converting celsius to Kelvin
float Temperature::getKelvin() const{
    return celsius + 273.15;
}