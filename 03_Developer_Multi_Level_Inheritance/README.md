# Developer Multi-Level Inheritance in C++

This project demonstrates a multi-level inheritance structure in C++, showcasing classes `clsPerson`, `clsEmployee`, and `clsDeveloper`. Each class inherits attributes and functionalities from its base class, forming a hierarchical relationship.

## Overview

The code consists of three classes that represent different levels of hierarchy:
- `clsPerson`: Represents generic personal information.
- `clsEmployee`: Inherits from `clsPerson` and extends attributes with employee-related data such as title, department, and salary.
- `clsDeveloper`: Inherits from `clsEmployee` and further extends with additional programming-related information, like the main programming language.

## Class Structure

### `clsPerson` Class

#### Methods

- `clsPerson()`: Default constructor.
- `clsPerson(int id, string firstName, string lastName, string email, string phone)`: Constructor to initialize person attributes.
- `SetFirstName(string firstName)`, `SetLastName(string lastName)`, `SetEmail(string email)`, `SetPhone(string phone)`: Set individual attributes.
- `GetID()`, `GetFirstName()`, `GetLastName()`, `GetEmail()`, `GetPhone()`, `GetFullName()`: Retrieve individual attributes.
- `Print()`: Display all personal information.
- `SendEmail(string subject, string body)`: Send an email.
- `SendSMS(string sms)`: Send an SMS.

### `clsEmployee` Class

#### Methods

- Inherits all methods from `clsPerson`.
- `clsEmployee(int id, string firstName, string lastName, string email, string phone, string title, string department, double salary)`: Constructor to initialize employee attributes.
- `SetTitle(string title)`, `SetDepartment(string department)`, `SetSalary(double salary)`: Set employee-specific attributes.
- `GetTitle()`, `GetDepartment()`, `GetSalary()`: Retrieve employee-specific attributes.
- Overrides `Print()` method to display employee-related information.

### `clsDeveloper` Class

#### Methods

- Inherits all methods from `clsEmployee`.
- `clsDeveloper(int id, string firstName, string lastName, string email, string phone, string title, string department, double salary, string progLang)`: Constructor to initialize developer attributes.
- `SetMainProgrammingLangauge(string progLang)`, `GetMainProgLang()`: Set and retrieve developer-specific programming language information.
- Overrides `Print()` method to display developer-related information.

## Usage

The `main()` function creates an instance of `clsDeveloper`, showcasing how the developer's information is accessed and displayed.

```cpp
#include <iostream>

// Code for the clsPerson, clsEmployee, and clsDeveloper classes...

int main() {
    clsDeveloper dev(1, "Tarek", "Gohry", "telgohry@gmail.com", "+201093343359", "CEO", "CS", 150000, "C++");
    
    dev.Print(); // Display developer-specific information

    return 0;
}
```

### How to Use

To use this code:

1. Copy the provided C++ code into a C++ compiler or IDE.
2. Compile and execute the code to observe the functionality of the multi-level inheritance structure.