# Generic Person Class in C++

This project demonstrates a generic `Person` class that encapsulates basic personal information and communication methods using Object-Oriented Programming (OOP) principles in C++.

## Overview

The `clsPerson` class represents a generic person entity with attributes such as an ID, first name, last name, email, and phone number. It provides methods to set and retrieve individual attributes, print personal information, and communicate via email and SMS.

## Features

- **Attribute Management**: Methods to set and retrieve individual attributes of a person.
- **Full Name**: Generating the full name by concatenating the first and last names.
- **Information Display**: Printing personal information including ID, names, email, and phone number.
- **Communication**: Methods to send emails and SMS messages.

## Class Structure

### `clsPerson` Class

#### Methods

- `clsPerson(int id, string firstName, string lastName, string email, string phone)`: Constructor to initialize a person with provided attributes.
- `SetFirstName(string firstName)`: Set the first name of the person.
- `SetLastName(string lastName)`: Set the last name of the person.
- `SetEmail(string email)`: Set the email address of the person.
- `SetPhone(string phone)`: Set the phone number of the person.
- `GetID()`: Retrieve the ID of the person.
- `GetFirstName()`: Retrieve the first name of the person.
- `GetLastName()`: Retrieve the last name of the person.
- `GetEmail()`: Retrieve the email address of the person.
- `GetPhone()`: Retrieve the phone number of the person.
- `GetFullName()`: Retrieve the full name by combining the first and last names.
- `Print()`: Display all personal information of the person.
- `SendEmail(string subject, string body)`: Send an email to the person's email address with a specified subject and body.
- `SendSMS(string sms)`: Send an SMS to the person's phone number with a specified message.

## Usage

The `main()` function demonstrates the usage of the `clsPerson` class by creating a person object and performing operations such as printing personal information, sending an email, and sending an SMS.

```cpp
#include <iostream>

// Code for the clsPerson class and its methods...

int main() {
    clsPerson person = { 1, "Tarek", "Gohry", "telgohry@gmail.com", "+201093343359" };
    
    person.Print();
    person.SendEmail("Hi", "How are you?");
    person.SendSMS("How are you?");

    return 0;
}
```

### How to Use

To use this code:

1. Copy the provided C++ code into a C++ compiler or IDE.
2. Compile and execute the code to observe the functionality of the clsPerson class.