/* 03_Developer_Multi_Level_Inheritance */

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

	clsPerson()
	{

	}

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

class clsEmployee : public clsPerson
{
private:
	string _Title;
	string _Department;
	double _Salary;

public:

	clsEmployee(int id, string firstName, string lastName, string email, string phone, string title, string department, double salary)
		: clsPerson (id, firstName, lastName, email, phone)
	{
		_Title = title;
		_Department = department;
		_Salary = salary;
	}

	void SetTitle(string title)
	{
		_Title = title;
	}
	void SetDepartment(string department)
	{
		_Department = department;
	}
	void SetSalary(double salary)
	{
		_Salary = salary;
	}

	string GetTitle()
	{
		return _Title;
	}
	string GetDepartment()
	{
		return _Department;
	}
	double GetSalary()
	{
		return _Salary;
	}

	void Print()
	{
		cout << "\nInfo:\n";
		cout << "_______________________________\n";
		cout << "ID        : " << GetID() << "\n";
		cout << "First Name: " << GetFirstName() << "\n";
		cout << "Last Name : " << GetLastName() << "\n";
		cout << "Full Name : " << GetFullName() << "\n";
		cout << "Email     : " << GetEmail() << "\n";
		cout << "Phone     : " << GetPhone() << "\n";
		cout << "Title     : " << _Title << "\n";
		cout << "Department: " << _Department << "\n";
		cout << "Salary    : " << _Salary << "\n";
		cout << "_______________________________\n";
	}
};

class clsDeveloper : public clsEmployee
{
private:
	string _Title;
	string _Department;
	string _MainProgrammingLanguage;
	double _Salary;

public:

	clsDeveloper(int id, string firstName, string lastName, string email, string phone, string title, string department, double salary, string progLang)
		: clsEmployee(id, firstName, lastName, email, phone, title, department, salary)
	{
		_MainProgrammingLanguage = progLang;
	}

	void SetMainProgrammingLangauge(string progLang)
	{
		_MainProgrammingLanguage = progLang;
	}

	string GetMainProgLang()
	{
		return _MainProgrammingLanguage;
	}

	void Print()
	{
		cout << "\nInfo:\n";
		cout << "_______________________________\n";
		cout << "ID         : " << GetID() << "\n";
		cout << "First Name : " << GetFirstName() << "\n";
		cout << "Last Name  : " << GetLastName() << "\n";
		cout << "Full Name  : " << GetFullName() << "\n";
		cout << "Email      : " << GetEmail() << "\n";
		cout << "Phone      : " << GetPhone() << "\n";
		cout << "Title      : " << GetTitle() << "\n";
		cout << "Department : " << GetDepartment() << "\n";
		cout << "PR.Language: " << _MainProgrammingLanguage << "\n";
		cout << "Salary     : " << GetSalary() << "\n";
		cout << "_______________________________\n";
	}
};

int main()
{
	clsDeveloper dev(1, "Tarek", "Gohry", "telgohry@gmail.com", "+201093343359", "CEO", "CS", 150000, "C++");
	
	dev.Print();

	return 0;
}