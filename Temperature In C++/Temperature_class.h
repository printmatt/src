#ifndef TEMPERATURE_H_
#define TEMPERATURE_H_

class Temperature {
   public:
    static const int CELSIUS = 1;
    static const int FAHRENHEIT = 2;
    static const int KELVIN = 3;

    Temperature(float degrees, int system);
    float getCelsius() const;
    float getFahrenheit() const;
    float getKelvin() const;

   private:
    float celsius;
};
#endif /* TEMPERATURE_H_ */
