/*task1
1.	Student Evaluation using Inheritance
TASK
Step1: Create a class studentpersonal declare rollno, age, name, sex in protected mode.
Step2: Using a parameterized constructor initialize the values for all the data members.

Step 3: Create another class studentmark that is inherited from the base class and having the data members mark1, mark2, mark3 and mark4. 
Using a parameterized constructor initialize the value for mark1,mark2,mark3 and mark4.

Step 4: Create another class call studentsports and declare score as protected mode.
Step 5: Create a class studentresult and public inherited form studentmarks and studentsports having the data members total, avg,grade.

Step6: Calculate the total and average and display the result.

#include <iostream>
#include <string>	//included strings
using std::cout;
using std::cin;
class StudentPersonal { //base class 1
protected:	//storing user info
	int roll_no, age;
	std::string Name;
	char Gender;
public:
	StudentPersonal() {} // empty and parameterized ctors
	StudentPersonal(int c_roll, int c_age, std::string c_nam, char c_gender) {
		roll_no = c_roll;
		age = c_age;
		Name = c_nam;
		Gender = c_gender;
	}
};
class StudentMark : public StudentPersonal	//	inherited class. Derived class 1.
{
protected:
	int mark1, mark2, mark3, mark4;
public: //	calling parameterized ctor which calls ctor of Base class.
	StudentMark(int m1, int m2, int m3, int m4) :StudentPersonal(45, 18, "FarazAhmad", 'M')
	{
		mark1 = m1; mark2 = m2; mark3 = m3; mark4 = m4;
	}
};
class StudentSports { //Base class 2
protected: int score; //no use for this variable was mentioned in the question.
};
class StudentResult : public StudentMark, public StudentSports {	// Derived class 3. 
public: 
	double total, avg;
	char grade;

	StudentResult():StudentMark(10,10,10,10) {		//calling parameterized ctor of derived class 1.
		  avg = 0, total = 0 , score = 100;
	  }
	  void avgR() //	Function that performs everything in the program.
	  {
		  total = mark1 + mark2 + mark3 + mark4; //		sum and average
		  avg = total / 4.0;
		  cout << "Student Data:\nRoll no:" << roll_no << "\nAge: " << age 
			   << "\nName: " << Name << "\nGender: " << Gender
			   << "\nAverage of 4 tests of student is: " << avg
			   << "\nTotal: " << total;
		  if (total <= 10)	//	basic conditions to calculate grade
		  {
			  grade = 'F';
			  cout << "\nGrade is: " << grade;
		  }
		  else if (total > 10 && total < 15)
		  {
			  grade = 'E';
			  cout << "\nGrade is " << grade;
		  }
		  else if (total > 15 && total < 20)
		  {
			  grade = 'D';
			  cout << "\nGrade is " << grade;
		  }
		  else if (total > 20 && total < 25)
		  {
			  grade = 'C';
			  cout << "\nGrade is " << grade;
		  }
		  else if (total > 25 && total < 30)
		  {
			  grade = 'B';
			  cout << "\nGrade is " << grade;
		  }
		  else if (total > 30 && total <= 40)
		  {
			  grade = 'A';
			  cout << "\nGrade is " << grade;
		  }
	  }
};
	  int main()
	  {
		  StudentResult m; // creating object of derived class
		  m.avgR(); // calling function
	  }*/