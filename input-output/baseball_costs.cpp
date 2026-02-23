// Calculates how much a baseball team spends to purchase new baseballs

#include <iostream>
using namespace std;

int main()
{
	int baseballs;
	double baseballCost;
	// Prompt user to enter number of baseballs purchased
	cout << "Enter number of baseballs bought: ";
	cin >> baseballs;
	// Prompt user for the cost of each baseball
	cout << "Enter cost of each baseball: ";
	cin >> baseballCost;
	// Calculate and display total amount spent
	double totalAmount = baseballCost * baseballs;

	cout << "Total amount: " << totalAmount << endl;
	return 0;
}
