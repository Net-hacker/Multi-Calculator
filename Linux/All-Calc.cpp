//MyFiles
#include "Geometrie.h"
#include "Mathe.h"
#include "Potenzen.h"
#include "Prozent.h"
#include "Zinsen.h"
#include "Technik.h"
#include "Trigeometrie.h"

#include <iostream>
#include <stdio.h>
using namespace std;

class StartMenu
{
	public:
		void Mathe()
		{
			Chooser_Mathe Ch;

			do {
				Banner_Mathe();
				cout << "Option: ";
				cin >> option;

				switch (option) {
					case 1:
					Ch.Add();
					system("clear");
					break;
					case 2:
					Ch.Sub();
					system("clear");
					break;
					case 3:
					Ch.Multi();
					system("clear");
					break;
					case 4:
					Ch.Div();
					system("clear");
					break;
					case 5:
					break;
					default:
					system("clear");
					break;
				}
			} while (option != 5);
		}
		void Geometrie()
		{
			Chooser_Geo Ch;

			do {
				Banner_Geo();
				cout << "Option: ";
				cin >> option;

				switch (option) {
					case 1:
					system("clear");
					Ch.Fleache();
					system("clear");
					break;
					case 2:
					system("clear");
					Ch.Umfang();
					system("clear");
					break;
					case 3:
					system("clear");
					Ch.Oberflaechen();
					system("clear");
					break;
					case 4:
					system("clear");
					Ch.Volumen();
					system("clear");
					break;
					default:
					system("clear");
					break;
				}
			} while (option != 5);
		}
		void Potenz()
		{
			Chooser_Pot Ch;

			do {
				Banner_Potenz();
				cout << "Option: ";
				cin >> option;

				switch (option) {
					case 1:
					Ch.Quack();
					system("clear");
					break;
					case 2:
					Ch.WTen();
					system("clear");
					break;
					case 3:
					Ch.QWurzel();
					system("clear");
					break;
					case 4:
					system("clear");
					Ch.WAdd();
					system("clear");
					break;
					case 5:
					Ch.KWurzel();
					system("clear");
					break;
					case 6:
					Ch.NWurzel();
					system("clear");
					break;
					case 7:
					break;
					default:
					break;
				}
			} while (option != 7);
		}
		void Prozent()
		{
			Chooser_Prozente Ch;

			do {
				Banner_Prozent();
				cout << "Option: ";
				cin >> option;

				switch (option) {
					case 1:
					Ch.ProW();
					system("clear");
					break;
					case 2:
					Ch.G();
					system("clear");
					break;
					case 3:
					Ch.PP();
					system("clear");
					break;
					case 4:
					break;
					default:
					break;
				}
			} while (option != 4);
		}
		void Zinsen()
		{
			Chooser_Zinsen Ch;

			do {
				Banner_Zinsen();
				cout << "Option: ";
				cin >> option;

				switch (option) {
					case 1:
					system("clear");
					Ch.ZinsR();
					system("clear");
					break;
					case 2:
					Ch.Tagzinsen();
					system("clear");
					break;
					case 3:
					Ch.ZZ();
					system("clear");
					break;
					default:
					break;
				}
			} while (option != 4);
		}
	void Tech()
	{
		Chooser_Tech Ch;

		do {
			Banner_Technik();
			cout << "Option: ";
			cin >> option;

			switch (option) {
				case 1:
				system("clear");
				Ch.Ohm();
				system("clear");
				default:
				break;
			}
		} while (option != 2);
	}
	void Tri()
	{
		Chooser_Tri Ch;

		do {
			Banner_Trigeometrie();
			cout << "Option: ";
			cin >> option;

			switch (option) {
				case 1:
				system("clear");
				Ch.TGeo();
				system("clear");
				break;
				case 2:
				system("clear");
				Ch.Wink();
				system("clear");
				break;
				default:
				break;
			}
		} while (option != 3);
	}
	private:
		int option;

		void Banner_Mathe()
		{
			cout << "Mathe" << endl;
			cout << "---------" << endl;
			cout << "1. Addieren" << endl;
			cout << "2. Subtrahieren" << endl;
			cout << "3. Multiplizieren" << endl;
			cout << "4. Dividieren" << endl;
			cout << "5. Back" << endl;
		}

		void Banner_Geo()
		{
			cout << "Geometrie" << endl;
			cout << "-------------------" << endl;
			puts("1. Flächeninhalt");
			cout << "2. Umfang" << endl;
			puts("3. Oberflächeninhalt");
			cout << "4. Volumen" << endl;
			cout << "5. Back" << endl;
		}
		void Banner_Potenz()
		{
			cout << "Potenzen und Wurzeln" << endl;
			cout << "--------------------------" << endl;
			cout << "1. Quadrieren" << endl;
			cout << "2. Zehnerpotenz (wissenschaftlich)" << endl;
			cout << "3. Quadratwurzel" << endl;
			cout << "4. Rechnen mit Quadratwurzeln" << endl;
			cout << "5. Kubikwurzel" << endl;
			cout << "6. N-Tewurzel" << endl;
			cout << "7. Back" << endl;
		}
		void Banner_Prozent()
		{
			cout << "Prozent" << endl;
			cout << "------------------" << endl;
			cout << "1. Prozentwert" << endl;
			cout << "2. Grundwert" << endl;
			cout << "3. Prozentzahl" << endl;
			cout << "4. Back" << endl;
		}
		void Banner_Zinsen()
		{
			cout << "Zinsrechnung" << endl;
			cout << "------------------" << endl;
			cout << "1. Zinsen" << endl;
			cout << "2. Tageszinsen" << endl;
			cout << "3. Zinseszinsen" << endl;
			cout << "4. Back" << endl;
		}
		void Banner_Technik()
		{
			cout << "Technische Rechnungen" << endl;
			cout << "-----------------------" << endl;
			cout << "1. Ohmesche Gesetz" << endl;
			cout << "2. Back" << endl;
		}
		void Banner_Trigeometrie()
		{
			cout << "Trigeometrie" << endl;
			cout << "-------------" << endl;
			cout << "1. Seitenberechnung" << endl;
			cout << "2. Winkelberechnung" << endl;
			cout << "3. Back" << endl;
		}
		/*void Banner_Funktionen()
		{

		}*/
};

void Banner()
{
	cout << "Multi-Calculator" << endl;
	cout << "-------------------" << endl;
	cout << "1. Mathe" << endl;
	cout << "2. Geometrie" << endl;
	cout << "3. Potenzen" << endl;
	cout << "4. Prozent" << endl;
	cout << "5. Zinsrechnung" << endl;
	cout << "6. Technische Rechnungen" << endl;
	cout << "7. Trigeometrie" << endl;
	cout << "8. Exit" << endl;
}

int main()
{
	int option;

	system("clear");
	do {
		Banner();
		cout << "Option: ";
		cin >> option;
		StartMenu St;

		switch (option) {
			case 1:
			system("clear");
			St.Mathe();
			system("clear");
			break;
			case 2:
			system("clear");
			St.Geometrie();
			system("clear");
			break;
			case 3:
			system("clear");
			St.Potenz();
			system("clear");
			break;
			case 4:
			system("clear");
			St.Prozent();
			system("clear");
			break;
			case 5:
			system("clear");
			St.Zinsen();
			system("clear");
			break;
			case 6:
			system("clear");
			St.Tech();
			system("clear");
			break;
			case 7:
			system("clear");
			St.Tri();
			system("clear");
			default:
			break;
		}
	} while (option != 8);
	system("clear");
	return 0;
}
