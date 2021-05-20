#include <iostream>
using namespace std;
int main()
{
    char userString[25],*strPtr;
    cout << "Enter Your Name " << endl; cin >> userString;
    strPtr = userString;
    cout << "Your Name is: " << endl;
        for (;(*strPtr != '\0') ; strPtr++)
        {
            cout << *strPtr ;
        } 
}