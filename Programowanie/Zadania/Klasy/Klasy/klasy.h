#include <iostream>

using namespace std;

class Poczta{

    string nadawca;
    string odbiorca;
    string temat;
    string tresc;
public:
    Poczta(string="Brak nadawcy",string="Brak odbiorcy",string="Ogolny",string="Brak tresci");
    ~Poczta();

    void wypisz();
    void wczytaj();
};
