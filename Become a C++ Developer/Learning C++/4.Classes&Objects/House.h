//g++ -o main houses.cpp House.cpp
#ifndef HOUSE_H_
#define HOUSE_H_
#include <string>
using namespace std;

class House {
	private :
		string houseColor;
		int numBathrooms;
		int numBedrooms;
		double squareFeet;

	public :
		//constructors
		House();
		House(string, int, int, double);

		//destructor
		~House();

		//accessor methods
		string getColor();
		int getNumBath();
		int getNumBed();
		double getSqft();

		//mutator methods
		void setColor(string);
		void setNumBath(int);
		void setNumBed(int);
		void setSqft(double);
};

#endif