#include <iostream>
using namespace std;

int main()
{
	double itemPrice, custPayment, Rest, cents;
	int dollars,quarters, dimes, nickels, pennies;

	cout << "Price for this item is : " << endl;
	cin >> itemPrice;
	cout << "The payment amount from the customes" << endl;
	cin >> custPayment;
	cout << "Your Rest is : " << endl;
	Rest = custPayment - itemPrice;
	dollars = Rest;
	cents = Rest * 100 - dollars * 100;
	cout << "Dollars($) : " << dollars << " * $"<< endl;
	cout << "Cents: " << cents << endl;

	quarters = static_cast<int>(cents) / 25;
	dimes = (static_cast<int>(cents) % 25) / 10;
	nickels = (static_cast<int>(cents) % 25 % 10) / 5;
	pennies = (static_cast<int>(cents) % 25 % 10 % 5);	
	
	cout << "Quarters: " << quarters << " * 0.25$"<< endl;
	cout << "Dimes: " << dimes << " * 0.10$"<< endl;
	cout << "Nickels: " << nickels << " * 0.05$"<< endl;
	cout << "Pennies: " << pennies << " * 0.01$"<< endl;
	return 0;

}