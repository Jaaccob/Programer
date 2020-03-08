#include <iostream>

using namespace std;


class Zwierze{

public:

    //Atrybuty
    string gatunek;
    string imie;
    int wiek;
    //Metody
    void  dodaj_zwierze(){
        cout << "DODAWANIE NOWEGO ZWIERZECIA DO BAZY: " << endl;
        cout << "Podaj gatunek: ";
        cin >> gatunek;
        cout << "Podaj imie ";
        cin >> imie;
        cout << "Podaj wiek: ";
        cin >> wiek;
    }
    void daj_glos(){
        if(gatunek=="kot") cout << imie << " lat " << wiek << ": Miau!";
        else if(gatunek=="koza") cout << imie << " lat " << wiek << ": Beee!";
        else if(gatunek=="krowa") cout << imie << " lat " << wiek << ": Muuu!";
        else cout << "Nieznany gatunek! Moze jakies UFO ??";
    }

};
class Samochod{
public:
    string marka;
    string model;
    int rocznik;
    long int przebieg;

    void wczytaj(){
        cout << "DODAWANIE NOWEGO SAMOCHODU DO BAZY: " << endl;
        cout << "Podaj marke: "; cin >> marka;
        cout << "Podaj model: "; cin >> model;
        cout << "Podaj rocznik: "; cin >> rocznik;
        cout << "Podaj przebieg: "; cin >> przebieg;
    }
    void wypisz(){
        if(marka=="bmw") cout << model << " z roku: " << rocznik << " i z przebiegiem: " << przebieg;
        else if(marka == "skoda" ) cout << model << " z roku: " << rocznik << " i z przebiegiem: " << przebieg;
        else if(marka == "volcwagen") cout << model << " z roku: " << rocznik << " i z przebiegiem: " << przebieg;
        else cout << "Nie znana marka" << endl;
    }
};

int main()
{
    Zwierze z1;

    z1.dodaj_zwierze();
    z1.daj_glos();

    Zwierze z2;

    Samochod s1;

    s1.wczytaj();
    s1.wypisz();
    return 0;
}
