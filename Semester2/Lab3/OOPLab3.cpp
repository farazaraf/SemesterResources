/*Demonstrate a class Sale that calculate the sale on an overall items, 
where sales is of 6 % on overall item.
You must call a constructor that takes the sale rate as an argument, 
and two member function one
which calculate the sales
andand another function getTotal which returns the total sale.
Your Program
should print the TotalSale in main function.*/
#include <iostream>
class Sale {
private:
	double priceItem=1000;
	double priceSaleRate;
	double priceTotal;
public:
	Sale(double SaleRate)
	{
		priceSaleRate = SaleRate;
	}
	void saleCalculator(double price,double rate);
	void getTotal();
};
void Sale::saleCalculator(double priceItem,double priceSaleRate)
{
	double temp;
	temp = priceSaleRate / 100.0;
	temp = temp * priceItem;
	priceTotal = priceItem - temp;
}
void Sale::getTotal()
{
	saleCalculator(priceItem,priceSaleRate);
	std::cout << "Total Price: " << priceItem << "\nSaleRate: " << priceSaleRate << "%\nTotal Discounted Price: " << priceTotal;
}
int main()
{
	Sale s1(6);
	s1.getTotal();
}