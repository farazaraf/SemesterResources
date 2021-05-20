#include <iostream>
using namespace std;
int main()
{
    int num1,i=1,fac=1;
    cout<<"Enter a number to find Factorial: \n"; cin>>num1;
    while (i<=num1)
    {fac=fac*i;
        i++;}
    cout<<"The Factorial of "<<num1<<" is "<<fac; }