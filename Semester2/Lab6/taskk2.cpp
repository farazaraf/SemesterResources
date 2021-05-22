/*
task2
A single Employee can not belong to multiple Companies (legally!! ), 
but if we delete the Company, Employee object will not destroy.
Identify the relationship between the classes and Implement the above given scenerio using C++

#include <iostream>
#include <string>
class Employee {	//first class
	std::string eName;
public:
	Employee(std::string name) :eName(name) {}
	~Employee() { }
	void disp()
	{
		std::cout << "Employee Name: " << eName << "\n";
	}
};
class Company {		//second class which will call objects of employee class
	std::string cName;
public:
	Company(std::string name)
		:cName(name){
		std::cout << "\nCompany Name : " << cName << "\n";
	}
	~Company() {std::cout << "\nCompany Deleted\n"; }
	void display(Employee& myEmp1)
	{
		myEmp1.disp();
	}
};
void CompanyCaller( Employee &myEmp1,  Employee& myEmp2, Employee& myEmp3) //Calling Company class in function to show Aggregation Property
{							//Company class will get deleted when function ends but Employee objects will still be accessible.
	Company c("MyCompany");
	c.display(myEmp1);
	c.display(myEmp2);
	c.display(myEmp3);
}
int main()
{
	Employee myEmp1("Emp1"),myEmp2("Emp2"),myEmp3("Emp3");
	CompanyCaller(myEmp1,myEmp2,myEmp3);
	myEmp1.disp();
	myEmp2.disp();
	myEmp3.disp();
}*/