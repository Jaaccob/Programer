#include <iostream>
#include <math.h>
#include <time.h>

using namespace std;

struct Trojkat{
    unsigned int a,b,c;

};
struct Punkt{
    float x,y,z;
};
struct Punkt10{
    int w[10];
};
struct Zespolone{
    double re, im;
};

void obwod(Trojkat x){
    cout << x.a+x.b+x.c;
}
void zad2(Trojkat troj1, Trojkat *troj2){
    troj2->a = troj1.a;
    troj2->b = troj1.b;
    troj2->c = troj1.c;
}
void zad2_1(Trojkat *troj2){
    cout << troj2->a << troj2->b << troj2->c;
}
float zad3_1(Punkt p1, Punkt p2){
    return sqrt((p2.x-p1.x)*(p2.x-p1.x)+(p2.y-p1.y)*(p2.y-p1.y)+(p2.z-p1.z)*(p2.z-p1.z));
}
float zad3_2(Punkt *tab, int n){
    float min = zad3_1(tab[0],tab[1]);
    for(int i=0; i<n; i++){
        for(int j=i+1; j<n; j++){
            if(min > zad3_1(tab[i],tab[j])){
                min = zad3_1(tab[i],tab[j]);
            }
        }
    }
    return min;
}
float zad4_1(Punkt *tab1, Punkt *tab2, int n, int m){
    for(int i=0, j=0; i<n && j<m; i++,j++){
        tab1[i].x=tab2[j].x;
        tab1[i].y=tab2[j].y;
        tab1[i].z=tab2[j].z;
    }
}
float zad6_1(Punkt10 *tab1, Punkt10 *tab2, int n){
    for(int i=0; i<n; i++){
        for(int j=0; j<10; j++){
            tab1[i].w[j]=tab2[i].w[j];        }
    }
    for(int i=0; i<n; i++){
        for(int j=0; j<10; j++){
            cout << tab2[i].w[j] << " ";
        }
        cout << endl;
    }
}
Zespolone *dodaj(Zespolone *zespolona1, Zespolone *zespolona2){

    Zespolone *wskaznik = new Zespolone;
    wskaznik->re=zespolona1->re+zespolona2->re;
    wskaznik->im=zespolona1->im+zespolona2->im;
    return wskaznik;

}
void wyswietlanie(Zespolone *zespolona){

    cout << zespolona->re << "+" << zespolona->im << endl;

}


int main()
{
    cout << "Zadanie 1";
    Trojkat fun;
    fun.a = 3;
    fun.b = 4;
    fun.c = 5;



    cout << "\n\n\nZadanie 2";
    Trojkat troj1, *troj2 = new Trojkat;
    //cin >> troj1.a >> troj1.b >> troj1.c;
    zad2(troj1,troj2);
    zad2_1(troj2);



    cout << "\n\n\nZadanie 3 \n\n";
    srand(time(NULL));
    Punkt *tab = new Punkt [10];
    for(int i=0; i<10; i++){
        tab[i].x = rand()%30+2;
        cout << tab[i].x << " ";
        tab[i].y = rand()%30+2;
        cout << tab[i].y << " ";
        tab[i].z = rand()%30+2;
        cout << tab[i].z << " \n";
    }
    cout << "Najmniejszy wektor wynosi : " << zad3_2(tab,10);

    Punkt10 wymiary;
    int *punkt = new int [10];
    for(int i=0; i<10; i++){

    }
    cout << "Zadanie 10\n\n\n\n";


    Zespolone *liczba1=new Zespolone;
    Zespolone *liczba2=new Zespolone;

     liczba1->re=4.8;
     liczba1->im=0.3;
     liczba2->re=12.5;
     liczba2->im=20.1;



     cout << "Suma liczb: " << endl;
     wyswietlanie((dodaj(liczba1,liczba2)));




    return 0;
}
