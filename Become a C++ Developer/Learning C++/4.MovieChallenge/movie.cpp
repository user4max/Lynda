
#include "movie.h"
#include <iostream>
using namespace std;

Movie::Movie(string name, int year, string rating)
{
	movieName = name;
	while(year < 1950 || year > 2018)
	{
		cout << "Invalid year!!!Please re-enter" << endl;
		cin >> year;
		cin.ignore();
	}
	this->year = year;
	this->rating = rating;
}
Movie::~Movie() {}
string Movie::getName()
{
	return movieName;
}
int Movie::getYear()
{
	return year;
}
string Movie::getRating()
{
	return rating;
}
void Movie::setName(string name)
{
	movieName = name;
}
void Movie::setYear(int year)
{	
	while(year < 1950 || year > 2018)
	{
		cout << "Invalid year!!!Please re-enter" << endl;
		cin >> year;
		cin.ignore();
	}
	this->year = year;
}
void Movie::setRating(string rating)
{
	this->rating = rating;
}