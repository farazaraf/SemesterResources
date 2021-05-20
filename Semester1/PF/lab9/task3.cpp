#include <iostream>
using namespace std;
struct date{
    int day=12 ;
    int month=12;
    int year=2020;
};
struct phonebook{
    char name[30];
    char cityname[15];
    long phone_no;
    int dateofmonth;
};
int main(){
    phonebook P; date d;
    cout << "Enter Values into the Phonebook: " << endl;
    cout << "Enter Name: "; cin >> P.name;
    cout << "Enter Name of City: "; cin >> P.cityname;
    cout << "Enter Phone Number: "; cin >> P.phone_no;
    cout << "Enter Day of Month: "; cin >> P.dateofmonth;   
    cout    << "\n\n"<<d.day<<"/"<<d.month<<"/"<<d.year
            << "\n==========================="
            << "\n= Name: " << P.name
            << "\n= City Name: " << P.cityname
            << "\n= Phone Number: " << P.phone_no
            << "\n= " << P.dateofmonth << " of the Month"
            << "\n===========================\n" << endl;
    }