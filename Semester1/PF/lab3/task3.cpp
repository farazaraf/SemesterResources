#include <iostream>
using namespace std;
int main()
{
    int week_num;
    cout<<"enter day of the week between (1-7)";
    cin>>week_num;
    if(week_num == 1)
        cout<<"today is Monday \n";
    else if(week_num == 2)
        cout<<"today is Tuesday \n";
    else if(week_num == 3)
        cout<<"today is Wednesday \n";
    else if(week_num == 4)
        cout<<"today is Thursday \n";
    else if(week_num == 5)
        cout<<"today is Friday \n";
    else if(week_num == 6)
        cout<<"today is Saturday \n";
    else if(week_num == 7)
        cout<<"today is Sunday \n";
    else
        cout<<"You Didnot enter a Valid Day";
}    