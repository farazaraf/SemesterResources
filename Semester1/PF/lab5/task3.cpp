#include <iostream>
using namespace std;
int main()
{
    int num1,num2,sum=0;
    cout<<"Enter numbers to add continuously. Enter 0 to Exit.\n";
    do
    {
      cin>>num1>>num2;   
        sum+=num1+num2;
        cout<<"Sum is "<<sum<<" \n";
    } while (num1!=0 && num2!=0); }