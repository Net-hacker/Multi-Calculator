#include <iostream>
using namespace std;

class Prozente
{
	public:
		float PWert(float x, float y)
		{
			float d = y / 100; 
			return x * d;
		}
		float GWert(float x, float y)
		{
			float d = y / 100;
			return x / d;
		}
		float PProzent(float x, float y)
		{
			float r = x / y; 
			return r * 100;
		}
};

class Chooser_Prozente
{
	public:
		void ProW()
		{
			cout << "Der Grundwert: ";
			cin >> x;
			cout << "Die Prozentzahl: ";
			cin >> y;
			result = P.PWert(x, y);
			cout << "Der Prozentwert = " << result << endl;
			system("pause");
			x = 0;
			y = 0;
			result = 0;
		}
		void G()
		{
			cout << "Der Prozentwert: ";
			cin >> x;
			cout << "Die Prozentzahl: ";
			cin >> y;
			result = P.GWert(x, y);
			cout << "Der Grundwert = " << result << endl;
			system("pause");
			x = 0;
			y = 0;
			result = 0;
		}
		void PP()
		{
			cout << "Die Prozentwert: ";
			cin >> x;
			cout << "Der Grundwert: ";
			cin >> y;
			result = P.PProzent(x, y);
			cout << "Prozent = " << result << pro << " und in Prozentzahl " << result / 100 << endl;
			system("pause");
			x = 0;
			y = 0;
			result = 0;
		}
	private:
		Prozente P;
		float x;
		char pro = 0x25;
		float y;
		float result;
};
