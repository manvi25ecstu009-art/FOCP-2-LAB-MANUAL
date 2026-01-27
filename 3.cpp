#include <iostream>
using namespace std;

int main() {
    float temp;
    int choice;

    cout << "Choose conversion:\n";
    cout << "1. Fahrenheit to Celsius\n";
    cout << "2. Celsius to Fahrenheit\n";
    cin >> choice;

    cout << "Enter temperature: ";
    cin >> temp;

    if(choice == 1) {
        float celsius = (temp - 32) * 5 / 9;
        cout << "Temperature in Celsius = " << celsius;
    }
    else if(choice == 2) {
        float fahrenheit = (temp * 9 / 5) + 32;
        cout << "Temperature in Fahrenheit = " << fahrenheit;
    }
    else {
        cout << "Invalid choice";
    }

    return 0;
}
