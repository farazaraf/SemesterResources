//Task 2: Write a program that inputs the name of five subjects from user and stores
//them in file named subject.
#include <iostream>
#include <fstream>
#include <string>
using namespace std;
int main()
{
    string subject_name;
    fstream subject_file;
        subject_file.open("Subject.txt",ios::out);
        cout << "Enter Names of Five Subjects with spaces between: ";
    getline(cin,subject_name);
        subject_file << "Names of Subjects: \n" << subject_name ;
        cout << "Writing to file: Subject.txt\n";
        subject_file.close();
}