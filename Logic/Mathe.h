#include <iostream>
using namespace std;

class Mathe
{
	public:
		float Addieren(float x, float y)
		{
			return x + y;
		}
		float Subtrahieren(float x, float y)
		{
			return x - y;
		}
		float Multiplizieren(float x, float y)
		{
			return x * y;
		}
		float Divieren(float x, float y)
		{
			return x / y;
		}
};

class Chooser_Mathe
{
	public:
		void Add()
		{
			cout << "Die 1. Zahl: ";
			cin >> x;
			cout << "Die 2. Zahl: ";
			cin >> y;
			result = M.Addieren(x, y);
			cout << x << " + " << y << " = " << result << endl;
			system("pause");
			x = 0;
			y = 0;
			result = 0;
		}
		void Sub()
		{
			cout << "Die 1. Zahl: ";
			cin >> x;
			cout << "Die 2. Zahl: ";
			cin >> y;
			result = M.Subtrahieren(x, y);
			cout << x << " - " << y << " = " << result << endl;
			system("pause");
			x = 0;
			y = 0;
			result = 0;
		}
		void Multi()
		{
			cout << "Die 1. Zahl: ";
			cin >> x;
			cout << "Die 2. Zahl: ";
			cin >> y;
			result = M.Multiplizieren(x, y);
			cout << x << " " << mal << " " << y << " = " << result << endl;
			system("pause");
			x = 0;
			y = 0;
			result = 0;
		}
		void Div()
		{
			cout << "Die 1. Zahl: ";
			cin >> x;
			cout << "Die 2. Zahl: ";
			cin >> y;
			result = M.Divieren(x, y);
			cout << x << " " << durch << " " << y << " = " << result << endl;
			system("pause");
			x = 0;
			y = 0;
			result = 0;
		}
	private:
		Mathe M;
		char mal = 0xFA;
		char durch = 0xF6;
		float x;
		float y;
		float result;
};
