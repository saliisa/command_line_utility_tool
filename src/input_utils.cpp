#include <iostream>
#include <limits>
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
