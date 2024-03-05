#include <iostream>;
#include <string>;
#include <ctime>;
#include <fstream>;
#include <vector>;

using namespace std;

int main()
{

	int f = 10;
	int *mut;	
	int &fi = f; // & jel = hivatkozás ami az f-re mutat
	mut = &f;	//f-re mutat

	cout << "f= " << f << "; fi= " << fi<< "; *mut= " << *mut << endl;

	fi = 20;

	cout << "f= " << f << "; fi= " << fi << "; *mut= " << *mut << endl;

	cout << &f << " " << &fi << " " << mut << " " << &mut <<endl;

	// Vektorok

	vector <int> jegyek(3);
	char bet;
	int szam;
	int i;

	for ( i = 0; i < 3; i++)
	{
		cout << "Adja meg az " << i + 1 << ". tanulo erdemjegyet (1-5): ";
		cin >> jegyek[i];
	}

	cout << " akar meg jegyet felvenni? (y/n)" << endl;
	cin >> bet;
	if (bet=='y')
	{
		do
		{
			cout << "Jegy (1-5): ";
			cin >> szam;
			jegyek.push_back(szam);
			cout << "akar meg egyet? (y/n)" << endl;
			cin >> bet;
			i++;
		} while (bet=='y');
	}

	cout << "Jegyek szama " << jegyek.size() << endl;

	cout << "osztalyzatok: " << endl;

	for ( i = 0; i < jegyek.size(); i++)
	{
		cout << jegyek.at(i) << ", ";
	}

	jegyek.pop_back();








}