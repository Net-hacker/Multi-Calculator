#include <iostream>
#include <sstream>
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
			system("read a");
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
			system("read a");
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
			r << x << " · " << y << " = " << result;
			cout << r.str().c_str() << endl;
			system("read a");
			r.str("");
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
			r << x << " ÷ " << y << " = " << result;
			cout << r.str().c_str() << endl;
			system("read a");
			r.str("");
			x = 0;
			y = 0;
			result = 0;
		}
	private:
		Mathe M;
		stringstream r;
		float x;
		float y;
		float result;
};
