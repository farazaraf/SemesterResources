/*2.	In the database only three kinds of employees are represented.Managers manage, 
scientists perform research to develop better widgets, 
and laborers operate the dangerous widget - stamping presses
The database stores a name and an employee identification number for all employees,
no matter what their category.However, for managers, it also stores their titlesand golf club dues
.For scientists, it stores the number of scholarly articles they have publishedand their title.
Laborers store the title only.
You must start with a base class employee.
This class handles the employee’s last nameand employee number.
From this class three other classes are derived : manager, scientist, and laborer.
All three classes contains additional information about these categories of employee, 
and member functions to handle this information as shown in Figure*/

#include <iostream>
#include <string>
using std::cout; using std::cin;
class Employee {
public:
	std::string name,emp_id;
};
class Manager :public Employee {
	std::string m_title;
	int golf_dues;
public: 
	Manager()
	{
		name = "Manager A"; emp_id = "M1";
		m_title = "The CEO"; golf_dues = 100;
	}
	void display() {
		cout<< "\n|Manager|\n" << "Name: " << name
			<< "\nEmployee ID: " << emp_id
			<< "\nTitle: " << m_title
			<< "\nGolf Dues: " << golf_dues;
	}
	};
class Scientist : public Employee {
	std::string article_title;
	int no_ofarticle;
public:
	Scientist() {
		name = "Professor X"; emp_id = "P1";
		no_ofarticle = 1; article_title = "Big Bang Theory";
	}
	void display() {
		cout << "\n\n|Scientist|\n" << "Name: " << name
			<< "\nEmployee ID: " << emp_id
			<< "\nArticle Title: " << article_title
			<< "\nArticles Published: " << no_ofarticle;
	}
};
class Laborer : public Employee {
	std::string labor_title;
public:
	Laborer()
	{
		labor_title = "Labor1"; name = "Worker1";
		emp_id = "L1";
	}
void display() {
	cout << "\n\n|Laborer|\n" << "Name: " << name
		<< "\nEmployee ID: " << emp_id
		<< "\nTitle: " << labor_title;
	}
};
int main()
{
	Manager m;
	m.display();
	Scientist s;
	s.display();
	Laborer l;
	l.display();

}