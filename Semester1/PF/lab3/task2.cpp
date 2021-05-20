#include <iostream>
using namespace std;
int main()
{
    int number1,remainder;
    cout<<"Please enter a number"<<endl;
    cin>>number1;
    remainder = number1%2;
    if(remainder == 0)
    cout<<"The number you entered is Even"<<endl;
    else
    cout<<"The number you entered is Odd";
}