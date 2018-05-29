//Implicit/Explicit Conversion
//IDE Integrate Development Environments 
#include <iostream>
using namespace std;
int main()
{
	int dollars, cents;
	double price;
	char dollarSign = 36; //implicit conversion
	cout << "enter price in dollars and cents: " << endl;
	cin >> price;
	dollars = price;
	cents = price * 100 - dollars * 100;
	cout << "Total dollars: " << dollarSign <<dollars << "cents :" <<cents << endl;

	return 0;
}