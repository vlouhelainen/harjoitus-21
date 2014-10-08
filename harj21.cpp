/*		Valtteri Louhelainen

Muunna harjoitus 11 niin, etta käytät seuraavia aliohjelmia:

int KysyValinta(void);

-> KysyValinta paluttaa käyttäjän antaman valintanumeron (0-6)

double Summa(float luku1, int luku2);

-> Summa laskee yhteen annetut tiedot ja palauttaa summan pääohjelmaan*/

#include <iostream>
using namespace std;

int KysyValinta(void)
{
	cout << "\nSy\x94t\x84 halutun toimituksen numero\n"
		<< "0. Lopetus\n1. Summa\n2. Erotus\n3. Tulo\n4. Osam\x84\x84r\x84\n5. Jakoj\x84\x84nn\x94s\n"
		<< "6. Sy\x94t\x84 uudet luvut laskemista varten\n";
	int valinta;
	cin >> valinta;
	return valinta;
}

double Summa(float luku1s, int luku2s)
{
	return luku1s+luku2s;
}

void main()
{
	int luku1;
	int luku2;
	int toimitus;
	bool jatka = true;
	bool jatka2 = true;

	cout << "Tervetuloa laskinsovellukseen\n";
	while (jatka)
	{
		cout << "Sy\x94t\x84 kaksi kokonaislukua\n\nAnna luku 1: ";
		cin >> luku1;
		cout << "Anna luku 2: ";
		cin >> luku2;
		jatka2 = true;
		while (jatka && jatka2)
		{
			toimitus = KysyValinta();
			cout << "\n";
			if (toimitus == 0)
				jatka = false;
			if (toimitus == 1)
				cout << luku1 << " + " << luku2 << " = " << Summa(luku1, luku2) << "\n";
			if (toimitus == 2)
				cout << luku1 << " - " << luku2 << " = " << luku1 - luku2 << "\n";
			if (toimitus == 3)
				cout << luku1 << " * " << luku2 << " = " << luku1 * luku2 << "\n";
			if (toimitus == 4)
			{
				if (luku2 == 0)
					cout << "Nollalla ei voi jakaa.";
				else
				{
					cout << luku1 << " / " << luku2 << " = " << (float)luku1 / (float)luku2 << "\n";
				}
			}
			if (toimitus == 5)
				if (luku2 == 0)
					cout << "Nollalla ei voi jakaa.";
				else
					cout << "Lukujen " << luku1 << " ja " << luku2 << " jakoj\x84\x84nn\x94s on " << luku1 - luku1 / luku2 * luku2 << "\n";
			if (toimitus == 6)
			{
				jatka2 = false;
			}
		}
	}
}