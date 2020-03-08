#include <iostream>
#include "liczba.h"

using namespace std;

Liczba::Liczba(int liczba){
    array=liczba;
}
Liczba::~Liczba(){
    cout << "Destruktor klasy Liczba" << endl;
}
void Liczba::wczytaj(){
    cout << "Podaj wartosc swojej liczby: ";
    cin >> array;
}
void Liczba::wypisz(){
    cout << "Twoja liczba to: " << array << endl;
}
void Liczba::nadaj_w(int liczba){
    array=liczba;
}
int Liczba::wartosc(){
    return  array;
}
int Liczba::abs(){
    if(array<0){
        return (-1)*array;
    }
    else {
        return array;
    }
}
