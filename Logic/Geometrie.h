#include <iostream>
using namespace std;

namespace Umlaut
{
    const unsigned char AE = static_cast<unsigned char>(142);
    const unsigned char ae = static_cast<unsigned char>(132);
    const unsigned char OE = static_cast<unsigned char>(153);
    const unsigned char oe = static_cast<unsigned char>(148);
    const unsigned char UE = static_cast<unsigned char>(154);
    const unsigned char ue = static_cast<unsigned char>(129);
    const unsigned char ss = static_cast<unsigned char>(225);
}

class Flach
{
	public:
		float QFlaecheninhalt(float a)
		{
			return a * a;
		}
		float DFlaecheninhalt(float a, float ha)
		{
			return 0.5 * a * ha;
		}
		float RFlaecheninhalt(float a, float b)
		{
			return a * b;
		}
		float PFlaecheninhalt(float a, float ha)
		{
			return a * ha;
		}
		float TFlaecheninhalt(float a, float b, float ha)
		{
			float S = a + b;
			return 0.5 * S * ha; 
		}
};

class Um
{
	public:
		float QUmfang(float a)
		{
			return 4 * a;
		}
		float DUmfang(float a, float b, float c)
		{
			return a + b + c;
		}
		float RUmfang(float a, float b)
		{
			return 2 * a + 2 * b;
		}
		float PUmfang(float a, float b)
		{
			return 2 * a + 2 * b;
		}
		float TUmfang(float a, float b, float c, float d)
		{
			return a + b + c + d;
		}
};

class Ober
{
	public:
		float WOberflach(float a, float h)
		{
			float A = a * a;
			float U = 4 * a;
			float M = U * h;
			return 2 * A + M;
		}
		float DOberflach(float a, float b, float c, float ha, float h)
		{
			float A = 0.5 * a * ha;
			float U = a + b + c;
			float M = U * h;
			return 2 * A + M;
		}
		float ROberflach(float a, float b, float h)
		{
			float A = a * b;
			float U = 2 * a + 2 * b;
			float M = U * h;
			return 2 * A + M;
		}
		float POberflach(float a, float b, float ha, float h)
		{
			float A = a * ha;
			float U = 2 * a + 2 * b;
			float M = U * h;
			return 2 * A + M;
		}
		float TOberflach(float a, float b, float c, float d, float ha, float h)
		{
			float S = a + c;
			float A = 0.5 * S * ha;
			float U = a + b + c + d;
			float M = U * h;
			return 2 * A + M;
		}
};

class Vol
{
	public:
		float WVolumen(float a, float h)
		{
			float A = a * a;
			return A * h;
		}
		float DVolumen(float a, float ha, float h)
		{
			float A = 0.5 * a * ha;
			return A * h;
		}
		float RVolumen(float a, float b, float h)
		{
			float A = a * b;
			return A * h;
		}
		float PVolumen(float a, float ha, float h)
		{
			float A = a * ha;
			return A * h;
		}
		float TVolumen(float a, float b, float ha, float h)
		{
			float S = a + b;
			float A = 0.5 * S * ha;
			return A * h;
		}
};

class Bann_Geo
{
	public:
		void Flach()
		{
			cout << "Was f" << Umlaut::ue << "r eine Form ist es?" << endl;
			cout << "-----------------------------" << endl;
			cout << "1. Quadrat" << endl;
			cout << "2. Dreieck" << endl;
			cout << "3. Rechteck" << endl;
			cout << "4. Parallelogramm" << endl;
			cout << "5. Trapez" << endl;
			cout << "6. Back" << endl;
		}
		void Umfa()
		{
			cout << "Was f" << Umlaut::ue << "r eine Form ist es?" << endl;
			cout << "-----------------------------" << endl;
			cout << "1. Quadrat" << endl;
			cout << "2. Dreieck" << endl;
			cout << "3. Rechteck" << endl;
			cout << "4. Parallelogramm" << endl;
			cout << "5. Trapez" << endl;
			cout << "6. Back" << endl;
		}
		void Obe()
		{
			cout << "Was f" << Umlaut::ue << "r eine Prisma ist es?" << endl;
			cout << "-----------------------------" << endl;
			cout << "1. W" << Umlaut::ue << "rfel" << endl;
			cout << "2. Dreieck" << endl;
			cout << "3. Rechteck" << endl;
			cout << "4. Parallelogramm" << endl;
			cout << "5. Trapez" << endl;
			cout << "6. Back" << endl;
		}
		void Vole()
		{
			cout << "Was f" << Umlaut::ue << "r eine Prisma ist es?" << endl;
			cout << "-----------------------------" << endl;
			cout << "1. W" << Umlaut::ue << "rfel" << endl;
			cout << "2. Dreieck" << endl;
			cout << "3. Rechteck" << endl;
			cout << "4. Parallelogramm" << endl;
			cout << "5. Trapez" << endl;
			cout << "6. Back" << endl;
		}
};

