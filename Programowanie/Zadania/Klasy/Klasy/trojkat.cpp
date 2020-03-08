#include <iostream>
#include "trojkat.h"

using namespace std;

Trojkat::Trojkat(double podst, double h){
    podstawa=podst;
    wysokosc=h;
}
Trojkat::~Trojkat(){
    cout << endl << "Destruktor :D klasy Trojkat" << endl;
}
void Trojkat::load(){
    cout << "Podaj podstawe: ";
    cin >> podstawa;
    cout << "Podaj wysokosc: ";
    cin >> wysokosc;
}
void Trojkat::show(){
    cout << "Twoja podstawa: " << podstawa << endl;
    cout << "Twoja wysokosc: " << wysokosc << endl;
}
double Trojkat::pole(){
    return (podstawa*wysokosc)/2;
}
