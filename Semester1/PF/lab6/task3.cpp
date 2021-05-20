#include <iostream>
using namespace std;
double Table(double x);
int main()
{
    double num_table;
    cout<<"Type a number to get its table: "<<endl;
    cin>>num_table;
    cout<< Table(num_table);
}
double Table(double x)
{
    for(int i=1;i<=10;i++)
        cout<<x<<" times "<<i<<" is "<< x*i<<endl;
return 0;
}