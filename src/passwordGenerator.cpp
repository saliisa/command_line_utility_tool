#include <cstdlib>
#include <ctime>
#include <iostream>
#include <random> 
#include "../include/utility.h"
using namespace std;

int passwordGenerator(){
    cout << "\n\n";
    cout << "=================" << endl;
    cout << "Password Generator"<< endl;
    cout << "=================" << endl;

    int input = 0;
    const int min = 1;
    const int max = 3;

    cout << "1. Easy - contains numbers or letters" <<endl;
    cout << "2. Medium - contains both numbers and letters" <<endl;
    cout << "3. Strong - contains numbers, letters and special characters" <<endl;
    cout << "Choose your password strength (1 - 3): " << endl;

    input = getValidatedInput(min,max);

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
