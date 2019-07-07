#include <iostream>
#include <conio.h>

using namespace std;
int main()
{
	int x = 0, y = 1, z, a = 2, b = 2 + 20;

	cout << "The Fibonacci numbers are:\n";
	cout << x << "," << y << ",";

	for (a; a < b; a++)
	{
		z = x + y;
		x = y;
		y = z;
		cout << z << ",";
	}

	cout << "\b";
	cout << " ";

	_getch();
	return 0;
}
