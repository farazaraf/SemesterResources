/*Consider the code provided above for shallowand deep copy.
Create a class ‘Employee’ having two data members ‘EmployeeName’(character pointer) and
‘EmployeeId’(integer).Keep both data members private.Create an object ‘Employee1’ of type
‘Employee’.Copy the contents of ‘Employee1’ to ‘Employee2’ in such a manner that if ‘Employee1’
gets deallocated, ‘Employee2’ still holds the assigned data.
Analyze the benefits of deep copying over shallow copying
#include <iostream>
#include <cstring>
#pragma warning(disable: 4996) //to allow strcpy to work for VS 2019
class Employee {
private:
	char* EmployeeName;
	int EmployeeID;
	char* nam;
	int nameLength;
public:
	Employee(const char name[20])
	{	nameLength = strlen(name) + 1;
		nam = new char[nameLength];
		strcpy(nam, name);	}
	Employee(const Employee& Employee1)
	{		nam = new char[nameLength + 1];
			strcpy(nam, Employee1.nam);	}
	void deleteName()
	{	delete [] nam;
		std::cout << "\nDeleted\n";	}
	void displayName()
	{	std::cout << "Name is : " << nam <<"\n";	}	};
int main()
{	Employee Employee1("faraz");
	Employee Employee2 = Employee1;
	std::cout << "Employee1's "; Employee1.displayName();
	std::cout << "Employee2's "; Employee2.displayName();
	std::cout << "Employee1's Name Deleted"; Employee1.deleteName();
	std::cout << "Employee1's "; Employee1.displayName();
	std::cout << "Employee2's "; Employee2.displayName();	} */