#include <iostream>

using namespace std;

int zadaniedwa(int *wskaznik, int calkowita){
    return calkowita*=*wskaznik;
}
int* zadanietrzy(int *wskaznik){
    *wskaznik*=2;
    return wskaznik;
}
int zadaniecztery(int *wsk, int tab[]){
    int a=tab[0];
    for(int i=0; i<10; i++){
        if(*(wsk+i)>a) a=*(tab+i);
    }
    return a;
}
int* zadaniepiec(int *wsk, int tab[]){
    int a=tab[0],b=0;
    for(int i=0; i<10; i++){
        if(*(tab+i)>a) b=i;
    }
    cout << tab[b] << endl;
    return &tab[b];
}


/*Zadanie 1
int main()
{
    cout << "Czesc, podaj swoja zmienna, a pokaze Ci magie: " << endl;
    int zmienna; cin >> zmienna;
    int *wskaznik = &zmienna;

    cout << "Zmienna wynosi: " << zmienna << endl;
    cout << "Wartosc wskaznika ktory wskazuje na zmienna: " << *wskaznik << endl;
    cout << "Adres pamieci zmiennej: " << wskaznik << endl;

    return 0;
}
*/
/*Zadanie 2
int main(){
    cout << "Czesc, podaj swoja zmienna, a pokaze Ci magie: "; int liczba; cin >> liczba;
    int zmienna=3;
    int *wskzmienna=&zmienna;
    cout << zadaniedwa(wskzmienna,liczba);
    return 0;
}
*/
/*Zadanie 3
int main(){
     cout << "Czesc, podaj swoja zmienna, a pokaze Ci magie: "; int liczba; cin >> liczba;
     int *wskaznik = &liczba;
     cout << zadanietrzy(wskaznik);
    return 0;
}
*/
/*Zadanie 4
int main(){
    int tab[10] = {9,10,11,12,19,14,15,16,37,18};
    int *wsk = &tab[0];
    cout << zadaniecztery(wsk,tab);
}
*/
int main(){
    int tab[10] = {9,10,11,12,19,14,15,16,37,18};
    int *wsk = &tab[0];
    cout << zadaniepiec(wsk,tab) << endl;
    cout << &tab[0] << endl;
    cout << &tab[8] << endl;
    return 0;
}
