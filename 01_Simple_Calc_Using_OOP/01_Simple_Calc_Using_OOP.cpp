/*01_Simple_Calc_Using_OOP*/
#include <iostream>
using namespace std;

class clsCalculator
{
private:
	float _result = 0;
	float _num = 0;
	char _op = '0';
	float _previousResult = 0;

public:
	void Add(float num)
	{
		_num = num;
		_op = '+';
		_previousResult = _result;
		_result += num; 
	}
	void Subtract(float num)
	{
		_num = num;
		_op = '-';
		_previousResult = _result;
		_result -= num;
	}
	void Multiply(float num)
	{
		_num = num;
		_op = '*';
		_previousResult = _result;
		_result *= num;
	}
	void Divide(float num)
	{
		if (num == 0)
		{
			num = 1;
		}
		_num = num;
		_op = '/';
		_previousResult = _result;
		_result /= num;
	}
	void Clear()
	{
		_op = '0';
		_previousResult = 0;
		_result = 0;
		_num = 0; 
	}

	void CancelLastOperation()
	{
		_op = 'C';
		_num = 0;
		_result = _previousResult;
	}

	void PrintResult()
	{
		switch (_op)
		{
		case '+':
			cout << "Result after adding " << _num << " is ";
			break;
		case '-':
			cout << "Result after subtracting " << _num << " is ";
			break;
		case '*':
			cout << "Result after multiplying " << _num << " is ";
			break;
		case '/':
			cout << "Result after dividing " << _num << " is ";
			break;
		case '0':
			cout << "Result after clear is ";
			break;
		case 'C':
			cout << "Canceling last operation and current result is ";
			break; 
		default:
			cout << "Invalid op, result is ";
			break;
		}
		std::cout << _result << "\n";
	}

};

int main()
{
	clsCalculator calc; 

	calc.Clear();
	calc.Add(10);
	calc.PrintResult();

	calc.Add(100);
	calc.PrintResult();

	calc.Subtract(20);
	calc.PrintResult();

	calc.Divide(0);
	calc.PrintResult();

	calc.Divide(2);
	calc.PrintResult();

	calc.CancelLastOperation();
	calc.PrintResult();

	calc.Clear();
	calc.PrintResult();

	return 0;
}