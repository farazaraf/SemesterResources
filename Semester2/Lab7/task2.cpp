//task2
//Create a calculator for the number by creating a class of number with overloading all operators in it.(Operators: 
//++, --, +, -, / , *, >> , << ).
#include <iostream>
class Calculator
{
	double number;
public:
	Calculator():number(0){}
	Calculator(double x):number(x){}
	Calculator operator++()		//Pre and Post ++,-- Operators.
	{
		return ++number;
	}
	Calculator operator++(int)
	{
		return number++;
	}
	Calculator operator--()
	{
		return --number;
	}
	Calculator operator--(int)
	{
		return number--;
	}
	Calculator operator+(Calculator& a)
	{
		return number + a.number;
	}
	Calculator operator+(double a)
	{
		return number + a;
	}
	Calculator operator-(Calculator& a)
	{
		return number - a.number;
	}
	Calculator operator-(double a)
	{
		return number - a;
	}

	Calculator operator*(Calculator& a)
	{
		return number * a.number;
	}
	Calculator operator*(double a)
	{
		return number * a;
	}

	Calculator operator/(Calculator& a)
	{
		return number / a.number;
	}

	Calculator operator/(double a)
	{
		return number / a;
	}
	friend std::ostream& operator<< (std::ostream&, const Calculator&);	//setting as friend to access private members
	friend std::istream& operator>> (std::istream&, Calculator&);	//setting as friend to access private members

	void display(Calculator c)
	{
		std::cout << "\n" << c.number << "\n";
	}
};
std::ostream& operator<< (std::ostream& out, const Calculator& a)
{
	out << "\nOutput is: "<< a.number << "\n";
	return out;
}
std::istream& operator>> (std::istream& in, Calculator& a)
{
	in >> a.number;
	return in;
}
int main()
{
	Calculator c;
	std::cout << "\nEnter a number\n";
	std::cin >> c;
	std::cout << c << "\nNumbers added together: " << c + c << "\nSubtraction: " << c - c
		<< "\nMultiplication: " << c * c << "\nDivision: " << c / c << "\n Increment and Decrement Operators:\n"; 
	std::cout << ++c << "\n";
	std::cout << --c << "\n";
}