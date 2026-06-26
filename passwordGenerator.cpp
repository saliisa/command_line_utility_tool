#include <cstdlib>
#include <ctime>
#include <iostream>
#include <random> 
#include <limits>
#include <string> 
//Password Strengths:
//1. easy -> num or letters
//2. medium -> num + letters
//3. strong ->  num + letters + special chars

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

    //error handling

    

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
    const int length = 8; 
    //Numbers
   
    int digit;
    char charDigit;
    string resultNum;
   
    cout << '\n';
    cout << "== Easy password (numbers): ";
    for(int i = 0; i < length; i++){
       digit = rand() % 10;
       charDigit = '0' + digit;
       resultNum += charDigit;

    }
    cout << resultNum;

    //Letters
    char letter;
    string result;
    int num = 0;
    cout << '\n';
    cout << "== Easy password (letters): ";
    for(int i = 0; i < length; i++){
        num = rand() % 26 ;
        letter = 'a' + num;
        result += letter;
        
    }

    cout << result <<endl;

   
   



}

void mediumPasswordGenerator(){
    // num + letters


}

void strongPasswordGenerator(){
    //num + letters + special chars

}


void menu(){


}