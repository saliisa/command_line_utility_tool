#include <cstdlib>
#include <ctime>
#include <iostream>
#include <random> 
#include "../include/utility.h"
//Password Strengths:
//1. easy -> num or letters
//2. medium -> num + letters
//3. strong ->  num + letters + special chars


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
void easyPasswordGenerator();
void mediumPasswordGenerator();
void strongPasswordGenerator();
void menu(); //delete?

int passwordGenerator(){
    
    cout << "\n\n";
    cout << "=================" << endl;
    cout << "Password Generator"<< endl;
    cout << "=================" << endl;

    int input = 0;

    cout << "1. Easy - contains numbers or letters" <<endl;
    cout << "2. Medium - contains both numbers and letters" <<endl;
    cout << "3. Strong - contains numbers, letters and special characters" <<endl;
    cout << "Choose your password strength (1 - 3): " << endl;


    //validates input
    while(!(cin >> input) || input > 3 || input < 1 ){ 
        cout << "Invalid input. Please enter a valid number (1 - 3): "<< endl;
        cin.clear(); //resets the stream error state flags
        cin.ignore(numeric_limits<streamsize>::max(), '\n'); //discards all invalid characters remaining in the input buffer
    }

    //error handling to be done ******

    

    switch (input){
        case 1:
            easyPasswordGenerator();
            break;
        case 2:
           mediumPasswordGenerator();
            break;
        case 3:
            strongPasswordGenerator();
            break;
        default:
            break;
    }

    return 0;
}

void easyPasswordGenerator(){
    srand(time(0));
    const int length = 4; 
    
    //Numbers
    int randomDigit = 0;
    char charDigit;
    string resultNum;

    //Letters
    char letter;
    string result;
    int num = 0;
   
    cout << '\n';
    
    for(int i = 0; i < length; i++){
        randomDigit = rand() % 10;
        charDigit = '0' + randomDigit;
        resultNum += charDigit;

        num = rand() % 26 ;
        letter = 'a' + num;
        result += letter;
    }
    cout << "== Easy password (numbers): ";
    cout << resultNum <<endl;

    cout << "== Easy password (letters): ";
    cout << result <<endl;

}

void mediumPasswordGenerator(){
    // num + letters

    srand(time(0));
    const int length = 6; 

    int randomNum = 0;
    char letter;
    char digit;
    string result; 

    for(int i = 0; i < length; i++){
        randomNum = rand() % 10;
        digit = '0' + randomNum;
        result += digit;

        randomNum = rand() % 26 ;
        letter = 'a' + randomNum;
        result += letter;

    }

    cout << "== Medium password (numbers + letters): ";
    cout << result <<endl;

}

void strongPasswordGenerator(){
    //num + letters + special chars

    srand(time(0));
    const int length = 6; 

    int randomNum = 0;
    char letter;
    char digit;
    string result; 

    string specialChars[6] = {"'", ",", "@", "#", ".", "$"};

    for(int i = 0; i < length; i++){
        randomNum = rand() % 10;
        digit = '0' + randomNum;
        result += digit;
        randomNum = rand() % 26 ;
        letter = 'a' + randomNum;
        result += letter;

        //first generate a randomNum
        //then based on the number, the index of specialChars is chosen 
        // then added to result

        randomNum = rand() % 6;
        for(int i = 0; i < size(specialChars); i++){
            if(randomNum == i){
                result += specialChars[i];
        }
    }
    

        
    }
    

    cout << "== Strong password (numbers + letters + special chars): ";
    cout << result <<endl;


}


void menu(){


}