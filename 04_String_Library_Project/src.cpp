/* String Library Project */

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
