#include <iostream>
#include <string>

void convertCelsiusToFahrenheit() {
    std::cout << "Enter the temperature in Celsius: ";
    double celsius;
    std::cin >> celsius;

    double fahrenheit = (celsius * 9.0 / 5.0) + 32.0;
    
    std::cout << celsius << " degrees Celsius is " << fahrenheit << " degrees Fahrenheit." << std::endl;
}

void convertFahrenheitToCelsius() {
    std::cout << "Enter the temperature in Fahrenheit: ";
    double fahrenheit;
    std::cin >> fahrenheit;

    double celsius = 5.0/ 9.0  * (fahrenheit - 32.0);
    
    std::cout << fahrenheit << " degrees Fahrenheit is " << celsius << " degrees Celsius." << std::endl;
}

void convertCelsiusToKelvin() {
    std::cout << "Enter the temperature in Celsius: ";
    double celsius;
    std::cin >> celsius;

    double kelvin = celsius - 273.15;
    
    std::cout << celsius << " degrees Celsius is " << kelvin << " degrees Kelvin." << std::endl;
}

void convertFahrenheitToKelvin() {
    std::cout << "Enter the temperature in Fahrenheit: ";
    double fahrenheit;
    std::cin >> fahrenheit;

    double kelvin = fahrenheit - -459.67;
    
    std::cout << fahrenheit << " degrees Fahrenheit is " << kelvin << " degrees Kelvin." << std::endl;
}

int main() {
    std::string input;
    int incorrect{1};

    while(incorrect){
    std::cout << "Enter fc if you want to convert from Fahrenheit to Celsius" << std::endl;
    std::cout << "Enter cf if you want to convert from Celsius to Fahrenheit" << std::endl;
    std::cout << "Enter fk if you want to convert from Fahrenheit to Kelvin" << std::endl;
    std::cout << "Enter ck if you want to convert from Celsius to Kelvin" << std::endl;
    std::cin  >> input;

        if (input == "fc"){
            convertFahrenheitToCelsius();
            incorrect = 0;
        } else if(input == "cf"){
            convertCelsiusToFahrenheit();
            incorrect = 0;
        } else if(input == "fk"){
            convertFahrenheitToKelvin();
            incorrect = 0;
        } else if(input == "ck"){
            convertCelsiusToKelvin();
            incorrect = 0;
        } else {
            std::cout << "Incorrect input. Please try again" << std::endl;
        } 
    }
    return 0;
}
