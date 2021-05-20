#include <iostream>
using namespace std;
int func(int num){
    if (num != 0){
    cout << num << " ";
    return func(num-1);}
    else return 0;
}
int main(){
    int var1;
    cout << "Enter an Integer: "; cin >> var1;
    cout << func(var1) << endl;
}