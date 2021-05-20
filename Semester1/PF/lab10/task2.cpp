//Design a C++ program that takes two integers. Display their memory addresses and values using pointers.
//Then, exchange values of both the integers and again display their values using pointers.
#include <iostream>
using namespace std;
int main(){
    int var1,var2, temp;
    cout << "Please Enter Two Integer Values:" << endl; cin >> var1 >> var2 ;
    int *Ptr1 = &var1;
    int *Ptr2 = &var2;
    cout << "Values and Memory Addresses of the integers by Pointers :" << endl
         << "Integer 1 : " << *Ptr1 << "\tMemory Address : " << Ptr1 << endl
         << "Integer 2 : " << *Ptr2 << "\tMemory Address : " << Ptr2 << endl;
    temp = *Ptr1;
    *Ptr1 = *Ptr2;
    *Ptr2 = temp;
    cout << "Value of Integer 1: " << *Ptr1 << "\t" << Ptr1 << endl
         << "Value of Integer 2: " << *Ptr2 << "\t" << Ptr2 << endl ;   }