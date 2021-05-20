#include <iostream>
using namespace std;
int main()
{
int math_marks,percent; char grade;
cout<<"Enter your marks in mathematics\n Total Marks Are 100 \n";cin>>math_marks;
switch (math_marks<=100)
{case 0: cout<<"You have entered Invalid Number. Please Try Again. \n";
break;
case 1:
    switch (math_marks>=50)
    {
    case 0: cout<<"Unfortunately, You have Failed.. \n";
    break;
    case 1:
        switch (math_marks>=90)
        {
        case 1:
            cout<<"You Passed With First Division and got "<<math_marks<<"% and A Grade\n";
            break;
        default:
    switch (math_marks<90 && math_marks>=80)
        {
        case 1:
            cout<<"You Passed With Second Division and got "<<math_marks<<"% and B Grade\n";
            break;
        default:
    switch (math_marks<80 && math_marks >= 70)
        {
        case 1:
            cout<<"You Passed With Third Division and got "<<math_marks<<"% and C Grade\n";
            break;
        default:
    switch (math_marks<70 && math_marks >=60)
        {
        case 1:
            cout<<"You Passed With Forth Division and got "<<math_marks<<" % and D Grade\n";
            break;
        default:
    switch (math_marks<60 && math_marks >=50)
        {
        case 1:
            cout<<"You Passed With Fifth Division and got "<<math_marks<<" % and E Grade\n";
            break;       
        default:
            break;
        }
    }
}
}}}}}