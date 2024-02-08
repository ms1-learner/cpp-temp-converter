#include <iostream>
#include <string>

double convertCelsiusToFahrenheit(double celsius) {
    return ((celsius * 9.0 / 5.0) + 32.0);
}

double convertCelsiusToKelvin(double celsius) {
    return (celsius + 273.15);
}

double convertFahrenheitToCelsius(double fahrenheit) {
    return (5.0 / 9.0 * (fahrenheit - 32.0));
}

double convertFahrenheitToKelvin(double fahrenheit) {
    return convertCelsiusToKelvin(convertFahrenheitToCelsius(fahrenheit));
}

double convertKelvinToCelsius(double kelvin) {
    return (kelvin - 273.15);
}

double convertKelvinToFahrenheit(double kelvin) {
    return convertCelsiusToFahrenheit(convertKelvinToCelsius(kelvin));
}

void convertFromCelsius() {
    std::cout << "Enter the temperature in Celsius: ";
    double celsius;
    std::cin >> celsius;

    double fahrenheit = convertCelsiusToFahrenheit(celsius);
    double kelvin = convertCelsiusToKelvin(celsius);
    
    std::cout << celsius << " degrees Celsius = " << fahrenheit << " degrees Fahrenheit, " << kelvin << " Kelvin." << std::endl;
}

void convertFromFahrenheit() {
    std::cout << "Enter the temperature in Fahrenheit: ";
    double fahrenheit;
    std::cin >> fahrenheit;

    double celsius = convertFahrenheitToCelsius(fahrenheit);
    double kelvin = convertFahrenheitToKelvin(fahrenheit);
    
    std::cout << fahrenheit << " degrees Fahrenheit = " << celsius << " degrees Celsius, " << kelvin << " Kelvin." << std::endl;
}

void convertFromKelvin() {
    std::cout << "Enter the temperature in Kelvin: ";
    double kelvin;
    std::cin >> kelvin;

    double celsius = convertKelvinToCelsius(kelvin);
    double fahrenheit = convertKelvinToFahrenheit(kelvin);
    
    std::cout << fahrenheit << " degrees Fahrenheit is " << celsius << " degrees Celsius, " << kelvin << " Kelvin." << std::endl;
}

int main() {
    std::cout << "Select the unit to convert. (f:Fahrenheit, c:Celsius, k:Kelvin)" << std::endl;

    std::string user_input;
    while (true) {
        std::cout << ">> ";
        std::cin >> user_input;

        if (user_input == "f") {
            convertFromFahrenheit();
            break;
        } else if (user_input == "c") {
            convertFromCelsius();
            break;
        } else if (user_input == "k") {
            convertFromKelvin();
            break;
        } else {
            std::cout << "Incorrect input. Please try again." << std::endl;
        }
    }

    return 0;
}
