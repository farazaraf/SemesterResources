#include <iostream>
using namespace std;
double expon(double x,int y)
{
    int result=x;
    for (int i=1;i<y;i++)
    result *= x;
    return result;  }
int main()
{
    double number;
    int power;
    cout<<"Enter a Number to take its Exponent. \n"; cin>>number;
    cout<<"Now Enter its Power"; cin>>power;
    cout<<number<<" to the "<<power<<" is "<<expon(number,power); }