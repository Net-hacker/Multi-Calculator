//MyFiles
#include "Geometrie.h"
#include "Mathe.h"
#include "Potenzen.h"
#include "Prozent.h"
#include "Zinsen.h"
#include "Technik.h"

#include <iostream>
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
					system("cls");
					break;
					case 2:
					Ch.Sub();
					system("cls");
					break;
					case 3:
					Ch.Multi();
					system("cls");
					break;
					case 4:
					Ch.Div();
					system("cls");
					break;
					case 5:
					break;
					default:
					system("cls");
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
					system("cls");
					Ch.Fleache();
					system("cls");
					break;
					case 2:
					system("cls");
					Ch.Umfang();
					system("cls");
					break;
					case 3:
					system("cls");
					Ch.Oberflaechen();
					system("cls");
					break;
					case 4:
					system("cls");
					Ch.Volumen();
					system("cls");
					break;
					default:
					system("cls");
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
					system("cls");
					break;
					case 2:
					Ch.WTen();
					system("cls");
					break;
					case 3:
					Ch.QWurzel();
					system("cls");
					break;
					case 4:
					system("cls");
					Ch.WAdd();
					system("cls");
					break;
					case 5:
					break;
					default:
					system("cls");
					break;
				}
			} while (option != 5);
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
					system("cls");
					break;
					case 2:
					Ch.G();
					system("cls");
					break;
					case 3:
					Ch.PP();
					system("cls");
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
					system("cls");
					Ch.ZinsR();
					system("cls");
					break;
					case 2:
					Ch.Tagzinsen();
					system("cls");
					break;
					case 3:
					Ch.ZZ();
					system("cls");
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
				system("cls");
				Ch.Ohm();
				system("cls");
				default:
				break;
			}
		} while (option != 2);
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
			cout << "1. Fl"<< Umlaut::ae << "cheninhalt" << endl;
			cout << "2. Umfang" << endl;
			cout << "3. Oberfl" << Umlaut::ae << "cheninhalt" << endl;
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
			cout << "5. Back" << endl;
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
	cout << "7. Exit" << endl;
}

int main()
{
	int option;

	system("cls");
	do {
		Banner();
		cout << "Option: ";
		cin >> option;
		StartMenu St;

		switch (option) {
			case 1:
			system("cls");
			St.Mathe();
			system("cls");
			break;
			case 2:
			system("cls");
			St.Geometrie();
			system("cls");
			break;
			case 3:
			system("cls");
			St.Potenz();
			system("cls");
			break;
			case 4:
			system("cls");
			St.Prozent();
			system("cls");
			break;
			case 5:
			system("cls");
			St.Zinsen();
			system("cls");
			break;
			case 6:
			system("cls");
			St.Tech();
			system("cls");
			break;
			default:
			break;
		}
	} while (option != 7);

	return 0;
}
