#include <iostream>
#include "identyfikator2.h"

using namespace std;

Identyfikator2::Identyfikator2(){
    identyfikator++;
}
Identyfikator2::~Identyfikator2(){
    identyfikator--;
    cout << "Destruktor klasy Id" << endl;
}
int Identyfikator2::id(){
    return identyfikator;
}
int Identyfikator2::identyfikator=0;
