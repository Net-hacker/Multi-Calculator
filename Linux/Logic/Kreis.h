#include <iostream>
#include <sstream>
#include <cmath>
using namespace std;

class KUmfang
{
    public:
        float UmfangR(float a)
        {
            return 2 * M_PI * a;
        }
        float UmfangD(float a)
        {
            return M_PI * a;
        }
        float Radius(float a)
        {
            return a / (2 * M_PI); 
        }
        float Durchmesser(float a)
        {
            return a / M_PI;
        }
};

class KFlaeche
{
    public:
        float FlaecheR(float a)
        {
            return M_PI * pow(a, 2);
        }
        float FlaecheD(float a)
        {
            return (M_PI * pow(a, 2)) / 4;
        }
        float RFlaeche(float a)
        {
            return sqrt((a / M_PI));
        }
        float DFlaeche(float a)
        {
            return sqrt((a * 4) / M_PI);
        }
};

class KAusschnitt
{
    public:
        float BogenUA(float a, float b)
        {
            return a * (b / 360);
        }
        float BogenRA(float a, float b)
        {
            return 2 * M_PI * a * (b / 360);
        }
        float BogenDA(float a, float b)
        {
            return M_PI * a * (b / 360);
        }
        float BogenR(float a, float b)
        {
            return (a * 360) / (2 * M_PI * b);
        }
        float BogenD(float a, float b)
        {
            return (a * 360) / (M_PI * b);
        }
        float WinkelBU(float a, float b)
        {
            return ((b * 360) / a);
        }
        float WinkelBR(float a, float b)
        {
            return ((b * 360) / (2 * M_PI * a));
        }
        float WinkelBD(float a, float b)
        {
            return ((b * 360) / (M_PI * a));
        }
        float FlaecheUA(float a, float b)
        {
            return a * (b / 360);
        }
        float FlaecheRA(float a, float b)
        {
            return M_PI * pow(a, 2) * (b / 360);
        }
        float FlaecheDA(float a, float b)
        {
            return ((M_PI * pow(a, 2)) / 4) * (b / 360);
        }
        float FlaecheRB(float a, float b)
        {
            return (a * b) / 2;
        }
        float FlaecheRD(float a, float b)
        {
            return (a * b) / 4;
        }
        float FlaecheR(float a, float b)
        {
            return sqrt((a * 360) / (M_PI * b));
        }
        float FlaecheD(float a, float b)
        {
            return sqrt((a * 1440) / (M_PI * b));
        }
        float FlaecheBR(float a, float b)
        {
            return (a * 2) / b;
        }
        float FlaecheBD(float a, float b)
        {
            return (a * 4) / b;
        }
        float WinkelAR(float a, float b)
        {
            return ((a * 360) / (M_PI * pow(b, 2)));
        }
        float WinkelAD(float a, float b)
        {
            return ((a * 1440) / (M_PI * pow(b, 2)));
        }
};

