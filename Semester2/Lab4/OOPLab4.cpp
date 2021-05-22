#include <iostream>
class Student {
public:
	double mark1, *n;	//	member variables
	Student() {}
	Student(double mark)
	{
		n = new double;
		*n = mark;
	}
	Student(const Student& s)
	{
		n = new double;
		*n = *(s.n);
	}
	void del() {
		delete n;
		std::cout << "\ndeleted value\n";
	}
};

int main() //	program flow starts here
{
	Student std1(10), std2(20), std3(30); //	instantiating Objects with normal and paratmeterized ctr.
	Student Copystd1 = std1, Copystd2 = std2, Copystd3 = std3;	//	Calling Copyctr by assigning objects to new objects
	std::cout << "Student 1 marks: " << *std1.n << "\nStudent 2 marks: " << *std2.n
		<< "\nStudent 3 marks: " << *std3.n;
	std::cout << "\nStudentCopy 1 marks: " << *Copystd1.n << "\nStudentCopy 2 marks: " << *Copystd2.n
		<< "\nStudentCopy 3 marks: " << *Copystd3.n;
	std::cout << "Deleting original objects:\n";
	std1.del();
	std2.del();
	std3.del();
	std::cout << "\nstd1 is: " << *std1.n;
	std::cout << "\nCopystd1 is: " << *Copystd1.n;
	std::cout << "\nstd2 is: " << *std2.n;
	std::cout << "\nCopystd2 is: " << *Copystd2.n;
	std::cout << "\nstd3 is: " << *std3.n;
	std::cout << "\nCopystd3 is: " << *Copystd3.n;
}