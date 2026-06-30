#include <iostream>
#include "../include/utility.h"
//MISSING:
// [ ] Input validation 
    // invalid menu selections
    //  non numeric input
    // division by zero
    // empty inputs
// [ ] Error Handling + Messages
// [ ] Comments to explain parts of code
// [ ] Function design - each function should have a single responsibility
// [ ] Code organization - organize code logically with related functions grouped together


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

    cout << "What would you like to convert?" <<endl;
    cout << "1. Celsius to Fahrenheit (C to F) " <<endl;
    cout << "2. Fahrenheit to Celsius (F to C) " <<endl;
    cout << "Choose a number (1 - 2): " <<endl;
    cin >> input;   /*Validate input************************/


    cout << "Please input a number:" <<endl;
    cin >> num;  /*Validate input************************/


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




