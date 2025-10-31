#include <iostream>
using namespace std;

int main() {
    double fahrenheit;
    double celsius;
    double kelvin;

    cout << "Enter the temperature in Fahrenheit: ";
    cin >> fahrenheit;


     // Formula for finding tempearature in  Celsius
    celsius = (fahrenheit - 32) / 1.8;

 // Formula for finding tempearature in Kelvin
    kelvin = celsius + 273.15;

    cout << "Temperature in Celsius: " << celsius << " C" << endl;
    cout << "Temperature in Kelvin: " << kelvin << " K" << endl;

    return 0;
}
