#include <iostream>
#include "Gra.h"

using namespace std;

Gra::Gra(int a){
    a=a;
    cout << "Konstruktor typu int" << endl;
}
Gra::Gra(double b){
    b=b;
    cout << "Konstruktor typu double" << endl;
}
Gra::Gra(string c){
    c=c;
    cout << "Konstruktor typu string" << endl;
}
