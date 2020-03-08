#include <iostream>
#include "klasy.h"

using namespace std;

void Poczta::wypisz(){
    cout << "Nadawca: " << nadawca << endl;
    cout << "Odbiorca: " << odbiorca << endl;
    cout << "Temat: " << temat << endl;
    cout << "Tresc: " << tresc << endl;
}
void Poczta::wczytaj(){
    cout << "Podaj Nadawce: ";
    getline(cin,nadawca);
    cout << "Podaj Odbiorce: ";
    getline(cin,odbiorca);
    cout << "Podaj Temar: ";
    getline(cin,temat);
    cout << "Podaj Tresc: ";
    getline(cin,tresc);
}
Poczta::Poczta(string N, string O, string T, string Tr){
    nadawca=N;
    odbiorca=O;
    temat=T;
    tresc=Tr;
}
Poczta::~Poczta(){
    cout << endl << "To ja, destruktor sie nazywam";
    cout << " kasuje obiekty, slowa przepraszam nie uzywam";

}
