#include <iostream>
#include <cmath>

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
            cout << "Kreisumfang" << endl;
            cout << "-------------" << endl;
            cout << "1. Umfang mit Radius" << endl;
            cout << "2. Umfang mit Durchmesser" << endl;
            cout << "3. Radius" << endl;
            cout << "4. Durchmesser" << endl;
            cout << "5. Back" << endl;
        }
        void KreisF()
        {
            cout << "Kreisfl" << Umlaut::ae << "che" << endl;
            cout << "-----------------" << endl;
            cout << "1. Fl" << Umlaut::ae << "che mit Radius" << endl;
            cout << "2. Fl" << Umlaut::ae << "che mit Durchmesser" << endl;
            cout << "3. Radius" << endl;
            cout << "4. Durchmesser" << endl;
            cout << "5. Back" << endl;
        }
        void KreisA()
        {
            cout << "Kreisausschnitt" << endl;
            cout << "-----------------" << endl;
            cout << "1. Kreisbogen mit Umfang" << endl;
            cout << "2. Kreisbogen mit Radius" << endl;
            cout << "3. Kreisbogen mit Durchmesser" << endl;
            cout << "4. Radius durch Kreisbogen" << endl;
            cout << "5. Durchmesser durch Kreisbogen" << endl;
            cout << "6. Winkel durch Umfang (Kreisbogen)" << endl;
            cout << "7. Winkel durch Radius (Kreisbogen)" << endl;
            cout << "8. Winkel durch Durchmesser (Kreisbogen)" << endl;
            cout << "9. Fl" << Umlaut::ae << "che durch Umfang" << endl;
            cout << "10. Fl" << Umlaut::ae << "che durch Radius" << endl;
            cout << "11. Fl" << Umlaut::ae << "che durch Durchmesser" << endl;
            cout << "12. Fl" << Umlaut::ae << "che durch Radius und Kreisbogen" << endl;
            cout << "13. Fl" << Umlaut::ae << "che durch Durchmesser und Kreisbogen" << endl;
            cout << "14. Radius durch Fl" << Umlaut::ae << "che" << endl;
            cout << "15. Durchmesser durch Fl" << Umlaut::ae << "che" << endl;
            cout << "16. Radius durch Kreisbogen (Fl" << Umlaut::ae << "che)" << endl;
            cout << "17. Durchmesser durch Kreisbogen (Fl" << Umlaut::ae << "che)" << endl;
            cout << "18. Winkel durch Radius (Fl" << Umlaut::ae << "che)" << endl;
            cout << "19. Winkel durch Durchmesser (Fl" << Umlaut::ae << "che)" << endl;
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
                cout << "Der Radius: ";
                cin >> x;
                result = K.UmfangR(x);
                cout << "Der Umfang betr" << Umlaut::ae << "gt: " << result << "cm" << endl;
                system("pause");
                x = 0;
                result = 0;
                break;
                case 2:
                cout << "Der Durchmesser: ";
                cin >> x;
                result = K.UmfangD(x);
                cout << "Der Umfang betr" << Umlaut::ae << "gt: " << result << "cm" << endl;
                system("pause");
                x = 0;
                result = 0;
                break;
                case 3:
                cout << "Der Umfang: ";
                cin >> x;
                result = K.Radius(x);
                cout << "Der Radius betr" << Umlaut::ae << "gt: " << result << "cm" << endl;
                system("pause");
                x = 0;
                result = 0;
                break;
                case 4:
                cout << "Der Umfang: ";
                cin >> x;
                result = K.Durchmesser(x);
                cout << "Der Durchmesser betr" << Umlaut::ae << "gt: " << result << "cm" << endl;
                system("pause");
                x = 0;
                result = 0;
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
                cout << "Der Radius: ";
                cin >> x;
                result = K.FlaecheR(x);
                cout << "Der Fl" << Umlaut::ae << "cheninhalt betr" << Umlaut::ae << "gt: " << result << "cm" << hoch << endl;
                system("pause");
                x = 0;
                result = 0;
                break;
                case 2:
                cout << "Der Durchmesser: ";
                cin >> x;
                result = K.FlaecheD(x);
                cout << "Der Fl" << Umlaut::ae << "cheninhalt betr" << Umlaut::ae << "gt: " << result << "cm" << hoch << endl;
                system("pause");
                x = 0;
                result = 0;
                break;
                case 3:
                cout << "Der Fl" << Umlaut::ae << "cheninhalt: ";
                cin >> x;
                result = K.RFlaeche(x);
                cout << "Der Radius betr" << Umlaut::ae << "gt: " << result << endl;
                system("pause");
                x = 0;
                result = 0;
                break;
                case 4:
                cout << "Der Fl" << Umlaut::ae << "cheninhalt: ";
                cin >> x;
                result = K.DFlaeche(x);
                cout << "Der Durchmesser betr" << Umlaut::ae << "gt: " << result << endl;
                system("pause");
                x = 0;
                result = 0;
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
                cout << "Der Umfang: ";
                cin >> x;
                cout << "Der Winkel: ";
                cin >> y;
                result = K.BogenUA(x, y);
                cout << "Der Kreisbogen betr" << Umlaut::ae << "gt: " << result << endl;
                system("pause");
                x = 0;
                y = 0;
                result = 0;
                break;
                case 2:
                cout << "Der Radius: ";
                cin >> x;
                cout << "Der Winkel: ";
                cin >> y;
                result = K.BogenRA(x, y);
                cout << "Der Kreisbogen betr" << Umlaut::ae << "gt: " << result << endl;
                system("pause");
                x = 0;
                y = 0;
                result = 0;
                break;
                case 3:
                cout << "Der Durchmesser: ";
                cin >> x;
                cout << "Der Winkel: ";
                cin >> y;
                result = K.BogenDA(x, y);
                cout << "Der Kreisbogen betr" << Umlaut::ae << "gt: " << result << endl;
                system("pause");
                x = 0;
                y = 0;
                result = 0;
                break;
                case 4:
                cout << "Der Kreisbogen: ";
                cin >> x;
                cout << "Der Winkel: ";
                cin >> y;
                result = K.BogenR(x, y);
                cout << "Der Radius betr" << Umlaut::ae << "gt: " << result << endl;
                system("pause");
                x = 0;
                y = 0;
                result = 0;
                break;
                case 5:
                cout << "Der Kreisbogen: ";
                cin >> x;
                cout << "Der Winkel: ";
                cin >> y;
                result = K.BogenD(x, y);
                cout << "Der Durchmesser betr" << Umlaut::ae << "gt: " << result << endl;
                system("pause");
                x = 0;
                y = 0;
                result = 0;
                break;
                case 6:
                cout << "Der Kreisbogen: ";
                cin >> x;
                cout << "Der Umfang: ";
                cin >> y;
                result = K.WinkelBU(x, y);
                cout << "Der Winkel betr" << Umlaut::ae << "gt: " << result << grad << endl;
                system("pause");
                x = 0;
                y = 0;
                result = 0;
                break;
                case 7:
                cout << "Der Kreisbogen: ";
                cin >> x;
                cout << "Der Radius: ";
                cin >> y;
                result = K.WinkelBR(x, y);
                cout << "Der Winkel betr" << Umlaut::ae << "gt: " << result << grad << endl;
                system("pause");
                x = 0;
                y = 0;
                result = 0;
                break;
                case 8:
                cout << "Der Kreisbogen: ";
                cin >> x;
                cout << "Der Durchmesser: ";
                cin >> y;
                result = K.WinkelBD(x, y);
                cout << "Der Winkel betr" << Umlaut::ae << "gt: " << result << grad << endl;
                system("pause");
                x = 0;
                y = 0;
                result = 0;
                break;
                case 9:
                cout << "Der Umfang: ";
                cin >> x;
                cout << "Der Winkel: ";
                cin >> y;
                result = K.FlaecheUA(x, y);
                cout << "Die Fl" << Umlaut::ae << "che betr" << Umlaut::ae << "gt: " << result << endl;
                system("pause");
                x = 0;
                y = 0;
                result = 0;
                break;
                case 10:
                cout << "Der Radius: ";
                cin >> x;
                cout << "Der Winkel: ";
                cin >> y;
                result = K.FlaecheRA(x, y);
                cout << "Die Fl" << Umlaut::ae << "che betr" << Umlaut::ae << "gt: " << result << endl;
                system("pause");
                x = 0;
                y = 0;
                result = 0;
                break;
                case 11:
                cout << "Der Durchmesser: ";
                cin >> x;
                cout << "Der Winkel: ";
                cin >> y;
                result = K.FlaecheDA(x, y);
                cout << "Die Fl" << Umlaut::ae << "che betr" << Umlaut::ae << "gt: " << result << endl;
                system("pause");
                x = 0;
                y = 0;
                result = 0;
                break;
                case 12:
                cout << "Der Radius: ";
                cin >> x;
                cout << "Der Kreisbogen: ";
                cin >> y;
                result = K.FlaecheBR(x, y);
                cout << "Die Fl" << Umlaut::ae << "che betr" << Umlaut::ae << "gt: " << result << endl;
                system("pause");
                x = 0;
                y = 0;
                result = 0;
                break;
                case 13:
                cout << "Der Durchmesser: ";
                cin >> x;
                cout << "Der Kreisbogen: ";
                cin >> y;
                result = K.FlaecheRD(x, y);
                cout << "Die Fl" << Umlaut::ae << "che betr" << Umlaut::ae << "gt: " << result << endl;
                system("pause");
                x = 0;
                y = 0;
                result = 0;
                break;
                case 14:
                cout << "Die Fl" << Umlaut::ae << "che: ";
                cin >> x;
                cout << "Der Winkel: ";
                cin >> y;
                result = K.FlaecheR(x, y);
                cout << "Der Radius betr" << Umlaut::ae << "gt: " << result << endl;
                system("pause");
                x = 0;
                y = 0;
                result = 0;
                break;
                case 15:
                cout << "Die Fl" << Umlaut::ae << "che: ";
                cin >> x;
                cout << "Der Winkel: ";
                cin >> y;
                result = K.FlaecheD(x, y);
                cout << "Der Durchmesser betr" << Umlaut::ae << "gt: " << result << endl;
                system("pause");
                x = 0;
                y = 0;
                result = 0;
                break;
                case 16:
                cout << "Die Fl" << Umlaut::ae << "che: ";
                cin >> x;
                cout << "Der Kreisbogen: ";
                cin >> y;
                result = K.FlaecheBR(x, y);
                cout << "Der Radius betr" << Umlaut::ae << "gt: " << result << endl;
                system("pause");
                x = 0;
                y = 0;
                result = 0;
                break;
                case 17:
                cout << "Die Fl" << Umlaut::ae << "che: ";
                cin >> x;
                cout << "Der Kreisbogen: ";
                cin >> y;
                result = K.FlaecheBD(x, y);
                cout << "Der Durchmesser betr" << Umlaut::ae << "gt: " << result << endl;
                system("pause");
                x = 0;
                y = 0;
                result = 0;
                break;
                case 18:
                cout << "Die Fl" << Umlaut::ae << "che: ";
                cin >> x;
                cout << "Der Radius: ";
                cin >> y;
                result = K.WinkelAR(x, y);
                cout << "Der Winkel betr" << Umlaut::ae << "gt: " << result << grad << endl;
                system("pause");
                x = 0;
                y = 0;
                result = 0;
                break;
                case 19:
                cout << "Die Fl" << Umlaut::ae << "che: ";
                cin >> x;
                cout << "Der Durchmesser: ";
                cin >> y;
                result = K.WinkelAD(x, y);
                cout << "Der Winkel betr" << Umlaut::ae << "gt: " << result << grad << endl;
                system("pause");
                x = 0;
                y = 0;
                result = 0;
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
        char hoch = 0xFD;
        char grad = 0xF8;
        Banner_Kreis B;
};