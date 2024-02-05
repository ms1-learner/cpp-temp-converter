#include <iostream>

void convertCelsiusToFahrenheit() {
    std::cout << "Enter the temperature in Celsius: ";
    double fahrenheit;
    std::cin >> fahrenheit;

    double celsius = (5.0 / 9.0)  * (fahrenheit - 32.0);
    
    std::cout << fahrenheit << " degrees Fahrenheit is " << celsius << " degrees Celsius." << std::endl;
}

void convertCelsiusToFahrenheit() {
    std::cout << "Enter the temperature in Celsius: ";
    double celsius;
    std::cin >> celsius;

    double fahrenheit = (celsius * 9.0 / 5.0) + 32.0;
    
    std::cout << celsius << " degrees Celsius is " << fahrenheit << " degrees Fahrenheit." << std::endl;
}

int main() {
    return 0;
}
