#include <iostream>
#include <conio.h>
#include <string>

using namespace std;
int main()
{
	char a;
	int hours, price;
	
	cout << "PLDT BULOK DSL\n";
	cout << "CHOOSE YOUR SUBSCRIPTION NOW!!\n";
	cout << "Package A - P995/mo, 10 hours of access (Additional hours are P20/hr)\n";
	cout << "Package B - P1495/mo, 20 hours of access (Additional hours are P10/hr)\n";
	cout << "Package C - P1995/mo, unlimited access\n\n";
	
	cout << "Enter subscription package: ";
	cin >> a;
	switch (a)
	{
		case 'A':
		case 'a':
			cout << "Enter number of hours used: ";
			cin >> hours;
			if (hours <= 10 )
				price = 995;
			else
				price = 995 + (hours - 10) * 20;
				
			cout << "Total amount due is P" << price;
			break;
		case 'B':
		case 'b':
			cout << "Enter number of hours used: ";
			cin >> hours;
			if (hours <= 20 )
				price = 1495;
			else
				price = 1495 + (hours - 20) * 10;
				
			cout << "Total amount due is P" << price;
			break;
		case 'C':
		case 'c':
			cout << "Enter number of hours used: UNLIMITED ACCESS";
			cin >> hours;
			
			price = 1995;
			
			cout << "Total amount due is P" << price;
			break;
		default:
			cout << "The package type you have entered is invalid.";
			break;
	}
	
	
	getch();
	return 0;
}
