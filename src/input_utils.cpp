#include <iostream>
#include <limits>
#include <cctype>
#include "../include/input_utils.h"
using namespace std;


int getValidatedInput(int min, int max){
    int value = 0;
    while(!(cin >> value) || value < min || value > max ){
        cout << "Invalid input. Please enter a number (" << min << " - " << max << "):\n";
        cin.clear(); //resets the stream error state flags
        cin.ignore(numeric_limits<streamsize>::max(), '\n'); //discards all invalid characters remaining in the input buffer
    }
    return value;
}

int validateInt(){
    int num;
    while(!(cin >> num)){
        cout << "Invalid input. Please enter a number  " << endl;
        cin.clear(); //resets the stream error state flags
        cin.ignore(numeric_limits<streamsize>::max(), '\n'); //discards all invalid characters remaining in the input buffer
    }
    return num;
}

string validateString(){
    string input;

    cin.ignore(numeric_limits<streamsize>::max(), '\n'); //discards all invalid characters remaining in the input buffer
    while(true){
        getline(cin, input);
        //bool result = isLettersOnly(input);
       /* if(input.empty()){
            cout << "Invalid input. Please enter a non-empty string: " << endl;
        } else if(!result){
            cout << "Invalid input. Please enter a string consisting of letters only: " <<endl;
        } else{
            return input;
        }*/

        if(!input.empty()){
            return input; 
        }
        cout << "Invalid input. Please enter a non-empty string: " << endl;
    }
}
