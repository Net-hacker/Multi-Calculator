#include <iostream>
#include <sstream>
using namespace std;

class Zinsrechnung
{
	public:
		float Zinsen(float x, float y)
		{
			float d = y / 100;
			return x * d;
		}
		float Kapital(float x, float y)
		{
			float d = y / 100;
			return x / d;
		}
		float Prozentsatz(float x, float y)
		{
			float r = x / y;
			return r * 100;
		}
};

class Tageszinsen
{
	public:
		float TZinsen(float x, float y, float t)
		{
			float d = y / 100;
			float r = t / 360;
			return x * d * r;
		}
};

class Zinseszinsen
{
	public:
		float ZinsZ(float x, float y, int j)
		{
			float NX = x;
			float P = y / 100;
			for (int jj = 1; jj <= j; jj++) {
				NX = (NX * P) + x;
				r << "Der Betrag beträgt über " << jj << " Jahre: " << NX << " Euro" << endl;
				cout << r.str().c_str() << endl;
			}
		}
	private:
		stringstream r;
};

class Banner_Zin
{
	public:
		void ZiBanner()
		{
			cout << "Was soll gerechnet werden?" << endl;
			cout << "----------------------------" << endl;
			cout << "1. Zinsen" << endl; 
			cout << "2. Kapital" << endl; 
			cout << "3. Prozentsatz" << endl; 
			cout << "4. Back" << endl; 
		}
};

class Chooser_Zinsen
{
	public:
		void ZinsR()
		{
			option = 0;
			Zinsrechnung Z;
			B.ZiBanner();
			cout << "Option: ";
			cin >> option;

			switch (option) {
				case 1:
				cout << "Das Kapital: ";
				cin >> x;
				cout << "Der Prozentsatz: ";
				cin >> y;
				result = Z.Zinsen(x, y);
				r << "Die Zinsen beträgen: " << result << " €";
				cout << r.str().c_str() << endl;
				system("read a");
				r.str("");
				x = 0;
				y = 0;
				result = 0;
				break;
				case 2:
				cout << "Die Zinsen: ";
				cin >> x;
				cout << "Der Prozentsatz: ";
				cin >> y;
				result = Z.Kapital(x, y);
				r << "Das Kapital beträgen: " << result << " €";
				cout << r.str().c_str() << endl;
				system("read a");
				r.str("");
				x = 0;
				y = 0;
				result = 0;
				break;
				case 3:
				cout << "Die Zinsen: ";
				cin >> x;
				cout << "Das Kapital: ";
				cin >> y;
				result = Z.Prozentsatz(x, y);
				r << "%";
				cout << "Prozent = " << result << r.str().c_str() << " und in Prozentzahl " << result / 100 << endl;
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
		void Tagzinsen()
		{
			option = 0;
			Tageszinsen T;
			cout << "Das Kapital: ";
			cin >> x;
			cout << "Der Prozentsatz: ";
			cin >> y;
			cout << "Die Anzahl der Tage: ";
			cin >> z;
			if (z > 360 || z < 0) {
				cout << "Die Tagesanzahl ist falsch!" << endl;
				system("read a");
				system("clear");
				return Tagzinsen();
			}
			else {
				result = T.TZinsen(x, y, z);
				r << "Die Zinsen über " << z << " Tage beträgt: " << result << " €";
				cout << r.str().c_str() << endl;
				system("read a");
				r.str("");
				x = 0;
				y = 0;
				z = 0;
				result = 0;
			}
		}
		void ZZ()
		{
			option = 0;
			Zinseszinsen ZZ;
			cout << "Das Kapital: ";
			cin >> x;
			cout << "Der Prozentsatz: ";
			cin >> y;
			cout << "Die Anzahl der Jahre: ";
			cin >> j;
			result = ZZ.ZinsZ(x, y, j);
			system("read a");
			x = 0;
			y = 0;
			j = 0;
			result = 0;
		}
	private:
		Banner_Zin B;
		int option;
		float x;
		stringstream r;
		float y;
		float z;
		int j;
		float result;
};
