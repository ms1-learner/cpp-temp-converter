#include <iostream>
#include <string>

void convertCelsiusToFahrenheit()
{
    std::cout << "Enter the temperature in Celsius: ";
    double celsius;
    std::cin >> celsius;

    double fahrenheit = (celsius * 9.0 / 5.0) + 32.0;

    std::cout << celsius << " degrees Celsius is " << fahrenheit << " degrees Fahrenheit." << std::endl;
}

void convertFahrenheitToCelsius()
{
    std::cout << "Enter the temperature in Fahrenheit: ";
    double fahrenheit;
    std::cin >> fahrenheit;

    double celsius = 5.0 / 9.0 * (fahrenheit - 32.0);

    std::cout << fahrenheit << " degrees Fahrenheit is " << celsius << " degrees Celsius." << std::endl;
}

int main()
{
    while (1)
    {
        std::string user_input;
        std::cout << "Enter c if you want to convert from Fahrenheit to Celsius" << std::endl;
        std::cout << "Enter f if you want to convert from Celsius to Fahrenheit" << std::endl;
        std::cin >> user_input;
        if (user_input == "c")
        {
            convertFahrenheitToCelsius();
            break;
        }
        else if (user_input == "f")
        {
            convertCelsiusToFahrenheit();
            break;
        }
        else
        {
            std::cout << "Incorrect input. Please try again." << std::endl;
        }
    }

    return 0;
}
