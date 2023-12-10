# Simple Calculator Using OOP

This project demonstrates a simple calculator implementation using Object-Oriented Programming (OOP) principles in C++.

## Overview

The project consists of a `clsCalculator` class that encapsulates basic arithmetic operations. It includes methods to perform addition, subtraction, multiplication, division, clearing the result, and canceling the last operation. 

## Features

- **Addition**: Adds a given number to the current result.
- **Subtraction**: Subtracts a given number from the current result.
- **Multiplication**: Multiplies the current result by a given number.
- **Division**: Divides the current result by a given number.
- **Clear**: Resets the calculator to its initial state.
- **Cancel Last Operation**: Undoes the last operation performed.

## Class Structure

### `clsCalculator` Class

#### Methods

- `Add(float num)`: Adds the given number to the current result.
- `Subtract(float num)`: Subtracts the given number from the current result.
- `Multiply(float num)`: Multiplies the current result by the given number.
- `Divide(float num)`: Divides the current result by the given number.
- `Clear()`: Resets the calculator's state.
- `CancelLastOperation()`: Undoes the last operation performed.
- `PrintResult()`: Prints the result after the last operation.

#### Private Members

- `_result`: Holds the current result of operations.
- `_num`: Stores the number used in the latest operation.
- `_op`: Represents the type of operation performed.
- `_previousResult`: Holds the previous result before the last operation.

## Usage

The `main()` function demonstrates the use of the `clsCalculator` class by performing a sequence of operations and printing the results.

```cpp
// Sample usage
clsCalculator calc;

calc.Clear();
calc.Add(10);
calc.PrintResult();

// ... (other operations)
```

### How to Use 

To run the code:

1. Copy the provided C++ code into a C++ compiler or IDE.
2. Compile and execute the code to observe the calculator's functionality.