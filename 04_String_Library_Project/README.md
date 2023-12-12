# String Library Project in C++

This project consists of a `clsString` class designed to handle various string operations. The class includes functionalities to manipulate strings, such as modifying letter cases, counting characters, identifying vowels, splitting strings, and more.

## Overview

The `clsString` class provides an array of methods for string manipulation and analysis. It offers a range of functions that enable users to perform various operations on strings, from altering letter cases to counting specific characters or words within a string.

## Class Structure

### `clsString` Class

#### Methods

- `clsString()`: Default constructor that initializes an empty string.
- `clsString(string value)`: Constructor to initialize the string with a provided value.
- `SetValue(string value)`, `GetValue()`: Set and get the string value.
- Various methods for string manipulation:
  - Changing letter cases.
  - Counting uppercase and lowercase letters.
  - Counting specific letters in a string.
  - Checking for vowels.
  - Splitting strings.
  - Trimming spaces.
  - Reversing words in a string.
  - Replacing words in a string.
  - Removing punctuations.
- Static and non-static versions of the methods are provided for different usage scenarios.

## Usage

The `clsString` class can be utilized in a C++ program to perform various string manipulations. Below is an example of using the functionalities:

```cpp
#include <iostream>
#include "clsString.h" // Include the header file with clsString class definition

int main() {
    clsString myString("Hello, this is a sample string!");

    // Example usage of clsString methods
    myString.UpperFirstLetterOfEachWord();
    std::cout << "Modified String: " << myString.GetValue() << std::endl;

    int vowelCount = myString.CountVowelsInString();
    std::cout << "Number of vowels: " << vowelCount << std::endl;

    myString.PrintVowelsInString();
    
    // Other operations...

    return 0;
}
```

### How to Use

To use this code:

1. Include the provided clsString.h header file in your C++ project.
2. Create an object of clsString.
3. Utilize various methods of the clsString class to perform string manipulations and analyses.