#include <iostream>
#include <time.h>
#include <cstdlib>

using namespace std;


int zadaniepierwsze(int *a,int *b){

    if(*a>*b) return *a;

    else return *b;

}
int *zadaniedrugie(int *a,int *b){

    if(*a>*b) return a;

    else return b;

}
void zadanietrzy(int *a,int *b){

    int c;

    c=*b;

    *b=*a;

    *a=c;

    cout << *a << *b;

}
int zadaniecztery(int *a,int *b){
    if(*a>*b){

        return *a-*b;

    }

}
int zadaniepiate(const int *a,const int *b){

    return *a+*b;

}
int zadanieszoste(int i, int *w){

    w=&i;

    return *w;

}
void zadaniesiodme(float i, float *w,float *e){

    *w=(int)i;

    *e=*w-i;

    cout << *w << ", " << *e;

}
void zadaniedziewiate(int ntab,int *w){

    int silnia=1;

    for(int i=1; i<=ntab; i++){

        silnia = silnia *i;

        *(w+i-1)=silnia;

    }

}
void zadaniedziesiate(int &a , int &b){

    int c=a;

    a=b;

    b=c;

}
void zadaniejedenaste(int &a, int *w){

    int c=a;

    a=*w;

    *w=c;

}
void zadaniedwunaste(const int *a, int *const w){

    *w=*a;

}
void zadanietrzynaste(const int *a, int *b ){

    *b=*a;

}
/*Zadanie 1

int main (){

    int a,b;

    int *c,*d;

    cin >> a >> b;


    c=&a;

    d=&b;


    cout << zadaniepierwsze(c,d);


    return 0;

}

*/

/*Zadanie 2

int main(){

        int a,b;

        int *c,*d;

        cin >> a >> b;


        c=&a;

        d=&b;


        cout << zadaniedrugie(c,d);


        return 0;

}

*/

/*Zadanie 3

int main(){

    int a,b;

    int *c,*d;

    cin >> a >> b;


    c=&a;

    d=&b;


    zadanietrzy(c,d);


    return 0;

}

*/

/*Zadanie 4

int main(){

    int a,b;

    int *c,*d;

    cin >> a >> b;


    c=&a;

    d=&b;


    cout << zadaniecztery(c,d);


    return 0;

}

*/

/*Zadanie 5

int main(){

    const int a=3,b=6;

    const int *c,*d;


    c=&a;

    d=&b;


    cout << zadaniepiate(c,d);


    return 0;

}

*/

/*Zadanie 6

int main(){

    int i=10;

    int *w;


    cout << zadanieszoste(i,w);


    return 0;

}

*/

/*Zadanie 7 - dokoncz

int main(){

    float i=10.043;

    float *w,*e;


    zadaniesiodme(i,w,e);


    return 0;

}

*/

//Zadanie 8 - zrobiłem na tablicy

/*Zadanie 9

int main(){

    int i=10,tab[i];

    int *w;

    w=tab;

    zadaniedziewiate(i,w);

    for(int j=0; j<i; j++){

        cout << tab[j] << ",";

    }


    return 0;

}

*/

/*Zadanie 10

int main(){

    int i=10;

    int *w;

    w=tab;

    zadaniedziesiate(i,w);


    return 0;

}

*/

/*Zadanie 11

int main(){

    int i=10;

    int *w;

    zadaniejedenaste(i,w);


    return 0;

}

*/

/*Zadanie 12 - sprawdz

int main(){

    const int i=10;

    const int *w;

    zadaniedwunaste(i,w);


    return 0;

}

*/

