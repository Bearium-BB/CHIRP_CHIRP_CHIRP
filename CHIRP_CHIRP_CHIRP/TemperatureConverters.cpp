#include "TemperatureConverters.hpp"
#include <iostream>

void fahrenheitToCelsius(int input)
{

    double temp = ((double)input - 32) * 5 / 9;

    std::cout << temp << " Celsius" << std::endl;
}

void celsiusToFahrenheit(int input)
{
    double temp = ((double)input * 9 / 5) + 32;

    std::cout << temp << " Fahrenheit" << std::endl;
}

void chirpsToFahrenheit(int input)
{
    input *= 4;
    double temp = 50 + ((double)input - 40) / 4;

    std::cout << temp << " Fahrenheit" << std::endl;
    fahrenheitToCelsius(temp);

    if (temp < 50) {
        std::cout << "This may be an invalid temperature because it's under 50."
            << std::endl;
    }
}