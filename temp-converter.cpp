#include <iostream>
#include <string>
#include <thread>
#include <chrono>


void sleeptime(int sleeptime) {
    std::cout << "in process.." << std::endl;
    std::this_thread::sleep_for(std::chrono::milliseconds(sleeptime));    // XXXミリ秒処理を止める
}

void convertCelsiusToFahrenheit() {
    std::cout << "Enter the temperature in Celsius: ";
    double celsius;
    std::cin >> celsius;

    double fahrenheit = (celsius * 9.0 / 5.0) + 32.0;

    sleeptime(2000);
    std::cout << celsius << " degrees Celsius is " << fahrenheit << " degrees Fahrenheit." << std::endl;
}

void convertFahrenheitToCelsius() {
    std::cout << "Enter the temperature in Fahrenheit: ";
    double fahrenheit;
    std::cin >> fahrenheit;

    double celsius = 5.0 / 9.0 * (fahrenheit - 32.0);
    
    
    sleeptime(2000);
    std::cout << fahrenheit << " degrees Fahrenheit is " << celsius << " degrees Celsius." << std::endl;
}

void convertCelsiusToKelvin() {
    std::cout << "Enter the temperature in Celsius: ";
    double celsius;
    std::cin >> celsius;

    double kelvin = celsius + 273.15;

    sleeptime(2000);
    std::cout << celsius << " degrees Celsius is " << kelvin << " degrees Kelvin." << std::endl;
}

void convertFahrenheitToKelvin() {
    std::cout << "Enter the temperature in Fahrenheit: ";
    double fahrenheit;
    std::cin >> fahrenheit;

    double kelvin = 5.0 / 9.0 * (fahrenheit - 32.0) + 273.15;

    sleeptime(2000);
    std::cout << fahrenheit << " degrees Fahrenheit is " << kelvin << " degrees Kelvin." << std::endl;
}

void convertKelvinToCelsius() {
    std::cout << "Enter the temperature in Kelvin: ";
    double kelvin;
    std::cin >> kelvin;

    double celsius = kelvin - 273.15;

    sleeptime(2000);
    std::cout << kelvin << " degrees Kelvin is " << celsius << " degrees Celsius." << std::endl;
}

void convertKelvinToFahrenheit() {
    std::cout << "Enter the temperature in Kelvin: ";
    double kelvin;
    std::cin >> kelvin;

    double fahrenheit = 9.0 / 5.0 * (kelvin - 273.15) + 32.0;

    sleeptime(2000);
    std::cout << kelvin << " degrees Kelvin is " << fahrenheit << " degrees Fahrenheit." << std::endl;
}



int main() {

    while (true) {
        std::cout << "変換モードを選択して下さい. " << std::endl;
        std::cout << "Enter c if you want to convert from Fahrenheit to Celsius" << std::endl;
        std::cout << "Enter f if you want to convert from Celsius to Fahrenheit" << std::endl;
        std::cout << "Enter ck if you want to convert from Celsius to Kelvin" << std::endl;
        std::cout << "Enter fk if you want to convert from Fahrenheit to Kelvin" << std::endl;
        std::cout << "Enter kc if you want to convert from Kelvin to Celsius" << std::endl;
        std::cout << "Enter kf if you want to convert from Kelvin to Fahrenheit" << std::endl;
        std::cout << ">> "; 

        std::string input;
        std::cin >> input;
        
        sleeptime(2000);

        if (input == "c") {
            convertFahrenheitToCelsius();
            break;
        } else if (input == "f") {
            convertCelsiusToFahrenheit();
            break;
        } else if (input == "ck") {
            convertCelsiusToKelvin();
            break;
        } else if (input == "fk") {
            convertFahrenheitToKelvin();
            break;
        } else if (input == "kc") {
            convertKelvinToCelsius();
            break;
        } else if (input == "kf") {
            convertKelvinToFahrenheit();
            break;
        } else {
            std::cout << "無効な入力です. もう一度モードを選択して下さい. " << std::endl;
        }
    }

    return 0;
}
