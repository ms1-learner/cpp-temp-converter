#include <iostream>

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

  double celsius = 5.0 / 9.0 * (fahrenheit - 32.0);

  std::cout << fahrenheit << " degrees Fahrenheit is " << celsius << " degrees Celsius." << std::endl;
}

void convertKelvinToCelsius() {
  std::cout << "Enter the temperature in Kelvin: ";
  double kelvin;
  std::cin >> kelvin;

  double celsius = kelvin - 273.15;

  std::cout << kelvin << " degrees Fahrenheit is " << celsius << " degrees Celsius." << std::endl;
}

void convertKelvinToFahrenheit() {
  std::cout << "Enter the temperature in Kelvin: ";
  double kelvin;
  std::cin >> kelvin;

  double celsius = kelvin - 273.15;
  double fahrenheit = (celsius * 9.0 / 5.0) + 32.0;

  std::cout << kelvin << " degrees Fahrenheit is " << fahrenheit << " degrees Fahrenheit." << std::endl;
}

int main() {
  std::cout << "Enter c if you want to convert from Fahrenheit to Celsius" << std::endl;
  std::cout << "Enter f if you want to convert from Celsius to Fahrenheit" << std::endl;

  while (true) {
    char input;
    std::cin >> input;
    if (input == 'c') {
      convertFahrenheitToCelsius();
      break;
    } else if (input == 'f') {
      convertCelsiusToFahrenheit();
      break;
    } else {
      std::cout << "Incorrect input. Please try again later" << std::endl;
    }
  }

  return 0;
}
