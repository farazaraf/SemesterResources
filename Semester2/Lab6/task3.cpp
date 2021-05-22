/*
House can contain multiple rooms there is no independent life for room and any room can not belong to two different house. 
If we delete the house room will also be automatically deleted.
#include <iostream>
#include <string>
	const int numroom = 3;
class Room {
	std::string m_roomName[numroom];
public:
	std::string* r;
	Room() {
		m_roomName[0] = "No Room Name"; m_roomName[1] = "No Room Name"; m_roomName[2] = "No Room Name";}
	Room(std::string a,std::string b,std::string c) 
	{	r = new std::string[numroom];
		r[0] = a;
		r[1] = b;
		r[2] = c;	}
	void disp()
	{	std::cout << "\n" << r[0] << "\n" << r[1] << "\n" << r[2];	}
	~Room() {	std::cout << "\nDestructor room\n";
		delete r;	}	};
class House{
	std::string m_houseName;
	Room r{("DiningRoom"),("LivingRoom"),("Bedroom") };
public:
	House():m_houseName("No Name") { }
	House(std::string name):m_houseName(name)  {}
	void display()
	{	std::cout << "\nHouse Name: " << m_houseName
				  << "\nNumber of Rooms: " << numroom
				  << "\nRoom Names: ";
		r.disp();}
	~House() { std::cout << "\nDestructor Home\n"; }	//When this destructor is called, the Room destructor is called as well.
};
int main()
{	House h("myhouse");
	h.display();	}*/