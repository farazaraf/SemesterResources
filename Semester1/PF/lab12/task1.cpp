//Write a program in which you write:
// One integer type value
//One character type value
//One floating type vale
//to a file by handling the file efficiently.
#include <iostream>
#include <fstream>
using namespace std;
int main()
{
    int integer,usrChoice; char character, c_char;float floatingpoint;
        cout << "We are going to Write Data to a File called 'My_text'\n"
             << "Enter an Integer: "; cin >> integer;
        cout << "Enter a Character: "; cin >> character;
        cout << "Enter a Float: "; cin >> floatingpoint;
fstream my_text;
        my_text.open("my_text",ios::out); // use "my_text.txt" if on windows
        my_text << "|Integer you wrote is: " << integer << " | "
                << "\nCharacter you wrote is: " << character << " | "
                << "\nFloat you wrote is: " << floatingpoint ;
        my_text.close();
        cout << "Select a Task: \n" << "(1)See Output Of File.\n" << "(2)Exit.\n";
        cin >> usrChoice;
    if (usrChoice == 1)
        {my_text.open("my_text",ios::in);
    while (usrChoice > 0)
    {   
        my_text >> c_char;
    if (my_text.eof()){break;}
    else{
    if(c_char == '|')
    {   cout << "\n";       }
        cout << c_char ;    }   }   }
else if(usrChoice == 2)
    {   cout << "Exiting..\n";  }
else cout << "Invalid Selection\n";
    cout << endl;
    my_text.close();
}
