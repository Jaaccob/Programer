#include <iostream>
#include "Czwarty.h"

using namespace std;

Punkt::Punkt(string n, float xx, float yy){
    nazwa=n;
    x=xx;
    y=yy;
}
void Punkt::wczytaj(){
    cout << "Podaj x: "; cin >> x;
    cout << "Podaj y: "; cin >> y;
    cout << "Nazwa punktu: "; cin >> nazwa;
}

Prostokat::Prostokat(string n, float xx, float yy , float s, float w){
    nazwa=n;
    x=xx;
    y=yy;
    szeroskosc=s;
    wysokosc=w;
}
void Prostokat::wczytaj(){
    /*cout << "Podaj x lewego dowolnego naroznika: "; cin >> x;
    cout << "Podaj y lewego dowolnego naroznika: "; cin >> y;
    cout << "Podaj szerokosc: "; cin >> szeroskosc;
    cout << "Podaj wysokosc: "; cin >> wysokosc;
    cout << "Podaj nazwe prostokata: "; cin >> nazwa;*/

    cout << "Nazwa: obiektu: " << nazwa;
}
