

#include <iostream>
#include<cmath>

using namespace std;

int main()
{
	int selection;
	float area;

	cout << "Gometry Calculator\n";
	cout << "	1. Calculate the Area of a Circle\n";
	cout << "	2. Calculate the Area of a Rectangle\n";
	cout << "	3. Calculate the Area of a triangle\n";
	cout << "	4. Quit\n";
	cout << "Enter your choice (1-4):";
	cin >> selection;
	
	if (selection < 1 || selection > 4)
		cout << "Please enter a valid choice\n\n";
	else {
		switch (selection)
		{
		case 1: {
			float radius;
			cout << "What is the Circle's radius ?";
			cin >> radius;
			area = pow(radius, 2) * 3.14159;
			cout << "\nThe Circle's area is " << area;
			cout << endl << endl;

		}break;
		case 2: {
			float length;
			float width;
			cout << "What is the Rectangle's length? ";
			cin >> length;
			cout << "\nWhat is it's width? ";
			cin >> width;
			area = length * width;
			cout << "\nThe Rectangle's area is " << area;
			cout << endl << endl;

		}break;
		case 3: {
			float base;
			float height;
			cout << "What is the Triangle's base? ";
			cin >> base;
			cout << "\nWhat is it's height? ";
			cin >> height;
			area = base * height * .5;
			cout << "\nThe Triagle's area is " << area;
			cout << endl << endl;

		}break;


		default: cout << "\nYou have choosen to quit the program.\n\n";
			   break;
		}
	}
	return 0;
}

