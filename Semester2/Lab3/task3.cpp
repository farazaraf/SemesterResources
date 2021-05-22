/*Demostrate a class that print the combination of strings.
Your program should use two constructor.
The first constructor should be an empty constructor that will allow to declare an array of string.
The second constructor will initializes the length of the string , allocate the necessary space for the string to
be stored and creates the string itself using strcpy.
Your program should consist of one member function join() that concatenates two strings.
It should estimates the length of the string to be joined, 
allocates the memory for the combined string 
and then uses strcpy() to copy the string 
and strcat() to concatenate the strings.
Your main() function program should concatenate three strings into one string such as
Mirza Jameel Baig

#include <iostream>
#include <string>
class StringBuilder
{	private:
	std::string a_myString[10];
	int mystringLength1, mystringLength2,mystringLength3,combinedstringLength;
	std::string newstring;
	public:
	StringBuilder() {}
	StringBuilder(const std::string &mystring1,const std::string &mystring2, const std::string &mystring3)
	{	a_myString[0] = mystring1;
		a_myString[1] = mystring2;
		a_myString[2] = mystring3;
		mystringLength1 = mystring1.length();
		mystringLength2 = mystring2.length();
		mystringLength3 = mystring3.length();	}
	void join();	};
void StringBuilder::join()
{	combinedstringLength = mystringLength1 + mystringLength2 + mystringLength3;
	newstring = a_myString[0] + " " + a_myString[1] + " " + a_myString[2];
	std::cout << newstring << "\nSize of string: " << combinedstringLength;	}
int main()
{	StringBuilder string1("Mirza","Jameel","Baig");
	string1.join();		}
*/