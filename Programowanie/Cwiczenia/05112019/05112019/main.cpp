#include <iostream>
#include <stdio.h> //printf , scanf , puts , NULL
#include <stdlib.h> // srand, rand
#include <time.h> // time


using namespace std;

void funckja(){
    int static zmiennaStatyczna=0;
    int zmiennaNormalna=0;
    zmiennaStatyczna++;
    zmiennaNormalna++;
    cout << "Statyczna: " << zmiennaStatyczna << ", Normalna: " << zmiennaNormalna << endl;
}

void wypisz(int n);
void wypisz(double n);
void wypisz(char n);

int main()
{
    funckja();
    funckja();
    funckja();
    funckja();
    funckja();
    funckja();
    funckja();
    funckja();
    funckja();
    char n;
    cin >> n;
    wypisz(n);



    return 0;
}

void wypisz(int n){
    printf("Funkcja typu int: %d",n);
}
void wypisz(double n){
    printf("Funkcja typu double %.2f: ",n);
}
void wypisz(char n){
    printf("Funkcja typu char: %c",n);
}


/*Informacje do zadania 5
 * przy ujemnych wywołanie funkcji(x)
 * zliczenie ile razy funkcja została wywołana
 * funkcja ma zrwócic liczbe dodatnia
 */
