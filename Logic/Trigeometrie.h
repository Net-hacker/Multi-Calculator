#include <iostream>
#include <cmath>
using namespace std;

class Seiten
{
	public:
		float SinusH(float a, float x)
		{
			return round(x / sin(a * M_PI / 180.0));
		}
		float SinusG(float a, float x)
		{
			return round(x * sin(a * M_PI / 180.0));
		}

		float CosinusA(float a, float x)
		{
			return round(x * cos(a * M_PI / 180.0));
		}
		float CosinusH(float a, float x)
		{
			return round(x / cos(a * M_PI / 180.0));
		}

		float TangensA(float a, float x)
		{
			return round(x / tan(a * M_PI / 180.0));
		}
		float TangensG(float a, float x)
		{
			return round(x * tan(a * M_PI / 180.0));
		}
};

class Winkel
{
	public:
		float LetzterWinkel(float a)
		{
			return 180 - (90 + a);
		}
};

class Banner_Tri
{
	public:
		void Seite()
		{
			cout << "Mit was will man rechnen?" << endl;
			cout << "---------------------------" << endl;
			cout << "1. Sinus" << endl;
			cout << "2. Cosinus" << endl;
			cout << "3. Tangens" << endl;
			cout << "4. Back" << endl;
		}
		void Winkelchen()
		{
			cout << "Was willst du rechnen?" << endl;
			cout << "------------------------" << endl;
			cout << "1. Einen Fehlenden Winkel" << endl;
			cout << "2. Back" << endl;
		}
};

class Chooser_Tri
{
	public:
		void TGeo()
		{
			Seiten S;
			B.Seite();
			cout << "Option: ";
			cin >> option;

			switch (option) {
				case 1: {
				cout << endl;
				cout << "Gesucht ist?" << endl;
				cout << "1. Hypotenuse" << endl;
				cout << "2. Gegenkathete" << endl;
				cout << "3. Back" << endl; 
				cout << "Option: ";
				cin >> opt;

				if (opt == 1) {
					cout << "Die Seitenl" << Umlaut::ae << "nge: ";
					cin >> x;
					cout << "Der Winkel: ";
					cin >> a;
					result = S.SinusH(a, x);
					cout << "Die Hypotenuse ist " << result << "cm lang" << endl;
					system("pause");
					x = 0;
					a = 0;
					result = 0;
				} else if (opt == 2) {
					cout << "Die Seitenl" << Umlaut::ae << "nge: ";
					cin >> x;
					cout << "Der Winkel: ";
					cin >> a;
					result = S.SinusG(a, x);
					cout << "Die Gegenkathete ist " << result << "cm lang" << endl;
					system("pause");
					x = 0;
					a = 0;
					result = 0;
				} else {
					break;
				}

				} break;
				case 2: {
				cout << endl;
				cout << "Gesucht ist?" << endl;
				cout << "1. Hypotenuse" << endl;
				cout << "2. Ankathete" << endl;
				cout << "3. Back" << endl; 
				cout << "Option: ";
				cin >> opt;

				if (opt == 1) {
					cout << "Die Seitenl" << Umlaut::ae << "nge: ";
					cin >> x;
					cout << "Der Winkel: ";
					cin >> a;
					result = S.CosinusH(a, x);
					cout << "Die Hypotenuse ist " << result << "cm lang" << endl;
					system("pause");
					x = 0;
					a = 0;
					result = 0;
				} else if (opt == 2) {
					cout << "Die Seitenl" << Umlaut::ae << "nge: ";
					cin >> x;
					cout << "Der Winkel: ";
					cin >> a;
					result = S.CosinusA(a, x);
					cout << "Die Ankathete ist " << result << "cm lang" << endl;
					system("pause");
					x = 0;
					a = 0;
					result = 0;
				} else {
					break;
				}
				
				} break;
				case 3: {
				cout << endl;
				cout << "Gesucht ist?" << endl;
				cout << "1. Gegenkathete" << endl;
				cout << "2. Ankathete" << endl;
				cout << "3. Back" << endl; 
				cout << "Option: ";
				cin >> opt;

				if (opt == 1) {
					cout << "Die Seitenl" << Umlaut::ae << "nge: ";
					cin >> x;
					cout << "Der Winkel: ";
					cin >> a;
					result = S.TangensG(a, x);
					cout << "Die Gegenkathete ist " << result << "cm lang" << endl;
					system("pause");
					x = 0;
					a = 0;
					result = 0;
				} else if (opt == 2) {
					cout << "Die Seitenl" << Umlaut::ae << "nge: ";
					cin >> x;
					cout << "Der Winkel: ";
					cin >> a;
					result = S.TangensA(a, x);
					cout << "Die Ankathete ist " << result << "cm lang" << endl;
					system("pause");
					x = 0;
					a = 0;
					result = 0;
				} else {
					break;
				}

				} break;
				case 4:
				break;
				default:
				break;
			}
		}
		void Wink()
		{
			Winkel W;
			B.Winkelchen();
			cout << "Option: ";
			cin >> option;

			switch (option) {
				case 1:
				cout << "Der Winkel Alpha: ";
				cin >> a;
				result = W.LetzterWinkel(a);
				cout << "Der Winkel Beta betr" << Umlaut::ae << "gt: " << result << grad << endl;
				system("pause");
				a = 0;
				result = 0;
			}
		}
	private:
		Banner_Tri B;
		char grad = 0xF8;
		float x;
		float a;
		float result;
		int option;
		int opt;
};