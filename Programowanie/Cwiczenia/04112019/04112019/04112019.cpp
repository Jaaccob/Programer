#include <iostream>
#include <math.h>

using namespace std;

int zad1(int n, int array[5]) {
	for (int i = 0; i < n; i++) {
		array[i] = 0;
	}
	return 0;
}

int zad2(int n, array[5]) {
	for (int i=0; i<n; i++) {
		array[i] = 2*array[i];
	}
	return 0;
}

int zad3(int n, array[5]) {
	int suma = 0;
	for (int i = 0; i < n; i++) {
		suma = suma + array[i];
	}
	return suma;
}

int zad4(int n, array[5]) {
	int iloczyn = 0;
	for (int i = 0; i < n; i++) {
		iloczyn = iloczyn * array[i];
	}
	return iloczyn;
}

int zad5(int n, array[5]) {
	int parzysty = 0;
	for (int i = 0; i < n; i++) {
		if(n%2==0) parzysty = parzysty + array[i];
	}
	return parzysty;
}
float zad6(int n, array[5]) {
	int srednia = 0;
	for (int i = 0; i < n; i++) {
		srednia = srednia + array[i];
	}
	return srednia/(float)n;
}
float zad7(int n, array[5]) { // Zle - popraw
	int iloczyn = 0;
	for (int i = 0; i < n; i++) {
		iloczyn = iloczyn * array[i];
	}
	return sqrt(iloczyn);
}


int main() {
	//Zadanie 1
	/*cout << "Podaj swoje n: " << endl; int n; cin >> n;
	int array[] = {1,2,3,4,5};
	zad1(n, array[]);*/
	
	//Zadanie 2
	/*cout << "Podaj swoje n: " << endl; int n; cin >> n;
	int array[] = { 1,2,3,4,5 };
	zad2(n, array[]);*/

	//Zadanie 3
	/*cout << "Podaj swoje n: " << endl; int n; cin >> n;
	int array[] = {1,2,3,4,5};
	zad3(n, array[]);*/

	//Zadanie 4
	/*cout << "Podaj swoje n: " << endl; int n; cin >> n;
	int array[] = { 1,2,3,4,5 };
	zad4(n, array[]);*/

	//Zadanie 5
	/*cout << "Podaj swoje n: " << endl; int n; cin >> n;
	int array[] = { 1,2,3,4,5 };
	zad5(n, array[]);*/

	//Zadanie 6
	/*cout << "Podaj swoje n: " << endl; int n; cin >> n;
	int array[] = { 1,2,3,4,5 };
	zad6(n, array[]);*/

	//Zadanie 7
	/*cout << "Podaj swoje n: " << endl; int n; cin >> n;
	int array[5] = { 1,2,3,4,5 };
	cout << zad7(n, array[5]);*/

	//Zadanie 10



	return 0;
}