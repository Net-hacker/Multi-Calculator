#include <iostream>
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
			cout << "3. Stromst" << Umlaut::ae << "rke" << endl;
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
				cout << "Die Stromst" << Umlaut::ae << "rke: ";
				cin >> y;
				result = O.Spannung(x, y);
				cout << "Die Spannung betr" << Umlaut::ae << "gt: " << result << "V" << endl;
				system("pause");
				x = 0;
				y = 0;
				result = 0;
				break;
				case 2:
				cout << "Die Spannung: ";
				cin >> x;
				cout << "Die Stromst" << Umlaut::ae << "rke: ";
				cin >> y;
				result = O.Widerstand(x, y);
				cout << "Der Widerstand betr" << Umlaut::ae << "gt: " << result << "Ohm" << endl;
				system("pause");
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
				cout << "Die Stromst" << Umlaut::ae << "rke betr" << Umlaut::ae << "gt: " << result << "A" << endl;
				system("pause");
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
		int option;
		float x;
		float y;
		float result;
};