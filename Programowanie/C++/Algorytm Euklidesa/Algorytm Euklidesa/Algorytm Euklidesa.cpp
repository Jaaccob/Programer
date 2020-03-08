#include <iostream>


using namespace std;

int Euklides(int n, int m) {
	while (n != m) {
		if (n > m) n -= m;
		else  m -= n;
	}
	return n;
}
long int silniaalgo(int silnia) {
	if (silnia == 1) return 1;
	else return silnia * silniaalgo(silnia - 1);
}

int funwypiszlicz(int a) {
	if (a < 0) {
		return 1;
	}
	else cout << a << ",";
		funwypiszlicz(a-1);
}

using namespace std;

int main()
{	
	//Zadanie 8
    /*
	cout << "Podaj dwie liczby dodatnie liczby n i m: "; int n, m; cin >> n >> m;
	cout << Euklides(n,m) << endl;
	*/
	
	//Zadanie 9
	/*
	cout << "Podaj silnie jaka chcesz obliczyc: "; int silnia; cin >> silnia;
	cout << "Twoja silnia wynosi: " << silniaalgo(silnia);
	*/

	//Zadanie 10
	cout << "Podaj liczbe, ktora mam wypisac: "; int a; cin >> a;
	cout << "Twoje liczby to: " << endl;
	funwypiszlicz(a);
}

