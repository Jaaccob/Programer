#include <iostream>


using namespace std;

enum dostep{R=4,W=2,X=1};

struct Position{
public:
    int array[3][3];
    int *ptr=&array[1][1];
    unsigned int x=1,y=1;
    void (*wsk)(Position*,unsigned int,unsigned int);
};

void zadanie11(){

    int zmienna= R + X;
    if(zmienna&R){
        cout << "Do odczytu" << endl;
    }
    if(zmienna&W){
        cout << "Do zmiany" << endl;
    }
    if(zmienna&X){
        cout << "Do wykonania" << endl;
    }

}
void zadanie13(){

}
void move(Position *element,unsigned int zmienna_x, unsigned int zmienna_y){
    element->x+=zmienna_x;
    if((element->x+=zmienna_x)%3==1){
        element->x=0;
    }
    element->y+=zmienna_y;
    if((element->y+=zmienna_y)%3==1){
        element->y=0;
    }
    //Sprawdz
}

class Samochod{
    string model, marka;
    double pojemnosc;
    static int liczbaSamochodow;
public:
    Samochod(string model, string marka, double pojemnosc):model(model),marka(marka),pojemnosc(pojemnosc){
        liczbaSamochodow++;
    }
    ~Samochod(){
        liczbaSamochodow--;
    }
    void zwieksz(double x){
        pojemnosc+=x;
    }
    static int wypisz(){
        cout << liczbaSamochodow << endl;
    }
    void wypiszl(){
        cout << "Marka: " << marka << endl;
        cout << "Model: " << model << endl;
        cout << "Pojemnosc: " << pojemnosc << endl;
        cout << "Liczba samochodow: " << liczbaSamochodow << endl;
    }

};
int Samochod::liczbaSamochodow=0;

namespace Tuning {
void zwieksz(Samochod* S,double t){
    S->zwieksz(t);
}
}

int main()
{
    Samochod* myCar=new Samochod("Punto","Fiat",12);
    Tuning::zwieksz(myCar,0.1);
    delete myCar;

    Samochod::wypisz();


    Samochod s1("bmw","s1",100);
    s1.wypiszl();
    Samochod s2("bmw","s2",1000);
    s2.wypiszl();

    return 0;
}
