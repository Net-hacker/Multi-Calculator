#include <iostream>
#include <sstream>
#include <cmath>
using namespace std;

class Quadrieren
{
	public:
		float Quad(float x)
		{
			return x * x;
		}
};

class Zehnerpotenz
{
	public:
		float WZehner(float x)
		{
			int len = sizeof(x);
			float ten = x / pow(10, len);
			return ten;
		}
		float Hoch(float x)
		{
			int len = sizeof(x);
			return len;
		} 
};

class Wurzel
{
	public:
		double QuadratWurzel(double x)
		{
			double r = sqrt(x);
			return r;
		}
		double Kubikwurzel(double x)
		{
			return pow(x, 1.0 / 3);
		}
		double N_TeWurzel(int n, double x)
		{
			return pow(x, 1.0 / n);
		}
};

class RWurzeln
{
	public:
		float AWurzeln(float x, float y)
		{
			float xy = x + y;
			return sqrt(xy);
		}
		float SWurzeln(float x, float y)
		{
			float xy = x - y;
			return sqrt(xy);
		}
		float MWurzeln(float x, float y)
		{
			float xy = x * y;
			return sqrt(xy);
		}
		float DWurzeln(float x, float y)
		{
			float xy = x / y;
			return sqrt(xy);
		}
};

class Bann_Pot
{
	public:
		void RWBanner()
		{
			cout << "Wie soll die Wurzel gerechnet werden?" << endl;
			cout << "-------------------------------------------" << endl;
			cout << "1. Addieren" << endl;
			cout << "2. Subtrahieren" << endl;
			cout << "3. Multiplizieren" << endl;
			cout << "4. Dividieren" << endl;
			cout << "5. Back" << endl;
		}
};

class Chooser_Pot
{
	public:
		void WAdd()
		{
			option = 0;
			RWurzeln R;
			B.RWBanner();
			cout << "Option: ";
			cin >> option;

			switch (option) {
				case 1:
				cout << "Die 1. Zahl: ";
				cin >> x;
				cout << "Die 2. Zahl: ";
				cin >> y;
				result = R.AWurzeln(x, y);
				cout << "Das Ergebnis von die Wurzel aus " << x << " + die Wurzel aus " << y << " = " << result << endl;
				system("read a");
				x = 0;
				y = 0;
				result = 0;
				break;
				case 2:
				cout << "Die 1. Zahl: ";
				cin >> x;
				cout << "Die 2. Zahl: ";
				cin >> y;
				result = R.SWurzeln(x, y);
				cout << "Das Ergebnis von die Wurzel aus " << x << " - die Wurzel aus " << y << " = " << result << endl;
				system("read a");
				x = 0;
				y = 0;
				result = 0;
				break;
				case 3:
				cout << "Die 1. Zahl: ";
				cin >> x;
				cout << "Die 2. Zahl: ";
				cin >> y;
				result = R.MWurzeln(x, y);
				r << "Das Ergebnis von die Wurzel aus " << x << " · die Wurzel aus " << y << " = " << result;
				cout << r.str().c_str() << endl;
				system("read a");
				r.str("");
				x = 0;
				y = 0;
				result = 0;
				break;
				case 4:
				cout << "Die 1. Zahl: ";
				cin >> x;
				cout << "Die 2. Zahl: ";
				cin >> y;
				result = R.DWurzeln(x, y);
				r << "Das Ergebnis von die Wurzel aus " << x << " ÷ die Wurzel aus " << y << " = " << result;
				cout << r.str().c_str() << endl;
				system("read a");
				r.str("");
				x = 0;
				y = 0;
				result = 0;
				break;
				case 5:
				break;
				default:
				break;
			}
		}
		void Quack()
		{
			Quadrieren Q;
			cout << "Die Zahl: ";
			cin >> x;
			result = Q.Quad(x);
			r << x << " · " << x << " oder " << x << "² = " << result;
			cout << r.str().c_str() << endl;
			system("read a");
			r.str("");
			x = 0;
			result = 0;
		}
		void WTen()
		{
			Zehnerpotenz Z;
			cout << "Die Zahl: ";
			cin >> w;
			int h = Z.Hoch(w);
			result = Z.WZehner(w);
			cout << defaultfloat;
			cout << result << "x10^" << h << " = " << w << endl;
			system("read a");
			x = 0;
			result = 0;
		}
		void QWurzel()
		{
			Wurzel QW;
			cout << "Die Zahl: ";
			cin >> x;
			result = QW.QuadratWurzel(x);
			cout << "Die Wurzel aus " << x << " = " << result << endl;
			system("read a");
			x = 0;
			result = 0;
		}
		void KWurzel()
		{
			Wurzel W;
			cout << "Die Zahl: ";
			cin >> x;
			result = W.Kubikwurzel(x);
			cout << "Die Kubikwurzel aus " << x << " = " << result << endl;
			system("read a");
			x = 0;
			result = 0;
		}
		void NWurzel()
		{
			Wurzel W;
			cout << "N: ";
			cin >> w;
			cout << "Die Zahl: ";
			cin >> x;
			result = W.N_TeWurzel(w, x);
			cout << "Die N-Tewurzel aus " << x << " = " << result << endl;
			system("read a");
			x = 0;
			w = 0;
			result = 0;
		}
	private:
		Bann_Pot B;
		stringstream r;
		float x;
		int w;
		float y;
		float result;
		int option;
};
