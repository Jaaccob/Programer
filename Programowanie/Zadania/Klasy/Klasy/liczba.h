#include <iostream>

using namespace std;

class Liczba{

    int array   ;

public:
    Liczba(int liczba = 0);
    ~Liczba();
    void wczytaj();
    void wypisz();
    void nadaj_w(int liczba);
    int wartosc();
    int abs();
};
