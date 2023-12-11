/* 02_Generic_Person_Class */

#include <iostream>
#include <string>
using namespace std;

class clsPerson
{
private:
	int _ID;
	string _FirstName;
	string _LastName;
	string _Email;
	string _Phone;

public:
	clsPerson(int id, string firstName, string lastName, string email, string phone)
	{
		_ID = id;
		_FirstName = firstName;
		_LastName = lastName;
		_Email = email;
		_Phone = phone;
	}

	void SetFirstName(string firstName)
	{
		_FirstName = firstName;
	}
	void SetLastName(string lastName)
	{
		_LastName = lastName;
	}
	void SetEmail(string email)
	{
		_Email = email;
	}
	void SetPhone(string phone)
	{
		_Phone = phone;
	}

	int GetID()
	{
		return _ID;
	}
	string GetFirstName()
	{
		return _FirstName;
	}
	string GetLastName()
	{
		return _LastName;
	}
	string GetEmail()
	{
		return _Email;
	}
	string GetPhone()
	{
		return _Phone;
	}
	string GetFullName()
	{
		return _FirstName + " " + _LastName;
	}

	void Print()
	{
		cout << "\nInfo:\n";
		cout << "_______________________________\n";
		cout << "ID        : " << _ID << "\n";
		cout << "First Name: " << _FirstName << "\n";
		cout << "Last Name : " << _LastName << "\n";
		cout << "Full Name : " << GetFullName() << "\n";
		cout << "Email     : " << _Email << "\n";
		cout << "Phone     : " << _Phone << "\n";
		cout << "_______________________________\n";
	}

	void SendEmail(string subject, string body)
	{
		cout << "\nThe following message sent successfully to email: " << _Email << "\n";
		cout << "Subject: " << subject << "\n";
		cout << "Body: " << body << "\n";
	}

	void SendSMS(string sms)
	{
		cout << "\nThe following SMS sent successfully to phone: " << _Phone << "\n";
		cout << sms << "\n";
	}
};

int main()
{
	clsPerson person = { 1,"Tarek","Gohry","telgohry@gmail.com","+201093343359" };
	
	person.Print();
	person.SendEmail("Hi", "How are you?");
	person.SendSMS("How are you?");

	return 0;
}