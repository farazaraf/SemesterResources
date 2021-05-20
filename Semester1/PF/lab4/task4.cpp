#include <iostream>
using namespace std;
int main()
{
    int a,b,c ;
    cout<<"Enter Any THREE integers 1 2 3: \n";
    cin>>a>>b>>c;
if(a>b)
        if (a>c)cout<<"Number 1 is the greatest integer \n";
        else cout<<"Number 3 is the greatest integer \n";
else if(b>a)
        if(b>c) cout<<"Number 2 is the greatest integer \n";
        else cout<<" Number 3 the greatest integer \n";
else if(c>a)
        if(a>c) cout<<"Number 3 is the greatest integer \n";
else if(a==b&&b==c)
cout<<"all THREE integers are same";
else
{
        cout<<"Two numbers are equal";
}

}