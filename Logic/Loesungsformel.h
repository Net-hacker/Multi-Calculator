#include <iostream>
#include <sstream>
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
            r << "0 = x²±px±q";
            cout << r.str().c_str() << endl;
            r.str("");
            fputs("Der Wert für p: ", stdout);
            cin >> a;
            if (a > 0 || a == 0)
                val1 = '+';
            r << "0 = x²"<< val1 << a << "x±q";
            cout << r.str().c_str() << endl;
            r.str("");
            fputs("Der Wert für q: ", stdout);
            cin >> b;
            if (b > 0 || b == 0)
                val2 = '+';
            r << "0 = x²" << val1 << a << "x" << val2 << b;
            cout << r.str().c_str() << endl;
            L.p_qFormel(a, b);
            system("read a");
            a = 0;
            b = 0;
            r.str("");
        }
        void A_B_CFormel()
        {
            r << "0 = ±ax²±bx±c";
            cout << r.str().c_str() << endl;
            r.str("");
            fputs("Der Wert für a: ", stdout);
            cin >> a;
            r << "0 = "<< a << "x²±bx±c";
            cout << r.str().c_str() << endl;
            r.str("");
            fputs("Der Wert für b: ", stdout);
            cin >> b;
            if (b > 0 || b == 0)
                val1 = '+';
            r << "0 = " << a << "x²" << val1 << b << "x±c";
            cout << r.str().c_str() << endl;
            r.str("");
            fputs("Der Wert für c: ", stdout);
            cin >> c;
            if (c > 0 || c == 0)
                val2 = '+';
            r << "0 = " << val1 << a << "x²" << val1 << b << "x" << val2 << c;
            cout << r.str().c_str() << endl;
            L.abcFormel(a, b, c);
            system("read a");
            a = 0;
            b = 0;
            c = 0;
            r.str("");
        }

    private:
        Loesungsformel L;
        stringstream r;
        char val1;
        char val2;
        float a;
        float b;
        float c;
};