#include <iostream>
#include <conio.h>

using namespace std;
int main()
{
	bool exit=false;
	do
	{
		int number, a = 0;
		cout << "Enter a number: ";
		cin >> number;
		
		if (number == 0)
		{
			cout << "Goodbye...";
			break;
		}
		else 
		{
			for (int b = 1; b <= number; b++)
			{
				a = a + b;
			}
			cout << "The sum of all whole number from 1 to " << number << " is " << a << "." << endl;
		}
	}
	while (!exit);
}
