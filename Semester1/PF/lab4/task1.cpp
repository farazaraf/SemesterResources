#include <iostream>
using namespace std;
int main()
{
int num1;
cout<<"Enter a number"<<endl;
cin>>num1;
    if (num1>0)
        {cout<<"You entered a positive number\n";
        if(num1%2 == 0)
            cout<<num1<<" is even\n";
        else
            cout<<num1<<" is odd\n";
        }          
    else if (num1<0)
        cout<<"You entered negative number\n";
}
