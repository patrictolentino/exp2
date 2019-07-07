#include <iostream>
#include <conio.h>

using namespace std;
int main()
{
	float gallons, bill, payment, unpaid, payment2, unpaid2, unpaid3;
	
	cout << "Enter number of gallons consumed: ";
	cin >> gallons;
	
	bill = 35 + (1.10 * gallons);
	
	cout << "Your total water bill is P" << bill << ".\n";
	cout << "Enter amount of payment: ";
	cin >> payment;
	
	unpaid = bill - payment;
	
	if (unpaid > 0)
	{
		unpaid2 = unpaid + 20;
		cout << "You still have an unpaid balance of P" << unpaid << ".\n"; 
		cout << "A late charge of P20 is added to your bill. You total unpaid balance is P" << unpaid2 << ".\n";
		cout << "Enter amount of payment: ";
		cin >> payment2;
		
		unpaid3 = unpaid2 - payment2;
		if (unpaid3 > 0)
		{
			cout << "Payment is still insufficient. Your remaining balance of P" << unpaid3 
			<< " will be added to your next billing along with a P20 late charge.\n";
			cout << "Thank you for using our water services.";
		}
		else if (unpaid3 <= payment2)
		{
			cout << "You have a change of P" << payment2 - unpaid2 << ".\n";
			cout << "Thank you for using our water services.";
		}
	}
	else 
	{
		cout << "You have a change of P" << unpaid << ".\n";
		cout << "Thank you for using our water services.";
	}
	getch();
	return 0;
}
