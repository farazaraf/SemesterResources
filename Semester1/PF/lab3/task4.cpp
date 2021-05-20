#include <iostream>
using namespace std;
int main()
{
    int num1;
    cout<<"Enter a number"<<endl;
    cin>>num1;
    if(num1<100){
        cout<<"Number is Less than 100\n";
        if(num1<50){
            cout<<"Number is Less than 50 \n";}
        else{
            cout<<"Number is Greater than or Equal to 50 \n";}
        }
    else
        cout<<"Number is Greater than or Equal to 100";
}