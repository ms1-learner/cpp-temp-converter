#include <iostream>

void convertCelsiusToFahrenheit() {
    std::cout << "Enter the temperature in Celsius: ";
    double celsius;
    std::cin >> celsius;

    double fahrenheit = (celsius * 9.0 / 5.0) + 32.0;
    
    std::cout << celsius << " degrees Celsius is " << fahrenheit << " degrees Fahrenheit." << std::endl;
}

void convertFahrenheitToCelsius() {
    std::cout << "Enter the temperature in Fahreinheit: ";
    double fahreinheit;
    std::cin >> fahreinheit;

    double celsius = 5.0 / 9.0 * (fahreinheit - 32.0);
    
    std::cout << fahreinheit << " degrees Fahrenheit is " << celsius << " degrees Celsius." << std::endl;
}

int main() {
    return 0;
}
