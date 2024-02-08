#include <iostream>
#include <string>

void convertFahrenheitToCelsius()
{
    std::cout << "Enter the temperature in Fahrenheit: ";
    double fahrenheit;
    std::cin >> fahrenheit;

    double celsius = (5.0 / 9.0) * (fahrenheit - 32.0);

    std::cout << fahrenheit << " degrees Fahrenheit is " << celsius << " degrees Celsius." << std::endl;
}

void convertCelsiusToFahrenheit()
{
    std::cout << "Enter the temperature in Celsius: ";
    double celsius;
    std::cin >> celsius;

    double fahrenheit = (celsius * 9.0 / 5.0) + 32.0;

    std::cout << celsius << " degrees Celsius is " << fahrenheit << " degrees Fahrenheit." << std::endl;
}

void convertKelvinToCelsius()
{
    std::cout << "Enter the temperature in Kelvin: ";
    double kelvin;
    std::cin >> kelvin;

    double celsius = kelvin - 273.15;

    std::cout << kelvin << " degrees Celsius is " << celsius << " degrees Fahrenheit." << std::endl;
}

void convertKelvinToFahrenheit()
{
    std::cout << "Enter the temperature in Kelvin: ";
    double kelvin;
    std::cin >> kelvin;

    double fahrenheit = ((kelvin - 273.15) * 1.8) + 32.0;

    std::cout << kelvin << " degrees Celsius is " << fahrenheit << " degrees Fahrenheit." << std::endl;
}

int main()
{
    std::string input;

    while (1)
    {
        std::cout << "Enter fc if you want to convert from Fahrenheit to Celsius" << std::endl;
        std::cout << "Enter cf if you want to convert from Celsius to Fahrenheit" << std::endl;
        std::cout << "Enter kf if you want to convert from Kelvin to Fahrenheit" << std::endl;
        std::cout << "Enter kc if you want to convert from Kelvin to Celsius" << std::endl;

        std::cin >> input;

        if (input == "cf")
        {
            convertCelsiusToFahrenheit();
            break;
        }
        else if (input == "fc")
        {
            convertFahrenheitToCelsius();
            break;
        }
        else if (input == "kf")
        {
            convertKelvinToFahrenheit();
            break;
        }
        else if (input == "kc")
        {
            convertKelvinToCelsius();
            break;
        }
        else
        {
            std::cout << "Incorrect input. Please try again!" << std::endl;
        }
    }
    return 0;
}
