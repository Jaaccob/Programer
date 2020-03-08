#include <iostream>
#include "Czwarty.h"

using namespace std;

void sedzia(Punkt &pkt, Prostokat &p){
    p.nazwa="Podmiana";

    if((pkt.x>=p.x)&&(pkt.x<=p.x+p.szeroskosc)&&(pkt.y>=p.y)&&(pkt.y<=p.y+p.wysokosc)){
        cout << endl << "Punkt " << pkt.nazwa << " nalezy do prostokata: " << p.nazwa << endl;
    }
    else {
        cout << endl << "Punkt " << pkt.nazwa << " nie nalezy do prostokata: " << p.nazwa << endl;
    }
}


int main()
{
    Punkt pkt1("A",3,17);
    //pkt1.wczytaj();

    Prostokat p1("Prostokat",0,0,6,4);
    //p1.wczytaj();

    sedzia(pkt1, p1);
    p1.wczytaj();


    return 0;
}