/*Zadanie 13*/
int main()
{
    int wybor=1;
    while (wybor!=0) {
        cout << "                                               Okienko aplikacji" << endl;
        cout << "-----------------------------------------------------------------------------------------------------------------------" << endl;
        cout << "1.Napisz funkcje otrzymujaca jako argumenty wskazniki do dwochzmiennych typu int, ktora zwraca jako wartosc mniejsza z " << endl;
        cout << "liczb wskazywanych przez argumenty"<< endl;
        cout << "2.Napisz funkcje otrzymujaca jako argumenty wskazniki do dwoch zmiennych typu int, ktora zwraca jako wartosc wskaznik " << endl;
        cout << "na zmienna przechowujaca mniejsza z liczb wskazywanych przez argumenty" << endl;
        cout << "3.Otrzymujaca jako argumenty wskazniki do dwoch zmiennych typu int, która zamienia ze soba wartosci wskazywanych \n"
                " zmiennych." << endl;
        cout << "4.Napisz funkcje otrzymujaca jako argumenty wskazniki do dwoch zmiennych typu int, ktora zamienia ze soba wartosci \n"
                "wskazywanych zmiennych tylko wtedy gdy wskazywana przez drugi argument zmienna jest mniejsza od zmiennej wskazywanej \n"
                "przez pierwszy argument." << endl;
        cout << "5.Napisz funkcje, ktorej argumentami są dwa wskazniki do stalych typu int zas zwracana wartoscia jest suma wartosci \n"
                "zmiennych wskazywanych przez argumenty." << endl;
        cout << "6.Napisz funkcje, ktorej argumentami są i typu int oraz w wskaznik do int, ktora przepisuje wartość i do zmiennej \n"
                "wskazywanej przez w." << endl;
        cout << "7.Napisz funkcje ktora przyjmuje liczbe typu float oraz dwa wskazniki. Funkcja powinna do pierwszego wskaznika \n"
                "przypisac wartosc całkowita liczby natomiast do drugiego wskaznika czesc dziesietna liczby." << endl;
        cout << "Napisz funkcje ktora przyjmuje tablice, liczbę elementow tablicy, wskaznik max i wskaznik min. Funkcja powinna \n"
                "przypisac maksymalny element tablicy do wskaznika max oraz minimalny element do wskaznika min." << endl;
        cout << "9.Napisz funkcję która przyjmuje wskaźnik na pierwszy element tablicy i liczbę elementów a następnie przypisuje do \n"
                "tablicy kolejno silnie. Przykład dla tablicy 5-elementowej:1 2 6 24120" << endl;
        cout << "10.Napisz funkcję otrzymującą jako argumenty referencje do dwóch zmiennych typu int, która zamienia ze sobą wartości \n"
                "zmiennych, do których referencje dostaliśmy w argumentach." << endl;
        cout << "11.Napisz funkcję otrzymującą dwa argumenty referencję a oraz wskaźnik b do zmiennych typu int, która zamienia ze sobą\n"
                " wartości zmienny" << endl;
        cout << "12.Napisz funkcję, która dostaje dwa argumenty: wskaźnik na stałą typu int i wskaźnik na zmienną typu int, i przepisuje \n"
                "zawartość stałej wskazywanej przez pierwszy argument do zmiennej wskazywanej przez drugi argument." << endl;
        cout << "13.Napisz funkcję, która dostaje dwa argumenty: wskaźnik na stałą typu int i stały wskaźnik na zmienną typu int. \n"
                "I przepisuje zawartość stałej wskazywanej przezpierwszy argument do zmiennej wskazywanej przez drugi argument" << endl;
        cout << "\n\n0. Wyjdz z konsoli" << endl;
        cout << "-----------------------------------------------------------------------------------------------------------------------" << endl;
        cout << "\n\n Ktore zadanie chcesz zebym rozwiazal?? Wybierz numer zadania: ";
        cin >> wybor;
        /*switch(wybor){
            case 1: {zadaniepierwsze(); break;}
            case 2: {zadaniedrugie(); break;}
            case 3: {zadanietrzecie(); break;}
            case 4: {zadanieczwarte(); break;}
            case 5: {zadaniepiate(); break;}
            case 6: {zadanieszuste(); break;}
        }*/
    }
system("cls");


    return 0;
}
