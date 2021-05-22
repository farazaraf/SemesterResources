//Design a template classand derived from non template classand calculate the area of cube
//task2
#include <iostream>
using std::cout;
using std::cin;
class Base
{
};
template <typename T>
class Derived : public Base 
{
	T area,x;
public:
	Derived(T z):x(z){}
	void Area()
	{
		area = 6 * (x * x);
		cout << "\nArea is: " << area;
	}
};
int main()
{
	Derived<int> a(5);
	a.Area();
}