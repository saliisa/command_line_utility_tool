#include "calculator.h"
#include <iostream>

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
    //while (option =! 5){
        cout << "Choose a function (1 - 5): " << endl;
        cout << "1. Addition" << endl;
        cout << "2. Subtraction" << endl;
        cout << "3. Multiplication" << endl;
        cout << "4. Division" << endl;
        cin >> input;

    
        cout << "Input first number: " <<endl;
        cin >> a;

        cout << "Input second number: " <<endl;
        cin >> b;

        switch(input){
            case 1:
                result = add(a,b);
                cout << "== Result: " << result  << endl;
                break;
            case 2:
                result = subtract(a,b);
            cout << "== Result: " <<  result  << endl;
                break;
            case 3:
                result = multiply(a,b);
                cout << "== Result: " <<  result  << endl;
                break;
            case 4:
                result = divide(a,b);
                cout << "== Result: " <<  result  << endl;
                break;
            default:
               break;
        }
    //}
    

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
    return a / b;
}

