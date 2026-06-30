#include <iostream>
#include "../include/utility.h"
using namespace std;

int tempConversion(){
    cout << "\n\n";
    cout << "=================" << endl;
    cout << "Temperature Converter"<< endl;
    cout << "=================" << endl;

    cout << "This utility converts temperatures between Celsius and Fahrenheit" <<endl;

    double num = 0;
    int input = 0;
    double result =0;
    const int min = 1;
    const int max = 2;

    cout << "What would you like to convert?" <<endl;
    cout << "1. Celsius to Fahrenheit (C to F) " <<endl;
    cout << "2. Fahrenheit to Celsius (F to C) " <<endl;
    cout << "Choose a number (1 - 2): " <<endl;
    input = getValidatedInput(min,max);

    cout << "Please input the temp number:" <<endl;
    num = validateInt();

    switch(input){
        case 1:
            result = celsiusToFahrenheit(num);
            cout << "Celsius: " << num << " --> Fahrenheit: " << result <<endl;
            break;
        case 2:
            result = fahrenheitToCelsius(num);
            cout << "Fahrenheit: " << num << " --> Celsius: " << result <<endl;
            break;
        default:
            break;
    }
    return 0;
}

double celsiusToFahrenheit(int num){
    double fahrenheit = 0;
    fahrenheit = (num*1.8) +32;
    return fahrenheit;
}

double fahrenheitToCelsius(int num){
    double celsius = 0;
    celsius = (num-32)* 5/9;
    return celsius;
}