class Chooser_Geo
{
	public:
		void Fleache()
		{
			option = 0;
			B.Flach();
			Flach F;
			cout << "Option: ";
			cin >> option;

			switch (option) {
				case 1:
				cout << "Die Seitenl" << Umlaut::ae << "nge: ";
				cin >> x;
				result = F.QFlaecheninhalt(x);
				cout << "Der Fl" << Umlaut::ae << "cheninhalt betr" << Umlaut::ae << "gt: " << result << "cm" << hoch << endl;
				system("pause");
				x = 0;
				result = 0;
				break;
				case 2:
				cout << "Die Seitenl" << Umlaut::ae << "nge: ";
				cin >> x;
				cout << "Die H" << Umlaut::oe << "he des Dreiecks: ";
				cin >> ha;
				result = F.DFlaecheninhalt(x, ha);
				cout << "Der Fl" << Umlaut::ae << "cheninhalt betr" << Umlaut::ae << "gt: " << result << "cm" << hoch << endl;
				system("pause");
				x = 0;
				ha = 0;
				result = 0;
				break;
				case 3:
				cout << "Die Seitenl" << Umlaut::ae << "nge: ";
				cin >> x;
				cout << "Die Seitenbreite: ";
				cin >> y;
				result = F.RFlaecheninhalt(x, y);
				cout << "Der Fl" << Umlaut::ae << "cheninhalt betr" << Umlaut::ae << "gt: " << result << "cm" << hoch << endl;
				system("pause");
				x = 0;
				y = 0;
				result = 0;
				break;
				case 4:
				cout << "Die Seitenl" << Umlaut::ae << "nge: ";
				cin >> x;
				cout << "Die H" << Umlaut::oe << "he des Dreiecks: ";
				cin >> ha;
				result = F.PFlaecheninhalt(x, ha);
				cout << "Der Fl" << Umlaut::ae << "cheninhalt betr" << Umlaut::ae << "gt: " << result << "cm" << hoch << endl;
				system("pause");
				x = 0;
				ha = 0;
				result = 0;
				break;
				case 5:
				cout << "Die Seitenl" << Umlaut::ae << "nge: ";
				cin >> x;
				cout << "Die obere Seitenl" << Umlaut::ae << "nge: ";
				cin >> y;
				cout << "Die H" << Umlaut::oe << "he des Trapez: ";
				cin >> ha;
				result = F.TFlaecheninhalt(x, y, ha);
				cout << "Der Fl" << Umlaut::ae << "cheninhalt betr" << Umlaut::ae << "gt: " << result << "cm" << hoch << endl;
				system("pause");
				x = 0;
				y = 0;
				ha = 0;
				result = 0;
				break;
				case 6:
				break;
				default:
				break;
			}
		}
		void Umfang()
		{
			option = 0;
			B.Umfa();
			Um U;
			cout << "Option: ";
			cin >> option;

			switch (option) {
				case 1:
				cout << "Die Seitenl" << Umlaut::ae << "nge: ";
				cin >> x;
				result = U.QUmfang(x);
				cout << "Der Umfang betr" << Umlaut::ae << "gt: " << result << "cm" << endl;
				system("pause");
				x = 0;
				result = 0;
				break;
				case 2:
				cout << "Die 1. Seitenl" << Umlaut::ae << "nge: ";
				cin >> x;
				cout << "Die 2. Seitenl" << Umlaut::ae << "nge: ";
				cin >> y;
				cout << "Die 3. Seitenl" << Umlaut::ae << "nge: ";
				cin >> z;
				result = U.DUmfang(x, y, z);
				cout << "Der Umfang betr" << Umlaut::ae << "gt: " << result << "cm" << endl;
				system("pause");
				x = 0;
				y = 0;
				z = 0;
				result = 0;
				break;
				case 3:
				cout << "Die Seitenl" << Umlaut::ae << "nge: ";
				cin >> x;
				cout << "Die Seitenbreite: ";
				cin >> y;
				result = U.RUmfang(x, y);
				cout << "Der Umfang betr" << Umlaut::ae << "gt: " << result << "cm" << endl;
				system("pause");
				x = 0;
				y = 0;
				result = 0;
				break;
				case 4:
				cout << "Die Seitenl" << Umlaut::ae << "nge: ";
				cin >> x;
				cout << "Die Seitenbreite: ";
				cin >> y;
				result = U.PUmfang(x, y);
				cout << "Der Umfang betr" << Umlaut::ae << "gt: " << result << "cm" << endl;
				system("pause");
				x = 0;
				y = 0;
				result = 0;
				break;
				case 5:
				cout << "Die untere Seitenl" << Umlaut::ae << "nge: ";
				cin >> x;
				cout << "Die 2. Seitenl" << Umlaut::ae << "nge: ";
				cin >> y;
				cout << "Die obere Seitenl" << Umlaut::ae << "nge: ";
				cin >> z;
				cout << "Die 4. Seitenl" << Umlaut::ae << "nge: ";
				cin >> a;
				result = U.TUmfang(x, y, z, a);
				cout << "Der Umfang betr" << Umlaut::ae << "gt: " << result << "cm" << endl;
				system("pause");
				x = 0;
				y = 0;
				z = 0;
				a = 0;
				result = 0;
				break;
				case 6:
				break;
				default:
				break;
			}
		}
		void Oberflaechen()
		{
			option = 0;
			B.Obe();
			Ober O;
			cout << "Option: ";
			cin >> option;

			switch (option) {
				case 1:
				cout << "Die Seitenl" << Umlaut::ae << "nge: ";
				cin >> x;
				cout << "Die H" << Umlaut::oe << "he des Prismas: ";
				cin >> h;
				result = O.WOberflach(x, h);
				cout << "Der Oberfl" << Umlaut::ae << "cheninhalt betr" << Umlaut::ae << "gt: " << result << "cm" << hoch << endl;
				system("pause");
				x = 0;
				h = 0;
				result = 0;
				break;
				case 2:
				cout << "Die 1. Seitenl" << Umlaut::ae << "nge: ";
				cin >> x;
				cout << "Die 2. Seitenl" << Umlaut::ae << "nge: ";
				cin >> y;
				cout << "Die 3. Seitenl" << Umlaut::ae << "nge: ";
				cin >> z;
				cout << "Die H" << Umlaut::oe << "he des Dreiecks: ";
				cin >> ha;
				cout << "Die H" << Umlaut::oe << "he des Prismas: ";
				cin >> h;
				result = O.DOberflach(x, y, z, ha, h);
				cout << "Der Oberfl" << Umlaut::ae << "cheninhalt betr" << Umlaut::ae << "gt: " << result << "cm" << hoch << endl;
				system("pause");
				x = 0;
				h = 0;
				result = 0;
				break;
				case 3:
				cout << "Die 1. Seitenl" << Umlaut::ae << "nge: ";
				cin >> x;
				cout << "Die 2. Seitenl" << Umlaut::ae << "nge: ";
				cin >> y;
				cout << "Die H" << Umlaut::oe << "he des Prismas: ";
				cin >> h;
				result = O.ROberflach(x, y, h);
				cout << "Der Oberfl" << Umlaut::ae << "cheninhalt betr" << Umlaut::ae << "gt: " << result << "cm" << hoch << endl;
				system("pause");
				x = 0;
				y = 0;
				h = 0;
				result = 0;
				break;
				case 4:
				cout << "Die 1. Seitenl" << Umlaut::ae << "nge: ";
				cin >> x;
				cout << "Die 2. Seitenl" << Umlaut::ae << "nge: ";
				cin >> y;
				cout << "Die H" << Umlaut::oe << "he des Parallelogramms: ";
				cin >> ha;
				cout << "Die H" << Umlaut::oe << "he des Prismas: ";
				cin >> h;
				result = O.POberflach(x, y, ha, h);
				cout << "Der Oberfl" << Umlaut::ae << "cheninhalt betr" << Umlaut::ae << "gt: " << result << "cm" << hoch << endl;
				system("pause");
				x = 0;
				y = 0;
				ha = 0;
				h = 0;
				result = 0;
				break;
				case 5:
				cout << "Die untere Seitenl" << Umlaut::ae << "nge: ";
				cin >> x;
				cout << "Die 2. Seitenl" << Umlaut::ae << "nge: ";
				cin >> y;
				cout << "Die obere Seitenl" << Umlaut::ae << "nge: ";
				cin >> z;
				cout << "Die 4. Seitenl" << Umlaut::ae << "nge: ";
				cin >> a;
				cout << "Die H" << Umlaut::oe << "he des Trapezs: ";
				cin >> ha;
				cout << "Die H" << Umlaut::oe << "he des Prismas: ";
				cin >> h;
				result = O.TOberflach(x, y, z, a, ha, h);
				cout << "Der Oberfl" << Umlaut::ae << "cheninhalt betr" << Umlaut::ae << "gt: " << result << "cm" << hoch << endl;
				system("pause");
				x = 0;
				y = 0;
				z = 0;
				a = 0;
				ha = 0;
				h = 0;
				result = 0;
				break;
				case 6:
				break;
				default:
				break;
			}
		}
		void Volumen()
		{
			option = 0;
			B.Obe();
			Vol V;
			cout << "Option: ";
			cin >> option;

			switch (option) {
				case 1:
				cout << "Die 1. Seitenl" << Umlaut::ae << "nge: ";
				cin >> x;
				cout << "Die H" << Umlaut::oe << "he des Prismas: ";
				cin >> h;
				result = V.WVolumen(x, h);
				cout << "Das Volumen betr" << Umlaut::ae << "gt: " << result << "cm" << kubi << endl;
				system("pause");
				x = 0;
				h = 0;
				result = 0;
				break;
				case 2:
				cout << "Die 1. Seitenl" << Umlaut::ae << "nge: ";
				cin >> x;
				cout << "Die H" << Umlaut::oe << "he des Dreiecks: ";
				cin >> ha;
				cout << "Die H" << Umlaut::oe << "he des Prismas: ";
				cin >> h;
				result = V.DVolumen(x, ha, h);
				cout << "Das Volumen betr" << Umlaut::ae << "gt: " << result << "cm" << kubi << endl;
				system("pause");
				x = 0;
				ha = 0;
				h = 0;
				result = 0;
				break;
				case 3:
				cout << "Die 1. Seitenl" << Umlaut::ae << "nge: ";
				cin >> x;
				cout << "Die 2. Seitenl" << Umlaut::ae << "nge: ";
				cin >> y;
				cout << "Die H" << Umlaut::oe << "he des Prismas: ";
				cin >> h;
				result = V.RVolumen(x, y, h);
				cout << "Das Volumen betr" << Umlaut::ae << "gt: " << result << "cm" << kubi << endl;
				system("pause");
				x = 0;
				y = 0;
				h = 0;
				result = 0;
				break;
				case 4:
				cout << "Die 1. Seitenl" << Umlaut::ae << "nge: ";
				cin >> x;
				cout << "Die H" << Umlaut::oe << "he des Parallelogramms: ";
				cin >> ha;
				cout << "Die H" << Umlaut::oe << "he des Prismas: ";
				cin >> h;
				result = V.PVolumen(x, ha, h);
				cout << "Das Volumen betr" << Umlaut::ae << "gt: " << result << "cm" << kubi << endl;
				system("pause");
				x = 0;
				ha = 0;
				h = 0;
				result = 0;
				break;
				case 5:
				cout << "Die untere Seitenl" << Umlaut::ae << "nge: ";
				cin >> x;
				cout << "Die obere Seitenl" << Umlaut::ae << "nge: ";
				cin >> y;
				cout << "Die H" << Umlaut::oe << "he des Trapez: ";
				cin >> ha;
				cout << "Die H" << Umlaut::oe << "he des Prismas: ";
				cin >> h;
				result = V.TVolumen(x, y, ha, h);
				cout << "Das Volumen betr" << Umlaut::ae << "gt: " << result << "cm" << kubi << endl;
				system("pause");
				x = 0;
				y = 0;
				ha = 0;
				h = 0;
				result = 0;
				break;
				case 6:
				break;
				default:
				break;
			}
		}

	private:
		Bann_Geo B;
		int option;
		char hoch = 0xFD;
		char kubi = 0xFC;
		float h;
		float ha;
		float x;
		float y;
		float z;
		float a;
		float result;	
};