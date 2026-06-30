#include <iostream>
#include "../include/utility.h"
using namespace std;
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


void encrypter();
void decrypter();

int textProcessor(){

    cout << "\n\n";
    cout << "==============================" << endl;
    cout << "Caeser Cipher - Text Encrypter"<< endl;
    cout << "==============================" << endl;

    int input = 0;

    cout << "1. Encrypter" <<endl;
    cout << "2. Decrypter" <<endl;
    cout << "Choose an option (1 - 2): " << endl;

    input = getValidatedInput(1,2);


  /*  while(!(cin >> input) || input > 2 || input < 1 ){ 
        cout << "Invalid input. Please enter a valid number (1 - 3): "<< endl;
        cin.clear(); //resets the stream error state flags
        cin.ignore(numeric_limits<streamsize>::max(), '\n'); //discards all invalid characters remaining in the input buffer
    }*/


    switch(input){
        case 1:
            encrypter();
            break;
        case 2:
            decrypter();
            break;
        default:
            break;
    }
    return 0;
}


void encrypter(){ // issue with multiple words
    string plainText;
    int shift = 0; // controls how far each letter is moved in the alphabet
    int index = 0;
    int newIndex = 0;
    char newChar;
    string cipherText;

    cout << "Input your plaintext message: " << endl;
    cin >> plainText; //string validation

    cout << "Input the number of shifts: " <<endl;
    cin >> shift;

    for(char letter : plainText){

        if(isalpha(letter)){
            //cout << m << endl;
            index = letter - 'a';
            newIndex = (index + shift)  % 26;
            newChar = 'a' + newIndex;
            cipherText += newChar;
        } else {
            cipherText += letter;
        }
    }
    cout << "== Cipher text: " << cipherText <<endl;

}


void decrypter(){
    string plainText;
    int shift = 0; // controls how far each letter is moved in the alphabet
    int index = 0;
    int newIndex = 0;
    char newChar;
    string cipherText;

    cout << "Input your cipher text: " << endl;
    cin >> cipherText;

    cout << "Input the number of shifts: " <<endl;
    cin >> shift;

    for(char letter : cipherText){
        if(isalpha(letter)){
            index = letter - 'a';
            newIndex = (index - shift)  % 26;
            newChar = 'a' + newIndex;
            plainText += newChar;
        } else {
            plainText += letter;
        }
    }

    cout << "== Plain text: " << plainText <<endl;
}