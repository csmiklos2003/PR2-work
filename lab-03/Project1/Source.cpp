#include <iostream>
#include <iomanip>
#include <ctime>

using namespace std;

double Atlag(int*, int);

void csere(int* x, int* y);

void csere2(int& x, int& y);


void Feltolt(int[], int n);

void Kiir(int[], int);

int Max(int[], int);

int main()
{/*
	int jegy[10] = {1,2,3,23,34,56,23,45,21,23};
	int jegy2[10] = { 10,25,43,24,34,56,23,45,21,23 };

	cout << "\n Szamtani atlag: " << Atlag(jegy, 10)<<endl;
	cout << "\n Szamtani atlag: " << Atlag(jegy2, 10) << endl;

	//�rt�k szerinti �tad�s

	int szam1, szam2;

	cout << "elso szam: " << endl;
	cin >> szam1;
	cout << "masodik szam: " << endl;
	cin >> szam2;

	cout << "Csere elott: " << szam1 << " , " << szam2 << endl;
	csere2(szam1, szam2);
	cout << "Csere utan: " << szam1 << " , " << szam2 << endl;
	*/

	//t�mb felt�lt�se adatokkal

	srand((unsigned)time(NULL));
	int db;

	do
	{
		cout << "Hany tanuloja van a csoportnak?: ";
		cin >> db;

		if (db<1 ||db > 10)
		{
			cout << "Nem jo a szam!(1-10)" << endl;
		}
	} while (db<1 || db >10);

	int* jegy = new int[db];

	Feltolt(jegy, db);
	Kiir(jegy, db);
	cout << "\n A legjobb dolgozat erteke: " << Max(jegy, db) << endl;

	return 0;

}

double Atlag(int* tmb, int db)
{

	double osszeg = 0;
	for ( int i = 0;  i < db;  i++)
	{
		osszeg += tmb[i];
	}

	return osszeg / db;

}

void csere(int *x, int *y)
{
	int seged;
	seged = *x;
	*x = *y;
	*y = seged;
}

void csere2(int& x, int& y)
{
	int seged = x;
	x = y;
	y = seged;
}

void Feltolt(int tmb[], int n)
{

	for (int i = 0; i < n; i++)
	{
		tmb[i] = (rand() % 100) + 1;
	}

}

void Kiir(int tmb[], int n)
{

	cout << "\n A csoport jegyie: \n";
	for (int i = 0; i < n; i++)
	{
		cout << setw(4) << tmb[i];
	}
	cout << endl;

}

int Max(int tmb[], int n)
{
	int max = tmb[0];
	for (int i = 1; i < n; i++)
	{
		if (max< tmb[i])
		{
			max = tmb[i];
		}
	}
	return max;
}
