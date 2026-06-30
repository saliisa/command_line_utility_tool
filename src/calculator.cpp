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
int calculator(){
    cout << "\n\n";
    cout << "=================" << endl;
    cout << "Simple Calculator"<< endl;
    cout << "=================" << endl;

    int a = 0;
    int b = 0;

    int input = 0;
    int result = 0;
       
        cout << "1. Addition" << endl;
        cout << "2. Subtraction" << endl;
        cout << "3. Multiplication" << endl;
        cout << "4. Division" << endl;
        cout << "Choose a function (1 - 5): " << endl;
        cin >> input;   /*Validate input************************/

     // 3. Validates inputs (especially division by zero) -- ADD

    
        cout << "Input first number: " <<endl;
        cin >> a;  /*Validate input************************/

        cout << "Input second number: " <<endl;
        cin >> b;  /*Validate input************************/

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
                result = divide(a,b);
                 cout << "== Result: " << a << " / " << b << " = " << result  << endl;
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
    return a / b;
}

