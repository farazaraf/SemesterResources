#include <iostream>
using namespace std;
int main()
{​​​​​​​
    char grade;
    int marks, perc;
    cout << "Enter your marks of Maths=";
    cin >> marks;
    switch (marks >= 90)
    {​​​​​​​
    case 1:
        cout << "Congratulations, You have passed with 1st Division & achieved" << marks << "  marks and A Grade" << endl;
        break;
    default:
        switch (marks < 90 & marks >= 80)
        {​​​​​​​
        case 1: cout << "Congratulations, You have passed with 2nd Division & achieved" << marks << " marks and B Grade" << endl;
            break;
        default:
            switch (marks < 80 & marks >= 70)
            {​​​​​​​
            case 1:
                cout << "You have passed with 3rd Division and have got " << marks << " marks and C Grade\n";
                break;
            default:
                switch (marks < 70 & marks >= 60)
                {​​​​​​​
                case 1:
                    cout << "You passed with 4th Division and have got " << marks << " marks and D Grade" << endl;
                    break;
                default:
                    switch (marks < 60 & marks >= 40)
                    {​​​​​​​
                    case 1:
                        cout << "You passed with 5th Division and have got " << marks << " marks and E Grade\n";
                        break;


                        switch (marks <= 100)
                        {​​​​​​​


                        ​case 1: cout << "You have entered Invalid Number. Please Try Again. \n";
                            break;
                        case 1:
                            switch (marks >= 50)
                            {​​​​​​​
                            case 1: cout << "Unfortunately, You have Failed.. \n";
                                break;


                                perc = (marks / 100) * 100;
                                cout << "Your percentage is=" << perc << endl;
                            }​​​​​​​
                        }​​​​​​​
                    }​​​​​​​
                }​​​​​​​
            }​​​​​​​
        }​​​​​​​
    }​​​​​​​
}​​​​​​​












/* #include <iostream>
using namespace std;
int main()
{
    float tm, obm, per;
    tm = 100;
    cout << "Total Marks = " << tm <<  endl;
    cout << "\n";
    cout << "Enter Your Obtain Marks in Mathematics " << endl; cin >> obm;
    per = (obm / tm) * 100;
    switch (obm >= 33)
    {
    case 1:
    {    cout << "\n";
        cout << " Congratulations You have passed the Exam " << endl;
        cout << "\n";
    per = (obm / tm) * 100;
    cout << "Your Percentage is = " << per << endl;
          switch (per >= 80)
        {
            case 1:
                 cout << "You have passed your exam in 1st Division" << endl << "You Grade is A* Grade";
                cout << "\n";
            break;
 
         }
        switch (per >= 70 && per<80)
        {
        case 1:
            cout << "You have passed your exam in 2nd Division" << endl << "You Grade is A";
            cout << "\n";
            break;

        }
        switch (per >= 60 && per < 70)
        {
        case 1:
            cout << "You have passed your exam in 3rd Division" << endl << "You Grade is A-";
            cout << "\n";
            break;

        }
        switch (per >= 50 && per < 60)
        {
        case 1:
            cout << "You have passed your exam in 4th Division" << endl << "You Grade is B";
            cout << "\n";
            break;

        }
        switch (per >= 40 && per < 50)
        {
        case 1:
            cout << "You have passed your exam in 5th Division" << endl << "You Grade is C";
            cout << "\n";
            break;

        }

        switch (per >= 33 && per < 40)
        {
        case 1:
            cout << "You have passed your exam in 6th Division" << endl << "You Grade is D";
            cout << "\n";
            break;

        }

    break;

    }

    default:
        cout << "\n";
        cout << "You have failed the Exam" << endl;
        cout << "Your Percentage is = " << per << endl;
        cout << "You Grade is F" <<endl;

    }
}

























/*if (math_marks > 100 || math_marks < 0) cout<<"Wrong number entered. Exiting..\n";
    else if (math_marks >=50)
    {
        cout<<"Congratulations! You have passed.\n";
        percent = math_marks;
        if (percent<=100 && percent>=90)
            grade = 'A';
        else if (percent<90 && percent>=80) 
            grade = 'B';
        else if (percent<80 && percent>=70)
            grade = 'C';
        else if (percent<70 && percent>=60)
            grade = 'D';
        else if (percent<60 && percent>=50)
            grade = 'E';
        else
            grade = 'F';       
        switch (grade){
        case 'A': 
        cout<<"You got First Division with "<<math_marks<<" marks\n"<<" Grade "<<grade;
        break;
        case 'B':
        cout<<"You got Second Division with "<<math_marks<<" marks\n"<<" Grade "<<grade;
        break;
        case 'C':
        cout<<"You got Third Division with "<<math_marks<<" marks\n"<<" Grade "<<grade;
        break;
        case 'D':
        cout<<"You got Fourth Division with "<<math_marks<<" marks\n"<<" Grade "<<grade;
        break;
        case 'E':
        cout<<"You got Fifth Division with "<<math_marks<<" marks\n"<<" Grade "<<grade;
        break;
        default:
        cout<<"You have Failed.";
        break;}
        cout<<"\n";
    }
else
    cout<<"you have failed\n";*/