class Banner_Kreis
{
    public:
        void KreisU()
        {
            puts("Kreisumfang");
            cout << "-------------" << endl;
            cout << "1. Umfang mit Radius" << endl;
            cout << "2. Umfang mit Durchmesser" << endl;
            cout << "3. Radius" << endl;
            cout << "4. Durchmesser" << endl;
            cout << "5. Back" << endl;
        }
        void KreisF()
        {
            puts("Kreisfläche");
            cout << "-----------------" << endl;
            puts("1. Fläche mit Radius");
            puts("2. Fläche mit Durchmesser");
            cout << "3. Radius" << endl;
            cout << "4. Durchmesser" << endl;
            cout << "5. Back" << endl;
        }
        void KreisA()
        {
            puts("Kreisausschnitt");
            cout << "-----------------" << endl;
            cout << "1. Kreisbogen mit Umfang" << endl;
            cout << "2. Kreisbogen mit Radius" << endl;
            cout << "3. Kreisbogen mit Durchmesser" << endl;
            cout << "4. Radius durch Kreisbogen" << endl;
            cout << "5. Durchmesser durch Kreisbogen" << endl;
            cout << "6. Winkel durch Umfang (Kreisbogen)" << endl;
            cout << "7. Winkel durch Radius (Kreisbogen)" << endl;
            cout << "8. Winkel durch Durchmesser (Kreisbogen)" << endl;
            puts("9. Fläche durch Umfang");
            puts("10. Fläche durch Radius");
            puts("11. Fläche durch Durchmesser");
            puts("12. Fläche durch Radius und Kreisbogen");
            puts("13. Fläche durch Durchmesser und Kreisbogen");
            puts("14. Radius durch Fläche");
            puts("15. Durchmesser durch Fläche");
            puts("16. Radius durch Kreisbogen (Fläche)");
            puts("17. Durchmesser durch Kreisbogen (Fläche)");
            puts("18. Winkel durch Radius (Fläche)");
            puts("19. Winkel durch Durchmesser (Fläche)");
            cout << "20. Back" << endl;
        }
};

