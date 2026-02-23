// Computes sales tax and total price on $100 purchase
#include <iostream>
using namespace std;

int main()
{
	double cost = 100;
	double salesTax = 6.5;
	double countyTax = 2;
		
	double totalTax = salesTax + countyTax;
	double totalPrice = cost + totalTax;
	// Display purchase price, total tax, and total price
	cout << "Purchase Price: " << cost;
	cout << "Total Tax: " <<  totalTax;
	cout << "Total Price: " << totalPrice;
	return 0;
}
