#include <iostream>
#include <conio.h>

using namespace std;
int main()
{
	int counter;
	
	counter = 1;
	for (;counter<=10;)
	{
		cout << counter << ", ";
		counter++;
	}
	counter = 12;
	for (;counter<=28;)
	{
		cout << counter << ", ";
		counter++;
		counter++;
	}
	counter = 30;
		
		cout << counter << " ";
	
	cout << endl;
	
	getch();
	return 0;
}
