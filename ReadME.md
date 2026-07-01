# Command Line Utility Tool in C++

A command line utitily tool with 4 functions such as calculator, temperature converter, random password generator and text encrypter & decrypter.


### Table of Contents
-  **[Utility Functions](#utility-functions)**
-  **[Input Validation Rules](#input-validation-rules)**
-  **[Program Architecture](#program-architecture)**
-  **[Usage](#usage)**
-  **[Error Handling](#error-handling)**
-  **[Build & Run Instructions](#build--run-instructions)**
-  **[Future Improvements](#future-improvements)**

## Utility Functions

### Simple Calculator
Performs basic arithmetic operations: addition, subtraction, multiplication, and division.
Includes validation for numeric input and prevents division by zero.


### Temperature Converter
Converts temperatures between Celsius and Fahrenheit using standard formulas.
Ensures numeric input and provides clear output formatting.


### Random Password Generator
Generates secure random passwords using letters, digits, and special characters.
User can choose between easy, medium and string password levels.


### Text Encrypter & Decrypter
Implements a Caesar Cipher to encrypt or decrypt alphabetic text.
Non‑alphabetic characters remain unchanged for readability.


## Input Validation Rules

### Menu Input
- Must be an integer between 1 - 5

### Calculator Input
- Must be numeric
- Division by zero is blocked

### Temperature Converter Input
- Must be nuemric 
- Accepts negative values

### Password Generator Input
- Must be numeric
- Password levels include: easy, medium, strong 

### Text Encrypter Input
- Must be a non-empty string
- Letters are shifted


## Program Architecture

`/src`- cpp files
```
- main.cpp
- calculator.cpp
- tempConverter.cpp
- passwordGenerator.cpp
- textProcessor.cpp
- input_utils.cpp
```
`/includes` - header files
```
- calculator.h
- tempConverter.h
- passwordGenerator.h
- textProcessor.h
- input_utils.h
- utility.h
```

### Key Modules
- **input_utils** - input validation functions
- **utility** - declares common functions
- **calculator** - arithmetic logic
- **tempConverter** - conversion logic
- **passwordGenerator** - random generation
- **textProcessor** - Caesar Cipher logic




## Usage Examples

### Menu

```  
 ==============================
    Command Line Utility Tool
==============================
    1. Calculator
    2. Temperature Converter
    3. Password Generator
    4. Text Encrypter/Decrypter
    5. Exit
    Choose an option (1 - 5):
```
### Example: Text Encryption

```
Input your plaintext message:
hello
Input the number of shifts:
3
== Cipher text: khoor

```

### Example: Password Generator
```
    ================= 
    Password Generator
    ================= 

    1. Easy - contains numbers or letters 
    2. Medium - contains both numbers and letters 
    3. Strong - contains numbers, letters and special characters 
    Choose your password strength (1 - 3): 
    1

== Easy password (numbers): 1087
== Easy password (letters): jpbj
```



## Error handling
- Invalid menu selection
- Non‑numeric input where numbers are required
- Empty string input
- Division by zero
- Out‑of‑range values



## Build & Run Instructions
First navigate to the `src` file: \n 
``` 
cd src
```

Use the code below to compile:
``` 
g++ main.cpp calculator.cpp tempConverter.cpp passwordGenerator.cpp textProcessor.cpp input_utils.cpp -o utilityTool
```

Then run the compile code:
```
./utilityTool
```
or 
```
./utilityTool.exe
```


## Future Improvements
- Add unit tests
- Add more utility tools





















