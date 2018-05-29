#include <iostream>
#include "movie.h"

using namespace std;

int main()
{
	int year;
	char moviename[50], movierating[6];

	cout << "What is the tittle for first movie ?" << endl;
	cin.getline(moviename, 50);
	cout << "What is the realesed year?" << endl;
	cin >> year;
	cin.ignore();
	cout << "What is the rating ? (PG, G, PG-13 ...) " << endl;
	cin.getline(movierating, 6);

	Movie movie1(moviename, year, movierating);

	cout << "What is the tittle for next movie ?" << endl;
	cin.getline(moviename, 50);
	cout << "What is the realesed year?" << endl;
	cin >> year;
	cin.ignore();
	cout << "What is the rating ? (PG, G, PG-13 ...) " << endl;
	cin.getline(movierating, 6);

	Movie movie2(moviename, year, movierating);

	cout << "What is the tittle for last movie ?" << endl;
	cin.getline(moviename, 50);
	cout << "What is the realesed year?" << endl;
	cin >> year;
	cin.ignore();
	cout << "What is the rating ? (PG, G, PG-13 ...) " << endl;
	cin.getline(movierating, 6);

	Movie movie3(moviename, year, movierating);

	cout << endl << endl;
	cout << "This is the your top 3 Movie :" << endl;
	cout << "Name of first movie : " << movie1.getName() << endl;
	cout << "Realesed year : " << movie1.getYear() << endl;
	cout << "Rating : " << movie1.getRating() << endl << endl;

	cout << "Name of next movie : " << movie2.getName() << endl;
	cout << "Realesed year : " << movie2.getYear() << endl;
	cout << "Rating : " << movie2.getRating() << endl << endl;

	cout << "Name of last movie : " << movie3.getName() << endl;
	cout << "Realesed year : " << movie3.getYear() << endl;
	cout << "Rating : " << movie3.getRating() << endl << endl;

	return 0;
}
