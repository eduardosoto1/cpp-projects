// Calculate the nature center spent to make a flower garden

#include <iostream>
using namespace std;

int main()
{
	double soilCost, seedCost, fenceCost;
	// Prompt user for cost of soil
	cout << "Enter cost of soil: ";
	cin >> soilCost;
	// Prompt user for flower seeds cost
	cout << "Enter cost of flower seeds cost: ";
	cin >> seedCost;
	// Prompt user for fence cost
	cout << "Enter cost of fence cost: ";
	cin >> fenceCost;
	// Calculate and display total amount
	double totalAmount = soilCost + seedCost + fenceCost;
	
	cout << "Total amount: " << totalAmount << endl;
	return 0;
}	
