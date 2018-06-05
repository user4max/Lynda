//Static Declaration Id

class Apple {

	public :

		static int Count;

		Apple (int weight, string color)
		{
			this->weight = weight;
			this->color = color;
			Count ++;
			id = Count;
		}

		int GetId()
		{
			return id;
		}

	private:
		int weight;
		string color;
		int id;

};

int Apple::Count = 0;

int main()
{
	setlocale(LC_ALL, "ru");

	Apple apple(150, "Green");
	Apple apple2(120, "Red");
	Apple apple3(43, "Green");

	cout << apple.GetId() << endl;
	cout << apple2.GetId() << endl;
	cout << apple3.GetId() << endl;

}