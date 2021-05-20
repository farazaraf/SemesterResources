#include <iostream>
using namespace std;
int main()
{
    int a,b,c,Sum,Diff,Prod,Remainder;
    float Division;

    cout<<"\nEnter 5 then 2 then 1\n";
    cin>>a>>b>>c;
    Sum = a + b; 
    cout<<"\nThe sum of "<<a<<" and "<<b<<" is = "<<Sum;
    Diff = a - c; 
    cout<<"\nThe difference of "<<a<<" and "<<c<<" is = "<<Diff;
    Prod = b * c; 
    cout<<"\nThe product of "<<b<<" and "<<c<<" is = "<<Prod;
    Division = a / c; 
    cout<<"\nThe quotient of "<<a<<" and "<<c<<" is = "<<Division;
    Remainder = c%a ; 
    cout<<"\nThe remainder of "<<c<<" and "<<a<<" is = "<<Remainder;

}
