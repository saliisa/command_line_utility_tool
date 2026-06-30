#include <iostream>
#include "../include/utility.h"
using namespace std;

int calculator(){
    cout << "\n\n";
    cout << "=================" << endl;
    cout << "Simple Calculator"<< endl;
    cout << "=================" << endl;

    int a = 0;
    int b = 0;

    int input = 0;
    int result = 0;
    const int min = 1;
    const int max = 4;
       
    cout << "1. Addition" << endl;
    cout << "2. Subtraction" << endl;
    cout << "3. Multiplication" << endl;
    cout << "4. Division" << endl;
    cout << "Choose a function (1 - 4): " << endl;

    input = getValidatedInput(min,max);  

    cout << "Input first number: " <<endl;
    a = validateInt();
  
    cout << "Input second number: " <<endl;
    b = validateInt();

    switch(input){
        case 1:
            result = add(a,b);
            cout << "== Result: " << a << " + " << b << " = " << result  << endl;
            break;
        case 2:
            result = subtract(a,b);
                cout << "== Result: " << a << " - " << b << " = " << result  << endl;
            break;
        case 3:
            result = multiply(a,b);
                cout << "== Result: " << a << " * " << b << " = " << result  << endl;
            break;
        case 4:
            try{
                result = divide(a,b);
                cout << "== Result: " << a << " / " << b << " = " << result  << endl;
            } catch (const runtime_error& e){
                cout << "**Error: " << e.what() <<endl;
            }   
                break;
        default:
            break;
    }
    
    return 0;
}

int add(int a, int b){
    return a + b;
}

int subtract (int a, int b){
    return a - b;
}

int multiply(int a, int b){
    return a * b;
}

double divide(int a, int b){
    if(b == 0){
        throw runtime_error("Division by zero");
    } else{
        return (double)a / b;
    }
   
}

