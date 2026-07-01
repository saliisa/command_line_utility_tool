#include <iostream>
#include "../include/utility.h"
using namespace std;

int textProcessor(){

    cout << "\n\n";
    cout << "==============================" << endl;
    cout << "Caeser Cipher - Text Encrypter"<< endl;
    cout << "==============================" << endl;

    int input = 0;
    const int min = 1;
    const int max = 2;

    cout << "1. Encrypter" <<endl;
    cout << "2. Decrypter" <<endl;
    cout << "Choose an option (1 - 2): " << endl;

    input = getValidatedInput(min,max);

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


void encrypter(){
    string plainText;
    int shift = 0; // controls how far each letter is moved in the alphabet
    int index = 0;
    int newIndex = 0;
    char newChar;
    string cipherText;

    cout << "Input your plaintext message: " << endl;
    plainText = validateString();

    cout << "Input the number of shifts: " <<endl;
    shift = validateInt();

    for(char letter : plainText){
        if(isalpha(letter)){
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
    cipherText = validateString();
    
    cout << "Input the number of shifts: " <<endl;
    shift = validateInt();

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