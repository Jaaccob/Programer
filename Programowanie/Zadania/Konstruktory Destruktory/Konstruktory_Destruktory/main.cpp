#include <iostream>
#include "identyfikator2.h"
#include "semafor_bin.h"
#include "osoba.h"
#include "Monitor.h"
#include "Gra.h"
#include "Student.h"

using namespace std;

int main()
{
    //Zadanie 1
    cout << endl << "Zadanie 1" << endl;
    Identyfikator2 i1;
    cout << i1.id() << endl;
    Identyfikator2 i2;
    cout << i2.id() << endl;

    //Zadanie 2
    cout << endl << "Zadanie 2" << endl;
    Semafor_bin s1;
    cout << "Stan semaforu :" << s1.stan() << endl;
    s1.rezerwuj();
    cout << "Stan semaforu :" << s1.stan() << endl;
    s1.zwolnij();
    cout << "Stan semaforu :" << s1.stan() << endl;

    //Zadanie 3
    cout << endl << "Zadanie 3" << endl;
    //Osoba o1("Jakub", "Kozubek");
    //o1.wypisz();
    //o1.wczytaj();
    //o1.wypisz();

    //Zadanie 4
    cout << endl << "Zadanie 4" << endl;
    //Monitor m1;
    //m1.shadow();

    //Zadanie 5
    cout << endl << "Zadanie 5" << endl;
    Gra g1(4);
    Gra g2(17.5);
    Gra g3("napis") ;

    //Zadanie 1 z Konstruktory i destruktory cz.II
    cout << endl << "Zadanie 1 z Konstruktory i destruktory cz.II" << endl;

    Student stu1;
    stu1.show();

    return 0;
}
