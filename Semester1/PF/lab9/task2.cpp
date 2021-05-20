#include <iostream>
using namespace std;
struct Book{
    unsigned int id;
    unsigned int pages;
    double price;   };
int main(){
    Book bookarray[5] , expbook;double pric;
    cout<<"Please Enter the record of 5 books:" <<endl;
    for(int i=0;i<5;i++)
{       cout << "\nEnter id of Book " << i+1 <<endl;
        cin >> bookarray[i].id;
        cout << "\nEnter No. of Pages of Book " << i+1 <<endl;
        cin >> bookarray[i].pages;
        cout << "\nEnter Price of Book " << i+1 <<endl;
        cin >> bookarray[i].price;
    pric =bookarray[0].price;  
    if (pric <= bookarray[i].price) {
        pric = bookarray[i].price;
        expbook.price = bookarray[i].price;
        expbook.pages = bookarray[i].pages;
        expbook.id = bookarray[i].id;}  }
    cout << "\nRecord of Most Expensive Book: "
         << "\nBook ID : " << expbook.id
         << "\nPages : " << expbook.pages
         << "\nPrice : " << expbook.price;  }