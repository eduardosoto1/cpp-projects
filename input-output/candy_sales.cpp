// Program calculates how much an organization earns during fund-raising candy sale. 
// The program should ask for candy bars sold, and amount for each bar sold. 
// Then display the total amount earned
#include <iostream>
using namespace std;

int main()
{
	int candyBars = 0;
	int amountEarned = 5;
	// Ask for candy bars sold
	cout << "Enter amount of candy bars sold: ";
	cin >> candyBars;
	// Ask amount for amount organization earns for each bar sold
	cout << "Enter amount earned per bar sold: ";
	cin >> amountEarned;

	// Calculate total amount earned
	int totalAmount = candyBars * amountEarned;
	// Display total amount earned
	cout << "Total Amount: " << totalAmount << endl;

	return 0;
}


