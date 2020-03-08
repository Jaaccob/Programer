#include <iostream>
#include "osoba.h"

using namespace std;

Osoba::Osoba(string imi,string nazw){
    imie=imi;
    nazwisko=nazw;
}
Osoba::~Osoba(){
    cout << "Destruktor klasy Osoba" << endl;
}
void Osoba::wczytaj(){
    getline(cin,imie);
    getline(cin,nazwisko);
}
void Osoba::wypisz(){
    cout << "Twoje imie: " << imie << endl;
    cout << "Twoje nazwisko: " << nazwisko << endl;
}
