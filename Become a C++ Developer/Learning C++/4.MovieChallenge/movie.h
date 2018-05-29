#ifndef MOVIE_H_
#define MOVIE_H_
#include <string>
using namespace std;

class Movie
{
	private:
		string movieName;
		int year;
		string rating;
	public:
		Movie();
		Movie(string, int, string);
		~Movie();

		void setName(string name);
		void setYear(int year);
		void setRating(string rating);

		string getName();
		int getYear();
		string getRating();
};



#endif