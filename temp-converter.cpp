#include <iostream>

void convertFahrenheitToCelsius() {
    std::cout << "Enter the temperature in Fahrenheit: ";
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
    char input;

    std::cout << "Enter c if you want to convert from Fahrenheit to Celsius" << std::endl;
    std::cout << "Enter f if you want to convert from Celsius to Fahrenheit" << std::endl;

    std::cin >> input;

    if(input == 'c'){
        convertCelsiusToFahrenheit();
    }
    else if(input == 'f'){
        convertFahrenheitToCelsius();
    }
    else{
        std::cout << "Incorrect input. Please try again later" << std::endl;
    }

    return 0;
}
