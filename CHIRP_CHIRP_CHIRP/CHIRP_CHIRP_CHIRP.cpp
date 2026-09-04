

#include <iostream>
#include <limits>
#include "TemperatureConverters.hpp"


int inputIsNumVal()
{
    int number;

    while (!(std::cin >> number)) {
        std::cout << "Invalid input.";

        std::cin.clear();
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
    }

    return number;
}

int main()
{
    bool isRun = 1;

    while (isRun)
    {

        std::cout << "1: Chirps to fahrenheit " << std::endl;
        std::cout << "2: Fahrenheit to celsius" << std::endl;
        std::cout << "3: Celsius to fahrenheit" << std::endl;
        std::cout << "4: Exit" << std::endl;



        {
            int input = 0;

            input = inputIsNumVal();

            switch (input) {
            case 1:
                std::cout << "Input: ";
                chirpsToFahrenheit(inputIsNumVal());
                break;
            case 2:
                std::cout << "Input: ";
                fahrenheitToCelsius(inputIsNumVal());
                break;
            case 3:
                std::cout << "Input: ";
                celsiusToFahrenheit(inputIsNumVal());
                break;
            case 4:
                isRun = 0;
                break;
            default:
                break;
            }
        }



    }

}