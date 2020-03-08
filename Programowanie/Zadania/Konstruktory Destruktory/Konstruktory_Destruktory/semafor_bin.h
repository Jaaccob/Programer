#include <iostream>

using namespace std;

class Semafor_bin{
    bool state;
public:
    Semafor_bin(bool wartosc = 0);
    ~Semafor_bin();
    void rezerwuj();
    void zwolnij();
    bool stan();
};
