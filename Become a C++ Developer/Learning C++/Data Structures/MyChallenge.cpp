//Print out a lunch menu
//It will have 4 items along with 4 prices
//ask the user to choose an item
//after they select which item they want, ask for
//quantity (how many they want), print toal cost of their order
//create 2 parallel arrays.1 contain the lucnh items, such as
//hotdog, hamburger, french fries and salad.Use a fifth option to allow the //user to exit.Have a corresponding parallel array that has the price of ach //item, the price of a hotdog, the price of a hamburger, the price of french //fries, the price of a salad.docker pull smartmaxeu/yocto-project
#include <iostream>
using namespace std;
int main()
{
	string menu[] = {"Hotdog", "Hamburger", "French Fries", "Salad"};
	double price[] = { 1.5, 2.25, 2.05, 1.25};
	int qty;
	double totalCharges = 0;
	int lunchChoice;

	do {
		//Print menu lunch
		cout << "Please select menu lucnh!" << endl;
		cout << "1.Hotdog - 1.5$" << endl;
		cout << "2.Hamburger - 2.25$" << endl;
		cout << "3.French Fries - 2.05$" << endl;
		cout << "4.Salad - 1.25" << endl;
		cout << "5.End and exit menu" << endl;
		cin>>lunchChoice;

		while (lunchChoice < 1 || lunchChoice > 5)
		{
			cout << "Invalid choice, please re-enter menu item"<< endl;
			cin >> lunchChoice;
		}

		switch(lunchChoice)
		{
			case 1:
				cout << "QTY" << endl;
				cin >> qty;
				totalCharges = totalCharges + (qty * 1.5);
				break;
			case 2:
				cout << "QTY" << endl;
				cin >> qty;
				totalCharges = totalCharges + (qty * 2.25);
				break;
			case 3:
				cout << "QTY" << endl;
				cin >> qty;
				totalCharges = totalCharges + (qty * 2.05);
				break;
			case 4:
				cout << "QTY" << endl;
				cin >> qty;
				totalCharges = totalCharges + (qty * 1.25);
				break;
			default:
				break;
		}

		cout << "Based on your choice, your total charges will be $" << totalCharges << endl;

	}while (lunchChoice != 5);
	cout << "Enjoy your lunch!" << endl;
	return 0;
}