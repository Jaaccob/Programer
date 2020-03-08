#include <iostream>
#include <math.h>

using namespace std;

class Punkt{
    float x,y;
    string nazwa;

public:

    void wyswietl(){
        cout << nazwa << "(" << x << "," << y << ")" << endl;
    }
    Punkt(string n="s", float a=0, float b=0){
        nazwa=n;
        x=a;
        y=b;
    }
};

class Kolo:public Punkt{
protected:
    float r; //radius
    string nazwa;

public:
    void wyswietl(){
        cout << "Kolo o nazwie: " << nazwa << endl;
        cout << "Srodek kola: " << endl;
        Punkt::wyswietl();
        cout << "Progmien: " << r << endl;
        cout << "Pole kola: " << M_PI*r*r << endl;
    }

    //Pi to stosunnek obwodu koła do jego średnicy

    Kolo(string nk = "Kolko", string np = "S", float a=0, float b=0, float pr=1)
        :Punkt(np,a,b)
    {
        nazwa = nk;
        r= pr;
    }
};
class Kula:public Kolo{
    string nazwak;

public:
    void wyswietl(){
        Kolo::wyswietl();
        cout << "Objetosc kulu to: " << 4*(M_PI*r*r*r)/3 << endl;
    }
    Kula(string nku = "Kula", string np = "S" , float a=0, float b=0, float pr=1)
        :Kolo(nku,np,a,b,pr)
    {
        nazwak=nku;
    }
};




int main()
{
    Kolo k1;
    k1.wyswietl();
    Kula ku1;
    ku1.wyswietl();
    return 0;
}
