//task1
/*Write a C++ code that uses pure virtual functions in the base class universityperonnel. The universityperonnel
class is an abstract class and no objects can be created for it. Your base class has two pure virtual functions 
getData() and isoutstanding(). Your parent class should also include two member functionsto input() and display()
the name of personnel. Your code includes two derived classes, student and instructor respectively. The derived
classes each contain a function called get () and outstanding(). get () function of Student class should input name 
of personnel and asks user to input GPA whereas outstanding function determines either the GPA>3 or not.
Similarly, get () function of instructor class should input name of personnel and asks user to input no. of publications whereas Outstanding function determines either the no. of publications >50 or not. Student and 
instructor objects are casted into the person class type through array of pointers. Ask user first either he is 
student/instructor, then get his data using get () and your program continues to ask to enter the data until the last 
personnel enters the data. Once the data is entered, print names of all personnel along with their outstanding

#include <iostream>
#include <string>
using std::cout; using std::cin;
class UniversityPersonnel	//abstract base class/interface
{
protected:
	std::string m_userName;
public:
	virtual void GetData() = 0;		//declaring purevirtual functions
	virtual void DisplayData() = 0;	//using this function for displaying in Main
	virtual bool IsOutstanding() = 0;
	void input()
	{	cout << "Enter your name: "; cin >> m_userName;		}
	void display()
	{	cout << "\nName is: " << m_userName << "\n";		}
};
class Student:public UniversityPersonnel {	//inheriting Student from BaseClass
	float m_gpa;
public:
	Student():m_gpa(0){}
	void GetData()override {	//to make sure I create function 'override' in DerivedClasses
		cout << "Enter your Name followed by your GPA.\n";
		cin >> m_userName >> m_gpa;
	}
	void DisplayData()override
	{	cout << m_userName << "\nGPA:" << m_gpa;	}
	bool IsOutstanding()override{	//returning bool from function and performing check in Main
		if (m_gpa > 2.99f && m_gpa < 4.01f)	//defining range of GPA
			return 1;
		else return 0;		}
};
class Instructor:public UniversityPersonnel {
	int m_publications;
public:
	Instructor():m_publications(0){}
	void GetData()override {
		cout << "Enter your Name followed by No. of Publications.\n";
		cin >> m_userName >> m_publications;
	}
	void DisplayData()override
	{
		cout << m_userName << "\nPublications: " << m_publications;
	}
	bool IsOutstanding()override {
		if (m_publications > 49 && m_publications < 1000)	//range of publications
			return 1;
		else return 0;
	}
};
int main()
{
	UniversityPersonnel* user[5];	//PointerArray of Base Class to allocate derived class object
	int i = 0;int key;
	do		//using Do-While Loop for setting up and taking inputs
	{	cout << "\nPress 1 if you are Student.\nPress 2 if you are Teacher.\n";
		cin >> key;
		if (key == 1)	//Option menu
		{	cout << "\nYou selected Student.\n";
			user[i] = new Student;
			user[i]->GetData();		}
		else if (key == 2)
		{	cout << "\nYou selected Instructor.\n";
			user[i] = new Instructor;
			user[i]->GetData();		}
		else { cout << "\nWrong choice entered.\n"; }
		i++;
	} while (i<5);	//Input Loop Ends here.
	i = 0;			//resetting loop variable to 0
	while (i<5)		//Loop that prints everything
	{	cout << "-----------\n"; user[i]->DisplayData();
		if (user[i]->IsOutstanding() == 1)
		{	cout << "\n|Outstanding Work!|\n";		}
		else if (user[i]->IsOutstanding() == 0)
	{	cout << "\n| Not Outstanding Or Invalid Entry\n--------";
	}	++i;	}	}
*/