class Chooser_Kreis
{
    public:
        void KreisUmfang()
        {
            KUmfang K;
            B.KreisU();
            cout << "Option: ";
            cin >> opt;

            switch (opt) {
                case 1:
                fputs("Der Radius: ", stdout);
                cin >> x;
                result = K.UmfangR(x);
                r << "Der Umfang beträgt: " << result << "cm";
                cout << r.str().c_str() << endl;
                system("read a");
                x = 0;
                result = 0;
                r.str("");
                break;
                case 2:
                fputs("Der Durchmesser: ", stdout);
                cin >> x;
                result = K.UmfangD(x);
                r << "Der Umfang beträgt: " << result << "cm";
                cout << r.str().c_str() << endl;
                system("read a");
                x = 0;
                result = 0;
                r.str("");
                break;
                case 3:
                fputs("Der Umfang: ", stdout);
                cin >> x;
                result = K.Radius(x);
                r << "Der Radius beträgt: " << result << "cm";
                cout << r.str().c_str() << endl;
                system("read a");
                x = 0;
                result = 0;
                r.str("");
                break;
                case 4:
                fputs("Der Umfang: ", stdout);
                cin >> x;
                result = K.Durchmesser(x);
                r << "Der Durchmesser beträgt: " << result << "cm";
                cout << r.str().c_str() << endl;
                system("read a");
                x = 0;
                result = 0;
                r.str("");
                break;
                default:
                break;
            }
        }
        void KreisFlaeche()
        {
            KFlaeche K;
            B.KreisF();
            cout << "Option: ";
            cin >> opt;

            switch (opt) {
                case 1:
                fputs("Der Radius: ", stdout);
                cin >> x;
                result = K.FlaecheR(x);
                r << "Der Flächeninhalt beträgt: " << result << "cm²";
                cout << r.str().c_str() << endl;
                system("read a");
                x = 0;
                result = 0;
                r.str("");
                break;
                case 2:
                fputs("Der Durchmesser: ", stdout);
                cin >> x;
                result = K.FlaecheD(x);
                r << "Der Flächeninhalt beträgt: " << result << "cm²";
                cout << r.str().c_str() << endl;
                system("read a");
                x = 0;
                result = 0;
                r.str("");
                break;
                case 3:
                fputs("Der Flächeninhalt: ", stdout);
                cin >> x;
                result = K.RFlaeche(x);
                r << "Der Radius beträgt: " << result << "cm";
                cout << r.str().c_str() << endl;
                system("read a");
                x = 0;
                result = 0;
                r.str("");
                break;
                case 4:
                fputs("Der Flächeninhalt: ", stdout);
                cin >> x;
                result = K.DFlaeche(x);
                r << "Der Durchmesser beträgt: " << result << "cm";
                cout << r.str().c_str() << endl;
                system("read a");
                x = 0;
                result = 0;
                r.str("");
                break;
                default:
                break;
            }
        }
        void KreisAusschnitt()
        {
            KAusschnitt K;
            B.KreisA();
            cout << "Option: ";
            cin >> opt;
            switch (opt) {
                case 1:
                fputs("Der Umfang: ", stdout);
                cin >> x;
                fputs("Der Winkel: ", stdout);
                cin >> y;
                result = K.BogenUA(x, y);
                r << "Der Kreisbogen beträgt: " << result << "cm";
                cout << r.str().c_str() << endl;
                system("read a");
                x = 0;
                y = 0;
                result = 0;
                r.str("");
                break;
                case 2:
                fputs("Der Radius: ", stdout);
                cin >> x;
                fputs("Der Winkel: ", stdout);
                cin >> y;
                result = K.BogenRA(x, y);
                r << "Der Kreisbogen beträgt: " << result << "cm";
                cout << r.str().c_str() << endl;
                system("read a");
                x = 0;
                y = 0;
                result = 0;
                r.str("");
                break;
                case 3:
                fputs("Der Durchmesser: ", stdout);
                cin >> x;
                fputs("Der Winkel: ", stdout);
                cin >> y;
                result = K.BogenDA(x, y);
                r << "Der Kreisbogen beträgt: " << result << "cm";
                cout << r.str().c_str() << endl;
                system("read a");
                x = 0;
                y = 0;
                result = 0;
                r.str("");
                break;
                case 4:
                fputs("Der Kreisbogen: ", stdout);
                cin >> x;
                fputs("Der Winkel: ", stdout);
                cin >> y;
                result = K.BogenR(x, y);
                r << "Der Radius beträgt: " << result << "cm";
                cout << r.str().c_str() << endl;
                system("read a");
                x = 0;
                y = 0;
                result = 0;
                r.str("");
                break;
                case 5:
                fputs("Der Kreisbogen: ", stdout);
                cin >> x;
                fputs("Der Winkel: ", stdout);
                cin >> y;
                result = K.BogenD(x, y);
                r << "Der Durchmesser beträgt: " << result << "cm";
                cout << r.str().c_str() << endl;
                system("read a");
                x = 0;
                y = 0;
                result = 0;
                r.str("");
                break;
                case 6:
                fputs("Der Kreisbogen: ", stdout);
                cin >> x;
                fputs("Der Umfang: ", stdout);
                cin >> y;
                result = K.WinkelBU(x, y);
                r << "Der Winkel beträgt: " << result << "°";
                cout << r.str().c_str() << endl;
                system("read a");
                x = 0;
                y = 0;
                result = 0;
                r.str("");
                break;
                case 7:
                fputs("Der Kreisbogen: ", stdout);
                cin >> x;
                fputs("Der Radius: ", stdout);
                cin >> y;
                result = K.WinkelBR(x, y);
                r << "Der Winkel beträgt: " << result << "°";
                cout << r.str().c_str() << endl;
                system("read a");
                x = 0;
                y = 0;
                result = 0;
                r.str("");
                break;
                case 8:
                fputs("Der Kreisbogen: ", stdout);
                cin >> x;
                fputs("Der Durchmesser: ", stdout);
                cin >> y;
                result = K.WinkelBD(x, y);
                r << "Der Winkel beträgt: " << result << "°";
                cout << r.str().c_str() << endl;
                system("read a");
                x = 0;
                y = 0;
                result = 0;
                r.str("");
                break;
                case 9:
                fputs("Der Umfang: ", stdout);
                cin >> x;
                fputs("Der Winkel: ", stdout);
                cin >> y;
                result = K.FlaecheUA(x, y);
                r << "Die Fläche beträgt: " << result << "cm²";
                cout << r.str().c_str() << endl;
                system("read a");
                x = 0;
                y = 0;
                result = 0;
                r.str("");
                break;
                case 10:
                fputs("Der Radius: ", stdout);
                cin >> x;
                fputs("Der Winkel: ", stdout);
                cin >> y;
                result = K.FlaecheRA(x, y);
                r << "Die Fläche beträgt: " << result << "cm²";
                cout << r.str().c_str() << endl;
                system("read a");
                x = 0;
                y = 0;
                result = 0;
                r.str("");
                break;
                case 11:
                fputs("Der Durchmesser: ", stdout);
                cin >> x;
                fputs("Der Winkel: ", stdout);
                cin >> y;
                result = K.FlaecheDA(x, y);
                r << "Die Fläche beträgt: " << result << "cm²";
                cout << r.str().c_str() << endl;
                system("read a");
                x = 0;
                y = 0;
                result = 0;
                r.str("");
                break;
                case 12:
                fputs("Der Radius: ", stdout);
                cin >> x;
                fputs("Der Kreisbogen: ", stdout);
                cin >> y;
                result = K.FlaecheBR(x, y);
                r << "Die Fläche beträgt: " << result << "cm²";
                cout << r.str().c_str() << endl;
                system("read a");
                x = 0;
                y = 0;
                result = 0;
                r.str("");
                break;
                case 13:
                fputs("Der Durchmesser: ", stdout);
                cin >> x;
                fputs("Der Kreisbogen: ", stdout);
                cin >> y;
                result = K.FlaecheRD(x, y);
                r << "Die Fläche beträgt: " << result << "cm²";
                system("read a");
                x = 0;
                y = 0;
                result = 0;
                r.str("");
                break;
                case 14:
                fputs("Die Flche: ", stdout);
                cin >> x;
                fputs("Der Winkel: ", stdout);
                cin >> y;
                result = K.FlaecheR(x, y);
                r << "Der Radius beträgt: " << result << "cm";
                system("read a");
                x = 0;
                y = 0;
                result = 0;
                r.str("");
                break;
                case 15:
                fputs("Die Fläche: ", stdout);
                cin >> x;
                fputs("Der Winkel: ", stdout);
                cin >> y;
                result = K.FlaecheD(x, y);
                r << "Der Durchmesser beträgt: " << result << "cm";
                cout << r.str().c_str() << endl;
                system("read a");
                x = 0;
                y = 0;
                result = 0;
                r.str("");
                break;
                case 16:
                fputs("Die Fläche: ", stdout);
                cin >> x;
                fputs("Der Kreisbogen: ", stdout);
                cin >> y;
                result = K.FlaecheBR(x, y);
                r << "Der Radius beträgt: " << result << "cm";
                cout << r.str().c_str() << endl;
                system("read a");
                x = 0;
                y = 0;
                result = 0;
                r.str("");
                break;
                case 17:
                fputs("Die Fläche: ", stdout);
                cin >> x;
                fputs("Der Kreisbogen: ", stdout);
                cin >> y;
                result = K.FlaecheBD(x, y);
                r << "Der Durchmesser beträgt: " << result << "cm";
                cout << r.str().c_str() << endl;
                system("read a");
                x = 0;
                y = 0;
                result = 0;
                r.str("");
                break;
                case 18:
                fputs("Die Fläche: ", stdout);
                cin >> x;
                fputs("Der Radius: ", stdout);
                cin >> y;
                result = K.WinkelAR(x, y);
                r << "Der Winkel beträgt: " << result << "°";
                cout << r.str().c_str() << endl;
                system("read a");
                x = 0;
                y = 0;
                result = 0;
                r.str("");
                break;
                case 19:
                fputs("Die Fläche: ", stdout);
                cin >> x;
                fputs("Der Durchmesser: ", stdout);
                cin >> y;
                result = K.WinkelAD(x, y);
                r << "Der Winkel beträgt: " << result << "°";
                cout << r.str().c_str() << endl;
                system("read a");
                x = 0;
                y = 0;
                result = 0;
                r.str("");
                break;
                default:
                break;
            }
        }
    private:
        float x;
        float y;
        float result;
        int opt;
        stringstream r;
        Banner_Kreis B;
};