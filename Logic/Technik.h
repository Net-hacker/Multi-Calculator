#include <iostream>
#include <sstream>
#include <stdio.h>
using namespace std;

class Ohmesche_Gesetz
{
	public:
		float Spannung(float x, float y)
		{
			return x * y;
		}
		float Widerstand(float x, float y)
		{
			return x / y;
		}
		float Stromstaerke(float x, float y)
		{
			return x / y;
		}
};

class Banner_Tech
{
	public:
		void Ohmesche()
		{
			cout << "Was soll errechnet werden?" << endl;
			cout << "-----------------------------" << endl;
			cout << "1. Spannung" << endl;
			cout << "2. Widerstand" << endl;
			puts("3. Stromstärke");
			cout << "4. Back" << endl;
		}
};

class Chooser_Tech
{
	public:
		void Ohm()
		{
			option = 0;
			Ohmesche_Gesetz O;
			B.Ohmesche();
			cout << "Option: ";
			cin >> option;

			switch (option) {
				case 1:
				cout << "Der Widerstand: ";
				cin >> x;
				fputs("Die Stromstärke: ", stdout);
				cin >> y;
				result = O.Spannung(x, y);
				r << "Die Spannung beträgt: " << result << "V";
				cout << r.str().c_str() << endl;
				system("read a");
				r.str("");
				x = 0;
				y = 0;
				result = 0;
				break;
				case 2:
				cout << "Die Spannung: ";
				cin >> x;
				fputs("Die Stromstärke: ", stdout);
				cin >> y;
				result = O.Widerstand(x, y);
				r << "Der Widerstand beträgt: " << result << "Ohm";
				cout << r.str().c_str() << endl;
				system("read a");
				r.str("");
				x = 0;
				y = 0;
				result = 0;
				break;
				case 3:
				cout << "Die Spannung: ";
				cin >> x;
				cout << "Der Widerstand: ";
				cin >> y;
				result = O.Stromstaerke(x, y);
				r << "Die Stromstärke beträgt: " << result << "A";
				cout << r.str().c_str() << endl;
				system("read a");
				r.str("");
				x = 0;
				y = 0;
				result = 0;
				break;
				case 4:
				break;
				default:
				break;
			}
		}
	private:
		Banner_Tech B;
		stringstream r;
		int option;
		float x;
		float y;
		float result;
};
