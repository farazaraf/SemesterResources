//Write a program that declares a structure to store roll no, marks, average, and grade of a student. 
//The program should define a structure variable, inputs the values and then displays these values.
#include <iostream>
using namespace std;
    struct student_data
    {
        int roll_no;
        int marks;
        double avg;
        char grade;
    };
int main()
{
    student_data st1;
cout << "Enter the Data of a student. \n";
        cout << "\nWrite roll.no of Student: "; 
        cin >> st1.roll_no;
        cout << "\nThe Marks of Student: "; 
        cin >> st1.marks;
        cout << "\nStudent's Average: ";
        cin >> st1.avg;
        cout << "\nThe grade of Student: ";
        cin >> st1.grade;
cout << "\nNow we will display the student's data.\n"
     << "\nRoll no: " << st1.roll_no
     << "\nMarks: " << st1.marks
     << "\nAverage: " << st1.avg
     << "\nGrade of Student: " << st1.grade << endl;
}