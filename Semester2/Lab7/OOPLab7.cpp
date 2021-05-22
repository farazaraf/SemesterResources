//task1
//Write a C++ program in which you define a class String and declare two string objects. Your class should contain 
//special function for comparison operator == to return either the two strings are of same length or not.
/*#include <iostream>
#include <string>
using std::cout;
class myString
{
	std::string s;
public:
	myString():s(""){}
	myString(std::string a):s(a){}
	void getString()
	{
		cout << "\n" << s << "\n";
	}
	bool compareString(myString &s2)
	{
		if (s == s2.s) return 1;
		else return 0;
	}
	void operator==(myString& b)
	{
		if (compareString(b) == 1) cout << "Strings are Equal\n";
		else cout << "Strings are not equal\n";
	}
};
int main()
{
	myString s1("hello farazz"), s2("hello faraz");
	s1==s2;
	s1.getString();
	s2.getString();
}*/