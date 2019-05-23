#include <iostream>
#include <cmath>
using namespace std;


int userRadius = 0;
int userChoice = 0;

void CalcCircum() {
	int circumResult;

	cout << "Enter your radius: " << endl;
	cin >> userRadius;	
	circumResult = 2 * 3.14 * userRadius;

	cout << "Circumference is: " << circumResult << endl;
	
};

void CalcArea() {
	float areaResult;
	
	cout << "Enter your radius: " << endl;
	cin >> userRadius;
	float radSquare = pow(userRadius,2);
	areaResult = radSquare * 3.14;
	
	cout << "Area is: " << areaResult << endl;
};

int main() {
	cout << "Would you like to find the circumference(1) or area(2) of a circle? " << endl; 
	cin >> userChoice;

	switch(userChoice)
	{
		case 1:
			CalcCircum();
			break;
		case 2:
			CalcArea();
			break;
		default:
			cout << "You must make a valid selection!" << endl;
			break;
	}

}
