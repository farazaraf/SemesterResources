#include <iostream>
using namespace std;
int reverNum(int x)
{
    int i,reverseNumber=0;
    while (x != 0)
    {
        i = x % 10;
        x = x/=10;
        reverseNumber *= 10;
        reverseNumber += i;
    }
    return reverseNumber;
}
int main()
{
int Number,reverseNumber=0;
cout<<"Enter a Number to Reverse"<<endl;
cin>>Number;
cout<< "The Reverse of "<<Number<<" is "<<reverNum(Number)<<endl;
}