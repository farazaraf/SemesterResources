//Develop a program that reads one file e.g. one.txt and creates another file named two.txt that contain all
//words from one.txt in uppercase.
#include <iostream>
#include <fstream>
#include <string>
#include <algorithm> //toupper/tolower functions
using namespace std;
    void toUpperCase(string x);
    fstream text1,text2;
int main(){
    string stringA;
        text1.open("text1.txt",ios::in);
        cout << "Content of first file are: " << endl;
    getline(text1,stringA);
        cout << stringA << endl;
    toUpperCase(stringA);   }
void toUpperCase(string x)
{   for(int i=0;i < x.length() ; i++)
    {   x[i] = toupper(x[i]);   }
        text2.open("text2.txt",ios::out);
        text2 << x ;  
        cout << "Lowercase changed to Uppercase. Check file 'text2.txt'\n"; }