#include <iostream>
using namespace std;
int main()
{
    int password; string usr_name ;
    cout<<"Enter Username: "<<endl;
    cin>>usr_name;
    cout<<"Enter Password: "<<endl;
    cin>>password;
    if (usr_name=="Test" && password == 1001)
        cout<<"Login Successful! \n";
    else
        cout<<"Login failed! Please recheck your credentials. \n";
}
