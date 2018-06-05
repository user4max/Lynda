#include <iostream>
using namespace std;

int findPerimeter(int length = 20, int width = 30);

int main()
{
	//call function with no arguments
	int p = findPerimeter();
	cout << "perimeter value for findPerimeter() call: " << p << endl;

	//call function with two arguments
	p = findPerimeter(5,10);
	cout << "perimeter value for findPerimeter(5,10) call : " << p << endl;

	//call function with only one argument
	p = findPerimeter(10);
	cout << "perimeter value for findPerimeter(10) call: " << p << endl;

	return 0;
}

int findPerimeter(int length, int width)
{
	return 2*length + 2*width;
}