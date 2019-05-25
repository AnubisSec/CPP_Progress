#include <iostream>
using namespace std;


constexpr int Square(int number) {
	return number * number;
}

int main() {
	// Assign a fixed lenght to a variable
	const int ARRAY_LENGTH = 5;
	
	// Array named "myNumbers" of length 5, with values
	int myNumbers [ARRAY_LENGTH] = {5, 10, 0, -101, 20};
	
	// array named "moreNumbers" with a length of 5 * 5 (25)
	int moreNumbers [Square(ARRAY_LENGTH)];


	cout << "Enter index of the element to be changed: ";
	int elementIndex = 0;
	cin >> elementIndex;

	cout << "Enter new value: ";
	int newValue = 0;
	cin >> newValue;

	myNumbers[elementIndex] = newValue;
	moreNumbers[elementIndex] = newValue;

	cout << "Element " << elementIndex << " in array myNumbers is: ";
	cout << myNumbers[elementIndex] << endl;


	cout << "Element " << elementIndex << " in array moreNumbers is: ";
	cout << moreNumbers[elementIndex] << endl;

	return 0;
}
