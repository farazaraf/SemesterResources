//task2
/* Write a C++ program to design polygon-rectangle-square-parallelogram-triangle hierarchy with pure virtual
function of getArea(). The base class now is an abstract base class and lots of other classes added to the hierarchy*/
#include <iostream>
using std::cout; using std::cin;
class Polygon
{
protected:
	double length, breadth;
public:
	
	virtual double GetArea(double ,double ) = 0;
};
class Rectangle:public Polygon
{
public:
	double GetArea(double length,double breadth)override { return length * breadth; }
};
class Square:public Rectangle
{
public:
	double GetArea(double length, double breadth)override { return length * length; }
};
class Parallelogram :public Rectangle
{
public:
	double GetArea(double length, double breadth)override { return length * breadth; }
};
class Triangle :public Parallelogram
{
public:
	
	double GetArea(double length, double breadth)override { return (breadth * length)*0.5; }
};
int main()
{
	Polygon* p;
	p = new Rectangle;
	cout << "Area of Rectangle: " << p->GetArea(5,5) << "\n";
	delete p;
	p = new Square;
	cout << "Area of Square: " << p->GetArea(20,0) << "\n";
	delete p;
	p = new Parallelogram;
	cout << "Area of Parallelogram: " << p->GetArea(20,5) << "\n";
	delete p;
	p = new Triangle;
	cout << "Area of Triangle: " << p->GetArea(30,30);
	delete p;
}