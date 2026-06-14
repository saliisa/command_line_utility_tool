#include <iostream>
#include "calculator.h"
#include "tempConverter.h"

using namespace std;

void displayMenu();

int main(){
    int option = 0;
    
    while(option != 5){
        displayMenu();
        cout << "Choose an option (1 - 5): " <<endl;
        cin >> option;

        switch(option){
            case 1:
                calculator();
                break;
            case 2:
                tempConversion();
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
    cout << "3. Text Encrypter & Decrypter" << endl;
    cout << "4. Random Password Generator" << endl;
    cout << "5. Exit " << endl;
}
