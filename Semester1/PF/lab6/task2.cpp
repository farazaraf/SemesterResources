#include <iostream>
using namespace std;
int G_num(int x,int y);
int main()
{   int num1,num2;
    cout<<"Enter Two numbers ";
    cin>>num1>>num2;
    if (num1==num2) cout<<"The numbers are equal";
    else cout<<"The Greater Number is "<<G_num(num1,num2); }
int G_num(int x,int y)
{   if (x>y)
    return x;
    else
    return y;   }