#include <iostream>
#include <stdlib.h>
#include <time.h>
#include <windows.h>

using namespace std;
static int wykonan=0;

void grajeden(){
    cout << "Witaj! Wylosowalem liczbe 1...10" << endl;
    srand(time(NULL));

    int liczba=rand()%9+1;
    int strzal;
    while(strzal!=liczba){
        cout << "Zgadnij jaka to liczba" << endl;
        cin >> strzal;

        if(strzal==liczba){
            cout << "Zgadles" << endl;
        }
        else if(strzal <= liczba){
            cout << "Wylosowana liczba jest wieksza" << endl;
        }
        else if(strzal >= liczba){
            cout << "Wylosowana liczba jest mniejsza" << endl;
        }
    }
    system("pause");
}
void gradwa(){
    srand(time(NULL));
    cout << "Podaj wielkosc tablicy: "; int wielkosc=0; cin >> wielkosc;
    int tab[wielkosc];
    for(int i=0; i<wielkosc; i++){
        int liczba=rand()%9+1;
        tab[i]=liczba;
    }
    for(int i=0; i<wielkosc; i++){
        cout << tab[i] << ",";
    }
    system("pause");
}
void gratrzy(){
    srand(time(NULL));
    cout << "Podaj wielkosc tablicy: "; int wielkosc=0; cin >> wielkosc;
    int poczatek=0,koniec=0;
    cout << "Podaj swoj przedzial(poczatek przedzialu musi byc mniejszy niz koniec)" << endl;
    cout << "Podaj poczatek "; cin >> poczatek; cout << "i koniec przedzialu"; cin >> koniec;
    long int tab[wielkosc];
    int rozmiar=koniec-poczatek;
    for(int i=0; i<wielkosc; i++){
        int liczba=rand()%(rozmiar-1)+poczatek;
        tab[i]=liczba;
    }
    for(int i=0; i<10; i++){
        cout << tab[i] << ",";
    }
    system("pause");
}
void wypisz(int n);
void wypisz(double n);
void wypisz(char n);
void gracztery(){
    char m;
    cin >> m;
    wypisz(m);
}
int zmianaznaku(int n){
    n=n*(-1);
    wykonan++;
    return n;
}
void grapiec(){
    cout << "Witaj! Podaj 10 liczb, a ja zamienie je jesli zajdzie taka potrzeba. Do dziela"<< endl;
    for(int i=0; i<10; i++){
        cout << "Podaj " << i+1 << " znak: ";
        int znak=0;

        cin >> znak;

        if(znak<0) {
             cout << zmianaznaku(znak) << endl;
        }
        else cout << znak << endl;
    }
    cout << "Moj program musial " << wykonan << " razy zmienic twoja liczbe" << endl;
    system("pause");
}
void gener_tab(int n){
    int tab[n];
    srand(time(NULL));
    for(int i=0; i<n; i++){
        int liczba=rand()%100+1;
        tab[i]=liczba;
    }
    for(int i=0; i<n; i++){
        cout << tab[i] << ", ";
    }
    cout <<"\n\n";

    for(int i=0; i<n; i++){
        tab[i-1]=tab[i];
    }
    for(int i=-1; i<n; i++){
        cout << tab[i] << ", ";
    }
}
void graszesc(){
    cout << "Witaj! Powiedz jak duza chcesz miec tablice ";
    int n;
    cin >> n;
    gener_tab(n);
    system("pause");
}

int main()
{
    int wybor=0;
    while(wybor!=7){
        cout << "|---------------------------------|" << endl;
        cout << "|Witaj. To gry ktore mozesz wybrac|" << endl;
        cout << "|1. Losowanie liczb               |" << endl;
        cout << "|2. Uzupelnianie tabeli           |" << endl;
        cout << "|3. Wypisanie tabeli              |" << endl;
        cout << "|4. Przeciazenia                  |" << endl;
        cout << "|5. Zamiana znaku                 |" << endl;
        cout << "|6. Tablica                       |" << endl;
        cout << "|7. Koniec programu               |" << endl;
        cout << "|---------------------------------|" << endl;
        cout << "W ktora chcesz zagrac :          ";
        cin >> wybor;
        if(wybor==1) grajeden();
        if(wybor==2) gradwa();
        if(wybor==3) gratrzy();
        if(wybor==4) gracztery();
        if(wybor==5) grapiec();
        if(wybor==6) graszesc();
        system("cls");
    }
    return 0;
}
void wypisz(int n){
    printf("Funkcja typu int: %d",n);
    system("pause");
}
void wypisz(double n){
    printf("Funkcja typu double %.2f: ",n);
    system("pause");
}
void wypisz(char n){
    printf("Funkcja typu char: %c",n);
    system("pause");
}
