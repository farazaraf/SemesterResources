//Write a C++ program that inputs four floating-point values and displays the memory address of all the
//values using pointers. Also, display the values using pointers.
#include <iostream>
using namespace std;
int main()
{
    float a,*aPtr,b,*bPtr,c,*cPtr,d,*dPtr;
    cout << "Enter 4 floating point values."; cin >>a>>b>>c>>d;
aPtr = &a;  bPtr = &b;  cPtr = &c;  dPtr = &d;
    cout << "Memory address of\n A: " << aPtr << "\n B: " << bPtr
         << "\n C: " << cPtr << "\n D: " << dPtr << endl
         << "\n Values Printed Using Pointers:\n"
         << "\n A: " << *aPtr << "\n B: " << *bPtr
         << "\n C: " << *cPtr << "\n D: " << *dPtr << endl;
}