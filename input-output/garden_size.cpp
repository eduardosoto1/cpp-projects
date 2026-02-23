// Calculates the size of a rectangular flower garden

#include <iostream>
using namespace std;

int main()
{
	double length, width;
	// Prompt user for length in feet
	cout << "Enter length in ft: ";
	cin >> length;
	// Prompt user for width in feet
	cout << "Enter width in ft: ";
	cin >> width;
	// Display square feet in garden
	double area = length * width;
	cout << "Square ft: " << area << endl;

	return 0;
}
