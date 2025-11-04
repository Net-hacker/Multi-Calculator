#include <iostream>
#include <cmath>
using namespace std;

class Loesungsformel
{
    public:
        float p_qFormel(float p, float q)
        {
            float D = (pow((p / 2), 2) - q);
            if (D < 0) {
                cout << "x1: " << -(p / 2) << " + " << sqrt(fabs(D)) << "i" << endl;
                cout << "x2: " << -(p / 2) << " - " << sqrt(fabs(D)) << "i" << endl;
            } else if (D == 0) {
                cout << "x: " << -(p / 2) << endl;
            } else if (D > 0) {
                cout << "x1: " << -(p / 2) + sqrt(D) << endl;
                cout << "x2: " << -(p / 2) - sqrt(D) << endl;
            }
            return 0;
        }
        float abcFormel(float a, float b, float c)
        {
            float D = pow(b, 2) - 4 * a * c;
            if (D < 0) {
                if ((2 * a) == 1) {
                    cout << "x1: " << -(b) << " + " << sqrt(fabs(D)) << "i" << endl;
                    cout << "x2: " << -(b) << " - " << sqrt(fabs(D)) << "i" << endl;
                } else {
                    cout << "x1: " << "(" << -(b) << " + " << sqrt(fabs(D)) << "i) / " << (2 * a) << endl;
                    cout << "x2: " << "(" << -(b) << " - " << sqrt(fabs(D)) << "i) / " << (2 * a) << endl;
                }
            } else if (D == 0) {
                cout << "x: " << -(b) / (2 * a) << endl;
            } else if (D > 0) {
                cout << "x1: " << (-(b) + sqrt(D)) / (2 * a) << endl;
                cout << "x2: " << (-(b) - sqrt(D)) / (2 * a) << endl;
            }
            return 0;
        }
};

class Chooser_Loesungsformel
{
    public:
        void P_QFormel()
        {
            cout << "0 = x" << square << val1 << "px" << val2 << "q" << endl;
            cout << "Der Wert f" << Umlaut::ue << "r p: ";
            cin >> a;
            if (a > 0 || a == 0)
                val1 = '+';
            else
                val1 = '\0';
            cout << "0 = x" << square << val1 << a << "x" << val2 << "q" << endl;
            cout << "Der Wert f" << Umlaut::ue << "r q: ";
            cin >> b;
            if (b > 0 || b == 0)
                val2 = '+';
            else
                val2 = '\0';
            cout << "0 = x" << square << val1 << a << "x" << val2 << b << endl;
            L.p_qFormel(a, b);
            system("pause");
            a = 0;
            b = 0;
            val1 = 0xF1;
            val2 = 0xF1;
        }
        void A_B_CFormel()
        {
            cout << "0 = " << val1 << "ax" << square << val1 << "bx" << val2 << "c" << endl;
            cout << "Der Wert f" << Umlaut::ue << "r a: ";
            cin >> a;
            cout << "0 = "<< a << "x" << square << val1 << "bx" << val2 << "c" << endl;
            cout << "Der Wert f" << Umlaut::ue << "r b: ";
            cin >> b;
            if (b > 0 || b == 0)
                val1 = '+';
            else
                val1 = '\0';
            cout << "0 = " << a << "x" << square << val1 << b << "x" << val2 << "c" << endl;
            cout << "Der Wert f" << Umlaut::ue << "r c: ";
            cin >> c;
            if (c > 0 || c == 0)
                val2 = '+';
            else
                val2 = '\0';
            cout << "0 = " << val1 << a << "x" << square << val1 << b << "x" << val2 << c << endl;
            L.abcFormel(a, b, c);
            system("pause");
            a = 0;
            b = 0;
            c = 0;
            val1 = 0xF1;
            val2 = 0xF1;
        }

    private:
        Loesungsformel L;
        char square = 0xFD;
        char val1 = 0xF1;
        char val2 = 0xF1;
        float a;
        float b;
        float c;
};