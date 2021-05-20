#include <iostream>
using namespace std;
int Prime=1;
double isPrime(int x);
int main()
{
    int numberPrime;
    cout<<"Enter a number to check whether it is Prime or Not"<<endl;
    cin>>numberPrime;
    if(numberPrime == 0 || numberPrime==1)
        cout<<numberPrime<<" is not a Prime Number. \n";
    else
        {isPrime(numberPrime);
        if(Prime==1)
            cout<<numberPrime<<" is a Prime Number";
        else
            cout<<numberPrime<<" is not a Prime Number"; }}
double isPrime(int x)
{   for (int i=2;i<=x/2;i++)
        {
            if(x%i==0){
                Prime=0;
                break;}
            else
                Prime=1;
        }
    return Prime; }