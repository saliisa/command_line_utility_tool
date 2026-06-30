#include <iostream>
#include "../include/utility.h"


//MISSING:
// [ ] Input validation 
    // invalid menu selections -d
    //  non numeric input -d
    // empty inputs -d
// [ ] Error Handling + Messages
// [ ] Comments to explain parts of code
// [ ] Function design - each function should have a single responsibility
// [ ] Code organization - organize code logically with related functions grouped together


using namespace std;

void displayMenu();

int main(){
    int option = 0;
    const int min = 1;
    const int max = 5;
    
    while(option != 5){
        displayMenu();
        cout << "Choose an option (1 - 5): " <<endl;
        option = getValidatedInput(min,max); //validate input

        switch(option){
            case 1:
                calculator();
                break;
            case 2:
                tempConversion();
                break;
            case 3:
                passwordGenerator();
                break;
            case 4:
                textProcessor();
                break;
            default:
                break; 
        }
    }

    cout << "Goodbye!" <<endl;
    return 0;
}

void displayMenu(){
    cout << "\n\n";
    cout << "==== UTILITY PROGRAM MENU ====" << endl;
    cout << "1. Simple Calculator" << endl;
    cout << "2. Temperature Converter" << endl;
    cout << "3. Random Password Generator" << endl;
    cout << "4. Text Encrypter & Decrypter" << endl;
    cout << "5. Exit " << endl;
}
