#include <iostream>

using namespace std;

class Osoba{
    string imie, nazwisko;
public:
    Osoba(string imi,string nazw);
    ~Osoba();
    void wczytaj();
    void wypisz();
};
