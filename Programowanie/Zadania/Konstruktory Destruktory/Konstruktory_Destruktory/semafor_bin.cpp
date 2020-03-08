#include <iostream>
#include "semafor_bin.h"

using namespace std;

Semafor_bin::Semafor_bin(bool wartosc){
    state=wartosc;
}
Semafor_bin::~Semafor_bin(){
    state=0;
    cout << "Destruktor klasy semafor_bin" << endl;
}
void Semafor_bin::rezerwuj(){
    state=1;
}
void Semafor_bin::zwolnij(){
    state=0;
}
bool Semafor_bin::stan(){
    return state;
}
