/*To write a C++ program for booking using constructor and destructor.
Algorithm
Step 1: Create an object for the class book.
Step 2: Declare the pointer variable for author, title, and publisher and the Variable for price and
stock position.
Step 3: Read the number of records.
Step 4:Display a menu with the following choice create ,buybook, transaction and display.
Step 5:Using switch case execute the statements corresponding to the choice.
Step 6:If the choice is create, read the title, author, publishes, price and stock position and pass
it to the constructor of the book class.
Step 7;Find the string length of each of the pointer variables dynamically.
Step 8:If the choice is buy books, read the title, author, stock from the user and check these with
the array already created.
Step 9:If the author name and title matches then display the message”:Available” and read the number
of copies.
Step 10:Decrement the stock position by 1 and display the mount to be paid. Increment successful
transaction by 1. Else display “NOT success” and increment the unsuccessful transaction by 1.
Step 11:If the transaction; display the variables, successful transaction and unsuccessful transaction.
Step 12:If the choice is display, then display all the details such as title, author, price, publishes
and stock position

#include<iostream>
#include<string>
class book {
private:
	int* bookStock;
	std:: string *bookAuthor, *bookTitle, *bookPublisher;
	double *bookPrice;
public:
	book() { //constructor
		bookStock = new int;
		bookAuthor = new std::string;
		bookTitle = new std::string;
		bookPublisher = new std::string;
		bookPrice = new double;		}
	~book() {//deconstructor
		delete bookStock, bookAuthor, bookTitle, bookPublisher, bookPrice; }
	void display();
	void buybook();
	void input();
	int check(std::string, std::string);
	void s_transaction();
	void f_transaction();		};
void book::input() {
	std::cin.ignore();
	std::cout << "\nEnter Title: ";      std::getline(std::cin, *bookTitle);
	std::cout << "\nEnter Author's Name: ";     std::getline(std::cin, *bookAuthor);
	std::cout << "\nEnter Publisher's Name: ";   std::getline(std::cin,*bookPublisher);
	std::cout << "\nEnter Price: ";            std::cin >> *bookPrice;
	std::cout << "\nEnter Stock Position: ";   std::cin >> *bookStock;	}
void book::display() {
	std::cout << "\nAuthor Name: " << *bookAuthor;
	std::cout << "\nTitle Name: " << *bookTitle;
	std::cout << "\nPublisher Name: " << *bookPublisher;
	std::cout << "\nPrice: " << *bookPrice;
	std::cout << "\nStock Position: " << *bookStock;	}
int book::check(std::string t_user, std::string a_user) {
	if ((t_user == *bookTitle) && (a_user == *bookAuthor))
		return 1;
	else return 0;	}
void book::buybook() {
	int stock;
	char key;
	std::cout << "\nEnter Number Of Books to buy: ";
	std::cin >> stock;
	if (stock > *bookStock)
	{		std::cout << "\nRequired Copies not in Stock. Transaction failed.";
	f_transaction();	}
	else
	{	std::cout << "\nCost: " << (*bookPrice) * stock << "Rs.\n" << "Confirm Purchase? Y or N \n";
		std::cin >> key;
		if (key == 'Y' || 'y')
		{	*bookStock = *bookStock - stock;
			std::cout << "\nBooks Bought Sucessfully\n";	}
		else std::cout << "Purchase cancelled by user.\n";	}	}
int stransaction=0,ftransaction=0;
void book::s_transaction()
{	stransaction++;		}
void book::f_transaction()
{	ftransaction++;		}
int main() {
	book* B[10];
	int i = 0,j, choice;
	std::string title, author,t_user,a_user;
	while (1) {	std::cout << "\n\tMENU"
			<< "\n1.| Create Book Entry	|"
			<< "\n2.| Buy Books		|"
			<< "\n3.| Display Books	|"
			<< "\n4.| See Transactions	|"
			<< "\n5.| Exit		|"
			<< "\nEnter your Choice: ";		std::cin >> choice;
		switch (choice) 
	{
		case 1:		//inputting Books
		{	B[i] = new book;
			B[i] -> input();	//using -> operator instead of dot because using pointers
			i++;	break;	}
		case 2: {	//buying books
			std::cin.ignore();
			std::cout << "\nEnter Title Of Book: "; std::getline(std::cin,t_user);
			std::cout << "\nEnter Author Of Book: ";  std::getline(std::cin,a_user);
			for (j = 0; j < i; j++) {
				if (B[j]->check(t_user, a_user)) {
					B[j]->buybook();
					B[j]->s_transaction();
					std::cout << "Transaction Successful.\n";
					break;	}	}
			if (j == 1){
				std::cout << "\nThis Book is Not in Stock" << "\nTransaction failed.";
				B[j]->f_transaction();}
			break; }
		case 3: { //display
			std::cin.ignore();
			std::cout << "\nEnter Title Of Book: "; std::getline(std::cin,t_user);
			std::cout << "\nEnter Author Of Book: ";  std::getline(std::cin,a_user);
			for (j = 0; j < i; j++) {
				if (B[j]->check(t_user, a_user)) {
					std::cout << "\nBook Found Successfully";
					B[j]->display();
					break;	}	}
			if (j == i)
				std::cout << "\nThis Book is Not in Stock";
			break;	}
		case 4: {	//transactions
			std::cout << "\nSuccessful Transactions: " << stransaction;
			std::cout << "\nFailed Transactions: " << ftransaction;
			break;	}
		case 5: {std::cout << "Exiting..."; exit(0); }
		default: std::cout << "\nInvalid Choice Entered!";	}	}	}*/