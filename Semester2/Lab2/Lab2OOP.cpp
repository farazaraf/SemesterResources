//Read the following scenario. Provide a C++ implementation of those classes. 
//IST has many students.Each student has their Name, Address, Phone Numberand Student Number.Students are enrolled into different sections according to the marks they got.Each professor can be assigned to one, but possibly more semester.Each professor has Name, Address, Phone Numberand Salary.
//Provide the C++ code after identifying the classesand attributes from the above scenario.Assumeand specify the operations that are required for each class.
#include <iostream>
#include <string>
class Student
{
public:
	Student(std::string name,std::string address,int phone,int studentnumber) {
		studentName = name;
		studentAddress = address;
		studentPhonenumber = phone;
		studentNumber = studentnumber;
	}
	void getter()
	{
		std::cout << "\nStudent name: " << studentName <<"\n";
		std::cout << "Student Address: " << studentAddress<<"\n";
		std::cout << "Student PhoneNumber: " << studentPhonenumber<<"\n";
		std::cout << "Student Number: " << studentNumber<<"\n";

	}
private:
	std::string studentName,studentAddress;
	int studentPhonenumber,studentNumber;
};

class Professor {
	std::string professorName,professorAddress;
	int professorPhonenumber, professorSalary;
public:
	Professor(std::string name, std::string address, int phone, int salary) {
		professorName = name;
		professorAddress = address;
		professorPhonenumber = phone;
		professorSalary = salary;
	}
	void getter()
	{
		std::cout << "\nProfessor name: " << professorName<<"\n";
		std::cout << "Professor Address: " << professorAddress<<"\n";
		std::cout << "Professor PhoneNumber: " << professorPhonenumber<<"\n";
		std::cout << "Professor Salary: " << professorSalary<<"\n";
	}
};
int main()
{
	int num;
	Student s("ABC", "House1", 01001234551, 12);
	Student s2("DEF", "House3", 1231329090, 90);
	Professor p("Sir1", "House2", 1231237000, 1000);
	std::cout << "Enter Serial Number\n1)Student\n2)Professor\n";
	std::cin >> num;
	if (num == 1)
	{
		s.getter();
		s2.getter();
	}
	else{
		p.getter();
	}
}




































//#include <iostream>
//class Calculator {
//	public:
//		double Addition(double, double);
//		double Subtraction(double, double);
//		double Multiplication(double, double);
//		double Division(double, double);
//}c;
//double Calculator::Addition(double x, double y)
//{
//	return x + y;
//}
//double Calculator::Subtraction(double x, double y)
//{
//	return x - y;
//}
//double Calculator::Multiplication(double x, double y)
//{
//	return x * y;
//}
//double Calculator::Division(double x, double y)
//{
//	return x / y;
//}
//int main()
//{
//	char key;
//	double x, y;
//	std::cout << "Enter Two numbers to perform an operation on them.\n";
//	std::cin >> x >> y;
//	std::cout << "Select What Operation do you want to perform:\n"
//		<< "1)Addition\n2)Subtraction\n3)Multiplication\n4)Division\n"
//		<< "Type the Serial Number";
//	std::cin >> key;
//	switch (key)
//	{
//	case '1':
//	{
//		std::cout << c.Addition(x, y);
//		break;
//	}
//	case '2':
//	{
//		std::cout << c.Subtraction(x, y);
//		break;
//	}
//	case '3':
//	{
//		std::cout << c.Multiplication(x, y);
//		break;
//	}
//	case '4':
//	{
//		std::cout << c.Division(x, y);
//		break;
//	}
//	default:
//		std::cout << "Entered invalid option!";
//		break;
//	}
//}











//class EmptyClass {
//    //empty class 
//};
//int main()
//{
//    EmptyClass Object1, Object2;
//    std::cout << "Size of First Object: " << sizeof(Object1) << "Byte\nSize of Second Object: " << sizeof(Object2) << "Byte\n";
//}
