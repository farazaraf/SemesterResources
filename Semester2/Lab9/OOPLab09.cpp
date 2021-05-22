// OOPLab09.cpp : This file contains the 'main' function. Program execution begins and ends there.
/*
Create a linked list, size of linked list will be dependent on the user. 
Insert the numbers in the linked list till the linked list reaches the size.
Create a menu and perform the following function on that linked list.

Traversal: To traverse all the nodes one after another.
Insertion: To add a node at the given position.
Deletion: To delete a node.
Searching: To search an element(s) by value.
Updating: To update a node.

#include <iostream>
using namespace std;
class Node
{
public:
	int m_data;
	Node* nextNode;
};
class LinkedList
{
private:
	Node* listStart, * listEnd;
public:
	LinkedList():listStart(0),listEnd(0){}
	void createnode(int val)//Add a value to the end of the list.
	{
		Node* temp = new Node;
		temp->m_data = val;
		temp->nextNode = 0;
		if (listStart == 0)
		{
			listStart = temp;
			listEnd = temp;
			temp = 0;
		}
		else
		{
			listEnd->nextNode = temp;
			listEnd = temp;
		}
	}
	void Display()	//Transverse Function
	{
		Node* temp = new Node;
		temp = listStart;
		while (temp != 0)
		{
			cout << temp->m_data << "   ";
			temp = temp->nextNode;
		}
	}
	void Insert(int pos, int value) //Inserting Normal.
	{
		Node* pre = new Node;
		Node* cur = new Node;
		Node* temp = new Node;
		cur = listStart;
		for (int i = 1; i < pos; i++)
		{
			pre = cur;
			cur = cur->nextNode;
		}
		temp->m_data = value;
		pre->nextNode = temp;
		temp->nextNode = cur;
	}
	void Delete()	//Deleting Last element in the list.
	{
		Node* current = new Node;
		Node* previous = new Node;
		current = listStart;
		while (current->nextNode != 0)
		{
			previous = current;
			current = current->nextNode;
		}
		listEnd = previous;
		previous->nextNode = 0;
		delete current;
	}
	void Update(int old, int New) {		//Updating the Element in a Linked list.
		int pos = 0;
		Node *temp;
			temp = new Node;
		if (listStart == 0) {cout << "Linked List not initialized";		}
		temp = listStart;
		while (temp->nextNode != 0) {
			if (temp->m_data == old) {
				temp->m_data = New;
				cout << "\nfound at position, replaced " << old << 
					" With "<< New <<" \nPosition: " <<pos << "\n ";
				return;		}
			temp = temp->nextNode;
			pos++;		}
		cout << " does not exist in the list\n" <<  old;		}
	void Search(int key)	//Searching function
	{
		int pos = 1;
		bool found = false;
		Node* temp = new Node;
		temp = listStart;
		while (temp != 0)
		{
			if (temp->m_data == key)
			{	cout << "\nFound at position:" << " " << pos;
				found = true;
				break;		}
			temp = temp->nextNode;
			pos++;		}
		if (found != true) { cout << "\nElement doesn't exist in LinkedList"; }
	}		};
int main()
{
	LinkedList list;
	int choice;
	cout << "Enter 7 Numbers to input into Linked List:\n";
	for (int i = 0; i < 7; i++)
	{	int x;
		cin >> x;
		list.createnode(x);		}
	cout << "List Complete.\n";
		while (1)
	{
			cout << "\n\n|Linked List Menu:|\n" << "1. Transverse Linked List\n" << "2. Insert at given position\n"
				<< "3. Delete a Node\n" << "4. Search an Element by Value\n" << "5. Update Value of a Node\n\nSelect An Option: ";
		cin >> choice;
		switch (choice)		{
		case 1:
		{	cout << "\n<||>Displaying List:\n\n";
			list.Display();
			cout << "\n\n";
			break;		}
		case 2:
		{	int pos, val;
			cout << "\n<||>Type a Position and the value that you want to insert.\n";
			cin >> pos >> val;
			list.Insert(pos, val);
			break;		}
		case 3:
		{	cout << "\n<||>Deleting Last Element in the List:\n";
			list.Delete();
			break;		}
		case 4:
		{	int value;
			cout << "\n<||>Searching an Element by its value:\nEnter the value you want to search for: ";
			cin >> value;
			list.Search(value);		}
		case 5:
		{	int oldValue, newValue;
			cout << "\n<||>Update a value in the list:\nEnter old value followed by new value.\n";
			cin >> oldValue >> newValue;
			list.Update(oldValue,newValue);
			list.Display();		}
		default:
			break;	}		}		}*/













/*#include <iostream>
using std::cout;
using std::cin;
class Node
{
public:
    int m_data,id;
    Node* nextNode;
    Node():m_data(0),id(0),nextNode(0){}
};
class LinkedList :public Node
{
private:
    Node* listStart, *listEnd;
    int x;
public:
    LinkedList():listStart(0),listEnd(0){}
    void Insert(int pos, int value)
    {
        Node* prev = new Node;
        Node* curr = new Node;
        Node* temp = new Node;
        curr = listStart;
        for (int i = 1; i < pos; i++)
        {
            prev = curr;
            curr = curr->nextNode;
        }
        temp->m_data = value;
        prev->nextNode = temp;
        temp->nextNode = curr;
    }
    void Input(int x)
    {
        Node* temp = new Node;
        temp->m_data = x;
        temp->nextNode = 0;
        temp->id++;
        if (listStart == 0)
        {
            listStart = temp;
            listEnd = temp;
        }
        else
        {
            listEnd->nextNode = temp;
            listEnd = listEnd->nextNode;
        }
    }
    void display()
    {
        Node* temp;
        temp = listStart;
        while (temp != 0)
        {
            cout << temp->m_data << " ";
            temp = temp->nextNode;
        }
    }
};
int main()
{
    LinkedList a;
    int op1, op2=0;
    std::cout << "|Linked List Menu:|\n" << "1. Transverse Linked List\n" << "2. Insert at given position\n"
              << "3. Delete a Node\n" << "Search an Element by Value\n" << "Update Value of a Node\n";
    while (1)
    {
        cout << "Enter menu choice.";
        cin >> op1;
        switch (op1)
        {
        case 1:
        {
            cout << "\nTranverse list:\n";
            a.display();
            break;
        }
        case 2:
        {
            cout << "\nInserting at a position:\nEnter Position and Value.";
            int pos, value;
            cin >> pos >> value;
            a.Insert(pos,value);
            break;
        }
        case 6:
        {
            cout << "\Full list:\nEnter something: \n";
            cin >> op2;
            if (op2 != -1)
            {
                a.Input(op2);
            }
            else
            break;
        }
        default:
            break;
        }
    }
    cout << "\n<||>Transversal:\nThe linked list is:\n";
    a.display();

}*/