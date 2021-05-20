#include <iostream>
using namespace std;
int tableFunc(int x,int y=1){
    if ( y <= 10){
    cout << x << " times " << y << " is: " << x*y << endl;
    return tableFunc(x,y+1); }
    else return 0;
}
int main(){
    int num;
    cout << "Please Enter An Integer to Print its Table: "; cin >> num;
    cout << "Table of " << num << " is :\n" << tableFunc(num) << endl;
}