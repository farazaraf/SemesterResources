#include <iostream>
using namespace std;
int func(int x, int y){
    if (y > 0){
    return x *= func(x,y-1);}
    else return 1;
}
int main(){
    int num,pow;
    cout << "\nEnter A Number: "; cin >> num;
    cout << "\nEnter its Power: "; cin >> pow;
    cout << "\n" << num << " raise to " << pow << " is: " << func(num,pow) << endl;
}
