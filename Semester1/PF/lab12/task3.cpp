//Provide a program that reads one file e.g. one.txt and creates another file named two.txt that contain only
//those words from one.txt, which start with a lowercase vowel.
#include <iostream>
#include <fstream>
#include <string>
using namespace std;
int main(){
    char c_char; string st,st1,st2;
    fstream oneFile,twoFile;
        oneFile.open("one.txt",ios::in);
        twoFile.open("two.txt",ios::out);
        cout << "Contents of file 'one.txt': \n";
    while(oneFile.eof() == 0){
        oneFile >> st;
        cout << st <<"  "; 
        c_char = st[0];
    switch (c_char)
    {   case 'a' :
    {   st1=st;
        twoFile << st1 << "_";
        break;  }
    case 'e' :
    {   st1=st;
        twoFile << st1 << "_";
        break;  }
    case 'i' :
    {   st1=st;
        twoFile << st1 << "_";
        break;  }
    case 'o' :
    {   st1=st;
        twoFile << st1 << "_";
        break;  }
    case 'u' :
    {   st1 = st;
        twoFile << st1 << "_";
        break;  }   }   }
    oneFile.close();
    twoFile.close();
    twoFile.open("two.txt",ios::in); //output
    cout << "\nOutput of file 'two.txt' is: \n";
    while (twoFile.eof() == 0)
    {   twoFile >> st2;
        cout << st2;    }
    twoFile.close();    }