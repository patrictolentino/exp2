#include <iostream>
#include <conio.h>
#include <iomanip>
#include <cmath>
#include <string>

using namespace std;
int main()
{
	int x, y;
	float v;
	const double z = 2.5;
	
	cout << "Enter value of x: ";
	cin >> x;
	cout << "Enter value of y: ";
	cin >> y;
	
	if (x == 1 && 1 < y && y < 5)
	{
		v = x * y * z;
		cout << "The value of V is " << v << setw(10) << setprecision(2);
	}
	else if (x == 1 && y >= 5)
	{
		v = x + (y / z);
		cout << "The value of V is " << v << setw(10) << setprecision(2);
	}
	else if (x == 2 && y <= 5)
	{
		v =  abs(( x - y ) / z);
		cout << "The value of V is " << v << setw(10) << setprecision(2);
	}
	else if (x == 2 && y > 5)
	{
		v = x - sqrt(y + z);
		cout << "The value of V is " << v << setw(10) << setprecision(2);
	}
	else 
	{
		v = x + y + z;
		cout << "The value of V is " << v << setw(10) << setprecision (2);
	}
	
	getch();
	return 0;
}
