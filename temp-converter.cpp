#include <iostream>

void convertCelsiusToFahrenheit() {
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

    double celsius = (fahrenheit - 32.0) / 9.0 * 5.0;

    std::cout << fahrenheit << " degrees Fahrenheitis " << celsius << " degrees Celsius." << std::endl;
}

int main() {
    std::cout << "Enter c if you want to convert from Fahrenheit to Celsius" << std::endl;
    std::cout << "Enter f if you want to convert from Celsius to Fahrenheit" << std::endl;
    std::string command; std::cin >> command;
    if(command == "c"){
        convertFahrenheitToCelsius();
        return;
    }
    if(command == "f"){
        convertCelsiusToFahrenheit();
        return;
    }
    std::cout << "Incorrect input. Please try again later" << std ::endl;

    return 0;
}
