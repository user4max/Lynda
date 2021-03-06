
#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
	int menuChoice;
	int months;
	double totalCharges;

	//declare constant variables for membership costs
	const double ADULT = 40.0;
	const double CHILD = 30.0;
	const double FAMILY = 100.0;

	//setup the output formatting
	cout << fixed << setprecision(2)<<showpoint;

	do{
		//Print out the menu
		cout << "Please choose the type of membership"<<endl;
		cout << "1. ADULT Membership ($40/month)"<<endl;
		cout << "2. CHILD Membership ($30/month)"<<endl;
		cout << "3. FAMILY Membership ($100/month)" << endl;
		cout << "4. EXIT " << endl;
		cin>>menuChoice;

		//validate the users menu choice using a while loop
		while (menuChoice < 1 || menuChoice > 4)
		{
			cout << "Invalid choice, please re-enter menu item"<< endl;
			cin >> menuChoice;
		}

		if (menuChoice == 4)
			break; //this allow us to exit out do/while loop

		//ask the user for duration in months of membership
		cout << "Enter the number of months: " << endl;
		cin >> months;

		//validate number of months
		while (months < 1 || months > 24)
		{
			cout << "Membership must be between 1 months and 2 years(24 months)"<< endl;
			cin >>months;
		}

		switch(menuChoice)
		{
			case 1:
				totalCharges = months * ADULT;
				break;
			case 2:
				totalCharges = months * CHILD;
				break;
			case 3:
				totalCharges = months * FAMILY;
				break;
			default:
				break;
		}

		cout << "Based on your choice, your total charges will be $" << totalCharges << endl;

	} while (menuChoice != 4);
	cout << "Thanks for choosing our gym" << endl;
	return 0;
}
