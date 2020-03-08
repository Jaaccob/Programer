#include <iostream>
#include "klasy.h"
#include "trojkat.h"

using namespace std; 

void fun1_11(Trojkat troj1, Trojkat troj2 ){
    if(troj1.pole()>troj2.pole()){
        cout << "Wieksze jest pole pierwszego: " << troj1.pole();
    }
    else {
        cout << "Wieksze jest pole drugiego: " << troj2.pole();
    }
}
void fun1_12(Trojkat *tablica, int n){
    int i,index=0;
    double wiekszy = tablica[0].pole();
    for(i=1; i<n; i++){
        if(tablica[i].pole()>wiekszy){
            wiekszy = tablica[i].pole();
            index=i;
        }
    }
    cout << "Najwiekszym polem jest trojkat: " << index+1 << " o polu " << wiekszy;
}

int main()
{
    cout << "Zadanie 1" << endl;
    //Zadanie 1
    Poczta poczta;
    poczta.wypisz();
    poczta.wczytaj();
    poczta.wypisz();


    cout << endl << endl << "Zadanie 2" << endl;
    //Zadanie 2
    Trojkat troj1;
    Trojkat troj2;
    troj1.load();
    troj2.load();
    fun1_11(troj1,troj2);
    cout << "Podaj ile chcesz miec trojkatow: ";
    int n; cin >> n;
    Trojkat *troj1_12 = new Trojkat [n];
    for(int i=0; i<n; i++){
        cout << "Podaj " << i+1 << " wielkosc trojkata: ";
        troj1_12[i].load();
    }
    fun1_12(troj1_12,n);
    troj1.load();
    troj2.load();
    fun1_11(troj1,troj2);
    return 0;
}
