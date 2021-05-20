#include <iostream>
using namespace std;
int main()
{
    float pi,rad,circum;
    cout<<"Enter radius of circle \n";
    cin>> rad;
    pi = 3.1415;

    #define circum 2 * pi * rad;
    cout<<"Circumference of Circle = "<<circum;
    return(0);
}



