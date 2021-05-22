/*
Human body is made up of limbs and heart. Each of them plays a vital role such as,
Heart pumps the blood.
Limbs make the required movements.
Can limbs, heart or brain exist without a human body? Identify the relationship between:
a)	Human body and heart.
b)	Human body and limbs. Provide the implementation in C++.*/


#include <iostream>
#include <string>
class Heart {
	std::string m_name = "Heart";
public:
	Heart()
	{	std::cout << "\nHeart pumps blood\n";	}
	~Heart() { std::cout << "\nHeart Destroyed\n"; }	};
class Limbs {
	std::string m_limbs = "Limbs";
public:
	Limbs()
	{	std::cout << "\nLimbs provide Movement\n";	}
	~Limbs() { std::cout << "\nLimbs Destroyed\n"; }	};
class HumanBody {
	Heart h;
	Limbs l;
public:
	HumanBody() { std::cout << "\nHuman Body Created\n"; }
	~HumanBody() { std::cout << "\n\nHuman Body Destroyed!\n"; }	};
int main()
{	HumanBody h;	}